Route02_MapScripts::
	.byte 0


Route02_Sign_Middle::
	lock
	msgbox Route02_Sign_Middle_Text_0, MSGBOX_SIGN
	waitmessage
	release
	return


Route02_Trainer_Miles::
	trainerbattle_single TRAINER_MILES, Route02_Text_MilesIntro, Route02_Text_MilesDefeated
	msgbox Route02_Text_MilesPostBattle, MSGBOX_AUTOCLOSE
	end


Route02_Trainer_Kegan::
	trainerbattle_single TRAINER_KEGAN, Route02_Text_KeganIntro, Route02_Text_KeganDefeated
	msgbox Route02_Text_KeganPostBattle, MSGBOX_AUTOCLOSE
	end


Route02_Trainer_Newton::
	trainerbattle_single TRAINER_NEWTON, Route02_Text_NewtonIntro, Route02_Text_NewtonDefeated
	msgbox Route02_Text_NewtonPostBattle, MSGBOX_AUTOCLOSE
	end


Route02_Trainer_Anona::
	trainerbattle_single TRAINER_ANONA, Route02_Text_AnonaIntro, Route02_Text_AnonaDefeated
	msgbox Route02_Text_AnonaPostBattle, MSGBOX_AUTOCLOSE
	end


Route02_Trainer_Teresa::
	trainerbattle_single TRAINER_TERESA, Route02_Text_TeresaIntro, Route02_Text_TeresaDefeated
	msgbox Route02_Text_TeresaPostBattle, MSGBOX_AUTOCLOSE
	end


Route02_Trainer_Denton::
	trainerbattle_single TRAINER_DENTON, Route02_Text_DentonIntro, Route02_Text_DentonDefeated
	msgbox Route02_Text_DentonPostBattle, MSGBOX_AUTOCLOSE
	end


Route02_Researcher_BulletSeed::
	lock
	faceplayer
	goto_if_unset FLAG_ITEM_ROUTE02_TM_BULLET_SEED, Route02_Researcher_BulletSeed_2
	msgbox Route02_Researcher_BulletSeed_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
Route02_Researcher_BulletSeed_1:
	release
	return

Route02_Researcher_BulletSeed_2:
	msgbox Route02_Researcher_BulletSeed_Text_0
	waitmessage
	giveitem ITEM_TM_BULLET_SEED
	waitmessage
	setflag FLAG_ITEM_ROUTE02_TM_BULLET_SEED
	goto Route02_Researcher_BulletSeed_1


Route02_Sign_Middle_Text_0:
	.string "{LEFT_ARROW} MISTY CITY\n"
	.string "{RIGHT_ARROW} MOSA TOWN$"

Route02_Researcher_BulletSeed_Text_0:
	.string "I've been studying the grass-types\n"
	.string "along this route for months.\p"
	.string "The way they fire seeds is remarkable -\n"
	.string "precise, rapid, relentless.\p"
	.string "I documented it all into this TM.\p"
	.string "Here, take it. I have my notes.$"

Route02_Researcher_BulletSeed_Text_1:
	.string "The seed velocity data alone took me\n"
	.string "three weeks to record.\p"
	.string "You'll put that TM to good use, I hope.$"

Route02_Text_MilesIntro::
	.string "If you have POKéMON with you, then\n"
	.string "you're an official POKéMON TRAINER!\l"
	.string "You can't say no to my challenge!$"

Route02_Text_MilesDefeated::
	.string "Arrgh, I lost…\n"
	.string "I should have trained mine more…$"

Route02_Text_MilesPostBattle::
	.string "Listen, you. If you're strong,\n"
	.string "you should have told me before!$"

Route02_Text_KeganIntro::
	.string "The grass here feels so nice.\n"
	.string "My Pokémon loves it too!$"

Route02_Text_KeganDefeated::
	.string "I guess we were too relaxed...$"

Route02_Text_KeganPostBattle::
	.string "Oddish may be small, but it hides in the\n"
	.string "grass really well.$"

Route02_Text_NewtonIntro::
	.string "My Pokémon has a handy tail.\n"
	.string "Let's see if you can handle it!$"

Route02_Text_NewtonDefeated::
	.string "You handled us easily...$"

Route02_Text_NewtonPostBattle::
	.string "Aipom is mischievous, but that is why I\n"
	.string "like it so much.$"

Route02_Text_AnonaIntro::
	.string "Check this out! I have a rare Pokémon\n"
	.string "that you don't see often.$"

Route02_Text_AnonaDefeated::
	.string "My rare Pokémon couldn't win?$"

Route02_Text_AnonaPostBattle::
	.string "I'm going to raise this Bulbasaur to be\n"
	.string "the strongest ever.$"

Route02_Text_TeresaIntro::
	.string "I love walking in the forest.\n"
	.string "Have you seen any mushrooms?$"

Route02_Text_TeresaDefeated::
	.string "Oh no! My nature walk is ruined.$"

Route02_Text_TeresaPostBattle::
	.string "Shroomish and Lotad are perfect\n"
	.string "partners for a hike like this.$"

Route02_Text_DentonIntro::
	.string "My Pokémon are as hard as rock.\n"
	.string "Your attacks will just bounce off!$"

Route02_Text_DentonDefeated::
	.string "Crumbled into pebbles...$"

Route02_Text_DentonPostBattle::
	.string "Defense is important, but I guess I\n"
	.string "need some offense too.$"
