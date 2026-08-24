DeepCloudForest_FacultyGorge_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DeepCloudForest_FacultyGorge_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DeepCloudForest_FacultyGorge_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DeepCloudForest_FacultyGorge_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call DeepCloudforest_Healspot_OnTransition
	return

DeepCloudForest_FacultyGorge_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 1, DeepCloudForest_FacultyGorge_GetOutTruck
	.2byte 0


DeepCloudforest_Healspot_OnTransition::
	setrespawn HEAL_LOCATION_DEEP_CLOUD_FOREST_FACULTY_GORGE
	end


DeepCloudForest_FacultyGorge_David_Dialogue::
	lock
	faceplayer
	setspeaker DeepCloudForest_FacultyGorge_David_Dialogue_Text_0
	msgbox DeepCloudForest_FacultyGorge_David_Dialogue_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


DeepCloudForest_FacultyGorge_GetOutTruck::
	lock
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_0
	waitmovement
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 2
	delay 60
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_1
	waitmovement
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_2
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	applymovement 7, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
	waitmovement
	setspeaker DeepCloudForest_FacultyGorge_David_Dialogue_Text_0
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_4
	waitmovement
	special RemoveCameraObject
	delay 60
	playse SE_PIN
	applymovement 7, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_5
	waitmovement
	setspeaker DeepCloudForest_FacultyGorge_David_Dialogue_Text_0
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 7, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_6
	waitmovement
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_4, MSGBOX_AUTOCLOSE
	applymovement 6, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_6
	waitmovement
	applymovement 16, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_6
	waitmovement
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_7
	waitmovement
	setflag FLAG_FACULTY_GORGE_NASH1
	special SpawnCameraObject
	playse MUS_AQUA_MAGMA_HIDEOUT
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_8
	waitmovement
	clearflag FLAG_FACULTY_GORGE_NASH2
	clearflag FLAG_DAVID_TRUCK
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_5
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_6, MSGBOX_AUTOCLOSE
	waitmessage
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_7
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_8, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_PIN
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_9
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_9
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_10, MSGBOX_AUTOCLOSE
	waitmessage
	delay 40
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_9
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_11, MSGBOX_AUTOCLOSE
	waitmessage
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_5
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_12, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_PIN
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_9
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_13, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 3, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_12
	applymovement 1, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_12
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_14
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_15, MSGBOX_AUTOCLOSE
	waitmessage
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_5
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_16, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_M_HEADBUTT
	applymovement 14, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_13
	waitmovement
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_14
	waitmovement
	special RemoveCameraObject
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
	applymovement 17, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
	waitmovement
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
	msgbox DeepCloudForest_FacultyGorge_GetOutTruck_Text_17, MSGBOX_AUTOCLOSE
	applymovement 17, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_15
	applymovement 18, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_16
	applymovement 19, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_17
	waitmovement
	setflag FLAG_FACULTY_GORGE_NASH2
	removeobject 18
	removeobject 19
	waitmovement
	release
	return


DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts::
	lock
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_2
	waitmovement
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
	msgbox DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_0
	waitmessage
	playse SE_M_BITE
	applymovement 23, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_0
	waitmovement
	applymovement 22, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
	waitmovement
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
	msgbox DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 22, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_15
	waitmovement
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_2
	waitmovement
	special RemoveCameraObject
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 3
	release
	return


DeepCloudForest_FacultyGorge_Daan_Rescue_Start::
	lock
	clearflag FLAG_FACULTY_GORGE_NASH1
	special SpawnCameraObject
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	addobject 26
	addobject 27
	addobject 28
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_0
	waitmovement
	compare VAR_TEMP_0, 24
	goto_if_eq DeepCloudForest_FacultyGorge_Daan_Rescue_Start_2
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_1:
	compare VAR_TEMP_0, 25
	goto_if_eq DeepCloudForest_FacultyGorge_Daan_Rescue_Start_5
