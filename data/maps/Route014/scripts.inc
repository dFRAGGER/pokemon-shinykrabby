Route014_MapScripts::
	.byte 0


Route014_Broken_Bridge_Ari::
# 4 "data/maps/Route014/scripts.pory"
	lock
# 5 "data/maps/Route014/scripts.pory"
	faceplayer
# 6 "data/maps/Route014/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 7 "data/maps/Route014/scripts.pory"
	setspeaker Route014_Broken_Bridge_Ari_Text_0
# 8 "data/maps/Route014/scripts.pory"
	msgbox Route014_Broken_Bridge_Ari_Text_1, MSGBOX_AUTOCLOSE
# 9 "data/maps/Route014/scripts.pory"
	waitmessage
# 10 "data/maps/Route014/scripts.pory"
	compare VAR_TEMP_0, 89
	goto_if_eq Route014_Broken_Bridge_Ari_3
Route014_Broken_Bridge_Ari_1:
# 19 "data/maps/Route014/scripts.pory"
	compare VAR_TEMP_0, 87
	goto_if_eq Route014_Broken_Bridge_Ari_8
Route014_Broken_Bridge_Ari_6:
# 28 "data/maps/Route014/scripts.pory"
	compare VAR_TEMP_0, 88
	goto_if_eq Route014_Broken_Bridge_Ari_13
Route014_Broken_Bridge_Ari_11:
# 37 "data/maps/Route014/scripts.pory"
	compare VAR_TEMP_0, 88
	goto_if_eq Route014_Broken_Bridge_Ari_18
Route014_Broken_Bridge_Ari_16:
# 46 "data/maps/Route014/scripts.pory"
	setspeaker Route014_Broken_Bridge_Ari_Text_0
# 47 "data/maps/Route014/scripts.pory"
	msgbox Route014_Broken_Bridge_Ari_Text_2, MSGBOX_AUTOCLOSE
# 48 "data/maps/Route014/scripts.pory"
	waitmessage
# 49 "data/maps/Route014/scripts.pory"
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_1
# 50 "data/maps/Route014/scripts.pory"
	waitmovement
# 51 "data/maps/Route014/scripts.pory"
	delay 60
# 52 "data/maps/Route014/scripts.pory"
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_1
# 53 "data/maps/Route014/scripts.pory"
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_5
# 54 "data/maps/Route014/scripts.pory"
	waitmovement
# 55 "data/maps/Route014/scripts.pory"
	delay 60
# 56 "data/maps/Route014/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 57 "data/maps/Route014/scripts.pory"
	setspeaker Route014_Broken_Bridge_Ari_Text_0
# 58 "data/maps/Route014/scripts.pory"
	msgbox Route014_Broken_Bridge_Ari_Text_3, MSGBOX_AUTOCLOSE
# 59 "data/maps/Route014/scripts.pory"
	waitmessage
# 60 "data/maps/Route014/scripts.pory"
	hidefollower
# 61 "data/maps/Route014/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 62 "data/maps/Route014/scripts.pory"
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_6
# 63 "data/maps/Route014/scripts.pory"
	waitmovement
# 64 "data/maps/Route014/scripts.pory"
	compare VAR_TEMP_0, 88
	goto_if_eq Route014_Broken_Bridge_Ari_23
Route014_Broken_Bridge_Ari_21:
# 71 "data/maps/Route014/scripts.pory"
	compare VAR_TEMP_0, 88
	goto_if_eq Route014_Broken_Bridge_Ari_28
Route014_Broken_Bridge_Ari_26:
# 78 "data/maps/Route014/scripts.pory"
	delay 60
# 79 "data/maps/Route014/scripts.pory"
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_3
# 80 "data/maps/Route014/scripts.pory"
	waitmovement
# 81 "data/maps/Route014/scripts.pory"
	setspeaker Route014_Broken_Bridge_Ari_Text_0
# 82 "data/maps/Route014/scripts.pory"
	msgbox Route014_Broken_Bridge_Ari_Text_4, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route014/scripts.pory"
	waitmessage
# 84 "data/maps/Route014/scripts.pory"
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_1
# 85 "data/maps/Route014/scripts.pory"
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_10
# 86 "data/maps/Route014/scripts.pory"
	waitmovement
