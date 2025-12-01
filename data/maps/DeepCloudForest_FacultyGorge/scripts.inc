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
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_0, MSGBOX_AUTOCLOSE
# 26 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 27 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 28 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 7, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
# 29 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 30 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_1, MSGBOX_AUTOCLOSE
# 31 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 32 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_4
# 33 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 34 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 35 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 36 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 37 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 7, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_5
# 38 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 39 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_2, MSGBOX_AUTOCLOSE
# 40 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 41 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 7, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_6
# 42 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 43 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_3, MSGBOX_AUTOCLOSE
# 44 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 6, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_6
# 45 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 46 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 16, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_6
# 47 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 48 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_7
# 49 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 50 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setflag FLAG_FACULTY_GORGE_NASH1
# 51 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special SpawnCameraObject
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_8
# 54 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 55 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	clearflag FLAG_FACULTY_GORGE_NASH2
# 56 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	clearflag FLAG_DAVID_TRUCK
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_4, MSGBOX_AUTOCLOSE
# 58 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 59 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_5, MSGBOX_AUTOCLOSE
# 60 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 61 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 62 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_9
# 63 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_6, MSGBOX_AUTOCLOSE
# 64 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 65 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 40
# 66 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_7, MSGBOX_AUTOCLOSE
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 69 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_8, MSGBOX_AUTOCLOSE
# 70 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 71 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 72 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11
# 73 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_9, MSGBOX_AUTOCLOSE
# 74 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 75 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 3, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_12
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 1, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_12
# 77 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_10, MSGBOX_AUTOCLOSE
# 78 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 79 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_11, MSGBOX_AUTOCLOSE
# 80 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 81 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_M_HEADBUTT
# 82 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 14, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_13
# 83 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_14
# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 86 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 87 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 88 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 17, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
# 89 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 90 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_12, MSGBOX_AUTOCLOSE
# 91 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 17, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_15
# 92 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 18, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_16
# 93 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 19, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_17
# 94 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 95 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setflag FLAG_FACULTY_GORGE_NASH2
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 18
# 97 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 19
# 98 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 99 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	release
	return


DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts::
# 103 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 104 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special SpawnCameraObject
# 105 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_2
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 107 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_0
# 108 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 109 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_M_BITE
# 110 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 23, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_0
# 111 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 112 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 22, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
# 113 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 114 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_1, MSGBOX_AUTOCLOSE
# 115 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 116 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 22, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_15
# 117 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 118 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_2
# 119 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 120 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 121 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 3
# 122 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	release
	return


DeepCloudForest_FacultyGorge_Daan_Rescue_Start::
# 126 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 127 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	clearflag FLAG_FACULTY_GORGE_NASH1
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special SpawnCameraObject
# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 130 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	addobject 26
# 131 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	addobject 27
# 132 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	addobject 28
# 133 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_0
# 134 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 135 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	compare VAR_TEMP_0, 24
	goto_if_eq DeepCloudForest_FacultyGorge_Daan_Rescue_Start_2
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_1:
# 143 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	compare VAR_TEMP_0, 25
	goto_if_eq DeepCloudForest_FacultyGorge_Daan_Rescue_Start_5
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_4:
# 151 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 5, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_5
# 153 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 154 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_0, MSGBOX_AUTOCLOSE
# 155 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 156 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 40
# 157 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 158 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_5
# 159 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 13, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_6
# 160 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 3, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_7
# 161 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 1, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_8
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_9
# 164 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 12, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_10
# 165 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 166 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_1, MSGBOX_AUTOCLOSE
# 167 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 168 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
# 169 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 170 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 40
# 171 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_15
# 172 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 173 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_11
# 174 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 175 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 176 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_2, MSGBOX_AUTOCLOSE
# 177 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 178 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_12
# 179 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 12, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_12
# 180 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_0
# 181 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 182 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 26, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_13
# 183 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 27, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_14
# 184 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 5, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
# 185 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 3, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_15
# 186 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 1, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_16
# 187 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_15
# 188 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 13, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_17
# 189 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
# 190 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 191 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_3
# 192 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 193 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	trainerbattle_no_intro TRAINER_BARRY_DEEPCLOUDFOREST, Deepcloudforest_Barry_Defeattext
# 194 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	goto Deepcloudforest_Barry_Defeated
	return

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_2:
# 136 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 26, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_1
# 138 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 27, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_2
# 139 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 140 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 28, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3
# 141 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
	goto DeepCloudForest_FacultyGorge_Daan_Rescue_Start_1

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_5:
# 144 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_4
# 145 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 26, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_1
# 146 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 27, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_2
# 147 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 148 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 28, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3
# 149 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
	goto DeepCloudForest_FacultyGorge_Daan_Rescue_Start_4


