DeepCloudForest_FacultyGorge_MapScripts::
# 2 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DeepCloudForest_FacultyGorge_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DeepCloudForest_FacultyGorge_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DeepCloudForest_FacultyGorge_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	call DeepCloudforest_Healspot_OnTransition
	return

DeepCloudForest_FacultyGorge_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	map_script_2 VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 1, DeepCloudForest_FacultyGorge_GetOutTruck
	.2byte 0


DeepCloudforest_Healspot_OnTransition::
# 11 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setrespawn HEAL_LOCATION_DEEP_CLOUD_FOREST_FACULTY_GORGE
	end


DeepCloudForest_FacultyGorge_GetOutTruck::
# 16 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 17 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_0
# 18 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 19 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 2
# 20 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 21 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_1
# 22 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 23 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special SpawnCameraObject
# 24 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_2
# 25 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
# 26 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_1, MSGBOX_AUTOCLOSE
# 27 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 28 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 29 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 7, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
# 30 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 31 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_2
# 32 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_3, MSGBOX_AUTOCLOSE
# 33 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 34 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_4
# 35 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 36 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 37 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 38 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 39 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 7, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_5
# 40 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 41 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_2
# 42 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_4, MSGBOX_AUTOCLOSE
# 43 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 7, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_6
# 45 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 46 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
# 47 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_5, MSGBOX_AUTOCLOSE
# 48 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 6, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_6
# 49 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 50 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 16, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_6
# 51 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_7
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 54 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setflag FLAG_FACULTY_GORGE_NASH1
# 55 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special SpawnCameraObject
# 56 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_8
# 58 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 59 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	clearflag FLAG_FACULTY_GORGE_NASH2
# 60 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	clearflag FLAG_DAVID_TRUCK
# 61 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_6
# 62 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_7, MSGBOX_AUTOCLOSE
# 63 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 64 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_8
# 65 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_9, MSGBOX_AUTOCLOSE
# 66 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_9
# 69 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_10
# 70 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_11, MSGBOX_AUTOCLOSE
# 71 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 72 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 40
# 73 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 74 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_10
# 75 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_12, MSGBOX_AUTOCLOSE
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 77 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_6
# 78 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_13, MSGBOX_AUTOCLOSE
# 79 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 80 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 81 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11
# 82 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_10
# 83 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_14, MSGBOX_AUTOCLOSE
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 3, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_12
# 86 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 1, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_12
# 87 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_15
# 88 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_16, MSGBOX_AUTOCLOSE
# 89 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 90 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_6
# 91 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_17, MSGBOX_AUTOCLOSE
# 92 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 93 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_M_HEADBUTT
# 94 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 14, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_13
# 95 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_14
# 97 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 98 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 99 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 100 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 17, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
# 101 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 102 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
# 103 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_18, MSGBOX_AUTOCLOSE
# 104 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 17, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_15
# 105 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 18, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_16
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 19, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_17
# 107 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 108 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setflag FLAG_FACULTY_GORGE_NASH2
# 109 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 18
# 110 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 19
# 111 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 112 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	release
	return


DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts::
# 116 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 117 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special SpawnCameraObject
# 118 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_2
# 119 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 120 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
# 121 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_0
# 122 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 123 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_M_BITE
# 124 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 23, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_0
# 125 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 126 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 22, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
# 127 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_1, MSGBOX_AUTOCLOSE
# 130 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 131 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 22, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_15
# 132 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 133 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_2
# 134 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 135 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 136 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 3
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	release
	return


