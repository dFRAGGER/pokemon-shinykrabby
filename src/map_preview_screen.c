#include "global.h"
#include "event_data.h"
#include "field_screen_effect.h"
#include "field_weather.h"
#include "gpu_regs.h"
#include "main.h"
#include "malloc.h"
#include "map_preview_screen.h"
#include "menu.h"
#include "overworld.h"
#include "palette.h"
#include "region_map.h"
#include "script.h"
#include "string_util.h"
#include "constants/region_map_sections.h"
#include "constants/rgb.h"

static EWRAM_DATA bool8 sHasVisitedMapBefore = FALSE;

#if IS_FRLG

static EWRAM_DATA bool8 sAllocedBg0TilemapBuffer = FALSE;

static void Task_RunMapPreviewScreenForest(u8 taskId);

static const u8 sViridianForestMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/viridian_forest/tiles.gbapal");
static const u8 sViridianForestMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/viridian_forest/tiles.4bpp.smol");
static const u8 sViridianForestMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/viridian_forest/tilemap.bin.smolTM");
static const u8 sRockTunnelMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/rock_tunnel/tiles.gbapal");
static const u8 sRockTunnelMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/rock_tunnel/tiles.4bpp.smol");
static const u8 sRockTunnelMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/rock_tunnel/tilemap.bin.smolTM");
static const u8 sRocketHideoutMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/rocket_hideout/tiles.gbapal");
static const u8 sRocketHideoutMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/rocket_hideout/tiles.4bpp.smol");
static const u8 sRocketHideoutMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/rocket_hideout/tilemap.bin.smolTM");
static const u8 sPowerPlantMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/power_plant/tiles.gbapal");
static const u8 sPowerPlantMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/power_plant/tiles.4bpp.smol");
static const u8 sPowerPlantMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/power_plant/tilemap.bin.smolTM");
static const u8 sPokemonMansionMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/pokemon_mansion/tiles.gbapal");
static const u8 sPokemonMansionMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/pokemon_mansion/tiles.4bpp.smol");
static const u8 sPokemonMansionMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/pokemon_mansion/tilemap.bin.smolTM");
static const u8 sPokemonTowerMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/pokemon_tower/tiles.gbapal");
static const u8 sPokemonTowerMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/pokemon_tower/tiles.4bpp.smol");
static const u8 sPokemonTowerMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/pokemon_tower/tilemap.bin.smolTM");
static const u8 sSilphCoMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/silph_co/tiles.gbapal");
static const u8 sSilphCoMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/silph_co/tiles.4bpp.smol");
static const u8 sSilphCoMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/silph_co/tilemap.bin.smolTM");
static const u8 sMtMoonMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/mt_moon/tiles.gbapal");
static const u8 sMtMoonMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/mt_moon/tiles.4bpp.smol");
static const u8 sMtMoonMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/mt_moon/tilemap.bin.smolTM");
static const u8 sSeafoamIslandsMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/seafoam_islands/tiles.gbapal");
static const u8 sSeafoamIslandsMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/seafoam_islands/tiles.4bpp.smol");
static const u8 sSeafoamIslandsMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/seafoam_islands/tilemap.bin.smolTM");
static const u8 sRocketWarehouseMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/rocket_warehouse/tiles.gbapal");
static const u8 sRocketWarehouseMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/rocket_warehouse/tiles.4bpp.smol");
static const u8 sRocketWarehouseMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/rocket_warehouse/tilemap.bin.smolTM");
static const u8 sVictoryRoadMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/victory_road/tiles.gbapal");
static const u8 sVictoryRoadMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/victory_road/tiles.4bpp.smol");
static const u8 sVictoryRoadMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/victory_road/tilemap.bin.smolTM");
static const u8 sMtEmberMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/mt_ember/tiles.gbapal");
static const u8 sMtEmberMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/mt_ember/tiles.4bpp.smol");
static const u8 sMtEmberMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/mt_ember/tilemap.bin.smolTM");
static const u8 sSafariZoneMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/safari_zone/tiles.gbapal");
static const u8 sSafariZoneMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/safari_zone/tiles.4bpp.smol");
static const u8 sSafariZoneMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/safari_zone/tilemap.bin.smolTM");
static const u8 sMoneanChamberMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/monean_chamber/tiles.gbapal");
static const u8 sMoneanChamberMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/monean_chamber/tiles.4bpp.smol");
static const u8 sMoneanChamberMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/monean_chamber/tilemap.bin.smolTM");
static const u8 sDottedHoleMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/dotted_hole/tiles.gbapal");
static const u8 sDottedHoleMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/dotted_hole/tiles.4bpp.smol");
static const u8 sDottedHoleMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/dotted_hole/tilemap.bin.smolTM");
static const u8 sCeruleanCaveMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/cerulean_cave/tiles.gbapal");
static const u8 sCeruleanCaveMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/cerulean_cave/tiles.4bpp.smol");
static const u8 sCeruleanCaveMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/cerulean_cave/tilemap.bin.smolTM");
static const u8 sDiglettsCaveMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/digletts_cave/tiles.gbapal");
static const u8 sDiglettsCaveMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/digletts_cave/tiles.4bpp.smol");
static const u8 sDiglettsCaveMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/digletts_cave/tilemap.bin.smolTM");
static const u8 sLostCaveMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/lost_cave/tiles.gbapal");
static const u8 sLostCaveMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/lost_cave/tiles.4bpp.smol");
static const u8 sLostCaveMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/lost_cave/tilemap.bin.smolTM");
static const u8 sBerryForestMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/berry_forest/tiles.gbapal");
static const u8 sBerryForestMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/berry_forest/tiles.4bpp.smol");
static const u8 sBerryForestMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/berry_forest/tilemap.bin.smolTM");
static const u8 sIcefallCaveMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/icefall_cave/tiles.gbapal");
static const u8 sIcefallCaveMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/icefall_cave/tiles.4bpp.smol");
static const u8 sIcefallCaveMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/icefall_cave/tilemap.bin.smolTM");
static const u8 sAlteringCaveMapPreviewPalette[] = INCBIN_U8("graphics/map_preview/altering_cave/tiles.gbapal");
static const u8 sAlteringCaveMapPreviewTiles[] = INCBIN_U8("graphics/map_preview/altering_cave/tiles.4bpp.smol");
static const u8 sAlteringCaveMapPreviewTilemap[] = INCBIN_U8("graphics/map_preview/altering_cave/tilemap.bin.smolTM");

