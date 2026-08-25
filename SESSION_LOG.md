# ShinyKrabby → HNS Port: Session Log

Written at the end of a long working session for handoff to a future conversation
that won't have this history. Covers what got done, why, and things worth knowing
before touching this codebase again.

## Where things live

- **This repo** (`pokemon-shinykrabby`, the one you're in) is the **port**: ShinyKrabby's
  custom game (a Pokémon/Kanto+Johto-based fangame, region "Tessera") built on top of
  `pokehns-expansion` ("Heart and Soul" / HNS, a Johto/Kanto remake engine). It used to be
  called `shinykrabby-hns-port` — it and the original ShinyKrabby repo (now at
  `pokemon-shinykrabby(OLD)`, a sibling directory) were renamed partway through this
  session. If anything references the old path/name, that's why.
- `origin` remote still points at `pokehns-expansion` upstream. Current branch:
  `port-shinykrabby-maps`.
- Build with **`make sk -j24`**. This is now the only target that matters — see "Build
  variants" below for why `hns`/`emerald`/`firered` aren't really relevant anymore.
- `pokemon-shinykrabby(OLD)` is the original ShinyKrabby source (plain
  pokeemerald-expansion, no HNS). Useful as a reference for "what did the original
  content/art/text actually say/look like" when something in the port seems off or
  missing — several bugs this session were found exactly that way (diff the port
  against what OLD actually has).

## What got done this session, roughly in order

All of this is committed on `port-shinykrabby-maps`. Commit subjects below match
`git log --oneline`, newest last:

1. **`579e5b959a` Port ShinyKrabby content onto pokehns-expansion** — this is a
   *snapshot* commit: ~1035 files of prior porting work (maps, sprites, scripts, text)
   that had never been committed before this session (!) were finally committed as a
   baseline. Also includes: completing the "DAAN" NPC match-call entry
   (`pokenav_match_call_data.c`), and fixing a real bug in `bike.c`'s Cycling Road
   pull-left/right mechanic where `ACRO_TRANS_RIGHTHILL`/`ACRO_TRANS_LEFTHILL` were
   referenced but never added to the enum in `bike.h`.

2. **`e427303a10` Add sk build target** — the big one. Previously the only build was
   `make hns`, which compiled in *all* of HNS's own Johto/Kanto game content (~560 maps)
   alongside Tessera's own ~155 maps, because both were tagged `game_version: "hns"`.
   ROM was at 98.89% used.
   - Retagged every Tessera-authored map/layout from `game_version: "hns"` to
     `"sk"`, and added `sk` as a real value `tools/mapjson/mapjson.cpp` understands
     (it previously hard-validated against a fixed list of strings).
   - Discovered map *scripts* aren't excluded by `game_version` the way headers/layouts
     are — they're all unconditionally `.include`d into `data/event_scripts.s`. Added a
     new `INCLUDE_HNS_CONTENT` build flag (0 for `sk`, threaded through both the C/asm
     preprocessor *and* `--defsym` for files only reached via assembler `.include`, like
     `data/scripts/debug.inc`, which never see the preprocessor) and gated the ~530
     Johto map script includes behind it.
   - Battle Pyramid and one Battle Frontier move-tutor lounge (Lounge7) turned out to be
     genuine reusable engine features that the C code hardcodes references to (not
     Johto "story" content) — kept those in the `sk` build by retagging their maps too,
     rather than excluding them.
   - Found and fixed two real bugs along the way: `player_pc.c`'s `PlayerPC_TurnOff`
     was unconditionally routing to a NewBarkTown (Johto) script regardless of build
     target; `include/constants/vars.h` had its own hardcoded `VARS_END` silently
     overriding `vars_hns.h`'s value (same literal value both times, so invisible until
     one of them changed).
   - **Result: ROM usage 98.89% → 93.24%.**

3. **`411e880f5b` Clean up flags/vars/trainers/mapsecs namespacing** — gave Tessera's
   own constants proper reserved ranges instead of raw hex squatting in HNS's own
   number space: `SK_FLAGS_START`/`NUM_SK_FLAGS` (flags), new `SK_VARS_START`/
   `NUM_SK_VARS` (vars, previously had no reserved block at all), raised
   `TRAINERS_COUNT_HNS` (was exactly full), added `TESSERA_MAPSEC_START/END/COUNT`
   mirroring HNS's own `KANTO_/JOHTO_/ALOLA_/HISUI_MAPSEC_*` pattern — added to the Inja
   *template* (`src/data/region_map/region_map_sections.constants.json.txt`), not the
   generated (gitignored) header directly, since that gets regenerated on every build.

