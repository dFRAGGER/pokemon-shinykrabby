SiltrootTown_Indoor_FacultyDefector_MapScripts::
	.byte 0


SiltrootTown_Indoor_Scott::
	lock
	faceplayer
	playse SE_PIN
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_0
	setspeaker SiltrootTown_Indoor_Scott_Text_0
	msgbox SiltrootTown_Indoor_Scott_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	goto_if_set FLAG_SILTROOTTOWN_STASH_SACK, SiltrootTown_Indoor_Scott_2
	goto_if_unset FLAG_SILTROOTTOWN_STASH_SACK, SiltrootTown_Indoor_Scott_3
SiltrootTown_Indoor_Scott_1:
	release
	end

SiltrootTown_Indoor_Scott_2:
	checkitem ITEM_POKEBLOCK_CASE
	compare VAR_RESULT, FALSE
	goto_if_eq SiltrootTown_Indoor_Scott_7
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	setspeaker SiltrootTown_Indoor_Scott_Text_0
	msgbox SiltrootTown_Indoor_Scott_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	waitmessage
	compare VAR_TEMP_0, 3
	goto_if_eq SiltrootTown_Indoor_Scott_14
	compare VAR_TEMP_0, 4
	goto_if_eq SiltrootTown_Indoor_Scott_15
SiltrootTown_Indoor_Scott_13:
	setspeaker SiltrootTown_Indoor_Scott_Text_0
	msgbox SiltrootTown_Indoor_Scott_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	delay 40
	compare VAR_TEMP_0, 3
	goto_if_eq SiltrootTown_Indoor_Scott_19
	compare VAR_TEMP_0, 4
	goto_if_eq SiltrootTown_Indoor_Scott_20
SiltrootTown_Indoor_Scott_18:
	setspeaker SiltrootTown_Indoor_Scott_Text_0
	msgbox SiltrootTown_Indoor_Scott_Text_6, MSGBOX_AUTOCLOSE
	waitmessage
	compare VAR_TEMP_0, 3
	goto_if_eq SiltrootTown_Indoor_Scott_24
	compare VAR_TEMP_0, 4
	goto_if_eq SiltrootTown_Indoor_Scott_25
SiltrootTown_Indoor_Scott_23:
	setflag FLAG_HIDE_SCOTT_AFTER_CONVO
	clearflag FLAG_HIDE_SCOTT_OUTSIDE_BOAT
	removeobject 1
	release
	end

SiltrootTown_Indoor_Scott_3:
	setspeaker SiltrootTown_Indoor_Scott_Text_7
	msgbox SiltrootTown_Indoor_Scott_Text_8, MSGBOX_AUTOCLOSE
	waitmessage
	compare VAR_TEMP_0, 3
	goto_if_eq SiltrootTown_Indoor_Scott_9
	compare VAR_TEMP_0, 4
	goto_if_eq SiltrootTown_Indoor_Scott_10
	goto SiltrootTown_Indoor_Scott_1

SiltrootTown_Indoor_Scott_7:
	setspeaker SiltrootTown_Indoor_Scott_Text_0
	msgbox SiltrootTown_Indoor_Scott_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end

SiltrootTown_Indoor_Scott_9:
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_16
	waitmovement
	goto SiltrootTown_Indoor_Scott_1

SiltrootTown_Indoor_Scott_10:
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_17
	waitmovement
	goto SiltrootTown_Indoor_Scott_1

SiltrootTown_Indoor_Scott_14:
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_1
	waitmovement
	delay 60
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_2
	waitmovement
	delay 60
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_3
	waitmovement
	delay 60
	goto SiltrootTown_Indoor_Scott_13

SiltrootTown_Indoor_Scott_15:
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_4
	waitmovement
	delay 60
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_5
	waitmovement
	delay 60
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_6
	waitmovement
	delay 60
	goto SiltrootTown_Indoor_Scott_13

SiltrootTown_Indoor_Scott_19:
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_7
	waitmovement
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_8
	delay 60
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_9
	waitmovement
	setspeaker SiltrootTown_Indoor_Scott_Text_0
	msgbox SiltrootTown_Indoor_Scott_Text_5, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_8
	waitmovement
	delay 60
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_10
	waitmovement
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_11
	goto SiltrootTown_Indoor_Scott_18

SiltrootTown_Indoor_Scott_20:
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_12
	waitmovement
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_8
	delay 60
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_9
	waitmovement
	setspeaker SiltrootTown_Indoor_Scott_Text_0
	msgbox SiltrootTown_Indoor_Scott_Text_5, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_8
	waitmovement
	delay 60
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_13
	waitmovement
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_9
	goto SiltrootTown_Indoor_Scott_18