static const struct MapPreviewScreen sMapPreviewScreenData[MPS_COUNT] = {
    [MPS_VIRIDIAN_FOREST] = {
        .mapsec = MAPSEC_VIRIDIAN_FOREST,
        .type = MPS_TYPE_FOREST,
        .flagId = FLAG_WORLD_MAP_VIRIDIAN_FOREST,
        .tilesptr = sViridianForestMapPreviewTiles,
        .tilemapptr = sViridianForestMapPreviewTilemap,
        .palptr = sViridianForestMapPreviewPalette
    },
    [MPS_MT_MOON] = {
        .mapsec = MAPSEC_MT_MOON,
        .type = MPS_TYPE_CAVE,
        .flagId = FLAG_WORLD_MAP_MT_MOON_1F,
        .tilesptr = sMtMoonMapPreviewTiles,
        .tilemapptr = sMtMoonMapPreviewTilemap,
        .palptr = sMtMoonMapPreviewPalette
    },
    [MPS_DIGLETTS_CAVE] = {
        .mapsec = MAPSEC_DIGLETTS_CAVE,
        .type = MPS_TYPE_CAVE,
        .flagId = FLAG_WORLD_MAP_DIGLETTS_CAVE_B1F,
        .tilesptr = sDiglettsCaveMapPreviewTiles,
        .tilemapptr = sDiglettsCaveMapPreviewTilemap,
        .palptr = sDiglettsCaveMapPreviewPalette
    },
    [MPS_ROCK_TUNNEL] = {
        .mapsec = MAPSEC_ROCK_TUNNEL,
        .type = MPS_TYPE_CAVE,
        .flagId = FLAG_WORLD_MAP_ROCK_TUNNEL_1F,
        .tilesptr = sRockTunnelMapPreviewTiles,
        .tilemapptr = sRockTunnelMapPreviewTilemap,
        .palptr = sRockTunnelMapPreviewPalette
    },
    [MPS_POKEMON_TOWER] = {
        .mapsec = MAPSEC_POKEMON_TOWER,
        .type = MPS_TYPE_CAVE,
        .flagId = FLAG_WORLD_MAP_POKEMON_TOWER_1F,
        .tilesptr = sPokemonTowerMapPreviewTiles,
        .tilemapptr = sPokemonTowerMapPreviewTilemap,
        .palptr = sPokemonTowerMapPreviewPalette
    },
    [MPS_SAFARI_ZONE] = {
        .mapsec = MAPSEC_KANTO_SAFARI_ZONE,
        .type = MPS_TYPE_FOREST,
        .flagId = FLAG_WORLD_MAP_SAFARI_ZONE_CENTER,
        .tilesptr = sSafariZoneMapPreviewTiles,
        .tilemapptr = sSafariZoneMapPreviewTilemap,
        .palptr = sSafariZoneMapPreviewPalette
    },
    [MPS_SEAFOAM_ISLANDS] = {
        .mapsec = MAPSEC_SEAFOAM_ISLANDS,
        .type = MPS_TYPE_CAVE,
        .flagId = FLAG_WORLD_MAP_SEAFOAM_ISLANDS_1F,
        .tilesptr = sSeafoamIslandsMapPreviewTiles,
        .tilemapptr = sSeafoamIslandsMapPreviewTilemap,
        .palptr = sSeafoamIslandsMapPreviewPalette
    },
    [MPS_POKEMON_MANSION] = {
        .mapsec = MAPSEC_POKEMON_MANSION,
        .type = MPS_TYPE_FOREST,
        .flagId = FLAG_WORLD_MAP_POKEMON_MANSION_1F,
        .tilesptr = sPokemonMansionMapPreviewTiles,
        .tilemapptr = sPokemonMansionMapPreviewTilemap,
        .palptr = sPokemonMansionMapPreviewPalette
    },
    [MPS_ROCKET_HIDEOUT] = {
        .mapsec = MAPSEC_ROCKET_HIDEOUT_HNS,
        .type = MPS_TYPE_FOREST,
        .flagId = FLAG_WORLD_MAP_ROCKET_HIDEOUT_B1F,
        .tilesptr = sRocketHideoutMapPreviewTiles,
        .tilemapptr = sRocketHideoutMapPreviewTilemap,
        .palptr = sRocketHideoutMapPreviewPalette
    },
    [MPS_SILPH_CO] = {
        .mapsec = MAPSEC_SILPH_CO,
        .type = MPS_TYPE_CAVE,
        .flagId = FLAG_WORLD_MAP_SILPH_CO_1F,
        .tilesptr = sSilphCoMapPreviewTiles,
        .tilemapptr = sSilphCoMapPreviewTilemap,
        .palptr = sSilphCoMapPreviewPalette
    },
    [MPS_VICTORY_ROAD] = {
        .mapsec = MAPSEC_KANTO_VICTORY_ROAD,
        .type = MPS_TYPE_CAVE,
        .flagId = FLAG_WORLD_MAP_VICTORY_ROAD_1F,
        .tilesptr = sVictoryRoadMapPreviewTiles,
        .tilemapptr = sVictoryRoadMapPreviewTilemap,
        .palptr = sVictoryRoadMapPreviewPalette
    },
    [MPS_CERULEAN_CAVE] = {
        .mapsec = MAPSEC_CERULEAN_CAVE,
        .type = MPS_TYPE_CAVE,
        .flagId = FLAG_WORLD_MAP_CERULEAN_CAVE_1F,
        .tilesptr = sCeruleanCaveMapPreviewTiles,
        .tilemapptr = sCeruleanCaveMapPreviewTilemap,
        .palptr = sCeruleanCaveMapPreviewPalette
    },
    [MPS_POWER_PLANT] = {
        .mapsec = MAPSEC_POWER_PLANT,
        .type = MPS_TYPE_FOREST,
        .flagId = FLAG_WORLD_MAP_POWER_PLANT,
        .tilesptr = sPowerPlantMapPreviewTiles,
        .tilemapptr = sPowerPlantMapPreviewTilemap,
        .palptr = sPowerPlantMapPreviewPalette
    },
    [MPS_MT_EMBER] = {
        .mapsec = MAPSEC_MT_EMBER,
        .type = MPS_TYPE_CAVE,
        .flagId = FLAG_WORLD_MAP_MT_EMBER_EXTERIOR,
        .tilesptr = sMtEmberMapPreviewTiles,
        .tilemapptr = sMtEmberMapPreviewTilemap,
        .palptr = sMtEmberMapPreviewPalette
    },
    [MPS_ROCKET_WAREHOUSE] = {
        .mapsec = MAPSEC_ROCKET_WAREHOUSE,
        .type = MPS_TYPE_FOREST,
        .flagId = FLAG_WORLD_MAP_THREE_ISLAND_BERRY_FOREST,
        .tilesptr = sRocketWarehouseMapPreviewTiles,
        .tilemapptr = sRocketWarehouseMapPreviewTilemap,
        .palptr = sRocketWarehouseMapPreviewPalette
    },
    [MPS_MONEAN_CHAMBER] = {
        .mapsec = MAPSEC_MONEAN_CHAMBER,
        .type = MPS_TYPE_CAVE,
        .flagId = FLAG_WORLD_MAP_SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER,
        .tilesptr = sMoneanChamberMapPreviewTiles,
        .tilemapptr = sMoneanChamberMapPreviewTilemap,
        .palptr = sMoneanChamberMapPreviewPalette
    },
    [MPS_DOTTED_HOLE] = {
        .mapsec = MAPSEC_DOTTED_HOLE,
        .type = MPS_TYPE_CAVE,
        .flagId = FLAG_WORLD_MAP_SIX_ISLAND_DOTTED_HOLE_1F,
        .tilesptr = sDottedHoleMapPreviewTiles,
        .tilemapptr = sDottedHoleMapPreviewTilemap,
        .palptr = sDottedHoleMapPreviewPalette
    },
    [MPS_BERRY_FOREST] = {
        .mapsec = MAPSEC_BERRY_FOREST,
        .type = MPS_TYPE_FOREST,
        .flagId = FLAG_WORLD_MAP_THREE_ISLAND_BERRY_FOREST,
        .tilesptr = sBerryForestMapPreviewTiles,
        .tilemapptr = sBerryForestMapPreviewTilemap,
        .palptr = sBerryForestMapPreviewPalette
    },
    [MPS_ICEFALL_CAVE] = {
        .mapsec = MAPSEC_ICEFALL_CAVE,
        .type = MPS_TYPE_CAVE,
        .flagId = FLAG_WORLD_MAP_FOUR_ISLAND_ICEFALL_CAVE_ENTRANCE,
        .tilesptr = sIcefallCaveMapPreviewTiles,
        .tilemapptr = sIcefallCaveMapPreviewTilemap,
        .palptr = sIcefallCaveMapPreviewPalette
    },
    [MPS_LOST_CAVE] = {
        .mapsec = MAPSEC_LOST_CAVE,
        .type = MPS_TYPE_CAVE,
        .flagId = FLAG_WORLD_MAP_FIVE_ISLAND_LOST_CAVE_ENTRANCE,
        .tilesptr = sLostCaveMapPreviewTiles,
        .tilemapptr = sLostCaveMapPreviewTilemap,
        .palptr = sLostCaveMapPreviewPalette
    },
    [MPS_ALTERING_CAVE] = {
        .mapsec = MAPSEC_ALTERING_CAVE_FRLG,
        .type = MPS_TYPE_CAVE,
        .flagId = FLAG_WORLD_MAP_SIX_ISLAND_ALTERING_CAVE,
        .tilesptr = sAlteringCaveMapPreviewTiles,
        .tilemapptr = sAlteringCaveMapPreviewTilemap,
        .palptr = sAlteringCaveMapPreviewPalette
    },
    [MPS_PATTERN_BUSH] = {
        .mapsec = MAPSEC_PATTERN_BUSH,
        .type = MPS_TYPE_FOREST,
        .flagId = FLAG_WORLD_MAP_SIX_ISLAND_PATTERN_BUSH,
        .tilesptr = sViridianForestMapPreviewTiles,
        .tilemapptr = sViridianForestMapPreviewTilemap,
        .palptr = sViridianForestMapPreviewPalette
    },
    [MPS_LIPTOO_CHAMBER] = {
        .mapsec = MAPSEC_LIPTOO_CHAMBER,
        .type = MPS_TYPE_CAVE,
        .flagId = FLAG_WORLD_MAP_SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER,
        .tilesptr = sMoneanChamberMapPreviewTiles,
        .tilemapptr = sMoneanChamberMapPreviewTilemap,
        .palptr = sMoneanChamberMapPreviewPalette
    },
    [MPS_WEEPTH_CHAMBER] = {
        .mapsec = MAPSEC_WEEPTH_CHAMBER,
        .type = MPS_TYPE_CAVE,
        .flagId = FLAG_WORLD_MAP_SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER,
        .tilesptr = sMoneanChamberMapPreviewTiles,
        .tilemapptr = sMoneanChamberMapPreviewTilemap,
        .palptr = sMoneanChamberMapPreviewPalette
    },
    [MPS_TDILFORD_CHAMBER] = {
        .mapsec = MAPSEC_DILFORD_CHAMBER,
        .type = MPS_TYPE_CAVE,
        .flagId = FLAG_WORLD_MAP_SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER,
        .tilesptr = sMoneanChamberMapPreviewTiles,
        .tilemapptr = sMoneanChamberMapPreviewTilemap,
        .palptr = sMoneanChamberMapPreviewPalette
    },
    [MPS_SCUFIB_CHAMBER] = {
        .mapsec = MAPSEC_SCUFIB_CHAMBER,
        .type = MPS_TYPE_CAVE,
        .flagId = FLAG_WORLD_MAP_SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER,
        .tilesptr = sMoneanChamberMapPreviewTiles,
        .tilemapptr = sMoneanChamberMapPreviewTilemap,
        .palptr = sMoneanChamberMapPreviewPalette
    },
    [MPS_RIXY_CHAMBER] = {
        .mapsec = MAPSEC_RIXY_CHAMBER,
        .type = MPS_TYPE_CAVE,
        .flagId = FLAG_WORLD_MAP_SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER,
        .tilesptr = sMoneanChamberMapPreviewTiles,
        .tilemapptr = sMoneanChamberMapPreviewTilemap,
        .palptr = sMoneanChamberMapPreviewPalette
    },
    [MPS_VIAPOIS_CHAMBER] = {
        .mapsec = MAPSEC_VIAPOIS_CHAMBER,
        .type = MPS_TYPE_CAVE,
        .flagId = FLAG_WORLD_MAP_SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER,
        .tilesptr = sMoneanChamberMapPreviewTiles,
        .tilemapptr = sMoneanChamberMapPreviewTilemap,
        .palptr = sMoneanChamberMapPreviewPalette
    }
};

