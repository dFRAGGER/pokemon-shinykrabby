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


DeepCloudForest_FacultyGorge_David_Dialogue::
# 16 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 17 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	faceplayer
# 18 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_David_Dialogue_Text_0
# 19 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_David_Dialogue_Text_1, MSGBOX_AUTOCLOSE
# 20 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 21 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	release
	return


DeepCloudForest_FacultyGorge_GetOutTruck::
# 26 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 27 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_0
# 28 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 29 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 2
# 30 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 31 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_1
# 32 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 33 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special SpawnCameraObject
# 34 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_2
# 35 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
# 36 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_1, MSGBOX_AUTOCLOSE
# 37 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 38 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 39 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 7, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
# 40 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 41 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_David_Dialogue_Text_0
# 42 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_2, MSGBOX_AUTOCLOSE
# 43 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_4
# 45 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 46 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 47 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 48 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 49 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 7, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_5
# 50 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 51 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_David_Dialogue_Text_0
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_3, MSGBOX_AUTOCLOSE
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 54 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 7, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_6
# 55 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 56 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_4, MSGBOX_AUTOCLOSE
# 58 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 6, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_6
# 59 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 60 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 16, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_6
# 61 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 62 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_7
# 63 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 64 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setflag FLAG_FACULTY_GORGE_NASH1
# 65 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special SpawnCameraObject
# 66 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_8
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 69 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	clearflag FLAG_FACULTY_GORGE_NASH2
# 70 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	clearflag FLAG_DAVID_TRUCK
# 71 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_5
# 72 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_6, MSGBOX_AUTOCLOSE
# 73 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 74 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_7
# 75 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_8, MSGBOX_AUTOCLOSE
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 77 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 78 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_9
# 79 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_9
# 80 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_10, MSGBOX_AUTOCLOSE
# 81 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 82 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 40
# 83 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_9
# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_11, MSGBOX_AUTOCLOSE
# 86 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 87 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_5
# 88 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_12, MSGBOX_AUTOCLOSE
# 89 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 90 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 91 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11
# 92 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_9
# 93 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_13, MSGBOX_AUTOCLOSE
# 94 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 95 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 3, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_12
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 1, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_12
# 97 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_14
# 98 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_15, MSGBOX_AUTOCLOSE
# 99 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 100 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_5
# 101 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_16, MSGBOX_AUTOCLOSE
# 102 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 103 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_M_HEADBUTT
# 104 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 14, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_13
# 105 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_14
# 107 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 108 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 109 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 110 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 17, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
# 111 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 112 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
# 113 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_17, MSGBOX_AUTOCLOSE
# 114 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 17, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_15
# 115 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 18, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_16
# 116 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 19, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_17
# 117 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 118 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setflag FLAG_FACULTY_GORGE_NASH2
# 119 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 18
# 120 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 19
# 121 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 122 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	release
	return


DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts::
# 126 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 127 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special SpawnCameraObject
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_2
# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 130 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
# 131 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_0
# 132 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 133 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_M_BITE
# 134 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 23, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_0
# 135 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 136 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 22, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 138 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
# 139 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_1, MSGBOX_AUTOCLOSE
# 140 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 141 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 22, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_15
# 142 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 143 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_2
# 144 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 145 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 146 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 3
# 147 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	release
	return