Deepcloudforest_Barry_Defeated::
# 203 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 204 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, Deepcloudforest_Barry_Defeated_Movement_0
# 205 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 12, Deepcloudforest_Barry_Defeated_Movement_0
# 206 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 3, Deepcloudforest_Barry_Defeated_Movement_0
# 207 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 1, Deepcloudforest_Barry_Defeated_Movement_0
# 208 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, Deepcloudforest_Barry_Defeated_Movement_0
# 209 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 13, Deepcloudforest_Barry_Defeated_Movement_0
# 210 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 211 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_0
# 212 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 213 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 214 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, Deepcloudforest_Barry_Defeated_Movement_1
# 215 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_1, MSGBOX_AUTOCLOSE
# 216 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 217 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 218 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 5, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11
# 219 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_2, MSGBOX_AUTOCLOSE
# 220 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 221 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_POKENAV_CALL
# 222 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 223 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 224 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, Deepcloudforest_Barry_Defeated_Movement_2
# 225 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_3
# 226 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 227 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, Deepcloudforest_Barry_Defeated_Movement_3
# 228 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_4, MSGBOX_AUTOCLOSE
# 229 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 230 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 231 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_5, MSGBOX_AUTOCLOSE
# 232 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 233 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 234 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11
# 235 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_6, MSGBOX_AUTOCLOSE
# 236 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 237 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_BALL_THROW
# 238 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 40
# 239 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_BANG
# 240 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	fadescreen FADE_TO_WHITE
# 241 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_7, MSGBOX_AUTOCLOSE
# 242 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setflag FLAG_RESCUED_DAAN
# 243 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 4
# 244 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 4
# 245 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 2
# 246 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 3
# 247 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 1
# 248 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 13
# 249 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 12
# 250 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 251 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 252 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 120
# 253 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
# 254 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 255 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special SpawnCameraObject
# 256 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_8, MSGBOX_AUTOCLOSE
# 257 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 258 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 26, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 259 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 14, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 260 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 27, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 261 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 5, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 262 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 263 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Deepcloudforest_Barry_Defeated_Movement_4
# 264 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 265 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_9, MSGBOX_AUTOCLOSE
# 266 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 267 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 268 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 28, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11
# 269 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_10, MSGBOX_AUTOCLOSE
# 270 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 271 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 272 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_11
# 273 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 274 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setflag FLAG_DAAN_NASH_TRUCK
# 275 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	fadescreen FADE_TO_BLACK
# 276 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3
# 277 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 278 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 279 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_TRUCK_DOOR
# 280 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	warpsilent MAP_INSIDE_OF_TRUCK, 1
# 281 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitstate
# 282 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	release
	return


Deepcloudforest_Trainer_Grunt1::
# 286 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FACULTY_CLOUDFOREST_1, Deepcloudforest_Text_Grunt1Intro, Deepcloudforest_Text_Grunt1Defeated
# 287 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


Deepcloudforest_Trainer_Grunt2::
# 304 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FACULTY_CLOUDFOREST_2, Deepcloudforest_Text_Grunt2Intro, Deepcloudforest_Text_Grunt2Defeated
# 305 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


Deepcloudforest_Trainer_Grunt3::
# 322 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FACULTY_CLOUDFOREST_3, Deepcloudforest_Text_Grunt3Intro, Deepcloudforest_Text_Grunt3Defeated
# 323 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


Deepcloudforest_Trainer_Grunt4::
# 340 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FACULTY_CLOUDFOREST_4, Deepcloudforest_Text_Grunt4Intro, Deepcloudforest_Text_Grunt4Defeated
# 341 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end


Deepcloudforest_Gorge_Goback::
# 358 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 359 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Gorge_Goback_Text_0
# 360 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 361 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, Deepcloudforest_Gorge_Goback_Movement_0
# 362 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 363 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
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

# 28 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3:
# 28 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_left
	step_end

