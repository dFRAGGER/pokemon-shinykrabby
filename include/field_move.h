#ifndef GUARD_FIELD_MOVE_H
#define GUARD_FIELD_MOVE_H

#include "global.h"
#include "constants/field_move.h"

struct FieldMoveInfo
{
    bool32 (*fieldMoveFunc)(void);
    bool32 (*isUnlockedFunc)(void);
    u16 moveID;
    u16 requiredItem;
    bool8 canUseWithoutKnowing;
    bool8 alwaysBypassCompatibility;
    u8 partyMsgID;
};

extern const struct FieldMoveInfo gFieldMoveInfo[];

static inline bool32 SetUpFieldMove(enum FieldMove fieldMove)
{
    return gFieldMoveInfo[fieldMove].fieldMoveFunc();
}

static inline bool32 IsFieldMoveUnlocked(enum FieldMove fieldMove)
{
    return gFieldMoveInfo[fieldMove].isUnlockedFunc();
}

static inline u32 FieldMove_GetMoveId(enum FieldMove fieldMove)
{
    return gFieldMoveInfo[fieldMove].moveID;
}

static inline u32 FieldMove_GetPartyMsgID(enum FieldMove fieldMove)
{
    return gFieldMoveInfo[fieldMove].partyMsgID;
}

// Returns PARTY_SIZE when no eligible user is available.
u8 GetPartyMoveUser(u16 move, u16 requiredItem, bool32 canUseWithoutKnowing, bool32 bypassCompatibility);
u8 GetPartyFieldMoveUser(enum FieldMove fieldMove);
bool32 CanMonUseFieldMove(struct Pokemon *mon, enum FieldMove fieldMove);

#endif //GUARD_FIELD_MOVE_H