DeepCloudForest_FacultyGorge_Daan_Rescue_Start::
# 151 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	clearflag FLAG_FACULTY_GORGE_NASH1
# 153 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special SpawnCameraObject
# 154 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 155 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	addobject 26
# 156 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	addobject 27
# 157 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	addobject 28
# 158 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_0
# 159 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 160 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	compare VAR_TEMP_0, 24
	goto_if_eq DeepCloudForest_FacultyGorge_Daan_Rescue_Start_2
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_1:
# 168 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	compare VAR_TEMP_0, 25
	goto_if_eq DeepCloudForest_FacultyGorge_Daan_Rescue_Start_5
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_4:
# 176 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 177 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 5, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_5
# 178 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 179 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_5
# 180 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_0, MSGBOX_AUTOCLOSE
# 181 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 182 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 40
# 183 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 184 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_5
# 185 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 13, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_6
# 186 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 3, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_7
# 187 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 1, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_8
# 188 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 189 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_9
# 190 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 12, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_10
# 191 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 192 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_9
# 193 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_1, MSGBOX_AUTOCLOSE
# 194 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 195 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
# 196 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 197 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 40
# 198 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_15
# 199 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 200 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_11
# 201 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 202 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 203 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_9
# 204 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_2, MSGBOX_AUTOCLOSE
# 205 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 206 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_12
# 207 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 12, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_12
# 208 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_0
# 209 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 210 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 26, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_13
# 211 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 27, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_14
# 212 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 5, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
# 213 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 3, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_15
# 214 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 1, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_16
# 215 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_15
# 216 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 13, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_17
# 217 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
# 218 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 219 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_9
# 220 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_3
# 221 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 222 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	trainerbattle_no_intro TRAINER_BARRY_DEEPCLOUDFOREST, Deepcloudforest_Barry_Defeattext
# 223 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	goto Deepcloudforest_Barry_Defeated
	return

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_2:
# 161 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 26, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_1
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 27, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_2
# 164 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 165 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 28, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3
# 166 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
	goto DeepCloudForest_FacultyGorge_Daan_Rescue_Start_1

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_5:
# 169 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_4
# 170 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 26, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_1
# 171 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 27, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_2
# 172 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 173 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 28, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3
# 174 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
	goto DeepCloudForest_FacultyGorge_Daan_Rescue_Start_4


Deepcloudforest_Barry_Defeated::
# 232 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 233 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, Deepcloudforest_Barry_Defeated_Movement_0
# 234 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 12, Deepcloudforest_Barry_Defeated_Movement_0
# 235 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 3, Deepcloudforest_Barry_Defeated_Movement_0
# 236 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 1, Deepcloudforest_Barry_Defeated_Movement_0
# 237 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, Deepcloudforest_Barry_Defeated_Movement_0
# 238 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 13, Deepcloudforest_Barry_Defeated_Movement_0
# 239 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 240 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_9
# 241 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_0
# 242 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 243 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 244 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, Deepcloudforest_Barry_Defeated_Movement_1
# 245 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_7
# 246 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_1, MSGBOX_AUTOCLOSE
# 247 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 248 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 249 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 5, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11
# 250 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_5
# 251 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_2, MSGBOX_AUTOCLOSE
# 252 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 253 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_POKENAV_CALL
# 254 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 255 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 256 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, Deepcloudforest_Barry_Defeated_Movement_2
# 257 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_7
# 258 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_3
# 259 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 260 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, Deepcloudforest_Barry_Defeated_Movement_3
# 261 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker Deepcloudforest_Barry_Defeated_Text_4
# 262 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_5, MSGBOX_AUTOCLOSE
# 263 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 264 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 265 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_7
# 266 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_6, MSGBOX_AUTOCLOSE
# 267 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 268 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 269 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11
# 270 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_9
# 271 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_7, MSGBOX_AUTOCLOSE
# 272 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 273 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_BALL_THROW
# 274 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 40
# 275 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
# 276 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_8, MSGBOX_AUTOCLOSE
# 277 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 278 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_BANG
# 279 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 280 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setflag FLAG_RESCUED_DAAN
# 281 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 4
# 282 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 4
# 283 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 2
# 284 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 3
# 285 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 1
# 286 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 13
# 287 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 12
# 288 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 289 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 290 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 120
# 291 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
# 292 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 293 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special SpawnCameraObject
# 294 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_5
# 295 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_9, MSGBOX_AUTOCLOSE
# 296 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 297 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 26, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 298 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 14, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 299 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 27, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 300 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 5, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 301 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 302 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Deepcloudforest_Barry_Defeated_Movement_4
# 303 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 304 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
# 305 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_10, MSGBOX_AUTOCLOSE
# 306 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 307 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 308 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 28, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11
# 309 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_David_Dialogue_Text_0
# 310 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_11, MSGBOX_AUTOCLOSE
# 311 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 312 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 313 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_5
# 314 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_12
# 315 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 316 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setflag FLAG_DAAN_NASH_TRUCK
# 317 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setvar VAR_MISTCITY_STATE, 1
# 318 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	clearflag FLAG_FACULTY_SYMPATHIZERS_1
# 319 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	fadescreen FADE_TO_BLACK
# 320 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3
# 321 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 322 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 323 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_TRUCK_DOOR
# 324 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	warpsilent MAP_INSIDE_OF_TRUCK, 1
# 325 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitstate
# 326 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	release
	return