# 87 "data/maps/Route014/scripts.pory"
	delay 60
# 88 "data/maps/Route014/scripts.pory"
	msgbox Route014_Broken_Bridge_Ari_Text_5, MSGBOX_AUTOCLOSE
# 89 "data/maps/Route014/scripts.pory"
	waitmessage
# 90 "data/maps/Route014/scripts.pory"
	setflag FLAG_ARI_HIDE_JUMP_CHALLENGE
# 91 "data/maps/Route014/scripts.pory"
	playse ( SE_PIN )
# 92 "data/maps/Route014/scripts.pory"
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_11
# 93 "data/maps/Route014/scripts.pory"
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_12
# 94 "data/maps/Route014/scripts.pory"
	waitmovement
# 95 "data/maps/Route014/scripts.pory"
	removeobject 17
# 96 "data/maps/Route014/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 97 "data/maps/Route014/scripts.pory"
	release
	end

Route014_Broken_Bridge_Ari_2:
# 11 "data/maps/Route014/scripts.pory"
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_0
# 12 "data/maps/Route014/scripts.pory"
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_1
# 13 "data/maps/Route014/scripts.pory"
	waitmovement
# 14 "data/maps/Route014/scripts.pory"
	delay 90
# 15 "data/maps/Route014/scripts.pory"
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_2
# 16 "data/maps/Route014/scripts.pory"
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_3
# 17 "data/maps/Route014/scripts.pory"
	waitmovement
	goto Route014_Broken_Bridge_Ari_1

Route014_Broken_Bridge_Ari_3:
# 10 "data/maps/Route014/scripts.pory"
	compare VAR_TEMP_1, 19
	goto_if_eq Route014_Broken_Bridge_Ari_2
	goto Route014_Broken_Bridge_Ari_1

Route014_Broken_Bridge_Ari_7:
# 20 "data/maps/Route014/scripts.pory"
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_1
# 21 "data/maps/Route014/scripts.pory"
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_4
# 22 "data/maps/Route014/scripts.pory"
	waitmovement
# 23 "data/maps/Route014/scripts.pory"
	delay 90
# 24 "data/maps/Route014/scripts.pory"
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_3
# 25 "data/maps/Route014/scripts.pory"
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_2
# 26 "data/maps/Route014/scripts.pory"
	waitmovement
	goto Route014_Broken_Bridge_Ari_6

Route014_Broken_Bridge_Ari_8:
# 19 "data/maps/Route014/scripts.pory"
	compare VAR_TEMP_1, 19
	goto_if_eq Route014_Broken_Bridge_Ari_7
	goto Route014_Broken_Bridge_Ari_6

Route014_Broken_Bridge_Ari_12:
# 29 "data/maps/Route014/scripts.pory"
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_1
# 30 "data/maps/Route014/scripts.pory"
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_1
# 31 "data/maps/Route014/scripts.pory"
	waitmovement
# 32 "data/maps/Route014/scripts.pory"
	delay 90
# 33 "data/maps/Route014/scripts.pory"
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_2
# 34 "data/maps/Route014/scripts.pory"
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_3
# 35 "data/maps/Route014/scripts.pory"
	waitmovement
	goto Route014_Broken_Bridge_Ari_11

Route014_Broken_Bridge_Ari_13:
# 28 "data/maps/Route014/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq Route014_Broken_Bridge_Ari_12
	goto Route014_Broken_Bridge_Ari_11

Route014_Broken_Bridge_Ari_17:
# 38 "data/maps/Route014/scripts.pory"
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_1
# 39 "data/maps/Route014/scripts.pory"
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_1
# 40 "data/maps/Route014/scripts.pory"
	waitmovement
# 41 "data/maps/Route014/scripts.pory"
	delay 90
# 42 "data/maps/Route014/scripts.pory"
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_3
# 43 "data/maps/Route014/scripts.pory"
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_2
# 44 "data/maps/Route014/scripts.pory"
	waitmovement
	goto Route014_Broken_Bridge_Ari_16

Route014_Broken_Bridge_Ari_18:
# 37 "data/maps/Route014/scripts.pory"
	compare VAR_TEMP_1, 20
	goto_if_eq Route014_Broken_Bridge_Ari_17
	goto Route014_Broken_Bridge_Ari_16

