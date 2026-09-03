#include "global.h"
#include "challenge_menu.h"
#include "event_data.h"
#include "field_move.h"
#include "fldeff.h"
#include "fldeff_misc.h"
#include "item.h"
#include "party_menu.h"
#include "pokemon.h"
#include "constants/field_move.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/party_menu.h"

static bool32 IsFieldMoveUnlocked_Cut(void)
{
    // SK keeps its original Emerald-style badge progression even though it
    // inherits the shared HNS engine conventions.
    if (IS_HNS && !IS_SK)
        return FlagGet(FLAG_BADGE02_GET);
    if (IS_FRLG)
        return FlagGet(FLAG_BADGE02_GET);

    return FlagGet(FLAG_BADGE01_GET);
}

static bool32 IsFieldMoveUnlocked_Flash(void)
{
    if (IS_HNS && !IS_SK)
        return FlagGet(FLAG_BADGE01_GET);
    if (IS_FRLG)
        return FlagGet(FLAG_BADGE01_GET);

    return FlagGet(FLAG_BADGE02_GET);
}

static bool32 IsFieldMoveUnlocked_RockSmash(void)
{
    if (IS_HNS && !IS_SK)
        return FlagGet(FLAG_BADGE01_GET);
    if (IS_FRLG)
        return FlagGet(FLAG_BADGE06_GET);

    return FlagGet(FLAG_BADGE03_GET);
}

static bool32 IsFieldMoveUnlocked_Strength(void)
{
    if (IS_HNS && !IS_SK)
        return FlagGet(FLAG_BADGE03_GET);

    return FlagGet(FLAG_BADGE04_GET);
}

static bool32 IsFieldMoveUnlocked_Surf(void)
{
    if (IS_HNS && !IS_SK)
        return FlagGet(FLAG_BADGE04_GET);

    return FlagGet(FLAG_BADGE05_GET);
}

static bool32 IsFieldMoveUnlocked_Fly(void)
{
    if (IS_HNS && !IS_SK)
        return FlagGet(FLAG_BADGE05_GET);
    if (IS_FRLG)
        return FlagGet(FLAG_BADGE03_GET);

    return FlagGet(FLAG_BADGE06_GET);
}

static bool32 IsFieldMoveUnlocked_Dive(void)
{
    if (IS_HNS)
        return FlagGet(FLAG_BADGE07_GET);

    return FlagGet(FLAG_BADGE07_GET);
}

