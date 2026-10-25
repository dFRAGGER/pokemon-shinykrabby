# Marshduke delta trainer and NPC placement

## Scope and progression

67 world-building NPCs are scripted across 16 maps, separate from the trainers.

30 new single-battle trainers, exactly 59 party Pokemon. All use ordinary level-up
moves, no held items and zero IVs, with the existing Basic Trainer AI.
Existing trainer ids are unchanged; new ids occupy SK offsets 128 through 157.

| Map | Trainers | Pokemon | Levels |
| --- | --- | --- | --- |
| Route013_2 | 12 | 24 | 17-19 |
| Route013 | 1 | 1 | 19 |
| Route014 | 11 | 22 | 19-21 |
| Marshduke_Indoor_Garden | 4 | 8 | 20-22 |
| Marshduke_Indoor_Garden_Cemetery | 2 | 4 | 20-21 |
| Total | 30 | 59 | 17-22 |

The roster uses species in the HNS Johto regional list. Evolution stages follow
this repository's species data (for example Pidgeotto 18, Gloom 21, Golbat 22).
Ursaring is discussed as wild scenery; its unevolved Teddiursa is used at level 18.

## Placement instructions

Existing actor placements are preserved. Route013 keeps Ranger Sanne; seven
trainers were moved from that map with unchanged parties, dialogue and trainer ids.
The transferred trainers are staged for manual placement:

- Route013_2: Tessa, Niels, Koen and Iris at (2,2), (4,2), (6,2), (8,2).
- Route014: Pim, Lotte and Ward at (2,2), (4,2), (6,2).

Only those new rows need placing for this redistribution. Staging coordinates can
be on walls or water; set suitable terrain, elevation, facing and sight range in
Porymap before emulator testing. Other maps may still have original staging rows.
Trainers have independent intro, defeat and repeat dialogue and no hide flags.

The cemetery now keeps only trainers Selma and Mara, plus the PlantKeeper and
BouquetVisitor NPCs. Its retained actors have not been repositioned.
The garden's four existing placeholder objects are untouched; the transferred
actors are appended and need final placement:

- Trainers Cas, Bert, Noor and Ivo: (2,2), (4,2), (6,2), (8,2).
- DollChild, StoneCaretaker and QuietVisitor: (2,12), (4,12), (6,12).
- The child's decorative Clefairy doll: (8,12); place it near the child.

Their scripts now live in the garden's scripts.pory, with garden-prefixed labels.
Trainer ids, parties, dialogue and the plant keeper's story-flag branch are unchanged.

The engine can load 16 actors at once, including the player/follower. Spread the
final placements out instead of keeping entire rows within the same screen.
Every map remains below the 64 object-template limit.

Route014's existing Ari actor remains at (88,19), currently object 16, with named
local id `LOCALID_ROUTE014_ARI`. His movement/removal commands use that local id
so reordering objects does not redirect his scene to a trainer. Keep his position
until updating the scripted coordinates. Existing bike and mud scripts and all
coordinate events are retained. No new automatic cutscenes are added.

Ranger huts have observation advice specific to each viewpoint. A binocular camera
sequence or spawned wild encounter is not implemented here: it requires the final
viewpoint and Pokemon coordinates. The boathouse is patrol storage, not a fish shop.
Research NPCs form six monk/researcher teams across two floors; none identifies
the source of the visions. The library's existing dialogue is retained.
The research maps currently have no warp events: wire their entrances/stairs when
placing them. Existing decorative item-ball placeholders are retained.

The cemetery plant keeper and several observers change dialogue after the
cathedral tour. This uses its existing flag without adding story prerequisites.

## Trainer roster

Validation: `make sk -j24` completed successfully. Count and reference checks
confirmed 30 unique battles and 59 party members, regional-dex membership,
numeric evolution thresholds, in-bounds staging positions, and linked actor
scripts plus battle picture/palette assets. Emulator checks follow final placement.