Deepcloudforest_Trainer_Grunt1::
# 330 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FACULTY_CLOUDFOREST_1, Deepcloudforest_Text_Grunt1Intro, Deepcloudforest_Text_Grunt1Defeated
# 331 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker Deepcloudforest_Trainer_Grunt1_Text_0
# 332 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


Deepcloudforest_Trainer_Grunt2::
# 349 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FACULTY_CLOUDFOREST_2, Deepcloudforest_Text_Grunt2Intro, Deepcloudforest_Text_Grunt2Defeated
# 350 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker Deepcloudforest_Trainer_Grunt2_Text_0
# 351 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


Deepcloudforest_Trainer_Grunt3::
# 368 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FACULTY_CLOUDFOREST_3, Deepcloudforest_Text_Grunt3Intro, Deepcloudforest_Text_Grunt3Defeated
# 369 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker Deepcloudforest_Trainer_Grunt3_Text_0
# 370 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


Deepcloudforest_Trainer_Grunt4::
# 387 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FACULTY_CLOUDFOREST_4, Deepcloudforest_Text_Grunt4Intro, Deepcloudforest_Text_Grunt4Defeated
# 388 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setspeaker Deepcloudforest_Trainer_Grunt4_Text_0
# 389 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end


Deepcloudforest_Gorge_Goback::
# 406 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 407 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Gorge_Goback_Text_0
# 408 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 409 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, Deepcloudforest_Gorge_Goback_Movement_0
# 410 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 411 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	release
	return


# 27 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_0:
# 27 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	jump_right
# 27 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 31 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_1:
# 31 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 31 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
	step_end

# 34 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_2:
# 34 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 34 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 34 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
	step_end

# 39 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3:
# 39 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_left
	step_end

# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_4:
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 49 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_5:
# 49 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_exclamation_mark
# 49 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 54 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_6:
# 54 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 54 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 54 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 54 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 54 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 54 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 54 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 54 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 54 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
	step_end

# 62 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_7:
# 62 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 62 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 62 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 62 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 62 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 62 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 62 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 62 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 62 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 62 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
	step_end

# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_8:
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
	step_end

# 78 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_9:
# 78 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_exclamation_mark
# 78 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_up
	step_end

# 83 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10:
# 83 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 91 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11:
# 91 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_exclamation_mark
	step_end

# 95 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_12:
# 95 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
	step_end

# 104 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_13:
# 104 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	jump_left
	step_end

# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_14:
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 114 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_15:
# 114 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 115 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_16:
# 115 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 115 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 115 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 115 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 115 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 115 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 115 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 115 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 115 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 115 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 115 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 115 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 115 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 115 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
	step_end

# 116 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_17:
# 116 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 116 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 116 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 116 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 116 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 116 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 116 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 116 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 116 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 116 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 116 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 116 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 116 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
	step_end

# 134 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_0:
# 134 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	jump_down
	step_end

# 136 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1:
# 136 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_up
	step_end

# 143 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_2:
# 143 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 143 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 143 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 143 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 158 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_0:
# 158 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_1:
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
	step_end

# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_2:
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 165 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3:
# 165 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 165 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 165 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
	step_end

# 169 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_4:
# 169 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 169 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_up
	step_end