static const struct WindowTemplate sMapNameWindow = {
    .bg = 0,
    .tilemapLeft = 0,
    .tilemapTop = 0,
    .width = 13,
    .height = 2,
    .paletteNum = 14,
    .baseBlock = 0x1C2
};

static const struct BgTemplate sMapPreviewBgTemplate[1] = {
    {
        .mapBaseIndex = 31
    }
};

static u8 GetMapPreviewScreenIdx(mapsec_u8_t mapsec)
{
    s32 i;

    for (i = 0; i < MPS_COUNT; i++)
    {
        if (sMapPreviewScreenData[i].mapsec == mapsec)
        {
            return i;
        }
    }
    return MPS_COUNT;
}

bool8 MapHasPreviewScreen(mapsec_u8_t mapsec, u8 type)
{
    u8 idx;

    idx = GetMapPreviewScreenIdx(mapsec);
    if (idx != MPS_COUNT)
    {
        if (type == MPS_TYPE_ANY)
        {
            return TRUE;
        }
        else
        {
            return sMapPreviewScreenData[idx].type == type ? TRUE : FALSE;
        }
    }
    else
    {
        return FALSE;
    }
}

bool32 MapHasPreviewScreen_HandleQLState2(mapsec_u8_t mapsec, u8 type)
{
    return MapHasPreviewScreen(mapsec, type);
}

