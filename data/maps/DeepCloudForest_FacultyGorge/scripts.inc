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
	special SpawnCameraObject
# 51 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_8
# 53 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 54 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setflag FLAG_FACULTY_GORGE_NASH1
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
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_6, MSGBOX_AUTOCLOSE
# 62 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 63 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_7, MSGBOX_AUTOCLOSE
# 64 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 65 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 66 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_9
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_8, MSGBOX_AUTOCLOSE
# 68 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 69 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_9, MSGBOX_AUTOCLOSE
# 70 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 71 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_10, MSGBOX_AUTOCLOSE
# 72 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 73 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_M_HEADBUTT
# 74 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 14, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
# 75 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11
# 77 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 78 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 79 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_12
# 80 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 18, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
# 81 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 82 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_11, MSGBOX_AUTOCLOSE
# 83 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 18, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_13
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 19, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_14
# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 20, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_15
# 86 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 87 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setflag FLAG_FACULTY_GORGE_NASH2
# 88 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 19
# 89 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 20
# 90 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 91 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	release
	return


DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts::
# 95 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 96 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special SpawnCameraObject
# 97 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_2
# 98 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 99 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_0
# 100 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 101 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_M_BITE
# 102 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 24, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_0
# 103 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 104 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 23, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
# 105 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_1, MSGBOX_AUTOCLOSE
# 107 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 108 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 23, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_13
# 109 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 110 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_2
# 111 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 112 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special RemoveCameraObject
# 113 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 3
# 114 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	release
	return


DeepCloudForest_FacultyGorge_Daan_Rescue_Start::
# 118 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 119 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	clearflag FLAG_FACULTY_GORGE_NASH1
# 120 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	special SpawnCameraObject
# 121 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 122 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	addobject 27
# 123 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	addobject 28
# 124 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	addobject 29
# 125 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_0
# 126 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 127 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	compare VAR_TEMP_0, 24
	goto_if_eq DeepCloudForest_FacultyGorge_Daan_Rescue_Start_2
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_1:
# 134 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	compare VAR_TEMP_0, 25
	goto_if_eq DeepCloudForest_FacultyGorge_Daan_Rescue_Start_5
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_4:
# 142 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 143 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 5, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_5
# 144 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 145 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_0, MSGBOX_AUTOCLOSE
# 146 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 147 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 40
# 148 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 149 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_5
# 150 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 13, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_6
# 151 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 3, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_7
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 1, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_8
# 153 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 154 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_9
# 155 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 12, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_10
# 156 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 157 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_1, MSGBOX_AUTOCLOSE
# 158 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 159 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
# 160 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 161 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 40
# 162 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_13
# 163 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 164 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_11
# 165 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 166 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_2, MSGBOX_AUTOCLOSE
# 167 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 168 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_12
# 169 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 12, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_12
# 170 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_0
# 171 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 172 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 27, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_13
# 173 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 28, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_14
# 174 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 5, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
# 175 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 3, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_15
# 176 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 1, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_16
# 177 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_15
# 178 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 13, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_17
# 179 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
# 180 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 181 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_3
# 182 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 183 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	trainerbattle_no_intro TRAINER_BARRY_DEEPCLOUDFOREST, Deepcloudforest_Barry_Defeattext
# 184 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	goto Deepcloudforest_Barry_Defeated
	return

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_2:
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 27, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_1
# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 28, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_2
# 130 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 131 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 29, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3
# 132 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
	goto DeepCloudForest_FacultyGorge_Daan_Rescue_Start_1

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_5:
# 135 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_4
# 136 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 27, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_1
# 137 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 28, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_2
# 138 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 139 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 29, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3
# 140 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
	goto DeepCloudForest_FacultyGorge_Daan_Rescue_Start_4


