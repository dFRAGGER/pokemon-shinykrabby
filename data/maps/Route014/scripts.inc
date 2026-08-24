Route014_MapScripts::
	.byte 0


Route014_Broken_Bridge_Ari::
	lock
	faceplayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	setspeaker Route014_Broken_Bridge_Ari_Text_0
	msgbox Route014_Broken_Bridge_Ari_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	compare VAR_TEMP_0, 89
	goto_if_eq Route014_Broken_Bridge_Ari_3
Route014_Broken_Bridge_Ari_1:
	compare VAR_TEMP_0, 87
	goto_if_eq Route014_Broken_Bridge_Ari_8
Route014_Broken_Bridge_Ari_6:
	compare VAR_TEMP_0, 88
	goto_if_eq Route014_Broken_Bridge_Ari_13
Route014_Broken_Bridge_Ari_11:
	compare VAR_TEMP_0, 88
	goto_if_eq Route014_Broken_Bridge_Ari_18
Route014_Broken_Bridge_Ari_16:
	setspeaker Route014_Broken_Bridge_Ari_Text_0
	msgbox Route014_Broken_Bridge_Ari_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_1
	waitmovement
	delay 60
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_1
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_5
	waitmovement
	delay 60
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	setspeaker Route014_Broken_Bridge_Ari_Text_0
	msgbox Route014_Broken_Bridge_Ari_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	hidefollower
	setflag FLAG_TEMP_HIDE_FOLLOWER
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_6
	waitmovement
	compare VAR_TEMP_0, 88
	goto_if_eq Route014_Broken_Bridge_Ari_23
Route014_Broken_Bridge_Ari_21:
	compare VAR_TEMP_0, 88
	goto_if_eq Route014_Broken_Bridge_Ari_28
Route014_Broken_Bridge_Ari_26:
	delay 60
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_3
	waitmovement
	setspeaker Route014_Broken_Bridge_Ari_Text_0
	msgbox Route014_Broken_Bridge_Ari_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_1
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_10
	waitmovement
	delay 60
	msgbox Route014_Broken_Bridge_Ari_Text_5, MSGBOX_AUTOCLOSE
	waitmessage
	setflag FLAG_ARI_HIDE_JUMP_CHALLENGE
	playse ( SE_PIN )
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_11
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_12
	waitmovement
	removeobject 17
	clearflag FLAG_TEMP_HIDE_FOLLOWER
	release
	end

Route014_Broken_Bridge_Ari_2:
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_0
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_1
	waitmovement
	delay 90
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_2
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_3
	waitmovement
	goto Route014_Broken_Bridge_Ari_1

Route014_Broken_Bridge_Ari_3:
	compare VAR_TEMP_1, 19
	goto_if_eq Route014_Broken_Bridge_Ari_2
	goto Route014_Broken_Bridge_Ari_1

Route014_Broken_Bridge_Ari_7:
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_1
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_4
	waitmovement
	delay 90
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_3
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_2
	waitmovement
	goto Route014_Broken_Bridge_Ari_6

Route014_Broken_Bridge_Ari_8:
	compare VAR_TEMP_1, 19
	goto_if_eq Route014_Broken_Bridge_Ari_7
	goto Route014_Broken_Bridge_Ari_6

Route014_Broken_Bridge_Ari_12:
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_1
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_1
	waitmovement
	delay 90
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_2
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_3
	waitmovement
	goto Route014_Broken_Bridge_Ari_11

Route014_Broken_Bridge_Ari_13:
	compare VAR_TEMP_1, 18
	goto_if_eq Route014_Broken_Bridge_Ari_12
	goto Route014_Broken_Bridge_Ari_11

Route014_Broken_Bridge_Ari_17:
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_1
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_1
	waitmovement
	delay 90
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_3
	applymovement 17, Route014_Broken_Bridge_Ari_Movement_2
	waitmovement
	goto Route014_Broken_Bridge_Ari_16

Route014_Broken_Bridge_Ari_18:
	compare VAR_TEMP_1, 20
	goto_if_eq Route014_Broken_Bridge_Ari_17
	goto Route014_Broken_Bridge_Ari_16

Route014_Broken_Bridge_Ari_22:
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_7
	waitmovement
	delay 60
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_8
	waitmovement
	goto Route014_Broken_Bridge_Ari_21

Route014_Broken_Bridge_Ari_23:
	compare VAR_TEMP_1, 18
	goto_if_eq Route014_Broken_Bridge_Ari_22
	goto Route014_Broken_Bridge_Ari_21

