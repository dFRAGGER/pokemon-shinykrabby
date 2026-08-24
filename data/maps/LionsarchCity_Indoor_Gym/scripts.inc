LionsarchCity_Indoor_Gym_MapScripts::
	.byte 0


LionsarchGym_Guide::
	lock
	faceplayer
	goto_if_set FLAG_BADGE03_GET, LionsarchGym_Guide_2
	goto_if_unset FLAG_LIONSARCH_GYM_GUIDE_GAVE_WATER, LionsarchGym_Guide_5
	msgbox LionsarchGym_Guide_Text_3
	waitmessage
	release
	end

LionsarchGym_Guide_2:
	msgbox LionsarchGym_Guide_Text_0
	waitmessage
	release
	end

LionsarchGym_Guide_5:
	setflag FLAG_LIONSARCH_GYM_GUIDE_GAVE_WATER
	msgbox LionsarchGym_Guide_Text_1
	waitmessage
	giveitem ITEM_FRESH_WATER
	waitmessage
	msgbox LionsarchGym_Guide_Text_2
	waitmessage
	release
	end


LionsarchGym_Leader1::
	lock
	goto_if_set FLAG_BADGE03_GET, LionsarchGym_Leader1_2
	goto_if_unset FLAG_DEFEATED_LIONSARCH_LEADER1, LionsarchGym_Leader1_5
	faceplayer
	setspeaker LionsarchGym_Leader1_Text_0
	msgbox LionsarchGym_Leader1_Text_3
	waitmessage
	setspeaker NULL
LionsarchGym_Leader1_4:
	release
	end

LionsarchGym_Leader1_2:
	faceplayer
	setspeaker LionsarchGym_Leader1_Text_0
	msgbox LionsarchGym_Leader1_Text_1
	waitmessage
	setspeaker NULL
	release
	end

LionsarchGym_Leader1_5:
	faceplayer
	setspeaker LionsarchGym_Leader1_Text_0
	msgbox LionsarchGym_Leader1_Text_2
	waitmessage
	setspeaker NULL
	trainerbattle_single TRAINER_LIONSARCH_LEADER1, LionsarchGym_Leader1_IntroText, LionsarchGym_Leader1_DefeatText, LionsarchGym_Leader1_Defeated
	goto LionsarchGym_Leader1_4


LionsarchGym_Leader1_Defeated::
	lock
	setspeaker LionsarchGym_Leader1_Text_0
	msgbox LionsarchGym_Leader1_Defeated_Text_0
	waitmessage
	setspeaker NULL
	setflag FLAG_DEFEATED_LIONSARCH_LEADER1
	release
	end


LionsarchGym_Leader2::
	lock
	goto_if_set FLAG_BADGE03_GET, LionsarchGym_Leader2_2
	goto_if_unset FLAG_DEFEATED_LIONSARCH_LEADER1, LionsarchGym_Leader2_5
	faceplayer
	setspeaker LionsarchGym_Leader2_Text_0
	msgbox LionsarchGym_Leader2_Text_3
	waitmessage
	setspeaker NULL
	trainerbattle_single TRAINER_LIONSARCH_LEADER2, LionsarchGym_Leader2_IntroText, LionsarchGym_Leader2_DefeatText, LionsarchGym_Leader2_Defeated
	release
	end

LionsarchGym_Leader2_2:
	faceplayer
	setspeaker LionsarchGym_Leader2_Text_0
	msgbox LionsarchGym_Leader2_Text_1
	waitmessage
	setspeaker NULL
	release
	end

LionsarchGym_Leader2_5:
	faceplayer
	setspeaker LionsarchGym_Leader2_Text_0
	msgbox LionsarchGym_Leader2_Text_2
	waitmessage
	setspeaker NULL
	release
	end


LionsarchGym_Leader2_Defeated::
	lock
	setspeaker LionsarchGym_Leader2_Text_0
	msgbox LionsarchGym_Leader2_Defeated_Text_0
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_BADGE03_GET
	setspeaker NULL
	msgbox LionsarchGym_Leader2_Defeated_Text_1
	waitmessage
	setspeaker LionsarchGym_Leader2_Text_0
	msgbox LionsarchGym_Leader2_Defeated_Text_2
	waitmessage
	setspeaker LionsarchGym_Leader2_Text_0
	msgbox LionsarchGym_Leader2_Defeated_Text_3
	waitmessage
	giveitem ITEM_TM07
	waitmessage
	setspeaker LionsarchGym_Leader2_Text_0
	msgbox LionsarchGym_Leader2_Defeated_Text_4
	waitmessage
	setspeaker NULL
	setflag FLAG_DEFEATED_MAUVILLE_GYM
	call LionsarchGym_SetTrainerFlags
	release
	end