Deepcloudforest_Barry_Defeated::
# 193 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	lock
# 194 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 2, Deepcloudforest_Barry_Defeated_Movement_0
# 195 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 12, Deepcloudforest_Barry_Defeated_Movement_0
# 196 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 3, Deepcloudforest_Barry_Defeated_Movement_0
# 197 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 1, Deepcloudforest_Barry_Defeated_Movement_0
# 198 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 4, Deepcloudforest_Barry_Defeated_Movement_0
# 199 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 13, Deepcloudforest_Barry_Defeated_Movement_0
# 200 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmovement
# 201 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_0
# 202 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 203 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_1, MSGBOX_AUTOCLOSE
# 204 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 205 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_PIN
# 206 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	applymovement 5, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_9
# 207 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_2, MSGBOX_AUTOCLOSE
# 208 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 209 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_POKENAV_CALL
# 210 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 211 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_3
# 212 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 213 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_4, MSGBOX_AUTOCLOSE
# 214 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 215 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 216 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_5, MSGBOX_AUTOCLOSE
# 217 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 218 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_6, MSGBOX_AUTOCLOSE
# 219 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	waitmessage
# 220 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_BALL_THROW
# 221 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 40
# 222 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	playse SE_BANG
# 223 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	fadescreen FADE_TO_WHITE
# 224 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Barry_Defeated_Text_7, MSGBOX_AUTOCLOSE
# 225 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	setflag FLAG_RESCUED_DAAN
# 226 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 4
# 227 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 2
# 228 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 3
# 229 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 1
# 230 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 13
# 231 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	removeobject 12
# 232 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	delay 60
# 233 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 234 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	release
	return


Deepcloudforest_Trainer_Grunt1::
# 238 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FACULTY_CLOUDFOREST_1, Deepcloudforest_Text_Grunt1Intro, Deepcloudforest_Text_Grunt1Defeated
# 239 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


Deepcloudforest_Trainer_Grunt2::
# 256 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FACULTY_CLOUDFOREST_2, Deepcloudforest_Text_Grunt2Intro, Deepcloudforest_Text_Grunt2Defeated
# 257 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


Deepcloudforest_Trainer_Grunt3::
# 274 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FACULTY_CLOUDFOREST_3, Deepcloudforest_Text_Grunt3Intro, Deepcloudforest_Text_Grunt3Defeated
# 275 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


Deepcloudforest_Trainer_Grunt4::
# 292 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FACULTY_CLOUDFOREST_4, Deepcloudforest_Text_Grunt4Intro, Deepcloudforest_Text_Grunt4Defeated
# 293 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	msgbox Deepcloudforest_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end


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

# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_8:
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 52 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
	step_end

# 66 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_9:
# 66 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_exclamation_mark
	step_end

# 74 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10:
# 74 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	jump_left
	step_end

# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11:
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 76 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 79 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_12:
# 79 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 83 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_13:
# 83 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_14:
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 84 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
	step_end

# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_GetOutTruck_Movement_15:
# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 85 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
	step_end

# 102 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_0:
# 102 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	jump_down
	step_end

# 104 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1:
# 104 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_up
	step_end

# 110 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_2:
# 110 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 110 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 110 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 110 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 125 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_0:
# 125 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_1:
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 128 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
	step_end

# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_2:
# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 129 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
	step_end

# 131 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3:
# 131 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 131 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 131 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 131 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
	step_end

# 135 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_4:
# 135 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 135 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_up
	step_end

# 149 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_5:
# 149 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_question_mark
# 149 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
# 149 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 149 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 149 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 149 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 149 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 150 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_6:
# 150 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 150 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 150 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 151 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_7:
# 151 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_question_mark
# 151 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 151 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 151 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 151 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 151 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_8:
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_up
# 152 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 154 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_9:
# 154 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	emote_exclamation_mark
# 154 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_diag_southeast
# 154 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 154 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 155 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_10:
# 155 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 155 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_right
# 155 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_down
	step_end

# 164 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_11:
# 164 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
	step_end