Route014_Broken_Bridge_Ari_22:
# 65 "data/maps/Route014/scripts.pory"
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_7
# 66 "data/maps/Route014/scripts.pory"
	waitmovement
# 67 "data/maps/Route014/scripts.pory"
	delay 60
# 68 "data/maps/Route014/scripts.pory"
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_8
# 69 "data/maps/Route014/scripts.pory"
	waitmovement
	goto Route014_Broken_Bridge_Ari_21

Route014_Broken_Bridge_Ari_23:
# 64 "data/maps/Route014/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq Route014_Broken_Bridge_Ari_22
	goto Route014_Broken_Bridge_Ari_21

Route014_Broken_Bridge_Ari_27:
# 72 "data/maps/Route014/scripts.pory"
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_9
# 73 "data/maps/Route014/scripts.pory"
	waitmovement
# 74 "data/maps/Route014/scripts.pory"
	delay 60
# 75 "data/maps/Route014/scripts.pory"
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_8
# 76 "data/maps/Route014/scripts.pory"
	waitmovement
	goto Route014_Broken_Bridge_Ari_26

Route014_Broken_Bridge_Ari_28:
# 71 "data/maps/Route014/scripts.pory"
	compare VAR_TEMP_1, 20
	goto_if_eq Route014_Broken_Bridge_Ari_27
	goto Route014_Broken_Bridge_Ari_26


Route014_Broken_Bridge_Trigger_East::
# 102 "data/maps/Route014/scripts.pory"
	setvar VAR_TEMP_3, 1
# 103 "data/maps/Route014/scripts.pory"
	lockall
# 104 "data/maps/Route014/scripts.pory"
	msgbox Route014_Broken_Bridge_Trigger_East_Text_0, MSGBOX_YESNO
# 105 "data/maps/Route014/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route014_Broken_Bridge_Trigger_East_2
# 110 "data/maps/Route014/scripts.pory"
	hidefollower
# 111 "data/maps/Route014/scripts.pory"
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Trigger_East_Movement_0
# 112 "data/maps/Route014/scripts.pory"
	waitmovement
# 113 "data/maps/Route014/scripts.pory"
	delay 30
# 114 "data/maps/Route014/scripts.pory"
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Trigger_East_Movement_1
# 115 "data/maps/Route014/scripts.pory"
	waitmovement
# 116 "data/maps/Route014/scripts.pory"
	setvar VAR_TEMP_3, 0
# 117 "data/maps/Route014/scripts.pory"
	releaseall
	end

Route014_Broken_Bridge_Trigger_East_2:
# 106 "data/maps/Route014/scripts.pory"
	setvar VAR_TEMP_3, 0
# 107 "data/maps/Route014/scripts.pory"
	releaseall
	end


Route014_Broken_Bridge_Trigger_West::
# 122 "data/maps/Route014/scripts.pory"
	setvar VAR_TEMP_4, 1
# 123 "data/maps/Route014/scripts.pory"
	lockall
# 124 "data/maps/Route014/scripts.pory"
	msgbox Route014_Broken_Bridge_Trigger_East_Text_0, MSGBOX_YESNO
# 125 "data/maps/Route014/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route014_Broken_Bridge_Trigger_West_2
# 130 "data/maps/Route014/scripts.pory"
	hidefollower
# 131 "data/maps/Route014/scripts.pory"
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Trigger_West_Movement_0
# 132 "data/maps/Route014/scripts.pory"
	waitmovement
# 133 "data/maps/Route014/scripts.pory"
	delay 30
# 134 "data/maps/Route014/scripts.pory"
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Trigger_West_Movement_1
# 135 "data/maps/Route014/scripts.pory"
	waitmovement
# 136 "data/maps/Route014/scripts.pory"
	setvar VAR_TEMP_4, 0
# 137 "data/maps/Route014/scripts.pory"
	releaseall
	end

Route014_Broken_Bridge_Trigger_West_2:
# 126 "data/maps/Route014/scripts.pory"
	setvar VAR_TEMP_4, 0
# 127 "data/maps/Route014/scripts.pory"
	releaseall
	end