DeepCloudForest_FacultyGorge_Daan_Rescue_Start_4:
	playse SE_PIN
	applymovement 5, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_5
	waitmovement
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_5
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	delay 40
	playse SE_PIN
	applymovement 4, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_5
	applymovement 13, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_6
	applymovement 3, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_7
	applymovement 1, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_8
	playse SE_PIN
	applymovement 2, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_9
	applymovement 12, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_10
	waitmovement
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_9
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 2, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
	waitmovement
	delay 40
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_15
	waitmovement
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_11
	waitmovement
	special RemoveCameraObject
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_9
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 2, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_12
	applymovement 12, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_12
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_0
	waitmovement
	applymovement 26, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_13
	applymovement 27, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_14
	applymovement 5, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
	applymovement 3, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_15
	applymovement 1, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_16
	applymovement 4, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_15
	applymovement 13, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_17
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
	waitmovement
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_9
	msgbox DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_3
	waitmessage
	trainerbattle_no_intro TRAINER_BARRY_DEEPCLOUDFOREST, Deepcloudforest_Barry_Defeattext
	goto Deepcloudforest_Barry_Defeated
	return

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_2:
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
	applymovement 26, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_1
	applymovement 27, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_2
	waitmovement
	applymovement 28, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3
	waitmovement
	goto DeepCloudForest_FacultyGorge_Daan_Rescue_Start_1

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_5:
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_4
	applymovement 26, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_1
	applymovement 27, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_2
	waitmovement
	applymovement 28, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3
	waitmovement
	goto DeepCloudForest_FacultyGorge_Daan_Rescue_Start_4


Deepcloudforest_Barry_Defeated::
	lock
	applymovement 2, Deepcloudforest_Barry_Defeated_Movement_0
	applymovement 12, Deepcloudforest_Barry_Defeated_Movement_0
	applymovement 3, Deepcloudforest_Barry_Defeated_Movement_0
	applymovement 1, Deepcloudforest_Barry_Defeated_Movement_0
	applymovement 4, Deepcloudforest_Barry_Defeated_Movement_0
	applymovement 13, Deepcloudforest_Barry_Defeated_Movement_0
	waitmovement
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_9
	msgbox Deepcloudforest_Barry_Defeated_Text_0
	waitmessage
	playse SE_PIN
	applymovement 4, Deepcloudforest_Barry_Defeated_Movement_1
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_7
	msgbox Deepcloudforest_Barry_Defeated_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_PIN
	applymovement 5, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_5
	msgbox Deepcloudforest_Barry_Defeated_Text_2, MSGBOX_AUTOCLOSE
	delay 60
	playse SE_POKENAV_CALL
	delay 60
	playse SE_PIN
	applymovement 4, Deepcloudforest_Barry_Defeated_Movement_2
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_7
	msgbox Deepcloudforest_Barry_Defeated_Text_3
	waitmessage
	applymovement 4, Deepcloudforest_Barry_Defeated_Movement_3
	setspeaker Deepcloudforest_Barry_Defeated_Text_4
	msgbox Deepcloudforest_Barry_Defeated_Text_5, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_POKENAV_HANG_UP
	applymovement 4, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_6
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_7
	msgbox Deepcloudforest_Barry_Defeated_Text_6, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3
	playse SE_PIN
	applymovement 2, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_9
	msgbox Deepcloudforest_Barry_Defeated_Text_7, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_BALL_THROW
	delay 40
	playse SE_PIN
	applymovement 26, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
	msgbox Deepcloudforest_Barry_Defeated_Text_8, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_BANG
	fadescreenswapbuffers FADE_TO_WHITE
	setflag FLAG_RESCUED_DAAN
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 4
	removeobject 4
	removeobject 2
	removeobject 3
	removeobject 1
	removeobject 13
	removeobject 12
	delay 60
	fadescreenswapbuffers FADE_FROM_WHITE
	delay 120
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
	applymovement 5, Deepcloudforest_Barry_Defeated_Movement_4
	waitmovement
	special SpawnCameraObject
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_5
	msgbox Deepcloudforest_Barry_Defeated_Text_9, MSGBOX_AUTOCLOSE
	waitmessage
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
	msgbox Deepcloudforest_Barry_Defeated_Text_10, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 26, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
	applymovement 14, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
	applymovement 27, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
	applymovement 5, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
	applymovement LOCALID_PLAYER, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10
	applymovement OBJ_EVENT_ID_CAMERA, Deepcloudforest_Barry_Defeated_Movement_5
	waitmovement
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_0
	msgbox Deepcloudforest_Barry_Defeated_Text_11, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_PIN
	applymovement 28, DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11
	setspeaker DeepCloudForest_FacultyGorge_David_Dialogue_Text_0
	msgbox Deepcloudforest_Barry_Defeated_Text_12, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	applymovement 5, Deepcloudforest_Barry_Defeated_Movement_6
	waitmovement
	applymovement 26, DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1
	setspeaker DeepCloudForest_FacultyGorge_GetOutTruck_Text_5
	msgbox Deepcloudforest_Barry_Defeated_Text_13
	waitmessage
	setflag FLAG_DAAN_NASH_TRUCK
	setvar VAR_MISTCITY_STATE, 1
	clearflag FLAG_FACULTY_SYMPATHIZERS_1
	fadescreen FADE_TO_BLACK
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3
	waitmovement
	special RemoveCameraObject
	playse SE_TRUCK_DOOR
	warpsilent MAP_INSIDE_OF_TRUCK, 1
	waitstate
	release
	return