| Order | Map | Name | Class / battle picture | Party and levels | Script |
| --- | --- | --- | --- | --- | --- |
| 1 | Route013_2 | Fenner | Fisherman / Fisherman | Wooper 17, Psyduck 17 | `Route013_2_Trainer_Fenner` |
| 2 | Route013_2 | Mieke | Lass / Lass | Oddish 17, Paras 17 | `Route013_2_Trainer_Mieke` |
| 3 | Route013_2 | Otis | Camper / Camper | Teddiursa 18 | `Route013_2_Trainer_Otis` |
| 4 | Route013_2 | Jori | Fisherman / Fisherman | Poliwag 17, Goldeen 17, Krabby 18 | `Route013_2_Trainer_Jori` |
| 5 | Route013_2 | Ellis | Pkmn Ranger / Pokemon Ranger F | Nidorina 18, Hoothoot 18 | `Route013_2_Trainer_Ellis` |
| 6 | Route013_2 | Len | Hiker / Hiker | Furret 18 | `Route013_2_Trainer_Len` |
| 7 | Route013_2 | Runa | Picnicker / Picnicker | Venonat 18, Spinarak 19 | `Route013_2_Trainer_Runa` |
| 8 | Route013_2 | Bo | Psychic / Psychic M | Ekans 19, Drowzee 19 | `Route013_2_Trainer_Bo` |
| 9 | Route013_2 | Tessa | Picnicker / Picnicker | Pidgeotto 18, Spearow 18 | `Route013_2_Trainer_Tessa` |
| 10 | Route013_2 | Niels | Camper / Camper | Skiploom 18, Flaaffy 18 | `Route013_2_Trainer_Niels` |
| 11 | Route013 | Sanne | Pkmn Ranger / Pokemon Ranger F | Stantler 19 | `Route013_Trainer_Sanne` |
| 12 | Route013_2 | Koen | Pkmn Ranger / Pokemon Ranger M | Nidorino 18, Nidorina 18, Growlithe 19 | `Route013_2_Trainer_Koen` |
| 13 | Route013_2 | Iris | Lass / Lass | Butterfree 19, Beedrill 19 | `Route013_2_Trainer_Iris` |
| 14 | Route014 | Pim | Scientist FRLG / Scientist FRLG | Magnemite 19, Voltorb 19 | `Route014_Trainer_Pim` |
| 15 | Route014 | Lotte | Picnicker / Picnicker | Azumarill 20 | `Route014_Trainer_Lotte` |
| 16 | Route014 | Ward | Pkmn Ranger / Pokemon Ranger M | Noctowl 20, Flaaffy 20, Bellsprout 20 | `Route014_Trainer_Ward` |
| 17 | Route014 | Derk | Fisherman / Fisherman | Poliwag 19, Krabby 19 | `Route014_Trainer_Derk` |
| 18 | Route014 | Evi | Lass / Lass | Aipom 19, Snubbull 19 | `Route014_Trainer_Evi` |
| 19 | Route014 | Hugo | Camper / Camper | Croconaw 20 | `Route014_Trainer_Hugo` |
| 20 | Route014 | Fenna | Pkmn Ranger / Pokemon Ranger F | Raticate 20, Psyduck 20, Tentacool 20 | `Route014_Trainer_Fenna` |
| 21 | Route014 | Teun | Black Belt / Black Belt | Machop 20, Geodude 20 | `Route014_Trainer_Teun` |
| 22 | Route014 | Roos | Picnicker / Picnicker | Gloom 21, Yanma 21 | `Route014_Trainer_Roos` |
| 23 | Route014 | Milo | Hiker / Hiker | Wartortle 21 | `Route014_Trainer_Milo` |
| 24 | Route014 | Kira | Battle Girl / Battle Girl | Fearow 21, Quagsire 21, Flaaffy 21 | `Route014_Trainer_Kira` |
| 25 | Marshduke_Indoor_Garden_Cemetery | Selma | Hex Maniac / Hex Maniac | Gastly 20, Cubone 20 | `Marshduke_Indoor_Garden_Cemetery_Trainer_Selma` |
| 26 | Marshduke_Indoor_Garden | Cas | Psychic / Psychic M | Natu 20, Drowzee 20 | `Marshduke_Indoor_Garden_Trainer_Cas` |
| 27 | Marshduke_Indoor_Garden_Cemetery | Mara | Hex Maniac / Hex Maniac | Misdreavus 21, Murkrow 21 | `Marshduke_Indoor_Garden_Cemetery_Trainer_Mara` |
| 28 | Marshduke_Indoor_Garden | Bert | Expert / Expert M | Ivysaur 21, Weepinbell 21 | `Marshduke_Indoor_Garden_Trainer_Bert` |
| 29 | Marshduke_Indoor_Garden | Noor | Psychic / Psychic F | Kadabra 22, Noctowl 22 | `Marshduke_Indoor_Garden_Trainer_Noor` |
| 30 | Marshduke_Indoor_Garden | Ivo | Expert / Expert M | Golbat 22, Ariados 22 | `Marshduke_Indoor_Garden_Trainer_Ivo` |

