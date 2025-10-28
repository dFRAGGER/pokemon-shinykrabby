DeepCloudForest_FacultyGorge_MapScripts::
# 2 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DeepCloudForest_FacultyGorge_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DeepCloudForest_FacultyGorge_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	map_script_2 VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 1, DeepCloudForest_FacultyGorge_GetOutTruck
	.2byte 0


DeepCloudForest_FacultyGorge_GetOutTruck::
# 8 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 9 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_0
# 10 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 11 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 2
# 12 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 13 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_1
# 14 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 15 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special SpawnCameraObject
# 16 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_2
# 17 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_0, MSGBOX_AUTOCLOSE
# 18 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 19 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 20 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 7, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
# 21 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 22 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_1, MSGBOX_AUTOCLOSE
# 23 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 24 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_4
# 25 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 26 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 27 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 28 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 29 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 7, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_5
# 30 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 31 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_2, MSGBOX_AUTOCLOSE
# 32 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 33 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 7, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_6
# 34 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 35 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_3, MSGBOX_AUTOCLOSE
# 36 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 6, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_6
# 37 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 38 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 16, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_6
# 39 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 40 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_7
# 41 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 42 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special SpawnCameraObject
# 43 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_8
# 45 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 46 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setflag FLAG_FACULTY_GORGE_NASH1
# 47 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	clearflag FLAG_FACULTY_GORGE_NASH2
# 48 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	clearflag FLAG_DAVID_TRUCK
# 49 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_4, MSGBOX_AUTOCLOSE
# 50 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 51 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_5, MSGBOX_AUTOCLOSE
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_6, MSGBOX_AUTOCLOSE
# 54 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 55 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_7, MSGBOX_AUTOCLOSE
# 56 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 58 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_9
# 59 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_8, MSGBOX_AUTOCLOSE
# 60 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 61 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_9, MSGBOX_AUTOCLOSE
# 62 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 63 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_10, MSGBOX_AUTOCLOSE
# 64 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 65 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_M_HEADBUTT
# 66 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 14, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11
# 69 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 70 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 71 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_12
# 72 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 18, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
# 73 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 74 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_11, MSGBOX_AUTOCLOSE
# 75 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 18, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_13
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 19, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_14
# 77 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 20, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_15
# 78 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 79 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setflag FLAG_FACULTY_GORGE_NASH2
# 80 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 19
# 81 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 20
# 82 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 83 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	release
	return


DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts::
# 87 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 88 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special SpawnCameraObject
# 89 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_2
# 90 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 91 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_0
# 92 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 93 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_M_BITE
# 94 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 24, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_0
# 95 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 23, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
# 97 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 98 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_1, MSGBOX_AUTOCLOSE
# 99 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 100 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 23, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_13
# 101 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 102 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_2
# 103 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 104 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 105 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 3
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	release
	return