# 168 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_12:
# 168 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 168 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 168 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 168 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_down
# 168 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 172 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_13:
# 172 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 172 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 172 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 172 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_right
# 172 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_left
	step_end

# 173 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_14:
# 173 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_left
# 173 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 173 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 173 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_fast_up
# 173 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_left
	step_end

# 175 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_15:
# 175 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 175 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 175 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 175 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 176 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_16:
# 176 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 176 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 178 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_17:
# 178 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_left
# 178 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	walk_down
# 178 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
	step_end

# 194 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
Deepcloudforest_Barry_Defeated_Movement_0:
# 194 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	jump_left
# 194 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	face_right
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
# 61 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Barry{COLOR DARK_GRAY}: Shut up! I've got this.\p"
	.string "...Listen to yourself, Daan!\p"
	.string "You're clinging to this messy,\n"
	.string "inefficient past.\p"
	.string "The Faculty offers a real path to\n"
	.string "strength!\p"
	.string "A structured path! Something you and\n"
	.string "your 'friends' would never understand.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_7:
# 63 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: Strength? You call this\n"
	.string "strength?!\p"
	.string "Tearing down something that's taken a\n"
	.string "thousand years to grow?\p"
	.string "You're a coward, Barry, hiding behind\n"
	.string "their machines!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_8:
# 67 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Barry{COLOR DARK_GRAY}: STOP CALLING ME BARRY, MY NAME\n"
	.string "IS WOUTER YOU IDIOT!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_9:
# 69 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR RED}Ton Cross{COLOR DARK_GRAY}: Hey! Show some respect for\n"
	.string "the Junior Administrator!\p"
	.string "Why don't you and your tree-hugging\n"
	.string "Pokémon just give it up?$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_10:
# 71 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: NEVER!!\p"
	.string "VENUSAUR, HEADBUTT!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_11:
# 82 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: There he is.\p"
	.string "Two grunts and their leader.\p"
	.string "David, stay back and monitor that\n"
	.string "device.\p"
	.string "{PLAYER}, looks like Daan could use\n"
	.string "some help.\p"
	.string "I'll take the lead, follow me!$"

DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_0:
# 99 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "ARCANINE, BITE!$"

DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_1:
# 106 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: {PLAYER}, apparently there are\n"
	.string "more grunts here.\p"
	.string "I'll hold these two off for now!\p"
	.string "I'll be right behind you!$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_0:
# 145 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: {PLAYER}! Nash! I knew you'd\n"
	.string "come! You're just in time for a party.$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_1:
# 157 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Barry{COLOR DARK_GRAY}: YOU!?\p"
	.string "Of course you'd show up to ruin\n"
	.string "everything!\p"
	.string "I should have known you'd be involved in\n"
	.string "this chaos.$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_2:
# 166 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Enough talk!\p"
	.string "Grunts, deal with the ranger and that\n"
	.string "tree hugger! {PLAYER} is mine!\p"
	.string "Let's show them the true meaning of\n"
	.string "order!$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_3:
# 181 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Barry{COLOR DARK_GRAY}: Show me what you got dumb lab\n"
	.string "intern!$"

Deepcloudforest_Barry_Defeated_Text_0:
# 201 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Barry{COLOR DARK_GRAY}: No... Impossible!\n"
	.string "Our strategy was flawless!\p"
	.string "The tactical analysis was perfect...\p"
	.string "The geological resonance scans were\n"
	.string "pinpoint accurate!\p"
	.string "How could we lose to a bunch of chaotic,\n"
	.string "sentimental...!$"

Deepcloudforest_Barry_Defeated_Text_1:
# 203 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR RED}Jos Vanderloo{COLOR DARK_GRAY}: Administrator Barry... I\n"
	.string "mean Wouter!\n"
	.string "Cease communications at once!\p"
	.string "That information is classified.\n"
	.string "We are falling back.$"

Deepcloudforest_Barry_Defeated_Text_2:
# 207 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: Geological scans?\n"
	.string "What are you talking about, Barry?\p"
	.string "This was never just about cutting down\n"
	.string "trees, was it?\p"
	.string "What were you really looking for out\n"
	.string "here?$"