LionsarchGym_Trainer_Hiker1::
	trainerbattle_single TRAINER_LIONSARCH_HIKER_1, LionsarchGym_Hiker1_Intro, LionsarchGym_Hiker1_Defeat
	msgbox LionsarchGym_Hiker1_PostBattle, MSGBOX_AUTOCLOSE
	end


LionsarchGym_Trainer_Hiker2::
	trainerbattle_single TRAINER_LIONSARCH_HIKER_2, LionsarchGym_Hiker2_Intro, LionsarchGym_Hiker2_Defeat
	msgbox LionsarchGym_Hiker2_PostBattle, MSGBOX_AUTOCLOSE
	end


LionsarchGym_Trainer_Hiker3::
	trainerbattle_single TRAINER_LIONSARCH_HIKER_3, LionsarchGym_Hiker3_Intro, LionsarchGym_Hiker3_Defeat
	msgbox LionsarchGym_Hiker3_PostBattle, MSGBOX_AUTOCLOSE
	end


LionsarchGym_Trainer_Hiker4::
	trainerbattle_single TRAINER_LIONSARCH_HIKER_4, LionsarchGym_Hiker4_Intro, LionsarchGym_Hiker4_Defeat
	msgbox LionsarchGym_Hiker4_PostBattle, MSGBOX_AUTOCLOSE
	end


LionsarchGym_Trainer_Hiker5::
	trainerbattle_single TRAINER_LIONSARCH_HIKER_5, LionsarchGym_Hiker5_Intro, LionsarchGym_Hiker5_Defeat
	msgbox LionsarchGym_Hiker5_PostBattle, MSGBOX_AUTOCLOSE
	end


LionsarchGym_SetTrainerFlags::
	settrainerflag TRAINER_LIONSARCH_HIKER_1
	settrainerflag TRAINER_LIONSARCH_HIKER_2
	settrainerflag TRAINER_LIONSARCH_HIKER_3
	settrainerflag TRAINER_LIONSARCH_HIKER_4
	settrainerflag TRAINER_LIONSARCH_HIKER_5
	return


LionsarchGym_Guide_Text_0:
	.string "You actually conquered both peaks!\p"
	.string "I knew sending you in there was the\n"
	.string "right call.\p"
	.string "Stay warm out there!$"

LionsarchGym_Guide_Text_1:
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
	.string "Good luck!\p"
	.string "And please don't freeze to death in\n"
	.string "there - the paperwork alone would ruin\l"
	.string "my entire week.$"

LionsarchGym_Guide_Text_3:
	.string "Two leaders, two peaks - that's the Lion\n"
	.string "Mountains for you.\p"
	.string "I still can't remember which one you're\n"
	.string "supposed to face first. Just try both!\p"
	.string "Good luck out there. And seriously,\n"
	.string "don't freeze to death.$"

LionsarchGym_Leader1_Text_0:
	.string "TANYA$"

LionsarchGym_Leader1_Text_1:
	.string "Two peaks stand as one.\n"
	.string "You have proven yourself.$"

LionsarchGym_Leader1_Text_2:
	.string "You made it to the west peak.\p"
	.string "Some call snow just frozen rain.\p"
	.string "They are wrong.\p"
	.string "Snow is water set free. It falls where it\n"
	.string "chooses, covers the world in silence,\l"
	.string "and leaves nothing the same as it was.\p"
	.string "No two flakes ever alike.\p"
	.string "It is the most beautiful thing water\n"
	.string "can become.\p"
	.string "Now, let us see if you can stand in the\n"
	.string "middle of it.$"

LionsarchGym_Leader1_Text_3:
	.string "Defeat my partner, then claim your\n"
	.string "prize.$"

LionsarchGym_Leader1_Defeated_Text_0:
	.string "The west peak quiets.\p"
	.string "Snow yields, but what lies beneath it\n"
	.string "does not.\p"
	.string "My partner is waiting. She is the ice\n"
	.string "under the snow.$"

LionsarchGym_Leader2_Text_0:
	.string "TARA$"

LionsarchGym_Leader2_Text_1:
	.string "Two peaks stand as one.\n"
	.string "You have earned our respect.$"

LionsarchGym_Leader2_Text_2:
	.string "You must face the west mountain first.\p"
	.string "The east is ice, it holds its shape. It\n"
	.string "will wait.$"

