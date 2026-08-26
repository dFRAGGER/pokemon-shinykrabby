#ifndef GUARD_CONSTANTS_VARS_HNS_H
#define GUARD_CONSTANTS_VARS_HNS_H

// Vars shared with Emerald (same name, same value)
#define VAR_ICE_STEP_COUNT                               0x4022
#define VAR_STARTER_MON                                  0x4023
#define VAR_FRONTIER_MANIAC_FACILITY                     0x402F
#define VAR_FRONTIER_GAMBLER_AMOUNT_BET                  0x4032
#define VAR_FRONTIER_GAMBLER_STATE                       0x4033
#define VAR_POKELOT_PRIZE_ITEM                           0x4045
#define VAR_POKELOT_PRIZE_PLACE                          0x404D
#define VAR_CONTEST_HALL_STATE                           0x4086
#define VAR_SAFARI_ZONE_STATE                            0x40A4
#define VAR_BRAVO_TRAINER_BATTLE_TOWER_ON                0x40BC
#define VAR_FOSSIL_RESURRECTION_STATE                    0x40C4
#define VAR_WHICH_FOSSIL_REVIVED                         0x40C5
#define VAR_FRONTIER_BATTLE_MODE                         0x40CE
#define VAR_FRONTIER_FACILITY                            0x40CF
#define VAR_HAS_ENTERED_BATTLE_FRONTIER                  0x40D0
#define VAR_SCOTT_STATE                                  0x40D1
#define VAR_TRAINER_HILL_IS_ACTIVE                       0x40D6
#define VAR_LILYCOVE_CONTEST_LOBBY_STATE                            0x4099

// HnS-unique vars
#define VAR_AZALEA_TOWN_STATE                            0x4053
#define VAR_BAOBA_QUEST_STATE                            0x4054
#define VAR_BLACKTHORN_CITY_STATE                        0x4056
#define VAR_BUG_CONTEST_STATE                            0x4058
#define VAR_CERULEAN_CITY_STATE                          0x4059
#define VAR_CHERRYGROVE_CITY_STATE                       0x405A
#define VAR_CIANWOOD_CITY_STATE                          0x405B
#define VAR_CINNABAR_ISLAND_STATE                        0x405C
#define VAR_ECRUTEAK_CITY_STATE                          0x4061
#define VAR_FUCHSIA_CITY_STATE                           0x4067
#define VAR_GOLDENROD_CITY_STATE                         0x4069
#define VAR_KANTO_SAFARI_ZONE_PROGRESS                   0x406D
#define VAR_LEAGUE_STATE                                 0x4070
#define VAR_MAHOGANY_TOWN_STATE                          0x4072
#define VAR_MT_SILVER_STATE                              0x4073
#define VAR_NEWBARKTOWN_LABSTATE                         0x4074
#define VAR_NUM_BADGES                                   0x4076
#define VAR_OLIVINE_CITY_STATE                           0x4077
#define VAR_PALLETTOWN_LABSTATE                          0x4078
#define VAR_PEWTER_CITY_STATE                            0x4079
#define VAR_ROUTE22_GIOVANNI_STATE                       0x4080
#define VAR_ROUTE27_BAOBA_CALL                           0x4081
#define VAR_ROUTE27_STATE                                0x4082
#define VAR_SAFARI_ZONE_GATE_STATE                       0x4085
#define VAR_SSAQUA_STATE                                 0x408B
#define VAR_SUICUNE_ENCOUNTERS                           0x408C
#define VAR_TOHJO_FALLS_GIOVANNI_STATE                   0x408D
#define VAR_VERMILION_CITY_STATE                         0x408F
#define VAR_VIOLET_CITY_STATE                            0x4091

// Unused HnS vars
#define VAR_TIME_BASED_ENCOUNTER                         0x4092
#define VAR_CELADON_CITY_STATE                           0x4093
#define VAR_PALLET_TOWN_STATE                            0x4094
#define VAR_LAVENDER_TOWN_STATE                          0x4096
#define VAR_WADE_ITEM_HNS                                0x4097
#define VAR_ALAN_ITEM_HNS                                0x4098
#define VAR_DANA_ITEM_HNS                                0x409A
#define VAR_TULLY_ITEM_HNS                               0x409B
#define VAR_DEREK_ITEM_HNS                               0x409D
#define VAR_BEVERLY_ITEM_HNS                             0x409E
#define VAR_JOSE_ITEM_HNS                                0x409F
#define VAR_KENJI_ITEM_HNS                               0x40A0
#define VAR_ROUTE_STEP_COUNTER_HNS                       0x40A1
#define VAR_MOM_GIFT_QUANTITY                            0x40A5
#define VAR_MOM_GIFT_ITEM                                0x40A6
#define VAR_RADIO_BUENAS_PASSWORD                        0x40AB
#define VAR_CONTEST_PRIZE_PICKUP_HNS                            0x40AC



