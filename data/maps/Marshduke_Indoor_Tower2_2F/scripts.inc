Marshduke_Indoor_Tower2_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Marshduke_Indoor_Tower2_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Marshduke_Indoor_Tower2_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Marshduke_Indoor_Tower2_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_HIDE_MARSHDUKE_TOWER_CHALLENGERS
	checktrainerflag TRAINER_TOWER2_CLARA_SK
	goto_if 1, Marshduke_Indoor_Tower2_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Marshduke_Indoor_Tower2_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setvar VAR_TEMP_1, 1
	return

Marshduke_Indoor_Tower2_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_1, 0, Marshduke_Indoor_Tower2_2F_Gauntlet
	.2byte 0


Marshduke_Indoor_Tower2_2F_Gauntlet::
	lockall
	setvar VAR_TEMP_1, 1
	cleartrainerflag TRAINER_TOWER2_OSCAR_SK
	cleartrainerflag TRAINER_TOWER2_GORDON_SK
	playse SE_PIN
	msgbox Marshduke_Indoor_Tower2_2F_Gauntlet_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Tower2_2F_Gauntlet_Movement_0
	waitmovement LOCALID_PLAYER
	addobject LOCALID_TOWER2_OSCAR
	applymovement LOCALID_TOWER2_OSCAR, Marshduke_Indoor_Tower2_2F_Gauntlet_Movement_1
	waitmovement LOCALID_TOWER2_OSCAR
	playse SE_PIN
	applymovement LOCALID_TOWER2_OSCAR, Marshduke_Indoor_Tower2_2F_Gauntlet_Movement_2
	waitmovement LOCALID_TOWER2_OSCAR
	msgbox Marshduke_Indoor_Tower2_2F_Gauntlet_Text_1
	trainerbattle_no_intro TRAINER_TOWER2_OSCAR_SK, Marshduke_Indoor_Tower2_2F_Text_OscarDefeat
	msgbox Marshduke_Indoor_Tower2_2F_Gauntlet_Text_2
	applymovement LOCALID_TOWER2_OSCAR, Marshduke_Indoor_Tower2_2F_Gauntlet_Movement_3
	waitmovement LOCALID_TOWER2_OSCAR
	removeobject LOCALID_TOWER2_OSCAR
	delay 60
	addobject LOCALID_TOWER2_GORDON
	applymovement LOCALID_TOWER2_GORDON, Marshduke_Indoor_Tower2_2F_Gauntlet_Movement_1
	waitmovement LOCALID_TOWER2_GORDON
	playse SE_PIN
	applymovement LOCALID_TOWER2_GORDON, Marshduke_Indoor_Tower2_2F_Gauntlet_Movement_2
	waitmovement LOCALID_TOWER2_GORDON
	msgbox Marshduke_Indoor_Tower2_2F_Gauntlet_Text_3
	trainerbattle_no_intro TRAINER_TOWER2_GORDON_SK, Marshduke_Indoor_Tower2_2F_Text_GordonDefeat
	msgbox Marshduke_Indoor_Tower2_2F_Gauntlet_Text_4
	applymovement LOCALID_TOWER2_GORDON, Marshduke_Indoor_Tower2_2F_Gauntlet_Movement_3
	waitmovement LOCALID_TOWER2_GORDON
	removeobject LOCALID_TOWER2_GORDON
	delay 60
	addobject LOCALID_TOWER2_CLARA
	applymovement LOCALID_TOWER2_CLARA, Marshduke_Indoor_Tower2_2F_Gauntlet_Movement_1
	waitmovement LOCALID_TOWER2_CLARA
	playse SE_PIN
	applymovement LOCALID_TOWER2_CLARA, Marshduke_Indoor_Tower2_2F_Gauntlet_Movement_2
	waitmovement LOCALID_TOWER2_CLARA
	msgbox Marshduke_Indoor_Tower2_2F_Gauntlet_Text_5
	trainerbattle_no_intro TRAINER_TOWER2_CLARA_SK, Marshduke_Indoor_Tower2_2F_Text_ClaraDefeat
	msgbox Marshduke_Indoor_Tower2_2F_Gauntlet_Text_6
	applymovement LOCALID_TOWER2_CLARA, Marshduke_Indoor_Tower2_2F_Gauntlet_Movement_3
	waitmovement LOCALID_TOWER2_CLARA
	removeobject LOCALID_TOWER2_CLARA
	releaseall
	end


Marshduke_Indoor_Tower2_2F_Gauntlet_Movement_0:
	emote_exclamation_mark
	walk_down
	walk_down
	face_right
	step_end

Marshduke_Indoor_Tower2_2F_Gauntlet_Movement_1:
	walk_down
	walk_down
	walk_down
	face_left
	step_end

Marshduke_Indoor_Tower2_2F_Gauntlet_Movement_2:
	emote_exclamation_mark
	step_end

Marshduke_Indoor_Tower2_2F_Gauntlet_Movement_3:
	walk_up
	walk_up
	walk_up
	step_end

Marshduke_Indoor_Tower2_2F_Gauntlet_Text_0:
	.string "A voice calls from the stairs above:\p"
	.string "'Hey, a challenger! Three keepers: fire,\n"
	.string "lightning and water. No breaks!\p"
	.string "Let's see if you've got some fire in\n"
	.string "you!'$"

Marshduke_Indoor_Tower2_2F_Gauntlet_Text_1:
	.string "First keeper, OSCAR! Entei is my hero!\n"
	.string "Fire, fury and a second chance!\p"
	.string "Let's turn up the heat!$"

Marshduke_Indoor_Tower2_2F_Gauntlet_Text_2:
	.string "Phew! Okay, next one. He's been charging\n"
	.string "up all day.$"

Marshduke_Indoor_Tower2_2F_Gauntlet_Text_3:
	.string "Second keeper, GORDON. I've timed the\n"
	.string "Raikou part of the vision. Exactly 4.2\l"
	.string "seconds of pure lightning.\p"
	.string "The best 4.2 seconds of my life. Let's\n"
	.string "battle!$"

Marshduke_Indoor_Tower2_2F_Gauntlet_Text_4:
	.string "Last one. Clara is very serious about\n"
	.string "Suicune. Very serious.$"

Marshduke_Indoor_Tower2_2F_Gauntlet_Text_5:
	.string "I am CLARA, Keeper of the Rekindled.\p"
	.string "Suicune rose from the ashes and went\n"
	.string "straight to the water to heal it. It\l"
	.string "didn't even stop to look back.\p"
	.string "The other towers argue about balance\n"
	.string "and love. We know which vision is the\l"
	.string "true one.$"

Marshduke_Indoor_Tower2_2F_Gauntlet_Text_6:
	.string "Come up to the top. I'd like to give you\n"
	.string "something.$"

Marshduke_Indoor_Tower2_2F_Text_OscarDefeat::
	.string "I'm all burnt out!$"

Marshduke_Indoor_Tower2_2F_Text_GordonDefeat::
	.string "That wasn't in my calculations!$"

Marshduke_Indoor_Tower2_2F_Text_ClaraDefeat::
	.string "Ho-Oh smiles on you today.$"
