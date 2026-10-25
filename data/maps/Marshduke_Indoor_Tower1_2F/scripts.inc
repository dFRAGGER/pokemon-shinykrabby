Marshduke_Indoor_Tower1_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Marshduke_Indoor_Tower1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Marshduke_Indoor_Tower1_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Marshduke_Indoor_Tower1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_HIDE_MARSHDUKE_TOWER_CHALLENGERS
	checktrainerflag TRAINER_TOWER1_EDWIN_SK
	goto_if 1, Marshduke_Indoor_Tower1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Marshduke_Indoor_Tower1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setvar VAR_TEMP_1, 1
	return

Marshduke_Indoor_Tower1_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_1, 0, Marshduke_Indoor_Tower1_2F_Gauntlet
	.2byte 0


Marshduke_Indoor_Tower1_2F_Gauntlet::
	lockall
	setvar VAR_TEMP_1, 1
	cleartrainerflag TRAINER_TOWER1_ROBIN_SK
	cleartrainerflag TRAINER_TOWER1_OWEN_SK
	playse SE_PIN
	msgbox Marshduke_Indoor_Tower1_2F_Gauntlet_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Tower1_2F_Gauntlet_Movement_0
	waitmovement LOCALID_PLAYER
	addobject LOCALID_TOWER1_ROBIN
	applymovement LOCALID_TOWER1_ROBIN, Marshduke_Indoor_Tower1_2F_Gauntlet_Movement_1
	waitmovement LOCALID_TOWER1_ROBIN
	playse SE_PIN
	applymovement LOCALID_TOWER1_ROBIN, Marshduke_Indoor_Tower1_2F_Gauntlet_Movement_2
	waitmovement LOCALID_TOWER1_ROBIN
	msgbox Marshduke_Indoor_Tower1_2F_Gauntlet_Text_1
	trainerbattle_no_intro TRAINER_TOWER1_ROBIN_SK, Marshduke_Indoor_Tower1_2F_Text_JoopDefeat
	msgbox Marshduke_Indoor_Tower1_2F_Gauntlet_Text_2
	applymovement LOCALID_TOWER1_ROBIN, Marshduke_Indoor_Tower1_2F_Gauntlet_Movement_3
	waitmovement LOCALID_TOWER1_ROBIN
	removeobject LOCALID_TOWER1_ROBIN
	delay 60
	addobject LOCALID_TOWER1_OWEN
	applymovement LOCALID_TOWER1_OWEN, Marshduke_Indoor_Tower1_2F_Gauntlet_Movement_1
	waitmovement LOCALID_TOWER1_OWEN
	playse SE_PIN
	applymovement LOCALID_TOWER1_OWEN, Marshduke_Indoor_Tower1_2F_Gauntlet_Movement_2
	waitmovement LOCALID_TOWER1_OWEN
	msgbox Marshduke_Indoor_Tower1_2F_Gauntlet_Text_3
	trainerbattle_no_intro TRAINER_TOWER1_OWEN_SK, Marshduke_Indoor_Tower1_2F_Text_TeoDefeat
	msgbox Marshduke_Indoor_Tower1_2F_Gauntlet_Text_4
	applymovement LOCALID_TOWER1_OWEN, Marshduke_Indoor_Tower1_2F_Gauntlet_Movement_3
	waitmovement LOCALID_TOWER1_OWEN
	removeobject LOCALID_TOWER1_OWEN
	delay 60
	addobject LOCALID_TOWER1_EDWIN
	applymovement LOCALID_TOWER1_EDWIN, Marshduke_Indoor_Tower1_2F_Gauntlet_Movement_1
	waitmovement LOCALID_TOWER1_EDWIN
	playse SE_PIN
	applymovement LOCALID_TOWER1_EDWIN, Marshduke_Indoor_Tower1_2F_Gauntlet_Movement_2
	waitmovement LOCALID_TOWER1_EDWIN
	msgbox Marshduke_Indoor_Tower1_2F_Gauntlet_Text_5
	trainerbattle_no_intro TRAINER_TOWER1_EDWIN_SK, Marshduke_Indoor_Tower1_2F_Text_ArentDefeat
	msgbox Marshduke_Indoor_Tower1_2F_Gauntlet_Text_6
	applymovement LOCALID_TOWER1_EDWIN, Marshduke_Indoor_Tower1_2F_Gauntlet_Movement_3
	waitmovement LOCALID_TOWER1_EDWIN
	removeobject LOCALID_TOWER1_EDWIN
	releaseall
	end


Marshduke_Indoor_Tower1_2F_Gauntlet_Movement_0:
	emote_exclamation_mark
	walk_down
	walk_down
	face_right
	step_end

Marshduke_Indoor_Tower1_2F_Gauntlet_Movement_1:
	walk_down
	walk_down
	walk_down
	face_left
	step_end

Marshduke_Indoor_Tower1_2F_Gauntlet_Movement_2:
	emote_exclamation_mark
	step_end

Marshduke_Indoor_Tower1_2F_Gauntlet_Movement_3:
	walk_up
	walk_up
	walk_up
	step_end

Marshduke_Indoor_Tower1_2F_Gauntlet_Text_0:
	.string "A voice calls from the stairs above:\p"
	.string "'Hey, a challenger! Three keepers, one\n"
	.string "after the other. No breaks!\p"
	.string "Ready or not, here we come!'$"

Marshduke_Indoor_Tower1_2F_Gauntlet_Text_1:
	.string "First keeper, ROBIN! Lugia is my\n"
	.string "favorite Pokémon in the whole world!\p"
	.string "My birds and I are going to blow you\n"
	.string "away!$"

Marshduke_Indoor_Tower1_2F_Gauntlet_Text_2:
	.string "Okay, you can stay right there. The\n"
	.string "next one is already on his way down.$"

Marshduke_Indoor_Tower1_2F_Gauntlet_Text_3:
	.string "Second keeper, Brother OWEN.\p"
	.string "I've watched the Lugia vision\n"
	.string "forty-two times, and I still notice\l"
	.string "something new every time.\p"
	.string "Let's see what you notice.$"

Marshduke_Indoor_Tower1_2F_Gauntlet_Text_4:
	.string "One more. Brother Edwin has been\n"
	.string "waiting all week for a challenger.$"

Marshduke_Indoor_Tower1_2F_Gauntlet_Text_5:
	.string "I am EDWIN, Keeper of the Balanced Sky.\p"
	.string "Fire, frost and lightning tear the sky\n"
	.string "apart, and Lugia calms all three with a\l"
	.string "single cry.\p"
	.string "The other towers can keep their\n"
	.string "visions. This is the one that matters.$"

Marshduke_Indoor_Tower1_2F_Gauntlet_Text_6:
	.string "Well done. Come up to the top, I have\n"
	.string "something for you.$"

Marshduke_Indoor_Tower1_2F_Text_JoopDefeat::
	.string "Feathers everywhere!$"

Marshduke_Indoor_Tower1_2F_Text_TeoDefeat::
	.string "I didn't see that coming.$"

Marshduke_Indoor_Tower1_2F_Text_ArentDefeat::
	.string "Lugia would be proud of you.$"
