Mistcity_Indoor_Gym_MapScripts::
	.byte 0


Mistcity_Gym_Introduction::
	lock
	goto_if_unset FLAG_ITEM_FRESH_WATER_GYM2, Mistcity_Gym_Introduction_8
Mistcity_Gym_Introduction_6:
	goto_if_set FLAG_ITEM_FRESH_WATER_GYM2, Mistcity_Gym_Introduction_5
Mistcity_Gym_Introduction_4:
	goto_if_set FLAG_BADGE02_GET, Mistcity_Gym_Introduction_3
	return

Mistcity_Gym_Introduction_1:
	setflag FLAG_ITEM_FRESH_WATER_GYM2
	faceplayer
	msgbox Mistcity_Gym_Introduction_Text_0
	waitmessage
	giveitem ITEM_FRESH_WATER
	waitmessage
	msgbox Mistcity_Gym_Introduction_Text_1
	waitmessage
	release
	end

Mistcity_Gym_Introduction_2:
	faceplayer
	msgbox Mistcity_Gym_Introduction_Text_2
	waitmessage
	release
	end

Mistcity_Gym_Introduction_3:
	faceplayer
	msgbox Mistcity_Gym_Introduction_Text_3
	waitmessage
	release
	end

Mistcity_Gym_Introduction_5:
	goto_if_unset FLAG_BADGE02_GET, Mistcity_Gym_Introduction_2
	goto Mistcity_Gym_Introduction_4

Mistcity_Gym_Introduction_8:
	goto_if_unset FLAG_BADGE02_GET, Mistcity_Gym_Introduction_1
	goto Mistcity_Gym_Introduction_6


Mistcity_Gym_Leader_David::
	trainerbattle_single TRAINER_DAVID_HEARTFIELD, Mistcity_Gym_David_Introtext, Mistcity_Gym_David_Defeattext, Mistcity_Gym_David_Defeated, NO_MUSIC
	release
	end


Mistcity_Gym_David_Defeated::
	lock
	setspeaker Mistcity_Gym_David_Defeated_Text_0
	msgbox Mistcity_Gym_David_Defeated_Text_1
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_BADGE02_GET
	setspeaker NULL
	msgbox Mistcity_Gym_David_Defeated_Text_2
	waitmessage
	setspeaker Mistcity_Gym_David_Defeated_Text_0
	msgbox Mistcity_Gym_David_Defeated_Text_3
	waitmessage
	giveitem ITEM_HM05
	setflag FLAG_RECEIVED_HM_FLASH
	setflag FLAG_DEFEATED_DEWFORD_GYM
	setspeaker Mistcity_Gym_David_Defeated_Text_0
	msgbox Mistcity_Gym_David_Defeated_Text_4
	waitmessage
	animateflash 1
	setflashlevel 1
	call MistcityGym_Set_Gym_Trainers
	release
	end


MistcityGym_Set_Gym_Trainers::
	settrainerflag TRAINER_LINTON
	settrainerflag TRAINER_ROYSTON
	settrainerflag TRAINER_CHUCKIE
	settrainerflag TRAINER_HARDY
	settrainerflag TRAINER_LAYTON
	settrainerflag TRAINER_NEELY
	return


MistcityGym_Trainer_Linton::
	trainerbattle_single TRAINER_LINTON, MistcityGym_Text_LintonIntro, Mistcity_Text_LintonDefeated
	msgbox Mistcity_Text_LintonPostBattle, MSGBOX_AUTOCLOSE
	end


MistcityGym_Trainer_Royston::
	trainerbattle_single TRAINER_ROYSTON, MistcityGym_Text_RoystonIntro, Mistcity_Text_RoystonDefeated
	msgbox Mistcity_Text_RoystonPostBattle, MSGBOX_AUTOCLOSE
	end


MistcityGym_Trainer_Chuckie::
	trainerbattle_single TRAINER_CHUCKIE, MistcityGym_Text_ChuckieIntro, Mistcity_Text_ChuckieDefeated
	msgbox Mistcity_Text_ChuckiePostBattle, MSGBOX_AUTOCLOSE
	end


MistcityGym_Trainer_Hardy::
	trainerbattle_single TRAINER_HARDY, MistcityGym_Text_HardyIntro, Mistcity_Text_HardyDefeated
	msgbox Mistcity_Text_HardyPostBattle, MSGBOX_AUTOCLOSE
	end


