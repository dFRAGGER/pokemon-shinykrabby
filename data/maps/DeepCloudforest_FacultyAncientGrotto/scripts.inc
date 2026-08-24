DeepCloudforest_FacultyAncientGrotto_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DeepCloudforest_FacultyAncientGrotto_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DeepCloudforest_FacultyAncientGrotto_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 5, DeepCloudForest_AncientGrotto_GetOutTruck
	.2byte 0


DeepCloudForest_AncientGrotto_GetOutTruck::
	lock
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_0
	waitmovement
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 6
	applymovement 14, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_1
	delay 60
	playse SE_PIN
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_2
	waitmovement
	delay 40
	playse SE_PIN
	applymovement 14, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3
	waitmovement
	delay 60
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 40
	applymovement 14, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_4
	waitmovement
	delay 60
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_5
	waitmovement
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_6
	waitmovement
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_1
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_2, MSGBOX_AUTOCLOSE
	setflag FLAG_ANCIENTGROTTO_BOARD_SHIP
	delay 40
	applymovement 3, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7
	applymovement 5, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7
	applymovement 4, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7
	applymovement 12, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7
	applymovement 6, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7
	applymovement 11, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7
	applymovement 13, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7
	waitmovement
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_8
	applymovement 9, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9
	applymovement 8, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_8
	applymovement 10, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_8
	waitmovement
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_3
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_10
	playse SE_PIN
	applymovement 6, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_11
	waitmovement
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_12
	applymovement 12, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13
	applymovement 11, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13
	applymovement 13, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13
	applymovement 3, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13
	applymovement 5, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13
	applymovement 4, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13
	waitmovement
	applymovement 6, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_14
	waitmovement
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_1
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_5, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 8, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_15
	delay 40
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_6
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_7, MSGBOX_AUTOCLOSE
	delay 60
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_16
	waitmovement
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_1
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_8, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_PIN
	applymovement 9, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_17
	waitmovement
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_3
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_9, MSGBOX_AUTOCLOSE
	delay 40
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18
	delay 60
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13
	waitmessage
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_1
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_10, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 10, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_19
	waitmovement
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_11
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_12, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_20
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_1
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_13, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_1
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_14, MSGBOX_AUTOCLOSE
	setflag FLAG_ANCIENTGROTTO_DISAPPEAR_SHIP
	delay 40
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_11
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_15, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_BANG
	fadescreenswapbuffers FADE_TO_WHITE
	removeobject 12
	removeobject 7
	removeobject 6
	removeobject 13
	removeobject 11
	removeobject 3
	removeobject 4
	removeobject 5
	delay 60
	fadescreenswapbuffers FADE_FROM_WHITE
	applymovement OBJ_EVENT_ID_CAMERA, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_1
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_21
	applymovement 9, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_21
	applymovement 10, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_21
	applymovement 8, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_21
	waitmovement
	applymovement 2, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_22
	special RemoveCameraObject
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_3
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_16, MSGBOX_AUTOCLOSE
	delay 120
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_3
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_17, MSGBOX_AUTOCLOSE
	waitmessage
	clearflag FLAG_DAVID_TRUCK
	fadescreen FADE_TO_BLACK
	delay 40
	playse SE_TRUCK_DOOR
	warpsilent MAP_INSIDE_OF_TRUCK, 1
	waitstate
	release
	return


DeepCloudForest_AncientGrotto_GetOutTruck_Movement_0:
	jump_right
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_1:
	walk_left
	walk_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_2:
	emote_question_mark
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_3:
	walk_fast_down
	walk_fast_left
	walk_fast_left
	emote_question_mark
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_4:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_5:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_6:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_8:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	emote_exclamation_mark
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_10:
	walk_right
	walk_right
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_11:
	emote_exclamation_mark
	walk_slow_right
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_12:
	jump_right
	face_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13:
	face_right
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_14:
	walk_slow_left
	face_right
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_15:
	walk_down
	face_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_16:
	walk_down
	walk_down
	face_right
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_17:
	emote_exclamation_mark
	walk_fast_left
	walk_fast_down
	walk_fast_down
	face_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18:
	face_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_19:
	emote_exclamation_mark
	walk_fast_left
	walk_fast_left
	face_down
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_20:
	face_up
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_21:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_22:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Text_0:
	.string "What even was that?\p"
	.string "...maybe my eyes decieved me...\p"
	.string "...\p"
	.string "The others need me, wake up!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_1:
	.string "THE RECTOR$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_2:
	.string "Allright teachers, to make a long story\n"
	.string "short, force the golem on the ship and\l"
	.string "lets get out of here.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_3:
	.string "DAAN$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_4:
	.string "HEY!\n"
	.string "WHAT ARE YOU GUYS DOING?$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_5:
	.string "Impressive!\p"
	.string "How did you guys find us that quickly?$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_6:
	.string "DAVID$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_7:
	.string "That energy...\p"
	.string "the pressure...\p"
	.string "It's the 'Silent Guardian'...\p"
	.string "It's exactly what the legends\n"
	.string "described.\n"
	.string "They actually did it.\p"
	.string "They have Registeel.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_8:
	.string "Look at you, young man.\p"
	.string "You seem to be an intelligent kid.\p"
	.string "Why don't you join the faculty?\p"
	.string "At the faculty we Push Boundaries,\n"
	.string "Develop Talent and Inspire!!\p"
	.string "You would be the perfect fit!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_9:
	.string "Don't talk to him, you fool!\p"
	.string "Free Registeel, he belongs in this\n"
	.string "forest!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_10:
	.string "Unfortunately, I can't do that.\p"
	.string "Our plan is bigger than this chaotic\n"
	.string "forest.\p"
	.string "He is a necessary piece to bring order\n"
	.string "to this world.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_11:
	.string "NASH$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_12:
	.string "What do you mean?$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_13:
	.string "You will see my friend, you will see.\p"
	.string "Teachers, lets get out of here.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_14:
	.string "ELECTABUZZ, FLASH!!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_15:
	.string "Goddamn, not again...\n"
	.string "I should have brought my sunglasses...$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_16:
	.string "We can't catch them...$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_17:
	.string "Lets get back to the research station,\n"
	.string "it's getting dark.$"