## Object placement index

### Route013_2

| Object ID | Position | Script |
| --- | --- | --- |
| 1 | (17, 18) | `Route013_2_Trainer_Fenner` |
| 2 | (13, 47) | `Route013_2_Trainer_Mieke` |
| 3 | (15, 7) | `Route013_2_Trainer_Otis` |
| 4 | (15, 82) | `Route013_2_Trainer_Jori` |
| 5 | (17, 94) | `Route013_2_Trainer_Ellis` |
| 6 | (11, 67) | `Route013_2_Trainer_Len` |
| 7 | (19, 105) | `Route013_2_Trainer_Runa` |
| 8 | (21, 1) | `Route013_2_Trainer_Bo` |
| 9 | (14, 40) | `Route013_2_NPC_MarshGuide` |
| 10 | (14, 58) | `Route013_2_NPC_BootCollector` |
| 11 | (14, 74) | `Route013_2_NPC_RootWatcher` |
| 12 | (10, 10) | `Route013_2_NPC_PicnicCook` |
| 13 | (22, 27) | `Route013_2_NPC_Reporter` |
| 14 | (24, 27) | `Route013_2_NPC_Cameraman` |
| 15 | (12, 28) | `Route013_2_NPC_BicycleVisitor` |
| 16 | (8, 103) | `Route013_2_NPC_OldSurveyor` |
| 17 | (2, 2) | `Route013_2_Trainer_Tessa` |
| 18 | (4, 2) | `Route013_2_Trainer_Niels` |
| 19 | (6, 2) | `Route013_2_Trainer_Koen` |
| 20 | (8, 2) | `Route013_2_Trainer_Iris` |

### Route013

| Object ID | Position | Script |
| --- | --- | --- |
| 1 | (6, 2) | `Route013_Trainer_Sanne` |
| 2 | (73, 40) | `Route013_NPC_CathedralVisitor` |

### Route014

| Object ID | Position | Script |
| --- | --- | --- |
| 1 | (22, 24) | `Route014_Trainer_Derk` |
| 2 | (39, 7) | `Route014_Trainer_Evi` |
| 3 | (25, 12) | `Route014_Trainer_Hugo` |
| 4 | (7, 11) | `Route014_Trainer_Fenna` |
| 5 | (56, 15) | `Route014_Trainer_Teun` |
| 6 | (12, 8) | `Route014_Trainer_Roos` |
| 7 | (12, 4) | `Route014_Trainer_Milo` |
| 8 | (13, 4) | `Route014_Trainer_Kira` |
| 9 | (97, 18) | `Route014_NPC_BridgeCarpenter` |
| 10 | (71, 9) | `Route014_NPC_OldRoad` |
| 11 | (37, 15) | `Route014_NPC_RiverNotebook` |
| 12 | (45, 29) | `Route014_NPC_RangerDirections` |
| 13 | (49, 18) | `Route014_NPC_YoungRunner` |
| 14 | (11, 3) | `Route014_NPC_Sketchbook` |
| 15 | (32, 10) | `Route014_NPC_PatientAngler` |
| 16 | (88, 19) | `Route014_Broken_Bridge_Ari` |
| 17 | (2, 2) | `Route014_Trainer_Pim` |
| 18 | (4, 2) | `Route014_Trainer_Lotte` |
| 19 | (6, 2) | `Route014_Trainer_Ward` |