# 184 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_5:
# 184 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_question_mark
# 184 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
# 184 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 184 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 184 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 184 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 184 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 185 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_6:
# 185 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 185 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 185 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 186 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_7:
# 186 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_question_mark
# 186 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 186 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 186 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 186 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 186 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 187 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_8:
# 187 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 187 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 189 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_9:
# 189 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_exclamation_mark
# 189 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_diag_southeast
# 189 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 189 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 190 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_10:
# 190 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 190 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 190 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 200 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_11:
# 200 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
	step_end

# 206 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_12:
# 206 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 206 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 206 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 206 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 206 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 210 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_13:
# 210 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 210 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 210 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 210 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 210 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_left
	step_end

# 211 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_14:
# 211 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 211 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 211 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 211 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 211 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_left
	step_end

# 213 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_15:
# 213 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 213 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 213 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 213 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 214 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_16:
# 214 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 214 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 216 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_17:
# 216 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 216 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 216 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 233 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
Deepcloudforest_Barry_Defeated_Movement_0:
# 233 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	jump_left
# 233 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 244 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
Deepcloudforest_Barry_Defeated_Movement_1:
# 244 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_exclamation_mark
# 244 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 244 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 244 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 256 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
Deepcloudforest_Barry_Defeated_Movement_2:
# 256 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 256 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_question_mark
	step_end

# 260 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
Deepcloudforest_Barry_Defeated_Movement_3:
# 260 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 260 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
	step_end

# 302 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
Deepcloudforest_Barry_Defeated_Movement_4:
# 302 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 302 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 302 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
	step_end

# 409 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
Deepcloudforest_Gorge_Goback_Movement_0:
# 409 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
	step_end

DeepCloudForest_FacultyGorge_David_Dialogue_Text_0:
# 18 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "David$"

DeepCloudForest_FacultyGorge_David_Dialogue_Text_1:
# 19 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Daan charged in there to fight the\n"
	.string "Faculty, but I... I freeze up every time\l"
	.string "I hear the buzzing of a Beedrill.\p"
	.string "I'll just guard the entrance, you go\n"
	.string "ahead and help him before I pass out\l"
	.string "from the stress.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_0:
# 35 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Nash$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_1:
# 36 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "By Arceus... This is a massacre.\p"
	.string "This isn't logging; it's somebody looking\n"
	.string "for something they can't find.\p"
	.string "They seem to be cutting these trees\n"
	.string "randomly, as if expecting to stumble\l"
	.string "upon what they're searching for with\l"
	.string "each swing of the axe.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_2:
# 42 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "The signal... it's deafening here.\p"
	.string "All this random destruction is creating\n"
	.string "so much chaotic energy...\p"
	.string "But the Faculty's frequency...\p"
	.string "...the clean, repeating pattern...\p"
	.string "...it's close. Very close.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_3:
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "That way! Just over that ridge!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_4:
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Alright, team, let's move! Stay sharp!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_5:
# 71 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Daan$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_6:
# 72 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "...and I won't let you touch these trees!\p"
	.string "This forest is alive! It has a right to\n"
	.string "exist!\p"
	.string "Can't you see it's not just plants\n"
	.string "standing in your way? We depend on\l"
	.string "every single one of them!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_7:
# 74 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Jos Vanderloo$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_8:
# 75 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Analysis: Subject is displaying\n"
	.string "irrational, sentimental attachment to\l"
	.string "non-productive biomass.\p"
	.string "His methods are inefficient.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_9:
# 79 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Barry$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_10:
# 80 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Shut up! I've got this.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_11:
# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "...Listen to yourself, Daan!\p"
	.string "You're clinging to this messy,\n"
	.string "inefficient past.\p"
	.string "The Faculty offers a real path to\n"
	.string "strength!\p"
	.string "A structured path! Something you and\n"
	.string "your 'friends' would never understand.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_12:
