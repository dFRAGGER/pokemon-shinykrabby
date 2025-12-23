SiltrootTown_Indoor_Ali_Apothecary_MapScripts::
# 2 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SiltrootTown_Indoor_Ali_Apothecary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SiltrootTown_Indoor_Ali_Apothecary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	map_script_2 VAR_SILTROOT_TOWN_STATE, 0, SiltrootTown_Indoor_Apothecary_Ali_Giel
	.2byte 0


SiltrootTown_Indoor_Apothecary_Ali_Giel::
# 8 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 9 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setvar VAR_SILTROOT_TOWN_STATE, 1
# 10 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	playse SE_PIN
# 11 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_0
# 12 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 13 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 14 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_1, MSGBOX_AUTOCLOSE
# 15 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 16 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_1
# 17 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 18 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 19 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
# 20 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_3, MSGBOX_AUTOCLOSE
# 21 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 22 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3
# 23 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 24 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 25 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_4, MSGBOX_AUTOCLOSE
# 26 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 27 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 28 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 5, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_4
# 29 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 30 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	playse SE_PIN
# 31 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 32 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 33 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_5, MSGBOX_AUTOCLOSE
# 34 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 35 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 36 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 37 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 5, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_5
# 38 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 39 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 40 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 5, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6
# 41 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 42 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 43 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
# 44 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_6, MSGBOX_AUTOCLOSE
# 45 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 46 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 5, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_7
# 47 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 48 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 49 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
# 50 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_7
# 51 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 52 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3
# 53 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 54 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_8
# 55 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 56 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 57 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_9, MSGBOX_AUTOCLOSE
# 58 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 59 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 60 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	playse SE_POKENAV_CALL
# 61 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 62 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	playse SE_POKENAV_CALL
# 63 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 64 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 65 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_8
# 66 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
# 67 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_10, MSGBOX_AUTOCLOSE
# 68 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 69 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_9
# 70 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3
# 71 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_10
# 72 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 73 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
# 74 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_11, MSGBOX_AUTOCLOSE
# 75 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 76 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_11
# 77 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 78 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setflag FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1
# 79 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	removeobject 1
# 80 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	removeobject 5
# 81 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 120
# 82 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6
# 83 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 84 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 85 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_12, MSGBOX_AUTOCLOSE
# 86 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 87 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6
# 88 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 89 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end


Siltroottown_Indoor_Apothecary_Ali::
# 94 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 95 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	faceplayer
# 96 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto_if_unset FLAG_SILTROOTTOWN_STASH_SACK, Siltroottown_Indoor_Apothecary_Ali_11
Siltroottown_Indoor_Apothecary_Ali_9:
# 101 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto_if_set FLAG_SILTROOTTOWN_STASH_SACK, Siltroottown_Indoor_Apothecary_Ali_8
Siltroottown_Indoor_Apothecary_Ali_6:
# 123 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto_if_set FLAG_SILTROOTTOWN_STASH_SACK, Siltroottown_Indoor_Apothecary_Ali_5
Siltroottown_Indoor_Apothecary_Ali_1:
# 128 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end

Siltroottown_Indoor_Apothecary_Ali_2:
# 97 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 98 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_0, MSGBOX_AUTOCLOSE
# 99 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
	goto Siltroottown_Indoor_Apothecary_Ali_1

Siltroottown_Indoor_Apothecary_Ali_3:
# 102 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 103 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_1, MSGBOX_AUTOCLOSE
# 104 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 105 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 106 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 107 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 40
# 108 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6
# 109 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 110 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 40
# 111 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, Siltroottown_Indoor_Apothecary_Ali_Movement_0
# 112 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 113 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 40
# 114 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3
# 115 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 116 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 40
# 117 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, Siltroottown_Indoor_Apothecary_Ali_Movement_1
# 118 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 119 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_2, MSGBOX_AUTOCLOSE
# 120 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
	goto Siltroottown_Indoor_Apothecary_Ali_1