# 11 "data/maps/Route014/scripts.pory"
Route014_Broken_Bridge_Ari_Movement_0:
# 11 "data/maps/Route014/scripts.pory"
	walk_up
# 11 "data/maps/Route014/scripts.pory"
	walk_left
# 11 "data/maps/Route014/scripts.pory"
	face_right
	step_end

# 12 "data/maps/Route014/scripts.pory"
Route014_Broken_Bridge_Ari_Movement_1:
# 12 "data/maps/Route014/scripts.pory"
	face_right
	step_end

# 15 "data/maps/Route014/scripts.pory"
Route014_Broken_Bridge_Ari_Movement_2:
# 15 "data/maps/Route014/scripts.pory"
	face_down
	step_end

# 16 "data/maps/Route014/scripts.pory"
Route014_Broken_Bridge_Ari_Movement_3:
# 16 "data/maps/Route014/scripts.pory"
	face_up
	step_end

# 21 "data/maps/Route014/scripts.pory"
Route014_Broken_Bridge_Ari_Movement_4:
# 21 "data/maps/Route014/scripts.pory"
	walk_down
# 21 "data/maps/Route014/scripts.pory"
	walk_right
	step_end

# 53 "data/maps/Route014/scripts.pory"
Route014_Broken_Bridge_Ari_Movement_5:
# 53 "data/maps/Route014/scripts.pory"
	walk_fast_right
# 53 "data/maps/Route014/scripts.pory"
	walk_fast_right
# 53 "data/maps/Route014/scripts.pory"
	walk_fast_right
# 53 "data/maps/Route014/scripts.pory"
	jump_2_right
# 53 "data/maps/Route014/scripts.pory"
	walk_fast_right
# 53 "data/maps/Route014/scripts.pory"
	face_left
	step_end

# 62 "data/maps/Route014/scripts.pory"
Route014_Broken_Bridge_Ari_Movement_6:
# 62 "data/maps/Route014/scripts.pory"
	walk_up
# 62 "data/maps/Route014/scripts.pory"
	face_down
	step_end

# 65 "data/maps/Route014/scripts.pory"
Route014_Broken_Bridge_Ari_Movement_7:
# 65 "data/maps/Route014/scripts.pory"
	walk_down
# 65 "data/maps/Route014/scripts.pory"
	face_right
	step_end

# 68 "data/maps/Route014/scripts.pory"
Route014_Broken_Bridge_Ari_Movement_8:
# 68 "data/maps/Route014/scripts.pory"
	walk_fast_right
# 68 "data/maps/Route014/scripts.pory"
	walk_fast_right
# 68 "data/maps/Route014/scripts.pory"
	walk_fast_right
# 68 "data/maps/Route014/scripts.pory"
	jump_2_right
# 68 "data/maps/Route014/scripts.pory"
	walk_fast_right
	step_end

# 72 "data/maps/Route014/scripts.pory"
Route014_Broken_Bridge_Ari_Movement_9:
# 72 "data/maps/Route014/scripts.pory"
	walk_up
# 72 "data/maps/Route014/scripts.pory"
	face_right
	step_end

# 85 "data/maps/Route014/scripts.pory"
Route014_Broken_Bridge_Ari_Movement_10:
# 85 "data/maps/Route014/scripts.pory"
	walk_right
# 85 "data/maps/Route014/scripts.pory"
	walk_down
# 85 "data/maps/Route014/scripts.pory"
	face_right
	step_end

# 92 "data/maps/Route014/scripts.pory"
Route014_Broken_Bridge_Ari_Movement_11:
# 92 "data/maps/Route014/scripts.pory"
	emote_exclamation_mark
	step_end

# 93 "data/maps/Route014/scripts.pory"
Route014_Broken_Bridge_Ari_Movement_12:
# 93 "data/maps/Route014/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route014/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route014/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route014/scripts.pory"
	walk_faster_right
# 93 "data/maps/Route014/scripts.pory"
	walk_faster_down
# 93 "data/maps/Route014/scripts.pory"
	walk_faster_down
# 93 "data/maps/Route014/scripts.pory"
	walk_faster_down
# 93 "data/maps/Route014/scripts.pory"
	walk_faster_down
# 93 "data/maps/Route014/scripts.pory"
	walk_faster_down