# 32 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_4:
# 32 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 32 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 32 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 37 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_5:
# 37 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_exclamation_mark
# 37 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 41 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_6:
# 41 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 41 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 41 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 41 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 41 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 41 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 41 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 41 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 41 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
	step_end

# 48 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_7:
# 48 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 48 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 48 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 48 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 48 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 48 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 48 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 48 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 48 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 48 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
	step_end

# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_8:
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
	step_end

# 62 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_9:
# 62 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_exclamation_mark
# 62 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_up
	step_end

# 66 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10:
# 66 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 72 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11:
# 72 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_exclamation_mark
	step_end

# 75 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_12:
# 75 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
	step_end

# 82 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_13:
# 82 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	jump_left
	step_end

# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_14:
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 91 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_15:
# 91 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 92 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_16:
# 92 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 92 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 92 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 92 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 92 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 92 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 92 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 92 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 92 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 92 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 92 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 92 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 92 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 92 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
	step_end

# 93 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_17:
# 93 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 93 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 93 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 93 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 93 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 93 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 93 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 93 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 93 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 93 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 93 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 93 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 93 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
	step_end

# 110 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_0:
# 110 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	jump_down
	step_end

# 112 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1:
# 112 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_up
	step_end

# 118 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_2:
# 118 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 118 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 118 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 118 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 133 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_0:
# 133 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_1:
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
	step_end

# 138 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_2:
# 138 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 138 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 138 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 138 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 138 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 138 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 138 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 138 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 138 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 138 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 138 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 138 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 138 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 138 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 140 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3:
# 140 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 140 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 140 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
	step_end

# 144 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_4:
# 144 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 144 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_up
	step_end

# 158 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_5:
# 158 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_question_mark
# 158 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
# 158 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 158 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 158 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 158 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 158 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 159 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_6:
# 159 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 159 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 159 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 160 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_7:
# 160 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_question_mark
# 160 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 160 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 160 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 160 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 160 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 161 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_8:
# 161 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 161 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_9:
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_exclamation_mark
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_diag_southeast
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 164 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_10:
# 164 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 164 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 164 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 173 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_11:
# 173 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
	step_end

# 178 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_12:
# 178 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 178 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 178 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 178 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 178 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 182 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_13:
# 182 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 182 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 182 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 182 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 182 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_left
	step_end

# 183 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_14:
# 183 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 183 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 183 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 183 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 183 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_left
	step_end

# 185 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_15:
# 185 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 185 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 185 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 185 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 186 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_16:
# 186 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 186 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 188 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_17:
# 188 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 188 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 188 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 204 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
Deepcloudforest_Barry_Defeated_Movement_0:
# 204 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	jump_left
# 204 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 214 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
Deepcloudforest_Barry_Defeated_Movement_1:
# 214 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_exclamation_mark
# 214 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 214 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 214 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 224 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
Deepcloudforest_Barry_Defeated_Movement_2:
# 224 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 224 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_question_mark
	step_end

# 227 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
Deepcloudforest_Barry_Defeated_Movement_3:
# 227 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 227 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
	step_end

# 263 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
Deepcloudforest_Barry_Defeated_Movement_4:
# 263 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 263 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 263 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
	step_end

# 361 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
Deepcloudforest_Gorge_Goback_Movement_0:
# 361 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
	step_end

DeepCloudForest_FacultyGorge_GetOutTruck_Text_0:
# 25 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: By Arceus... This is a massacre.\p"
	.string "This isn't logging; it's somebody looking\n"
	.string "for something they can't find.\p"
	.string "They seem to be cutting these trees\n"
	.string "randomly, as if expecting to stumble\l"
	.string "upon what they're searching for with\l"
	.string "each swing of the axe.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_1:
# 30 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR GREEN}David{COLOR DARK_GRAY}: The signal... it's deafening here.\p"
	.string "All this random destruction is creating\n"
	.string "so much chaotic energy...\p"
	.string "But the Faculty's frequency...\p"
	.string "...the clean, repeating pattern...\p"
	.string "...it's close. Very close.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_2:
# 39 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "That way! Just over that ridge!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_3:
# 43 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Alright, team, let's move! Stay sharp!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_4:
# 57 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: ...and I won't let you touch these\n"
	.string "trees!\p"
	.string "This forest is alive! It has a right to\n"
	.string "exist!\p"
	.string "Can't you see it's not just plants\n"
	.string "standing in your way? We depend on\l"
	.string "every single one of them!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_5:
