#include "global.h"
#include "event_data.h"
#include "field_move.h"
#include "fldeff.h"
#include "fldeff_misc.h"
#include "party_menu.h"
#include "constants/field_move.h"
#include "constants/moves.h"
#include "constants/party_menu.h"
#include "constants/items.h"
#include "item.h"
#include "config/overworld.h"

static bool32 IsFieldMoveUnlocked_Cut(void)
{
    if (IS_FRLG)
        return FlagGet(FLAG_BADGE02_GET);

    return FlagGet(FLAG_BADGE01_GET);
}

static bool32 IsFieldMoveUnlocked_Flash(void)
{
    if (IS_FRLG)
        return FlagGet(FLAG_BADGE01_GET);

    return FlagGet(FLAG_BADGE02_GET);
}

static bool32 IsFieldMoveUnlocked_RockSmash(void)
{
    if (IS_FRLG)
        return FlagGet(FLAG_BADGE06_GET);

    return FlagGet(FLAG_BADGE03_GET);
}

static bool32 IsFieldMoveUnlocked_Strength(void)
{
    return FlagGet(FLAG_BADGE04_GET);
}

static bool32 IsFieldMoveUnlocked_Surf(void)
{
    return FlagGet(FLAG_BADGE05_GET);
}

static bool32 IsFieldMoveUnlocked_Fly(void)
{
    if (IS_FRLG)
        return FlagGet(FLAG_BADGE03_GET);

    return FlagGet(FLAG_BADGE06_GET);
}

static bool32 IsFieldMoveUnlocked_Dive(void)
{
    return FlagGet(FLAG_BADGE07_GET);
}

static bool32 IsFieldMoveUnlocked_Waterfall(void)
{
    if (IS_FRLG)
        return FlagGet(FLAG_BADGE07_GET);

    return FlagGet(FLAG_BADGE08_GET);
}

#if OW_ROCK_CLIMB_FIELD_MOVE == TRUE
static bool32 IsFieldMoveUnlocked_RockClimb(void)
{
    return TRUE;
}
#endif

static bool32 IsFieldMoveUnlocked_Teleport(void)
{
    return TRUE;
}

static bool32 IsFieldMoveUnlocked_Dig(void)
{
    return TRUE;
}

static bool32 IsFieldMoveUnlocked_SecretPower(void)
{
    return TRUE;
}

static bool32 IsFieldMoveUnlocked_MilkDrink(void)
{
    return TRUE;
}

static bool32 IsFieldMoveUnlocked_SoftBoiled(void)
{
    return TRUE;
}

static bool32 IsFieldMoveUnlocked_SweetScent(void)
{
    return TRUE;
}

#if OW_DEFOG_FIELD_MOVE == TRUE
static bool32 IsFieldMoveUnlocked_Defog(void)
{
    return TRUE;
}
#endif

#if OW_HM_ITEMS_ALLOW_FIELD_USE == TRUE
// Maps HM moves to their corresponding HM items
static u16 GetHMItemForMove(u16 moveId)
{
    switch (moveId)
    {
        case MOVE_CUT:        return ITEM_HM01;
        case MOVE_FLY:        return ITEM_HM02;
        case MOVE_SURF:       return ITEM_HM03;
        case MOVE_STRENGTH:   return ITEM_HM04;
        case MOVE_FLASH:      return ITEM_HM05;
        case MOVE_ROCK_SMASH: return ITEM_HM06;
        case MOVE_WATERFALL:  return ITEM_HM07;
        case MOVE_DIVE:       return ITEM_HM08;
        default:              return ITEM_NONE;
    }
}

// Checks if player has the HM item for a specific field move
bool32 HasHMItemForFieldMove(enum FieldMove fieldMove)
{
    u16 moveId = FieldMove_GetMoveId(fieldMove);
    u16 hmItem = GetHMItemForMove(moveId);

    if (hmItem == ITEM_NONE)
        return FALSE;

    return CheckBagHasItem(hmItem, 1);
}
#else
bool32 HasHMItemForFieldMove(enum FieldMove fieldMove)
{
    return TRUE; // When config is disabled, always return TRUE (no item check needed)
}
#endif

