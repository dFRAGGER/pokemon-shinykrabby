EastLionMountain_Faculty_Mining_Cave_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, EastLionMountain_Faculty_Mining_Cave_B1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

EastLionMountain_Faculty_Mining_Cave_B1F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call MiningCaveB1F_StartTremors
	return


MiningCaveB1F_StartTremors::
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, MiningCaveB1F_StartTremors_2
	callnative StartCaveTremorScene
	end

MiningCaveB1F_StartTremors_2:
	end


MiningCaveB1F_Trainer_Faculty_Addy::
	trainerbattle_single TRAINER_MADS_MINING_SK, MiningCaveB1F_Text_MadsIntro, MiningCaveB1F_Text_MadsDefeated
	msgbox MiningCaveB1F_Text_MadsPostBattle, MSGBOX_AUTOCLOSE
	end


MiningCaveB1F_Trainer_Faculty_Ad::
	trainerbattle_single TRAINER_AD_MINING_SK, MiningCaveB1F_Text_AdIntro, MiningCaveB1F_Text_AdDefeated
	msgbox MiningCaveB1F_Text_AdPostBattle, MSGBOX_AUTOCLOSE
	end


MiningCave_Trainer_Faculty_Owen::
	trainerbattle_single TRAINER_OWEN_MINING_SK, MiningCave_Text_OwenIntro, MiningCave_Text_OwenDefeated
	msgbox MiningCave_Text_OwenPostBattle, MSGBOX_AUTOCLOSE
	end


MiningCave_Trainer_Faculty_Warren::
	trainerbattle_single TRAINER_WARREN_MINING_SK, MiningCave_Text_WarrenIntro, MiningCave_Text_WarrenDefeated
	msgbox MiningCave_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
	end


MiningCaveB1F_Barry_Battle::
	lock
	faceplayer
	playse SE_PIN
	applymovement 1, MiningCaveB1F_Barry_Battle_Movement_0
	waitmovement 0
	setspeaker MiningCaveB1F_Barry_Battle_Text_0
	msgbox MiningCaveB1F_Barry_Battle_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	trainerbattle_no_intro TRAINER_BARRY_MINING_SK, MiningCaveB1F_Text_BarryDefeated
	goto MiningCaveB1F_Barry_PostBattle
	return


MiningCaveB1F_Barry_PostBattle::
	lock
	setflag FLAG_HIDE_FACULTY_AT_WESTLION_MINE
	playse SE_M_EARTHQUAKE
	delay 60
	playse SE_PIN
	applymovement 1, MiningCaveB1F_Barry_Battle_Movement_0
	waitmovement 0
	setspeaker MiningCaveB1F_Barry_Battle_Text_0
	msgbox MiningCaveB1F_Barry_PostBattle_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, MiningCaveB1F_Barry_PostBattle_Movement_0
	applymovement 1, MiningCaveB1F_Barry_PostBattle_Movement_1
	waitmovement
	applymovement 2, MiningCaveB1F_Barry_PostBattle_Movement_2
	delay 30
	setspeaker MiningCaveB1F_Barry_Battle_Text_0
	msgbox MiningCaveB1F_Barry_PostBattle_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 2, MiningCaveB1F_Barry_PostBattle_Movement_3
	waitmovement
	removeobject 2
	setflag FLAG_HIDE_MINING_CAVE_B1F_SCIENTIST
	callnative StopCaveTremorScene
	applymovement 1, MiningCaveB1F_Barry_PostBattle_Movement_2
	delay 60
	applymovement 1, MiningCaveB1F_Barry_PostBattle_Movement_4
	waitmovement
	applymovement 1, MiningCaveB1F_Barry_PostBattle_Movement_5
	applymovement LOCALID_PLAYER, MiningCaveB1F_Barry_PostBattle_Movement_6
	waitmovement
	setspeaker MiningCaveB1F_Barry_Battle_Text_0
	msgbox MiningCaveB1F_Barry_PostBattle_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_BALL_THROW
	applymovement LOCALID_PLAYER, MiningCaveB1F_Barry_PostBattle_Movement_7
	delay 15
	fadescreen FADE_TO_BLACK
	setvar VAR_MINING_CAVE_STATE, 1
	delay 120
	warpsilent MAP_EAST_LION_MOUNTAIN_FACULTY_MINING_CAVE, 9, 10
	release
	end


MiningCaveB1F_Worker1_Convo::
	lock
	faceplayer
	msgbox MiningCaveB1F_Worker1_Convo_Text_0, MSGBOX_AUTOCLOSE
	release
	end


MiningCaveB1F_Worker2_Convo::
	lock
	faceplayer
	msgbox MiningCaveB1F_Worker2_Convo_Text_0, MSGBOX_AUTOCLOSE
	release
	end


MiningCaveB1F_Worker3_Convo::
	lock
	faceplayer
	msgbox MiningCaveB1F_Worker3_Convo_Text_0, MSGBOX_AUTOCLOSE
	release
	end


MiningCaveB1F_Sign_DeepMine::
	lock
	msgbox MiningCaveB1F_Sign_DeepMine_Text_0, MSGBOX_AUTOCLOSE
	release
	return