# 59 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR RED}Jos Vanderloo{COLOR DARK_GRAY}: Analysis: Subject is\n"
	.string "displaying irrational, sentimental\l"
	.string "attachment to non-productive biomass.\p"
	.string "His methods are inefficient.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_6:
# 63 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Barry{COLOR DARK_GRAY}: Shut up! I've got this.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_7:
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Barry{COLOR DARK_GRAY}: ...Listen to yourself, Daan!\p"
	.string "You're clinging to this messy,\n"
	.string "inefficient past.\p"
	.string "The Faculty offers a real path to\n"
	.string "strength!\p"
	.string "A structured path! Something you and\n"
	.string "your 'friends' would never understand.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_8:
# 69 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: Strength? You call this\n"
	.string "strength?!\p"
	.string "Tearing down something that's taken a\n"
	.string "thousand years to grow?\p"
	.string "You're a coward, Barry, hiding behind\n"
	.string "their machines!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_9:
# 73 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Barry{COLOR DARK_GRAY}: STOP CALLING ME BARRY, MY NAME\n"
	.string "IS WOUTER YOU IDIOT!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_10:
# 77 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR RED}Ton Cross{COLOR DARK_GRAY}: Hey! Show some respect for\n"
	.string "the Junior Administrator!\p"
	.string "Why don't you and your tree-hugging\n"
	.string "Pokémon just give it up?$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_11:
# 79 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: NEVER!!\p"
	.string "VENUSAUR, HEADBUTT!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_12:
# 90 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: There he is.\p"
	.string "Two grunts and their leader.\p"
	.string "David, stay back and monitor that\n"
	.string "device.\p"
	.string "{PLAYER}, looks like Daan could use\n"
	.string "some help.\p"
	.string "I'll take the lead, follow me!$"

DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_0:
# 107 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "ARCANINE, BITE!$"

DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_1:
# 114 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: {PLAYER}, apparently there are\n"
	.string "more grunts here.\p"
	.string "I'll hold these two off for now!\p"
	.string "I'll be right behind you!$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_0:
# 154 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: {PLAYER}! Nash! I knew you'd\n"
	.string "come! You're just in time for a party.$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_1:
# 166 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Barry{COLOR DARK_GRAY}: YOU!?\p"
	.string "Of course you'd show up to ruin\n"
	.string "everything!\p"
	.string "I should have known you'd be involved in\n"
	.string "this chaos.$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_2:
# 176 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Enough talk!\p"
	.string "Grunts, deal with the ranger and that\n"
	.string "tree hugger! {PLAYER} is mine!\p"
	.string "Let's show them the true meaning of\n"
	.string "order!$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_3:
# 191 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Barry{COLOR DARK_GRAY}: Show me what you got dumb lab\n"
	.string "intern!$"

Deepcloudforest_Barry_Defeated_Text_0:
# 211 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Barry{COLOR DARK_GRAY}: No... Impossible!\n"
	.string "Our strategy was flawless!\p"
	.string "The tactical analysis was perfect...\p"
	.string "The geological resonance scans were\n"
	.string "pinpoint accurate!\p"
	.string "How could we lose to a bunch of chaotic,\n"
	.string "sentimental...!$"

Deepcloudforest_Barry_Defeated_Text_1:
# 215 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR RED}Jos Vanderloo{COLOR DARK_GRAY}: Administrator Barry... I\n"
	.string "mean Wouter!\n"
	.string "Cease communications at once!\p"
	.string "That information is classified.\n"
	.string "We are falling back.$"

Deepcloudforest_Barry_Defeated_Text_2:
# 219 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: Geological scans?\n"
	.string "What are you talking about, Barry?\p"
	.string "This was never just about cutting down\n"
	.string "trees, was it?\p"
	.string "What were you really looking for out\n"
	.string "here?$"

Deepcloudforest_Barry_Defeated_Text_3:
# 225 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "...\p"
	.string "Hello Boss...\p"
	.string "Yes...\p"
	.string "Understood...\p"
	.string "...You are on speaker right now!$"

Deepcloudforest_Barry_Defeated_Text_4:
# 228 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "?????: .....Well hello there children.\p"
	.string "This is the Rector speaking.\p"
	.string "We have secured the Objective.\p"
	.string "The target, codename: SILENT GUARDIAN,\n"
	.string "is in our possession.\p"
	.string "I repeat, the Silent Guardian has been\n"
	.string "secured.\p"
	.string "MUAHAHAHAHA...$"

