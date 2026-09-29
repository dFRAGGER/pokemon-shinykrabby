#!/usr/bin/env python3
"""Read-only source/compiled-script checks; does not emulate the game."""

import json
import re
import subprocess
import tempfile
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
MAPS = (
    "EastLionMountain",
    "EastLionMountain_Faculty_Mining_Cave",
    "EastLionMountain_Faculty_Mining_Cave_B1F",
    "LionsarchCity_Indoor_PeterBasementParty",
    "LionsarchCity_Indoor_VisitorCenter",
    "LionsarchCity_Steel_Factory",
    "LionsarchCity_Steel_Factory_2F",
    "LionsarchCity",
)
FACTORY = "LionsarchCity_Steel_Factory"
FREED = "FLAG_STEEL_FACTORY_FREED_POKEMON"


def read(map_name, extension="pory"):
    return (ROOT / "data/maps" / map_name / f"scripts.{extension}").read_text()


def compiled_block(map_name, symbol):
    source = read(map_name, "inc")
    match = re.search(rf"^{re.escape(symbol)}::?\n(.*?)(?=^\w+::|\Z)",
                      source, re.M | re.S)
    if not match:
        raise AssertionError(f"Missing compiled symbol: {symbol}")
    return match.group(1)


def compiled_text(map_name, symbol):
    return "".join(re.findall(r'\.string "(.*)"', compiled_block(map_name, symbol)))


class LionsarchStoryChecks(unittest.TestCase):
    def test_generated_scripts_match_source(self):
        with tempfile.TemporaryDirectory(prefix="lionsarch-story-") as temp:
            for map_name in MAPS:
                with self.subTest(map=map_name):
                    output = Path(temp) / f"{map_name}.inc"
                    subprocess.run([
                        str(ROOT / "tools/poryscript/poryscript"),
                        "-i", str(ROOT / "data/maps" / map_name / "scripts.pory"),
                        "-o", str(output),
                        "-fc", "tools/poryscript/font_config.json",
                        "-cc", "tools/poryscript/command_config.json", "-lm=false",
                    ], cwd=ROOT, check=True, capture_output=True, text=True)
                    self.assertEqual(output.read_text(), read(map_name, "inc"))

    def test_rescue_feedback_uses_outcome_not_sprite_flag(self):
        sendoff = compiled_block("LionsarchCity", "LionsarchCity_RectorSendoff")
        self.assertNotIn("FLAG_STEEL_FACTORY_POKEMON_CAGED", sendoff)
        self.assertIn(f"goto_if_set {FREED}", sendoff)
        self.assertIn(f"goto_if_unset {FREED}", sendoff)
        self.assertIn("pokenavcall LionsarchCity_DaanFactoryRescued", sendoff)
        self.assertIn("pokenavcall LionsarchCity_DaanFactoryNotRescued", sendoff)
        upstairs = compiled_block(FACTORY + "_2F", "SteelFactory_2F_OverhearCutscene")
        self.assertGreaterEqual(upstairs.count(f"goto_if_set {FREED}"), 2)
        self.assertIn("msgbox SteelFactory_2F_Rector_TurnsOnConrector", upstairs)
        self.assertIn("msgbox SteelFactory_2F_Rector_OrdersWorkerTransfer", upstairs)

    def test_no_hidden_cell_aron_movement_before_guards(self):
        panel = compiled_block(FACTORY, "SteelFactory_1F_CellPanel")
        first_move = panel.index("applymovement 25,")
        self.assertLess(panel.index(f"goto_if_set {FREED}"), first_move)
        self.assertLess(panel.index("goto_if_unset FLAG_STEEL_FACTORY_ALL_WIRES_PULLED"),
                        first_move)
        guiding = compiled_block(FACTORY, "SteelFactory_1F_Aron_Interact")
        self.assertNotIn("CellPanel", guiding)
        self.assertNotIn("applymovement 25", guiding)

    def test_aron_question_preserves_answer_and_remains_optional(self):
        intro = compiled_block(FACTORY, "SteelFactory_1F_AronIntro")
        prompt = intro.index("msgbox SteelFactory_AronIntro_Text, MSGBOX_YESNO")
        comparison = intro.index("compare VAR_RESULT, YES", prompt)
        self.assertNotIn("msgbox", "\n".join(intro[prompt:comparison].splitlines()[1:]))
        self.assertLess(intro.index("msgbox SteelFactory_WorkerNetwork_Text"), prompt)
        self.assertIn("setflag FLAG_STEEL_FACTORY_ARON_GUIDING", intro)
        self.assertIn("msgbox SteelFactory_AronLeave_Text", intro)
        self.assertNotIn("The Rector might escape", read(FACTORY))
        meeting = compiled_block(FACTORY + "_2F", "SteelFactory_2F_OverhearCutscene")
        self.assertNotIn("FLAG_STEEL_FACTORY_ALL_WIRES_PULLED", meeting)

    def test_evidence_is_available_without_rescue_or_scanner_use(self):
        sign = compiled_block("EastLionMountain_Faculty_Mining_Cave_B1F",
                              "MiningCaveB1F_Sign_DeepMine_Text_0")
        self.assertIn("REGICE", sign)
        for symbol in ("SteelFactory_1F_ControlPanel", "SteelFactory_1F_RegiceEvidence"):
            block = compiled_block(FACTORY, symbol)
            self.assertIn("msgbox SteelFactory_ControllerEvidence_Text", block)
            self.assertNotIn("goto_if", block)
            self.assertNotIn("ITEM_SCANNER", block)
        evidence = re.sub(r"\\[nlp]", " ",
                          compiled_text(FACTORY, "SteelFactory_ControllerEvidence_Text"))
        self.assertIn("independent power supply", evidence)
        self.assertIn("damaged device Jacob", evidence)

    def test_existing_evidence_and_wire_events_are_mapped(self):
        for map_name, scripts in (
            ("EastLionMountain_Faculty_Mining_Cave_B1F", ["MiningCaveB1F_Sign_DeepMine"]),
            (FACTORY, ["SteelFactory_1F_ControlPanel"] +
             [f"SteelFactory_1F_Wire{i}" for i in range(1, 6)]),
        ):
            data = json.loads((ROOT / "data/maps" / map_name / "map.json").read_text())
            bound = {event["script"] for event in data["bg_events"] if "script" in event}
            for script in scripts:
                with self.subTest(map=map_name, script=script):
                    self.assertIn(script, bound)

    def test_named_call_texts_fit_expansion_buffer(self):
        # The engine expands field messages into gStringVar4[0x3E8].
        # Count UTF-8 conservatively after allowing a full seven-character name.
        for symbol in ("LionsarchCity_DaanFactoryRescued", "LionsarchCity_DaanFactoryNotRescued"):
            with self.subTest(symbol=symbol):
                text = compiled_text("LionsarchCity", symbol)
                text = text.replace("{PLAYER}", "W" * 7)
                text = re.sub(r"\\[nlp]", "\n", text)
                self.assertLessEqual(len(text.encode("utf-8")), 0x3E8)

    def test_trainer_identifiers_preserved(self):
        # Scope to trainer references in these scripts; user party edits elsewhere
        # are neither inspected nor overwritten.
        for map_name in MAPS:
            with self.subTest(map=map_name):
                original = subprocess.check_output(
                    ["git", "show", f"HEAD:data/maps/{map_name}/scripts.pory"],
                    cwd=ROOT, text=True)
                pattern = r"\bTRAINER_[A-Z0-9_]+\b"
                self.assertEqual(re.findall(pattern, original), re.findall(pattern, read(map_name)))


if __name__ == "__main__":
    unittest.main(verbosity=2)