void MapPreview_InitBgs(void)
{
    InitBgsFromTemplates(0, sMapPreviewBgTemplate, NELEMS(sMapPreviewBgTemplate));
    ShowBg(0);
}

void MapPreview_LoadGfx(mapsec_u8_t mapsec)
{
    u8 idx;

    idx = GetMapPreviewScreenIdx(mapsec);
    if (idx != MPS_COUNT)
    {
       ResetTempTileDataBuffers();
       LoadPalette(sMapPreviewScreenData[idx].palptr, BG_PLTT_ID(13), 3 * PLTT_SIZE_4BPP);
       DecompressAndCopyTileDataToVram(0, sMapPreviewScreenData[idx].tilesptr, 0, 0, 0);
       if (GetBgTilemapBuffer(0) == NULL)
       {
           SetBgTilemapBuffer(0, Alloc(BG_SCREEN_SIZE));
           sAllocedBg0TilemapBuffer = TRUE;
       }
       else
       {
           sAllocedBg0TilemapBuffer = FALSE;
       }
       CopyToBgTilemapBuffer(0, sMapPreviewScreenData[idx].tilemapptr, 0, 0x000);
       CopyBgTilemapBufferToVram(0);
    }
}

void MapPreview_Unload(s32 windowId)
{
    RemoveWindow(windowId);
    if (sAllocedBg0TilemapBuffer)
    {
        Free(GetBgTilemapBuffer(0));
    }
}

bool32 MapPreview_IsGfxLoadFinished(void)
{
    return FreeTempTileDataBuffersIfPossible();
}

