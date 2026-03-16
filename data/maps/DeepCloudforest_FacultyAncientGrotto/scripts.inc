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
	applymovement 14, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_1
# 14 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 60
# 15 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	playse SE_PIN
# 16 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_2
# 17 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 18 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 19 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	playse SE_PIN
# 20 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 14, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3
# 21 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 22 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 60
# 23 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
# 24 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmoncry
# 25 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 26 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 14, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_4
# 27 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 28 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 60
# 29 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_0, MSGBOX_AUTOCLOSE
# 30 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_5
# 32 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 33 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	special SpawnCameraObject
# 34 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_6
# 35 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 36 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_1
# 37 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_2, MSGBOX_AUTOCLOSE
# 38 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setflag FLAG_ANCIENTGROTTO_BOARD_SHIP
# 39 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 3, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7
# 41 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 5, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7
# 42 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 4, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7
# 43 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7
# 44 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 12, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7
# 45 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 6, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7
# 46 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 11, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7
# 47 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 13, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7
# 48 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 49 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_8
# 50 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 9, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9
# 51 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 8, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_8
# 52 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 10, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_8
# 53 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 54 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_3
# 55 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_4, MSGBOX_AUTOCLOSE
# 56 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 57 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_10
# 58 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	playse SE_PIN
# 59 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 6, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_11
# 60 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 61 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_12
# 62 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 12, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13
# 63 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 11, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13
# 64 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 13, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13
# 65 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 3, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13
# 66 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 5, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13
# 67 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 4, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13
# 68 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 69 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 6, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_14
# 70 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 71 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_1
# 72 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_5, MSGBOX_AUTOCLOSE
# 73 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 74 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 8, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_15
# 75 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 76 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_6
# 77 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_7, MSGBOX_AUTOCLOSE
# 78 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 60
# 79 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_16
# 80 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 81 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_1
# 82 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_8, MSGBOX_AUTOCLOSE
# 83 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 84 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	playse SE_PIN
# 85 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 9, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_17
# 86 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 87 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_3
# 88 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_9, MSGBOX_AUTOCLOSE
# 89 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 90 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18
# 91 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 60
# 92 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13
# 93 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 94 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_1
# 95 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_10, MSGBOX_AUTOCLOSE
# 96 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 97 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 10, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_19
# 98 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 99 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_11
# 100 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_12, MSGBOX_AUTOCLOSE
# 101 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 102 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_20
# 103 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_1
# 104 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_13, MSGBOX_AUTOCLOSE
# 105 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 106 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18
# 107 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_1
# 108 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_14, MSGBOX_AUTOCLOSE
# 109 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setflag FLAG_ANCIENTGROTTO_DISAPPEAR_SHIP
# 110 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 111 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_11
# 112 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_15, MSGBOX_AUTOCLOSE
# 113 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 114 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	playse SE_BANG
# 115 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 116 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 12
# 117 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 7
# 118 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 6
# 119 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 13
# 120 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 11
# 121 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 3
# 122 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 4
# 123 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	removeobject 5
# 124 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 60
# 125 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 126 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_1
# 127 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_21
# 128 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 9, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_21
# 129 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 10, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_21
# 130 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 8, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_21
# 131 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmovement
# 132 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	applymovement 2, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_22
# 133 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	special RemoveCameraObject
# 134 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_3
# 135 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_16, MSGBOX_AUTOCLOSE
# 136 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 120
# 137 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_3
# 138 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_17, MSGBOX_AUTOCLOSE
# 139 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitmessage
# 140 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	clearflag FLAG_DAVID_TRUCK
# 141 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	fadescreen FADE_TO_BLACK
# 142 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	delay 40
# 143 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	playse SE_TRUCK_DOOR
# 144 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	warpsilent MAP_INSIDE_OF_TRUCK, 1
# 145 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	waitstate
# 146 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	release
	return


# 10 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_0:
# 10 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	jump_right
	step_end

# 13 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_1:
# 13 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_left
# 13 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_left
	step_end

# 16 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_2:
# 16 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	emote_question_mark
	step_end