SiltrootTown_Indoor_Scott_24:
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_14
	waitmovement
	goto SiltrootTown_Indoor_Scott_23

SiltrootTown_Indoor_Scott_25:
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_15
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_14
	waitmovement
	goto SiltrootTown_Indoor_Scott_23


SiltrootTown_Indoor_Scott_Movement_0:
	emote_exclamation_mark
	step_end

SiltrootTown_Indoor_Scott_Movement_1:
	walk_down
	walk_left
	face_up
	step_end

SiltrootTown_Indoor_Scott_Movement_2:
	walk_left
	walk_up
	face_right
	step_end

SiltrootTown_Indoor_Scott_Movement_3:
	walk_down
	walk_right
	walk_right
	walk_up
	face_left
	step_end

SiltrootTown_Indoor_Scott_Movement_4:
	walk_left
	walk_down
	face_right
	step_end

SiltrootTown_Indoor_Scott_Movement_5:
	walk_down
	walk_right
	face_up
	step_end

SiltrootTown_Indoor_Scott_Movement_6:
	walk_left
	walk_up
	walk_up
	walk_right
	face_down
	step_end

SiltrootTown_Indoor_Scott_Movement_7:
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_down
	step_end

SiltrootTown_Indoor_Scott_Movement_8:
	face_down
	step_end

SiltrootTown_Indoor_Scott_Movement_9:
	face_up
	step_end

SiltrootTown_Indoor_Scott_Movement_10:
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_up
	face_left
	step_end

SiltrootTown_Indoor_Scott_Movement_11:
	face_right
	step_end

SiltrootTown_Indoor_Scott_Movement_12:
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

SiltrootTown_Indoor_Scott_Movement_13:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	face_down
	step_end

SiltrootTown_Indoor_Scott_Movement_14:
	walk_down
	walk_down
	walk_down
	step_end

SiltrootTown_Indoor_Scott_Movement_15:
	jump_left
	face_down
	step_end

SiltrootTown_Indoor_Scott_Movement_16:
	jump_left
	step_end

SiltrootTown_Indoor_Scott_Movement_17:
	jump_down
	step_end

SiltrootTown_Indoor_Scott_Text_0:
	.string "SCOTT$"

SiltrootTown_Indoor_Scott_Text_1:
	.string "What are you doing in my home?!\p"
	.string "Who are you?!\p"
	.string "Did the government send you?\p"
	.string "Are you a drone in a human suit?!$"

SiltrootTown_Indoor_Scott_Text_2:
	.string "...\p"
	.string "Hmm... so Ali sent you?\p"
	.string "You seem to have the inventory but\n"
	.string "nothing to prove it.\p"
	.string "Ali would never send someone to me\n"
	.string "without the right credentials.\p"
	.string "YOU ARE A SPY AREN'T YOU?$"

SiltrootTown_Indoor_Scott_Text_3:
	.string "Wait...\p"
	.string "Is that Ali's Stash Case?\p"
	.string "That beat-up old thing with the dent on\n"
	.string "the side?\p"
	.string "Only one person in the world has that.\p"
	.string "...\p"
	.string "... so Ali sent you?\p"
	.string "And you have the inventory?\p"
	.string "Hmm.\p"
	.string "One sec...$"

SiltrootTown_Indoor_Scott_Text_4:
	.string "Okay, your heat signature is normal.\p"
	.string "You aren't wearing a wire.\p"
	.string "I suppose I can trust you.$"

SiltrootTown_Indoor_Scott_Text_5:
	.string "Nobody saw you coming in right?\p"
	.string "We cannot leave together through the\n"
	.string "front door.\p"
	.string "Too many eyes on the street.\p"
	.string "Satellite flyover is in three minutes.$"

SiltrootTown_Indoor_Scott_Text_6:
	.string "My boat is hidden in the mangroves,\n"
	.string "right behind the house, camouflaged\l"
	.string "under the roots.\p"
	.string "Meet me out back.\p"
	.string "I will prep the engine.\p"
	.string "We are dropping you at the Industrial\n"
	.string "Harbor in Lion's Arch.\p"
	.string "It's a rough ride, so don't eat anything\n"
	.string "heavy before we leave.\p"
	.string "Lets move...$"

SiltrootTown_Indoor_Scott_Text_7:
	.string "Scott$"

SiltrootTown_Indoor_Scott_Text_8:
	.string "No answers?\n"
	.string "GET OUT! NOW!$"
