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
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, MiningCaveB1F_StartTremors_2
# 9 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	callnative StartCaveTremorScene
	end

MiningCaveB1F_StartTremors_2:
	end


MiningCaveB1F_Trainer_Faculty_Addy::
# 19 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	trainerbattle_single TRAINER_MARY, MiningCaveB1F_Text_MadsIntro, MiningCaveB1F_Text_MadsDefeated
# 20 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Text_MadsPostBattle, MSGBOX_AUTOCLOSE
	end


MiningCaveB1F_Trainer_Faculty_Ad::
# 37 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, MiningCaveB1F_Text_AdIntro, MiningCaveB1F_Text_AdDefeated
# 38 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Text_AdPostBattle, MSGBOX_AUTOCLOSE
	end


MiningCave_Trainer_Faculty_Owen::
# 55 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	trainerbattle_single TRAINER_OWEN, MiningCave_Text_OwenIntro, MiningCave_Text_OwenDefeated
# 56 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCave_Text_OwenPostBattle, MSGBOX_AUTOCLOSE
	end


MiningCave_Trainer_Faculty_Warren::
# 73 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	trainerbattle_single TRAINER_WARREN, MiningCave_Text_WarrenIntro, MiningCave_Text_WarrenDefeated
# 74 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCave_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
	end


MiningCaveB1F_Barry_Battle::
# 96 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock
# 97 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	faceplayer
# 98 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	playse SE_PIN
# 99 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	applymovement 1, MiningCaveB1F_Barry_Battle_Movement_0
# 100 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmovement 0
# 101 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	setspeaker MiningCaveB1F_Barry_Battle_Text_0
# 102 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Barry_Battle_Text_1, MSGBOX_AUTOCLOSE
# 103 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmessage
# 104 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	trainerbattle_no_intro TRAINER_BARRY, MiningCaveB1F_Text_BarryDefeated
# 105 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	goto MiningCaveB1F_Barry_PostBattle
	return


MiningCaveB1F_Barry_PostBattle::
# 113 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock
# 114 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	setflag FLAG_HIDE_FACULTY_AT_WESTLION_MINE
# 115 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	playse SE_M_EARTHQUAKE
# 116 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	delay 60
# 117 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	playse SE_PIN
# 118 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	applymovement 1, MiningCaveB1F_Barry_Battle_Movement_0
# 119 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmovement 0
# 120 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	setspeaker MiningCaveB1F_Barry_Battle_Text_0
# 121 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Barry_PostBattle_Text_0, MSGBOX_AUTOCLOSE
# 122 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmessage
# 123 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	applymovement LOCALID_PLAYER, MiningCaveB1F_Barry_PostBattle_Movement_0
# 124 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	applymovement 1, MiningCaveB1F_Barry_PostBattle_Movement_1
# 125 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmovement
# 126 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	applymovement 2, MiningCaveB1F_Barry_PostBattle_Movement_2
# 127 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	delay 30
# 128 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Barry_PostBattle_Text_1, MSGBOX_AUTOCLOSE
# 129 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmessage
# 130 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	applymovement 2, MiningCaveB1F_Barry_PostBattle_Movement_3
# 131 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmovement
# 132 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	removeobject 2
# 133 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	setflag FLAG_HIDE_MINING_CAVE_B1F_SCIENTIST
# 134 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	callnative StopCaveTremorScene
# 135 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	applymovement 1, MiningCaveB1F_Barry_PostBattle_Movement_2
# 136 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	delay 60
# 137 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	applymovement 1, MiningCaveB1F_Barry_PostBattle_Movement_4
# 138 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmovement
# 139 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	applymovement 1, MiningCaveB1F_Barry_PostBattle_Movement_5
# 140 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	applymovement LOCALID_PLAYER, MiningCaveB1F_Barry_PostBattle_Movement_6
# 141 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmovement
# 142 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	setspeaker MiningCaveB1F_Barry_Battle_Text_0
# 143 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Barry_PostBattle_Text_2, MSGBOX_AUTOCLOSE
# 144 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmessage
# 145 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	playse SE_BALL_THROW
# 146 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	applymovement LOCALID_PLAYER, MiningCaveB1F_Barry_PostBattle_Movement_7
# 147 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	delay 15
# 148 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 149 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	setvar VAR_MINING_CAVE_STATE, 1
# 150 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	delay 120
# 151 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	warpsilent MAP_EAST_LION_MOUNTAIN_FACULTY_MINING_CAVE, 9, 10
# 152 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	release
	end


MiningCaveB1F_Worker1_Convo::
# 162 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock
# 163 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	faceplayer
# 164 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Worker1_Convo_Text_0, MSGBOX_AUTOCLOSE
# 165 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	release
	end


MiningCaveB1F_Worker2_Convo::
# 170 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock
# 171 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	faceplayer
# 172 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Worker2_Convo_Text_0, MSGBOX_AUTOCLOSE
# 173 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	release
	end


MiningCaveB1F_Worker3_Convo::
# 178 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock
# 179 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	faceplayer
# 180 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Worker3_Convo_Text_0, MSGBOX_AUTOCLOSE
# 181 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	release
	end


MiningCaveB1F_Sign_DeepMine::
# 186 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock
# 187 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Sign_DeepMine_Text_0, MSGBOX_AUTOCLOSE
# 188 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	release
	return


MiningCave_Sign_Danger::
# 192 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock
# 193 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCave_Sign_Danger_Text_0, MSGBOX_AUTOCLOSE
# 194 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	release
	return


# 99 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
MiningCaveB1F_Barry_Battle_Movement_0:
# 99 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 123 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
MiningCaveB1F_Barry_PostBattle_Movement_0:
# 123 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	face_right
# 123 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock_facing_direction
# 123 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	walk_left
# 123 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	unlock_facing_direction
# 123 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	walk_right
# 123 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	face_up
	step_end

