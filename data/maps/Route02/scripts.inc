Route02_MapScripts::
	.byte 0


Route02_Sign_Middle::
# 4 "data/maps/Route02/scripts.pory"
	lock
# 5 "data/maps/Route02/scripts.pory"
	msgbox Route02_Sign_Middle_Text_0, MSGBOX_SIGN
# 6 "data/maps/Route02/scripts.pory"
	waitmessage
# 7 "data/maps/Route02/scripts.pory"
	release
	return


Route02_Trainer_Miles::
# 11 "data/maps/Route02/scripts.pory"
	trainerbattle_single TRAINER_MILES, Route02_Text_MilesIntro, Route02_Text_MilesDefeated
# 12 "data/maps/Route02/scripts.pory"
	msgbox Route02_Text_MilesPostBattle, MSGBOX_AUTOCLOSE
	end


Route02_Trainer_Kegan::
# 29 "data/maps/Route02/scripts.pory"
	trainerbattle_single TRAINER_KEGAN, Route02_Text_KeganIntro, Route02_Text_KeganDefeated
# 30 "data/maps/Route02/scripts.pory"
	msgbox Route02_Text_KeganPostBattle, MSGBOX_AUTOCLOSE
	end


Route02_Trainer_Newton::
# 47 "data/maps/Route02/scripts.pory"
	trainerbattle_single TRAINER_NEWTON, Route02_Text_NewtonIntro, Route02_Text_NewtonDefeated
# 48 "data/maps/Route02/scripts.pory"
	msgbox Route02_Text_NewtonPostBattle, MSGBOX_AUTOCLOSE
	end


Route02_Trainer_Anona::
# 65 "data/maps/Route02/scripts.pory"
	trainerbattle_single TRAINER_ANONA, Route02_Text_AnonaIntro, Route02_Text_AnonaDefeated
# 66 "data/maps/Route02/scripts.pory"
	msgbox Route02_Text_AnonaPostBattle, MSGBOX_AUTOCLOSE
	end


Route02_Trainer_Teresa::
# 83 "data/maps/Route02/scripts.pory"
	trainerbattle_single TRAINER_TERESA, Route02_Text_TeresaIntro, Route02_Text_TeresaDefeated
# 84 "data/maps/Route02/scripts.pory"
	msgbox Route02_Text_TeresaPostBattle, MSGBOX_AUTOCLOSE
	end


Route02_Trainer_Denton::
# 101 "data/maps/Route02/scripts.pory"
	trainerbattle_single TRAINER_DENTON, Route02_Text_DentonIntro, Route02_Text_DentonDefeated
# 102 "data/maps/Route02/scripts.pory"
	msgbox Route02_Text_DentonPostBattle, MSGBOX_AUTOCLOSE
	end


Route02_Researcher_BulletSeed::
# 119 "data/maps/Route02/scripts.pory"
	lock
# 120 "data/maps/Route02/scripts.pory"
	faceplayer
# 121 "data/maps/Route02/scripts.pory"
	goto_if_unset FLAG_ITEM_ROUTE02_TM_BULLET_SEED, Route02_Researcher_BulletSeed_2
# 129 "data/maps/Route02/scripts.pory"
	msgbox Route02_Researcher_BulletSeed_Text_1, MSGBOX_AUTOCLOSE
# 130 "data/maps/Route02/scripts.pory"
	waitmessage
Route02_Researcher_BulletSeed_1:
# 132 "data/maps/Route02/scripts.pory"
	release
	return

Route02_Researcher_BulletSeed_2:
# 122 "data/maps/Route02/scripts.pory"
	msgbox Route02_Researcher_BulletSeed_Text_0
# 123 "data/maps/Route02/scripts.pory"
	waitmessage
# 124 "data/maps/Route02/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 125 "data/maps/Route02/scripts.pory"
	waitmessage
# 126 "data/maps/Route02/scripts.pory"
	setflag FLAG_ITEM_ROUTE02_TM_BULLET_SEED
	goto Route02_Researcher_BulletSeed_1