void MapPreview_StartForestTransition(mapsec_u8_t mapsec)
{
    u8 taskId;

    taskId = CreateTask(Task_RunMapPreviewScreenForest, 0);
    gTasks[taskId].data[2] = GetBgAttribute(0, BG_ATTR_PRIORITY);
    gTasks[taskId].data[4] = GetGpuReg(REG_OFFSET_BLDCNT);
    gTasks[taskId].data[5] = GetGpuReg(REG_OFFSET_BLDALPHA);
    gTasks[taskId].data[3] = GetGpuReg(REG_OFFSET_DISPCNT);
    gTasks[taskId].data[6] = GetGpuReg(REG_OFFSET_WININ);
    gTasks[taskId].data[7] = GetGpuReg(REG_OFFSET_WINOUT);
    gTasks[taskId].data[10] = MapPreview_GetDuration(mapsec);
    gTasks[taskId].data[8] = 16;
    gTasks[taskId].data[9] = 0;
    SetBgAttribute(0, BG_ATTR_PRIORITY, 0);
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG0 | BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG1 | BLDCNT_TGT2_BG2 | BLDCNT_TGT2_BG3 | BLDCNT_TGT2_OBJ | BLDCNT_TGT2_BD);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(16, 0));
    SetGpuRegBits(REG_OFFSET_WININ, WININ_WIN0_CLR | WININ_WIN1_CLR);
    SetGpuRegBits(REG_OFFSET_WINOUT, WINOUT_WIN01_CLR);
    gTasks[taskId].data[11] = MapPreview_CreateMapNameWindow(mapsec);
    LockPlayerFieldControls();
}

u16 MapPreview_CreateMapNameWindow(mapsec_u8_t mapsec)
{
    u16 windowId;
    u32 xctr;
    #ifdef BUGFIX
    // Fixes access violations indicated below.
    u8 color[3];
    #else
    u8 color[0];
    #endif

    windowId = AddWindow(&sMapNameWindow);
    FillWindowPixelBuffer(windowId, PIXEL_FILL(1));
    PutWindowTilemap(windowId);
    color[0] = TEXT_COLOR_WHITE; // Access violation
    color[1] = TEXT_COLOR_RED; // Access violation
    color[2] = TEXT_COLOR_LIGHT_GRAY; // Access violation
    GetMapName(gStringVar4, mapsec, 0);
    xctr = 104 - GetStringWidth(FONT_NORMAL, gStringVar4, 0);
    AddTextPrinterParameterized4(windowId, FONT_NORMAL, xctr / 2, 2, 0, 0, color/* Access violation */, -1, gStringVar4);
    return windowId;
}

bool32 ForestMapPreviewScreenIsRunning(void)
{
    if (FuncIsActiveTask(Task_RunMapPreviewScreenForest) == TRUE)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

static void Task_RunMapPreviewScreenForest(u8 taskId)
{
    s16 * data;

    data = gTasks[taskId].data;
    switch (data[0])
    {
    case 0:
        if (!MapPreview_IsGfxLoadFinished() && !IsDma3ManagerBusyWithBgCopy())
        {
            CopyWindowToVram(data[11], COPYWIN_FULL);
            data[0]++;
        }
        break;
    case 1:
        if (!IsDma3ManagerBusyWithBgCopy())
        {
            FadeInFromBlack();
            data[0]++;
        }
        break;
    case 2:
        if (IsWeatherNotFadingIn())
        {
            Overworld_PlaySpecialMapMusic();
            data[0]++;
        }
        break;
    case 3:
        data[1]++;
        if (data[1] > data[10])
        {
            data[1] = 0;
            data[0]++;
        }
        break;
    case 4:
        switch (data[1])
        {
        case 0:
            data[9]++;
            if (data[9] > 16)
            {
                data[9] = 16;
            }
            break;
        case 1:
            data[8]--;
            if (data[8] < 0)
            {
                data[8] = 0;
            }
            break;
        }
        data[1] = (data[1] + 1) % 3;
        SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(data[8], data[9]));
        if (data[8] == 0 && data[9] == 16)
        {
            FillBgTilemapBufferRect_Palette0(0, 0, 0, 0, 32, 32);
            CopyBgTilemapBufferToVram(0);
            data[0]++;
        }
        break;
    case 5:
        if (!IsDma3ManagerBusyWithBgCopy())
        {
            MapPreview_Unload(data[11]);
            SetBgAttribute(0, BG_ATTR_PRIORITY, data[2]);
            SetGpuReg(REG_OFFSET_DISPCNT, data[3]);
            SetGpuReg(REG_OFFSET_BLDCNT, data[4]);
            SetGpuReg(REG_OFFSET_BLDALPHA, data[5]);
            SetGpuReg(REG_OFFSET_WININ, data[6]);
            SetGpuReg(REG_OFFSET_WINOUT, data[7]);
            DestroyTask(taskId);
        }
        break;
    }
}

const struct MapPreviewScreen * GetDungeonMapPreviewScreenInfo(mapsec_u8_t mapsec)
{
    u8 idx;

    idx = GetMapPreviewScreenIdx(mapsec);
    if (idx == MPS_COUNT)
    {
        return NULL;
    }
    else
    {
        return &sMapPreviewScreenData[idx];
    }
}

u16 MapPreview_GetDuration(mapsec_u8_t mapsec)
{
    u8 idx;
    u16 flagId;

    idx = GetMapPreviewScreenIdx(mapsec);
    if (idx == MPS_COUNT)
    {
        return 0;
    }
    flagId = sMapPreviewScreenData[idx].flagId;
    if (sMapPreviewScreenData[idx].type == MPS_TYPE_CAVE)
    {
        if (!FlagGet(flagId))
        {
            return 120;
        }
        else
        {
            return 40;
        }
    }
    else {
        if (sHasVisitedMapBefore)
        {
            return 120;
        }
        else
        {
            return 40;
        }
    }
}

#endif // IS_FRLG

void MapPreview_SetFlag(u16 flagId)
{
    if (!FlagGet(flagId))
    {
        sHasVisitedMapBefore = TRUE;
    }
    else
    {
        sHasVisitedMapBefore = FALSE;
    }
    FlagSet(flagId);
}

// ShinyKrabby: script-triggered preview images, shown via the visionpreview macro.
// Independent of MapPreviewScreen/mapsec - the script picks the image directly by IMG_ id.
static EWRAM_DATA bool8 sVisionPreviewAllocedBg0TilemapBuffer = FALSE;

