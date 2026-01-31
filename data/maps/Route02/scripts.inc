Route02_MapScripts::
	.byte 0


Route02_Trainer_Miles::
# 4 "data/maps/Route02/scripts.pory"
	trainerbattle_single TRAINER_MILES, Route02_Text_MilesIntro, Route02_Text_MilesDefeated
# 5 "data/maps/Route02/scripts.pory"
	msgbox Route02_Text_MilesPostBattle, MSGBOX_AUTOCLOSE
	end


Route02_Trainer_Kegan::
# 22 "data/maps/Route02/scripts.pory"
	trainerbattle_single TRAINER_KEGAN, Route02_Text_KeganIntro, Route02_Text_KeganDefeated
# 23 "data/maps/Route02/scripts.pory"
	msgbox Route02_Text_KeganPostBattle, MSGBOX_AUTOCLOSE
	end


Route02_Trainer_Newton::
# 40 "data/maps/Route02/scripts.pory"
	trainerbattle_single TRAINER_NEWTON, Route02_Text_NewtonIntro, Route02_Text_NewtonDefeated
# 41 "data/maps/Route02/scripts.pory"
	msgbox Route02_Text_NewtonPostBattle, MSGBOX_AUTOCLOSE
	end


Route02_Trainer_Anona::
# 58 "data/maps/Route02/scripts.pory"
	trainerbattle_single TRAINER_ANONA, Route02_Text_AnonaIntro, Route02_Text_AnonaDefeated
# 59 "data/maps/Route02/scripts.pory"
	msgbox Route02_Text_AnonaPostBattle, MSGBOX_AUTOCLOSE
	end


Route02_Trainer_Teresa::
# 76 "data/maps/Route02/scripts.pory"
	trainerbattle_single TRAINER_TERESA, Route02_Text_TeresaIntro, Route02_Text_TeresaDefeated
# 77 "data/maps/Route02/scripts.pory"
	msgbox Route02_Text_TeresaPostBattle, MSGBOX_AUTOCLOSE
	end


Route02_Trainer_Denton::
# 94 "data/maps/Route02/scripts.pory"
	trainerbattle_single TRAINER_DENTON, Route02_Text_DentonIntro, Route02_Text_DentonDefeated
# 95 "data/maps/Route02/scripts.pory"
	msgbox Route02_Text_DentonPostBattle, MSGBOX_AUTOCLOSE
	end


Route02_Text_MilesIntro::
# 9 "data/maps/Route02/scripts.pory"
	.string "If you have POKéMON with you, then\n"
	.string "you're an official POKéMON TRAINER!\l"
	.string "You can't say no to my challenge!$"

Route02_Text_MilesDefeated::
# 13 "data/maps/Route02/scripts.pory"
	.string "Arrgh, I lost…\n"
	.string "I should have trained mine more…$"

Route02_Text_MilesPostBattle::
# 17 "data/maps/Route02/scripts.pory"
	.string "Listen, you. If you're strong,\n"
	.string "you should have told me before!$"

Route02_Text_KeganIntro::
# 27 "data/maps/Route02/scripts.pory"
	.string "The grass here feels so nice.\n"
	.string "My Pokémon loves it too!$"

Route02_Text_KeganDefeated::
# 31 "data/maps/Route02/scripts.pory"
	.string "I guess we were too relaxed...$"

Route02_Text_KeganPostBattle::
# 35 "data/maps/Route02/scripts.pory"
	.string "Oddish may be small, but it hides in the\n"
	.string "grass really well.$"

Route02_Text_NewtonIntro::
# 45 "data/maps/Route02/scripts.pory"
	.string "My Pokémon has a handy tail.\n"
	.string "Let's see if you can handle it!$"

Route02_Text_NewtonDefeated::
# 49 "data/maps/Route02/scripts.pory"
	.string "You handled us easily...$"

Route02_Text_NewtonPostBattle::
# 53 "data/maps/Route02/scripts.pory"
	.string "Aipom is mischievous, but that is why I\n"
	.string "like it so much.$"

Route02_Text_AnonaIntro::
# 63 "data/maps/Route02/scripts.pory"
	.string "Check this out! I have a rare Pokémon\n"
	.string "that you don't see often.$"

Route02_Text_AnonaDefeated::
# 67 "data/maps/Route02/scripts.pory"
	.string "My rare Pokémon couldn't win?$"

Route02_Text_AnonaPostBattle::
# 71 "data/maps/Route02/scripts.pory"
	.string "I'm going to raise this Bulbasaur to be\n"
	.string "the strongest ever.$"

Route02_Text_TeresaIntro::
# 81 "data/maps/Route02/scripts.pory"
	.string "I love walking in the forest.\n"
	.string "Have you seen any mushrooms?$"

Route02_Text_TeresaDefeated::
# 85 "data/maps/Route02/scripts.pory"
	.string "Oh no! My nature walk is ruined.$"

Route02_Text_TeresaPostBattle::
# 89 "data/maps/Route02/scripts.pory"
	.string "Shroomish and Lotad are perfect\n"
	.string "partners for a hike like this.$"

Route02_Text_DentonIntro::
# 99 "data/maps/Route02/scripts.pory"
	.string "My Pokémon are as hard as rock.\n"
	.string "Your attacks will just bounce off!$"

Route02_Text_DentonDefeated::
# 103 "data/maps/Route02/scripts.pory"
	.string "Crumbled into pebbles...$"

Route02_Text_DentonPostBattle::
# 107 "data/maps/Route02/scripts.pory"
	.string "Defense is important, but I guess I\n"
	.string "need some offense too.$"
