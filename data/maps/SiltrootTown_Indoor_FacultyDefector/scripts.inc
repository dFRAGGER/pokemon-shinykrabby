SiltrootTown_Indoor_FacultyDefector_MapScripts::
	.byte 0


SiltrootTown_Indoor_Scott::
# 4 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	lock
# 5 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	faceplayer
# 6 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	playse SE_PIN
# 7 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_0
# 8 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	setspeaker SiltrootTown_Indoor_Scott_Text_0
# 9 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	msgbox SiltrootTown_Indoor_Scott_Text_1, MSGBOX_AUTOCLOSE
# 10 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmessage
# 11 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	goto_if_set FLAG_SILTROOTTOWN_STASH_SACK, SiltrootTown_Indoor_Scott_2
# 104 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	goto_if_unset FLAG_SILTROOTTOWN_STASH_SACK, SiltrootTown_Indoor_Scott_3
SiltrootTown_Indoor_Scott_1:
# 117 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	release
	end

SiltrootTown_Indoor_Scott_2:
# 12 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	checkitem ITEM_POKEBLOCK_CASE
# 13 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SiltrootTown_Indoor_Scott_7
# 20 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 21 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	setspeaker SiltrootTown_Indoor_Scott_Text_0
# 22 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	msgbox SiltrootTown_Indoor_Scott_Text_3, MSGBOX_AUTOCLOSE
# 23 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmessage
# 24 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmessage
# 25 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq SiltrootTown_Indoor_Scott_14
# 36 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq SiltrootTown_Indoor_Scott_15
SiltrootTown_Indoor_Scott_13:
# 47 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	setspeaker SiltrootTown_Indoor_Scott_Text_0
# 48 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	msgbox SiltrootTown_Indoor_Scott_Text_4, MSGBOX_AUTOCLOSE
# 49 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmessage
# 50 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 40
# 51 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq SiltrootTown_Indoor_Scott_19
# 68 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq SiltrootTown_Indoor_Scott_20
SiltrootTown_Indoor_Scott_18:
# 85 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	setspeaker SiltrootTown_Indoor_Scott_Text_0
# 86 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	msgbox SiltrootTown_Indoor_Scott_Text_6, MSGBOX_AUTOCLOSE
# 87 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmessage
# 88 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq SiltrootTown_Indoor_Scott_24
# 92 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq SiltrootTown_Indoor_Scott_25
SiltrootTown_Indoor_Scott_23:
# 97 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	setflag FLAG_HIDE_SCOTT_AFTER_CONVO
# 98 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	clearflag FLAG_HIDE_SCOTT_OUTSIDE_BOAT
# 99 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	removeobject 1
# 100 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	release
	end

SiltrootTown_Indoor_Scott_3:
# 105 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	setspeaker SiltrootTown_Indoor_Scott_Text_0
# 106 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	msgbox SiltrootTown_Indoor_Scott_Text_7, MSGBOX_AUTOCLOSE
# 107 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmessage
# 108 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq SiltrootTown_Indoor_Scott_9
# 112 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq SiltrootTown_Indoor_Scott_10
	goto SiltrootTown_Indoor_Scott_1

SiltrootTown_Indoor_Scott_7:
# 14 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	setspeaker SiltrootTown_Indoor_Scott_Text_0
# 15 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	msgbox SiltrootTown_Indoor_Scott_Text_2, MSGBOX_AUTOCLOSE
# 16 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmessage
# 17 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	release
	end

SiltrootTown_Indoor_Scott_9:
# 109 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_16
# 110 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
	goto SiltrootTown_Indoor_Scott_1

SiltrootTown_Indoor_Scott_10:
# 113 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_17
# 114 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
	goto SiltrootTown_Indoor_Scott_1

SiltrootTown_Indoor_Scott_14:
# 26 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_1
# 27 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 28 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 60
# 29 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_2
# 30 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 31 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 60
# 32 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_3
# 33 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 34 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 60
	goto SiltrootTown_Indoor_Scott_13

SiltrootTown_Indoor_Scott_15:
# 37 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_4
# 38 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 39 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 60
# 40 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_5
# 41 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 42 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 60
# 43 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_6
# 44 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 45 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 60
	goto SiltrootTown_Indoor_Scott_13

