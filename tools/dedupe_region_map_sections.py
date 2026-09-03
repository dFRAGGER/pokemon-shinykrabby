#!/usr/bin/env python3
# porymap's Region Map Editor doesn't understand this repo's per-game
# map_sections split (map_sections / hns_map_sections / frlg_map_sections /
# sk_map_sections). Every so often, opening it there causes it to silently
# re-inject bare {"id": "MAPSEC_X"} stub entries into "map_sections" for
# MAPSEC ids that already have a full definition (name/x/y/width/height) in
# one of the other sections. Since region_map_sections.constants.json.txt
# emits one enum member per JSON entry with no dedup, this produces a
# "redeclaration of enumerator" build error.
#
# This script detects those stub duplicates: any entry whose *only* key is
# "id" (no name/x/y/width/height) is deleted if that same id already has a
# real definition somewhere else in the file. Normal validation is read-only;
# pass --fix for an explicit atomic repair. It never touches a real entry.
#
# Run automatically in fix mode by `make sk` before jsonproc. This keeps builds
# compatible with older porymap versions that ignore key_region_map_sections.
# Running the script directly without --fix remains a read-only validation.

import argparse
import json
import os
import sys
import tempfile

PATH = "src/data/region_map/region_map_sections.json"


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--fix",
        action="store_true",
        help="atomically remove duplicate bare stubs instead of only validating",
    )
    args = parser.parse_args()

    with open(PATH, encoding="utf-8") as f:
        data = json.load(f)

    real_ids = set()
    for section in data.values():
        if not isinstance(section, list):
            continue
        for entry in section:
            if isinstance(entry, dict) and set(entry.keys()) != {"id"}:
                real_ids.add(entry.get("id"))

    removed = []
    for section_name, section in data.items():
        if not isinstance(section, list):
            continue
        kept = []
        for entry in section:
            if (
                isinstance(entry, dict)
                and set(entry.keys()) == {"id"}
                and entry["id"] in real_ids
            ):
                removed.append((section_name, entry["id"]))
                continue
            kept.append(entry)
        data[section_name] = kept

    if not removed:
        return 0

    if not args.fix:
        print(
            "error: porymap injected duplicate region-map stubs; "
            "run 'python3 tools/dedupe_region_map_sections.py --fix' and review the diff:",
            file=sys.stderr,
        )
        for section_name, mapsec_id in removed:
            print(f"  {mapsec_id} (stub in {section_name})", file=sys.stderr)
        return 1

    directory = os.path.dirname(PATH) or "."
    temporary_path = None
    try:
        with tempfile.NamedTemporaryFile(
            "w", encoding="utf-8", dir=directory, delete=False
        ) as f:
            temporary_path = f.name
            json.dump(data, f, indent=2, ensure_ascii=False)
            f.write("\n")
            f.flush()
            os.fsync(f.fileno())
        os.replace(temporary_path, PATH)
        temporary_path = None
    finally:
        if temporary_path is not None:
            os.unlink(temporary_path)

    print(
        f"dedupe_region_map_sections.py: removed {len(removed)} porymap-injected "
        f"duplicate stub(s) from region_map_sections.json:",
        file=sys.stderr,
    )
    for section_name, mapsec_id in removed:
        print(f"  {mapsec_id} (stub in {section_name})", file=sys.stderr)
    return 0


if __name__ == "__main__":
    sys.exit(main())