Siltroottown_Indoor_Apothecary_Ali_4:
# 124 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 125 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_3
# 126 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
	goto Siltroottown_Indoor_Apothecary_Ali_1

Siltroottown_Indoor_Apothecary_Ali_5:
# 123 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto_if_set FLAG_HIDE_SCOTT_AFTER_CONVO, Siltroottown_Indoor_Apothecary_Ali_4
	goto Siltroottown_Indoor_Apothecary_Ali_1

Siltroottown_Indoor_Apothecary_Ali_8:
# 101 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto_if_unset FLAG_HIDE_SCOTT_AFTER_CONVO, Siltroottown_Indoor_Apothecary_Ali_3
	goto Siltroottown_Indoor_Apothecary_Ali_6

Siltroottown_Indoor_Apothecary_Ali_11:
# 96 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto_if_unset FLAG_HIDE_SCOTT_AFTER_CONVO, Siltroottown_Indoor_Apothecary_Ali_2
	goto Siltroottown_Indoor_Apothecary_Ali_9


# 11 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_0:
# 11 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	emote_question_mark
# 11 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_down
	step_end

# 16 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_1:
# 16 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_left
# 16 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_down
	step_end

# 18 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2:
# 18 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_left
	step_end

# 22 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3:
# 22 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_down
	step_end

# 28 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_4:
# 28 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 28 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 28 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 28 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 28 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 28 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_right
# 28 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_right
# 28 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_right
# 28 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_down
# 28 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	emote_question_mark
	step_end

# 37 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_5:
# 37 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
# 37 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_right
	step_end

# 40 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6:
# 40 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_up
	step_end

# 46 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_7:
# 46 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 46 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_left
# 46 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_left
# 46 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_left
# 46 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
# 46 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
# 46 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
# 46 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
# 46 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
	step_end

# 65 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_8:
# 65 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	emote_question_mark
	step_end

# 69 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_9:
# 69 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_down
# 69 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_down
# 69 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_down
# 69 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_right
	step_end

# 71 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_10:
# 71 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_right
# 71 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_left
	step_end

# 76 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_11:
# 76 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_down
	step_end

# 111 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
Siltroottown_Indoor_Apothecary_Ali_Movement_0:
# 111 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_right
	step_end

# 117 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
Siltroottown_Indoor_Apothecary_Ali_Movement_1:
# 117 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_player
	step_end

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0:
# 13 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Ali$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_1:
# 14 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Whoa... enter the event horizon, my\n"
	.string "friend.\p"
	.string "You have pulled into my gravity well.\p"
	.string "You look like you are carrying a lot of\n"
	.string "mass on your shoulders.\p"
	.string "We have the finest herbs here... grown\n"
	.string "with hydroponics that rival NASA specs.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2:
# 19 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Giel$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_3:
# 20 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "cough... COUGH!\p"
	.string "Don't let him start on the space stuff,\n"
	.string "kid.\p"
	.string "He stares at the sky all night.\p"
	.string "It's just lights in the dark, Ali.\p"
	.string "cough...\p"
	.string "Like an Artic Monkey concert but\n"
	.string "further away.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_4:
# 25 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Wait... the vibrations are shifting.\p"
	.string "Daan sent you?\p"
	.string "Whoa. That guy is intense.\p"
	.string "Always shouting about 'Mother Nature'...\p"
	.string "He thinks too small.\p"
	.string "I'm thinking about the bigger picture.\n"
	.string "The cosmos. The singularity.\p"
	.string "Talking about singularity... Slowbro,\n"
	.string "bring me a sample of that OG Kush.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_5:
# 33 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Slowbro, abort launch.\p"
	.string "Our guest is grounded.\p"
	.string "More for us, right?\p"
	.string "I need the focus anyway.\p"
	.string "My Master's thesis on supermassive\n"
	.string "black holes isn't going to write itself.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_6:
# 44 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Thanks Slowbro. These herbs will do me\n"
	.string "good.\p"
	.string "cough... COUGH!$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_7:
