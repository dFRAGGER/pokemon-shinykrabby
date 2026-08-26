#ifndef GUARD_CONSTANTS_FLAGS_SK_H
#define GUARD_CONSTANTS_FLAGS_SK_H

// ShinyKrabby (Tessera) story flags.
// Lives in the SK_FLAGS reserved block (see flags.h) - offsets below are absolute
// bit indices baked into save files, do not renumber an existing flag.

// --- Reclaimed HNS Johto/Kanto/Alola content-flag addresses ---
// 542 of HNS's own content-flag addresses (flags_hns.h's "Content flags" and
// "Extended content flags" ranges) were deleted from flags_hns.h - genuinely dead
// for the sk build, verified against the actual assembled data/event_scripts.o
// output (not just src/*.c: reachability tracing through data/scripts/*.inc and
// per-map scripts turned out to be insufficient - some "dead" scripts are still
// unconditionally assembled even when never called, so an address is only truly
// free once nothing anywhere in the final linked object references its name).
// This costs zero save-block bytes: the flags[] bit array is already sized to
// cover this whole range regardless, via SK_FLAGS_END below.
//
// Freed, by original section/base constant (see flags_hns.h's remaining content
// for what's still in use under each - anything not currently #defined there is
// free to claim):
//   HNS_ITEM_BALL_START (Item Ball Flags):        226 freed
//   HNS_EXTENDED_CONTENT_START (Extended content): 182 freed
//   HNS_ITEMS_2_START (Unused hidden items):       119 freed
//   scattered small sections (Hide Pokemon, NPC Trade, Move Tutor,
//     Battle Frontier, Safari Zone, Feature/Toggle, Misc, Legendary/Boss
//     Defeated, Legendary/Rare Caught, Quest/Story Progress):  15 freed
//
// To use one: pick any free offset under the relevant base constant, add
// #define FLAG_YOUR_NEW_THING (BASE + N) here (or add a new NUM_SK_FLAGS-style
// entry if none of these fit) - do not reuse an offset flags_hns.h still defines.

// Starters
#define FLAG_RECEIVED_STARTER_CHOICE                     (SK_FLAGS_START + 140)
#define FLAG_RECEIVED_STARTER_BULBASAUR                  (SK_FLAGS_START + 137)
#define FLAG_RECEIVED_STARTER_CHARMANDER                 (SK_FLAGS_START + 138)
#define FLAG_RECEIVED_STARTER_CHIKORITA                  (SK_FLAGS_START + 139)
#define FLAG_RECEIVED_STARTER_CYNDAQUIL                  (SK_FLAGS_START + 141)
#define FLAG_RECEIVED_STARTER_MUDKIP                     (SK_FLAGS_START + 142)
#define FLAG_RECEIVED_STARTER_SQUIRTLE                   (SK_FLAGS_START + 143)
#define FLAG_RECEIVED_STARTER_TORCHIC                    (SK_FLAGS_START + 144)
#define FLAG_RECEIVED_STARTER_TOTODILE                   (SK_FLAGS_START + 145)
#define FLAG_RECEIVED_STARTER_TREECKO                    (SK_FLAGS_START + 146)

// Visited
#define FLAG_VISITED_ERP_CITY                            (SK_FLAGS_START + 175)
#define FLAG_VISITED_LIONSARCH_CITY                      (SK_FLAGS_START + 176)
#define FLAG_VISITED_MAASJE                              (SK_FLAGS_START + 177)
#define FLAG_VISITED_MIST_CITY                            (SK_FLAGS_START + 178)
#define FLAG_VISITED_SILTROOT_TOWN                       (SK_FLAGS_START + 179)

