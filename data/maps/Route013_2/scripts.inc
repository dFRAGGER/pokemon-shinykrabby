Route013_2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route013_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route013_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route013_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Route013_2_OnTransition
	return

Route013_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_2, 1, Route013_2_StuckInMud
	.2byte 0


Route013_2_OnTransition::
	setstepcallback STEP_CB_DUMMY
	return


Route013_2_EventScript_BikeParkExitTrigger::
	lockall
	setvar VAR_TEMP_4, 0
	clearflag FLAG_SYS_CYCLING_ROAD
	releaseall
	end


Route013_2_EventScript_BikeParkMountTrigger::
	lockall
	setvar VAR_TEMP_4, 0
	special ForcePlayerOntoBike
	setflag FLAG_SYS_CYCLING_ROAD
	releaseall
	end


Route013_2_Platform1::
	setvar VAR_TEMP_0, 13
	setvar VAR_TEMP_1, 43
	setstepcallback STEP_CB_MUD_SWAMP
	end


Route013_2_Platform2::
	setvar VAR_TEMP_0, 19
	setvar VAR_TEMP_1, 60
	setstepcallback STEP_CB_MUD_SWAMP
	end


Route013_2_Platform3::
	setvar VAR_TEMP_0, 17
	setvar VAR_TEMP_1, 84
	setstepcallback STEP_CB_MUD_SWAMP
	end


Route013_2_Platform4::
	setvar VAR_TEMP_0, 22
	setvar VAR_TEMP_1, 100
	setstepcallback STEP_CB_MUD_SWAMP
	end


Route013_2_StuckInMud::
	lockall
	setvar VAR_TEMP_2, 0
	msgbox Route013_2_Text_StuckInMud, MSGBOX_DEFAULT
	compare VAR_TEMP_0, 13
	goto_if_eq Route013_2_StuckInMud_2
Route013_2_StuckInMud_1:
	compare VAR_TEMP_0, 19
	goto_if_eq Route013_2_StuckInMud_5
Route013_2_StuckInMud_4:
	compare VAR_TEMP_0, 17
	goto_if_eq Route013_2_StuckInMud_8
Route013_2_StuckInMud_7:
	goto Route013_2_WarpBack_Platform4
	return

Route013_2_StuckInMud_2:
	goto Route013_2_WarpBack_Platform1
	goto Route013_2_StuckInMud_1

Route013_2_StuckInMud_5:
	goto Route013_2_WarpBack_Platform2
	goto Route013_2_StuckInMud_4

Route013_2_StuckInMud_8:
	goto Route013_2_WarpBack_Platform3
	goto Route013_2_StuckInMud_7


Route013_2_WarpBack_Platform1::
	warp MAP_ROUTE013_2, 13, 43
	waitstate
	releaseall
	end


Route013_2_WarpBack_Platform2::
	warp MAP_ROUTE013_2, 19, 60
	waitstate
	releaseall
	end


Route013_2_WarpBack_Platform3::
	warp MAP_ROUTE013_2, 17, 84
	waitstate
	releaseall
	end


Route013_2_WarpBack_Platform4::
	warp MAP_ROUTE013_2, 22, 100
	waitstate
	releaseall
	end


Route013_2_Text_StuckInMud::
	.string "You got stuck in the mud\n"
	.string "and had to turn back!$"