DeepCloudForest_FacultyGorge_Daan_Rescue_Start::
# 110 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 111 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 112 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	clearflag FLAG_FACULTY_GORGE_NASH1
# 113 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	compare VAR_TEMP_0, 25
	goto_if_eq DeepCloudForest_FacultyGorge_Daan_Rescue_Start_3
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_1:
# 116 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special SpawnCameraObject
# 117 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_1
# 118 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 119 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	addobject 27
# 120 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	addobject 28
# 121 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	addobject 29
# 122 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	compare VAR_TEMP_0, 24
	goto_if_eq DeepCloudForest_FacultyGorge_Daan_Rescue_Start_8
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_6:
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	compare VAR_TEMP_0, 25
	goto_if_eq DeepCloudForest_FacultyGorge_Daan_Rescue_Start_13
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_11:
# 134 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 135 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 5, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_5
# 136 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_0, MSGBOX_AUTOCLOSE
# 138 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 139 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 40
# 140 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 141 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_5
# 142 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 13, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_6
# 143 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 3, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_7
# 144 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 1, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_8
# 145 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 146 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_9
# 147 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 12, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_10
# 148 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 149 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_1, MSGBOX_AUTOCLOSE
# 150 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 151 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 153 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 40
# 154 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_13
# 155 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 156 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_11
# 157 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 158 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 159 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_2, MSGBOX_AUTOCLOSE
# 160 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_12
# 161 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 12, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_12
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_13
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 27, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_1
# 164 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 28, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_14
# 165 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	release
	return

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_2:
# 114 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_0
	goto DeepCloudForest_FacultyGorge_Daan_Rescue_Start_1

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_3:
# 113 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	compare VAR_TEMP_1, 42
	goto_if_eq DeepCloudForest_FacultyGorge_Daan_Rescue_Start_2
	goto DeepCloudForest_FacultyGorge_Daan_Rescue_Start_1

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_7:
# 123 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 27, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_2
# 124 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 28, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3
# 125 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 29, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_4
# 126 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
	goto DeepCloudForest_FacultyGorge_Daan_Rescue_Start_6

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_8:
# 122 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	compare VAR_TEMP_1, 42
	goto_if_eq DeepCloudForest_FacultyGorge_Daan_Rescue_Start_7
	goto DeepCloudForest_FacultyGorge_Daan_Rescue_Start_6

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_12:
# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 27, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_2
# 130 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 28, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3
# 131 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 29, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_4
# 132 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
	goto DeepCloudForest_FacultyGorge_Daan_Rescue_Start_11

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_13:
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	compare VAR_TEMP_1, 42
	goto_if_eq DeepCloudForest_FacultyGorge_Daan_Rescue_Start_12
	goto DeepCloudForest_FacultyGorge_Daan_Rescue_Start_11


# 9 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_0:
# 9 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	jump_right
# 9 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 13 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_1:
# 13 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 13 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
	step_end

# 16 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_2:
# 16 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 16 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 16 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
	step_end

# 20 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3:
# 20 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_left
	step_end

# 24 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_4:
# 24 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 24 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 24 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 29 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_5:
# 29 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_exclamation_mark
# 29 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 33 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_6:
# 33 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 33 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 33 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 33 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 33 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 33 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 33 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 33 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 33 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
	step_end

# 40 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_7:
# 40 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 40 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 40 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 40 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 40 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 40 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 40 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 40 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 40 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 40 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
	step_end

# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_8:
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
	step_end

# 58 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_9:
# 58 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_exclamation_mark
	step_end

# 66 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10:
# 66 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	jump_left
	step_end

# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11:
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 71 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_12:
# 71 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 75 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_13:
# 75 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_14:
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
	step_end

# 77 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_15:
# 77 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 77 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 77 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 77 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 77 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 77 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 77 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 77 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 77 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 77 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 77 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 77 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 77 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
	step_end

# 94 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_0:
# 94 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	jump_down
	step_end

# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1:
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_up
	step_end

# 102 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_2:
# 102 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 102 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 102 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 102 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 114 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_0:
# 114 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 114 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_up
	step_end

# 117 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_1:
# 117 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 123 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_2:
# 123 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 123 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 123 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 123 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 123 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 123 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 123 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 123 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 123 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 123 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 123 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 123 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 123 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 123 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 123 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
	step_end

# 124 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3:
# 124 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 124 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 124 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 124 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 124 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 124 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 124 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 124 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 124 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 124 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 124 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 124 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 124 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 124 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 125 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_4:
# 125 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 125 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 125 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 125 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
	step_end

# 141 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_5:
# 141 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_question_mark
# 141 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
# 141 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 141 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 141 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 141 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 141 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 142 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_6:
# 142 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 142 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 142 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 143 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_7:
# 143 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_question_mark
# 143 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 143 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 143 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 143 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 143 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 144 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_8:
# 144 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 144 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 146 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_9:
# 146 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_exclamation_mark
# 146 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_diag_southeast
# 146 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 146 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 147 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_10:
# 147 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 147 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 147 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 156 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_11:
# 156 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
	step_end

