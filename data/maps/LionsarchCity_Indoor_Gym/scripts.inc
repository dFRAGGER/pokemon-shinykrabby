LionsarchCity_Indoor_Gym_MapScripts::
# 2 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LionsarchGym_OnLoad
# 3 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, LionsarchGym_OnResume
	.byte 0


LionsarchGym_OnLoad::
# 7 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	special Special_LionsarchGym_StartStorm
	end


LionsarchGym_OnResume::
# 12 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, LionsarchGym_OnResume_2
LionsarchGym_OnResume_1:
	end

LionsarchGym_OnResume_2:
# 13 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	special Special_LionsarchGym_StartStorm
	goto LionsarchGym_OnResume_1


LionsarchGym_LeaderReveal::
# 24 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, LionsarchGym_LeaderReveal_2
# 27 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	special Special_LionsarchGym_RevealLeaders
# 28 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitstate
	end

LionsarchGym_LeaderReveal_2:
	end


LionsarchGym_Leader1::
# 38 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	lock
# 39 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, LionsarchGym_Leader1_2
# 48 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_LIONSARCH_LEADER1, LionsarchGym_Leader1_5
# 57 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	faceplayer
# 58 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker LionsarchGym_Leader1_Text_0
# 59 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader1_Text_3
# 60 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 61 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker NULL
LionsarchGym_Leader1_4:
# 63 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	release
	end

LionsarchGym_Leader1_2:
# 40 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	faceplayer
# 41 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker LionsarchGym_Leader1_Text_0
# 42 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader1_Text_1
# 43 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 44 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker NULL
# 45 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	release
	end

LionsarchGym_Leader1_5:
# 49 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	faceplayer
# 50 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker LionsarchGym_Leader1_Text_0
# 51 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader1_Text_2
# 52 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 53 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker NULL
# 54 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_LIONSARCH_LEADER1, LionsarchGym_Leader1_IntroText, LionsarchGym_Leader1_DefeatText, LionsarchGym_Leader1_Defeated
	goto LionsarchGym_Leader1_4


LionsarchGym_Leader1_Defeated::
# 68 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	lock
# 69 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker LionsarchGym_Leader1_Text_0
# 70 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader1_Defeated_Text_0
# 71 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 72 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker NULL
# 73 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setflag FLAG_DEFEATED_LIONSARCH_LEADER1
# 74 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	release
	end


LionsarchGym_Leader2::
# 87 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	lock
# 88 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, LionsarchGym_Leader2_2
# 97 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_LIONSARCH_LEADER1, LionsarchGym_Leader2_5
# 106 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	faceplayer
# 107 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker LionsarchGym_Leader1_Text_0
# 108 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader2_Text_2
# 109 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 110 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker NULL
# 111 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_LIONSARCH_LEADER2, LionsarchGym_Leader2_IntroText, LionsarchGym_Leader2_DefeatText, LionsarchGym_Leader2_Defeated
# 112 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	release
	end

LionsarchGym_Leader2_2:
# 89 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	faceplayer
# 90 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker LionsarchGym_Leader1_Text_0
# 91 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader2_Text_0
# 92 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 93 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker NULL
# 94 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	release
	end

LionsarchGym_Leader2_5:
# 98 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	faceplayer
# 99 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker LionsarchGym_Leader1_Text_0
# 100 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader2_Text_1
# 101 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 102 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker NULL
# 103 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	release
	end


LionsarchGym_Leader2_Defeated::
# 117 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	lock
# 118 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker LionsarchGym_Leader1_Text_0
# 119 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader2_Defeated_Text_0
# 120 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 121 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 122 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 123 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker NULL
# 124 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader2_Defeated_Text_1
# 125 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 126 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker LionsarchGym_Leader1_Text_0
# 127 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader2_Defeated_Text_2
# 128 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 129 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	giveitem ITEM_HM04
# 130 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 131 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	call LionsarchGym_SetTrainerFlags
# 132 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	release
	end


LionsarchGym_Trainer_Hiker1::
# 147 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_LIONSARCH_HIKER_1, LionsarchGym_Hiker1_Intro, LionsarchGym_Hiker1_Defeat
# 148 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Hiker1_PostBattle, MSGBOX_AUTOCLOSE
	end


LionsarchGym_Trainer_Hiker2::
# 165 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_LIONSARCH_HIKER_2, LionsarchGym_Hiker2_Intro, LionsarchGym_Hiker2_Defeat
# 166 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Hiker2_PostBattle, MSGBOX_AUTOCLOSE
	end


LionsarchGym_Trainer_Hiker3::
# 183 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_LIONSARCH_HIKER_3, LionsarchGym_Hiker3_Intro, LionsarchGym_Hiker3_Defeat
# 184 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Hiker3_PostBattle, MSGBOX_AUTOCLOSE
	end