# 20 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3:
# 20 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_down
# 20 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 20 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 20 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	emote_question_mark
	step_end

# 26 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_4:
# 26 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_right
# 26 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_right
# 26 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_right
# 26 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_right
# 26 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_right
	step_end

# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_5:
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_up
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_up
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_up
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_up
# 31 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
	step_end

# 34 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_6:
# 34 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_left
# 34 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_left
# 34 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_left
# 34 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_left
	step_end

# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7:
# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 40 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
	step_end

# 49 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_8:
# 49 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 49 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 49 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
	step_end

# 50 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9:
# 50 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 50 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 50 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 50 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	emote_exclamation_mark
	step_end

# 57 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_10:
# 57 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_right
# 57 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_right
	step_end

# 59 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_11:
# 59 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	emote_exclamation_mark
# 59 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_right
	step_end

# 61 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_12:
# 61 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	jump_right
# 61 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_left
	step_end

# 62 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13:
# 62 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_right
	step_end

# 69 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_14:
# 69 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 69 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_right
	step_end

# 74 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_15:
# 74 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_down
# 74 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_left
	step_end

# 79 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_16:
# 79 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_down
# 79 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_down
# 79 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_right
	step_end

# 85 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_17:
# 85 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	emote_exclamation_mark
# 85 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 85 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_down
# 85 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_down
# 85 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_left
	step_end

# 90 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18:
# 90 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_left
	step_end

# 97 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_19:
# 97 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	emote_exclamation_mark
# 97 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 97 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 97 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_down
	step_end

# 102 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_20:
# 102 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	face_up
	step_end

# 127 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_21:
# 127 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 127 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 127 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
# 127 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_fast_left
	step_end

# 132 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
DeepCloudForest_AncientGrotto_GetOutTruck_Movement_22:
# 132 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 132 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 132 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 132 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
# 132 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	walk_slow_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Text_0:
# 29 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "What even was that?\p"
	.string "...maybe my eyes decieved me...\p"
	.string "...\p"
	.string "The others need me, wake up!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_1:
# 36 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "The Rector$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_2:
# 37 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "Allright children, to make a long story\n"
	.string "short, force the golem on the ship and\l"
	.string "lets get out of here.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_3:
# 54 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "Daan$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_4:
# 55 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "HEY!\n"
	.string "WHAT ARE YOU GUYS DOING?$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_5:
# 72 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "Impressive!\p"
	.string "How did you guys find us that quickly?$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_6:
# 76 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "David$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_7:
# 77 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "That energy...\p"
	.string "the pressure...\p"
	.string "It's the 'Silent Guardian'...\p"
	.string "It's exactly what the legends\n"
	.string "described.\n"
	.string "They actually did it.\p"
	.string "They have Registeel.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_8:
# 82 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "Look at you, young man.\p"
	.string "You seem to be an intelligent kid.\p"
	.string "Why don't you join the faculty?\n"
	.string "At the faculty we Push Boundaries,\l"
	.string "Develop Talent and Inspire!!\p"
	.string "You would be the perfect fit!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_9:
# 88 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "Don't talk to him, you fool!\p"
	.string "Free Registeel, he belongs in this\n"
	.string "forest!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_10:
# 95 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "Unfortunately, I can't do that.\p"
	.string "Our plan is bigger than this chaotic\n"
	.string "forest.\p"
	.string "He is a necessary piece to bring order\n"
	.string "to this world.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_11:
# 99 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "Nash$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_12:
# 100 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "What do you mean?$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_13:
# 104 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "You will see my friend, you will see.\p"
	.string "Children, lets get out of here.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_14:
# 108 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "ELECTABUZZ, FLASH!!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_15:
# 112 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "Goddamn, not again...\n"
	.string "I should have brought my sunglasses...$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_16:
# 135 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "We can't catch them...$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_17:
# 138 "data/maps/DeepCloudforest_FacultyAncientGrotto/scripts.pory"
	.string "Lets get back to the research station,\n"
	.string "it's getting dark.$"
