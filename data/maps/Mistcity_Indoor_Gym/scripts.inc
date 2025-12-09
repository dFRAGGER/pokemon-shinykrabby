Mistcity_Indoor_Gym_MapScripts::
	.byte 0


Mistcity_Gym_Introduction::
# 4 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	lock
# 5 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	goto_if_unset FLAG_ITEM_FRESH_WATER_GYM2, Mistcity_Gym_Introduction_3
Mistcity_Gym_Introduction_1:
# 17 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	goto_if_set FLAG_ITEM_FRESH_WATER_GYM2, Mistcity_Gym_Introduction_8
Mistcity_Gym_Introduction_6:
# 24 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	goto_if_set FLAG_ITEM_FRESH_WATER_GYM2, Mistcity_Gym_Introduction_12
	return

Mistcity_Gym_Introduction_2:
# 6 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	setflag FLAG_ITEM_FRESH_WATER_GYM2
# 7 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	faceplayer
# 8 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	msgbox Mistcity_Gym_Introduction_Text_0
# 9 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	waitmessage
# 10 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 11 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	waitmessage
# 12 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	msgbox Mistcity_Gym_Introduction_Text_1
# 13 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	waitmessage
# 14 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	release
	end

Mistcity_Gym_Introduction_3:
# 5 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Mistcity_Gym_Introduction_2
	goto Mistcity_Gym_Introduction_1

Mistcity_Gym_Introduction_7:
# 18 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	faceplayer
# 19 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	msgbox Mistcity_Gym_Introduction_Text_2
# 20 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	waitmessage
# 21 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	release
	end

Mistcity_Gym_Introduction_8:
# 17 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Mistcity_Gym_Introduction_7
	goto Mistcity_Gym_Introduction_6

Mistcity_Gym_Introduction_11:
# 25 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	faceplayer
# 26 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	msgbox Mistcity_Gym_Introduction_Text_3
# 27 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	waitmessage
# 28 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	release
	end

Mistcity_Gym_Introduction_12:
# 24 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Mistcity_Gym_Introduction_11
	return


Mistcity_Gym_Leader_David::
# 36 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_DAVID_HEARTFIELD, Mistcity_Gym_David_Introtext, Mistcity_Gym_David_Defeattext, Mistcity_Gym_David_Defeated, NO_MUSIC
# 37 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	release
	end


Mistcity_Gym_David_Defeated::
# 42 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	lock
# 43 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	setspeaker Mistcity_Gym_David_Defeated_Text_0
# 44 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	msgbox Mistcity_Gym_David_Defeated_Text_1
# 45 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 46 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 47 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	msgbox Mistcity_Gym_David_Defeated_Text_2
# 48 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	waitmessage
# 49 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	setspeaker Mistcity_Gym_David_Defeated_Text_0
# 50 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	msgbox Mistcity_Gym_David_Defeated_Text_3
# 51 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	waitmessage
# 52 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	giveitem ITEM_HM05
# 53 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 54 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 55 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	setspeaker Mistcity_Gym_David_Defeated_Text_0
# 56 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	msgbox Mistcity_Gym_David_Defeated_Text_4
# 57 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	waitmessage
# 58 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	call MistcityGym_Set_Gym_Trainers
# 59 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	setflashlevel 1
# 60 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	release
	end


MistcityGym_Set_Gym_Trainers::
# 65 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	settrainerflag TRAINER_LINTON
# 66 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	settrainerflag TRAINER_ROYSTON
# 67 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	settrainerflag TRAINER_CHUCKIE
# 68 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	settrainerflag TRAINER_HARDY
# 69 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	settrainerflag TRAINER_LAYTON
# 70 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	settrainerflag TRAINER_NEELY
	return


MistcityGym_Trainer_Linton::
# 82 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_LINTON, MistcityGym_Text_LintonIntro, Mistcity_Text_LintonDefeated
# 83 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	msgbox Mistcity_Text_LintonPostBattle, MSGBOX_AUTOCLOSE
	end


MistcityGym_Trainer_Royston::
# 100 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROYSTON, MistcityGym_Text_RoystonIntro, Mistcity_Text_RoystonDefeated
# 101 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	msgbox Mistcity_Text_RoystonPostBattle, MSGBOX_AUTOCLOSE
	end


MistcityGym_Trainer_Chuckie::
# 118 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHUCKIE, MistcityGym_Text_ChuckieIntro, Mistcity_Text_ChuckieDefeated
# 119 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	msgbox Mistcity_Text_ChuckiePostBattle, MSGBOX_AUTOCLOSE
	end


MistcityGym_Trainer_Hardy::
# 136 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_HARDY, MistcityGym_Text_HardyIntro, Mistcity_Text_HardyDefeated
# 137 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	msgbox Mistcity_Text_HardyPostBattle, MSGBOX_AUTOCLOSE
	end


MistcityGym_Trainer_Layton::
# 154 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAYTON, MistcityGym_Text_LaytonIntro, Mistcity_Text_LaytonDefeated
# 155 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	msgbox Mistcity_Text_LaytonPostBattle, MSGBOX_AUTOCLOSE
	end


MistcityGym_Trainer_Neely::
# 172 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	trainerbattle_single TRAINER_NEELY, MistcityGym_Text_NeelyIntro, Mistcity_Text_NeelyDefeated
# 173 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	msgbox Mistcity_Text_NeelyPostBattle, MSGBOX_AUTOCLOSE
	end