DeepCloudForest_FacultyGorge_Daan_Rescue_Start::
# 141 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 142 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	clearflag FLAG_FACULTY_GORGE_NASH1
# 143 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special SpawnCameraObject
# 144 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 145 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	addobject 26
# 146 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	addobject 27
# 147 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	addobject 28
# 148 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_0
# 149 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 150 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	compare VAR_TEMP_0, 24
	goto_if_eq DeepCloudForest_FacultyGorge_Daan_Rescue_Start_2
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_1:
# 158 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	compare VAR_TEMP_0, 25
	goto_if_eq DeepCloudForest_FacultyGorge_Daan_Rescue_Start_5
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_4:
# 166 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 167 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 5, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_5
# 168 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 169 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_6
# 170 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_0, MSGBOX_AUTOCLOSE
# 171 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 172 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 40
# 173 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 174 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_5
# 175 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 13, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_6
# 176 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 3, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_7
# 177 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 1, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_8
# 178 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 179 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_9
# 180 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 12, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_10
# 181 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 182 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_10
# 183 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_1, MSGBOX_AUTOCLOSE
# 184 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 185 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
# 186 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 187 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 40
# 188 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_15
# 189 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 190 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_11
# 191 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 192 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 193 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_10
# 194 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_2, MSGBOX_AUTOCLOSE
# 195 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 196 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_12
# 197 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 12, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_12
# 198 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_0
# 199 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 200 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 26, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_13
# 201 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 27, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_14
# 202 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 5, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
# 203 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 3, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_15
# 204 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 1, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_16
# 205 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_15
# 206 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 13, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_17
# 207 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
# 208 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 209 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_10
# 210 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_3
# 211 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 212 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	trainerbattle_no_intro TRAINER_BARRY_DEEPCLOUDFOREST, Deepcloudforest_Barry_Defeattext
# 213 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	goto Deepcloudforest_Barry_Defeated
	return

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_2:
# 151 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 26, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_1
# 153 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 27, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_2
# 154 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 155 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 28, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3
# 156 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
	goto DeepCloudForest_FacultyGorge_Daan_Rescue_Start_1

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_5:
# 159 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_4
# 160 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 26, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_1
# 161 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 27, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_2
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 28, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3
# 164 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
	goto DeepCloudForest_FacultyGorge_Daan_Rescue_Start_4


Deepcloudforest_Barry_Defeated::
# 222 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 223 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, Deepcloudforest_Barry_Defeated_Movement_0
# 224 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 12, Deepcloudforest_Barry_Defeated_Movement_0
# 225 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 3, Deepcloudforest_Barry_Defeated_Movement_0
# 226 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 1, Deepcloudforest_Barry_Defeated_Movement_0
# 227 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, Deepcloudforest_Barry_Defeated_Movement_0
# 228 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 13, Deepcloudforest_Barry_Defeated_Movement_0
# 229 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 230 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_10
# 231 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_0
# 232 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 233 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 234 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, Deepcloudforest_Barry_Defeated_Movement_1
# 235 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_8
# 236 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_1, MSGBOX_AUTOCLOSE
# 237 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 238 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 239 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 5, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11
# 240 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_6
# 241 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_2, MSGBOX_AUTOCLOSE
# 242 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 243 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_POKENAV_CALL
# 244 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 245 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 246 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, Deepcloudforest_Barry_Defeated_Movement_2
# 247 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_8
# 248 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_3
# 249 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 250 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, Deepcloudforest_Barry_Defeated_Movement_3
# 251 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker Deepcloudforest_Barry_Defeated_Text_4
# 252 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_5, MSGBOX_AUTOCLOSE
# 253 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 254 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 255 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_8
# 256 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_6, MSGBOX_AUTOCLOSE
# 257 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 258 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 259 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11
# 260 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_10
# 261 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_7, MSGBOX_AUTOCLOSE
# 262 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 263 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_BALL_THROW
# 264 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 40
# 265 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_BANG
# 266 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	fadescreen FADE_TO_WHITE
# 267 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
# 268 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_8, MSGBOX_AUTOCLOSE
# 269 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setflag FLAG_RESCUED_DAAN
# 270 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 4
# 271 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 4
# 272 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 2
# 273 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 3
# 274 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 1
# 275 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 13
# 276 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 12
# 277 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 278 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 279 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 120
# 280 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
# 281 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 282 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special SpawnCameraObject
# 283 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_6
# 284 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_9, MSGBOX_AUTOCLOSE
# 285 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 286 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 26, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 287 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 14, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 288 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 27, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 289 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 5, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 290 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 291 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Deepcloudforest_Barry_Defeated_Movement_4
# 292 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 293 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
# 294 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_10, MSGBOX_AUTOCLOSE
# 295 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 296 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 297 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 28, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11
# 298 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_2
# 299 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_11, MSGBOX_AUTOCLOSE
# 300 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 301 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 302 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_6
# 303 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_12
# 304 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 305 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setflag FLAG_DAAN_NASH_TRUCK
# 306 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setvar VAR_MISTCITY_STATE, 1
# 307 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	clearflag FLAG_FACULTY_SYMPATHIZERS_1
# 308 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	fadescreen FADE_TO_BLACK
# 309 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3
# 310 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 311 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 312 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_TRUCK_DOOR
# 313 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	warpsilent MAP_INSIDE_OF_TRUCK, 1
# 314 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitstate
# 315 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	release
	return