LionsarchGym_Leader2_Text_3:
	.string "You endured the snow.\p"
	.string "She will tell you snow is the most\n"
	.string "beautiful thing water can become. She\l"
	.string "has always believed that.\p"
	.string "But I have stood on this peak my whole\n"
	.string "life, and I know what remains when the\l"
	.string "snow melts.\p"
	.string "Ice.\p"
	.string "Clear. Still. Holding its form through\n"
	.string "everything.\p"
	.string "That is the most beautiful thing water\n"
	.string "can become.\p"
	.string "Now, stand against something that does\n"
	.string "not yield.$"

LionsarchGym_Leader2_Defeated_Text_0:
	.string "Both peaks... brought down.\p"
	.string "You have conquered the Lion Mountains.$"

LionsarchGym_Leader2_Defeated_Text_1:
	.string "You received the PEAK BADGE!$"

LionsarchGym_Leader2_Defeated_Text_2:
	.string "She will say snow is the most beautiful.\p"
	.string "I will say ice is.\p"
	.string "We have argued about this our whole\n"
	.string "lives.\p"
	.string "And every time, we arrive at the same\n"
	.string "answer.\p"
	.string "They need each other.\p"
	.string "Snow falls free and covers the world in\n"
	.string "silence.\p"
	.string "Ice holds firm long after the snow is\n"
	.string "gone.\p"
	.string "Neither is complete without the other.\p"
	.string "Look at the Lion Mountains.\p"
	.string "The west peak and the east peak.\p"
	.string "Stand one alone, and it is just a\n"
	.string "mountain.\p"
	.string "Stand both together, and the whole\n"
	.string "valley below is sheltered.\p"
	.string "We are the same.\p"
	.string "And so, it seems, are you and your team.$"

LionsarchGym_Leader2_Defeated_Text_3:
	.string "The PEAK BADGE lets all Pokémon up to\n"
	.string "level 40 obey without question.\p"
	.string "You may now use ROCK SMASH outside of\n"
	.string "battle.\p"
	.string "And take this.$"

LionsarchGym_Leader2_Defeated_Text_4:
	.string "That is TM HAIL.\p"
	.string "Summon a blizzard that batters every\n"
	.string "Pokémon on the field for five turns.\p"
	.string "Every Ice-type move hits without fail\n"
	.string "while the storm rages.\p"
	.string "We have trained on these peaks our\n"
	.string "entire lives.\p"
	.string "The cold is not a condition to us.\p"
	.string "It is home.\p"
	.string "Use it like one.$"

LionsarchGym_Leader1_IntroText::
	.string "Snow falls where it chooses!\p"
	.string "No peak can hold it, and neither can\n"
	.string "you!$"

LionsarchGym_Leader1_DefeatText::
	.string "The snow... drifts away.$"

LionsarchGym_Leader2_IntroText::
	.string "Ice holds what snow cannot!\n"
	.string "This is where you stop!$"

LionsarchGym_Leader2_DefeatText::
	.string "The ice... gives way.$"

LionsarchGym_Hiker1_Intro::
	.string "You won't get past me in this blizzard!$"

LionsarchGym_Hiker1_Defeat::
	.string "The cold got to me first...$"

LionsarchGym_Hiker1_PostBattle::
	.string "Keep pushing north. The storm only gets\n"
	.string "worse.$"

LionsarchGym_Hiker2_Intro::
	.string "The lion mountains guard their secrets\n"
	.string "fiercely!$"

LionsarchGym_Hiker2_Defeat::
	.string "Even the mountain fell today...$"

LionsarchGym_Hiker2_PostBattle::
	.string "I've barely seen the leaders myself -\n"
	.string "just shapes in the white.$"

LionsarchGym_Hiker3_Intro::
	.string "The blizzard is my ally - I'll freeze you\n"
	.string "in your tracks!$"

LionsarchGym_Hiker3_Defeat::
	.string "The storm can't save me now...$"

LionsarchGym_Hiker3_PostBattle::
	.string "They say when the two leaders stand\n"
	.string "together, the storm obeys them.$"

LionsarchGym_Hiker4_Intro::
	.string "Every step closer to the top is a step\n"
	.string "into oblivion!$"

LionsarchGym_Hiker4_Defeat::
	.string "The peak is yours today...$"

LionsarchGym_Hiker4_PostBattle::
	.string "When the whiteout hits, follow the cold\n"
	.string "wind north.$"

LionsarchGym_Hiker5_Intro::
	.string "The lion mountains have two eyes - and\n"
	.string "both are watching you!$"

LionsarchGym_Hiker5_Defeat::
	.string "I couldn't hold the pass...$"

LionsarchGym_Hiker5_PostBattle::
	.string "I've never actually seen the leaders\n"
	.string "clearly. Just shapes in the white.$"