Deepcloudforest_Trainer_Grunt1::
	trainerbattle_single TRAINER_GRUNT_FACULTY_CLOUDFOREST_1, Deepcloudforest_Text_Grunt1Intro, Deepcloudforest_Text_Grunt1Defeated
	msgbox Deepcloudforest_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


Deepcloudforest_Trainer_Grunt2::
	trainerbattle_single TRAINER_GRUNT_FACULTY_CLOUDFOREST_2, Deepcloudforest_Text_Grunt2Intro, Deepcloudforest_Text_Grunt2Defeated
	msgbox Deepcloudforest_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


Deepcloudforest_Trainer_Grunt3::
	trainerbattle_single TRAINER_GRUNT_FACULTY_CLOUDFOREST_3, Deepcloudforest_Text_Grunt3Intro, Deepcloudforest_Text_Grunt3Defeated
	msgbox Deepcloudforest_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


Deepcloudforest_Trainer_Grunt4::
	trainerbattle_single TRAINER_GRUNT_FACULTY_CLOUDFOREST_4, Deepcloudforest_Text_Grunt4Intro, Deepcloudforest_Text_Grunt4Defeated
	msgbox Deepcloudforest_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end


Deepcloudforest_Gorge_Goback::
	lock
	msgbox Deepcloudforest_Gorge_Goback_Text_0
	waitmessage
	applymovement LOCALID_PLAYER, Deepcloudforest_Gorge_Goback_Movement_0
	waitmovement
	release
	return


DeepCloudForest_FacultyGorge_GetOutTruck_Movement_0:
	jump_right
	face_down
	step_end

DeepCloudForest_FacultyGorge_GetOutTruck_Movement_1:
	walk_down
	walk_down
	step_end

DeepCloudForest_FacultyGorge_GetOutTruck_Movement_2:
	walk_down
	walk_down
	walk_down
	step_end

DeepCloudForest_FacultyGorge_GetOutTruck_Movement_3:
	face_left
	step_end

DeepCloudForest_FacultyGorge_GetOutTruck_Movement_4:
	walk_up
	walk_up
	walk_up
	step_end

DeepCloudForest_FacultyGorge_GetOutTruck_Movement_5:
	emote_exclamation_mark
	face_down
	step_end

DeepCloudForest_FacultyGorge_GetOutTruck_Movement_6:
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

DeepCloudForest_FacultyGorge_GetOutTruck_Movement_7:
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

DeepCloudForest_FacultyGorge_GetOutTruck_Movement_8:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	step_end

DeepCloudForest_FacultyGorge_GetOutTruck_Movement_9:
	emote_exclamation_mark
	face_up
	step_end

DeepCloudForest_FacultyGorge_GetOutTruck_Movement_10:
	face_right
	step_end

DeepCloudForest_FacultyGorge_GetOutTruck_Movement_11:
	emote_exclamation_mark
	step_end

DeepCloudForest_FacultyGorge_GetOutTruck_Movement_12:
	walk_right
	step_end