Deepcloudforest_Trainer_Grunt1::
# 319 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FACULTY_CLOUDFOREST_1, Deepcloudforest_Text_Grunt1Intro, Deepcloudforest_Text_Grunt1Defeated
# 320 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker Deepcloudforest_Trainer_Grunt1_Text_0
# 321 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


Deepcloudforest_Trainer_Grunt2::
# 338 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FACULTY_CLOUDFOREST_2, Deepcloudforest_Text_Grunt2Intro, Deepcloudforest_Text_Grunt2Defeated
# 339 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker Deepcloudforest_Trainer_Grunt2_Text_0
# 340 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


Deepcloudforest_Trainer_Grunt3::
# 357 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FACULTY_CLOUDFOREST_3, Deepcloudforest_Text_Grunt3Intro, Deepcloudforest_Text_Grunt3Defeated
# 358 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker Deepcloudforest_Trainer_Grunt3_Text_0
# 359 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


Deepcloudforest_Trainer_Grunt4::
# 376 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FACULTY_CLOUDFOREST_4, Deepcloudforest_Text_Grunt4Intro, Deepcloudforest_Text_Grunt4Defeated
# 377 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker Deepcloudforest_Trainer_Grunt4_Text_0
# 378 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end


Deepcloudforest_Gorge_Goback::
# 395 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 396 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Gorge_Goback_Text_0
# 397 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 398 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, Deepcloudforest_Gorge_Goback_Movement_0
# 399 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 400 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	release
	return


# 17 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_0:
# 17 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	jump_right
# 17 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 21 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_1:
# 21 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 21 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
	step_end

# 24 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_2:
# 24 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 24 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 24 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
	step_end

# 29 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3:
# 29 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_left
	step_end

# 34 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_4:
# 34 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 34 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 34 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 39 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_5:
# 39 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_exclamation_mark
# 39 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_6:
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
	step_end

# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_7:
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
	step_end

# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_8:
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
	step_end

# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_9:
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_exclamation_mark
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_up
	step_end

# 73 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10:
# 73 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 81 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11:
# 81 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_exclamation_mark
	step_end

# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_12:
# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
	step_end

# 94 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_13:
# 94 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	jump_left
	step_end

# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_14:
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 104 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_15:
# 104 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 105 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_16:
# 105 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 105 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 105 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 105 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 105 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 105 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 105 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 105 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 105 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 105 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 105 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 105 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 105 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 105 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
	step_end

# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_17:
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
	step_end

# 124 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_0:
# 124 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	jump_down
	step_end

# 126 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1:
# 126 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_up
	step_end

# 133 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_2:
# 133 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 133 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 133 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 133 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 148 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_0:
# 148 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_1:
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
	step_end