// Hide Pokemon / NPC
#define FLAG_HIDE_FACULTY_AT_WESTLION_MINE               (SK_FLAGS_START + 46)
#define FLAG_HIDE_INTERN_BIRDS_LAB                       (SK_FLAGS_START + 47)
#define FLAG_HIDE_JACOB_SIENNA                           (SK_FLAGS_START + 48)
#define FLAG_HIDE_LIONSARCH_BARRY_SENDOFF                (SK_FLAGS_START + 49)
#define FLAG_HIDE_LIONSARCH_CONRECTOR_SENDOFF            (SK_FLAGS_START + 50)
#define FLAG_HIDE_LIONSARCH_FACULTY_SHIPS                (SK_FLAGS_START + 51)
#define FLAG_HIDE_LIONSARCH_RECTOR_SENDOFF               (SK_FLAGS_START + 52)
#define FLAG_HIDE_MINING_CAVE_B1F_SCIENTIST               (SK_FLAGS_START + 53)
#define FLAG_HIDE_MOM_SHOES                              (SK_FLAGS_START + 54)
#define FLAG_HIDE_NASH_DAVID                             (SK_FLAGS_START + 55)
#define FLAG_HIDE_PETELONGFELLOW                         (SK_FLAGS_START + 56)
#define FLAG_HIDE_RECTOR_ELECTABUZZ_AFTER_BATTLE         (SK_FLAGS_START + 57)
#define FLAG_HIDE_ROUTE03_CLIFFSIDE_WATCHER               (SK_FLAGS_START + 58)
#define FLAG_HIDE_SCOTT_AFTER_CONVO                      (SK_FLAGS_START + 59)
#define FLAG_HIDE_SCOTT_LIONSARCH_CITY                   (SK_FLAGS_START + 60)
#define FLAG_HIDE_SCOTT_OUTSIDE_BOAT                     (SK_FLAGS_START + 61)
#define FLAG_HIDE_SILTROOTTOWN_SHED_GUARD                (SK_FLAGS_START + 62)
#define FLAG_UNHIDE_GUARD_SHED_SILTROOTTOWN               (SK_FLAGS_START + 172)

// Hidden items
#define FLAG_HIDDEN_ITEM_BAT_CAVE_EVER_STONE             (SK_FLAGS_START + 22)
#define FLAG_HIDDEN_ITEM_EASTLION_POKE_BALL              (SK_FLAGS_START + 23)
#define FLAG_HIDDEN_ITEM_MAASJE_POTION_1                 (SK_FLAGS_START + 24)
#define FLAG_HIDDEN_ITEM_MAASJE_POTION_2                 (SK_FLAGS_START + 25)
#define FLAG_HIDDEN_ITEM_MAASJE_SUPER_POTION              (SK_FLAGS_START + 26)
#define FLAG_HIDDEN_ITEM_MISTCITY_POKE_BALL              (SK_FLAGS_START + 27)
#define FLAG_HIDDEN_ITEM_MISTCITY_SUPER_POTION           (SK_FLAGS_START + 28)
#define FLAG_HIDDEN_ITEM_ROUTE04_ETHER                   (SK_FLAGS_START + 29)
#define FLAG_HIDDEN_ITEM_ROUTE04_HEART_SCALE             (SK_FLAGS_START + 30)
#define FLAG_HIDDEN_ITEM_ROUTE04_REVIVE                  (SK_FLAGS_START + 31)
#define FLAG_HIDDEN_ITEM_ROUTE04_STARDUST                (SK_FLAGS_START + 32)
#define FLAG_HIDDEN_ITEM_ROUTE05_FULL_HEAL               (SK_FLAGS_START + 33)
#define FLAG_HIDDEN_ITEM_ROUTE_02_ANTIDOTE               (SK_FLAGS_START + 34)
#define FLAG_HIDDEN_ITEM_ROUTE_02_HEART_SCALE            (SK_FLAGS_START + 35)
#define FLAG_HIDDEN_ITEM_ROUTE_02_POTION                 (SK_FLAGS_START + 36)
#define FLAG_HIDDEN_ITEM_ROUTE_03_PARLYZ_HEAL            (SK_FLAGS_START + 37)
#define FLAG_HIDDEN_ITEM_ROUTE_03_POKE_BALL              (SK_FLAGS_START + 38)
#define FLAG_HIDDEN_ITEM_SHROOMSHOP_BALM_MUSHROOM        (SK_FLAGS_START + 39)
#define FLAG_HIDDEN_ITEM_SHROOMSHOP_BIG_MUSHROOM         (SK_FLAGS_START + 40)
#define FLAG_HIDDEN_ITEM_SHROOMSHOP_MAX_MUSHROOM          (SK_FLAGS_START + 41)
#define FLAG_HIDDEN_ITEM_SHROOMSHOP_TINY_MUSHROOM        (SK_FLAGS_START + 42)
#define FLAG_HIDDEN_ITEM_SILTROOT_DEFECTOR_TM_THIEF      (SK_FLAGS_START + 43)
#define FLAG_HIDDEN_ITEM_STEELFACTORY_2F_RARE_CANDY      (SK_FLAGS_START + 44)
#define FLAG_HIDDEN_ITEM_WESTLION_REVIVE                 (SK_FLAGS_START + 45)