static const u8 sVP_ViridianForestPal[] = INCBIN_U8("graphics/map_preview/viridian_forest/tiles.gbapal");
static const u8 sVP_ViridianForestTiles[] = INCBIN_U8("graphics/map_preview/viridian_forest/tiles.4bpp.smol");
static const u8 sVP_ViridianForestTilemap[] = INCBIN_U8("graphics/map_preview/viridian_forest/tilemap.bin.smolTM");
static const u8 sVP_MtMoonPal[] = INCBIN_U8("graphics/map_preview/mt_moon/tiles.gbapal");
static const u8 sVP_MtMoonTiles[] = INCBIN_U8("graphics/map_preview/mt_moon/tiles.4bpp.smol");
static const u8 sVP_MtMoonTilemap[] = INCBIN_U8("graphics/map_preview/mt_moon/tilemap.bin.smolTM");
static const u8 sVP_DiglettsCavePal[] = INCBIN_U8("graphics/map_preview/digletts_cave/tiles.gbapal");
static const u8 sVP_DiglettsCaveTiles[] = INCBIN_U8("graphics/map_preview/digletts_cave/tiles.4bpp.smol");
static const u8 sVP_DiglettsCaveTilemap[] = INCBIN_U8("graphics/map_preview/digletts_cave/tilemap.bin.smolTM");
static const u8 sVP_RockTunnelPal[] = INCBIN_U8("graphics/map_preview/rock_tunnel/tiles.gbapal");
static const u8 sVP_RockTunnelTiles[] = INCBIN_U8("graphics/map_preview/rock_tunnel/tiles.4bpp.smol");
static const u8 sVP_RockTunnelTilemap[] = INCBIN_U8("graphics/map_preview/rock_tunnel/tilemap.bin.smolTM");
static const u8 sVP_PokemonTowerPal[] = INCBIN_U8("graphics/map_preview/pokemon_tower/tiles.gbapal");
static const u8 sVP_PokemonTowerTiles[] = INCBIN_U8("graphics/map_preview/pokemon_tower/tiles.4bpp.smol");
static const u8 sVP_PokemonTowerTilemap[] = INCBIN_U8("graphics/map_preview/pokemon_tower/tilemap.bin.smolTM");
static const u8 sVP_SafariZonePal[] = INCBIN_U8("graphics/map_preview/safari_zone/tiles.gbapal");
static const u8 sVP_SafariZoneTiles[] = INCBIN_U8("graphics/map_preview/safari_zone/tiles.4bpp.smol");
static const u8 sVP_SafariZoneTilemap[] = INCBIN_U8("graphics/map_preview/safari_zone/tilemap.bin.smolTM");
static const u8 sVP_SeafoamIslandsPal[] = INCBIN_U8("graphics/map_preview/seafoam_islands/tiles.gbapal");
static const u8 sVP_SeafoamIslandsTiles[] = INCBIN_U8("graphics/map_preview/seafoam_islands/tiles.4bpp.smol");
static const u8 sVP_SeafoamIslandsTilemap[] = INCBIN_U8("graphics/map_preview/seafoam_islands/tilemap.bin.smolTM");
static const u8 sVP_PokemonMansionPal[] = INCBIN_U8("graphics/map_preview/pokemon_mansion/tiles.gbapal");
static const u8 sVP_PokemonMansionTiles[] = INCBIN_U8("graphics/map_preview/pokemon_mansion/tiles.4bpp.smol");
static const u8 sVP_PokemonMansionTilemap[] = INCBIN_U8("graphics/map_preview/pokemon_mansion/tilemap.bin.smolTM");
static const u8 sVP_RocketHideoutPal[] = INCBIN_U8("graphics/map_preview/rocket_hideout/tiles.gbapal");
static const u8 sVP_RocketHideoutTiles[] = INCBIN_U8("graphics/map_preview/rocket_hideout/tiles.4bpp.smol");
static const u8 sVP_RocketHideoutTilemap[] = INCBIN_U8("graphics/map_preview/rocket_hideout/tilemap.bin.smolTM");
static const u8 sVP_SilphCoPal[] = INCBIN_U8("graphics/map_preview/silph_co/tiles.gbapal");
static const u8 sVP_SilphCoTiles[] = INCBIN_U8("graphics/map_preview/silph_co/tiles.4bpp.smol");
static const u8 sVP_SilphCoTilemap[] = INCBIN_U8("graphics/map_preview/silph_co/tilemap.bin.smolTM");
static const u8 sVP_VictoryRoadPal[] = INCBIN_U8("graphics/map_preview/victory_road/tiles.gbapal");
static const u8 sVP_VictoryRoadTiles[] = INCBIN_U8("graphics/map_preview/victory_road/tiles.4bpp.smol");
static const u8 sVP_VictoryRoadTilemap[] = INCBIN_U8("graphics/map_preview/victory_road/tilemap.bin.smolTM");
static const u8 sVP_CeruleanCavePal[] = INCBIN_U8("graphics/map_preview/cerulean_cave/tiles.gbapal");
static const u8 sVP_CeruleanCaveTiles[] = INCBIN_U8("graphics/map_preview/cerulean_cave/tiles.4bpp.smol");
static const u8 sVP_CeruleanCaveTilemap[] = INCBIN_U8("graphics/map_preview/cerulean_cave/tilemap.bin.smolTM");
static const u8 sVP_PowerPlantPal[] = INCBIN_U8("graphics/map_preview/power_plant/tiles.gbapal");
static const u8 sVP_PowerPlantTiles[] = INCBIN_U8("graphics/map_preview/power_plant/tiles.4bpp.smol");
static const u8 sVP_PowerPlantTilemap[] = INCBIN_U8("graphics/map_preview/power_plant/tilemap.bin.smolTM");
static const u8 sVP_MtEmberPal[] = INCBIN_U8("graphics/map_preview/mt_ember/tiles.gbapal");
static const u8 sVP_MtEmberTiles[] = INCBIN_U8("graphics/map_preview/mt_ember/tiles.4bpp.smol");
static const u8 sVP_MtEmberTilemap[] = INCBIN_U8("graphics/map_preview/mt_ember/tilemap.bin.smolTM");
static const u8 sVP_RocketWarehousePal[] = INCBIN_U8("graphics/map_preview/rocket_warehouse/tiles.gbapal");
static const u8 sVP_RocketWarehouseTiles[] = INCBIN_U8("graphics/map_preview/rocket_warehouse/tiles.4bpp.smol");
static const u8 sVP_RocketWarehouseTilemap[] = INCBIN_U8("graphics/map_preview/rocket_warehouse/tilemap.bin.smolTM");
static const u8 sVP_MoneanChamberPal[] = INCBIN_U8("graphics/map_preview/monean_chamber/tiles.gbapal");
static const u8 sVP_MoneanChamberTiles[] = INCBIN_U8("graphics/map_preview/monean_chamber/tiles.4bpp.smol");
static const u8 sVP_MoneanChamberTilemap[] = INCBIN_U8("graphics/map_preview/monean_chamber/tilemap.bin.smolTM");
static const u8 sVP_DottedHolePal[] = INCBIN_U8("graphics/map_preview/dotted_hole/tiles.gbapal");
static const u8 sVP_DottedHoleTiles[] = INCBIN_U8("graphics/map_preview/dotted_hole/tiles.4bpp.smol");
static const u8 sVP_DottedHoleTilemap[] = INCBIN_U8("graphics/map_preview/dotted_hole/tilemap.bin.smolTM");
static const u8 sVP_BerryForestPal[] = INCBIN_U8("graphics/map_preview/berry_forest/tiles.gbapal");
static const u8 sVP_BerryForestTiles[] = INCBIN_U8("graphics/map_preview/berry_forest/tiles.4bpp.smol");
static const u8 sVP_BerryForestTilemap[] = INCBIN_U8("graphics/map_preview/berry_forest/tilemap.bin.smolTM");
static const u8 sVP_IcefallCavePal[] = INCBIN_U8("graphics/map_preview/icefall_cave/tiles.gbapal");
static const u8 sVP_IcefallCaveTiles[] = INCBIN_U8("graphics/map_preview/icefall_cave/tiles.4bpp.smol");
static const u8 sVP_IcefallCaveTilemap[] = INCBIN_U8("graphics/map_preview/icefall_cave/tilemap.bin.smolTM");
static const u8 sVP_LostCavePal[] = INCBIN_U8("graphics/map_preview/lost_cave/tiles.gbapal");
static const u8 sVP_LostCaveTiles[] = INCBIN_U8("graphics/map_preview/lost_cave/tiles.4bpp.smol");
static const u8 sVP_LostCaveTilemap[] = INCBIN_U8("graphics/map_preview/lost_cave/tilemap.bin.smolTM");
static const u8 sVP_AlteringCavePal[] = INCBIN_U8("graphics/map_preview/altering_cave/tiles.gbapal");
static const u8 sVP_AlteringCaveTiles[] = INCBIN_U8("graphics/map_preview/altering_cave/tiles.4bpp.smol");
static const u8 sVP_AlteringCaveTilemap[] = INCBIN_U8("graphics/map_preview/altering_cave/tilemap.bin.smolTM");