DeepCloudForest_FacultyGorge_GetOutTruck_Movement_13:
	jump_left
	step_end

DeepCloudForest_FacultyGorge_GetOutTruck_Movement_14:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DeepCloudForest_FacultyGorge_GetOutTruck_Movement_15:
	face_down
	step_end

DeepCloudForest_FacultyGorge_GetOutTruck_Movement_16:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

DeepCloudForest_FacultyGorge_GetOutTruck_Movement_17:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_0:
	jump_down
	step_end

DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_1:
	face_up
	step_end

DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Movement_2:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_0:
	walk_up
	step_end

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_1:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_up
	step_end

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_2:
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_up
	walk_up
	step_end

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_3:
	walk_left
	walk_left
	walk_left
	step_end

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_4:
	walk_left
	face_up
	step_end

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_5:
	emote_question_mark
	face_down
	walk_up
	walk_right
	walk_right
	walk_right
	face_down
	step_end

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_6:
	walk_right
	walk_right
	face_down
	step_end

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_7:
	emote_question_mark
	walk_up
	walk_up
	walk_right
	walk_right
	face_down
	step_end

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_8:
	walk_up
	face_down
	step_end

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_9:
	emote_exclamation_mark
	walk_diag_southeast
	walk_right
	face_down
	step_end

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_10:
	walk_down
	walk_right
	face_down
	step_end

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_11:
	walk_down
	step_end

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_12:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	face_right
	step_end

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_13:
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	face_left
	step_end

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_14:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	face_left
	step_end

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_15:
	walk_left
	walk_down
	walk_down
	face_right
	step_end

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_16:
	walk_down
	face_right
	step_end

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Movement_17:
	walk_left
	walk_down
	face_right
	step_end

Deepcloudforest_Barry_Defeated_Movement_0:
	jump_left
	face_right
	step_end

Deepcloudforest_Barry_Defeated_Movement_1:
	emote_exclamation_mark
	walk_fast_left
	walk_fast_left
	face_down
	step_end

Deepcloudforest_Barry_Defeated_Movement_2:
	walk_up
	emote_question_mark
	step_end

Deepcloudforest_Barry_Defeated_Movement_3:
	walk_right
	walk_right
	step_end

Deepcloudforest_Barry_Defeated_Movement_4:
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	face_down
	step_end

Deepcloudforest_Barry_Defeated_Movement_5:
	walk_right
	walk_right
	walk_right
	step_end

Deepcloudforest_Barry_Defeated_Movement_6:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	face_down
	step_end

Deepcloudforest_Gorge_Goback_Movement_0:
	walk_left
	step_end

DeepCloudForest_FacultyGorge_David_Dialogue_Text_0:
	.string "DAVID$"

DeepCloudForest_FacultyGorge_David_Dialogue_Text_1:
	.string "Daan charged in there to fight the\n"
	.string "Faculty, but I... I freeze up every time\l"
	.string "I hear the buzzing of a Beedrill.\p"
	.string "I'll just guard the entrance, you go\n"
	.string "ahead and help him before I pass out\l"
	.string "from the stress.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_0:
	.string "NASH$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_1:
	.string "By Arceus... This is a massacre.\p"
	.string "This isn't the usual logging activities\n"
	.string "we see.\p"
	.string "All the trees have been completely\n"
	.string "uprooted and removed.\p"
	.string "Looks like somebody is looking for\n"
	.string "something they can't find.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_2:
	.string "The signal... it's deafening here.\p"
	.string "All this random destruction is creating\n"
	.string "so much chaotic energy...\p"
	.string "But the Faculty's frequency...\p"
	.string "...the clean, repeating pattern...\p"
	.string "...it's close. Very close.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_3:
	.string "That way! Just over that ridge!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_4:
	.string "Alright, team, let's move! Stay sharp!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_5:
	.string "DAAN$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_6:
	.string "...and I won't let you touch these trees!\p"
	.string "This forest is alive! It has a right to\n"
	.string "exist!\p"
	.string "Can't you see it's not just plants\n"
	.string "standing in your way? We depend on\l"
	.string "every single one of them!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_7:
	.string "JOS VANDERLOO$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_8:
	.string "Analysis: Subject is displaying\n"
	.string "irrational, sentimental attachment to\l"
	.string "non-productive biomass.\p"
	.string "His methods are inefficient.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_9:
	.string "BARRY$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_10:
	.string "Shut up Jos! I've got this.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_11:
	.string "...Listen to yourself, Daan!\p"
	.string "You're clinging to this messy,\n"
	.string "inefficient past.\p"
	.string "The Faculty offers a real path to\n"
	.string "strength!\p"
	.string "A structured path! Something you and\n"
	.string "your 'friends' would never understand.$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_12:
	.string "Strength? You call this strength?!\p"
	.string "Tearing down something that's taken a\n"
	.string "thousand years to grow?\p"
	.string "You're a coward, Barry, hiding behind\n"
	.string "their machines!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_13:
	.string "STOP CALLING ME BARRY, MY NAME IS\n"
	.string "WOUTER YOU IDIOT!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_14:
	.string "TON CROSS$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_15:
	.string "Hey! Show some respect for the Junior\n"
	.string "Administrator!\p"
	.string "Why don't you and your tree-hugging\n"
	.string "Pokémon just give it up?$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_16:
	.string "NEVER!!\p"
	.string "VENUSAUR, HEADBUTT!$"