// Field items (visible item balls)
#define FLAG_ITEM_BAT_CAVE_POKE_BALL                     (SK_FLAGS_START + 71)
#define FLAG_ITEM_COASTAL_CAVE2_QUICK_CLAW               (SK_FLAGS_START + 72)
#define FLAG_ITEM_EASTLION_ELIXIR                        (SK_FLAGS_START + 73)
#define FLAG_ITEM_FRESH_WATER_GYM1                       (SK_FLAGS_START + 74)
#define FLAG_ITEM_FRESH_WATER_GYM2                       (SK_FLAGS_START + 75)
#define FLAG_ITEM_LIONSARCH_GYM_SNOWBALL                 (SK_FLAGS_START + 76)
#define FLAG_ITEM_LIONSARCH_VISITOR_CENTER_FULL_HEAL     (SK_FLAGS_START + 77)
#define FLAG_ITEM_MAASJE_COASTAL_CAVE1                   (SK_FLAGS_START + 78)
#define FLAG_ITEM_MAASJE_POKE_BALL                       (SK_FLAGS_START + 79)
#define FLAG_ITEM_MAASJE_X_ACCURACY                      (SK_FLAGS_START + 80)
#define FLAG_ITEM_MAASJE_X_DEFENSE                       (SK_FLAGS_START + 81)
#define FLAG_ITEM_MISTCITY_POTION                        (SK_FLAGS_START + 82)
#define FLAG_ITEM_MISTCITY_TM_BULK_UP                    (SK_FLAGS_START + 83)
#define FLAG_ITEM_MISTCITY_X_DEFENSE                     (SK_FLAGS_START + 84)
#define FLAG_ITEM_RESEARCH_CENTER_EXP_SHARE              (SK_FLAGS_START + 85)
#define FLAG_ITEM_ROOT_FOSSIL                            (SK_FLAGS_START + 86)
#define FLAG_ITEM_ROUTE02_STATION_MIRACLE_SEED           (SK_FLAGS_START + 87)
#define FLAG_ITEM_ROUTE02_TM_BULLET_SEED                 (SK_FLAGS_START + 88)
#define FLAG_ITEM_ROUTE04_GREAT_BALL                     (SK_FLAGS_START + 89)
#define FLAG_ITEM_ROUTE04_POKE_BALL                      (SK_FLAGS_START + 90)
#define FLAG_ITEM_ROUTE04_POTION                         (SK_FLAGS_START + 91)
#define FLAG_ITEM_ROUTE04_SILK_SCARF                     (SK_FLAGS_START + 92)
#define FLAG_ITEM_ROUTE04_SOFT_SAND                      (SK_FLAGS_START + 93)
#define FLAG_ITEM_ROUTE04_SUPER_POTION                   (SK_FLAGS_START + 94)
#define FLAG_ITEM_ROUTE05_DIRE_HIT                       (SK_FLAGS_START + 95)
#define FLAG_ITEM_ROUTE05_NEVER_MELT_ICE                 (SK_FLAGS_START + 96)
#define FLAG_ITEM_ROUTE_02_POKE_BALL                     (SK_FLAGS_START + 97)
#define FLAG_ITEM_ROUTE_03_ETHER                         (SK_FLAGS_START + 98)
#define FLAG_ITEM_ROUTE_03_GREAT_BALL                    (SK_FLAGS_START + 99)
#define FLAG_ITEM_STEELFACTORY_2F_HM_ROCK_SMASH          (SK_FLAGS_START + 100)
#define FLAG_ITEM_STEELFACTORY_B1F_PP_UP                 (SK_FLAGS_START + 101)
#define FLAG_ITEM_STEELFACTORY_GUARD_SPEC                (SK_FLAGS_START + 102)
#define FLAG_ITEM_STEELFACTORY_SUPER_POTION               (SK_FLAGS_START + 103)
#define FLAG_ITEM_STEELFACTORY_X_SPEED                   (SK_FLAGS_START + 104)
#define FLAG_ITEM_TM23_IRON_TAIL                         (SK_FLAGS_START + 105)
#define FLAG_ITEM_WESTLION_GREAT_BALL                    (SK_FLAGS_START + 107)
#define FLAG_ITEM_WESTLION_TM_CALM_MIND                  (SK_FLAGS_START + 108)

