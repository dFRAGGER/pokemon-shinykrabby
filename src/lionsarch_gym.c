#include "global.h"
#include "task.h"
#include "gpu_regs.h"
#include "field_player_avatar.h"
#include "script.h"
#include "event_data.h"
#include "constants/flags.h"
#include "constants/map_groups.h"

// ── Forward declarations ──────────────────────────────────────────────────────

static void Task_LionsarchGym_StormWhiteness(u8 taskId);
static void Task_LionsarchGym_ClearStorm(u8 taskId);

// ── Storm whiteness task ──────────────────────────────────────────────────────
// Runs every frame while the player is in the gym (before earning the badge).
// Sets the GBA LIGHTEN blend effect on all layers based on the player's Y
// position: clear near the entrance (y=30+), fully white near the leaders (y<=9).

static void Task_LionsarchGym_StormWhiteness(u8 taskId)
{
    s16 x, y;

    // Self-destruct if the player has left the gym
    if (gSaveBlock1Ptr->location.mapGroup != MAP_GROUP(MAP_LIONSARCH_CITY_INDOOR_GYM)
     || gSaveBlock1Ptr->location.mapNum   != MAP_NUM(MAP_LIONSARCH_CITY_INDOOR_GYM))
    {
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_NONE);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        DestroyTask(taskId);
        return;
    }

    // Self-destruct once the badge has been earned (storm permanently cleared)
    if (FlagGet(FLAG_BADGE03_GET))
    {
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_NONE);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        DestroyTask(taskId);
        return;
    }

    PlayerGetDestCoords(&x, &y);

    // White level formula: 0 at y>=30, scales to 16 at y<=9 (21-tile range)
    u8 level;
    if (y >= 30)
        level = 0;
    else if (y <= 9)
        level = 16;
    else
        level = (u8)((30 - y) * 16 / 21);

    if (level == 0)
    {
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_NONE);
        SetGpuReg(REG_OFFSET_BLDY, 0);
    }
    else
    {
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_ALL | BLDCNT_EFFECT_LIGHTEN);
        SetGpuReg(REG_OFFSET_BLDY, level);
    }
}

// ── Storm-clearing reveal task ────────────────────────────────────────────────
// Smoothly decreases BLDY from 16 to 0 over ~64 frames (~1 second).
// When done, calls ScriptContext_Enable() to resume the paused coord-event script.
//
// data[0] = current blend level (s16, starts at 16)
// data[1] = frame counter for pacing (decrements BLDY every 4 frames)

static void Task_LionsarchGym_ClearStorm(u8 taskId)
{
    gTasks[taskId].data[1]++;
    if (gTasks[taskId].data[1] < 4)
        return;
    gTasks[taskId].data[1] = 0;

    if (gTasks[taskId].data[0] > 0)
    {
        gTasks[taskId].data[0]--;
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_ALL | BLDCNT_EFFECT_LIGHTEN);
        SetGpuReg(REG_OFFSET_BLDY, (u8)gTasks[taskId].data[0]);
    }
    else
    {
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_NONE);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        DestroyTask(taskId);
        ScriptContext_Enable(); // Resume the waitstate in LionsarchGym_LeaderReveal
    }
}

// ── Public specials ───────────────────────────────────────────────────────────

// Called from MAP_SCRIPT_ON_LOAD and MAP_SCRIPT_ON_RESUME.
// Starts the per-frame storm whiteness task (no-op if already running or badge earned).
void Special_LionsarchGym_StartStorm(void)
{
    if (FlagGet(FLAG_BADGE03_GET))
        return;
    if (FindTaskIdByFunc(Task_LionsarchGym_StormWhiteness) != TASK_NONE)
        return;
    CreateTask(Task_LionsarchGym_StormWhiteness, 0);
}

// Called from MAP_SCRIPT_ON_TRANSITION.
// Stops the storm task and resets blend registers.
void Special_LionsarchGym_StopStorm(void)
{
    u8 taskId = FindTaskIdByFunc(Task_LionsarchGym_StormWhiteness);
    if (taskId != TASK_NONE)
        DestroyTask(taskId);
    taskId = FindTaskIdByFunc(Task_LionsarchGym_ClearStorm);
    if (taskId != TASK_NONE)
        DestroyTask(taskId);
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_NONE);
    SetGpuReg(REG_OFFSET_BLDY, 0);
}

// Called from the reveal coord-event script at y=8.
// Stops the whiteness task, then starts the animated clear (BLDY 16->0).
// Calls ScriptContext_Stop() so the script blocks on `waitstate` until the
// animation finishes and ScriptContext_Enable() is called by the clear task.
void Special_LionsarchGym_RevealLeaders(void)
{
    u8 taskId;

    // Stop the whiteness task so it doesn't fight the clear animation
    taskId = FindTaskIdByFunc(Task_LionsarchGym_StormWhiteness);
    if (taskId != TASK_NONE)
        DestroyTask(taskId);

    // Guard: if the clear animation is already running, just pause the script
    // and let the existing task call ScriptContext_Enable() when done
    if (FindTaskIdByFunc(Task_LionsarchGym_ClearStorm) != TASK_NONE)
    {
        ScriptContext_Stop();
        return;
    }

    // Start the animated clear from full white (level 16)
    taskId = CreateTask(Task_LionsarchGym_ClearStorm, 0);
    gTasks[taskId].data[0] = 16;
    gTasks[taskId].data[1] = 0;

    ScriptContext_Stop(); // Pause the script — resumed by ScriptContext_Enable() above
}