Mistcity_Gym_Introduction_Text_0:
# 8 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "Hi, welcome to the Mistcity Pokemon Gym.\p"
	.string "The gym leader and trainers use\n"
	.string "pokemon that like the darkness.\p"
	.string "While Pokémon that can give you a little\n"
	.string "light can help you, Pokémon afraid of\l"
	.string "the dark are not recommended.\p"
	.string "The gym leader is always on rotation,\n"
	.string "but I think I saw a red haired young\l"
	.string "ranger slip by just a moment ago.\p"
	.string "He seemed to be unusually confident.\p"
	.string "Trust your instinct and I'm sure you\n"
	.string "will be victorious!\p"
	.string "Also have this:$"

Mistcity_Gym_Introduction_Text_1:
# 12 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "Good luck!!$"

Mistcity_Gym_Introduction_Text_2:
# 19 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "Hi, welcome to the Mistcity Pokemon Gym.\p"
	.string "The gym leader and trainers use\n"
	.string "pokemon that like the darkness.\p"
	.string "While Pokémon that can give you a little\n"
	.string "light can help you, Pokémon afraid of\l"
	.string "the dark are not recommended.\p"
	.string "The gym leader is always on rotation,\n"
	.string "but I think I saw a red haired young\l"
	.string "ranger slip by just a moment ago.\p"
	.string "He seemed to be unusually confident.\p"
	.string "Trust your instinct and I'm sure you\n"
	.string "will be victorious!$"

Mistcity_Gym_Introduction_Text_3:
# 26 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "Congrats on getting your badge!\p"
	.string "David looked dissapointed, but I think\n"
	.string "he will handle the loss well.$"

Mistcity_Gym_David_Defeated_Text_0:
# 43 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "David$"

Mistcity_Gym_David_Defeated_Text_1:
# 44 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "You battle with the same courage you\n"
	.string "showed during the rescue mission.\p"
	.string "You have earned this Badge not just for\n"
	.string "winning, but for your heart.\p"
	.string "I know Daan would be proud of you too.$"

Mistcity_Gym_David_Defeated_Text_2:
# 47 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "You have recieved the FOREST BADGE!$"

Mistcity_Gym_David_Defeated_Text_3:
# 50 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "The FOREST BADGE makes all POKéMON up\n"
	.string "to Level 30, even those you get in\l"
	.string "trades, obey without question.\p"
	.string "And, you'll be able to use this HM move\n"
	.string "FLASH outside of battle too!$"

Mistcity_Gym_David_Defeated_Text_4:
# 56 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "That Hidden Machine contains the move\n"
	.string "Flash.\p"
	.string "It creates a brilliant light.\p"
	.string "It can light up even the darkest of\n"
	.string "areas to guide your path.\p"
	.string "I learned it from studying that Faculty\n"
	.string "scum.\p"
	.string "Sometimes you have to fight fire with\n"
	.string "fire!\p"
	.string "Good luck on your further endeavours.$"

Mistcity_Gym_David_Introtext::
# 73 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "Daan gave me the confidence to finally\n"
	.string "take on a battle! Show me the strength\l"
	.string "that saved our friend!$"

Mistcity_Gym_David_Defeattext::
# 77 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "Brilliant! You cleared the darkness.$"

MistcityGym_Text_LintonIntro::
# 87 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "It is pitch black in here. My Pokemon\n"
	.string "senses you by your heat signature!$"

Mistcity_Text_LintonDefeated::
# 91 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "Hiss!\n"
	.string "We were extinguished.$"

Mistcity_Text_LintonPostBattle::
# 95 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "You better watch your step. The\n"
	.string "darkness hides many things in this gym.$"

MistcityGym_Text_RoystonIntro::
# 105 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "Venonat has radar eyes. The darkness\n"
	.string "means nothing to us!$"

Mistcity_Text_RoystonDefeated::
# 109 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "My radar failed me!$"

Mistcity_Text_RoystonPostBattle::
# 113 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "Navigating this gym requires more than\n"
	.string "just eyes. You need instinct.$"

MistcityGym_Text_ChuckieIntro::
# 123 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "Watch your step! My Tangela's vines are\n"
	.string "everywhere in this gloom.$"

Mistcity_Text_ChuckieDefeated::
# 127 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "Tangled up in my own trap...$"

Mistcity_Text_ChuckiePostBattle::
# 131 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "The shadows make the vines look like\n"
	.string "snakes. It is pretty spooky.$"

MistcityGym_Text_HardyIntro::
# 141 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "Who goes there? My Hoothoot owns the\n"
	.string "night shift.$"

Mistcity_Text_HardyDefeated::
# 145 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "I should have stayed asleep.$"

Mistcity_Text_HardyPostBattle::
# 149 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "This gym mimics the Deepcloud Forest at\n"
	.string "night perfectly. It gives me the\l"
	.string "shivers.$"

MistcityGym_Text_LaytonIntro::
# 159 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "Did you feel that sticky thread? You\n"
	.string "just walked right into our web!$"

Mistcity_Text_LaytonDefeated::
# 163 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "Our web has been torn apart...$"

Mistcity_Text_LaytonPostBattle::
# 167 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "Ariados spins webs in the dark to catch\n"
	.string "wandering trainers like you.$"

MistcityGym_Text_NeelyIntro::
# 177 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "I am blending into the shadows. You will\n"
	.string "never see my Kecleon coming!$"

Mistcity_Text_NeelyDefeated::
# 181 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "You spotted us!$"

Mistcity_Text_NeelyPostBattle::
# 185 "data/maps/Mistcity_Indoor_Gym/scripts.pory"
	.string "Kecleon can change colors to match the\n"
	.string "darkness. It is the ultimate\l"
	.string "camouflage.$"