// Received / given
#define FLAG_RECEIVED_CLIMBING_ROPE                      (SK_FLAGS_START + 135)
#define FLAG_RECEIVED_ESCAPE_ROPE                        (SK_FLAGS_START + 136)
#define FLAG_ITEM_TRADED_DOME_FOSSIL                     (SK_FLAGS_START + 106)
#define FLAG_HOUSE1_STARDUST_GIVEN                       (SK_FLAGS_START + 63)
#define FLAG_HOUSE2_NETBALL_GIVEN                        (SK_FLAGS_START + 64)
#define FLAG_HOUSE3_FOUND_BUTTON                         (SK_FLAGS_START + 65)
#define FLAG_HOUSE3_FOUND_CLAMSHELL                      (SK_FLAGS_START + 66)
#define FLAG_HOUSE3_FOUND_COMPASS                        (SK_FLAGS_START + 67)
#define FLAG_HOUSE3_ITEMFINDER_GIVEN                     (SK_FLAGS_START + 68)

// NPC met / conversations
#define FLAG_MET_ARI                                     (SK_FLAGS_START + 118)
#define FLAG_MET_PETE_LONGFELLOW_GYMHILL                 (SK_FLAGS_START + 119)
#define FLAG_MET_ROLLING_TABLE_GUY                       (SK_FLAGS_START + 120)
#define FLAG_JAKUB_CONVO                                 (SK_FLAGS_START + 109)
#define FLAG_JAKUB_CONVO_2                               (SK_FLAGS_START + 110)
#define FLAG_KICKED_OUT_LAB_CONVO                        (SK_FLAGS_START + 111)
#define FLAG_SIENNA_CONVO                                (SK_FLAGS_START + 149)
#define FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1                (SK_FLAGS_START + 150)
#define FLAG_DELIVERED_ALIS_PACKAGE_TO_PETER              (SK_FLAGS_START + 14)
#define FLAG_LIONSARCH_GYM_GUIDE_GAVE_WATER               (SK_FLAGS_START + 112)

