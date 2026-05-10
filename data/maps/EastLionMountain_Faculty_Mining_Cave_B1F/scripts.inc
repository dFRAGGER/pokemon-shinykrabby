EastLionMountain_Faculty_Mining_Cave_B1F_MapScripts::
# 2 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, EastLionMountain_Faculty_Mining_Cave_B1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

EastLionMountain_Faculty_Mining_Cave_B1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 2 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	call MiningCaveB1F_StartTremors
	return


MiningCaveB1F_StartTremors::
# 6 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	callnative StartCaveTremorScene
	end


MiningCaveB1F_Trainer_Faculty_Addy::
# 16 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	trainerbattle_single TRAINER_MARY, MiningCaveB1F_Text_MadsIntro, MiningCaveB1F_Text_MadsDefeated
# 17 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Text_MadsPostBattle, MSGBOX_AUTOCLOSE
	end


MiningCaveB1F_Trainer_Faculty_Ad::
# 34 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, MiningCaveB1F_Text_AdIntro, MiningCaveB1F_Text_AdDefeated
# 35 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Text_AdPostBattle, MSGBOX_AUTOCLOSE
	end


MiningCave_Trainer_Faculty_Owen::
# 52 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	trainerbattle_single TRAINER_OWEN, MiningCave_Text_OwenIntro, MiningCave_Text_OwenDefeated
# 53 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCave_Text_OwenPostBattle, MSGBOX_AUTOCLOSE
	end


MiningCave_Trainer_Faculty_Warren::
# 70 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	trainerbattle_single TRAINER_WARREN, MiningCave_Text_WarrenIntro, MiningCave_Text_WarrenDefeated
# 71 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCave_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
	end


MiningCaveB1F_Barry_Battle::
# 93 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock
# 94 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	faceplayer
# 95 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	playse SE_PIN
# 96 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	applymovement 1, MiningCaveB1F_Barry_Battle_Movement_0
# 97 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmovement 0
# 98 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	setspeaker MiningCaveB1F_Barry_Battle_Text_0
# 99 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Barry_Battle_Text_1, MSGBOX_AUTOCLOSE
# 100 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmessage
# 101 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	trainerbattle_no_intro TRAINER_BARRY, MiningCaveB1F_Text_BarryDefeated
# 102 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	goto MiningCaveB1F_Barry_PostBattle
	return


MiningCaveB1F_Barry_PostBattle::
# 110 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock
# 111 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	playse SE_M_EARTHQUAKE
# 112 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	delay 60
# 113 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Barry_PostBattle_Text_0, MSGBOX_AUTOCLOSE
# 114 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmessage
# 115 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	delay 30
# 116 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	playse SE_PIN
# 117 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	applymovement VAR_LAST_TALKED, MiningCaveB1F_Barry_Battle_Movement_0
# 118 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmovement 0
# 119 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	setspeaker MiningCaveB1F_Barry_Battle_Text_0
# 120 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Barry_PostBattle_Text_1, MSGBOX_AUTOCLOSE
# 121 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmessage
# 122 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	delay 30
# 123 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	playse SE_BALL_THROW
# 124 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	delay 30
# 125 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	playse SE_BANG
# 126 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	fadescreen FADE_TO_WHITE
# 127 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	delay 60
# 128 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	setvar VAR_MINING_CAVE_STATE, 1
# 129 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	removeobject 1
# 130 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	removeobject 2
# 131 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	removeobject 3
# 132 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	removeobject 4
# 133 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 134 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	delay 60
# 135 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Barry_PostBattle_Text_2, MSGBOX_AUTOCLOSE
# 136 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmessage
# 137 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	release
	end


MiningCaveB1F_Worker1_Convo::
# 147 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock
# 148 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	faceplayer
# 149 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Worker1_Convo_Text_0, MSGBOX_AUTOCLOSE
# 150 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	release
	end


MiningCaveB1F_Worker2_Convo::
# 155 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock
# 156 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	faceplayer
# 157 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Worker2_Convo_Text_0, MSGBOX_AUTOCLOSE
# 158 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	release
	end


MiningCaveB1F_Worker3_Convo::
# 163 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock
# 164 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	faceplayer
# 165 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Worker3_Convo_Text_0, MSGBOX_AUTOCLOSE
# 166 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	release
	end


MiningCaveB1F_Sign_DeepMine::
# 171 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock
# 172 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Sign_DeepMine_Text_0, MSGBOX_AUTOCLOSE
# 173 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	release
	return


MiningCave_Sign_Danger::
# 177 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock
# 178 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCave_Sign_Danger_Text_0, MSGBOX_AUTOCLOSE
# 179 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	release
	return


