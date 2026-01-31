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
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_0
# 20 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_1, MSGBOX_AUTOCLOSE
# 21 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setflag FLAG_ANCIENTGROTTO_BOARD_SHIP
# 22 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 23 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 3, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3
# 24 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 5, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3
# 25 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 4, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3
# 26 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3
# 27 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 12, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3
# 28 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 6, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3
# 29 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 11, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3
# 30 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 13, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 32 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_4
# 33 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 9, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_5
# 34 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 8, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_4
# 35 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 10, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_4
# 36 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 37 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_2
# 38 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_3, MSGBOX_AUTOCLOSE
# 39 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_6
# 41 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	playse SE_PIN
# 42 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 6, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7
# 43 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 44 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_8
# 45 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 12, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9
# 46 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 11, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9
# 47 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 13, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9
# 48 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 3, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9
# 49 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 5, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9
# 50 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 4, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9
# 51 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 52 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 6, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_10
# 53 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 54 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_0
# 55 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_4, MSGBOX_AUTOCLOSE
# 56 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 57 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 8, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_11
# 58 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 59 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_5
# 60 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_6, MSGBOX_AUTOCLOSE
# 61 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 60
# 62 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_12
# 63 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 64 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_0
# 65 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_7, MSGBOX_AUTOCLOSE
# 66 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 67 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	playse SE_PIN
# 68 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 9, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13
# 69 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 70 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_2
# 71 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_8, MSGBOX_AUTOCLOSE
# 72 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 73 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_14
# 74 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 60
# 75 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9
# 76 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 77 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_0
# 78 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_9, MSGBOX_AUTOCLOSE
# 79 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 80 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 10, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_15
# 81 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 82 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_10
# 83 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_11, MSGBOX_AUTOCLOSE
# 84 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 85 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_16
# 86 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_0
# 87 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_12, MSGBOX_AUTOCLOSE
# 88 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 89 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_14
# 90 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_0
# 91 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_13, MSGBOX_AUTOCLOSE
# 92 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setflag FLAG_ANCIENTGROTTO_DISAPPEAR_SHIP
# 93 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 94 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	playse SE_BANG
# 95 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 96 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_10
# 97 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_14, MSGBOX_AUTOCLOSE
# 98 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 12
# 99 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 7
# 100 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 6
# 101 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 13
# 102 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 11
# 103 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 3
# 104 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 4
# 105 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 5
# 106 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 60
# 107 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 108 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_17
# 109 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18
# 110 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 9, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18
# 111 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 10, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18
# 112 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 8, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18
# 113 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 114 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 2, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_19
# 115 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	special RemoveCameraObject
# 116 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_2
# 117 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_15, MSGBOX_AUTOCLOSE
# 118 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 120
# 119 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_2
# 120 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_16, MSGBOX_AUTOCLOSE
# 121 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 122 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	clearflag FLAG_DAVID_TRUCK
# 123 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	fadescreen FADE_TO_BLACK
# 124 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 125 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	playse SE_TRUCK_DOOR
# 126 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	warpsilent MAP_INSIDE_OF_TRUCK, 1
# 127 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitstate
# 128 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
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

# 23 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3:
# 23 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 23 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 23 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
	step_end

# 32 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_4:
# 32 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 32 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 32 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
	step_end

# 33 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_5:
# 33 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 33 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 33 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 33 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	emote_exclamation_mark
	step_end

# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_6:
# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_right
# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_right
	step_end

# 42 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7:
# 42 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	emote_exclamation_mark
# 42 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_right
	step_end

# 44 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_8:
# 44 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	jump_right
# 44 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_left
	step_end

# 45 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9:
# 45 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_right
	step_end

# 52 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_10:
# 52 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 52 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_right
	step_end

# 57 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_11:
# 57 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_left
	step_end

# 62 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_12:
# 62 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_down
# 62 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_down
# 62 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_right
	step_end

# 68 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13:
# 68 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	emote_exclamation_mark
# 68 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 68 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_down
# 68 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_down
# 68 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_left
	step_end

# 73 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_14:
# 73 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_left
	step_end

# 80 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_15:
# 80 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	emote_exclamation_mark
# 80 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 80 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 80 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_down
	step_end

# 85 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_16:
# 85 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_up
	step_end

# 108 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_17:
# 108 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_left
# 108 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_left
	step_end

# 109 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18:
# 109 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 109 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 109 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 109 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
	step_end

# 114 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_19:
# 114 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 114 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 114 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 114 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 114 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Text_0:
# 19 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "The Rector$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_1:
# 20 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "Allright children, to make a long story\n"
	.string "short, force the golem on the ship and\l"
	.string "lets get out of here.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_2:
# 37 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "Daan$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_3:
# 38 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "HEY!\n"
	.string "WHAT ARE YOU GUYS DOING?$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_4:
# 55 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "Impressive!\p"
	.string "How did you guys find us that quickly?$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_5:
# 59 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "David$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_6:
# 60 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "That energy...\p"
	.string "the pressure...\p"
	.string "It's the 'Silent Guardian'...\p"
	.string "It's exactly what the legends\n"
	.string "described.\n"
	.string "They actually did it.\p"
	.string "They have Registeel.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_7:
# 65 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "Look at you, young man.\p"
	.string "You seem to be an intelligent kid.\p"
	.string "Why don't you join the faculty?\n"
	.string "At the faculty we Push Boundaries,\l"
	.string "Develop Talent and Inspire!!\p"
	.string "You would be the perfect fit!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_8:
# 71 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "Don't talk to him, you fool!\p"
	.string "Free Registeel, he belongs in this\n"
	.string "forest!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_9:
# 78 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "Unfortunately, I can't do that.\p"
	.string "Our plan is bigger than this chaotic\n"
	.string "forest.\p"
	.string "He is a necessary piece to bring order\n"
	.string "to this world.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_10:
# 82 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "Nash$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_11:
# 83 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "What do you mean?$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_12:
# 87 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "You will see my friend, you will see.\p"
	.string "Children, lets get out of here.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_13:
# 91 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "ELECTABUZZ, FLASH!!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_14:
# 97 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "Goddamn, not again...\n"
	.string "I should have brought my sunglasses...$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_15:
# 117 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "We can't catch them...$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_16:
# 120 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "Lets get back to the research station,\n"
	.string "it's getting dark.$"