4. **`e335c896e0` Add CHALLENGES option to the bedroom PC menu** — the intro speech's
   disclaimer promises game settings can be changed "from the PC," but no PC anywhere
   in the game actually exposed that screen (checked HNS's own upstream history — same
   gap exists there too, their only example is one standalone sign-object terminal in
   Ruins of Alph). Added a 5th top-level option to `src/player_pc.c`'s own bedroom PC
   menu (shared code, so it applies to every bedroom PC including Tessera's) rather than
   rerouting through HNS's generic PC flow, which is missing Decoration as an option.

5. **`5bde202d82` Restore title screen bubbles and SHINYKRABBY VERSION subtitle** — HNS's
   own title screen code has a comment literally saying "HnS doesn't use clouds" and
   skips loading that background layer's graphics, even though all the *animation*
   machinery for it (scroll, wave effect, blend) runs unconditionally. ShinyKrabby had
   reused that same layer, redrawn as rising bubbles behind the title Pokémon. Removed
   the guard, copied the bubble art over. Also: `graphics/title_screen/emerald_version.png`
   is misleadingly named — despite the filename it's actually the "SHINYKRABBY VERSION"
   logo art, and neither copy in the port had ever been updated from stock "EMERALD
   VERSION" text.

6. **`335d6f8d29` Show Birch, not Oak, during the intro speech** — the intro speech's
   *text* had been rewritten to Prof Birch/"Prof Birds" content already, but the
   professor sprite was still created via `AddNewGameOakObject` (Kanto Oak's graphic).
   `AddNewGameBirchObject` already existed unused in `field_effect.c`. One-line fix.

7. **`1de2f4efd3` Fix the actual Magikarp reveal text** — `gText_Oak_Pokemon` in
   `oak_speech_hns.inc` had the correct rewritten text but was dead code, never
   referenced anywhere. The line actually shown at that point in the speech
   (`Task_NewGameHnsSpeech_ThisIsAPokemon`) pulls from `gText_ThisIsAPokemon` in
   `strings.c`, which still had HNS's stock generic text. **Same bug exists in the
   original ShinyKrabby source repo too** — worth knowing if you ever go back to that
   repo expecting the newer wording to be live there.

8. **`70fd1be022` Fix wrong PC screen tile in the Tessera starter's house** —
   `ErpusCity_StartHouse_2F` uses `gTileset_BrendansMaysHouse` (confirmed by its own
   baked-in default tile), but its PC event script was shared with a vanilla map and
   unconditionally used a location constant meaning "HNS's own Johto bedroom tileset" —
   wrong tileset, wrong metatile IDs, visibly broken tile on toggle. Also: `Turn Off`
   dispatches purely by player gender with zero map-awareness, a second independent bug
   for a single shared-gender room like this one. Gave the map its own dedicated PC
   scripts and added a map-aware branch to `PlayerPC_TurnOff`.
   - Also fixed, unrelated: `src/data/heal_locations.json` got silently truncated to
     exactly 8192 bytes by `mapjson.cpp`'s `clean_heal_locations()`, which
     reads-then-rewrites that file in place non-atomically on every map-data regen —
     looks like it raced with itself under `-j24`. Restored from git; a later rebuild
     did *not* reproduce it, so it's an intermittent parallel-build hazard in the tool,
     not something fixed at the root. **If files near there ever look truncated again,
     this is why.**

9. **`dce0545e08` Unlock the full FRLG NPC overworld sprite roster** — 145 NPC sprites
   (Youngster, Cooltrainer, Swimmer, Fisher, Biker, Rocket Grunt, Red/Green, etc., plus
   a few old-style Pokémon follower sprites) were sitting fully compiled out behind
   `#if IS_FRLG` across four files, even though the actual `OBJ_EVENT_GFX_*` ID
   constants were defined unconditionally — so the PNGs existed in the repo but were
   completely unusable. Removed the guards (checked first for symbol collisions with
   existing content — none). +248KB ROM.

10. **`fb30e3cc9b` Clean up duplicate HNS NPC sprites** — the user had manually deleted
    35 `_hns`-suffixed sprite PNGs as visual duplicates but not their wiring. Before
    removing the C-side references, checked usage against `battle_tower.c`/
    `battle_pike.c`/`frontier_util.c` (trainer-icon assignment) and the still-included
    Battle Pyramid/Lounge7 maps — 26 of the 35 were still needed there and got restored;
    the other 9 were confirmed genuinely orphaned (only used by excluded Johto town
    maps) and stayed removed. Also fixed two more missing-asset bugs surfaced by the
    project folder rename (same root cause as #8's heal_locations bug — see "Gitignored
    assets with no source" below): `graphics/object_events/palettes/statue.gbapal` and
    `graphics/title_screen/hns/shiny_krabby.bin(.smolTM)`, both restored from the
    original ShinyKrabby repo, `.gbapal` given a proper `.pal` source it never had.

11. **`c4ed39635f` / `30f64f1c97` / `b8b53f0142` / `764976a2c3` — the big sprite batch.**
    The user added ~170 new NPC sprites (85 Diamond/Pearl-style trainers + 85
    ShinyKrabby-style trainers/gym leaders) plus ~150 palettes. Full process:
    - Checked all 249 total object-event palettes for exact and near-duplicate colors —
      almost none, found 5 legitimate share-pairs (ace_trainer_f/m, camper/picnicker,
      poke_ranger_f/m, young_couple_f/m, galactic_grunt_m/f).
    - Frame-size audit: sprites are meant to be 144px wide (9 walk frames) or 160px
      (9 + 1 "rematch" frame). 137 were clean, 18 had genuinely wrong pixel dimensions
      (cropping mistakes).
    - Wired 91 sprites that were already properly indexed/clean PNGs, using a generated
      6-step pipeline (see "How to add new NPC sprites" below).
    - Hit a real bug: `NUM_OBJ_EVENT_GFX` in `event_objects.h` is a **hardcoded
      literal**, not auto-computed from the highest `OBJ_EVENT_GFX_*` constant. New IDs
      past the old max were writing past `gObjectEventGraphicsInfoPointers[]`'s declared
      bound, which GCC reported as a wall of confusing `-Woverride-init` "field
      overwritten" warnings-as-errors rather than a clear out-of-bounds error. **Bump
      this constant any time you add sprites past the current max.**
    - Found 46 more sprites had real anti-aliasing artifacts (RGBA with edge colors that
      don't match their 16-color palette — soft/blended pixels from an export step with
      smoothing on). Demonstrated a nearest-color quantization looked visually identical
      to the original on a test sprite (side-by-side + zoomed crops), then applied it to
      all 46 and wired them in too.
    - User asked to delete the remaining 18 wrong-dimension sprites — done (PNG + pal).
    - Then asked to bring back 2 of those 18: `biker_SK` (320×32 — not actually broken,
      bikes use 32px-wide frames like existing biker sprites, so 320÷32 = a clean 10
      frames) and `swimmer_f_water_SK` (192×32 — also not broken, just a 12-frame sheet
      instead of 9/10, and its colors already matched its palette exactly). Both also
      turned out to use a **different background convention** than the other 137: solid
      corner-pixel color matching the palette's index 0, instead of alpha transparency —
      worth checking for on any future sprite that looks "off" after conversion.
    - **Final: 139 of the ~170 new sprites are wired in and live.** 16 are permanently
      gone (deleted, genuinely bad crops). None of the palette/pic files for anything
      unwired are lying around anymore for the deleted ones.

12. **`bbbf6a251d` Make Emerald the default porymap convention, auto-toggle for builds**
    — see "porymap tileset toggle" below, this is the most important mechanical thing
    to understand if maps look wrong in porymap again.

## Key things worth knowing before touching this again

### The porymap tileset toggle (`porymap_layout.sh` / `include/fieldmap.h`)

porymap has no concept of this engine's per-map dynamic tile-boundary (`layoutVersion`):
some maps use a 512-tile primary/secondary split ("Emerald convention"), others use 640
("HNS/FRLG convention"). porymap just reads whatever `include/fieldmap.h` currently says.

**The critical, non-obvious part**: `NUM_TILES_IN_PRIMARY` and
`NUM_TILES_IN_PRIMARY_EMERALD` (and the metatile/pal equivalents) aren't independent
settings — `src/fieldmap.c`'s runtime switch always treats the first as "the 640 case"
and the second as "the 512 case," **regardless of which literal numbers are currently
assigned to them**. The toggle script swaps *which number means which*, for the whole
compiled game at once. Build with the toggle in the wrong state and it silently swaps
the tile boundary for every single map, not just some.

Since **no map actually left in the `sk` build needs the 640 boundary anymore** (all of
HNS's own 640-boundary Johto content is excluded; Tessera's own maps and the kept
Battle Pyramid/Lounge7 content all use 512), the fix as of this session:
- `include/fieldmap.h` is left in **Emerald (512) state by default** — this is what you
  want for viewing/editing in porymap.
- **`make sk` auto-toggles**: flips to the build-safe HNS state, builds, flips back to
  Emerald on success. You should never need to run `porymap_layout.sh` by hand anymore.
  If a build *fails*, it deliberately does not flip back, so `fieldmap.h` stays in the
  safe state for a retry.
- If tiles ever look scrambled in porymap again, run `./porymap_layout.sh status` first
  — if it says anything other than "Emerald convention," something (a manual build via
  a different make target, a manual script run) left it in the wrong state.

### Gitignored assets with no real source

Found this exact bug pattern **three separate times** this session, always surfaced by
the project folder rename: `graphics/object_events/palettes/statue.gbapal`,
`graphics/title_screen/hns/shiny_krabby.bin(.smolTM)`. All three were `.gitignore`d
"compiled" files (`*.gbapal`, `*.smolTM`/`*.smol` are normally build artifacts
regenerated from a `.pal`/`.bin` source) that had **no actual source to regenerate
from** — they only ever existed as local, uncommitted files, copied in by hand at some
point. Once the working copy lost them (a failed build deletes its target on error), they
were gone from this repo entirely, and had to be recovered from the original ShinyKrabby
repo (`pokemon-shinykrabby(OLD)`). If something like this happens again: check whether
the missing file has a real source counterpart; if not, find the original in the OLD
repo and either restore both, or generate a proper source (e.g.
`gbagfx x.gbapal x.pal`) so it can't silently vanish again.

### `#if IS_FRLG` / `#if IS_HNS` assume mutual exclusivity

Stock pokeemerald-expansion code (and a lot of HNS's own additions) was written assuming
`IS_FRLG` and `IS_HNS` are never both meaningful at once — i.e., a block gated `#if
IS_FRLG` and a separate block gated `#if IS_HNS` were never expected to coexist in the
same compiled binary. Un-gating one of these (like the FRLG NPC sprite unlock) is safe
*as long as you check for `OBJ_EVENT_GFX_*`/similar numeric ID collisions* between the
two blocks first — checked and found none this session, but it's not guaranteed in
general and is worth checking again for any future un-gating.

### `layout_version` vs `game_version` are separate, independent fields

Easy to conflate. `game_version` (on both `map.json` and `layouts.json` entries)
controls whether a map/layout is *compiled into a given build at all* (the `MAP_VERSION`
mechanism, now `"sk"` for this build). `layout_version` (layouts.json only) controls
the *512-vs-640 tile boundary* for that specific layout, unrelated to which build
includes it. A layout can be `game_version: "sk"` and `layout_version` unset (→ 512,
the common case for Tessera content) or explicitly `"hns"`/`"frlg"` (→ 640, not used by
anything left in the `sk` build as of this session).

### "Manually maintained size" constants

`NUM_OBJ_EVENT_GFX` (see #11 above) is not the only constant like this in the codebase —
watch for other hardcoded "count" `#define`s (`NUM_SK_FLAGS`, `NUM_SK_VARS`,
`TRAINERS_COUNT_HNS`, etc. were all this same pattern, already handled in commit
`411e880f5b`) whenever adding new entries to an enum/table that has one.

## How to add new NPC overworld sprites (repeatable process)

For a folder of new sprite PNGs (+ matching `.pal` files) dropped into
`graphics/object_events/pics/people/` and `graphics/object_events/palettes/`:

1. **Verify image format**: must be indexed/palette-mode PNG (not RGB/RGBA), colors
   matching the paired `.pal` file exactly, no anti-aliasing. Check with PIL:
   `Image.open(path).mode == 'P'`. If RGBA, check whether every opaque color exactly
   matches an entry in the `.pal` file — if yes, safe to losslessly convert; if not,
   it's anti-aliased and needs either re-export or a (slightly lossy) nearest-color
   quantization — spot check visually before doing this at scale.
2. **Verify pixel dimensions**: standard walking NPC sheets are `16 * frame_count` wide,
   32 tall (e.g. 144×32 = 9 frames, 160×32 = 10 frames with a bonus "rematch" frame).
   Bike-riding sprites use 32px-wide frames instead (e.g. 320×32 = 10 frames). Anything
   that doesn't divide cleanly is a cropping mistake — don't guess, ask.
3. **Check background convention**: most sprites use alpha transparency for the
   background (alpha=0 → palette index 0). A few use a solid corner-pixel color instead
   that happens to equal the palette's own index 0 entry — check `im.getpixel((0,0))`
   against `pal[0]` if alpha-based detection finds no transparent pixels.
4. **Assign IDs**: next free `OBJ_EVENT_GFX_*` = current max + 1 in
   `include/constants/event_objects.h`; next free `OBJ_EVENT_PAL_TAG_*` = current max +
   1 in the same file (stay under `0x11FF`/`OBJ_EVENT_PAL_TAG_NONE`, or use the large
   gap after it, e.g. `0x1200+`). **Check both for collisions before writing anything.**
5. **Wire in 6 places**, matching an existing single-line-style HNS entry as a template
   (e.g. search for `gObjectEventGraphicsInfo_Whitney_hns` as a good reference — avoid
   entries using the multi-line `.field = value,` struct style, some exist mixed in and
   will break naive text-insertion scripts):
   - `include/constants/event_objects.h` — `#define OBJ_EVENT_GFX_X` and
     `#define OBJ_EVENT_PAL_TAG_X`, **and bump `NUM_OBJ_EVENT_GFX`**.
   - `src/data/object_events/object_event_graphics.h` — palette + pic `INCBIN_U16`/`_U32`
     declarations.
   - `src/data/object_events/object_event_pic_tables.h` — `SpriteFrameImage` array,
     one `overworld_frame(gObjectEventPic_X, tiles_w, tiles_h, i)` line per frame.
   - `src/data/object_events/object_event_graphics_info.h` — the
     `ObjectEventGraphicsInfo` struct (compact single-line form is fine, matches most
     of the file).
   - `src/data/object_events/object_event_graphics_info_pointers.h` — an `extern`
     declaration *and* a `[OBJ_EVENT_GFX_X] = &gObjectEventGraphicsInfo_X,` pointer
     table entry.
   - `src/event_object_movement.c` — `{gObjectEventPal_X, OBJ_EVENT_PAL_TAG_X},` in
     `sObjectEventSpritePalettes[]`.
6. **Build and check for `-Woverride-init`** specifically — that's the signature of the
   `NUM_OBJ_EVENT_GFX` bounds bug if you forget step 4's bump; the actual error message
   won't mention bounds at all.

## What's not done / worth knowing is open

- 18 sprites were permanently deleted for having unrecoverable/uninterpretable pixel
  dimensions (see #11). If more come in from the same source, expect similar quality
  issues (RGBA anti-aliasing, misaligned crops) and budget time for triage.
- `make hns` (the old target) is **not guaranteed to build cleanly anymore** — some
  content was deliberately moved to `sk`-only. This is expected, not a regression, per
  an earlier explicit decision to fully retire Johto as reachable content.
- The rest of Battle Frontier (Battle Tower/Dome/Palace/Arena/Pike/Factory maps
  themselves, beyond the Pyramid+Lounge7 already kept) is still excluded from the `sk`
  build. Nothing is deleted — same retagging process as Pyramid would re-include it
  whenever that becomes wanted.
- `clean_heal_locations()` in `tools/mapjson/mapjson.cpp` has a real, if intermittent,
  non-atomic read/rewrite race under parallel builds (see #8) — not fixed at the root,
  just recovered from once. If `src/data/heal_locations.json` ever looks truncated
  again, that's why; restore from git and rebuild.
