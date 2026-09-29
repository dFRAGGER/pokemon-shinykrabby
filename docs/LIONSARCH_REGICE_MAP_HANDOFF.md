# Lionsarch Regice rewrite - map handoff

Status: 16 September 2026. Dialogue and independent rescue logic implemented; visual bay scene and ice-cave redesign pending the author's Porymap work. No map layouts, tilesets, event positions, trainer parties, or saved flag numbers have been changed by this rewrite.

## Available now

- Mountain witnesses, excavation workers, Barry's evacuation, the post-fall scene, and Peter identify Regice's extraction and transfer to Lionsarch.
- The existing `MiningCaveB1F_Sign_DeepMine` sign is a readable extraction record naming Regice. It remains accessible after Faculty NPCs disappear. Move this sign to the empty chamber or a nearby abandoned clipboard if desired.
- The existing factory control panel explains coastal, worker, and portable controllers. `SteelFactory_1F_RegiceEvidence` supplies the same evidence as a standalone terminal script for the new bay. Neither script activates or consumes `ITEM_SCANNER`.
- Aron remains optional. A maintenance notice before the choice explains the two power networks. The five relays disable the worker-cell lockout, not Regice's portable frame.
- The meeting, harbor dialogue, and Daan call identify Regice's scheduled shipment. Rescue feedback uses `FLAG_STEEL_FACTORY_FREED_POKEMON`, including the Conrector's excuse and Mew's reaction.
- The new bay is NOT placed, and there is no active discovery animation or new Regice visibility flag yet. The live game currently conveys its captivity through records and conversations.

## Your Porymap work

### Ice caves

Redesign `EastLionMountain_Faculty_Mining_Cave_B1F` as the breached ancient ice chamber and `EastLionMountain_Faculty_Mining_Cave` as the small post-fall escape cave. Keep the extraction record outside any sealed-off area. Show drilling damage, an empty resting place, and a transport passage. Remap tile IDs and collision deliberately if changing tilesets; do not just substitute tileset names.

The current battle map has Barry as local object 1 and his evacuation assistant as object 2. The fall warps to `(9, 10)` in the small cave, whose exit connects to `LionMountain_CaveSystem_Entrance`. Keep those positions and movement corridors, or include their replacements in the handoff.

### Main-floor bay

Place the bay on the required route after entry from the basement and before the Aron choice/upstairs. Show Regice behind a barrier in a portable frame, with a controller, loading shutter, and freight access. The player must stand outside the enclosure, and closing the shutter must leave the onward path and evidence terminal accessible.

Current anchors (not new placement instructions):

| Existing feature | Position / identity |
| --- | --- |
| Basement entrance on main floor | `(36, 11)`, warp index 2 |
| Upstairs exit | `(10, 1)`, warp index 3 |
| Aron introduction triggers | `(1, 6)` and `(2, 6)` |
| Guiding Aron | object 18 |
| Cell Aron | object 25 |
| Rescue scientist | object 5 |
| Family escape objects | objects 26-32 |

Do not reorder the existing 36 objects. Append Regice with `OBJ_EVENT_GFX_REGICE`; report its resulting local ID. The script implementation will assign its persistent hide flag before activating the scene. Avoid placing the new bay across Aron's scripted route or cell gates. If objects or machines move, list the affected positions so all movement and metatile commands can be updated together.

## Information needed to finish the scripts

Supply the saved map plus:

1. Regice's local ID and position, and any scene NPCs.
2. The viewing/trigger tiles, their elevations, and a safe player-facing direction.
3. Every shutter tile coordinate and its open/closed metatile IDs and collision state.
4. The terminal position, outside the shutter, using `SteelFactory_1F_RegiceEvidence`.
5. The portable frame's loading path or the point where it passes out of sight.
6. Any moved existing objects, warps, Aron relays, cell gates, or mine fall/escape tiles.

Close Porymap before the event wiring is edited externally, then reload the project before saving it again.

## Binding behavior after the handoff

- Add a one-time mandatory discovery scene: a controller pulse forces the same simple response twice; the player recognizes the old transmitter design; the scheduled loading begins; the shutter closes and Regice disappears into transport.
- Make the terminal's explanation available before the Aron decision. No timer or rescue flag controls the shipment.
- Guard repeat entry with one new discovery-completed flag; preserve all existing flag addresses. Set the new Regice hide flag from map-load logic when the discovery or factory completion is recorded. A completed old save must never show Regice or replay the scene.
- Use existing factory-complete/Rector progression as a legacy-save guard. For an older save already past the Aron introduction or upstairs meeting, do not force a new cinematic into that old scene state; keep the terminal readable and mark the bay as already cleared.
- Trigger discovery from every playable entry path before the player can reach the Aron choice or upstairs; test any direct/front-door routes as well as Peter's tunnel.
- Restore the closed shutter on reload after dispatch. Finish every camera movement and restore player control before returning to exploration. Verify local sprite capacity around the bay.

## Verification

Verified on 16 September 2026: all eight checks below pass, affected scripts regenerate consistently, and `make sk -j24` produces `pokesk.gba` (ROM usage 95.10%). The build reports compiler/linker warnings but no errors. No emulator playthrough was performed. These results do not validate the still-unimplemented bay or ice-cave visuals.

The script-only regression check is `python3 tools/check_lionsarch_story.py`. It verifies selected compiled branch invariants, story references, trainer-party preservation relative to HEAD, and text-buffer bounds; it is not an emulator test.

After map integration, test both rescue outcomes, declining individual wire/release prompts, leaving and re-entering after each wire, saving before/after discovery, and completed old saves. Both routes must reach the harbor, both must identify Regice and the control technology, and only the rescued route may show the family reunion and positive rescue feedback. Regice must not be battleable or catchable here.

Build with `make sk -j24`. Final visual/collision/camera and full playthrough verification belongs to the author's emulator test.