Deepcloudforest_Barry_Defeated_Text_3:
# 211 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "...\p"
	.string "Hello Boss...\p"
	.string "Yes...\p"
	.string "Understood...\p"
	.string "...You are on speaker right now!$"

Deepcloudforest_Barry_Defeated_Text_4:
# 213 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "?????:...Well hello there children.\p"
	.string "This is the Rector speaking.\p"
	.string "We have secured the Objective.\p"
	.string "The target, codename: SILENT GUARDIAN,\n"
	.string "is in our possession.\p"
	.string "I repeat, the Silent Guardian has been\n"
	.string "secured.\p"
	.string "MUAHAHAHAHA...$"

Deepcloudforest_Barry_Defeated_Text_5:
# 216 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR RED}Jos Vanderloo{COLOR DARK_GRAY}: It seems your victory\n"
	.string "here is irrelevant.\p"
	.string "While you were playing hero in the mud,\n"
	.string "our primary team accomplished the\l"
	.string "mission.\p"
	.string "This was merely a distraction.$"

Deepcloudforest_Barry_Defeated_Text_6:
# 218 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Barry{COLOR DARK_GRAY}: That's right!\n"
	.string "You didn't win anything!\p"
	.string "The Faculty always thinks two steps\n"
	.string "ahead.\p"
	.string "You haven't stopped a thing!\p"
	.string "You've just proven how insignificant\n"
	.string "you really are!$"

Deepcloudforest_Barry_Defeated_Text_7:
# 224 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: It's a flashbang! Don't let them\n"
	.string "get away!$"

Deepcloudforest_Barry_Defeattext::
# 188 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "That stupid fish, should have dumped\n"
	.string "him a while ago!$"

Deepcloudforest_Text_Grunt1Intro::
# 243 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Chopping down these ancient trees is\n"
	.string "hard work. You better not get in my way!$"

Deepcloudforest_Text_Grunt1Defeated::
# 247 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "I'm too tired from all this woodcutting\n"
	.string "to battle properly...$"

Deepcloudforest_Text_Grunt1PostBattle::
# 251 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "We have orders to clear this whole area.\n"
	.string "There is something buried here that\l"
	.string "needs to see the light of day.$"

Deepcloudforest_Text_Grunt2Intro::
# 261 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "My equipment is going crazy! There is a\n"
	.string "massive magnetic signal nearby.$"

Deepcloudforest_Text_Grunt2Defeated::
# 265 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "My equipment!\n"
	.string "You made me drop my scanner!$"

Deepcloudforest_Text_Grunt2PostBattle::
# 269 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "The readings aren't coming from a\n"
	.string "normal Pokémon. It feels like living\l"
	.string "metal is sleeping beneath this gorge.$"

Deepcloudforest_Text_Grunt3Intro::
# 279 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "This gorge is off-limits by order of the\n"
	.string "Faculty. Turn back now, kid!$"

Deepcloudforest_Text_Grunt3Defeated::
# 283 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Alert!\n"
	.string "We have an intruder!$"

Deepcloudforest_Text_Grunt3PostBattle::
# 287 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "We believe there is a sealed chamber\n"
	.string "hidden in these rock walls. We just need\l"
	.string "to find the right door.$"

Deepcloudforest_Text_Grunt4Intro::
# 297 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Do you know how old this forest is? Not\n"
	.string "as old as the thing we are looking for.$"

Deepcloudforest_Text_Grunt4Defeated::
# 301 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "History repeats itself... Defeated\n"
	.string "again.$"

Deepcloudforest_Text_Grunt4PostBattle::
# 305 "data/maps/DeepCloudForest_FacultyGorge/scripts.pory"
	.string "Legend says an ancient golem was\n"
	.string "locked away here ages ago. The Faculty\l"
	.string "will harness its power!$"
