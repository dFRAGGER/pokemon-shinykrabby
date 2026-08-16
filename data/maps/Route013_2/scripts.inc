Route013_2_MapScripts::
# 2 "data/maps/Route013_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route013_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/Route013_2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route013_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route013_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route013_2/scripts.pory"
	call Route013_2_OnTransition
	return

Route013_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Route013_2/scripts.pory"
	map_script_2 VAR_TEMP_2, 1, Route013_2_StuckInMud
	.2byte 0


Route013_2_OnTransition::
# 11 "data/maps/Route013_2/scripts.pory"
	setstepcallback STEP_CB_DUMMY
	return


Route013_2_EventScript_BikeParkExitTrigger::
# 22 "data/maps/Route013_2/scripts.pory"
	lockall
# 23 "data/maps/Route013_2/scripts.pory"
	setvar VAR_TEMP_4, 0
# 24 "data/maps/Route013_2/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 25 "data/maps/Route013_2/scripts.pory"
	releaseall
	end


Route013_2_EventScript_BikeParkMountTrigger::
# 35 "data/maps/Route013_2/scripts.pory"
	lockall
# 36 "data/maps/Route013_2/scripts.pory"
	setvar VAR_TEMP_4, 0
# 37 "data/maps/Route013_2/scripts.pory"
	special ForcePlayerOntoBike
# 38 "data/maps/Route013_2/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 39 "data/maps/Route013_2/scripts.pory"
	releaseall
	end


Route013_2_Platform1::
# 45 "data/maps/Route013_2/scripts.pory"
	setvar VAR_TEMP_0, 13
# 46 "data/maps/Route013_2/scripts.pory"
	setvar VAR_TEMP_1, 43
# 47 "data/maps/Route013_2/scripts.pory"
	setstepcallback STEP_CB_MUD_SWAMP
	end


Route013_2_Platform2::
# 53 "data/maps/Route013_2/scripts.pory"
	setvar VAR_TEMP_0, 19
# 54 "data/maps/Route013_2/scripts.pory"
	setvar VAR_TEMP_1, 60
# 55 "data/maps/Route013_2/scripts.pory"
	setstepcallback STEP_CB_MUD_SWAMP
	end


Route013_2_Platform3::
# 61 "data/maps/Route013_2/scripts.pory"
	setvar VAR_TEMP_0, 17
# 62 "data/maps/Route013_2/scripts.pory"
	setvar VAR_TEMP_1, 84
# 63 "data/maps/Route013_2/scripts.pory"
	setstepcallback STEP_CB_MUD_SWAMP
	end


Route013_2_Platform4::
# 69 "data/maps/Route013_2/scripts.pory"
	setvar VAR_TEMP_0, 22
# 70 "data/maps/Route013_2/scripts.pory"
	setvar VAR_TEMP_1, 100
# 71 "data/maps/Route013_2/scripts.pory"
	setstepcallback STEP_CB_MUD_SWAMP
	end


Route013_2_StuckInMud::
# 79 "data/maps/Route013_2/scripts.pory"
	lockall
# 80 "data/maps/Route013_2/scripts.pory"
	setvar VAR_TEMP_2, 0
# 81 "data/maps/Route013_2/scripts.pory"
	msgbox Route013_2_Text_StuckInMud, MSGBOX_DEFAULT
# 82 "data/maps/Route013_2/scripts.pory"
	compare VAR_TEMP_0, 13
	goto_if_eq Route013_2_StuckInMud_2
Route013_2_StuckInMud_1:
# 85 "data/maps/Route013_2/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq Route013_2_StuckInMud_5
Route013_2_StuckInMud_4:
# 88 "data/maps/Route013_2/scripts.pory"
	compare VAR_TEMP_0, 17
	goto_if_eq Route013_2_StuckInMud_8
Route013_2_StuckInMud_7:
# 91 "data/maps/Route013_2/scripts.pory"
	goto Route013_2_WarpBack_Platform4
	return

Route013_2_StuckInMud_2:
# 83 "data/maps/Route013_2/scripts.pory"
	goto Route013_2_WarpBack_Platform1
	goto Route013_2_StuckInMud_1

Route013_2_StuckInMud_5:
# 86 "data/maps/Route013_2/scripts.pory"
	goto Route013_2_WarpBack_Platform2
	goto Route013_2_StuckInMud_4

Route013_2_StuckInMud_8:
# 89 "data/maps/Route013_2/scripts.pory"
	goto Route013_2_WarpBack_Platform3
	goto Route013_2_StuckInMud_7


Route013_2_WarpBack_Platform1::
# 95 "data/maps/Route013_2/scripts.pory"
	warp MAP_ROUTE013_2, 13, 43
# 96 "data/maps/Route013_2/scripts.pory"
	waitstate
# 97 "data/maps/Route013_2/scripts.pory"
	releaseall
	end


Route013_2_WarpBack_Platform2::
# 102 "data/maps/Route013_2/scripts.pory"
	warp MAP_ROUTE013_2, 19, 60
# 103 "data/maps/Route013_2/scripts.pory"
	waitstate
# 104 "data/maps/Route013_2/scripts.pory"
	releaseall
	end


Route013_2_WarpBack_Platform3::
# 109 "data/maps/Route013_2/scripts.pory"
	warp MAP_ROUTE013_2, 17, 84
# 110 "data/maps/Route013_2/scripts.pory"
	waitstate
# 111 "data/maps/Route013_2/scripts.pory"
	releaseall
	end


Route013_2_WarpBack_Platform4::
# 116 "data/maps/Route013_2/scripts.pory"
	warp MAP_ROUTE013_2, 22, 100
# 117 "data/maps/Route013_2/scripts.pory"
	waitstate
# 118 "data/maps/Route013_2/scripts.pory"
	releaseall
	end


Route013_2_Text_StuckInMud::
# 122 "data/maps/Route013_2/scripts.pory"
	.string "You got stuck in the mud\n"
	.string "and had to turn back!$"
