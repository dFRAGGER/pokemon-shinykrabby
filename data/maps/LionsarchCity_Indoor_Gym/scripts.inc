LionsarchCity_Indoor_Gym_MapScripts::
	.byte 0


LionsarchGym_Guide::
# 7 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	lock
# 8 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	faceplayer
# 9 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, LionsarchGym_Guide_2
# 15 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	goto_if_unset FLAG_LIONSARCH_GYM_GUIDE_GAVE_WATER, LionsarchGym_Guide_5
# 26 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Guide_Text_3
# 27 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 28 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	release
	end

LionsarchGym_Guide_2:
# 10 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Guide_Text_0
# 11 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 12 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	release
	end

LionsarchGym_Guide_5:
# 16 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setflag FLAG_LIONSARCH_GYM_GUIDE_GAVE_WATER
# 17 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Guide_Text_1
# 18 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 19 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 20 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 21 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Guide_Text_2
# 22 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 23 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	release
	end


LionsarchGym_Leader1::
# 35 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	lock
# 36 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, LionsarchGym_Leader1_2
# 45 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_LIONSARCH_LEADER1, LionsarchGym_Leader1_5
# 54 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	faceplayer
# 55 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker LionsarchGym_Leader1_Text_0
# 56 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader1_Text_3
# 57 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 58 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker NULL
LionsarchGym_Leader1_4:
# 60 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	release
	end

LionsarchGym_Leader1_2:
# 37 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	faceplayer
# 38 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker LionsarchGym_Leader1_Text_0
# 39 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader1_Text_1
# 40 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 41 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker NULL
# 42 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	release
	end

LionsarchGym_Leader1_5:
# 46 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	faceplayer
# 47 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker LionsarchGym_Leader1_Text_0
# 48 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader1_Text_2
# 49 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 50 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker NULL
# 51 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_LIONSARCH_LEADER1, LionsarchGym_Leader1_IntroText, LionsarchGym_Leader1_DefeatText, LionsarchGym_Leader1_Defeated
	goto LionsarchGym_Leader1_4


LionsarchGym_Leader1_Defeated::
# 65 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	lock
# 66 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker LionsarchGym_Leader1_Text_0
# 67 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader1_Defeated_Text_0
# 68 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 69 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker NULL
# 70 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setflag FLAG_DEFEATED_LIONSARCH_LEADER1
# 71 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	release
	end


LionsarchGym_Leader2::
# 84 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	lock
# 85 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, LionsarchGym_Leader2_2
# 94 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_LIONSARCH_LEADER1, LionsarchGym_Leader2_5
# 103 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	faceplayer
# 104 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker LionsarchGym_Leader2_Text_0
# 105 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader2_Text_3
# 106 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 107 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker NULL
# 108 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_LIONSARCH_LEADER2, LionsarchGym_Leader2_IntroText, LionsarchGym_Leader2_DefeatText, LionsarchGym_Leader2_Defeated
# 109 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	release
	end

LionsarchGym_Leader2_2:
# 86 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	faceplayer
# 87 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker LionsarchGym_Leader2_Text_0
# 88 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader2_Text_1
# 89 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 90 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker NULL
# 91 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	release
	end

LionsarchGym_Leader2_5:
# 95 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	faceplayer
# 96 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker LionsarchGym_Leader2_Text_0
# 97 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader2_Text_2
# 98 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 99 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker NULL
# 100 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	release
	end


LionsarchGym_Leader2_Defeated::
# 114 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	lock
# 115 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker LionsarchGym_Leader2_Text_0
# 116 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader2_Defeated_Text_0
# 117 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 118 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 119 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 120 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker NULL
# 121 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader2_Defeated_Text_1
# 122 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 123 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker LionsarchGym_Leader2_Text_0
# 124 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader2_Defeated_Text_2
# 125 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 126 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	giveitem ITEM_TM07
# 127 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 128 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker LionsarchGym_Leader2_Text_0
# 129 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Leader2_Defeated_Text_3
# 130 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	waitmessage
# 131 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setspeaker NULL
# 132 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 134 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	call LionsarchGym_SetTrainerFlags
# 135 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	release
	end