SiltrootTown_Indoor_Scott_19:
# 52 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_7
# 53 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 54 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_8
# 55 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 60
# 56 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_9
# 57 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 58 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	setspeaker SiltrootTown_Indoor_Scott_Text_0
# 59 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	msgbox SiltrootTown_Indoor_Scott_Text_5, MSGBOX_AUTOCLOSE
# 60 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmessage
# 61 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_8
# 62 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 63 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 60
# 64 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_10
# 65 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 66 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_11
	goto SiltrootTown_Indoor_Scott_18

SiltrootTown_Indoor_Scott_20:
# 69 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_12
# 70 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 71 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_8
# 72 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 60
# 73 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_9
# 74 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 75 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	setspeaker SiltrootTown_Indoor_Scott_Text_0
# 76 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	msgbox SiltrootTown_Indoor_Scott_Text_5, MSGBOX_AUTOCLOSE
# 77 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmessage
# 78 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_8
# 79 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 80 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 60
# 81 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_13
# 82 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 83 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_9
	goto SiltrootTown_Indoor_Scott_18

SiltrootTown_Indoor_Scott_24:
# 89 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_14
# 90 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
	goto SiltrootTown_Indoor_Scott_23

SiltrootTown_Indoor_Scott_25:
# 93 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_15
# 94 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_14
# 95 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
	goto SiltrootTown_Indoor_Scott_23


# 7 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_0:
# 7 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	emote_exclamation_mark
	step_end

# 26 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_1:
# 26 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_down
# 26 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_left
# 26 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_up
	step_end

# 29 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_2:
# 29 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_left
# 29 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_up
# 29 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_right
	step_end

# 32 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_3:
# 32 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_down
# 32 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_right
# 32 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_right
# 32 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_up
# 32 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_left
	step_end

# 37 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_4:
# 37 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_left
# 37 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_down
# 37 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_right
	step_end

# 40 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_5:
# 40 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_down
# 40 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_right
# 40 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_up
	step_end

# 43 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_6:
# 43 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_left
# 43 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_up
# 43 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_up
# 43 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_right
# 43 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_down
	step_end

# 52 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_7:
# 52 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_down
# 52 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_down
# 52 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_left
# 52 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_down
	step_end

# 54 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_8:
# 54 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_down
	step_end

# 56 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_9:
# 56 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_up
	step_end

# 64 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_10:
# 64 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_up
# 64 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_right
# 64 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_up
# 64 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_up
# 64 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_left
	step_end

# 66 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_11:
# 66 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_right
	step_end

# 69 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_12:
# 69 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_left
# 69 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_down
# 69 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_down
# 69 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_down
	step_end

# 81 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_13:
# 81 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_up
# 81 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_up
# 81 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_up
# 81 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_right
# 81 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_down
	step_end

# 89 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_14:
# 89 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_down
# 89 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_down
# 89 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_down
	step_end

# 93 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_15:
# 93 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	jump_left
# 93 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_down
	step_end

# 109 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_16:
# 109 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	jump_left
	step_end

# 113 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_17:
# 113 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	jump_down
	step_end

SiltrootTown_Indoor_Scott_Text_0:
# 8 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	.string "Scott$"

SiltrootTown_Indoor_Scott_Text_1:
# 9 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	.string "What are you doing in my home?!\p"
	.string "Who are you?!\p"
	.string "Did the government send you?\p"
	.string "Are you a drone in a human suit?!$"

SiltrootTown_Indoor_Scott_Text_2:
# 15 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	.string "...\p"
	.string "Hmm... so Ali sent you?\p"
	.string "You seem to have the inventory but\n"
	.string "nothing to prove it.\p"
	.string "Ali would never send someone to me\n"
	.string "without the right credentials.\p"
	.string "YOU ARE A SPY AREN'T YOU?$"

SiltrootTown_Indoor_Scott_Text_3:
# 22 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
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
# 48 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	.string "Okay, your heat signature is normal.\p"
	.string "You aren't wearing a wire.\p"
	.string "I suppose I can trust you.$"

SiltrootTown_Indoor_Scott_Text_5:
# 59 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	.string "Nobody saw you coming in right?\p"
	.string "We cannot leave together through the\n"
	.string "front door.\p"
	.string "Too many eyes on the street.\p"
	.string "Satellite flyover is in three minutes.$"

SiltrootTown_Indoor_Scott_Text_6:
# 86 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
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
# 106 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	.string "No answers?\n"
	.string "GET OUT! NOW!$"