const struct FieldMoveInfo gFieldMoveInfo[FIELD_MOVES_COUNT] =
{
    [FIELD_MOVE_CUT] =
    {
        .fieldMoveFunc = SetUpFieldMove_Cut,
        .isUnlockedFunc = IsFieldMoveUnlocked_Cut,
        .moveID = MOVE_CUT,
        .partyMsgID = PARTY_MSG_NOTHING_TO_CUT,
    },

    [FIELD_MOVE_FLASH] =
    {
        .fieldMoveFunc = SetUpFieldMove_Flash,
        .isUnlockedFunc = IsFieldMoveUnlocked_Flash,
        .moveID = MOVE_FLASH,
        .partyMsgID = PARTY_MSG_CANT_USE_HERE,
    },

    [FIELD_MOVE_ROCK_SMASH] =
    {
        .fieldMoveFunc = SetUpFieldMove_RockSmash,
        .isUnlockedFunc = IsFieldMoveUnlocked_RockSmash,
        .moveID = MOVE_ROCK_SMASH,
        .partyMsgID = PARTY_MSG_CANT_USE_HERE,
    },

    [FIELD_MOVE_STRENGTH] =
    {
        .fieldMoveFunc = SetUpFieldMove_Strength,
        .isUnlockedFunc = IsFieldMoveUnlocked_Strength,
        .moveID = MOVE_STRENGTH,
        .partyMsgID = PARTY_MSG_CANT_USE_HERE,
    },

    [FIELD_MOVE_SURF] =
    {
        .fieldMoveFunc = SetUpFieldMove_Surf,
        .isUnlockedFunc = IsFieldMoveUnlocked_Surf,
        .moveID = MOVE_SURF,
        .partyMsgID = PARTY_MSG_CANT_SURF_HERE,
    },

    [FIELD_MOVE_FLY] =
    {
        .fieldMoveFunc = SetUpFieldMove_Fly,
        .isUnlockedFunc = IsFieldMoveUnlocked_Fly,
        .moveID = MOVE_FLY,
        .partyMsgID = PARTY_MSG_CANT_USE_HERE,
    },

    [FIELD_MOVE_DIVE] =
    {
        .fieldMoveFunc = SetUpFieldMove_Dive,
        .isUnlockedFunc = IsFieldMoveUnlocked_Dive,
        .moveID = MOVE_DIVE,
        .partyMsgID = PARTY_MSG_CANT_USE_HERE,
    },

    [FIELD_MOVE_WATERFALL] =
    {
        .fieldMoveFunc = SetUpFieldMove_Waterfall,
        .isUnlockedFunc = IsFieldMoveUnlocked_Waterfall,
        .moveID = MOVE_WATERFALL,
        .partyMsgID = PARTY_MSG_CANT_USE_HERE,
    },

    [FIELD_MOVE_TELEPORT] =
    {
        .fieldMoveFunc = SetUpFieldMove_Teleport,
        .isUnlockedFunc = IsFieldMoveUnlocked_Teleport,
        .moveID = MOVE_TELEPORT,
        .partyMsgID = PARTY_MSG_CANT_USE_HERE,
    },

    [FIELD_MOVE_DIG] =
    {
        .fieldMoveFunc = SetUpFieldMove_Dig,
        .isUnlockedFunc = IsFieldMoveUnlocked_Dig,
        .moveID = MOVE_DIG,
        .partyMsgID = PARTY_MSG_CANT_USE_HERE,
    },

    [FIELD_MOVE_SECRET_POWER] =
    {
        .fieldMoveFunc = SetUpFieldMove_SecretPower,
        .isUnlockedFunc = IsFieldMoveUnlocked_SecretPower,
        .moveID = MOVE_SECRET_POWER,
        .partyMsgID = PARTY_MSG_CANT_USE_HERE,
    },

    [FIELD_MOVE_MILK_DRINK] =
    {
        .fieldMoveFunc = SetUpFieldMove_SoftBoiled,
        .isUnlockedFunc = IsFieldMoveUnlocked_MilkDrink,
        .moveID = MOVE_MILK_DRINK,
        .partyMsgID = PARTY_MSG_NOT_ENOUGH_HP,
    },

    [FIELD_MOVE_SOFT_BOILED] =
    {
        .fieldMoveFunc = SetUpFieldMove_SoftBoiled,
        .isUnlockedFunc = IsFieldMoveUnlocked_SoftBoiled,
        .moveID = MOVE_SOFT_BOILED,
        .partyMsgID = PARTY_MSG_NOT_ENOUGH_HP,
    },

    [FIELD_MOVE_SWEET_SCENT] =
    {
        .fieldMoveFunc = SetUpFieldMove_SweetScent,
        .isUnlockedFunc = IsFieldMoveUnlocked_SweetScent,
        .moveID = MOVE_SWEET_SCENT,
        .partyMsgID = PARTY_MSG_CANT_USE_HERE,
    },
#if OW_ROCK_CLIMB_FIELD_MOVE == TRUE
    [FIELD_MOVE_ROCK_CLIMB] =
    {
        .fieldMoveFunc = SetUpFieldMove_RockClimb,
        .isUnlockedFunc = IsFieldMoveUnlocked_RockClimb,
        .moveID = MOVE_ROCK_CLIMB,
        .partyMsgID = PARTY_MSG_CANT_USE_HERE,
    },
#endif
#if OW_DEFOG_FIELD_MOVE == TRUE
    [FIELD_MOVE_DEFOG] =
    {
        .fieldMoveFunc = SetUpFieldMove_Defog,
        .isUnlockedFunc = IsFieldMoveUnlocked_Defog,
        .moveID = MOVE_DEFOG,
        .partyMsgID = PARTY_MSG_CANT_USE_HERE,
    },
#endif
};