Route02_Sign_Middle_Text_0:
# 5 "data/maps/Route02/scripts.pory"
	.string "{LEFT_ARROW} MISTY CITY\n"
	.string "{RIGHT_ARROW} MOSA TOWN$"

Route02_Researcher_BulletSeed_Text_0:
# 122 "data/maps/Route02/scripts.pory"
	.string "I've been studying the grass-types\n"
	.string "along this route for months.\p"
	.string "The way they fire seeds is remarkable -\n"
	.string "precise, rapid, relentless.\p"
	.string "I documented it all into this TM.\p"
	.string "Here, take it. I have my notes.$"

Route02_Researcher_BulletSeed_Text_1:
# 129 "data/maps/Route02/scripts.pory"
	.string "The seed velocity data alone took me\n"
	.string "three weeks to record.\p"
	.string "You'll put that TM to good use, I hope.$"

Route02_Text_MilesIntro::
# 16 "data/maps/Route02/scripts.pory"
	.string "If you have POKéMON with you, then\n"
	.string "you're an official POKéMON TRAINER!\l"
	.string "You can't say no to my challenge!$"

Route02_Text_MilesDefeated::
# 20 "data/maps/Route02/scripts.pory"
	.string "Arrgh, I lost…\n"
	.string "I should have trained mine more…$"

Route02_Text_MilesPostBattle::
# 24 "data/maps/Route02/scripts.pory"
	.string "Listen, you. If you're strong,\n"
	.string "you should have told me before!$"

Route02_Text_KeganIntro::
# 34 "data/maps/Route02/scripts.pory"
	.string "The grass here feels so nice.\n"
	.string "My Pokémon loves it too!$"

Route02_Text_KeganDefeated::
# 38 "data/maps/Route02/scripts.pory"
	.string "I guess we were too relaxed...$"

Route02_Text_KeganPostBattle::
# 42 "data/maps/Route02/scripts.pory"
	.string "Oddish may be small, but it hides in the\n"
	.string "grass really well.$"

Route02_Text_NewtonIntro::
# 52 "data/maps/Route02/scripts.pory"
	.string "My Pokémon has a handy tail.\n"
	.string "Let's see if you can handle it!$"

Route02_Text_NewtonDefeated::
# 56 "data/maps/Route02/scripts.pory"
	.string "You handled us easily...$"

Route02_Text_NewtonPostBattle::
# 60 "data/maps/Route02/scripts.pory"
	.string "Aipom is mischievous, but that is why I\n"
	.string "like it so much.$"

Route02_Text_AnonaIntro::
# 70 "data/maps/Route02/scripts.pory"
	.string "Check this out! I have a rare Pokémon\n"
	.string "that you don't see often.$"

Route02_Text_AnonaDefeated::
# 74 "data/maps/Route02/scripts.pory"
	.string "My rare Pokémon couldn't win?$"

Route02_Text_AnonaPostBattle::
# 78 "data/maps/Route02/scripts.pory"
	.string "I'm going to raise this Bulbasaur to be\n"
	.string "the strongest ever.$"

Route02_Text_TeresaIntro::
# 88 "data/maps/Route02/scripts.pory"
	.string "I love walking in the forest.\n"
	.string "Have you seen any mushrooms?$"

Route02_Text_TeresaDefeated::
# 92 "data/maps/Route02/scripts.pory"
	.string "Oh no! My nature walk is ruined.$"

Route02_Text_TeresaPostBattle::
# 96 "data/maps/Route02/scripts.pory"
	.string "Shroomish and Lotad are perfect\n"
	.string "partners for a hike like this.$"

Route02_Text_DentonIntro::
# 106 "data/maps/Route02/scripts.pory"
	.string "My Pokémon are as hard as rock.\n"
	.string "Your attacks will just bounce off!$"

Route02_Text_DentonDefeated::
# 110 "data/maps/Route02/scripts.pory"
	.string "Crumbled into pebbles...$"

Route02_Text_DentonPostBattle::
# 114 "data/maps/Route02/scripts.pory"
	.string "Defense is important, but I guess I\n"
	.string "need some offense too.$"