# 50 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "So you need a ride to Lion's Arch?\p"
	.string "That frozen wasteland up north?\p"
	.string "Why would anyone want to go there?\p"
	.string "There's no good music scene, just ice\n"
	.string "and corporate shills.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_8:
# 54 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "It is a long trip across the wild ocean.\p"
	.string "You need my neighbor, Scott.\p"
	.string "He... moves inventory for me.\p"
	.string "This business funds my, uh... 'hardware\n"
	.string "acquisitions'.\p"
	.string "Rocket fuel isn't cheap, you know?\p"
	.string "I mean... high-quality fertilizer. Yeah.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_9:
# 57 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "I believe in Karma. Celestial mechanics.\p"
	.string "I help you, you help me.\p"
	.string "I have a client in Lion's Arch.\p"
	.string "A DJ... cool guy.\p"
	.string "He helps fund my 'Project Star-Shot'.\p"
	.string "I mean, he buys a lot of product.\p"
	.string "I have a stash stacked in an old shed\n"
	.string "deep in the southern mangroves.\p"
	.string "Go get the package, bring it to Scott,\n"
	.string "and tell him it is for the 'Ice Cold' run.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_10:
# 67 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "...\p"
	.string "Wait... that's my phone?\p"
	.string "Oh for the love of...\p"
	.string "It's her.\p"
	.string "She probably crashed her car again or\n"
	.string "needs 'emotional support'.\p"
	.string "I can't deal with this drama right now,\n"
	.string "but I have to take this.\p"
	.string "...COUGH!\p"
	.string "See you around, kid. Don't let the\n"
	.string "system grind you down.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_11:
# 74 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Oh... if you are ever visit Hezik Town,\n"
	.string "let me know.\p"
	.string "Maybe you can visit one of my history\n"
	.string "lectures, girls love that shit.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_12:
# 85 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "He loves that woman, even if the\n"
	.string "thermodynamics of their relationship\l"
	.string "are unstable.\p"
	.string "Alright, good vibes only.\p"
	.string "Go to the southern mangroves, grab the\n"
	.string "stash, find Scott.\p"
	.string "And watch the sky... big things are\n"
	.string "coming.$"

Siltroottown_Indoor_Apothecary_Ali_Text_0:
# 98 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Follow coastline south, there you'll\n"
	.string "find a passage to a small shed.\p"
	.string "Feel free to take any samples if you'd\n"
	.string "like.\p"
	.string "The herbs are in that shed are some of\n"
	.string "the strongest I got hehe.$"

Siltroottown_Indoor_Apothecary_Ali_Text_1:
# 103 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Ah, the satellite returns to base.\p"
	.string "You smell like swamp water... and\n"
	.string "success.\p"
	.string "Those Slowbros in the shed are hard\n"
	.string "workers, but their processing speed is\l"
	.string "a bit low, right?\p"
	.string "You got the package? Stellar.\p"
	.string "My client in Lion's Arch is going to be\n"
	.string "very happy.\p"
	.string "This funds the next phase of the... uh,\n"
	.string "'hydro-garden project'.$"

Siltroottown_Indoor_Apothecary_Ali_Text_2:
# 119 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Okay, listen closely.\p"
	.string "Go to the house at the very end of the\n"
	.string "mudflat, right next to mine.\p"
	.string "That is where Scott lives.\p"
	.string "He is a bit... weird.\p"
	.string "And he wears these experimental\n"
	.string "goggles all the time.\p"
	.string "Do not ask him about them.\p"
	.string "Just show him the package and tell him\n"
	.string "you need an 'Ice Cold' run.\p"
	.string "Good luck kiddo.$"

Siltroottown_Indoor_Apothecary_Ali_Text_3:
# 125 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "So you've met scott?\p"
	.string "He's a little bit of weirdo, I know, but\n"
	.string "he gets the job done.\p"
	.string "Good luck on your trip across the\n"
	.string "ocean, it's gonna be a wild one!\p"
	.string "Let me know when you have delivered the\n"
	.string "stash.\p"
	.string "See you around.$"