# 88 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Strength? You call this strength?!\p"
	.string "Tearing down something that's taken a\n"
	.string "thousand years to grow?\p"
	.string "You're a coward, Barry, hiding behind\n"
	.string "their machines!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_13:
# 93 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "STOP CALLING ME BARRY, MY NAME IS\n"
	.string "WOUTER YOU IDIOT!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_14:
# 97 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Ton Cross$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_15:
# 98 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Hey! Show some respect for the Junior\n"
	.string "Administrator!\p"
	.string "Why don't you and your tree-hugging\n"
	.string "Pokémon just give it up?$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_16:
# 101 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "NEVER!!\p"
	.string "VENUSAUR, HEADBUTT!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_17:
# 113 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "There he is.\p"
	.string "Two grunts and their leader.\p"
	.string "David, stay back and monitor that\n"
	.string "device.\p"
	.string "{PLAYER}, looks like Daan could use\n"
	.string "some help.\p"
	.string "I'll take the lead, follow me!$"

DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_0:
# 131 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "ARCANINE, BITE!$"

DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_1:
# 139 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{PLAYER}, apparently there are more\n"
	.string "grunts here.\p"
	.string "I'll hold these two off for now!\p"
	.string "I'll be right behind you!$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_0:
# 180 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{PLAYER}! Nash! I knew you'd come!\n"
	.string "You're just in time for a party.$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_1:
# 193 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "YOU!?\p"
	.string "Of course you'd show up to ruin\n"
	.string "everything!\p"
	.string "I should have known you'd be involved in\n"
	.string "this chaos.$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_2:
# 204 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Enough talk!\p"
	.string "Grunts, deal with the ranger and that\n"
	.string "tree hugger! {PLAYER} is mine!\p"
	.string "Let's show them the true meaning of\n"
	.string "order!$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_3:
# 220 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Show me what you got dumb lab intern!$"

Deepcloudforest_Barry_Defeated_Text_0:
# 241 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "No... Impossible!\n"
	.string "Our strategy was flawless!\p"
	.string "The tactical analysis was perfect...\p"
	.string "The geological resonance scans were\n"
	.string "pinpoint accurate!\p"
	.string "How could we lose to a bunch of chaotic,\n"
	.string "sentimental...!$"

Deepcloudforest_Barry_Defeated_Text_1:
# 246 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Administrator Barry... I mean Wouter!\n"
	.string "Cease communications at once!\p"
	.string "That information is classified.\n"
	.string "We are falling back.$"

Deepcloudforest_Barry_Defeated_Text_2:
# 251 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Geological scans?\n"
	.string "What are you talking about, Barry?\p"
	.string "This was never just about cutting down\n"
	.string "trees, was it?\p"
	.string "What were you really looking for out\n"
	.string "here?$"

Deepcloudforest_Barry_Defeated_Text_3:
# 258 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "...\p"
	.string "Hello Boss...\p"
	.string "Yes...\p"
	.string "Understood...\p"
	.string "...You are on speaker right now!$"

Deepcloudforest_Barry_Defeated_Text_4:
# 261 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "?????$"

Deepcloudforest_Barry_Defeated_Text_5:
# 262 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string ".....Well hello there children.\p"
	.string "This is the Rector speaking.\p"
	.string "We have secured the Objective.\p"
	.string "The target, codename: SILENT GUARDIAN,\n"
	.string "is in our possession.\p"
	.string "I repeat, the Silent Guardian has been\n"
	.string "secured.\p"
	.string "MUAHAHAHAHA...$"

Deepcloudforest_Barry_Defeated_Text_6:
# 266 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "It seems your victory here is\n"
	.string "irrelevant.\p"
	.string "While you were playing hero in the mud,\n"
	.string "our primary team accomplished the\l"
	.string "mission.\p"
	.string "This was merely a distraction.$"

Deepcloudforest_Barry_Defeated_Text_7:
# 271 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "That's right!\n"
	.string "You didn't win anything!\p"
	.string "The Faculty always thinks two steps\n"
	.string "ahead.\p"
	.string "You haven't stopped a thing!\p"
	.string "You've just proven how insignificant\n"
	.string "you really are!\p"
	.string "Catch this!$"