DeepCloudForest_FacultyGorge_GetOutTruck_Text_17:
	.string "There he is.\p"
	.string "Holding off two grunts and their leader.\p"
	.string "DAVID, stay back and monitor that\n"
	.string "device.\p"
	.string "{PLAYER}, looks like DAAN could use some\n"
	.string "help.\p"
	.string "I'll take the lead, follow me!$"

DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_0:
	.string "ARCANINE, BITE!$"

DeepCloudForest_FacultyGorge_Nash_Holds_2Grunts_Text_1:
	.string "{PLAYER}, apparently there are more\n"
	.string "grunts here.\p"
	.string "I'll hold these two off for now!\p"
	.string "I'll be right behind you!$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_0:
	.string "NASH! I knew you'd come! You're just in\n"
	.string "time for a party.$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_1:
	.string "YOU!?\p"
	.string "Of course you'd show up to ruin\n"
	.string "everything!\p"
	.string "I should have known you'd be involved in\n"
	.string "this chaos.$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_2:
	.string "Enough talk!\p"
	.string "Grunts, deal with the ranger and that\n"
	.string "tree hugger! {PLAYER} is mine!\p"
	.string "Let's show them the true meaning of\n"
	.string "order!$"

DeepCloudForest_FacultyGorge_Daan_Rescue_Start_Text_3:
	.string "Show me what you got dumb lab intern!$"

Deepcloudforest_Barry_Defeated_Text_0:
	.string "No... Impossible!\n"
	.string "Our strategy was flawless!\p"
	.string "The tactical analysis was perfect...\p"
	.string "The geological resonance scans were\n"
	.string "pinpoint accurate!\p"
	.string "How could we lose to a bunch of chaotic,\n"
	.string "sentimental...!$"

Deepcloudforest_Barry_Defeated_Text_1:
	.string "Administrator Barry... I mean Wouter!\n"
	.string "Cease communications at once!\p"
	.string "That information is classified.\n"
	.string "We are falling back.$"

Deepcloudforest_Barry_Defeated_Text_2:
	.string "Geological scans?\n"
	.string "What are you talking about, Barry?\p"
	.string "This was never just about cutting down\n"
	.string "trees, was it?\p"
	.string "What were you really looking for out\n"
	.string "here?$"

Deepcloudforest_Barry_Defeated_Text_3:
	.string "...\p"
	.string "Hello Boss...\p"
	.string "Yes...\p"
	.string "Understood...\p"
	.string "...You are on speaker right now!$"

Deepcloudforest_Barry_Defeated_Text_4:
	.string "?????$"

Deepcloudforest_Barry_Defeated_Text_5:
	.string ".....Well hello there children.\p"
	.string "This is THE RECTOR speaking.\p"
	.string "We have secured the Objective.\p"
	.string "The target, codename: SILENT GUARDIAN,\n"
	.string "is in our possession.\p"
	.string "I repeat, the Silent Guardian has been\n"
	.string "secured.\p"
	.string "MUAHAHAHAHA...$"

