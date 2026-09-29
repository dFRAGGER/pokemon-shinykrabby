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
	applymovement LOCALID_ROUTE014_ARI, Route014_Broken_Bridge_Ari_Movement_1
	waitmovement
	delay 60
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_1
	applymovement LOCALID_ROUTE014_ARI, Route014_Broken_Bridge_Ari_Movement_5
	waitmovement
	delay 60
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	setspeaker Route014_Broken_Bridge_Ari_Text_0
	msgbox Route014_Broken_Bridge_Ari_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	hidefollower
	setflag FLAG_TEMP_HIDE_FOLLOWER
	applymovement LOCALID_ROUTE014_ARI, Route014_Broken_Bridge_Ari_Movement_6
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
	applymovement LOCALID_ROUTE014_ARI, Route014_Broken_Bridge_Ari_Movement_10
	waitmovement
	delay 60
	msgbox Route014_Broken_Bridge_Ari_Text_5, MSGBOX_AUTOCLOSE
	waitmessage
	setflag FLAG_ARI_HIDE_JUMP_CHALLENGE
	playse ( SE_PIN )
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_11
	applymovement LOCALID_ROUTE014_ARI, Route014_Broken_Bridge_Ari_Movement_12
	waitmovement
	removeobject LOCALID_ROUTE014_ARI
	clearflag FLAG_TEMP_HIDE_FOLLOWER
	release
	end

Route014_Broken_Bridge_Ari_2:
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_0
	applymovement LOCALID_ROUTE014_ARI, Route014_Broken_Bridge_Ari_Movement_1
	waitmovement
	delay 90
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_2
	applymovement LOCALID_ROUTE014_ARI, Route014_Broken_Bridge_Ari_Movement_3
	waitmovement
	goto Route014_Broken_Bridge_Ari_1

Route014_Broken_Bridge_Ari_3:
	compare VAR_TEMP_1, 19
	goto_if_eq Route014_Broken_Bridge_Ari_2
	goto Route014_Broken_Bridge_Ari_1

Route014_Broken_Bridge_Ari_7:
	applymovement LOCALID_ROUTE014_ARI, Route014_Broken_Bridge_Ari_Movement_1
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_4
	waitmovement
	delay 90
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_3
	applymovement LOCALID_ROUTE014_ARI, Route014_Broken_Bridge_Ari_Movement_2
	waitmovement
	goto Route014_Broken_Bridge_Ari_6

Route014_Broken_Bridge_Ari_8:
	compare VAR_TEMP_1, 19
	goto_if_eq Route014_Broken_Bridge_Ari_7
	goto Route014_Broken_Bridge_Ari_6

Route014_Broken_Bridge_Ari_12:
	applymovement LOCALID_ROUTE014_ARI, Route014_Broken_Bridge_Ari_Movement_1
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_1
	waitmovement
	delay 90
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_2
	applymovement LOCALID_ROUTE014_ARI, Route014_Broken_Bridge_Ari_Movement_3
	waitmovement
	goto Route014_Broken_Bridge_Ari_11

Route014_Broken_Bridge_Ari_13:
	compare VAR_TEMP_1, 18
	goto_if_eq Route014_Broken_Bridge_Ari_12
	goto Route014_Broken_Bridge_Ari_11

Route014_Broken_Bridge_Ari_17:
	applymovement LOCALID_ROUTE014_ARI, Route014_Broken_Bridge_Ari_Movement_1
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_1
	waitmovement
	delay 90
	applymovement LOCALID_PLAYER, Route014_Broken_Bridge_Ari_Movement_3
	applymovement LOCALID_ROUTE014_ARI, Route014_Broken_Bridge_Ari_Movement_2
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


Route014_Trainer_Derk::
	trainerbattle_single TRAINER_DELTA_DERK_SK, Route014_Trainer_Derk_Intro, Route014_Trainer_Derk_Defeat
	msgbox Route014_Trainer_Derk_After, MSGBOX_AUTOCLOSE
	end


Route014_Trainer_Evi::
	trainerbattle_single TRAINER_DELTA_EVI_SK, Route014_Trainer_Evi_Intro, Route014_Trainer_Evi_Defeat
	msgbox Route014_Trainer_Evi_After, MSGBOX_AUTOCLOSE
	end


Route014_Trainer_Hugo::
	trainerbattle_single TRAINER_DELTA_HUGO_SK, Route014_Trainer_Hugo_Intro, Route014_Trainer_Hugo_Defeat
	msgbox Route014_Trainer_Hugo_After, MSGBOX_AUTOCLOSE
	end


