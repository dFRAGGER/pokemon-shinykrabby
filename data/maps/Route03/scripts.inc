Route03_MapScripts::
	.byte 0


Route03_Trainer_Gabrielle::
# 4 "data/maps/Route03/scripts.pory"
	trainerbattle_single TRAINER_GABRIELLE, Route03_Text_GabrielleIntro, Route03_Text_GabrielleDefeated
# 5 "data/maps/Route03/scripts.pory"
	msgbox Route03_Text_GabriellePostBattle, MSGBOX_AUTOCLOSE
	end


Route03_Trainer_Lawson::
# 22 "data/maps/Route03/scripts.pory"
	trainerbattle_single TRAINER_LAWSON, Route03_Text_LawsonIntro, Route03_Text_LawsonDefeated
# 23 "data/maps/Route03/scripts.pory"
	msgbox Route03_Text_LawsonPostBattle, MSGBOX_AUTOCLOSE
	end


Route03_Trainer_Marcel::
# 40 "data/maps/Route03/scripts.pory"
	trainerbattle_single TRAINER_MARCEL, Route03_Text_MarcelIntro, Route03_Text_MarcelDefeated
# 41 "data/maps/Route03/scripts.pory"
	msgbox Route03_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
	end


Route03_Trainer_Alberto::
# 58 "data/maps/Route03/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, Route03_Text_AlbertoIntro, Route03_Text_AlbertoDefeated
# 59 "data/maps/Route03/scripts.pory"
	msgbox Route03_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
	end


Route03_Trainer_Ed::
# 76 "data/maps/Route03/scripts.pory"
	trainerbattle_single TRAINER_ED, Route03_Text_EdIntro, Route03_Text_EdDefeated
# 77 "data/maps/Route03/scripts.pory"
	msgbox Route03_Text_EdPostBattle, MSGBOX_AUTOCLOSE
	end


Route03_Text_GabrielleIntro::
# 9 "data/maps/Route03/scripts.pory"
	.string "Some Pokémon walk, but mine prefer to\n"
	.string "flap and flutter!$"

Route03_Text_GabrielleDefeated::
# 13 "data/maps/Route03/scripts.pory"
	.string "Grounded!\n"
	.string "I can't believe it.$"

Route03_Text_GabriellePostBattle::
# 17 "data/maps/Route03/scripts.pory"
	.string "Yanma is really fast.\n"
	.string "It is hard to catch one.$"

Route03_Text_LawsonIntro::
# 27 "data/maps/Route03/scripts.pory"
	.string "Eek! A spider!\n"
	.string "Just kidding, it's my friend.$"

Route03_Text_LawsonDefeated::
# 31 "data/maps/Route03/scripts.pory"
	.string "Squashed like a bug...$"

Route03_Text_LawsonPostBattle::
# 35 "data/maps/Route03/scripts.pory"
	.string "Bug Pokémon evolve quickly.\n"
	.string "I can't wait for them to change.$"

Route03_Text_MarcelIntro::
# 45 "data/maps/Route03/scripts.pory"
	.string "Fire is hot, so you better watch out or\n"
	.string "you'll get burned!$"

Route03_Text_MarcelDefeated::
# 49 "data/maps/Route03/scripts.pory"
	.string "We burned out...$"

Route03_Text_MarcelPostBattle::
# 53 "data/maps/Route03/scripts.pory"
	.string "If you meet a Grass-type Pokémon, my\n"
	.string "Charmander is unbeatable.$"

Route03_Text_AlbertoIntro::
# 63 "data/maps/Route03/scripts.pory"
	.string "I'm thirsty for a battle.\n"
	.string "Let's make a splash!$"

Route03_Text_AlbertoDefeated::
# 67 "data/maps/Route03/scripts.pory"
	.string "I'm all dried up.$"

Route03_Text_AlbertoPostBattle::
# 71 "data/maps/Route03/scripts.pory"
	.string "Water Pokémon are the best.\n"
	.string "They have fewer weaknesses.$"

Route03_Text_EdIntro::
# 81 "data/maps/Route03/scripts.pory"
	.string "Stop right there!\n"
	.string "Only the strong pass this point.$"

Route03_Text_EdDefeated::
# 85 "data/maps/Route03/scripts.pory"
	.string "Okay, okay!\n"
	.string "You are strong enough.$"

Route03_Text_EdPostBattle::
# 89 "data/maps/Route03/scripts.pory"
	.string "Training is a never-ending road.\n"
	.string "Keep moving forward.$"