# 153 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_2:
# 153 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 153 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 153 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 153 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 153 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 153 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 153 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 153 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 153 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 153 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 153 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 153 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 153 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 153 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 155 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3:
# 155 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 155 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 155 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
	step_end

# 159 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_4:
# 159 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 159 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_up
	step_end

# 174 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_5:
# 174 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_question_mark
# 174 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
# 174 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 174 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 174 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 174 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 174 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 175 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_6:
# 175 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 175 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 175 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 176 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_7:
# 176 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_question_mark
# 176 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 176 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 176 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 176 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 176 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 177 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_8:
# 177 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 177 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 179 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_9:
# 179 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_exclamation_mark
# 179 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_diag_southeast
# 179 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 179 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 180 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_10:
# 180 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 180 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 180 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 190 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_11:
# 190 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
	step_end

# 196 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_12:
# 196 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 196 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 196 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 196 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 196 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 200 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_13:
# 200 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 200 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 200 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 200 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 200 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_left
	step_end

# 201 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_14:
# 201 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 201 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 201 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 201 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 201 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_left
	step_end

# 203 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_15:
# 203 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 203 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 203 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 203 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 204 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_16:
# 204 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 204 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 206 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_17:
# 206 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 206 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 206 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 223 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
Deepcloudforest_Barry_Defeated_Movement_0:
# 223 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	jump_left
# 223 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 234 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
Deepcloudforest_Barry_Defeated_Movement_1:
# 234 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_exclamation_mark
# 234 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 234 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 234 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 246 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
Deepcloudforest_Barry_Defeated_Movement_2:
# 246 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 246 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_question_mark
	step_end

# 250 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
Deepcloudforest_Barry_Defeated_Movement_3:
# 250 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 250 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
	step_end

# 291 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
Deepcloudforest_Barry_Defeated_Movement_4:
# 291 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 291 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 291 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
	step_end

# 398 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
Deepcloudforest_Gorge_Goback_Movement_0:
# 398 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
	step_end

DeepCloudForest_FacultyGorge_GetOutTruck_Text_0:
# 25 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Nash$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_1:
# 26 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "By Arceus... This is a massacre.\p"
	.string "This isn't logging; it's somebody looking\n"
	.string "for something they can't find.\p"
	.string "They seem to be cutting these trees\n"
	.string "randomly, as if expecting to stumble\l"
	.string "upon what they're searching for with\l"
	.string "each swing of the axe.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_2:
# 31 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "David$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_3:
# 32 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "The signal... it's deafening here.\p"
	.string "All this random destruction is creating\n"
	.string "so much chaotic energy...\p"
	.string "But the Faculty's frequency...\p"
	.string "...the clean, repeating pattern...\p"
	.string "...it's close. Very close.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_4:
# 42 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "That way! Just over that ridge!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_5:
# 47 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Alright, team, let's move! Stay sharp!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_6:
# 61 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Daan$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_7:
# 62 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "...and I won't let you touch these trees!\p"
	.string "This forest is alive! It has a right to\n"
	.string "exist!\p"
	.string "Can't you see it's not just plants\n"
	.string "standing in your way? We depend on\l"
	.string "every single one of them!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_8:
# 64 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Jos Vanderloo$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_9:
# 65 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Analysis: Subject is displaying\n"
	.string "irrational, sentimental attachment to\l"
	.string "non-productive biomass.\p"
	.string "His methods are inefficient.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_10:
# 69 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Barry$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_11:
# 70 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Shut up! I've got this.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_12:
# 75 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "...Listen to yourself, Daan!\p"
	.string "You're clinging to this messy,\n"
	.string "inefficient past.\p"
	.string "The Faculty offers a real path to\n"
	.string "strength!\p"
	.string "A structured path! Something you and\n"
	.string "your 'friends' would never understand.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_13:
# 78 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Strength? You call this strength?!\p"
	.string "Tearing down something that's taken a\n"
	.string "thousand years to grow?\p"
	.string "You're a coward, Barry, hiding behind\n"
	.string "their machines!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_14:
# 83 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "STOP CALLING ME BARRY, MY NAME IS\n"
	.string "WOUTER YOU IDIOT!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_15:
# 87 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Ton Cross$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_16:
# 88 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Hey! Show some respect for the Junior\n"
	.string "Administrator!\p"
	.string "Why don't you and your tree-hugging\n"
	.string "Pokémon just give it up?$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_17:
# 91 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "NEVER!!\p"
	.string "VENUSAUR, HEADBUTT!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_18:
# 103 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "There he is.\p"
	.string "Two grunts and their leader.\p"
	.string "David, stay back and monitor that\n"
	.string "device.\p"
	.string "{PLAYER}, looks like Daan could use\n"
	.string "some help.\p"
	.string "I'll take the lead, follow me!$"

DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_0:
# 121 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "ARCANINE, BITE!$"

DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_1:
# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{PLAYER}, apparently there are more\n"
	.string "grunts here.\p"
	.string "I'll hold these two off for now!\p"
	.string "I'll be right behind you!$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_0:
# 170 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{PLAYER}! Nash! I knew you'd come!\n"
	.string "You're just in time for a party.$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_1:
# 183 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "YOU!?\p"
	.string "Of course you'd show up to ruin\n"
	.string "everything!\p"
	.string "I should have known you'd be involved in\n"
	.string "this chaos.$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_2:
# 194 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Enough talk!\p"
	.string "Grunts, deal with the ranger and that\n"
	.string "tree hugger! {PLAYER} is mine!\p"
	.string "Let's show them the true meaning of\n"
	.string "order!$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_3:
# 210 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Show me what you got dumb lab intern!$"

Deepcloudforest_Barry_Defeated_Text_0:
# 231 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "No... Impossible!\n"
	.string "Our strategy was flawless!\p"
	.string "The tactical analysis was perfect...\p"
	.string "The geological resonance scans were\n"
	.string "pinpoint accurate!\p"
	.string "How could we lose to a bunch of chaotic,\n"
	.string "sentimental...!$"

Deepcloudforest_Barry_Defeated_Text_1:
# 236 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Administrator Barry... I mean Wouter!\n"
	.string "Cease communications at once!\p"
	.string "That information is classified.\n"
	.string "We are falling back.$"

Deepcloudforest_Barry_Defeated_Text_2:
# 241 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Geological scans?\n"
	.string "What are you talking about, Barry?\p"
	.string "This was never just about cutting down\n"
	.string "trees, was it?\p"
	.string "What were you really looking for out\n"
	.string "here?$"

Deepcloudforest_Barry_Defeated_Text_3:
# 248 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "...\p"
	.string "Hello Boss...\p"
	.string "Yes...\p"
	.string "Understood...\p"
	.string "...You are on speaker right now!$"

Deepcloudforest_Barry_Defeated_Text_4:
# 251 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "?????$"

Deepcloudforest_Barry_Defeated_Text_5:
# 252 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string ".....Well hello there children.\p"
	.string "This is the Rector speaking.\p"
	.string "We have secured the Objective.\p"
	.string "The target, codename: SILENT GUARDIAN,\n"
	.string "is in our possession.\p"
	.string "I repeat, the Silent Guardian has been\n"
	.string "secured.\p"
	.string "MUAHAHAHAHA...$"

Deepcloudforest_Barry_Defeated_Text_6:
# 256 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "It seems your victory here is\n"
	.string "irrelevant.\p"
	.string "While you were playing hero in the mud,\n"
	.string "our primary team accomplished the\l"
	.string "mission.\p"
	.string "This was merely a distraction.$"

Deepcloudforest_Barry_Defeated_Text_7:
# 261 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "That's right!\n"
	.string "You didn't win anything!\p"
	.string "The Faculty always thinks two steps\n"
	.string "ahead.\p"
	.string "You haven't stopped a thing!\p"
	.string "You've just proven how insignificant\n"
	.string "you really are!\p"
	.string "Catch this!$"