Route014_Trainer_Fenna::
	trainerbattle_single TRAINER_DELTA_FENNA_SK, Route014_Trainer_Fenna_Intro, Route014_Trainer_Fenna_Defeat
	msgbox Route014_Trainer_Fenna_After, MSGBOX_AUTOCLOSE
	end


Route014_Trainer_Teun::
	trainerbattle_single TRAINER_DELTA_TEUN_SK, Route014_Trainer_Teun_Intro, Route014_Trainer_Teun_Defeat
	msgbox Route014_Trainer_Teun_After, MSGBOX_AUTOCLOSE
	end


Route014_Trainer_Roos::
	trainerbattle_single TRAINER_DELTA_ROOS_SK, Route014_Trainer_Roos_Intro, Route014_Trainer_Roos_Defeat
	msgbox Route014_Trainer_Roos_After, MSGBOX_AUTOCLOSE
	end


Route014_Trainer_Milo::
	trainerbattle_single TRAINER_DELTA_MILO_SK, Route014_Trainer_Milo_Intro, Route014_Trainer_Milo_Defeat
	msgbox Route014_Trainer_Milo_After, MSGBOX_AUTOCLOSE
	end


Route014_Trainer_Kira::
	trainerbattle_single TRAINER_DELTA_KIRA_SK, Route014_Trainer_Kira_Intro, Route014_Trainer_Kira_Defeat
	msgbox Route014_Trainer_Kira_After, MSGBOX_AUTOCLOSE
	end


Route014_Trainer_Pim::
	trainerbattle_single TRAINER_DELTA_PIM_SK, Route014_Trainer_Pim_Intro, Route014_Trainer_Pim_Defeat
	msgbox Route014_Trainer_Pim_After, MSGBOX_AUTOCLOSE
	end


Route014_Trainer_Lotte::
	trainerbattle_single TRAINER_DELTA_LOTTE_SK, Route014_Trainer_Lotte_Intro, Route014_Trainer_Lotte_Defeat
	msgbox Route014_Trainer_Lotte_After, MSGBOX_AUTOCLOSE
	end


Route014_Trainer_Ward::
	trainerbattle_single TRAINER_DELTA_WARD_SK, Route014_Trainer_Ward_Intro, Route014_Trainer_Ward_Defeat
	msgbox Route014_Trainer_Ward_After, MSGBOX_AUTOCLOSE
	end


Route014_NPC_BridgeCarpenter::
	lock
	faceplayer
	msgbox Route014_NPC_BridgeCarpenter_Text_0
	release
	end


Route014_NPC_OldRoad::
	lock
	faceplayer
	msgbox Route014_NPC_OldRoad_Text_0
	release
	end


Route014_NPC_RiverNotebook::
	lock
	faceplayer
	msgbox Route014_NPC_RiverNotebook_Text_0
	release
	end


Route014_NPC_RangerDirections::
	lock
	faceplayer
	msgbox Route014_NPC_RangerDirections_Text_0
	release
	end


Route014_NPC_YoungRunner::
	lock
	faceplayer
	msgbox Route014_NPC_YoungRunner_Text_0
	release
	end


Route014_NPC_Sketchbook::
	lock
	faceplayer
	msgbox Route014_NPC_Sketchbook_Text_0
	release
	end


Route014_NPC_PatientAngler::
	lock
	faceplayer
	goto_if_set FLAG_MARSHDUKE_CATHEDRAL_TOUR, Route014_NPC_PatientAngler_2
	msgbox Route014_NPC_PatientAngler_Text_1
Route014_NPC_PatientAngler_1:
	release
	end

Route014_NPC_PatientAngler_2:
	msgbox Route014_NPC_PatientAngler_Text_0
	goto Route014_NPC_PatientAngler_1


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

Route014_NPC_BridgeCarpenter_Text_0:
	.string "Ari looks at a gap and sees a sporting\n"
	.string "opportunity. I look at it and see three\l"
	.string "days of work.\p"
	.string "He has never offered to race me\n"
	.string "carrying the timber.$"

Route014_NPC_OldRoad_Text_0:
	.string "The road used to run closer to the bank.\p"
	.string "My knees still try to take the old\n"
	.string "turning.$"

Route014_NPC_RiverNotebook_Text_0:
	.string "I'm comparing the side channels. Some\n"
	.string "carry less water than the old surveys\l"
	.string "show.\p"
	.string "Why? That's the next part of the job.$"

Route014_NPC_RangerDirections_Text_0:
	.string "There are some huts in the estuary\n"
	.string "belonging to the rangers.\p"
	.string "Each looks over a different stretch of\n"
	.string "the floodplain.$"

