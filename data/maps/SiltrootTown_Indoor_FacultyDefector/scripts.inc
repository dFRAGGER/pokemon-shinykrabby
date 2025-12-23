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
# 95 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	goto_if_unset FLAG_SILTROOTTOWN_STASH_SACK, SiltrootTown_Indoor_Scott_3
SiltrootTown_Indoor_Scott_1:
# 107 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	release
	end

SiltrootTown_Indoor_Scott_2:
# 12 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 13 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	setspeaker SiltrootTown_Indoor_Scott_Text_0
# 14 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	msgbox SiltrootTown_Indoor_Scott_Text_2
# 15 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmessage
# 16 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq SiltrootTown_Indoor_Scott_7
# 27 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq SiltrootTown_Indoor_Scott_8
SiltrootTown_Indoor_Scott_6:
# 38 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	setspeaker SiltrootTown_Indoor_Scott_Text_0
# 39 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	msgbox SiltrootTown_Indoor_Scott_Text_3, MSGBOX_AUTOCLOSE
# 40 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmessage
# 41 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 40
# 42 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq SiltrootTown_Indoor_Scott_16
# 59 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq SiltrootTown_Indoor_Scott_17
SiltrootTown_Indoor_Scott_15:
# 76 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	setspeaker SiltrootTown_Indoor_Scott_Text_0
# 77 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	msgbox SiltrootTown_Indoor_Scott_Text_5, MSGBOX_AUTOCLOSE
# 78 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmessage
# 79 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq SiltrootTown_Indoor_Scott_21
# 83 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq SiltrootTown_Indoor_Scott_22
SiltrootTown_Indoor_Scott_20:
# 88 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	setflag FLAG_HIDE_SCOTT_AFTER_CONVO
# 89 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	clearflag FLAG_HIDE_SCOTT_OUTSIDE_BOAT
# 90 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	removeobject 1
# 91 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	release
	end

SiltrootTown_Indoor_Scott_3:
# 96 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	msgbox SiltrootTown_Indoor_Scott_Text_6, MSGBOX_AUTOCLOSE
# 97 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmessage
# 98 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq SiltrootTown_Indoor_Scott_11
# 102 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq SiltrootTown_Indoor_Scott_12
	goto SiltrootTown_Indoor_Scott_1

SiltrootTown_Indoor_Scott_7:
# 17 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_1
# 18 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 19 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 60
# 20 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_2
# 21 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 22 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 60
# 23 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_3
# 24 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 25 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 60
	goto SiltrootTown_Indoor_Scott_6

SiltrootTown_Indoor_Scott_8:
# 28 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_4
# 29 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 30 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 60
# 31 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_5
# 32 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 33 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 60
# 34 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_6
# 35 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 36 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 60
	goto SiltrootTown_Indoor_Scott_6

SiltrootTown_Indoor_Scott_11:
# 99 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_16
# 100 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
	goto SiltrootTown_Indoor_Scott_1

SiltrootTown_Indoor_Scott_12:
# 103 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_17
# 104 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
	goto SiltrootTown_Indoor_Scott_1

SiltrootTown_Indoor_Scott_16:
# 43 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_7
# 44 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 45 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_8
# 46 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 60
# 47 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_9
# 48 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 49 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	setspeaker SiltrootTown_Indoor_Scott_Text_0
# 50 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	msgbox SiltrootTown_Indoor_Scott_Text_4, MSGBOX_AUTOCLOSE
# 51 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmessage
# 52 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_8
# 53 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 54 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 60
# 55 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_10
# 56 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 57 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_11
	goto SiltrootTown_Indoor_Scott_15

SiltrootTown_Indoor_Scott_17:
# 60 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_12
# 61 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 62 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_8
# 63 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 60
# 64 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_9
# 65 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 66 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	setspeaker SiltrootTown_Indoor_Scott_Text_0
# 67 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	msgbox SiltrootTown_Indoor_Scott_Text_4, MSGBOX_AUTOCLOSE
# 68 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmessage
# 69 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_8
# 70 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 71 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	delay 60
# 72 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_13
# 73 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
# 74 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_9
	goto SiltrootTown_Indoor_Scott_15

SiltrootTown_Indoor_Scott_21:
# 80 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_14
# 81 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
	goto SiltrootTown_Indoor_Scott_20

SiltrootTown_Indoor_Scott_22:
# 84 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Scott_Movement_15
# 85 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Scott_Movement_14
# 86 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	waitmovement
	goto SiltrootTown_Indoor_Scott_20


# 7 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_0:
# 7 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	emote_exclamation_mark
	step_end

# 17 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_1:
# 17 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_down
# 17 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_left
# 17 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_up
	step_end

# 20 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_2:
# 20 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_left
# 20 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_up
# 20 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_right
	step_end

# 23 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_3:
# 23 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_down
# 23 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_right
# 23 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_right
# 23 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_up
# 23 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_left
	step_end

# 28 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_4:
# 28 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_left
# 28 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_down
# 28 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_right
	step_end

# 31 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_5:
# 31 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_down
# 31 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_right
# 31 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_up
	step_end

# 34 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_6:
# 34 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_left
# 34 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_up
# 34 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_up
# 34 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_right
# 34 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_down
	step_end

# 43 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_7:
# 43 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_down
# 43 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_down
# 43 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_left
# 43 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_down
	step_end

# 45 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_8:
# 45 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_down
	step_end

# 47 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_9:
# 47 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_up
	step_end

# 55 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_10:
# 55 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_up
# 55 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_right
# 55 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_up
# 55 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_up
# 55 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_left
	step_end

# 57 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_11:
# 57 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_right
	step_end

# 60 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_12:
# 60 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_left
# 60 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_down
# 60 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_down
# 60 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_down
	step_end

# 72 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_13:
# 72 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_up
# 72 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_up
# 72 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_up
# 72 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_fast_right
# 72 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_down
	step_end

# 80 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_14:
# 80 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_down
# 80 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_down
# 80 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	walk_down
	step_end

# 84 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_15:
# 84 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	jump_left
# 84 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	face_down
	step_end

# 99 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_16:
# 99 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	jump_left
	step_end

# 103 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
SiltrootTown_Indoor_Scott_Movement_17:
# 103 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
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
# 14 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "..Ali sent you?\p"
	.string "And you have the inventory?\p"
	.string "Hmm.\p"
	.string "One sec...$"

SiltrootTown_Indoor_Scott_Text_3:
# 39 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	.string "Okay, your heat signature is normal.\p"
	.string "You aren't wearing a wire.\p"
	.string "I suppose I can trust you.$"

SiltrootTown_Indoor_Scott_Text_4:
# 50 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	.string "Nobody saw you coming in right?\p"
	.string "We cannot leave together through the\n"
	.string "front door.\p"
	.string "Too many eyes on the street.\p"
	.string "Satellite flyover is in three minutes.$"

SiltrootTown_Indoor_Scott_Text_5:
# 77 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
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

SiltrootTown_Indoor_Scott_Text_6:
# 96 "data/maps/SiltrootTown_Indoor_FacultyDefector/scripts.pory"
	.string "No answers?\n"
	.string "GET OUT! NOW!$"
