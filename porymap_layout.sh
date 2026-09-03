#!/usr/bin/env bash
# Toggles only porymap's editing convention. Compiled HNS/SK builds select
# their runtime constants through POKEMON_HNS/POKEMON_SK and are unaffected.
#
# porymap has no concept of pokehns' per-map dynamic layoutVersion boundary
# (512 tiles/metatiles for Emerald-convention maps vs 640 for HNS/FRLG-convention
# maps) -- it only ever reads whatever NUM_TILES_IN_PRIMARY / NUM_METATILES_IN_PRIMARY
# / NUM_PALS_IN_PRIMARY currently say. This script flips those (and their _EMERALD
# counterparts) between the two states so you can correctly view/edit whichever
# kind of map you're working on. It also selects that game's region-map section
# array so Porymap does not inject missing-location stubs into map_sections.
#
# Usage:
#   ./porymap_layout.sh hns       # 640/640/7 -- edit HNS/FRLG-convention maps
#   ./porymap_layout.sh emerald   # 512/512/6 -- edit Emerald/Tessera maps
#   ./porymap_layout.sh status    # show current state

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
FIELDMAP="$SCRIPT_DIR/include/fieldmap.h"
PORYMAP_PROJECT="$SCRIPT_DIR/porymap.project.json"

set_region_map_sections() {
    local section_key=$1
    sed -i -E \
        "s/(\"key_region_map_sections\"[[:space:]]*:[[:space:]]*\")[^\"]+(\")/\\1${section_key}\\2/" \
        "$PORYMAP_PROJECT"
}

case "${1:-status}" in
    hns)
        if ! grep -q '^#define PORYMAP_HNS 1$' "$FIELDMAP"; then
            sed -i '/^#define GUARD_FIELDMAP_H$/a #define PORYMAP_HNS 1' "$FIELDMAP"
        fi
        set_region_map_sections hns_map_sections
        echo "fieldmap.h -> HNS/FRLG porymap convention (640/640/7)."
        echo "porymap.project.json -> hns_map_sections."
        echo "ROM builds remain safe in either porymap state."
        ;;
    emerald)
        sed -i '/^#define PORYMAP_HNS 1$/d' "$FIELDMAP"
        set_region_map_sections sk_map_sections
        echo "fieldmap.h -> Emerald porymap convention (512/512/6)."
        echo "porymap.project.json -> sk_map_sections."
        echo "ROM builds remain safe in either porymap state."
        ;;
    status)
        if grep -q '^#define PORYMAP_HNS 1$' "$FIELDMAP"; then
            echo "Currently: HNS/FRLG porymap convention (640/640/7)."
        else
            echo "Currently: Emerald/Tessera porymap convention (512/512/6)."
        fi
        grep -m1 '"key_region_map_sections"' "$PORYMAP_PROJECT"
        ;;
    *)
        echo "Usage: $0 [hns|emerald|status]"
        exit 1
        ;;
esac
