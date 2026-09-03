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
	applymovement 6, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7
	applymovement 11, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_8
	waitmovement
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_1
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 5, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_0
	applymovement 4, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9
	applymovement 13, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_10
	waitmovement
	playse SE_M_EARTHQUAKE
	waitse
	fadescreen FADE_TO_BLACK
	delay 60
	setmetatile 22, 14, 0x35E, TRUE
	setmetatile 22, 15, 0x349, TRUE
	setmetatile 22, 16, 0x349, TRUE
	setmetatile 23, 13, 0x35E, TRUE
	setmetatile 23, 14, 0x395, TRUE
	setmetatile 23, 15, 0x339, TRUE
	setmetatile 23, 16, 0x339, TRUE
	setmetatile 23, 17, 0x393, TRUE
	setmetatile 24, 13, 0x334, TRUE
	setmetatile 24, 14, 0x394, TRUE
	setmetatile 24, 15, 0x339, TRUE
	setmetatile 24, 16, 0x339, TRUE
	setmetatile 24, 17, 0x339, TRUE
	setmetatile 24, 18, 0x34B, TRUE
	setmetatile 25, 14, 0x341, TRUE
	setmetatile 25, 15, 0x339, TRUE
	setmetatile 25, 16, 0x392, TRUE
	setmetatile 25, 17, 0x351, TRUE
	setmetatile 26, 14, 0x334, TRUE
	setmetatile 26, 15, 0x351, TRUE
	setmetatile 17, 12, 0x39A, FALSE
	setmetatile 17, 13, 0x3AA, FALSE
	setmetatile 17, 14, 0x3A2, FALSE
	setmetatile 18, 11, 0x3B0, FALSE
	setmetatile 18, 12, 0x3A8, TRUE
	setmetatile 18, 13, 0x3A0, TRUE
	setmetatile 18, 14, 0x3A5, FALSE
	setmetatile 18, 15, 0x3B2, FALSE
	setmetatile 19, 11, 0x3B1, FALSE
	setmetatile 19, 12, 0x3A9, TRUE
	setmetatile 19, 13, 0x3A1, TRUE
	setmetatile 19, 14, 0x3A6, FALSE
	setmetatile 19, 15, 0x3B3, FALSE
	setmetatile 20, 12, 0x39B, FALSE
	setmetatile 20, 13, 0x3AB, FALSE
	setmetatile 20, 14, 0x3A3, FALSE
	setmetatile 18, 18, 0x39A, FALSE
	setmetatile 18, 19, 0x3A4, FALSE
	setmetatile 18, 20, 0x3A2, FALSE
	setmetatile 19, 18, 0x398, TRUE
	setmetatile 19, 19, 0x3A0, TRUE
	setmetatile 19, 20, 0x3AD, TRUE
	setmetatile 19, 21, 0x3B2, FALSE
	setmetatile 20, 18, 0x399, TRUE
	setmetatile 20, 19, 0x3A1, TRUE
	setmetatile 20, 20, 0x3A6, FALSE
	setmetatile 20, 21, 0x3B3, FALSE
	setmetatile 21, 18, 0x39B, FALSE
	setmetatile 21, 19, 0x39D, FALSE
	setmetatile 21, 20, 0x3A3, FALSE
	setmetatile 21, 21, 0x39A, FALSE
	setmetatile 21, 22, 0x39C, FALSE
	setmetatile 22, 20, 0x383, FALSE
	setmetatile 22, 21, 0x396, FALSE
	setmetatile 22, 22, 0x3B3, FALSE
	setmetatile 23, 20, 0x384, FALSE
	setmetatile 23, 21, 0x37B, FALSE
	setmetatile 22, 9, 0x39A, FALSE
	setmetatile 22, 10, 0x3AA, FALSE
	setmetatile 22, 11, 0x39C, FALSE
	setmetatile 23, 9, 0x39F, TRUE
	setmetatile 23, 10, 0x397, TRUE
	setmetatile 23, 11, 0x3AC, FALSE
	setmetatile 24, 9, 0x39B, FALSE
	setmetatile 24, 10, 0x3AB, FALSE
	setmetatile 24, 11, 0x3A3, FALSE
	setmetatile 26, 9, 0x39A, FALSE
	setmetatile 26, 10, 0x3AA, FALSE
	setmetatile 26, 11, 0x3A2, FALSE
	setmetatile 27, 8, 0x3B0, FALSE
	setmetatile 27, 9, 0x3A8, TRUE
	setmetatile 27, 10, 0x3A0, TRUE
	setmetatile 27, 11, 0x3AD, TRUE
	setmetatile 27, 12, 0x3B2, FALSE
	setmetatile 28, 8, 0x3B1, FALSE
	setmetatile 28, 9, 0x3A9, TRUE
	setmetatile 28, 10, 0x3A1, TRUE
	setmetatile 28, 11, 0x3A6, FALSE
	setmetatile 28, 12, 0x3B4, FALSE
	setmetatile 28, 13, 0x3A4, FALSE
	setmetatile 28, 14, 0x39C, FALSE
	setmetatile 29, 9, 0x39B, FALSE
	setmetatile 29, 10, 0x3AB, FALSE
	setmetatile 29, 11, 0x3AF, FALSE
	setmetatile 29, 12, 0x372, FALSE
	setmetatile 29, 13, 0x396, TRUE
	setmetatile 29, 14, 0x3AC, FALSE
	setmetatile 30, 13, 0x3BC, FALSE
	setmetatile 30, 14, 0x3A3, FALSE
	setmetatile 28, 18, 0x39A, FALSE
	setmetatile 28, 19, 0x3AA, FALSE
	setmetatile 28, 20, 0x3A2, FALSE
	setmetatile 29, 18, 0x398, TRUE
	setmetatile 29, 19, 0x3A0, TRUE
	setmetatile 29, 20, 0x3A5, FALSE
	setmetatile 29, 21, 0x3B2, FALSE
	setmetatile 30, 17, 0x39A, FALSE
	setmetatile 30, 18, 0x38D, TRUE
	setmetatile 30, 19, 0x3A1, TRUE
	setmetatile 30, 20, 0x3AE, TRUE
	setmetatile 30, 21, 0x3B3, FALSE
	setmetatile 31, 17, 0x39B, FALSE
	setmetatile 31, 18, 0x39D, FALSE
	setmetatile 31, 19, 0x3AB, FALSE
	setmetatile 31, 20, 0x3A3, FALSE
	special DrawWholeMapView
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_4
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_5, MSGBOX_AUTOCLOSE
	delay 60
	fadescreen FADE_FROM_BLACK
	delay 120
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_11
	applymovement 9, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_12
	applymovement 8, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_11
	applymovement 10, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_11
	waitmovement
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_6
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_7, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13
	playse SE_PIN
	applymovement 6, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_14
	waitmovement
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_15
	applymovement 12, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_16
	applymovement 11, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_16
	applymovement 13, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_16
	applymovement 3, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_16
	applymovement 5, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_16
	applymovement 4, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_16
	waitmovement
	applymovement 6, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_17
	waitmovement
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_1
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_8, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 8, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18
	delay 40
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_9
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_10, MSGBOX_AUTOCLOSE
	delay 60
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_19
	waitmovement
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_1
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_11, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_PIN
	applymovement 9, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_20
	waitmovement
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_6
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_12, MSGBOX_AUTOCLOSE
	delay 40
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_21
	delay 60
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_16
	waitmessage
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_1
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_13, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 10, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_22
	waitmovement
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_4
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_14, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_23
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_1
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_15, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 7, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_21
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_1
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_16, MSGBOX_AUTOCLOSE
	setflag FLAG_ANCIENTGROTTO_DISAPPEAR_SHIP
	delay 40
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_4
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_17, MSGBOX_AUTOCLOSE
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
	applymovement LOCALID_PLAYER, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_24
	applymovement 9, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_24
	applymovement 10, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_24
	applymovement 8, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_24
	waitmovement
	applymovement 2, DeepCloudForest_AncientGrotto_GetOutTruck_Movement_25
	special RemoveCameraObject
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_6
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_18, MSGBOX_AUTOCLOSE
	delay 120
	setspeaker DeepCloudForest_AncientGrotto_GetOutTruck_Text_6
	msgbox DeepCloudForest_AncientGrotto_GetOutTruck_Text_19, MSGBOX_AUTOCLOSE
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
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_6:
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

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_7:
	walk_fast_left
	walk_fast_left
	face_right
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_8:
	walk_fast_right
	walk_fast_right
	face_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_9:
	jump_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_10:
	jump_up
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_11:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_12:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	emote_exclamation_mark
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_13:
	walk_right
	walk_right
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_14:
	emote_exclamation_mark
	walk_slow_right
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_15:
	jump_right
	face_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_16:
	face_right
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_17:
	walk_slow_left
	face_right
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_18:
	walk_down
	face_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_19:
	walk_down
	walk_down
	face_right
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_20:
	emote_exclamation_mark
	walk_fast_left
	walk_fast_down
	walk_fast_down
	face_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_21:
	face_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_22:
	emote_exclamation_mark
	walk_fast_left
	walk_fast_left
	face_down
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_23:
	face_up
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_24:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

