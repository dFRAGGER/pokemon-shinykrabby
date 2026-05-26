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


Route013_2_Platform1::
# 17 "data/maps/Route013_2/scripts.pory"
	setvar VAR_TEMP_0, 13
# 18 "data/maps/Route013_2/scripts.pory"
	setvar VAR_TEMP_1, 43
# 19 "data/maps/Route013_2/scripts.pory"
	setstepcallback STEP_CB_MUD_SWAMP
	end


Route013_2_Platform2::
# 25 "data/maps/Route013_2/scripts.pory"
	setvar VAR_TEMP_0, 19
# 26 "data/maps/Route013_2/scripts.pory"
	setvar VAR_TEMP_1, 60
# 27 "data/maps/Route013_2/scripts.pory"
	setstepcallback STEP_CB_MUD_SWAMP
	end


Route013_2_Platform3::
# 33 "data/maps/Route013_2/scripts.pory"
	setvar VAR_TEMP_0, 17
# 34 "data/maps/Route013_2/scripts.pory"
	setvar VAR_TEMP_1, 84
# 35 "data/maps/Route013_2/scripts.pory"
	setstepcallback STEP_CB_MUD_SWAMP
	end


Route013_2_Platform4::
# 41 "data/maps/Route013_2/scripts.pory"
	setvar VAR_TEMP_0, 22
# 42 "data/maps/Route013_2/scripts.pory"
	setvar VAR_TEMP_1, 100
# 43 "data/maps/Route013_2/scripts.pory"
	setstepcallback STEP_CB_MUD_SWAMP
	end


Route013_2_StuckInMud::
# 51 "data/maps/Route013_2/scripts.pory"
	lockall
# 52 "data/maps/Route013_2/scripts.pory"
	setvar VAR_TEMP_2, 0
# 53 "data/maps/Route013_2/scripts.pory"
	msgbox Route013_2_Text_StuckInMud, MSGBOX_DEFAULT
# 54 "data/maps/Route013_2/scripts.pory"
	compare VAR_TEMP_0, 13
	goto_if_eq Route013_2_StuckInMud_2
Route013_2_StuckInMud_1:
# 57 "data/maps/Route013_2/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq Route013_2_StuckInMud_5
Route013_2_StuckInMud_4:
# 60 "data/maps/Route013_2/scripts.pory"
	compare VAR_TEMP_0, 17
	goto_if_eq Route013_2_StuckInMud_8
Route013_2_StuckInMud_7:
# 63 "data/maps/Route013_2/scripts.pory"
	goto Route013_2_WarpBack_Platform4
	return

Route013_2_StuckInMud_2:
# 55 "data/maps/Route013_2/scripts.pory"
	goto Route013_2_WarpBack_Platform1
	goto Route013_2_StuckInMud_1

Route013_2_StuckInMud_5:
# 58 "data/maps/Route013_2/scripts.pory"
	goto Route013_2_WarpBack_Platform2
	goto Route013_2_StuckInMud_4

Route013_2_StuckInMud_8:
# 61 "data/maps/Route013_2/scripts.pory"
	goto Route013_2_WarpBack_Platform3
	goto Route013_2_StuckInMud_7


Route013_2_WarpBack_Platform1::
# 67 "data/maps/Route013_2/scripts.pory"
	warp MAP_ROUTE013_2, 13, 43
# 68 "data/maps/Route013_2/scripts.pory"
	waitstate
# 69 "data/maps/Route013_2/scripts.pory"
	releaseall
	end


Route013_2_WarpBack_Platform2::
# 74 "data/maps/Route013_2/scripts.pory"
	warp MAP_ROUTE013_2, 19, 60
# 75 "data/maps/Route013_2/scripts.pory"
	waitstate
# 76 "data/maps/Route013_2/scripts.pory"
	releaseall
	end


Route013_2_WarpBack_Platform3::
# 81 "data/maps/Route013_2/scripts.pory"
	warp MAP_ROUTE013_2, 17, 84
# 82 "data/maps/Route013_2/scripts.pory"
	waitstate
# 83 "data/maps/Route013_2/scripts.pory"
	releaseall
	end


Route013_2_WarpBack_Platform4::
# 88 "data/maps/Route013_2/scripts.pory"
	warp MAP_ROUTE013_2, 22, 100
# 89 "data/maps/Route013_2/scripts.pory"
	waitstate
# 90 "data/maps/Route013_2/scripts.pory"
	releaseall
	end


Route013_2_Text_StuckInMud::
# 94 "data/maps/Route013_2/scripts.pory"
	.string "You got stuck in the mud\n"
	.string "and had to turn back!$"
