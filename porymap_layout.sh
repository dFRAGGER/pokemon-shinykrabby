#!/usr/bin/env bash
# Toggles include/fieldmap.h between the two porymap-editing conventions.
#
# porymap has no concept of pokehns' per-map dynamic layoutVersion boundary
# (512 tiles/metatiles for Emerald-convention maps vs 640 for HNS/FRLG-convention
# maps) -- it only ever reads whatever NUM_TILES_IN_PRIMARY / NUM_METATILES_IN_PRIMARY
# / NUM_PALS_IN_PRIMARY currently say. This script flips those (and their _EMERALD
# counterparts) between the two states so you can correctly view/edit whichever
# kind of map you're working on.
#
# IMPORTANT: this file is also compiled into the actual game. The engine's
# runtime layoutVersion switch (GetNumTilesInPrimary() etc. in src/fieldmap.c)
# relies on NUM_TILES_IN_PRIMARY meaning "the HNS/FRLG 640 case" and
# NUM_TILES_IN_PRIMARY_EMERALD meaning "the Emerald 512 case" -- always, regardless
# of which literal values are currently assigned to them. Building the ROM while
# in "emerald" state (i.e. with those meanings swapped) will silently swap the
# primary/secondary boundary for every map in the game. Always switch back to
# "hns" before running `make`.
#
# Usage:
#   ./porymap_layout.sh hns       # 640/640/7 -- for editing HNS/FRLG-convention maps in porymap (default/build-safe state)
#   ./porymap_layout.sh emerald   # 512/512/6 -- for editing Emerald-convention maps in porymap (DO NOT BUILD in this state)
#   ./porymap_layout.sh status    # show current state

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
FIELDMAP="$SCRIPT_DIR/include/fieldmap.h"

current_value() {
    grep -m1 -E '^#define NUM_TILES_IN_PRIMARY [0-9]+$' "$FIELDMAP" | awk '{print $3}'
}

set_values() {
    local tiles=$1 metatiles=$2 pals=$3 tiles_em=$4 metatiles_em=$5 pals_em=$6
    sed -i \
        -e "s/^#define NUM_TILES_IN_PRIMARY [0-9]\+\$/#define NUM_TILES_IN_PRIMARY $tiles/" \
        -e "s/^#define NUM_METATILES_IN_PRIMARY [0-9]\+\$/#define NUM_METATILES_IN_PRIMARY $metatiles/" \
        -e "s/^#define NUM_PALS_IN_PRIMARY [0-9]\+\$/#define NUM_PALS_IN_PRIMARY $pals/" \
        -e "s/^#define NUM_TILES_IN_PRIMARY_EMERALD [0-9]\+\$/#define NUM_TILES_IN_PRIMARY_EMERALD $tiles_em/" \
        -e "s/^#define NUM_METATILES_IN_PRIMARY_EMERALD [0-9]\+\$/#define NUM_METATILES_IN_PRIMARY_EMERALD $metatiles_em/" \
        -e "s/^#define NUM_PALS_IN_PRIMARY_EMERALD [0-9]\+\$/#define NUM_PALS_IN_PRIMARY_EMERALD $pals_em/" \
        "$FIELDMAP"
}

case "${1:-status}" in
    hns)
        set_values 640 640 7 512 512 6
        echo "fieldmap.h -> HNS/FRLG porymap convention (640/640/7)."
        echo "This is the build-safe state. Safe to 'make hns' now."
        ;;
    emerald)
        set_values 512 512 6 640 640 7
        echo "fieldmap.h -> Emerald porymap convention (512/512/6)."
        echo "WARNING: do NOT build the ROM in this state -- run './porymap_layout.sh hns' first."
        ;;
    status)
        v=$(current_value)
        case "$v" in
            640) echo "Currently: HNS/FRLG convention (640/640/7) -- build-safe." ;;
            512) echo "Currently: Emerald convention (512/512/6) -- NOT build-safe, switch back to 'hns' before make." ;;
            *)   echo "Currently: unrecognized value ($v)" ;;
        esac
        ;;
    *)
        echo "Usage: $0 [hns|emerald|status]"
        exit 1
        ;;
esac