DeepCloudForest_AncientGrotto_GetOutTruck_Movement_25:
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
	.string "short...\p"
	.string "Force the golem out of that meteorite\n"
	.string "and lets get out of here.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_3:
	.string "1... 2... 3... MEGA PUNCH!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_4:
	.string "NASH$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_5:
	.string "WATCH OUT!\n"
	.string "TAKE COVER!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_6:
	.string "DAAN$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_7:
	.string "HEY!\n"
	.string "WHAT ARE YOU GUYS DOING?$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_8:
	.string "Impressive!\p"
	.string "How did you guys find us that quickly?$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_9:
	.string "DAVID$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_10:
	.string "That energy...\p"
	.string "the pressure...\p"
	.string "It must be the 'Silent Guardian'...\p"
	.string "It's exactly what the legends\n"
	.string "described.\p"
	.string "Made from steel not of this earth...\p"
	.string "It is one of the three ancient golems...\p"
	.string "...they call it... REGISTEEL.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_11:
	.string "Look at you, young man.\p"
	.string "You seem to be an intelligent kid.\p"
	.string "Why don't you join the faculty?\p"
	.string "At the faculty we Push Boundaries,\n"
	.string "Develop Talent and Inspire!!\p"
	.string "You would be the perfect fit!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_12:
	.string "Don't talk to him, you fool!\p"
	.string "Don't you dare to touch the golem, he\n"
	.string "belongs in this forest!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_13:
	.string "Unfortunately, I can't do that.\p"
	.string "Our plan is bigger than this chaotic\n"
	.string "forest.\p"
	.string "He is a necessary piece to bring order\n"
	.string "to this world.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_14:
	.string "What do you mean?$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_15:
	.string "You will see my friend, you will see.\p"
	.string "Teachers, lets get out of here.$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_16:
	.string "ELECTABUZZ, FLASH!!$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_17:
	.string "Goddamn, not again...\n"
	.string "I should have brought my sunglasses...$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_18:
	.string "We can't catch them...$"

DeepCloudForest_AncientGrotto_GetOutTruck_Text_19:
	.string "Lets get back to the research station,\n"
	.string "it's getting dark.$"