static const struct ImageData sVisionPreviewImageData[IMG_COUNT] = {
    [IMG_VIRIDIAN_FOREST] = { .tilesptr = sVP_ViridianForestTiles, .tilemapptr = sVP_ViridianForestTilemap, .palptr = sVP_ViridianForestPal },
    [IMG_MT_MOON] = { .tilesptr = sVP_MtMoonTiles, .tilemapptr = sVP_MtMoonTilemap, .palptr = sVP_MtMoonPal },
    [IMG_DIGLETTS_CAVE] = { .tilesptr = sVP_DiglettsCaveTiles, .tilemapptr = sVP_DiglettsCaveTilemap, .palptr = sVP_DiglettsCavePal },
    [IMG_ROCK_TUNNEL] = { .tilesptr = sVP_RockTunnelTiles, .tilemapptr = sVP_RockTunnelTilemap, .palptr = sVP_RockTunnelPal },
    [IMG_POKEMON_TOWER] = { .tilesptr = sVP_PokemonTowerTiles, .tilemapptr = sVP_PokemonTowerTilemap, .palptr = sVP_PokemonTowerPal },
    [IMG_SAFARI_ZONE] = { .tilesptr = sVP_SafariZoneTiles, .tilemapptr = sVP_SafariZoneTilemap, .palptr = sVP_SafariZonePal },
    [IMG_SEAFOAM_ISLANDS] = { .tilesptr = sVP_SeafoamIslandsTiles, .tilemapptr = sVP_SeafoamIslandsTilemap, .palptr = sVP_SeafoamIslandsPal },
    [IMG_POKEMON_MANSION] = { .tilesptr = sVP_PokemonMansionTiles, .tilemapptr = sVP_PokemonMansionTilemap, .palptr = sVP_PokemonMansionPal },
    [IMG_ROCKET_HIDEOUT] = { .tilesptr = sVP_RocketHideoutTiles, .tilemapptr = sVP_RocketHideoutTilemap, .palptr = sVP_RocketHideoutPal },
    [IMG_SILPH_CO] = { .tilesptr = sVP_SilphCoTiles, .tilemapptr = sVP_SilphCoTilemap, .palptr = sVP_SilphCoPal },
    [IMG_VICTORY_ROAD] = { .tilesptr = sVP_VictoryRoadTiles, .tilemapptr = sVP_VictoryRoadTilemap, .palptr = sVP_VictoryRoadPal },
    [IMG_CERULEAN_CAVE] = { .tilesptr = sVP_CeruleanCaveTiles, .tilemapptr = sVP_CeruleanCaveTilemap, .palptr = sVP_CeruleanCavePal },
    [IMG_POWER_PLANT] = { .tilesptr = sVP_PowerPlantTiles, .tilemapptr = sVP_PowerPlantTilemap, .palptr = sVP_PowerPlantPal },
    [IMG_MT_EMBER] = { .tilesptr = sVP_MtEmberTiles, .tilemapptr = sVP_MtEmberTilemap, .palptr = sVP_MtEmberPal },
    [IMG_ROCKET_WAREHOUSE] = { .tilesptr = sVP_RocketWarehouseTiles, .tilemapptr = sVP_RocketWarehouseTilemap, .palptr = sVP_RocketWarehousePal },
    [IMG_MONEAN_CHAMBER] = { .tilesptr = sVP_MoneanChamberTiles, .tilemapptr = sVP_MoneanChamberTilemap, .palptr = sVP_MoneanChamberPal },
    [IMG_DOTTED_HOLE] = { .tilesptr = sVP_DottedHoleTiles, .tilemapptr = sVP_DottedHoleTilemap, .palptr = sVP_DottedHolePal },
    [IMG_BERRY_FOREST] = { .tilesptr = sVP_BerryForestTiles, .tilemapptr = sVP_BerryForestTilemap, .palptr = sVP_BerryForestPal },
    [IMG_ICEFALL_CAVE] = { .tilesptr = sVP_IcefallCaveTiles, .tilemapptr = sVP_IcefallCaveTilemap, .palptr = sVP_IcefallCavePal },
    [IMG_LOST_CAVE] = { .tilesptr = sVP_LostCaveTiles, .tilemapptr = sVP_LostCaveTilemap, .palptr = sVP_LostCavePal },
    [IMG_ALTERING_CAVE] = { .tilesptr = sVP_AlteringCaveTiles, .tilemapptr = sVP_AlteringCaveTilemap, .palptr = sVP_AlteringCavePal },
};

