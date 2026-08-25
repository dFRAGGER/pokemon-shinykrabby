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

## The foundational porting work (before this log's window)

Everything below this point happened in earlier sessions, before the conversation this
log was written from began — that conversation picked up mid-way through an already
long porting effort. Included here because it's the work that made the `sk` build
(and everything in the section below) possible in the first place, and because the
original ShinyKrabby repo (`pokemon-shinykrabby(OLD)`) was constantly used as the
reference/source-of-truth throughout it — expect to need it again for anything similar.

**The porting method, in general**: pokehns-expansion is a *different base* than plain
pokeemerald-expansion (ShinyKrabby's own original base) — not a fork of it, so there's no
`git diff` between the two repos. Every piece of ShinyKrabby content had to be manually
re-identified in the OLD repo and manually re-implemented against HNS's differently-
structured codebase (which often has 2-3 conditional build variants —
`#if IS_HNS / #elif IS_FRLG / #else` — where OLD just has one). **When something in the
port looks wrong, missing, or half-finished, the first move is almost always to go find
the equivalent in `pokemon-shinykrabby(OLD)` and compare.** This is how most of the bugs
in the session log above were actually found (the Magikarp text bug, the Oak-vs-Birch
sprite bug, the title screen bubbles/subtitle, the Lavaridge gym trainers, etc.) — not
by reading the port in isolation, but by diffing it against what OLD actually does.

Established convention (also written to persistent memory): **mirror OLD's code
verbatim when porting a mechanic** — copy comparisons/logic exactly rather than
rewriting "equivalently." Deviating from this has caused real bugs before (e.g. an
unusual reversed array-indexing style, `playerObjEventId[gObjectEvents]`, is *correct*
in `bike.c` because it matches OLD's own established pattern there, not a typo to "fix").

### The porymap tileset investigation (led to `porymap_layout.sh`)

Started as "porymap shows magenta/scrambled tiles for Building/General/Snow tilesets" —
turned out not to be a bug at all, just the same dual 512/640-tile-boundary situation
described in this session's log's "porymap tileset toggle" section, except HNS's own
Battle Pyramid content hits the same issue and HNS's own team just lives with it via
manual toggling. `porymap_layout.sh` was written as that toggle mechanism (later made
automatic for builds in this session — see above).

A full migration was then attempted to standardize all ~91 ShinyKrabby-authored layouts
onto the 640 (`layout_version: "hns"`) convention, to eliminate the need to ever toggle
for Tessera content. **This was aborted partway through** — 27 of 91 maps hit an
unfixable metatile ID overflow (needed more than 384 secondary metatile slots, which
doesn't exist under the 640 boundary for those tilesets). Explicit user call: "Stop
here, revert everything to Emerald." Fully reverted and verified at the time. Separately
investigated whether patching porymap itself to understand per-map `layoutVersion`
would be a better permanent fix — concluded tractable (~1 day of work) but parked,
not pursued.

### The full content-completeness audit

At some point the user asked for a systematic audit: compare `pokemon-shinykrabby(OLD)`
against the port for *everything* not yet ported, not just things noticed by accident.
This turned up a large categorized punch list, worked through over several passes:

- **Priority 1** (done first): clock-trigger script (a `FLAG_SET_WALL_CLOCK`-gated Mom
  reaction in the player's house), textbox palette *and* graphics (the user had changed
  the actual PNG, not just the palette — confirmed later to be byte-identical to OLD via
  MD5), map-preview-on-warp art (explicitly *not* the full map-preview-on-warp *system*
  — that stayed out of scope the whole time, called "visionpreview" in later
  discussion).
- **NPC sprites**: an initial pass ported 129 sprites (this session's log above covers
  a much later, much bigger second batch of ~170 more, plus fixing 145 FRLG sprites that
  were present but disabled).
- **Title screen**: initial pass — Shiny Krabby logo, shimmer animation, boot-skip.
  (This session's log above covers a follow-up fix — the bubbles animation and the
  "SHINYKRABBY VERSION" subtitle text, both missed in this initial pass.)
- **Region map**: Tessera's own layout/graphics/heal locations replacing Hoenn's. Hit
  and fixed a real pre-existing bug this unmasked: 65 mapsec names were all aliased to
  value 0 across the `map_sections`/`hns_map_sections` JSON lists, and 7 SK mapsecs
  referenced by map.jsons were never defined at all.
- **Theme renaming**: 67 berry names, 68 item names/prices, Berry Blender → "The
  Grinder", Hoenn → "Tessera" in strings, Gentleman trainer class → "Faculty".
- **Mud puddle visual effects**, **Herb Grinder battle effects** (5 consumers) — ported.
- **A config-define review pass**, applied per explicit user confirmation on each:
  `OW_ROCK_CLIMB_FIELD_MOVE`, `OW_HM_ITEMS_ALLOW_FIELD_USE` (new define, didn't exist
  in OLD, added), `OW_SHOW_ITEM_DESCRIPTIONS`, `OW_POPUP_GENERATION`/`TIME_MODE`,
  `OW_UNION_DISABLE_CHECK`, `B_RUN_TRAINER_BATTLE`, `I_REUSABLE_TMS`,
  `DEBUG_OVERWORLD_IN_MENU`, plus `B_FLAG_NO_CATCHING`/`B_FLAG_FOLLOWERS_DISABLED`
  repointed to SK's own flags (`FLAG_NOCATCH_ENCOUNTER`, `FLAG_DISABLE_FOLLOWER_POKEMON`).
- **Rock Climb → "Dancing Boots"/"Climbing Rope"** item reskin.
- **Cycling Road pull-right/pull-left bike mechanics** — added by mirroring the
  existing pull-down mechanic exactly (per the "mirror OLD verbatim" convention above).
- **Custom door animation** for the `newsmalltownlab`/small-town-wood tileset — found
  and fixed a missing `extern` declaration for `gTileset_newsmalltownlab` (and, while
  there, for `gTileset_Snow`/`AutumnRuins`/`BrickCity`/`ShadyForest` too — all 5
  originally-custom tilesets were missing from the central extern-declarations file).
- **The full Birch/Oak intro speech rewrite**: `oak_speech_hns.inc`'s text content fully
  replaced with OLD's "Prof Birds" internship-comedy script (kept the `gText_Oak_*`
  symbol *names*, replaced their string *content*), Wooper → Magikarp at 2 sprite call
  sites, the settings-disclaimer text rewritten in Prof Birds' voice as a fake contract
  clause (HNS's cutscene background/transition mechanic deliberately kept as-is, per
  explicit request). This is also where the `AddNewGameOakObject` vs
  `AddNewGameBirchObject` sprite bug (fixed in this session's log above) and the
  `gText_ThisIsAPokemon` dead-code bug (also fixed above) originated — the text got
  rewritten correctly at the time, but two separate call sites referencing the *wrong*
  underlying symbols weren't caught until much later.
- **Miscellaneous fixes along the way**: `heal_location.c` Erp City special-case,
  `save_location.c` Maasje Pokémon Center added to the save-list, `pokedex_area_screen.c`
  map-group handling for Tessera, a stale/broken `secret_base.c` table entry removed,
  trainer obedience thresholds shifted up by one badge tier across the board, Lavaridge
  gym's trainer roster swapped to SK's own trainers, a `battle_bg.c` fallback fixed to
  use the actual current battle environment instead of a hardcoded default, a dedicated
  palette split off for the Trick House statue (previously sharing a palette it didn't
  need to), a new `RefreshObjectEventGraphicsIdByLocalIdAndMap` function added for
  dynamically-repalette'd sprites like Castform (plain
  `ObjectEventSetGraphicsIdByLocalIdAndMap` doesn't reload dynamic palettes mid-scene),
  and several stock Hoenn trainers (Rose, Cindy, Gabrielle, Sawyer) removed from
  `match_call.c`'s always-active trainer table since they're not part of Tessera.
- **The "DAAN" match-call NPC** (a personal cameo) — started here, actually finished in
  this session's log above (commit `579e5b959a`) after being interrupted mid-edit.

### Things that came up and are worth remembering from this earlier work

- **Struct size differences are real and can silently truncate data**: HNS's
  `struct TrainerClass` has `name[13]` where OLD has `name[14]` — a 13-character name
  that fit fine in OLD overflowed here (`"FACULTY GRUNT"` needed shortening to
  `"FAC. GRUNT"`). Any struct ported from OLD that has fixed-size arrays needs its sizes
  double-checked against HNS's own definition, not assumed identical.
- **An em-dash (`—`, U+2014) in a text string literal caused a bizarre, misleading
  compiler error** — "function used but never defined" for *unrelated* functions later
  in the same file, not any kind of encoding error. Root cause: the charmap couldn't
  handle it, which corrupted the compiler's parse state for the rest of the file. Fixed
  by using `...` instead, which also happens to match OLD's own established ellipsis
  style. If a similarly bizarre, seemingly-unrelated compile error shows up after adding
  new text, check for exotic Unicode punctuation first.
- **Careful branch-tracing matters more than text-matching** when a construct HNS has
  is a `#if IS_HNS / #elif IS_FRLG / #else` triple (or double) branch and OLD's
  equivalent code is a plain single branch. More than once, a change that looked right
  by literal text search actually landed in a branch that's *inactive* for this build
  (e.g. `battle_setup.c`'s `gRematchTable` has an inactive `#else` branch still carrying
  OLD's original Hoenn trainer names, harmless dead code — vs `match_call.c`'s
  `sMatchCallTrainers[]`, which is unguarded/always-active and *did* need the same
  change). Always confirm which branch is actually compiled before editing.

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