// Steel Factory questline
#define FLAG_STEEL_FACTORY_ALL_WIRES_PULLED              (SK_FLAGS_START + 154)
#define FLAG_STEEL_FACTORY_ARON_GUIDING                  (SK_FLAGS_START + 155)
#define FLAG_STEEL_FACTORY_ARON_HIDDEN                   (SK_FLAGS_START + 156)
#define FLAG_STEEL_FACTORY_ARON_INTRO_DONE               (SK_FLAGS_START + 157)
#define FLAG_STEEL_FACTORY_CELL_ARON_HIDDEN               (SK_FLAGS_START + 158)
#define FLAG_STEEL_FACTORY_CHOICE_MADE                   (SK_FLAGS_START + 159)
#define FLAG_STEEL_FACTORY_COMPLETE                      (SK_FLAGS_START + 160)
#define FLAG_STEEL_FACTORY_FREED_POKEMON                 (SK_FLAGS_START + 161)
#define FLAG_STEEL_FACTORY_POKEMON_CAGED                 (SK_FLAGS_START + 162)
#define FLAG_STEEL_FACTORY_RECTOR_CUTSCENE_TRIGGERED     (SK_FLAGS_START + 163)
#define FLAG_STEEL_FACTORY_RECTOR_DEFEATED               (SK_FLAGS_START + 164)
#define FLAG_STEEL_FACTORY_TUNNEL_OPEN                   (SK_FLAGS_START + 165)
#define FLAG_STEEL_FACTORY_WIRE_1_PULLED                 (SK_FLAGS_START + 166)
#define FLAG_STEEL_FACTORY_WIRE_2_PULLED                 (SK_FLAGS_START + 167)
#define FLAG_STEEL_FACTORY_WIRE_3_PULLED                 (SK_FLAGS_START + 168)
#define FLAG_STEEL_FACTORY_WIRE_4_PULLED                 (SK_FLAGS_START + 169)
#define FLAG_STEEL_FACTORY_WIRE_5_PULLED                 (SK_FLAGS_START + 170)
#define FLAG_PETER_GAVE_FACTORY_REWARD                   (SK_FLAGS_START + 131)
#define FLAG_PETER_GAVE_TUNNEL_PERMISSION                (SK_FLAGS_START + 132)
#define FLAG_PETER_HOUSE_INTRO_DONE                      (SK_FLAGS_START + 133)
#define FLAG_MEW_SAW_FACTORY_FREED                       (SK_FLAGS_START + 121)

// Faculty storyline (Deep Cloud Forest / research center)
#define FLAG_FACULTY_GORGE_NASH1                         (SK_FLAGS_START + 16)
#define FLAG_FACULTY_GORGE_NASH2                         (SK_FLAGS_START + 181)
#define FLAG_FACULTY_GRUNTS_ROUT01                       (SK_FLAGS_START + 17)
#define FLAG_FACULTY_SYMPATHIZERS_1                      (SK_FLAGS_START + 18)
#define FLAG_FACULTY_SYMPATHIZERS_2                      (SK_FLAGS_START + 19)
#define FLAG_GIEL_LEFT_BASEMENT                          (SK_FLAGS_START + 20)
#define FLAG_HELPED_DAN_BEAT_FACULTY                     (SK_FLAGS_START + 21)
#define FLAG_DAVID_TRUCK                                 (SK_FLAGS_START + 180)
#define FLAG_DAAN_NASH_TRUCK                             (SK_FLAGS_START + 182)
#define FLAG_NASH_ENTRANCE_RESEARCH_CENTER1              (SK_FLAGS_START + 183)
#define FLAG_NASH_ENTRANCE_RESEARCH_CENTER2              (SK_FLAGS_START + 184)
#define FLAG_RESCUED_DAAN                                (SK_FLAGS_START + 147)
#define FLAG_PROFESSOR_BIRDS_DISCOVERY                   (SK_FLAGS_START + 134)

