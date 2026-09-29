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
	waitstate
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
	.string "It doesn't matter. I just got promoted\n"
	.string "from intern to ADMINISTRATOR.\p"
	.string "And you are still a little intern right?\p"
	.string "HAHAHAHA!$"

MiningCaveB1F_Barry_PostBattle_Text_0:
	.string "Gah! The drilling cracked the ice\n"
	.string "supports!\p"
	.string "This entire section is destabilizing!$"

MiningCaveB1F_Barry_PostBattle_Text_1:
	.string "We gotta go!\p"
	.string "REGICE is already at the factory. Get\n"
	.string "the remaining equipment and transfer\l"
	.string "records out!\p"
	.string "Gather the others. Nobody stays down\n"
	.string "here!$"

MiningCaveB1F_Barry_PostBattle_Text_2:
	.string "You honestely think I would let you\n"
	.string "leave and try to ruin our plans for the\l"
	.string "3rd time?\p"
	.string "Take this, stupid intern!$"

MiningCaveB1F_Worker1_Convo_Text_0:
	.string "That chamber was sealed in ancient ice.\p"
	.string "Our permit was for ore, but the orders\n"
	.string "were very clear: preserve the specimen,\l"
	.string "remove everything around it.\p"
	.string "The support ice didn't survive the\n"
	.string "drilling nearly as well.$"

MiningCaveB1F_Worker2_Convo_Text_0:
	.string "REGICE was intact when we uncovered it.\p"
	.string "The containment crew took it to the\n"
	.string "Lionsarch steelworks before this shift\l"
	.string "started.\p"
	.string "My job is to record what remains of the\n"
	.string "chamber.\p"
	.string "The instruments keep picking up the\n"
	.string "drills. Or the ice cracking. It's getting\l"
	.string "hard to tell.$"

MiningCaveB1F_Worker3_Convo_Text_0:
	.string "The hollow in the ice is where the\n"
	.string "specimen rested.\p"
	.string "Those newer scars are from the\n"
	.string "transport frame.\p"
	.string "We widened the passage to get it out.\n"
	.string "The Administrator refused to wait for a\l"
	.string "stability survey.$"

MiningCaveB1F_Sign_DeepMine_Text_0:
	.string "FACULTY EXTRACTION RECORD\p"
	.string "Specimen: REGICE. Recovered intact\n"
	.string "from the sealed ice chamber.\p"
	.string "Transfer completed: LIONSARCH STEEL\n"
	.string "FACTORY, containment bay.\p"
	.string "Portable controller must remain\n"
	.string "powered throughout transport.\p"
	.string "Public freight declaration: mineral\n"
	.string "samples.\p"
	.string "Remaining crew: recover equipment and\n"
	.string "records. Excavation supports are\l"
	.string "unstable.$"

MiningCave_Sign_Danger_Text_0:
	.string "CAUTION: ICE EXCAVATION\p"
	.string "Drilling has weakened the chamber\n"
	.string "supports.\p"
	.string "Report new cracks or tremors\n"
	.string "immediately. Keep the freight passage\l"
	.string "clear.$"

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
	.string "Ore samples? That's what the public\n"
	.string "paperwork calls them.\p"
	.string "The sealed transport needed its own\n"
	.string "power supply.\p"
	.string "I've never guarded a rock that needed\n"
	.string "batteries before.$"

MiningCaveB1F_Text_BarryDefeated::
	.string "How could a little intern defeat me?!$"
