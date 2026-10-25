Marshduke_Indoor_Tower4_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Marshduke_Indoor_Tower4_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Marshduke_Indoor_Tower4_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Marshduke_Indoor_Tower4_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_HIDE_MARSHDUKE_TOWER_CHALLENGERS
	checktrainerflag TRAINER_TOWER4_AL_EDITH_SK
	goto_if 1, Marshduke_Indoor_Tower4_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Marshduke_Indoor_Tower4_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setvar VAR_TEMP_1, 1
	return

Marshduke_Indoor_Tower4_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_1, 0, Marshduke_Indoor_Tower4_2F_Gauntlet
	.2byte 0


Marshduke_Indoor_Tower4_2F_Gauntlet::
	lockall
	setvar VAR_TEMP_1, 1
	setvar VAR_0x8004, PARTY_SIZE
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
	compare VAR_RESULT, 2
	goto_if_lt Marshduke_Indoor_Tower4_2F_Gauntlet_2
	cleartrainerflag TRAINER_TOWER4_LIA_ROSE_SK
	cleartrainerflag TRAINER_TOWER4_TOM_ANNA_SK
	playse SE_PIN
	msgbox Marshduke_Indoor_Tower4_2F_Gauntlet_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_0
	waitmovement LOCALID_PLAYER
	addobject LOCALID_TOWER4_LIA
	applymovement LOCALID_TOWER4_LIA, Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_1
	waitmovement LOCALID_TOWER4_LIA
	addobject LOCALID_TOWER4_ROSE
	applymovement LOCALID_TOWER4_ROSE, Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_2
	waitmovement LOCALID_TOWER4_ROSE
	playse SE_PIN
	applymovement LOCALID_TOWER4_ROSE, Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_3
	applymovement LOCALID_TOWER4_LIA, Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_3
	waitmovement LOCALID_TOWER4_LIA
	msgbox Marshduke_Indoor_Tower4_2F_Gauntlet_Text_2
	trainerbattle_no_intro TRAINER_TOWER4_LIA_ROSE_SK, Marshduke_Indoor_Tower4_2F_Text_LiaRoseDefeat
	msgbox Marshduke_Indoor_Tower4_2F_Gauntlet_Text_3
	applymovement LOCALID_TOWER4_ROSE, Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_4
	waitmovement LOCALID_TOWER4_ROSE
	removeobject LOCALID_TOWER4_ROSE
	applymovement LOCALID_TOWER4_LIA, Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_5
	waitmovement LOCALID_TOWER4_LIA
	removeobject LOCALID_TOWER4_LIA
	delay 60
	addobject LOCALID_TOWER4_TOM
	applymovement LOCALID_TOWER4_TOM, Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_1
	waitmovement LOCALID_TOWER4_TOM
	addobject LOCALID_TOWER4_ANNA
	applymovement LOCALID_TOWER4_ANNA, Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_2
	waitmovement LOCALID_TOWER4_ANNA
	playse SE_PIN
	applymovement LOCALID_TOWER4_ANNA, Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_3
	applymovement LOCALID_TOWER4_TOM, Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_3
	waitmovement LOCALID_TOWER4_TOM
	msgbox Marshduke_Indoor_Tower4_2F_Gauntlet_Text_4
	trainerbattle_no_intro TRAINER_TOWER4_TOM_ANNA_SK, Marshduke_Indoor_Tower4_2F_Text_TomAnnaDefeat
	msgbox Marshduke_Indoor_Tower4_2F_Gauntlet_Text_5
	applymovement LOCALID_TOWER4_ANNA, Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_4
	waitmovement LOCALID_TOWER4_ANNA
	removeobject LOCALID_TOWER4_ANNA
	applymovement LOCALID_TOWER4_TOM, Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_5
	waitmovement LOCALID_TOWER4_TOM
	removeobject LOCALID_TOWER4_TOM
	delay 60
	addobject LOCALID_TOWER4_AL
	applymovement LOCALID_TOWER4_AL, Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_1
	waitmovement LOCALID_TOWER4_AL
	addobject LOCALID_TOWER4_EDITH
	applymovement LOCALID_TOWER4_EDITH, Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_2
	waitmovement LOCALID_TOWER4_EDITH
	playse SE_PIN
	applymovement LOCALID_TOWER4_EDITH, Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_3
	applymovement LOCALID_TOWER4_AL, Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_3
	waitmovement LOCALID_TOWER4_AL
	msgbox Marshduke_Indoor_Tower4_2F_Gauntlet_Text_6
	trainerbattle_no_intro TRAINER_TOWER4_AL_EDITH_SK, Marshduke_Indoor_Tower4_2F_Text_AlEdithDefeat
	msgbox Marshduke_Indoor_Tower4_2F_Gauntlet_Text_7
	applymovement LOCALID_TOWER4_EDITH, Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_4
	waitmovement LOCALID_TOWER4_EDITH
	removeobject LOCALID_TOWER4_EDITH
	applymovement LOCALID_TOWER4_AL, Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_5
	waitmovement LOCALID_TOWER4_AL
	removeobject LOCALID_TOWER4_AL
	releaseall
	end