### Marshduke_Indoor_Garden_Cemetery

| Object ID | Position | Script |
| --- | --- | --- |
| 1 | (2, 2) | `Marshduke_Indoor_Garden_Cemetery_Trainer_Selma` |
| 2 | (6, 2) | `Marshduke_Indoor_Garden_Cemetery_Trainer_Mara` |
| 3 | (2, 12) | `Marshduke_Indoor_Garden_Cemetery_NPC_PlantKeeper` |
| 4 | (4, 12) | `Marshduke_Indoor_Garden_Cemetery_NPC_BouquetVisitor` |

### Marshduke_Indoor_Garden

| Object ID | Position | Script |
| --- | --- | --- |
| 1 | (27, 27) | `NULL` |
| 2 | (32, 15) | `NULL` |
| 3 | (19, 18) | `NULL` |
| 4 | (32, 7) | `NULL` |
| 5 | (2, 2) | `Marshduke_Indoor_Garden_Trainer_Cas` |
| 6 | (4, 2) | `Marshduke_Indoor_Garden_Trainer_Bert` |
| 7 | (6, 2) | `Marshduke_Indoor_Garden_Trainer_Noor` |
| 8 | (8, 2) | `Marshduke_Indoor_Garden_Trainer_Ivo` |
| 9 | (2, 12) | `Marshduke_Indoor_Garden_NPC_DollChild` |
| 10 | (4, 12) | `Marshduke_Indoor_Garden_NPC_StoneCaretaker` |
| 11 | (6, 12) | `Marshduke_Indoor_Garden_NPC_QuietVisitor` |
| 12 | (8, 12) | `NULL` |

### MarshDukeCity

| Object ID | Position | Script |
| --- | --- | --- |
| 1 | (2, 2) | `MarshDukeCity_NPC_RangerHuts` |
| 2 | (4, 2) | `MarshDukeCity_NPC_ResearchDirections` |
| 3 | (6, 2) | `MarshDukeCity_NPC_LibraryVisitor` |
| 4 | (8, 2) | `MarshDukeCity_NPC_Pilgrim` |
| 5 | (10, 2) | `MarshDukeCity_NPC_DeltaResident` |
| 6 | (12, 2) | `MarshDukeCity_NPC_CemeteryDirections` |

### Route013_Estuary

| Object ID | Position | Script |
| --- | --- | --- |
| 1 | (2, 2) | `Route013_Estuary_NPC_WoodlandPatrol` |
| 2 | (4, 2) | `Route013_Estuary_NPC_ReedPatrol` |
| 3 | (6, 2) | `Route013_Estuary_NPC_SurveyVolunteer` |

### Route014_Estuary

| Object ID | Position | Script |
| --- | --- | --- |
| 1 | (2, 2) | `Route014_Estuary_NPC_HutCoordinator` |
| 2 | (4, 2) | `Route014_Estuary_NPC_BoatWarden` |
| 3 | (6, 2) | `Route014_Estuary_NPC_Visitor` |
| 4 | (8, 2) | `Route014_Estuary_NPC_FootprintReader` |
| 5 | (117, 6) | `NULL` |

### Route14_Estuary_Indoor_House1

| Object ID | Position | Script |
| --- | --- | --- |
| 1 | (2, 2) | `Route14_Estuary_Indoor_House1_NPC_WoodlandRanger` |
| 2 | (4, 2) | `Route14_Estuary_Indoor_House1_NPC_WoodlandObserver` |