// Marshduke Cathedral / Mist City museum
#define FLAG_MARSHDUKE_CATHEDRAL_HIDE_BEFORE_TOUR        (SK_FLAGS_START + 114)
#define FLAG_MARSHDUKE_CATHEDRAL_TOUR                    (SK_FLAGS_START + 115)
#define FLAG_MD_CLOSED_SHELF                             (SK_FLAGS_START + 116)
#define FLAG_MD_READ_ANCIENT_MANUSCRIPT                  (SK_FLAGS_START + 117)
#define FLAG_MISTCITY_SHOW_MUSHROOM_BRELOOM              (SK_FLAGS_START + 122)
#define FLAG_MISTCITY_SHOW_MUSHROOM_PARAS                (SK_FLAGS_START + 123)
#define FLAG_MISTCITY_SHOW_MUSHROOM_PARASECT              (SK_FLAGS_START + 124)
#define FLAG_MISTCITY_SHOW_MUSHROOM_SHROOMISH            (SK_FLAGS_START + 125)
#define FLAG_MUSHROOM_MISSION_COMPLETED                  (SK_FLAGS_START + 128)
#define FLAG_MUSHROOM_MISSION_STARTED                    (SK_FLAGS_START + 129)
#define FLAG_MOSSWOOD_MISSION_COMPLETED                  (SK_FLAGS_START + 126)
#define FLAG_MOSSWOOD_MISSION_STARTED                    (SK_FLAGS_START + 127)

// Siltroot Town storyline
#define FLAG_SILTROOTTOWN_STASH_SACK                     (SK_FLAGS_START + 151)
#define FLAG_SILTROOT_HOUSE4_FAT_GUY_TRUSTS               (SK_FLAGS_START + 152)
#define FLAG_UP_TO_THE_WHITELIGHT_MAASJE                 (SK_FLAGS_START + 173)
#define FLAG_UP_TO_THE_WHITELIGHT_SILTROOTTOWN           (SK_FLAGS_START + 174)
#define FLAG_INTERN_BOXES_ASSIGNMENT                     (SK_FLAGS_START + 69)

// Gym / leader defeated
#define FLAG_DEFEATED_LIONSARCH_LEADER1                  (SK_FLAGS_START + 13)

// Ancient Grotto boat
#define FLAG_ANCIENTGROTTO_BOARD_SHIP                    (SK_FLAGS_START + 0)
#define FLAG_ANCIENTGROTTO_DISAPPEAR_SHIP                (SK_FLAGS_START + 1)

// Ari sidequest (jump/sprint challenges)
#define FLAG_ARI_HIDE_JUMP_CHALLENGE                     (SK_FLAGS_START + 2)
#define FLAG_ARI_SPRINT_CHALLENGE                        (SK_FLAGS_START + 3)

// Beehive minigame
#define FLAG_CLEAR_BEEHIVE_01                            (SK_FLAGS_START + 5)
#define FLAG_CLEAR_BEEHIVE_02                            (SK_FLAGS_START + 6)
#define FLAG_CLEAR_BEEHIVE_03                            (SK_FLAGS_START + 7)
#define FLAG_CLEAR_BEEHIVE_04                            (SK_FLAGS_START + 8)
#define FLAG_CLEAR_BEEHIVE_05                            (SK_FLAGS_START + 9)
#define FLAG_CLEAR_BEEHIVE_06                             (SK_FLAGS_START + 10)
#define FLAG_CLEAR_BEEHIVE_07                            (SK_FLAGS_START + 11)
#define FLAG_CLEAR_BEEHIVE_08                            (SK_FLAGS_START + 12)
#define FLAG_START_COLLECTING_HONEY                      (SK_FLAGS_START + 153)

// Feature / system toggle
#define FLAG_BASEMENT_DJ_STAGE_ACCESS                    (SK_FLAGS_START + 4)
#define FLAG_DISABLE_FOLLOWER_POKEMON                    (SK_FLAGS_START + 15)
#define FLAG_INTRO_SPEECH_MOM_FINISHED                   (SK_FLAGS_START + 70)
#define FLAG_MACH_BIKE_READY                             (SK_FLAGS_START + 113)
#define FLAG_NOCATCH_ENCOUNTER                           (SK_FLAGS_START + 130)
#define FLAG_SHINY_KRABBY_ENCOUNTER                      (SK_FLAGS_START + 148)
#define FLAG_STRENGTH_UNLOCKED                           (SK_FLAGS_START + 171)

#endif // GUARD_CONSTANTS_FLAGS_SK_H