static bool32 VisionPreview_ImageUsesFullPalette(u8 imageId)
{
    switch (imageId)
    {
    case IMG_VIRIDIAN_FOREST:
    case IMG_SAFARI_ZONE:
    case IMG_POKEMON_MANSION:
    case IMG_ROCKET_HIDEOUT:
    case IMG_POWER_PLANT:
    case IMG_ROCKET_WAREHOUSE:
    case IMG_BERRY_FOREST:
        return FALSE;
    default:
        return TRUE;
    }
}

static void VisionPreview_LoadImageGfx(u8 imageId)
{
    ResetTempTileDataBuffers();
    if (VisionPreview_ImageUsesFullPalette(imageId))
        LoadPalette(sVisionPreviewImageData[imageId].palptr, BG_PLTT_ID(0), 16 * PLTT_SIZE_4BPP);
    else
        LoadPalette(sVisionPreviewImageData[imageId].palptr, BG_PLTT_ID(13), 3 * PLTT_SIZE_4BPP);
    DecompressAndCopyTileDataToVram(0, sVisionPreviewImageData[imageId].tilesptr, 0, 0, 0);
    if (GetBgTilemapBuffer(0) == NULL)
    {
        SetBgTilemapBuffer(0, Alloc(BG_SCREEN_SIZE));
        sVisionPreviewAllocedBg0TilemapBuffer = TRUE;
    }
    else
    {
        sVisionPreviewAllocedBg0TilemapBuffer = FALSE;
    }
    CopyToBgTilemapBuffer(0, sVisionPreviewImageData[imageId].tilemapptr, 0, 0x000);
    CopyBgTilemapBufferToVram(0);
}

static void VblankCB_VisionPreviewScript(void)
{
    TransferPlttBuffer();
}

static void CB2_VisionPreviewScript(void)
{
    RunTasks();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

#define taskStep     data[0]
#define frameCounter data[1]

static void Task_RunVisionPreview_Script(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    switch (taskStep)
    {
    case 0:
        if (!FreeTempTileDataBuffersIfPossible() && !IsDma3ManagerBusyWithBgCopy())
            taskStep++;
        break;
    case 1:
        if (!IsDma3ManagerBusyWithBgCopy())
        {
            FadeInFromBlack();
            taskStep++;
        }
        break;
    case 2:
        frameCounter++;
        if (frameCounter > MPS_DURATION_SCRIPT || JOY_HELD(B_BUTTON))
        {
            BeginNormalPaletteFade(PALETTES_ALL, MPS_BASIC_FADE_SPEED, 0, 16, RGB_BLACK);
            frameCounter = 0;
            taskStep++;
        }
        break;
    case 3:
        if (!UpdatePaletteFade())
        {
            if (sVisionPreviewAllocedBg0TilemapBuffer)
                Free(GetBgTilemapBuffer(0));
            DestroyTask(taskId);
            SetMainCallback2(gMain.savedCallback);
        }
        break;
    }
}

#undef taskStep
#undef frameCounter

// gSpecialVar_0x8004: a PreviewImageId (IMG_*) to show. Called by the visionpreview script macro.
void Script_VisionPreview(void)
{
    SetVBlankCallback(NULL);
    gMain.savedCallback = CB2_ReturnToFieldContinueScript;
    VisionPreview_LoadImageGfx(gSpecialVar_0x8004);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0x10, 0, RGB_BLACK);
    SetVBlankCallback(VblankCB_VisionPreviewScript);
    SetMainCallback2(CB2_VisionPreviewScript);
    CreateTask(Task_RunVisionPreview_Script, 0);
}