MiningCave_Sign_Danger::
	lock
	msgbox MiningCave_Sign_Danger_Text_0, MSGBOX_AUTOCLOSE
	release
	return


MiningCaveB1F_Barry_Battle_Movement_0:
	emote_exclamation_mark
	step_end

MiningCaveB1F_Barry_PostBattle_Movement_0:
	face_right
	lock_facing_direction
	walk_left
	unlock_facing_direction
	walk_right
	face_up
	step_end

MiningCaveB1F_Barry_PostBattle_Movement_1:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

MiningCaveB1F_Barry_PostBattle_Movement_2:
	face_down
	step_end

MiningCaveB1F_Barry_PostBattle_Movement_3:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

MiningCaveB1F_Barry_PostBattle_Movement_4:
	walk_fast_down
	step_end

MiningCaveB1F_Barry_PostBattle_Movement_5:
	walk_fast_down
	walk_fast_down
	step_end

MiningCaveB1F_Barry_PostBattle_Movement_6:
	face_up
	lock_facing_direction
	walk_fast_down
	walk_fast_down
	unlock_facing_direction
	step_end

MiningCaveB1F_Barry_PostBattle_Movement_7:
	face_up
	lock_facing_direction
	jump_2_down
	unlock_facing_direction
	step_end

MiningCaveB1F_Barry_Battle_Text_0:
	.string "BARRY$"

MiningCaveB1F_Barry_Battle_Text_1:
	.string "YOU again?!\p"
	.string "Don't you ever know when to quit?\p"
	.string "...\p"
	.string "It doesn't matter. We've already found\n"
	.string "what we came for.\p"
	.string "You're too late to change anything.$"

MiningCaveB1F_Barry_PostBattle_Text_0:
	.string "Gah! This entire section is\n"
	.string "destabilizing!\p"
	.string "We might have digged to deep...$"

MiningCaveB1F_Barry_PostBattle_Text_1:
	.string "We gotta go!\p"
	.string "Gather the others and move the\n"
	.string "materials to the factory!$"

MiningCaveB1F_Barry_PostBattle_Text_2:
	.string "You honestely think I would let you\n"
	.string "leave and try to ruin our plans again?\p"
	.string "Take this, stupid intern!$"

MiningCaveB1F_Worker1_Convo_Text_0:
	.string "These rock formations are\n"
	.string "extraordinary...\p"
	.string "The crystalline density here is off the\n"
	.string "charts.\p"
	.string "I've never seen anything like it in my\n"
	.string "career.$"

MiningCaveB1F_Worker2_Convo_Text_0:
	.string "Something incredible passed through\n"
	.string "this place long ago.\p"
	.string "The deeper we excavate, the stronger\n"
	.string "the energy readings become.\p"
	.string "...I can't explain it. The instruments\n"
	.string "just go wild.$"

MiningCaveB1F_Worker3_Convo_Text_0:
	.string "There are markings on the walls in this\n"
	.string "deepest section.\p"
	.string "Not writing exactly... more like\n"
	.string "impressions.\p"
	.string "As if something enormous pressed\n"
	.string "against the rock itself.$"

MiningCaveB1F_Sign_DeepMine_Text_0:
	.string "RESTRICTED - LEVEL B1\n"
	.string "Administrator Access Only\n"
	.string "- The sign bears a fresh Faculty emblem.$"

MiningCave_Sign_Danger_Text_0:
	.string "CAUTION: Active Excavation\n"
	.string "Hard hats mandatory past this point\n"
	.string "Report tremors immediately$"

MiningCaveB1F_Text_MadsIntro::
	.string "You don't belong down here.\p"
	.string "Turn back while you still can.$"

MiningCaveB1F_Text_MadsDefeated::
	.string "The tremors... they're getting worse the\n"
	.string "deeper we dig...$"

MiningCaveB1F_Text_MadsPostBattle::
	.string "Just... stay out of our way.\p"
	.string "The Administrator has everything under\n"
	.string "control.$"

MiningCaveB1F_Text_AdIntro::
	.string "This is a restricted excavation!\p"
	.string "I have orders to remove any intruders!$"

MiningCaveB1F_Text_AdDefeated::
	.string "How did you get past the others?$"

MiningCaveB1F_Text_AdPostBattle::
	.string "You shouldn't have come down here.\p"
	.string "Some things are better left\n"
	.string "undisturbed.$"

MiningCave_Text_OwenIntro::
	.string "You've come far enough!\p"
	.string "These grounds are closed to outsiders!$"

MiningCave_Text_OwenDefeated::
	.string "...The mountain stirs when strangers\n"
	.string "pass through.$"

MiningCave_Text_OwenPostBattle::
	.string "Old places like this one don't\n"
	.string "appreciate being disturbed.\p"
	.string "Neither do I.$"

MiningCave_Text_WarrenIntro::
	.string "Intruder! You're not authorized to be\n"
	.string "here!$"

MiningCave_Text_WarrenDefeated::
	.string "Tch... Underestimated you.$"

MiningCave_Text_WarrenPostBattle::
	.string "The ore we've found down here...\p"
	.string "it's unlike anything from surface\n"
	.string "deposits.\p"
	.string "That's all you need to know.$"

MiningCaveB1F_Text_BarryDefeated::
	.string "NO! Not again!$"