LionsarchGym_Trainer_Hiker1::
# 150 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_LIONSARCH_HIKER_1, LionsarchGym_Hiker1_Intro, LionsarchGym_Hiker1_Defeat
# 151 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Hiker1_PostBattle, MSGBOX_AUTOCLOSE
	end


LionsarchGym_Trainer_Hiker2::
# 168 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_LIONSARCH_HIKER_2, LionsarchGym_Hiker2_Intro, LionsarchGym_Hiker2_Defeat
# 169 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Hiker2_PostBattle, MSGBOX_AUTOCLOSE
	end


LionsarchGym_Trainer_Hiker3::
# 186 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_LIONSARCH_HIKER_3, LionsarchGym_Hiker3_Intro, LionsarchGym_Hiker3_Defeat
# 187 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Hiker3_PostBattle, MSGBOX_AUTOCLOSE
	end


LionsarchGym_Trainer_Hiker4::
# 204 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_LIONSARCH_HIKER_4, LionsarchGym_Hiker4_Intro, LionsarchGym_Hiker4_Defeat
# 205 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Hiker4_PostBattle, MSGBOX_AUTOCLOSE
	end


LionsarchGym_Trainer_Hiker5::
# 222 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_LIONSARCH_HIKER_5, LionsarchGym_Hiker5_Intro, LionsarchGym_Hiker5_Defeat
# 223 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	msgbox LionsarchGym_Hiker5_PostBattle, MSGBOX_AUTOCLOSE
	end


LionsarchGym_SetTrainerFlags::
# 240 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	settrainerflag TRAINER_LIONSARCH_HIKER_1
# 241 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	settrainerflag TRAINER_LIONSARCH_HIKER_2
# 242 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	settrainerflag TRAINER_LIONSARCH_HIKER_3
# 243 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	settrainerflag TRAINER_LIONSARCH_HIKER_4
# 244 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	settrainerflag TRAINER_LIONSARCH_HIKER_5
	return


LionsarchGym_Guide_Text_0:
# 10 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "You actually conquered both peaks!\p"
	.string "I knew sending you in there was the\n"
	.string "right call.\p"
	.string "Stay warm out there!$"

LionsarchGym_Guide_Text_1:
# 17 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "Welcome to the Lionsarch Gym!\p"
	.string "Already visited those two mountains up\n"
	.string "north? The Lion Mountains. This whole\l"
	.string "gym is inspired by them.\p"
	.string "We've got two leaders - one for each\n"
	.string "peak. You have to beat both to earn the\l"
	.string "badge.\p"
	.string "Which one should you challenge first?\n"
	.string "Great question. I always forget.\p"
	.string "I want to say... left? Maybe right? You\n"
	.string "know what, just trust your gut.\p"
	.string "Either way, take this. You're going to\n"
	.string "want it in there.$"

LionsarchGym_Guide_Text_2:
# 21 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "Good luck!\p"
	.string "And please don't freeze to death in\n"
	.string "there - the paperwork alone would ruin\l"
	.string "my entire week.$"

LionsarchGym_Guide_Text_3:
# 26 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "Two leaders, two peaks - that's the Lion\n"
	.string "Mountains for you.\p"
	.string "I still can't remember which one you're\n"
	.string "supposed to face first. Just try both!\p"
	.string "Good luck out there. And seriously,\n"
	.string "don't freeze to death.$"

LionsarchGym_Leader1_Text_0:
# 38 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "Tanya$"

LionsarchGym_Leader1_Text_1:
# 39 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "Two peaks stand as one.\n"
	.string "You have proven yourself.$"

LionsarchGym_Leader1_Text_2:
# 48 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "You made it through the storm?\n"
	.string "The west mountain does not yield so\l"
	.string "easily...$"

LionsarchGym_Leader1_Text_3:
# 56 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "Defeat my partner, then claim your\n"
	.string "prize.$"

LionsarchGym_Leader1_Defeated_Text_0:
# 67 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The west peak bows to your strength.\n"
	.string "My partner still stands - face the\l"
	.string "east!$"