# 124 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
MiningCaveB1F_Barry_PostBattle_Movement_1:
# 124 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	walk_fast_up
# 124 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	walk_fast_up
# 124 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	walk_fast_up
	step_end

# 126 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
MiningCaveB1F_Barry_PostBattle_Movement_2:
# 126 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	face_down
	step_end

# 130 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
MiningCaveB1F_Barry_PostBattle_Movement_3:
# 130 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	walk_fast_left
# 130 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	walk_fast_up
# 130 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	walk_fast_up
# 130 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	walk_fast_up
# 130 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	walk_fast_up
# 130 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	walk_fast_up
	step_end

# 137 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
MiningCaveB1F_Barry_PostBattle_Movement_4:
# 137 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	walk_fast_down
	step_end

# 139 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
MiningCaveB1F_Barry_PostBattle_Movement_5:
# 139 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	walk_fast_down
# 139 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	walk_fast_down
	step_end

# 140 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
MiningCaveB1F_Barry_PostBattle_Movement_6:
# 140 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	face_up
# 140 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock_facing_direction
# 140 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	walk_fast_down
# 140 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	walk_fast_down
# 140 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	unlock_facing_direction
	step_end

# 146 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
MiningCaveB1F_Barry_PostBattle_Movement_7:
# 146 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	face_up
# 146 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock_facing_direction
# 146 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	jump_2_down
# 146 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	unlock_facing_direction
	step_end

MiningCaveB1F_Barry_Battle_Text_0:
# 101 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Barry$"

MiningCaveB1F_Barry_Battle_Text_1:
# 102 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "YOU again?!\p"
	.string "Don't you ever know when to quit?\p"
	.string "...\p"
	.string "It doesn't matter. We've already found\n"
	.string "what we came for.\p"
	.string "You're too late to change anything.$"

MiningCaveB1F_Barry_PostBattle_Text_0:
# 121 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Gah! This entire section is\n"
	.string "destabilizing!\p"
	.string "We might have digged to deep...$"

MiningCaveB1F_Barry_PostBattle_Text_1:
# 128 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "We gotta go!\p"
	.string "Gather the others and move the\n"
	.string "materials to the factory!$"

MiningCaveB1F_Barry_PostBattle_Text_2:
# 143 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "You honestely think I would let you\n"
	.string "leave and try to ruin our plans again?\p"
	.string "Take this, stupid intern!$"

MiningCaveB1F_Worker1_Convo_Text_0:
# 164 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "These rock formations are\n"
	.string "extraordinary...\p"
	.string "The crystalline density here is off the\n"
	.string "charts.\p"
	.string "I've never seen anything like it in my\n"
	.string "career.$"

MiningCaveB1F_Worker2_Convo_Text_0:
# 172 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Something incredible passed through\n"
	.string "this place long ago.\p"
	.string "The deeper we excavate, the stronger\n"
	.string "the energy readings become.\p"
	.string "...I can't explain it. The instruments\n"
	.string "just go wild.$"

MiningCaveB1F_Worker3_Convo_Text_0:
# 180 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "There are markings on the walls in this\n"
	.string "deepest section.\p"
	.string "Not writing exactly... more like\n"
	.string "impressions.\p"
	.string "As if something enormous pressed\n"
	.string "against the rock itself.$"

MiningCaveB1F_Sign_DeepMine_Text_0:
# 187 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "RESTRICTED - LEVEL B1\n"
	.string "Administrator Access Only\n"
	.string "- The sign bears a fresh Faculty emblem.$"

MiningCave_Sign_Danger_Text_0:
# 193 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "CAUTION: Active Excavation\n"
	.string "Hard hats mandatory past this point\n"
	.string "Report tremors immediately$"

MiningCaveB1F_Text_MadsIntro::
# 24 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "You don't belong down here.\p"
	.string "Turn back while you still can.$"

MiningCaveB1F_Text_MadsDefeated::
# 28 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "The tremors... they're getting worse the\n"
	.string "deeper we dig...$"

MiningCaveB1F_Text_MadsPostBattle::
# 32 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Just... stay out of our way.\p"
	.string "The Administrator has everything under\n"
	.string "control.$"

MiningCaveB1F_Text_AdIntro::
# 42 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "This is a restricted excavation!\p"
	.string "I have orders to remove any intruders!$"

MiningCaveB1F_Text_AdDefeated::
# 46 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "How did you get past the others?$"

MiningCaveB1F_Text_AdPostBattle::
# 50 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "You shouldn't have come down here.\p"
	.string "Some things are better left\n"
	.string "undisturbed.$"

MiningCave_Text_OwenIntro::
# 60 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "You've come far enough!\p"
	.string "These grounds are closed to outsiders!$"

MiningCave_Text_OwenDefeated::
# 64 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "...The mountain stirs when strangers\n"
	.string "pass through.$"

MiningCave_Text_OwenPostBattle::
# 68 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Old places like this one don't\n"
	.string "appreciate being disturbed.\p"
	.string "Neither do I.$"

MiningCave_Text_WarrenIntro::
# 78 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Intruder! You're not authorized to be\n"
	.string "here!$"

MiningCave_Text_WarrenDefeated::
# 82 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Tch... Underestimated you.$"

MiningCave_Text_WarrenPostBattle::
# 86 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "The ore we've found down here...\p"
	.string "it's unlike anything from surface\n"
	.string "deposits.\p"
	.string "That's all you need to know.$"

MiningCaveB1F_Text_BarryDefeated::
# 108 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "NO! Not again!$"