Marshduke_Indoor_Tower4_2F_Gauntlet_2:
	playse SE_PIN
	msgbox Marshduke_Indoor_Tower4_2F_Gauntlet_Text_0, MSGBOX_AUTOCLOSE
	warp MAP_MARSHDUKE_INDOOR_TOWER4_1F, 2
	waitstate
	end


Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_0:
	emote_exclamation_mark
	walk_down
	walk_down
	face_right
	step_end

Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_1:
	walk_down
	walk_down
	walk_down
	walk_down
	face_left
	step_end

Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_2:
	walk_down
	walk_down
	walk_down
	face_left
	step_end

Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_3:
	emote_exclamation_mark
	step_end

Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_4:
	walk_up
	walk_up
	walk_up
	step_end

Marshduke_Indoor_Tower4_2F_Gauntlet_Movement_5:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Marshduke_Indoor_Tower4_2F_Gauntlet_Text_0:
	.string "A voice calls from the stairs above:\p"
	.string "'Sorry, only pairs can take this\n"
	.string "challenge!\p"
	.string "Come back with at least two Pokémon\n"
	.string "that can still fight.'$"

Marshduke_Indoor_Tower4_2F_Gauntlet_Text_1:
	.string "A voice calls from the stairs above:\p"
	.string "'Hey, a challenger! Three pairs of\n"
	.string "keepers, one after the other. No\l"
	.string "breaks!\p"
	.string "Two hearts against two hearts!'$"

Marshduke_Indoor_Tower4_2F_Gauntlet_Text_2:
	.string "LIA: First keepers, LIA and ROSE!\p"
	.string "ROSE: We're twins, just like Latios and\n"
	.string "Latias!\p"
	.string "LIA: They're not twins.\p"
	.string "ROSE: They're basically twins!$"

Marshduke_Indoor_Tower4_2F_Gauntlet_Text_3:
	.string "ROSE: The next pair is all lovey-dovey.\n"
	.string "Gross. Good luck!$"

Marshduke_Indoor_Tower4_2F_Gauntlet_Text_4:
	.string "TOM: Second keepers, TOM and ANNA.\p"
	.string "ANNA: We had our first date at the Two\n"
	.string "Hearts vision. Tom cried.\p"
	.string "TOM: So did you! Let's battle!$"

Marshduke_Indoor_Tower4_2F_Gauntlet_Text_5:
	.string "ANNA: The last pair has been married for\n"
	.string "fifty years. Good luck with that.$"

Marshduke_Indoor_Tower4_2F_Gauntlet_Text_6:
	.string "AL: We are AL and EDITH, Keepers of the\n"
	.string "Two Hearts.\p"
	.string "EDITH: We've watched the Latios and\n"
	.string "Latias vision on every anniversary\l"
	.string "since we were twenty.\p"
	.string "AL: Fifty times now. And she still\n"
	.string "squeezes my hand at the same part.\l"
	.string "Let's battle!$"

Marshduke_Indoor_Tower4_2F_Gauntlet_Text_7:
	.string "AL: Come up to the top. We have\n"
	.string "something for you.$"

Marshduke_Indoor_Tower4_2F_Text_LiaRoseDefeat::
	.string "We lost... but we lost together!$"

Marshduke_Indoor_Tower4_2F_Text_TomAnnaDefeat::
	.string "At least we lost as a team.$"

Marshduke_Indoor_Tower4_2F_Text_AlEdithDefeat::
	.string "Well, dear, I suppose we're getting old.$"
