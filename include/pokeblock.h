#ifndef GUARD_POKEBLOCK_H
#define GUARD_POKEBLOCK_H

#define TAG_POKEBLOCK       14818

enum
{
    PBLOCK_CLR_NONE,
    PBLOCK_CLR_RED,
    PBLOCK_CLR_BLUE,
    PBLOCK_CLR_PINK,
    PBLOCK_CLR_GREEN,
    PBLOCK_CLR_YELLOW,
    PBLOCK_CLR_PURPLE,
    PBLOCK_CLR_INDIGO,
    PBLOCK_CLR_BROWN,
    PBLOCK_CLR_LITE_BLUE,
    PBLOCK_CLR_OLIVE,
    PBLOCK_CLR_GRAY,
    PBLOCK_CLR_BLACK,
    PBLOCK_CLR_WHITE,
    PBLOCK_CLR_GOLD,
};

enum
{
    PBLOCK_COLOR,
    PBLOCK_SPICY,
    PBLOCK_DRY,
    PBLOCK_SWEET,
    PBLOCK_BITTER,
    PBLOCK_SOUR,
    PBLOCK_FEEL,
};

// Herb Grinder thematic aliases
#define PBLOCK_ENERGETIC  PBLOCK_SPICY
#define PBLOCK_CREATIVE   PBLOCK_DRY
#define PBLOCK_RELAXED    PBLOCK_SWEET
#define PBLOCK_FOCUSED    PBLOCK_BITTER
#define PBLOCK_UPLIFTED   PBLOCK_SOUR
#define PBLOCK_POTENCY    PBLOCK_FEEL

// PBLOCK_CLR_GROUND: unfinished Ground Material output from Herb Grinder (before Rolling Table)
// The flavor-specific variants (16-20) are set based on the dominant flavor at grind time.
#define PBLOCK_CLR_GROUND          15
#define PBLOCK_CLR_GROUND_SPICY    16  // dominant ENERGETIC → "Energetic Grind"
#define PBLOCK_CLR_GROUND_DRY      17  // dominant CREATIVE  → "Creative Grind"
#define PBLOCK_CLR_GROUND_SWEET    18  // dominant RELAXED   → "Relaxed Grind"
#define PBLOCK_CLR_GROUND_BITTER   19  // dominant FOCUSED   → "Focused Grind"
#define PBLOCK_CLR_GROUND_SOUR     20  // dominant UPLIFTED  → "Uplifted Grind"

// Color offsets for prep type — added to the base DeriveColorFromFlavors() result (1-14)
#define PBLOCK_CLR_BLUNT_OFFSET    20  // Blunt colors = base + 20 → 21-34
#define PBLOCK_CLR_BOWL_OFFSET     34  // Bowl  colors = base + 34 → 35-48

// Rolling Table preparation methods
#define PREP_JOINT 0  // balanced — finalize color as-is (names use "Joint")
#define PREP_BLUNT 1  // two flavors boosted +20 each (names use "Blunt")
#define PREP_BOWL  2  // concentrate top flavor (double, zero others, names use "Bowl")

// Herb effect flags (one per party slot, cleared on battle end)
#define HERB_FLAG_ENERGETIC  (1 << 0)  // +1 Speed stage at battle start
#define HERB_FLAG_FOCUSED    (1 << 1)  // PP costs halved for one battle
#define HERB_FLAG_UPLIFTED   (1 << 2)  // catch rate boosted for next encounter

extern u8 gHerbEffectFlags[PARTY_SIZE];

enum
{
    PBLOCK_CASE_FIELD,
    PBLOCK_CASE_BATTLE,
    PBLOCK_CASE_FEEDER,
    PBLOCK_CASE_GIVE,
    PBLOCK_CASE_ROLL,  // Rolling Table: pick a grind, returns slot in VAR_0x8000
};

// use pokeblock
extern u8 gPokeblockMonId;
extern s16 gPokeblockGain;

void ChooseMonToGivePokeblock(struct Pokeblock *pokeblock, void (*callback)(void));

// pokeblock feed
void PreparePokeblockFeedScene(void);

// pokeblock
extern const s8 gPokeblockFlavorCompatibilityTable[NUM_NATURES * FLAVOR_COUNT];
extern const u8 *const gPokeblockNames[];
extern const struct CompressedSpriteSheet gPokeblockCase_SpriteSheet;
extern const struct SpritePalette gPokeblockCase_SpritePal;

void PrepareHerbTreat(u8 pokeblockSlot, u8 prepType);
void Special_PrepareHerbTreat(void);
void Special_HasGroundMaterial(void);
void Special_OpenCaseForRolling(void);
void OpenPokeblockCase(u8 caseId, void (*callback)(void));
void OpenPokeblockCaseInBattle(void);
void OpenPokeblockCaseOnFeeder(void);
void ResetPokeblockScrollPositions(void);
u8 CreatePokeblockCaseSprite(s16 x, s16 y, u8 subpriority);
void ClearPokeblocks(void);
u8 GetHighestPokeblocksFlavorLevel(const struct Pokeblock *pokeblock);
u8 GetPokeblocksFeel(const struct Pokeblock *pokeblock);
s8 GetFirstFreePokeblockSlot(void);
bool32 AddPokeblock(const struct Pokeblock *pokeblock);
bool32 TryClearPokeblock(u8 pkblId);
s16 GetPokeblockData(const struct Pokeblock *pokeblock, u8 field);
s16 PokeblockGetGain(u8 nature, const struct Pokeblock *pokeblock);
void PokeblockCopyName(const struct Pokeblock *pokeblock, u8 *dest);
bool8 CopyMonFavoritePokeblockName(u8 nature, u8 *dest);
u8 GetPokeblocksFlavor(const struct Pokeblock *pokeblock);

#endif // GUARD_POKEBLOCK_H