static bool32 IsFieldMoveUnlocked_Waterfall(void)
{
    if (IS_HNS)
        return FlagGet(FLAG_BADGE08_GET);
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

const struct FieldMoveInfo gFieldMoveInfo[FIELD_MOVES_COUNT] =
{
    [FIELD_MOVE_CUT] =
    {
        .fieldMoveFunc = SetUpFieldMove_Cut,
        .isUnlockedFunc = IsFieldMoveUnlocked_Cut,
        .moveID = MOVE_CUT,
        .requiredItem = ITEM_HM_CUT,
        .canUseWithoutKnowing = OW_HM_ITEMS_ALLOW_FIELD_USE,
        .partyMsgID = PARTY_MSG_NOTHING_TO_CUT,
    },

    [FIELD_MOVE_FLASH] =
    {
        .fieldMoveFunc = SetUpFieldMove_Flash,
        .isUnlockedFunc = IsFieldMoveUnlocked_Flash,
        .moveID = MOVE_FLASH,
        .requiredItem = ITEM_HM_FLASH,
        .canUseWithoutKnowing = OW_HM_ITEMS_ALLOW_FIELD_USE,
        .partyMsgID = PARTY_MSG_CANT_USE_HERE,
    },

    [FIELD_MOVE_ROCK_SMASH] =
    {
        .fieldMoveFunc = SetUpFieldMove_RockSmash,
        .isUnlockedFunc = IsFieldMoveUnlocked_RockSmash,
        .moveID = MOVE_ROCK_SMASH,
        .requiredItem = ITEM_HM_ROCK_SMASH,
        .canUseWithoutKnowing = OW_HM_ITEMS_ALLOW_FIELD_USE,
        .partyMsgID = PARTY_MSG_CANT_USE_HERE,
    },

    [FIELD_MOVE_STRENGTH] =
    {
        .fieldMoveFunc = SetUpFieldMove_Strength,
        .isUnlockedFunc = IsFieldMoveUnlocked_Strength,
        .moveID = MOVE_STRENGTH,
        .requiredItem = ITEM_HM_STRENGTH,
        .canUseWithoutKnowing = OW_HM_ITEMS_ALLOW_FIELD_USE,
        .partyMsgID = PARTY_MSG_CANT_USE_HERE,
    },

    [FIELD_MOVE_SURF] =
    {
        .fieldMoveFunc = SetUpFieldMove_Surf,
        .isUnlockedFunc = IsFieldMoveUnlocked_Surf,
        .moveID = MOVE_SURF,
        .requiredItem = ITEM_HM_SURF,
        .canUseWithoutKnowing = OW_HM_ITEMS_ALLOW_FIELD_USE,
        .partyMsgID = PARTY_MSG_CANT_SURF_HERE,
    },

    [FIELD_MOVE_FLY] =
    {
        .fieldMoveFunc = SetUpFieldMove_Fly,
        .isUnlockedFunc = IsFieldMoveUnlocked_Fly,
        .moveID = MOVE_FLY,
        .requiredItem = ITEM_HM_FLY,
        .canUseWithoutKnowing = OW_HM_ITEMS_ALLOW_FIELD_USE,
        .partyMsgID = PARTY_MSG_CANT_USE_HERE,
    },

    [FIELD_MOVE_DIVE] =
    {
        .fieldMoveFunc = SetUpFieldMove_Dive,
        .isUnlockedFunc = IsFieldMoveUnlocked_Dive,
        .moveID = MOVE_DIVE,
#if IS_HNS && !IS_SK
        .requiredItem = ITEM_NONE,
        .canUseWithoutKnowing = FALSE,
#else
        .requiredItem = ITEM_HM_DIVE,
        .canUseWithoutKnowing = OW_HM_ITEMS_ALLOW_FIELD_USE,
#endif
        .partyMsgID = PARTY_MSG_CANT_USE_HERE,
    },

    [FIELD_MOVE_WATERFALL] =
    {
        .fieldMoveFunc = SetUpFieldMove_Waterfall,
        .isUnlockedFunc = IsFieldMoveUnlocked_Waterfall,
        .moveID = MOVE_WATERFALL,
        .requiredItem = ITEM_HM_WATERFALL,
        .canUseWithoutKnowing = OW_HM_ITEMS_ALLOW_FIELD_USE,
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
        .requiredItem = ITEM_CLIMBING_ROPE,
        .canUseWithoutKnowing = TRUE,
        .alwaysBypassCompatibility = TRUE,
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

static bool32 IsMonCapableOfMove(struct Pokemon *mon, u16 move, bool32 canUseWithoutKnowing)
{
    u16 species = GetMonData(mon, MON_DATA_SPECIES);

    if (species == SPECIES_NONE || GetMonData(mon, MON_DATA_IS_EGG))
        return FALSE;

    if (MonKnowsMove(mon, move))
        return TRUE;

    return canUseWithoutKnowing && CanLearnTeachableMove(species, move);
}

static u8 FindCapablePartyMoveUser(u16 move, bool32 canUseWithoutKnowing)
{
    u32 i;

    for (i = 0; i < GetMaxPartySize(); i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES) == SPECIES_NONE)
            break;
        if (IsMonCapableOfMove(&gPlayerParty[i], move, canUseWithoutKnowing))
            return i;
    }

    return PARTY_SIZE;
}

static u8 FindFirstUsablePartyMon(void)
{
    u32 i;

    for (i = 0; i < GetMaxPartySize(); i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES) == SPECIES_NONE)
            break;
        if (!GetMonData(&gPlayerParty[i], MON_DATA_IS_EGG))
            return i;
    }

    return PARTY_SIZE;
}

u8 GetPartyMoveUser(u16 move, u16 requiredItem, bool32 canUseWithoutKnowing, bool32 bypassCompatibility)
{
    u8 partyIndex;

    if (requiredItem != ITEM_NONE && !CheckBagHasItem(requiredItem, 1))
        return PARTY_SIZE;

    partyIndex = FindCapablePartyMoveUser(move, canUseWithoutKnowing);
    if (partyIndex != PARTY_SIZE || !bypassCompatibility)
        return partyIndex;

    return FindFirstUsablePartyMon();
}

static bool32 CanBypassFieldMoveCompatibility(const struct FieldMoveInfo *info)
{
    if (info->alwaysBypassCompatibility)
        return TRUE;

    return (info->requiredItem != ITEM_NONE
            && info->canUseWithoutKnowing
            && IsFieldMoveCompatibilityBypassActive());
}

bool32 CanMonUseFieldMove(struct Pokemon *mon, enum FieldMove fieldMove)
{
    const struct FieldMoveInfo *info = &gFieldMoveInfo[fieldMove];
    u8 partyIndex;

    if (!IsFieldMoveUnlocked(fieldMove))
        return FALSE;
    if (info->requiredItem != ITEM_NONE && !CheckBagHasItem(info->requiredItem, 1))
        return FALSE;

    if (IsMonCapableOfMove(mon, info->moveID, info->canUseWithoutKnowing))
        return TRUE;

    if (!CanBypassFieldMoveCompatibility(info))
        return FALSE;

    // Only expose the fallback on one party member, and only when no compatible
    // party member exists. This keeps the normal compatible user preferable.
    if (FindCapablePartyMoveUser(info->moveID, info->canUseWithoutKnowing) != PARTY_SIZE)
        return FALSE;

    partyIndex = FindFirstUsablePartyMon();
    return partyIndex != PARTY_SIZE && mon == &gPlayerParty[partyIndex];
}

u8 GetPartyFieldMoveUser(enum FieldMove fieldMove)
{
    const struct FieldMoveInfo *info = &gFieldMoveInfo[fieldMove];

    if (!IsFieldMoveUnlocked(fieldMove))
        return PARTY_SIZE;

    return GetPartyMoveUser(info->moveID,
                            info->requiredItem,
                            info->canUseWithoutKnowing,
                            CanBypassFieldMoveCompatibility(info));
}