LionsarchGym_Trainer_Hiker4::
# 201 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_LIONSARCH_HIKER_4, LionsarchGym_Hiker4_Intro, LionsarchGym_Hiker4_Defeat
# 202 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Hiker4_PostBattle, MSGBOX_AUTOCLOSE
	end


LionsarchGym_Trainer_Hiker5::
# 219 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_LIONSARCH_HIKER_5, LionsarchGym_Hiker5_Intro, LionsarchGym_Hiker5_Defeat
# 220 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Hiker5_PostBattle, MSGBOX_AUTOCLOSE
	end


LionsarchGym_SetTrainerFlags::
# 237 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	settrainerflag TRAINER_LIONSARCH_HIKER_1
# 238 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	settrainerflag TRAINER_LIONSARCH_HIKER_2
# 239 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	settrainerflag TRAINER_LIONSARCH_HIKER_3
# 240 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	settrainerflag TRAINER_LIONSARCH_HIKER_4
# 241 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	settrainerflag TRAINER_LIONSARCH_HIKER_5
	return


LionsarchGym_Leader1_Text_0:
# 41 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "???$"

LionsarchGym_Leader1_Text_1:
# 42 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "Two peaks stand as one.\n"
	.string "You have proven yourself.$"

LionsarchGym_Leader1_Text_2:
# 51 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "You made it through the storm?\n"
	.string "The west mountain does not yield so\l"
	.string "easily...$"

LionsarchGym_Leader1_Text_3:
# 59 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "Defeat my partner, then claim your\n"
	.string "prize.$"

LionsarchGym_Leader1_Defeated_Text_0:
# 70 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The west peak bows to your strength.\n"
	.string "My partner still stands - face the\l"
	.string "east!$"

LionsarchGym_Leader2_Text_0:
# 91 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "Two peaks stand as one.\n"
	.string "You have earned our respect.$"

LionsarchGym_Leader2_Text_1:
# 100 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "You must face the west mountain first.\n"
	.string "The east will wait.$"

LionsarchGym_Leader2_Text_2:
# 108 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "You overcame the west.\n"
	.string "Now face the fury of the east mountain!$"

LionsarchGym_Leader2_Defeated_Text_0:
# 119 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The east peak falls too...\p"
	.string "You have conquered both Lion\n"
	.string "Mountains.$"

LionsarchGym_Leader2_Defeated_Text_1:
# 124 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "You received the PEAK BADGE!$"

LionsarchGym_Leader2_Defeated_Text_2:
# 127 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The PEAK BADGE lets all Pokémon up to\n"
	.string "level 40 obey without question.\p"
	.string "You may now use STRENGTH outside of\n"
	.string "battle.\p"
	.string "May your path lead you over many\n"
	.string "mountains.$"

LionsarchGym_Leader1_IntroText::
# 78 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "I am the voice of the west mountain!\n"
	.string "Feel the cold of the peak!$"

LionsarchGym_Leader1_DefeatText::
# 82 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The summit... recedes from me.$"

LionsarchGym_Leader2_IntroText::
# 136 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The east wind howls for you!\n"
	.string "This peak has never been climbed!$"

LionsarchGym_Leader2_DefeatText::
# 140 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The east peak... is silent.$"

LionsarchGym_Hiker1_Intro::
# 152 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "You won't get past me in this blizzard!$"

LionsarchGym_Hiker1_Defeat::
# 156 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The cold got to me first...$"

LionsarchGym_Hiker1_PostBattle::
# 160 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "Keep pushing north. The storm only gets\n"
	.string "worse.$"

LionsarchGym_Hiker2_Intro::
# 170 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The lion mountains guard their secrets\n"
	.string "fiercely!$"

LionsarchGym_Hiker2_Defeat::
# 174 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "Even the mountain fell today...$"

LionsarchGym_Hiker2_PostBattle::
# 178 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "I've barely seen the leaders myself -\n"
	.string "just shapes in the white.$"

LionsarchGym_Hiker3_Intro::
# 188 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The blizzard is my ally - I'll freeze you\n"
	.string "in your tracks!$"

LionsarchGym_Hiker3_Defeat::
# 192 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The storm can't save me now...$"

LionsarchGym_Hiker3_PostBattle::
# 196 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "They say when the two leaders stand\n"
	.string "together, the storm obeys them.$"

LionsarchGym_Hiker4_Intro::
# 206 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "Every step closer to the top is a step\n"
	.string "into oblivion!$"

LionsarchGym_Hiker4_Defeat::
# 210 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The peak is yours today...$"

LionsarchGym_Hiker4_PostBattle::
# 214 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "When the whiteout hits, follow the cold\n"
	.string "wind north.$"

LionsarchGym_Hiker5_Intro::
# 224 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The lion mountains have two eyes - and\n"
	.string "both are watching you!$"

LionsarchGym_Hiker5_Defeat::
# 228 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "I couldn't hold the pass...$"

LionsarchGym_Hiker5_PostBattle::
# 232 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "I've never actually seen the leaders\n"
	.string "clearly. Just shapes in the white.$"