# 93 "data/maps/Route014/scripts.pory"
	walk_faster_down
# 93 "data/maps/Route014/scripts.pory"
	walk_faster_down
# 93 "data/maps/Route014/scripts.pory"
	walk_faster_down
# 93 "data/maps/Route014/scripts.pory"
	walk_fast_right
# 93 "data/maps/Route014/scripts.pory"
	walk_fast_right
# 93 "data/maps/Route014/scripts.pory"
	walk_fast_right
# 93 "data/maps/Route014/scripts.pory"
	walk_fast_right
# 93 "data/maps/Route014/scripts.pory"
	walk_fast_right
# 93 "data/maps/Route014/scripts.pory"
	walk_fast_right
	step_end

# 111 "data/maps/Route014/scripts.pory"
Route014_Broken_Bridge_Trigger_East_Movement_0:
# 111 "data/maps/Route014/scripts.pory"
	walk_left
# 111 "data/maps/Route014/scripts.pory"
	walk_left
# 111 "data/maps/Route014/scripts.pory"
	face_right
	step_end

# 114 "data/maps/Route014/scripts.pory"
Route014_Broken_Bridge_Trigger_East_Movement_1:
# 114 "data/maps/Route014/scripts.pory"
	walk_fast_right
# 114 "data/maps/Route014/scripts.pory"
	walk_fast_right
# 114 "data/maps/Route014/scripts.pory"
	jump_2_right
	step_end

# 131 "data/maps/Route014/scripts.pory"
Route014_Broken_Bridge_Trigger_West_Movement_0:
# 131 "data/maps/Route014/scripts.pory"
	walk_right
# 131 "data/maps/Route014/scripts.pory"
	walk_right
# 131 "data/maps/Route014/scripts.pory"
	face_left
	step_end

# 134 "data/maps/Route014/scripts.pory"
Route014_Broken_Bridge_Trigger_West_Movement_1:
# 134 "data/maps/Route014/scripts.pory"
	walk_fast_left
# 134 "data/maps/Route014/scripts.pory"
	walk_fast_left
# 134 "data/maps/Route014/scripts.pory"
	jump_2_left
	step_end

Route014_Broken_Bridge_Ari_Text_0:
# 7 "data/maps/Route014/scripts.pory"
	.string "ARI$"

Route014_Broken_Bridge_Ari_Text_1:
# 8 "data/maps/Route014/scripts.pory"
	.string "There you are. Now that your legs have\n"
	.string "some STRENGTH, I can actually race you.\p"
	.string "But first a test. Look at that gap.$"

Route014_Broken_Bridge_Ari_Text_2:
# 47 "data/maps/Route014/scripts.pory"
	.string "Nobody gets across that standing still.\n"
	.string "You have to RUN at it.\p"
	.string "Here's the whole secret, and people pay\n"
	.string "me for this: don't speed up at the edge.\p"
	.string "Speed up EARLY. Then just... keep going.\p"
	.string "Right. On three. Try to keep up.$"

Route014_Broken_Bridge_Ari_Text_3:
# 58 "data/maps/Route014/scripts.pory"
	.string "Well, what are you waiting for? Get\n"
	.string "across that gap!$"

Route014_Broken_Bridge_Ari_Text_4:
# 82 "data/maps/Route014/scripts.pory"
	.string "Well well, you made it. I guess you can\n"
	.string "call yourself a runner now.\p"
	.string "I don't know if you can beat me, but at\n"
	.string "least you can keep up.\p"
	.string "I'm making my daily trip towards the\n"
	.string "Breeze Tower, got some trainer dates\l"
	.string "setup.\p"
	.string "I'm basicly their biggest investor at\n"
	.string "the moment.\p"
	.string "Without me the Breeze Tower would have\n"
	.string "gone bankrupt a long time ago.\p"
	.string "I guess I can do a sprint battle along\n"
	.string "the way though, meet me at the large\l"
	.string "bridge up ahead.$"

Route014_Broken_Bridge_Ari_Text_5:
# 88 "data/maps/Route014/scripts.pory"
	.string "Ready, set ... GO!$"

Route014_Broken_Bridge_Trigger_East_Text_0:
# 104 "data/maps/Route014/scripts.pory"
	.string "Try to jump?$"
