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
	applymovement 3, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3
# 23 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 5, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3
# 24 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 4, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3
# 25 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3
# 26 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 12, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3
# 27 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 6, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3
# 28 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 11, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3
# 29 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 13, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3
# 30 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_4
# 32 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 9, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_5
# 33 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 8, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_4
# 34 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 10, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_4
# 35 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 36 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_1, MSGBOX_AUTOCLOSE
# 37 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 38 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_6
# 39 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	playse SE_PIN
# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 6, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7
# 41 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 42 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_8
# 43 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 12, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9
# 44 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 11, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9
# 45 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 13, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9
# 46 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 3, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9
# 47 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 5, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9
# 48 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 4, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9
# 49 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 50 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 6, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_10
# 51 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 52 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_2, MSGBOX_AUTOCLOSE
# 53 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 54 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 8, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_11
# 55 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 56 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_3, MSGBOX_AUTOCLOSE
# 57 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 60
# 58 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_12
# 59 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 60 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_4, MSGBOX_AUTOCLOSE
# 61 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 62 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	playse SE_PIN
# 63 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 9, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13
# 64 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 65 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_5, MSGBOX_AUTOCLOSE
# 66 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 67 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_14
# 68 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 60
# 69 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9
# 70 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 71 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_6, MSGBOX_AUTOCLOSE
# 72 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 73 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 10, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_15
# 74 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 75 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_7, MSGBOX_AUTOCLOSE
# 76 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 77 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_16
# 78 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_8, MSGBOX_AUTOCLOSE
# 79 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 80 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_14
# 81 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_9, MSGBOX_AUTOCLOSE
# 82 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setflag FLAG_ANCIENTGROTTO_DISAPPEAR_SHIP
# 83 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 84 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	playse SE_BANG
# 85 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 86 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_10, MSGBOX_AUTOCLOSE
# 87 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 12
# 88 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 7
# 89 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 6
# 90 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 13
# 91 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 11
# 92 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 3
# 93 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 4
# 94 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 5
# 95 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 60
# 96 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 97 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_17
# 98 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18
# 99 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 9, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18
# 100 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 10, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18
# 101 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 8, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18
# 102 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 103 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 2, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_19
# 104 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	special RemoveCameraObject
# 105 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_11, MSGBOX_AUTOCLOSE
# 106 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 120
# 107 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_12, MSGBOX_AUTOCLOSE
# 108 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 109 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	clearflag FLAG_DAVID_TRUCK
# 110 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	fadescreen FADE_TO_BLACK
# 111 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 112 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	playse SE_TRUCK_DOOR
# 113 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	warpsilent MAP_INSIDE_OF_TRUCK, 1
# 114 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitstate
# 115 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
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
	walk_slow_left
	step_end

# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_4:
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
	step_end

# 32 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_5:
# 32 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 32 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 32 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 32 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	emote_exclamation_mark
	step_end

# 38 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_6:
# 38 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_right
# 38 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_right
	step_end

# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7:
# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	emote_exclamation_mark
# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_right
	step_end

# 42 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_8:
# 42 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	jump_right
# 42 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_left
	step_end

# 43 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9:
# 43 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_right
	step_end

# 50 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_10:
# 50 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 50 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_right
	step_end

# 54 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_11:
# 54 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_down
# 54 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_left
	step_end

# 58 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_12:
# 58 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_down
# 58 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_down
# 58 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_right
	step_end

# 63 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13:
# 63 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	emote_exclamation_mark
# 63 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 63 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_down
# 63 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_down
# 63 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_left
	step_end

# 67 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_14:
# 67 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_left
	step_end

# 73 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_15:
# 73 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	emote_exclamation_mark
# 73 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 73 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 73 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_down
	step_end

# 77 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_16:
# 77 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_up
	step_end

# 97 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_17:
# 97 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_left
# 97 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_left
	step_end

# 98 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18:
# 98 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 98 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 98 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 98 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
	step_end

# 103 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_19:
# 103 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 103 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 103 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 103 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 103 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Text_0:
# 19 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "The Rector: Allright children, to make a\n"
	.string "long story short, force the golem on\l"
	.string "the ship and lets get out of here.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_1:
# 36 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: HEY!\n"
	.string "WHAT ARE YOU GUYS DOING?$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_2:
# 52 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "The Rector: Impressive!\p"
	.string "How did you guys find us that quickly?$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_3:
# 56 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "{COLOR RED}David{COLOR DARK_GRAY}: That energy...\p"
	.string "the pressure...\p"
	.string "It's the 'Silent Guardian'...\p"
	.string "It's exactly what the legends\n"
	.string "described.\n"
	.string "They actually did it.\p"
	.string "They have Registeel.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_4:
# 60 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "The Rector: Well well, young man.\p"
	.string "You seem to be an intelligent kid.\p"
	.string "Why don't you join the faculty?\n"
	.string "At the faculty we Push Boundaries,\l"
	.string "Develop Talent and Inspire!!\p"
	.string "You would be the perfect fit!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_5:
# 65 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: Don't talk to him, you fool!\p"
	.string "Free Registeel, he belongs in this\n"
	.string "forest!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_6:
# 71 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "The Rector: Unfortunately, I can't do\n"
	.string "that.\p"
	.string "Our plan is bigger than this chaotic\n"
	.string "forest.\p"
	.string "He is a necessary piece to bring order\n"
	.string "to this world.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_7:
# 75 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: What do you mean?$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_8:
# 78 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "The Rector: You will see my friend, you\n"
	.string "will see.\p"
	.string "Children, lets get out of here.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_9:
# 81 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "The Rector: ELECTABUZZ, FLASH!!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_10:
# 86 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: Goddamn, not again...\n"
	.string "I should have brought my sunglasses...$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_11:
# 105 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: We can't catch them...$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_12:
# 107 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: Lets get back to the research\n"
	.string "station, it's getting dark.$"