### Route14_Estuary_Indoor_House2

| Object ID | Position | Script |
| --- | --- | --- |
| 1 | (2, 2) | `Route14_Estuary_Indoor_House2_NPC_ReedsRanger` |
| 2 | (4, 2) | `Route14_Estuary_Indoor_House2_NPC_ReedsObserver` |

### Route14_Estuary_Indoor_House3

| Object ID | Position | Script |
| --- | --- | --- |
| 1 | (2, 2) | `Route14_Estuary_Indoor_House3_NPC_PoolsRanger` |
| 2 | (4, 2) | `Route14_Estuary_Indoor_House3_NPC_PoolsObserver` |

### Route14_Estuary_Indoor_House4

| Object ID | Position | Script |
| --- | --- | --- |
| 1 | (2, 2) | `Route14_Estuary_Indoor_House4_NPC_FloodplainRanger` |
| 2 | (4, 2) | `Route14_Estuary_Indoor_House4_NPC_FloodplainObserver` |

### Route14_Estuary_Indoor_Boathouse

| Object ID | Position | Script |
| --- | --- | --- |
| 1 | (2, 2) | `Route14_Estuary_Indoor_Boathouse_NPC_PatrolStores` |
| 2 | (4, 2) | `Route14_Estuary_Indoor_Boathouse_NPC_LogKeeper` |

### Route14_Indoor_House1

| Object ID | Position | Script |
| --- | --- | --- |
| 1 | (2, 2) | `Route14_Indoor_House1_NPC_CausewayResident` |
| 2 | (4, 2) | `Route14_Indoor_House1_NPC_BridgeAssistant` |

### Marshduke_Indoor_ResearchCenter

| Object ID | Position | Script |
| --- | --- | --- |
| 1 | (2, 2) | `Marshduke_Indoor_ResearchCenter_NPC_Reception` |
| 2 | (4, 2) | `Marshduke_Indoor_ResearchCenter_NPC_RekindledResearcher` |
| 3 | (6, 2) | `Marshduke_Indoor_ResearchCenter_NPC_RekindledMonk` |
| 4 | (8, 2) | `Marshduke_Indoor_ResearchCenter_NPC_BalancedResearcher` |
| 5 | (10, 2) | `Marshduke_Indoor_ResearchCenter_NPC_BalancedMonk` |
| 6 | (12, 2) | `Marshduke_Indoor_ResearchCenter_NPC_FirstDawnResearcher` |
| 7 | (14, 2) | `Marshduke_Indoor_ResearchCenter_NPC_FirstDawnMonk` |
| 8 | (17, 11) | `NULL` |

### Marshduke_Indoor_ResearchCenter_2F

| Object ID | Position | Script |
| --- | --- | --- |
| 1 | (2, 2) | `Marshduke_Indoor_ResearchCenter_2F_NPC_DividedResearcher` |
| 2 | (4, 2) | `Marshduke_Indoor_ResearchCenter_2F_NPC_DividedMonk` |
| 3 | (6, 2) | `Marshduke_Indoor_ResearchCenter_2F_NPC_TwoHeartsResearcher` |
| 4 | (8, 2) | `Marshduke_Indoor_ResearchCenter_2F_NPC_TwoHeartsMonk` |
| 5 | (10, 2) | `Marshduke_Indoor_ResearchCenter_2F_NPC_SixthResearcher` |
| 6 | (12, 2) | `Marshduke_Indoor_ResearchCenter_2F_NPC_SixthMonk` |
| 7 | (14, 2) | `Marshduke_Indoor_ResearchCenter_2F_NPC_TranceCoordinator` |
| 8 | (16, 2) | `Marshduke_Indoor_ResearchCenter_2F_NPC_RecordingAssistant` |
| 9 | (1, 9) | `NULL` |

## Towers of the Memories

Marshduke's four tower doors (city warps 12-15) each lead to a three-floor pilgrim tower of
the Order of the Open Eye, dedicated to one cathedral memory. The trainers use the ordinary
Johto Pokemon behind that legend, not the legendaries themselves.