Deepcloudforest_Barry_Defeated_Text_5:
# 231 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR RED}Jos Vanderloo{COLOR DARK_GRAY}: It seems your victory\n"
	.string "here is irrelevant.\p"
	.string "While you were playing hero in the mud,\n"
	.string "our primary team accomplished the\l"
	.string "mission.\p"
	.string "This was merely a distraction.$"

Deepcloudforest_Barry_Defeated_Text_6:
# 235 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Barry{COLOR DARK_GRAY}: That's right!\n"
	.string "You didn't win anything!\p"
	.string "The Faculty always thinks two steps\n"
	.string "ahead.\p"
	.string "You haven't stopped a thing!\p"
	.string "You've just proven how insignificant\n"
	.string "you really are!\p"
	.string "Catch this!$"

Deepcloudforest_Barry_Defeated_Text_7:
# 241 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: It's a flashbang! Don't let them\n"
	.string "get away!$"

Deepcloudforest_Barry_Defeated_Text_8:
# 256 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: The 'Silent Guardian'... that's\n"
	.string "what Elara called the legend!\p"
	.string "They weren't just digging; they found\n"
	.string "it!$"

Deepcloudforest_Barry_Defeated_Text_9:
# 265 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: They played us perfectly.\n"
	.string "David! Can you track them?\p"
	.string "That comms signal, the new objective...\n"
	.string "anything!$"

Deepcloudforest_Barry_Defeated_Text_10:
# 269 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR RED}David{COLOR DARK_GRAY}: I... I can't track them.\p"
	.string "But the objective... the 'Guardian'... the\n"
	.string "energy it's giving off is immense!\p"
	.string "It's overwhelming everything else!\p"
	.string "It's moving fast, heading east!$"

Deepcloudforest_Barry_Defeated_Text_11:
# 272 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: We have to go!\p"
	.string "We can't let them get away with a piece\n"
	.string "of this forest's soul!\p"
	.string "Lets get back to the truck!$"

Deepcloudforest_Gorge_Goback_Text_0:
# 359 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "This is not a time to flee {PLAYER},\n"
	.string "Daan is counting on us.$"

Deepcloudforest_Barry_Defeattext::
# 198 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "That stupid fish, should have dumped\n"
	.string "him a while ago!$"

Deepcloudforest_Text_Grunt1Intro::
# 291 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Chopping down these ancient trees is\n"
	.string "hard work. You better not get in my way!$"

Deepcloudforest_Text_Grunt1Defeated::
# 295 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "I'm too tired from all this woodcutting\n"
	.string "to battle properly...$"

Deepcloudforest_Text_Grunt1PostBattle::
# 299 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "We have orders to clear this whole area.\n"
	.string "There is something buried here that\l"
	.string "needs to see the light of day.$"

Deepcloudforest_Text_Grunt2Intro::
# 309 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "My equipment is going crazy! There is a\n"
	.string "massive magnetic signal nearby.$"

Deepcloudforest_Text_Grunt2Defeated::
# 313 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "My equipment!\n"
	.string "You made me drop my scanner!$"

Deepcloudforest_Text_Grunt2PostBattle::
# 317 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "The readings aren't coming from a\n"
	.string "normal Pokémon. It feels like living\l"
	.string "metal is sleeping beneath this gorge.$"

Deepcloudforest_Text_Grunt3Intro::
# 327 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "This gorge is off-limits by order of the\n"
	.string "Faculty. Turn back now, kid!$"

Deepcloudforest_Text_Grunt3Defeated::
# 331 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Alert!\n"
	.string "We have an intruder!$"

Deepcloudforest_Text_Grunt3PostBattle::
# 335 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "We believe there is a sealed chamber\n"
	.string "hidden in these rock walls. We just need\l"
	.string "to find the right door.$"

Deepcloudforest_Text_Grunt4Intro::
# 345 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Do you know how old this forest is? Not\n"
	.string "as old as the thing we are looking for.$"

Deepcloudforest_Text_Grunt4Defeated::
# 349 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "History repeats itself... Defeated\n"
	.string "again.$"

Deepcloudforest_Text_Grunt4PostBattle::
# 353 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Legend says an ancient golem was\n"
	.string "locked away here ages ago. The Faculty\l"
	.string "will harness its power!$"