Deepcloudforest_Barry_Defeated_Text_6:
	.string "It seems your victory here is\n"
	.string "irrelevant.\p"
	.string "While you were playing hero in the mud,\n"
	.string "our primary team accomplished the\l"
	.string "mission.\p"
	.string "This was merely a distraction.$"

Deepcloudforest_Barry_Defeated_Text_7:
	.string "That's right!\n"
	.string "You didn't win anything!\p"
	.string "The Faculty always thinks two steps\n"
	.string "ahead.\p"
	.string "You haven't stopped a thing!\p"
	.string "You've just proven how insignificant\n"
	.string "you really are!\p"
	.string "Catch this!$"

Deepcloudforest_Barry_Defeated_Text_8:
	.string "It's a flashbang! Don't let them get\n"
	.string "away!$"

Deepcloudforest_Barry_Defeated_Text_9:
	.string "The 'Silent Guardian'... that's what\n"
	.string "Elara called the legend!\p"
	.string "I think they found it!$"

Deepcloudforest_Barry_Defeated_Text_10:
	.string "They played us perfectly.$"

Deepcloudforest_Barry_Defeated_Text_11:
	.string "David! Can you track them?\p"
	.string "That comms signal, the new objective...\n"
	.string "anything!$"

Deepcloudforest_Barry_Defeated_Text_12:
	.string "I... I can't track them.\p"
	.string "But the objective... the 'Guardian'... the\n"
	.string "energy it's giving off is immense!\p"
	.string "It's overwhelming everything else!\p"
	.string "It's moving fast, heading west!$"

Deepcloudforest_Barry_Defeated_Text_13:
	.string "Nash! We have to go!\p"
	.string "We can't let them get away with a piece\n"
	.string "of this forest's soul!\p"
	.string "Lets get back to the truck!$"

Deepcloudforest_Gorge_Goback_Text_0:
	.string "This is not a time to flee {PLAYER}, DAAN\n"
	.string "is counting on us.$"

Deepcloudforest_Barry_Defeattext::
	.string "That stupid fish, should have dumped\n"
	.string "him a while ago!$"

Deepcloudforest_Text_Grunt1Intro::
	.string "Chopping down these ancient trees is\n"
	.string "hard work. You better not get in my way!$"

Deepcloudforest_Text_Grunt1Defeated::
	.string "I'm too tired from all this woodcutting\n"
	.string "to battle properly...$"

Deepcloudforest_Text_Grunt1PostBattle::
	.string "We have orders to clear this whole area.\n"
	.string "There is something buried here that\l"
	.string "needs to see the light of day.$"

Deepcloudforest_Text_Grunt2Intro::
	.string "My equipment is going crazy! There is a\n"
	.string "massive magnetic signal nearby.$"

Deepcloudforest_Text_Grunt2Defeated::
	.string "My equipment!\n"
	.string "You made me drop my scanner!$"

Deepcloudforest_Text_Grunt2PostBattle::
	.string "The readings aren't coming from a\n"
	.string "normal Pokémon. It feels like living\l"
	.string "metal is sleeping beneath this gorge.$"

Deepcloudforest_Text_Grunt3Intro::
	.string "This gorge is off-limits by order of the\n"
	.string "Faculty. Turn back now, kid!$"

Deepcloudforest_Text_Grunt3Defeated::
	.string "Alert!\n"
	.string "We have an intruder!$"

Deepcloudforest_Text_Grunt3PostBattle::
	.string "We believe there is a sealed chamber\n"
	.string "hidden in these rock walls. We just need\l"
	.string "to find the right door.$"

Deepcloudforest_Text_Grunt4Intro::
	.string "Do you know how old this forest is? Not\n"
	.string "as old as the thing we are looking for.$"

Deepcloudforest_Text_Grunt4Defeated::
	.string "History repeats itself... Defeated\n"
	.string "again.$"

Deepcloudforest_Text_Grunt4PostBattle::
	.string "Legend says an ancient golem was\n"
	.string "locked away here ages ago. The Faculty\l"
	.string "will harness its power!$"