// Alola Vars

// Sinjoh Vars

#define VAR_SAFFRON_CITY_STATE                           0x40BD
#define VAR_VIRIDIAN_CITY_STATE                          0x40C1
#define VAR_WILTON_ITEM_HNS                              0x40C3
// Low and high halves of one 32-bit value (pokenav_radio.c). Keep adjacent.
#define VAR_RADIO_LUCKY_ID                               0x40C7
#define VAR_RADIO_LUCKY_ID_HI                            0x40C8

// Claimed by Emerald vars that are reachable in the HnS build.
// Do not use these addresses for HnS content.
#define VAR_CABLE_CLUB_STATE_UNSAFE                      0x4087
#define VAR_CONTEST_TYPE_UNSAFE                          0x4088
#define VAR_SECRET_BASE_INITIALIZED_UNSAFE               0x4089
#define VAR_CONTEST_PRIZE_PICKUP_EM_UNSAFE               0x408A
#define VAR_LILYCOVE_FAN_CLUB_STATE_UNSAFE               0x4095
#define VAR_ELITE_4_STATE_UNSAFE                         0x409C
#define VAR_CYCLING_CHALLENGE_STATE_UNSAFE               0x40A9
#define VAR_SLATEPORT_MUSEUM_1F_STATE_UNSAFE             0x40AA
#define VAR_MIRAGE_TOWER_STATE_UNSAFE                    0x40CB
#define VAR_FOSSIL_MANIAC_STATE_UNSAFE                   0x40CC
#define VAR_CABLE_CLUB_TUTORIAL_STATE_UNSAFE             0x40CD
#define VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE_UNSAFE        0x40D2
#define VAR_DEX_UPGRADE_JOHTO_STARTER_STATE_UNSAFE       0x40D3
#define VAR_SS_TIDAL_SCOTT_STATE_UNSAFE                  0x40D4
#define VAR_ROAMER_POKEMON_UNSAFE                        0x40D5
#define VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE_UNSAFE          0x40D7
// 0x40CE 0x40CF 0x40D0 0x40D1 0x40D6 are also unsafe, but already carry their
// Emerald names in the shared block at the top of this file.

#include "constants/vars_sk.h"

#define SPECIAL_VARS_START            0x8000
// special vars
// They are commonly used as parameters to commands, or return values from commands.
#define VAR_0x8000                    0x8000
#define VAR_0x8001                    0x8001
#define VAR_0x8002                    0x8002
#define VAR_0x8003                    0x8003
#define VAR_0x8004                    0x8004
#define VAR_0x8005                    0x8005
#define VAR_0x8006                    0x8006
#define VAR_0x8007                    0x8007
#define VAR_0x8008                    0x8008
#define VAR_0x8009                    0x8009
#define VAR_0x800A                    0x800A
#define VAR_0x800B                    0x800B
#define VAR_FACING                    0x800C
#define VAR_RESULT                    0x800D
#define VAR_ITEM_ID                   0x800E
#define VAR_LAST_TALKED               0x800F
#define VAR_CONTEST_RANK              0x8010
#define VAR_CONTEST_CATEGORY          0x8011
#define VAR_MON_BOX_ID                0x8012
#define VAR_MON_BOX_POS               0x8013
#define VAR_UNUSED_0x8014             0x8014
#define VAR_TRAINER_BATTLE_OPPONENT_A 0x8015 // Alias of TRAINER_BATTLE_PARAM.opponentA

#define SPECIAL_VARS_END              0x8015

// If an overworld trigger uses this pseudo-variable as the trigger check,
// then the script will be run using RunScriptImmediately instead of in the
// global script context. This means it will run faster, but cannot do any
// cutscenes nor call a wait command. Used for weather effects in vanilla.
#define TRIGGER_RUN_IMMEDIATELY   0

// Temp var aliases
#define VAR_TEMP_CHALLENGE_STATUS  VAR_TEMP_0

#define VAR_TEMP_MIXED_RECORDS         VAR_TEMP_0
#define VAR_TEMP_RECORD_MIX_GIFT_ITEM  VAR_TEMP_1

#define VAR_TEMP_PLAYING_PYRAMID_MUSIC  VAR_TEMP_E

#define VAR_TEMP_FRONTIER_TUTOR_SELECTION  VAR_TEMP_D
#define VAR_TEMP_FRONTIER_TUTOR_ID         VAR_TEMP_E

#define VAR_TEMP_TRANSFERRED_SPECIES  VAR_TEMP_1
#define VAR_TEMP_RADIO_MUSIC          VAR_TEMP_F

// VAR_TEMP_A used due to limited use elsewhere.
#define VAR_TEMP_MTSILVER_RESUME_BLIZZARD_SE  VAR_TEMP_B

#endif // GUARD_CONSTANTS_VARS_HNS_H