Deepcloudforest_Barry_Defeated_Text_8:
# 276 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "It's a flashbang! Don't let them get\n"
	.string "away!$"

Deepcloudforest_Barry_Defeated_Text_9:
# 295 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "The 'Silent Guardian'... that's what\n"
	.string "Elara called the legend!\p"
	.string "They weren't just digging; they found\n"
	.string "it!$"

Deepcloudforest_Barry_Defeated_Text_10:
# 305 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "They played us perfectly.\n"
	.string "David! Can you track them?\p"
	.string "That comms signal, the new objective...\n"
	.string "anything!$"

Deepcloudforest_Barry_Defeated_Text_11:
# 310 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "I... I can't track them.\p"
	.string "But the objective... the 'Guardian'... the\n"
	.string "energy it's giving off is immense!\p"
	.string "It's overwhelming everything else!\p"
	.string "It's moving fast, heading west!$"

Deepcloudforest_Barry_Defeated_Text_12:
# 314 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "We have to go!\p"
	.string "We can't let them get away with a piece\n"
	.string "of this forest's soul!\p"
	.string "Lets get back to the truck!$"

Deepcloudforest_Trainer_Grunt1_Text_0:
# 331 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Maurice$"

Deepcloudforest_Trainer_Grunt2_Text_0:
# 350 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Ad Dice$"

Deepcloudforest_Trainer_Grunt3_Text_0:
# 369 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Yossi$"

Deepcloudforest_Trainer_Grunt4_Text_0:
# 388 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Harrie$"

Deepcloudforest_Gorge_Goback_Text_0:
# 407 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "This is not a time to flee {PLAYER},\n"
	.string "Daan is counting on us.$"

Deepcloudforest_Barry_Defeattext::
# 227 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "That stupid fish, should have dumped\n"
	.string "him a while ago!$"

Deepcloudforest_Text_Grunt1Intro::
# 336 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Chopping down these ancient trees is\n"
	.string "hard work. You better not get in my way!$"

Deepcloudforest_Text_Grunt1Defeated::
# 340 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "I'm too tired from all this woodcutting\n"
	.string "to battle properly...$"

Deepcloudforest_Text_Grunt1PostBattle::
# 344 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "We have orders to clear this whole area.\n"
	.string "There is something buried here that\l"
	.string "needs to see the light of day.$"

Deepcloudforest_Text_Grunt2Intro::
# 355 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "My equipment is going crazy! There is a\n"
	.string "massive magnetic signal nearby.$"

Deepcloudforest_Text_Grunt2Defeated::
# 359 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "My equipment!\n"
	.string "You made me drop my scanner!$"

Deepcloudforest_Text_Grunt2PostBattle::
# 363 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "The readings aren't coming from a\n"
	.string "normal Pokémon. It feels like living\l"
	.string "metal is sleeping beneath this gorge.$"

Deepcloudforest_Text_Grunt3Intro::
# 374 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "This gorge is off-limits by order of the\n"
	.string "Faculty. Turn back now, kid!$"

Deepcloudforest_Text_Grunt3Defeated::
# 378 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Alert!\n"
	.string "We have an intruder!$"

Deepcloudforest_Text_Grunt3PostBattle::
# 382 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "We believe there is a sealed chamber\n"
	.string "hidden in these rock walls. We just need\l"
	.string "to find the right door.$"

Deepcloudforest_Text_Grunt4Intro::
# 393 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Do you know how old this forest is? Not\n"
	.string "as old as the thing we are looking for.$"

Deepcloudforest_Text_Grunt4Defeated::
# 397 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "History repeats itself... Defeated\n"
	.string "again.$"

Deepcloudforest_Text_Grunt4PostBattle::
# 401 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Legend says an ancient golem was\n"
	.string "locked away here ages ago. The Faculty\l"
	.string "will harness its power!$"
