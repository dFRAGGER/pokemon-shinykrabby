Marshduke_Indoor_Tower3_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Marshduke_Indoor_Tower3_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Marshduke_Indoor_Tower3_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Marshduke_Indoor_Tower3_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_HIDE_MARSHDUKE_TOWER_CHALLENGERS
	checktrainerflag TRAINER_TOWER3_ARTHUR_SK
	goto_if 1, Marshduke_Indoor_Tower3_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Marshduke_Indoor_Tower3_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setvar VAR_TEMP_1, 1
	return

Marshduke_Indoor_Tower3_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_1, 0, Marshduke_Indoor_Tower3_2F_Gauntlet
	.2byte 0


Marshduke_Indoor_Tower3_2F_Gauntlet::
	lockall
	setvar VAR_TEMP_1, 1
	cleartrainerflag TRAINER_TOWER3_HAROLD_SK
	cleartrainerflag TRAINER_TOWER3_FINN_SK
	playse SE_PIN
	msgbox Marshduke_Indoor_Tower3_2F_Gauntlet_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Tower3_2F_Gauntlet_Movement_0
	waitmovement LOCALID_PLAYER
	addobject LOCALID_TOWER3_HAROLD
	applymovement LOCALID_TOWER3_HAROLD, Marshduke_Indoor_Tower3_2F_Gauntlet_Movement_1
	waitmovement LOCALID_TOWER3_HAROLD
	playse SE_PIN
	applymovement LOCALID_TOWER3_HAROLD, Marshduke_Indoor_Tower3_2F_Gauntlet_Movement_2
	waitmovement LOCALID_TOWER3_HAROLD
	msgbox Marshduke_Indoor_Tower3_2F_Gauntlet_Text_1
	trainerbattle_no_intro TRAINER_TOWER3_HAROLD_SK, Marshduke_Indoor_Tower3_2F_Text_HaroldDefeat
	msgbox Marshduke_Indoor_Tower3_2F_Gauntlet_Text_2
	applymovement LOCALID_TOWER3_HAROLD, Marshduke_Indoor_Tower3_2F_Gauntlet_Movement_3
	waitmovement LOCALID_TOWER3_HAROLD
	removeobject LOCALID_TOWER3_HAROLD
	delay 60
	addobject LOCALID_TOWER3_FINN
	applymovement LOCALID_TOWER3_FINN, Marshduke_Indoor_Tower3_2F_Gauntlet_Movement_1
	waitmovement LOCALID_TOWER3_FINN
	playse SE_PIN
	applymovement LOCALID_TOWER3_FINN, Marshduke_Indoor_Tower3_2F_Gauntlet_Movement_2
	waitmovement LOCALID_TOWER3_FINN
	msgbox Marshduke_Indoor_Tower3_2F_Gauntlet_Text_3
	trainerbattle_no_intro TRAINER_TOWER3_FINN_SK, Marshduke_Indoor_Tower3_2F_Text_FinnDefeat
	msgbox Marshduke_Indoor_Tower3_2F_Gauntlet_Text_4
	applymovement LOCALID_TOWER3_FINN, Marshduke_Indoor_Tower3_2F_Gauntlet_Movement_3
	waitmovement LOCALID_TOWER3_FINN
	removeobject LOCALID_TOWER3_FINN
	delay 60
	addobject LOCALID_TOWER3_ARTHUR
	applymovement LOCALID_TOWER3_ARTHUR, Marshduke_Indoor_Tower3_2F_Gauntlet_Movement_1
	waitmovement LOCALID_TOWER3_ARTHUR
	playse SE_PIN
	applymovement LOCALID_TOWER3_ARTHUR, Marshduke_Indoor_Tower3_2F_Gauntlet_Movement_2
	waitmovement LOCALID_TOWER3_ARTHUR
	msgbox Marshduke_Indoor_Tower3_2F_Gauntlet_Text_5
	trainerbattle_no_intro TRAINER_TOWER3_ARTHUR_SK, Marshduke_Indoor_Tower3_2F_Text_ArthurDefeat
	msgbox Marshduke_Indoor_Tower3_2F_Gauntlet_Text_6
	applymovement LOCALID_TOWER3_ARTHUR, Marshduke_Indoor_Tower3_2F_Gauntlet_Movement_3
	waitmovement LOCALID_TOWER3_ARTHUR
	removeobject LOCALID_TOWER3_ARTHUR
	releaseall
	end


Marshduke_Indoor_Tower3_2F_Gauntlet_Movement_0:
	emote_exclamation_mark
	walk_down
	walk_down
	face_right
	step_end

Marshduke_Indoor_Tower3_2F_Gauntlet_Movement_1:
	walk_down
	walk_down
	walk_down
	face_left
	step_end

Marshduke_Indoor_Tower3_2F_Gauntlet_Movement_2:
	emote_exclamation_mark
	step_end

Marshduke_Indoor_Tower3_2F_Gauntlet_Movement_3:
	walk_up
	walk_up
	walk_up
	step_end

Marshduke_Indoor_Tower3_2F_Gauntlet_Text_0:
	.string "A voice calls from the stairs above:\p"
	.string "'Hey, a challenger! Three keepers: land,\n"
	.string "sea and sky. No breaks!\p"
	.string "Try to keep your feet on the ground!'$"

Marshduke_Indoor_Tower3_2F_Gauntlet_Text_1:
	.string "First keeper, HAROLD! When Groudon\n"
	.string "raises the land in the vision, I swear\l"
	.string "the whole cathedral shakes!\p"
	.string "Let's see if you've got solid footing!$"

Marshduke_Indoor_Tower3_2F_Gauntlet_Text_2:
	.string "Next up is Finn. Watch out, he gets\n"
	.string "splashy.$"

Marshduke_Indoor_Tower3_2F_Gauntlet_Text_3:
	.string "Second keeper, FINN! Kyogre is the real\n"
	.string "star of that vision, and I'll battle\l"
	.string "anyone who says otherwise.\p"
	.string "Starting with you!$"

Marshduke_Indoor_Tower3_2F_Gauntlet_Text_4:
	.string "Arthur's last. He thinks Rayquaza is the\n"
	.string "star. He's wrong, but he's strong.$"

Marshduke_Indoor_Tower3_2F_Gauntlet_Text_5:
	.string "I am ARTHUR, Keeper of the Divided\n"
	.string "World.\p"
	.string "The land and the sea at war, and\n"
	.string "Rayquaza coming down to end it. No\l"
	.string "other vision comes close.\p"
	.string "Let's see if you can stand your ground.$"

Marshduke_Indoor_Tower3_2F_Gauntlet_Text_6:
	.string "Come up to the top. I have something\n"
	.string "for you.$"

Marshduke_Indoor_Tower3_2F_Text_HaroldDefeat::
	.string "Knocked clean off my feet!$"

Marshduke_Indoor_Tower3_2F_Text_FinnDefeat::
	.string "Washed ashore...$"

Marshduke_Indoor_Tower3_2F_Text_ArthurDefeat::
	.string "Rayquaza would approve.$"
