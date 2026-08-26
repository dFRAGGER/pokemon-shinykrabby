#ifndef GUARD_CONSTANTS_VARS_SK_H
#define GUARD_CONSTANTS_VARS_SK_H

// ShinyKrabby (Tessera) custom vars (reserved block, appended past HNS's own native vars).
// VARS_END/VARS_COUNT are defined in vars.h (the real consumer of this range).
#define SK_VARS_START                                     0x4100
#define NUM_SK_VARS                                       30
#define SK_VARS_END                                       (SK_VARS_START + NUM_SK_VARS - 1)

// --- Reclaimed HNS Johto/Kanto/Alola/Sinjoh content-var addresses ---
// 98 of HNS's own content-var addresses (0x4050-0x40FF, vars_hns.h's "HnS-unique
// vars"/"Unused HnS vars"/"Alola Vars"/"Sinjoh Vars" sections) were deleted from
// vars_hns.h - same reasoning and same verification method as the flags reclaim
// above it in this file's sibling flags_sk.h: checked against the real `make sk`
// build (not a manual simulation), which correctly resolves .if INCLUDE_HNS_
// CONTENT blocks and catches assembler-level "switch VAR_X" style .if usage that
// a plain grep would miss. Two things stayed excluded despite looking like
// per-region content: VAR_CONTEST_PRIZE_PICKUP_HNS (Lilycove Contest Hall's
// prize-pickup switch, gated only by #if IS_HNS - always true for sk, not by
// INCLUDE_HNS_CONTENT) and VAR_BUG_CONTEST_STATE (the generic Bug Catching
// Contest feature). Each var costs 2 bytes of SaveBlock1 (vs 1 bit for a flag),
// so this reclaim matters more per-slot than the flags one did.
//
// Freed: raw addresses 0x4050-0x40FF (98 of the ~150 addresses in that span;
// the rest are the ~40-ish still-KEEP vars plus the two exclusions above - see
// vars_hns.h's remaining content for what's still in use). To use one, pick any
// free address in that span not currently #defined in vars_hns.h, and add
// #define VAR_YOUR_NEW_THING 0x40NN here.

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