MistcityGym_Trainer_Layton::
	trainerbattle_single TRAINER_LAYTON, MistcityGym_Text_LaytonIntro, Mistcity_Text_LaytonDefeated
	msgbox Mistcity_Text_LaytonPostBattle, MSGBOX_AUTOCLOSE
	end


MistcityGym_Trainer_Neely::
	trainerbattle_single TRAINER_NEELY, MistcityGym_Text_NeelyIntro, Mistcity_Text_NeelyDefeated
	msgbox Mistcity_Text_NeelyPostBattle, MSGBOX_AUTOCLOSE
	end


Mistcity_Gym_Introduction_Text_0:
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
	.string "Good luck!!$"

Mistcity_Gym_Introduction_Text_2:
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
	.string "Congrats on getting your badge!\p"
	.string "David looked dissapointed, but I think\n"
	.string "he will handle the loss well.$"

Mistcity_Gym_David_Defeated_Text_0:
	.string "DAVID$"

Mistcity_Gym_David_Defeated_Text_1:
	.string "You battle with the same courage you\n"
	.string "showed during the rescue mission.\p"
	.string "You have earned this Badge not just for\n"
	.string "winning, but for your heart.\p"
	.string "I know Daan would be proud of you too.$"

Mistcity_Gym_David_Defeated_Text_2:
	.string "You have recieved the FOREST BADGE!$"

Mistcity_Gym_David_Defeated_Text_3:
	.string "The FOREST BADGE makes all POKéMON up\n"
	.string "to Level 30, even those you get in\l"
	.string "trades, obey without question.\p"
	.string "And, you'll be able to use this HM move\n"
	.string "FLASH outside of battle too!$"

Mistcity_Gym_David_Defeated_Text_4:
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
	.string "Daan gave me the confidence to finally\n"
	.string "take on a battle! Show me the strength\l"
	.string "that saved our friend!$"

Mistcity_Gym_David_Defeattext::
	.string "Brilliant! You cleared the darkness.$"

MistcityGym_Text_LintonIntro::
	.string "It is pitch black in here. My Pokemon\n"
	.string "senses you by your heat signature!$"

Mistcity_Text_LintonDefeated::
	.string "Hiss!\n"
	.string "We were extinguished.$"

Mistcity_Text_LintonPostBattle::
	.string "You better watch your step. The\n"
	.string "darkness hides many things in this gym.$"

MistcityGym_Text_RoystonIntro::
	.string "Venonat has radar eyes. The darkness\n"
	.string "means nothing to us!$"

Mistcity_Text_RoystonDefeated::
	.string "My radar failed me!$"

Mistcity_Text_RoystonPostBattle::
	.string "Navigating this gym requires more than\n"
	.string "just eyes. You need instinct.$"

MistcityGym_Text_ChuckieIntro::
	.string "Watch your step! My Tangela's vines are\n"
	.string "everywhere in this gloom.$"

Mistcity_Text_ChuckieDefeated::
	.string "Tangled up in my own trap...$"

Mistcity_Text_ChuckiePostBattle::
	.string "The shadows make the vines look like\n"
	.string "snakes. It is pretty spooky.$"

MistcityGym_Text_HardyIntro::
	.string "Who goes there? My Hoothoot owns the\n"
	.string "night shift.$"

Mistcity_Text_HardyDefeated::
	.string "I should have stayed asleep.$"

Mistcity_Text_HardyPostBattle::
	.string "This gym mimics the Deepcloud Forest at\n"
	.string "night perfectly. It gives me the\l"
	.string "shivers.$"

MistcityGym_Text_LaytonIntro::
	.string "Did you feel that sticky thread? You\n"
	.string "just walked right into our web!$"

Mistcity_Text_LaytonDefeated::
	.string "Our web has been torn apart...$"

Mistcity_Text_LaytonPostBattle::
	.string "Ariados spins webs in the dark to catch\n"
	.string "wandering trainers like you.$"

MistcityGym_Text_NeelyIntro::
	.string "I am blending into the shadows. You will\n"
	.string "never see my Kecleon coming!$"

Mistcity_Text_NeelyDefeated::
	.string "You spotted us!$"

Mistcity_Text_NeelyPostBattle::
	.string "Kecleon can change colors to match the\n"
	.string "darkness. It is the ultimate\l"
	.string "camouflage.$"
