DeepCloudforest_FacultyAncientGrotto_MapScripts::
# 2 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DeepCloudforest_FacultyAncientGrotto_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DeepCloudforest_FacultyAncientGrotto_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	map_script_2 VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 5, DeepCloudForest_AncientGrotto_GetOutTruck
	.2byte 0


DeepCloudForest_AncientGrotto_GetOutTruck::
# 9 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	lock
# 10 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_0
# 11 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 12 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 6
# 13 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 60
# 14 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_1
# 15 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 16 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	special SpawnCameraObject
# 17 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_2
# 18 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 19 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_0, MSGBOX_AUTOCLOSE
# 20 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setflag FLAG_ANCIENTGROTTO_BOARD_SHIP
# 21 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 22 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 5, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3
# 23 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 24 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 5
# 25 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 4, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_4
# 26 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 27 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 4
# 28 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 3, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_5
# 29 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 30 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 3
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 6, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_6
# 32 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 33 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 6
# 34 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7
# 35 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 36 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 7
# 37 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 9, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_8
# 38 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 39 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 9
# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 8, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9
# 41 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 42 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 8
# 43 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 11, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_10
# 44 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 10, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_11
# 45 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_12
# 46 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 47 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 10, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13
# 48 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 49 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_1, MSGBOX_AUTOCLOSE
# 50 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 51 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 52 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_2, MSGBOX_AUTOCLOSE
# 53 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 60
# 54 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_3, MSGBOX_AUTOCLOSE
# 55 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 56 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	playse SE_PIN
# 57 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 13, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_14
# 58 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 59 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_4, MSGBOX_AUTOCLOSE
# 60 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 61 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 11, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_15
# 62 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 60
# 63 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 11, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_16
# 64 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 65 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_5, MSGBOX_AUTOCLOSE
# 66 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 67 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_6, MSGBOX_AUTOCLOSE
# 68 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 69 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_7, MSGBOX_AUTOCLOSE
# 70 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 71 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setflag FLAG_ANCIENTGROTTO_DISAPPEAR_SHIP
# 72 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 73 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	playse SE_BANG
# 74 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	fadescreen FADE_TO_WHITE
# 75 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_8, MSGBOX_AUTOCLOSE
# 76 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 15
# 77 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 17
# 78 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 11
# 79 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 10
# 80 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 16
# 81 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 60
# 82 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 83 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_17
# 84 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18
# 85 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 13, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18
# 86 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 14, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18
# 87 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 12, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18
# 88 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 89 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 2, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_5
# 90 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	special RemoveCameraObject
# 91 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_9, MSGBOX_AUTOCLOSE
# 92 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 120
# 93 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_10, MSGBOX_AUTOCLOSE
# 94 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 95 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	clearflag FLAG_DAVID_TRUCK
# 96 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	fadescreen FADE_TO_BLACK
# 97 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 98 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	playse SE_TRUCK_DOOR
# 99 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	warpsilent MAP_INSIDE_OF_TRUCK, 1
# 100 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitstate
# 101 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	release
	return


# 10 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_0:
# 10 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	jump_right
	step_end

# 14 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_1:
# 14 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_up
# 14 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_up
# 14 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_up
# 14 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 14 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 14 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_up
# 14 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
	step_end

# 17 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_2:
# 17 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_left
# 17 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_left
# 17 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_left
# 17 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_left
	step_end

# 22 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3:
# 22 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 22 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 22 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_down
# 22 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_left
	step_end

# 25 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_4:
# 25 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 25 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 25 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_up
# 25 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_left
	step_end

# 28 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_5:
# 28 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 28 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 28 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 28 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 28 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
	step_end

# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_6:
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_down
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_down
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
	step_end

# 34 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7:
# 34 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 34 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_up
# 34 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_up
# 34 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 34 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 34 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 34 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
	step_end

# 37 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_8:
# 37 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 37 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 37 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 37 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 37 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 37 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
	step_end

# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9:
# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_down
# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_down
# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
	step_end

# 43 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_10:
# 43 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_right
# 43 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_right
	step_end

# 44 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_11:
# 44 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_right
	step_end

# 45 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_12:
# 45 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	jump_right
# 45 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_left
	step_end

# 47 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13:
# 47 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 47 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_right
	step_end

# 57 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_14:
# 57 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	emote_exclamation_mark
	step_end

# 61 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_15:
# 61 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_left
	step_end

# 63 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_16:
# 63 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_right
	step_end

# 83 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_17:
# 83 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_left
# 83 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_left
	step_end

# 84 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18:
# 84 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 84 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 84 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 84 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 84 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 84 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 84 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Text_0:
# 19 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "The Rector: Allright children, to make a\n"
	.string "long story short, force the golem on\l"
	.string "the ship and lets get out of here.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_1:
# 49 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "The Rector: Impressive!\p"
	.string "How did you guys find us that quickly?$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_2:
# 52 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "{COLOR RED}David{COLOR DARK_GRAY}: That energy...\p"
	.string "the pressure...\p"
	.string "It's the 'Silent Guardian'...\p"
	.string "It's exactly what the legends\n"
	.string "described.\n"
	.string "They actually did it.\p"
	.string "They have Registeel.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_3:
# 54 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "The Rector: Well well, young man.\p"
	.string "You seem to be an intelligent kid.\p"
	.string "Why don't you join the faculty?\n"
	.string "At the faculty we Push Boundaries,\l"
	.string "Develop Talent and Inspire!!\p"
	.string "You would be the perfect fit!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_4:
# 59 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: Don't talk to him, you fool!\p"
	.string "Free Registeel, he belongs in this\n"
	.string "forest!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_5:
# 65 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "The Rector: Unfortunately, I can't do\n"
	.string "that.\p"
	.string "Our plan is bigger than this chaotic\n"
	.string "forest.\p"
	.string "He is a necessary piece to bring order\n"
	.string "to this world.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_6:
# 67 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: What do you mean?$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_7:
# 69 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "The Rector: You will see my friend, you\n"
	.string "will see.\p"
	.string "Children, lets get out of here.\p"
	.string "ELECTABUZZ, FLASH!!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_8:
# 75 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: Goddamn, not again...\n"
	.string "I should have brought my sunglasses...$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_9:
# 91 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: We can't catch them...$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_10:
# 93 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: Lets get back to the research\n"
	.string "station, it's getting dark.$"