| Tower | Door | Memory | Theme | Prize | Status |
| --- | --- | --- | --- | --- | --- |
| 1 | warp 14 (6,27) | Balanced Sky | ordinary birds | TM Roost | implemented |
| 2 | warp 15 (42,12) | Rekindled | fire / electric / water commoners | TM Will-O-Wisp | implemented |
| 3 | warp 13 (9,68) | Divided World | land / sea / sky, Dratini last | TM Dragon Pulse | implemented |
| 4 | warp 12 (72,64) | Two Hearts | double battles, paired keepers | Soothe Bell | implemented |

Floor pattern (Tower 1 is the reference):

- **1F:** steward explains the rules: heal before climbing, no rest upstairs.
- **2F gauntlet:** a `MAP_SCRIPT_ON_FRAME_TABLE` entry on `VAR_TEMP_1 == 0` (fires on arrival, after
  the automatic stair-exit step; a coord trigger would miss that scripted step)
  runs one `lockall` script with three `trainerbattle_no_intro` battles. Each challenger
  object stands on the up-stairs, is spawned with `addobject`, walks to the player, battles,
  walks back up and is removed. All challengers in all towers share
  `FLAG_HIDE_MARSHDUKE_TOWER_CHALLENGERS`: it is set in ON_TRANSITION and never cleared,
  because `addobject` ignores hide flags. Losing whites out; the first two trainer flags are
  cleared at the start of every run, and only the last trainer's defeat marks the tower as
  cleared (ON_TRANSITION then sets `VAR_TEMP_1` so the trigger stops firing).
- **3F:** the last keeper as an NPC gives the prize once (one `FLAG_ITEM_MARSHDUKE_TOWERn_REWARD`
  per tower), plus a window sign.

Tower 1 trainers (`SK_TRAINERS_START + 158..160`): Bird Keeper Robin (Pidgeotto 21,
Spearow 21), Sage Owen (Hoothoot 22, Natu 22, Murkrow 22), Sky Keeper Edwin (Fearow 23,
Delibird 23, Noctowl 24). Walk paths assume the Tower 1 stair positions (down-stairs (2,1),
up-stairs (5,1)); adjust the `moves(...)` paths if another tower's stairs differ. The 3F
window sign sits at (2,1) as a placeholder; move it onto the actual window tile.

Towers 2-4 trainers (`SK_TRAINERS_START + 161..169`), same levels as Tower 1:

- Tower 2: Firebreather Oscar (Growlithe 21, Slugma 21), Super Nerd Gordon (Flaaffy 22,
  Elekid 22, Voltorb 22), Kimono Girl Clara (Poliwhirl 23, Chinchou 23, Azumarill 24).
- Tower 3: Hiker Harold (Sandshrew 21, Phanpy 21), Sailor Finn (Tentacool 22, Shellder 22,
  Krabby 22), Dragon Tamer Arthur (Gligar 23, Quagsire 23, Dratini 24).
- Tower 4 (all `Double Battle: Yes`): Twins Lia & Rose (Nidorina 21, Nidorino 21), Young Couple
  Tom & Anna (Miltank 22, Tauros 22), Old Couple Al & Edith (Clefairy 23, Jigglypuff 23,
  Togetic 24, Chansey 24). Each pair is two objects: the first stops at (5,5), the second at
  (5,4). The gauntlet first counts usable party Pokemon
  (`CountPartyAliveNonEggMons_IgnoreVar0x8004Slot` with `VAR_0x8004 = PARTY_SIZE`); with fewer
  than two the player is warped back to 1F.

Towers 3 and 4 were created by copying the Tower 2 maps and layouts (registered in
`layouts.json`, `map_groups.json` and appended to `data/event_scripts.s`), so they share its
8x7 rooms. Prize flags: `FLAG_ITEM_MARSHDUKE_TOWER1..4_REWARD` (`SK_FLAGS_START + 191..194`).