Route014_NPC_YoungRunner_Text_0:
	.string "Ari told me good shoes make you fast.\p"
	.string "I'm saving up for a good pair.$"

Route014_NPC_Sketchbook_Text_0:
	.string "I drew every angle of the city but I\n"
	.string "forgot to draw the water.\p"
	.string "Very detailed picture of a thing\n"
	.string "floating in absolutely nothing.$"

Route014_NPC_PatientAngler_Text_0:
	.string "One fish today.\p"
	.string "You saw old fishing records in the city?\n"
	.string "Bring the dates next time. I'd like to\l"
	.string "compare them with mine.$"

Route014_NPC_PatientAngler_Text_1:
	.string "One fish today. I wrote it down, same as\n"
	.string "always.$"

Route014_Trainer_Derk_Intro::
	.string "I've had enough waiting for a bite!$"

Route014_Trainer_Derk_Defeat::
	.string "Back to fishing, then!$"

Route014_Trainer_Derk_After::
	.string "I promised to be home by lunchtime if\n"
	.string "nothing was biting. That was yesterday.$"

Route014_Trainer_Evi_Intro::
	.string "Help me wear these two out!$"

Route014_Trainer_Evi_Defeat::
	.string "I'm the one who's worn out!$"

Route014_Trainer_Evi_After::
	.string "AIPOM stole the route sign and\n"
	.string "SNUBBULL won't let me put it back. Sorry\l"
	.string "if you got lost.$"

Route014_Trainer_Hugo_Intro::
	.string "CROCONAW's been itching for a battle!$"

Route014_Trainer_Hugo_Defeat::
	.string "Careful with those teeth!$"

Route014_Trainer_Hugo_After::
	.string "CROCONAW always wants to swim across,\n"
	.string "but I'm keeping my socks dry today.$"

Route014_Trainer_Fenna_Intro::
	.string "Up for a battle with a ranger?$"

Route014_Trainer_Fenna_Defeat::
	.string "I wasn't expecting that!$"

Route014_Trainer_Fenna_After::
	.string "I let PSYDUCK lead the patrol once and\n"
	.string "we ended up at my house. Might try that\l"
	.string "again on Friday.$"

Route014_Trainer_Teun_Intro::
	.string "You look tougher than these rotten\n"
	.string "boards!$"

Route014_Trainer_Teun_Defeat::
	.string "You're a lot tougher!$"

Route014_Trainer_Teun_After::
	.string "MACHOP helped me carry timber all\n"
	.string "morning and still wants to train. I wish\l"
	.string "I had that much energy.$"

Route014_Trainer_Roos_Intro::
	.string "You don't mind GLOOM's smell, do you?$"

Route014_Trainer_Roos_Defeat::
	.string "GLOOM, don't sulk!$"

Route014_Trainer_Roos_After::
	.string "I can't really smell GLOOM anymore, but\n"
	.string "Mum still makes us use the back door.$"

Route014_Trainer_Milo_Intro::
	.string "I'll find my way after one more battle!$"

Route014_Trainer_Milo_Defeat::
	.string "I'm even more confused now!$"

Route014_Trainer_Milo_After::
	.string "WARTORTLE sat down when we passed this\n"
	.string "bend again. It won't budge until I put\l"
	.string "the map away.$"

Route014_Trainer_Kira_Intro::
	.string "Come on, I've been warming up for ages!$"

Route014_Trainer_Kira_Defeat::
	.string "I need a breather!$"

Route014_Trainer_Kira_After::
	.string "I tried taking QUAGSIRE running with\n"
	.string "me. We got as far as the first puddle.$"

Route014_Trainer_Pim_Intro::
	.string "Mind the equipment while we battle!$"

Route014_Trainer_Pim_Defeat::
	.string "At least nothing exploded!$"

Route014_Trainer_Pim_After::
	.string "I need to move the water gauge closer\n"
	.string "to the river. VOLTORB is absolutely no\l"
	.string "help with lifting.$"

Route014_Trainer_Lotte_Intro::
	.string "You'll have to get past my picnic\n"
	.string "champion!$"

Route014_Trainer_Lotte_Defeat::
	.string "Our winning streak is over!$"

Route014_Trainer_Lotte_After::
	.string "AZUMARILL rescued my picnic when it\n"
	.string "fell in the water, but ate the cake\l"
	.string "before bringing it back.$"

Route014_Trainer_Ward_Intro::
	.string "Fancy a battle before I head back?$"

Route014_Trainer_Ward_Defeat::
	.string "That was a good one!$"

Route014_Trainer_Ward_After::
	.string "I've watched this stretch for years and\n"
	.string "still spot things I can't name. Bring\l"
	.string "binoculars if you come back.$"