LionsarchGym_Leader2_Text_0:
# 87 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "Tara$"

LionsarchGym_Leader2_Text_1:
# 88 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "Two peaks stand as one.\n"
	.string "You have earned our respect.$"

LionsarchGym_Leader2_Text_2:
# 97 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "You must face the west mountain first.\n"
	.string "The east will wait.$"

LionsarchGym_Leader2_Text_3:
# 105 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "You overcame the west.\n"
	.string "Now face the fury of the east mountain!$"

LionsarchGym_Leader2_Defeated_Text_0:
# 116 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The east peak falls too...\p"
	.string "You have conquered both Lion\n"
	.string "Mountains.$"

LionsarchGym_Leader2_Defeated_Text_1:
# 121 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "You received the PEAK BADGE!$"

LionsarchGym_Leader2_Defeated_Text_2:
# 124 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The PEAK BADGE lets all Pokémon up to\n"
	.string "level 40 obey without question.\p"
	.string "You may now use ROCK SMASH outside of\n"
	.string "battle.\p"
	.string "And take this.\p"
	.string "We are ice queens.\p"
	.string "We do not give out Strength.$"

LionsarchGym_Leader2_Defeated_Text_3:
# 129 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "That is TM HAIL.\p"
	.string "Summon a blizzard that batters every\n"
	.string "Pokémon on the field for five turns.\p"
	.string "Every Ice-type move hits without fail\n"
	.string "while the storm rages.\p"
	.string "We have trained in these mountains our\n"
	.string "entire lives.\p"
	.string "The cold is not a condition to us.\p"
	.string "It is a weapon.\p"
	.string "Use it like one.$"

LionsarchGym_Leader1_IntroText::
# 75 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "I am the voice of the west mountain!\n"
	.string "Feel the cold of the peak!$"

LionsarchGym_Leader1_DefeatText::
# 79 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The summit... recedes from me.$"

LionsarchGym_Leader2_IntroText::
# 139 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The east wind howls for you!\n"
	.string "This peak has never been climbed!$"

LionsarchGym_Leader2_DefeatText::
# 143 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The east peak... is silent.$"

LionsarchGym_Hiker1_Intro::
# 155 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "You won't get past me in this blizzard!$"

LionsarchGym_Hiker1_Defeat::
# 159 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The cold got to me first...$"

LionsarchGym_Hiker1_PostBattle::
# 163 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "Keep pushing north. The storm only gets\n"
	.string "worse.$"

LionsarchGym_Hiker2_Intro::
# 173 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The lion mountains guard their secrets\n"
	.string "fiercely!$"

LionsarchGym_Hiker2_Defeat::
# 177 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "Even the mountain fell today...$"

LionsarchGym_Hiker2_PostBattle::
# 181 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "I've barely seen the leaders myself -\n"
	.string "just shapes in the white.$"

LionsarchGym_Hiker3_Intro::
# 191 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The blizzard is my ally - I'll freeze you\n"
	.string "in your tracks!$"

LionsarchGym_Hiker3_Defeat::
# 195 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The storm can't save me now...$"

LionsarchGym_Hiker3_PostBattle::
# 199 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "They say when the two leaders stand\n"
	.string "together, the storm obeys them.$"

LionsarchGym_Hiker4_Intro::
# 209 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "Every step closer to the top is a step\n"
	.string "into oblivion!$"

LionsarchGym_Hiker4_Defeat::
# 213 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The peak is yours today...$"

LionsarchGym_Hiker4_PostBattle::
# 217 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "When the whiteout hits, follow the cold\n"
	.string "wind north.$"

LionsarchGym_Hiker5_Intro::
# 227 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "The lion mountains have two eyes - and\n"
	.string "both are watching you!$"

LionsarchGym_Hiker5_Defeat::
# 231 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "I couldn't hold the pass...$"

LionsarchGym_Hiker5_PostBattle::
# 235 "data/maps/LionsarchCity_Indoor_Gym/scripts.pory"
	.string "I've never actually seen the leaders\n"
	.string "clearly. Just shapes in the white.$"