Deepcloudforest_Barry_Defeated_Text_8:
# 268 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "It's a flashbang! Don't let them get\n"
	.string "away!$"

Deepcloudforest_Barry_Defeated_Text_9:
# 284 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "The 'Silent Guardian'... that's what\n"
	.string "Elara called the legend!\p"
	.string "They weren't just digging; they found\n"
	.string "it!$"

Deepcloudforest_Barry_Defeated_Text_10:
# 294 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "They played us perfectly.\n"
	.string "David! Can you track them?\p"
	.string "That comms signal, the new objective...\n"
	.string "anything!$"

Deepcloudforest_Barry_Defeated_Text_11:
# 299 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "I... I can't track them.\p"
	.string "But the objective... the 'Guardian'... the\n"
	.string "energy it's giving off is immense!\p"
	.string "It's overwhelming everything else!\p"
	.string "It's moving fast, heading east!$"

Deepcloudforest_Barry_Defeated_Text_12:
# 303 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "We have to go!\p"
	.string "We can't let them get away with a piece\n"
	.string "of this forest's soul!\p"
	.string "Lets get back to the truck!$"

Deepcloudforest_Trainer_Grunt1_Text_0:
# 320 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Maurice$"

Deepcloudforest_Trainer_Grunt2_Text_0:
# 339 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Ad Dice$"

Deepcloudforest_Trainer_Grunt3_Text_0:
# 358 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Yossi$"

Deepcloudforest_Trainer_Grunt4_Text_0:
# 377 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Harrie$"

Deepcloudforest_Gorge_Goback_Text_0:
# 396 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "This is not a time to flee {PLAYER},\n"
	.string "Daan is counting on us.$"

Deepcloudforest_Barry_Defeattext::
# 217 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "That stupid fish, should have dumped\n"
	.string "him a while ago!$"

Deepcloudforest_Text_Grunt1Intro::
# 325 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Chopping down these ancient trees is\n"
	.string "hard work. You better not get in my way!$"

Deepcloudforest_Text_Grunt1Defeated::
# 329 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "I'm too tired from all this woodcutting\n"
	.string "to battle properly...$"

Deepcloudforest_Text_Grunt1PostBattle::
# 333 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "We have orders to clear this whole area.\n"
	.string "There is something buried here that\l"
	.string "needs to see the light of day.$"

Deepcloudforest_Text_Grunt2Intro::
# 344 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "My equipment is going crazy! There is a\n"
	.string "massive magnetic signal nearby.$"

Deepcloudforest_Text_Grunt2Defeated::
# 348 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "My equipment!\n"
	.string "You made me drop my scanner!$"

Deepcloudforest_Text_Grunt2PostBattle::
# 352 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "The readings aren't coming from a\n"
	.string "normal Pokémon. It feels like living\l"
	.string "metal is sleeping beneath this gorge.$"

Deepcloudforest_Text_Grunt3Intro::
# 363 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "This gorge is off-limits by order of the\n"
	.string "Faculty. Turn back now, kid!$"

Deepcloudforest_Text_Grunt3Defeated::
# 367 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Alert!\n"
	.string "We have an intruder!$"

Deepcloudforest_Text_Grunt3PostBattle::
# 371 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "We believe there is a sealed chamber\n"
	.string "hidden in these rock walls. We just need\l"
	.string "to find the right door.$"

Deepcloudforest_Text_Grunt4Intro::
# 382 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Do you know how old this forest is? Not\n"
	.string "as old as the thing we are looking for.$"

Deepcloudforest_Text_Grunt4Defeated::
# 386 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "History repeats itself... Defeated\n"
	.string "again.$"

Deepcloudforest_Text_Grunt4PostBattle::
# 390 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Legend says an ancient golem was\n"
	.string "locked away here ages ago. The Faculty\l"
	.string "will harness its power!$"
