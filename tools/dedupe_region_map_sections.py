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
# This script removes those stub duplicates: any entry whose *only* key is
# "id" (no name/x/y/width/height) is deleted if that same id already has a
# real definition somewhere else in the file. It never touches a real,
# fully-specified entry.
#
# Run automatically by `make sk` before the region map JSON is consumed by
# jsonproc, so this bug class can't break the build again.

import json
import sys

PATH = "src/data/region_map/region_map_sections.json"


def main():
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
        return

    with open(PATH, "w", encoding="utf-8") as f:
        json.dump(data, f, indent=2, ensure_ascii=False)
        f.write("\n")

    print(
        f"dedupe_region_map_sections.py: removed {len(removed)} porymap-injected "
        f"duplicate stub(s) from region_map_sections.json:",
        file=sys.stderr,
    )
    for section_name, mapsec_id in removed:
        print(f"  {mapsec_id} (stub in {section_name})", file=sys.stderr)


if __name__ == "__main__":
    main()