Route014_Broken_Bridge_Ari_27:
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_9
	waitmovement
	delay 60
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_8
	waitmovement
	goto Route014_Broken_Bridge_Ari_26

Route014_Broken_Bridge_Ari_28:
	compare VAR_TEMP_1, 20
	goto_if_eq Route014_Broken_Bridge_Ari_27
	goto Route014_Broken_Bridge_Ari_26


Route014_Broken_Bridge_Trigger_East::
	setvar VAR_TEMP_3, 1
	lockall
	msgbox Route014_Broken_Bridge_Trigger_East_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route014_Broken_Bridge_Trigger_East_2
	hidefollower
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Trigger_East_Movement_0
	waitmovement
	delay 30
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Trigger_East_Movement_1
	waitmovement
	setvar VAR_TEMP_3, 0
	releaseall
	end

Route014_Broken_Bridge_Trigger_East_2:
	setvar VAR_TEMP_3, 0
	releaseall
	end


Route014_Broken_Bridge_Trigger_West::
	setvar VAR_TEMP_4, 1
	lockall
	msgbox Route014_Broken_Bridge_Trigger_East_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route014_Broken_Bridge_Trigger_West_2
	hidefollower
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Trigger_West_Movement_0
	waitmovement
	delay 30
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Trigger_West_Movement_1
	waitmovement
	setvar VAR_TEMP_4, 0
	releaseall
	end

Route014_Broken_Bridge_Trigger_West_2:
	setvar VAR_TEMP_4, 0
	releaseall
	end


Route014_Broken_Bridge_Ari_Movement_0:
	walk_up
	walk_left
	face_right
	step_end

Route014_Broken_Bridge_Ari_Movement_1:
	face_right
	step_end

Route014_Broken_Bridge_Ari_Movement_2:
	face_down
	step_end

Route014_Broken_Bridge_Ari_Movement_3:
	face_up
	step_end

Route014_Broken_Bridge_Ari_Movement_4:
	walk_down
	walk_right
	step_end

Route014_Broken_Bridge_Ari_Movement_5:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	jump_2_right
	walk_fast_right
	face_left
	step_end

Route014_Broken_Bridge_Ari_Movement_6:
	walk_up
	face_down
	step_end

Route014_Broken_Bridge_Ari_Movement_7:
	walk_down
	face_right
	step_end

Route014_Broken_Bridge_Ari_Movement_8:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	jump_2_right
	walk_fast_right
	step_end

Route014_Broken_Bridge_Ari_Movement_9:
	walk_up
	face_right
	step_end

Route014_Broken_Bridge_Ari_Movement_10:
	walk_right
	walk_down
	face_right
	step_end

Route014_Broken_Bridge_Ari_Movement_11:
	emote_exclamation_mark
	step_end

Route014_Broken_Bridge_Ari_Movement_12:
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Route014_Broken_Bridge_Trigger_East_Movement_0:
	walk_left
	walk_left
	face_right
	step_end

Route014_Broken_Bridge_Trigger_East_Movement_1:
	walk_fast_right
	walk_fast_right
	jump_2_right
	step_end

Route014_Broken_Bridge_Trigger_West_Movement_0:
	walk_right
	walk_right
	face_left
	step_end

Route014_Broken_Bridge_Trigger_West_Movement_1:
	walk_fast_left
	walk_fast_left
	jump_2_left
	step_end

Route014_Broken_Bridge_Ari_Text_0:
	.string "ARI$"

Route014_Broken_Bridge_Ari_Text_1:
	.string "There you are. Now that your legs have\n"
	.string "some STRENGTH, I can actually race you.\p"
	.string "But first a test. Look at that gap.$"

Route014_Broken_Bridge_Ari_Text_2:
	.string "Nobody gets across that standing still.\n"
	.string "You have to RUN at it.\p"
	.string "Here's the whole secret, and people pay\n"
	.string "me for this: don't speed up at the edge.\p"
	.string "Speed up EARLY. Then just... keep going.\p"
	.string "Right. On three. Try to keep up.$"

Route014_Broken_Bridge_Ari_Text_3:
	.string "Well, what are you waiting for? Get\n"
	.string "across that gap!$"

Route014_Broken_Bridge_Ari_Text_4:
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
	.string "Ready, set ... GO!$"

Route014_Broken_Bridge_Trigger_East_Text_0:
	.string "Try to jump?$"