# 160 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_12:
# 160 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 160 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 160 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 160 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 160 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_13:
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
	step_end

# 164 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_14:
# 164 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 164 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 164 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 164 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 164 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

DeepCloudForest_FacultyGorge_GetOutTruck_Text_0:
# 17 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: By Arceus... This is a massacre.\p"
	.string "This isn't logging; it's somebody looking\n"
	.string "for something they can't find.\p"
	.string "They seem to be cutting these trees\n"
	.string "randomly, as if expecting to stumble\l"
	.string "upon what they're searching for with\l"
	.string "each swing of the axe.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_1:
# 22 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR GREEN}David{COLOR DARK_GRAY}: The signal... it's deafening here.\p"
	.string "All this random destruction is creating\n"
	.string "so much chaotic energy...\p"
	.string "But the Faculty's frequency...\p"
	.string "...the clean, repeating pattern...\p"
	.string "...it's close. Very close.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_2:
# 31 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "That way! Just over that ridge!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_3:
# 35 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Alright, team, let's move! Stay sharp!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_4:
# 49 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: ...and I won't let you touch these\n"
	.string "trees!\p"
	.string "This forest is alive! It has a right to\n"
	.string "exist!\p"
	.string "Can't you see it's not just plants\n"
	.string "standing in your way? We depend on\l"
	.string "every single one of them!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_5:
# 51 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR RED}Jos Vanderloo{COLOR DARK_GRAY}: Analysis: Subject is\n"
	.string "displaying irrational, sentimental\l"
	.string "attachment to non-productive biomass.\p"
	.string "His methods are inefficient.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_6:
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Barry{COLOR DARK_GRAY}: Shut up! I've got this.\p"
	.string "...Listen to yourself, Daan!\p"
	.string "You're clinging to this messy,\n"
	.string "inefficient past.\p"
	.string "The Faculty offers a real path to\n"
	.string "strength!\p"
	.string "A structured path! Something you and\n"
	.string "your 'friends' would never understand.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_7:
# 55 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: Strength? You call this\n"
	.string "strength?!\p"
	.string "Tearing down something that's taken a\n"
	.string "thousand years to grow?\p"
	.string "You're a coward, Barry, hiding behind\n"
	.string "their machines!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_8:
# 59 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Barry{COLOR DARK_GRAY}: STOP CALLING ME BARRY, MY NAME\n"
	.string "IS WOUTER YOU IDIOT!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_9:
# 61 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR RED}Ton Cross{COLOR DARK_GRAY}: Hey! Show some respect for\n"
	.string "the Junior Administrator!\p"
	.string "Why don't you and your tree-hugging\n"
	.string "Pokémon just give it up?$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_10:
# 63 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: NEVER!!\p"
	.string "VENUSAUR, HEADBUTT!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_11:
# 74 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: There he is.\p"
	.string "Two grunts and their leader.\p"
	.string "David, stay back and monitor that\n"
	.string "device.\p"
	.string "{PLAYER}, looks like Daan could use\n"
	.string "some help.\p"
	.string "I'll take the lead, follow me!$"

DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_0:
# 91 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "ARCANINE, BITE!$"

DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_1:
# 98 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: {PLAYER}, apparently there are\n"
	.string "more grunts here.\p"
	.string "I'll hold these two off for now!\p"
	.string "I'll be right behind you!$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_0:
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: {PLAYER}! Nash! I knew you'd\n"
	.string "come! You're just in time for a party.$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_1:
# 149 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Barry{COLOR DARK_GRAY}: YOU!?\p"
	.string "Of course you'd show up to ruin\n"
	.string "everything!\p"
	.string "I should have known you'd be involved in\n"
	.string "this chaos.$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_2:
# 159 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Enough talk!\p"
	.string "Grunts, deal with the ranger and that\n"
	.string "tree hugger! {PLAYER} is mine!\p"
	.string "Let's show them the true meaning of\n"
	.string "order!$"
