#ifndef GUARD_CONSTANTS_VARS_SK_H
#define GUARD_CONSTANTS_VARS_SK_H

// ShinyKrabby (Tessera) custom vars (reserved block, appended past HNS's own native vars).
// VARS_END/VARS_COUNT are defined in vars.h (the real consumer of this range).
#define SK_VARS_START                                     0x4100
#define NUM_SK_VARS                                       30
#define SK_VARS_END                                       (SK_VARS_START + NUM_SK_VARS - 1)

#define VAR_MISTCITY_RESEARCH_CENTER_LOCATION             (SK_VARS_START + 0)
#define VAR_BEEKEEPER_GEURTS                              (SK_VARS_START + 1)
#define VAR_BRYAN_POSITION                                (SK_VARS_START + 2)
#define VAR_CATHEDRAL_STATE_MARSHDUKE                     (SK_VARS_START + 3)
#define VAR_LIONSARCH_CITY_STATE                          (SK_VARS_START + 4)
#define VAR_MAASJE_GYM_TIDE_STATE                         (SK_VARS_START + 5)
#define VAR_MARSHDUKE_CATHEDRAL_VISION_STATE              (SK_VARS_START + 6)
#define VAR_MEESTRECH_TOWN_STATE                          (SK_VARS_START + 7)
#define VAR_MINING_CAVE_STATE                             (SK_VARS_START + 8)
#define VAR_MISTCITY_RESEARCH_CENTER                      (SK_VARS_START + 9)
#define VAR_MISTCITY_STATE                                (SK_VARS_START + 10)
#define VAR_RECIEVED_STARTER_POKEMON                      (SK_VARS_START + 11)
#define VAR_SILTROOT_TOWN_STATE                           (SK_VARS_START + 12)
#define VAR_STARTHOUSE_ERP_CITY                           (SK_VARS_START + 13)
#define VAR_STARTHOUSE_ERP_CITY_1F                        (SK_VARS_START + 14)

#endif // GUARD_CONSTANTS_VARS_SK_H