# 96 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
MiningCaveB1F_Barry_Battle_Movement_0:
# 96 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	emote_exclamation_mark
	step_end

MiningCaveB1F_Barry_Battle_Text_0:
# 98 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Barry$"

MiningCaveB1F_Barry_Battle_Text_1:
# 99 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "YOU again?!\p"
	.string "Don't you ever know when to quit?\p"
	.string "...\p"
	.string "It doesn't matter. We've already found\n"
	.string "what we came for.\p"
	.string "You're too late to change anything.$"

MiningCaveB1F_Barry_PostBattle_Text_0:
# 113 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "The cave shakes violently!$"

MiningCaveB1F_Barry_PostBattle_Text_1:
# 120 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Gah! This entire section is\n"
	.string "destabilizing!\p"
	.string "...\p"
	.string "Pull back! We've got everything we need.\p"
	.string "The shipment goes ahead on schedule!\p"
	.string "Move the materials to the factory!$"

MiningCaveB1F_Barry_PostBattle_Text_2:
# 135 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Barry signals his men and they pull back\n"
	.string "into the shadows.\p"
	.string "A gruff voice echoes from the dark:\n"
	.string "'Get it to the factory - move!'\p"
	.string "The rumble of cart wheels fades into\n"
	.string "the tunnel...\p"
	.string "Then silence.$"

MiningCaveB1F_Worker1_Convo_Text_0:
# 149 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "These rock formations are\n"
	.string "extraordinary...\p"
	.string "The crystalline density here is off the\n"
	.string "charts.\p"
	.string "I've never seen anything like it in my\n"
	.string "career.$"

MiningCaveB1F_Worker2_Convo_Text_0:
# 157 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Something incredible passed through\n"
	.string "this place long ago.\p"
	.string "The deeper we excavate, the stronger\n"
	.string "the energy readings become.\p"
	.string "...I can't explain it. The instruments\n"
	.string "just go wild.$"

MiningCaveB1F_Worker3_Convo_Text_0:
# 165 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "There are markings on the walls in this\n"
	.string "deepest section.\p"
	.string "Not writing exactly... more like\n"
	.string "impressions.\p"
	.string "As if something enormous pressed\n"
	.string "against the rock itself.$"

MiningCaveB1F_Sign_DeepMine_Text_0:
# 172 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "RESTRICTED - LEVEL B1\n"
	.string "Administrator Access Only\n"
	.string "- The sign bears a fresh Faculty emblem.$"

MiningCave_Sign_Danger_Text_0:
# 178 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "CAUTION: Active Excavation\n"
	.string "Hard hats mandatory past this point\n"
	.string "Report tremors immediately$"

MiningCaveB1F_Text_MadsIntro::
# 21 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "You don't belong down here.\p"
	.string "Turn back while you still can.$"

MiningCaveB1F_Text_MadsDefeated::
# 25 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "The tremors... they're getting worse the\n"
	.string "deeper we dig...$"

MiningCaveB1F_Text_MadsPostBattle::
# 29 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Just... stay out of our way.\p"
	.string "The Administrator has everything under\n"
	.string "control.$"

MiningCaveB1F_Text_AdIntro::
# 39 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "This is a restricted excavation!\p"
	.string "I have orders to remove any intruders!$"

MiningCaveB1F_Text_AdDefeated::
# 43 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "How did you get past the others?$"

MiningCaveB1F_Text_AdPostBattle::
# 47 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "You shouldn't have come down here.\p"
	.string "Some things are better left\n"
	.string "undisturbed.$"

MiningCave_Text_OwenIntro::
# 57 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "You've come far enough!\p"
	.string "These grounds are closed to outsiders!$"

MiningCave_Text_OwenDefeated::
# 61 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "...The mountain stirs when strangers\n"
	.string "pass through.$"

MiningCave_Text_OwenPostBattle::
# 65 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Old places like this one don't\n"
	.string "appreciate being disturbed.\p"
	.string "Neither do I.$"

MiningCave_Text_WarrenIntro::
# 75 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Intruder! You're not authorized to be\n"
	.string "here!$"

MiningCave_Text_WarrenDefeated::
# 79 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Tch... Underestimated you.$"

MiningCave_Text_WarrenPostBattle::
# 83 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "The ore we've found down here...\p"
	.string "it's unlike anything from surface\n"
	.string "deposits.\p"
	.string "That's all you need to know.$"

MiningCaveB1F_Text_BarryDefeated::
# 105 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "NO! Not again!$"
