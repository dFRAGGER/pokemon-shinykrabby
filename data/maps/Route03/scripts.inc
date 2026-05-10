Route03_MapScripts::
# 2 "data/maps/Route03/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route03_MapScripts_MAP_SCRIPT_ON_LOAD
# 5 "data/maps/Route03/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route03_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Route03_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Route03/scripts.pory"
	call Route03_OnLoad
	return

Route03_MapScripts_MAP_SCRIPT_ON_RESUME:
# 6 "data/maps/Route03/scripts.pory"
	call Route03_OnLoad
	return


Route03_OnLoad::
# 11 "data/maps/Route03/scripts.pory"
	goto_if_unset FLAG_FACULTY_SYMPATHIZERS_2, Route03_OnLoad_2
# 15 "data/maps/Route03/scripts.pory"
	setmetatile 10, 14, 0x07C, TRUE
# 16 "data/maps/Route03/scripts.pory"
	setmetatile 10, 15, 0x079, TRUE
# 17 "data/maps/Route03/scripts.pory"
	setmetatile 10, 16, 0x274, TRUE
# 18 "data/maps/Route03/scripts.pory"
	setmetatile 10, 17, 0x27C, TRUE
# 19 "data/maps/Route03/scripts.pory"
	setmetatile 10, 18, 0x27C, TRUE
	return

Route03_OnLoad_2:
# 12 "data/maps/Route03/scripts.pory"
	setflag FLAG_TEMP_5
	return


Route03_Script_CliffsideWatcher::
# 24 "data/maps/Route03/scripts.pory"
	lock
# 25 "data/maps/Route03/scripts.pory"
	faceplayer
# 26 "data/maps/Route03/scripts.pory"
	msgbox Route03_Text_CliffsideWatcher, MSGBOX_DEFAULT
# 27 "data/maps/Route03/scripts.pory"
	release
	end


Route03_Trainer_Gabrielle::
# 36 "data/maps/Route03/scripts.pory"
	trainerbattle_single TRAINER_GABRIELLE, Route03_Text_GabrielleIntro, Route03_Text_GabrielleDefeated
# 37 "data/maps/Route03/scripts.pory"
	msgbox Route03_Text_GabriellePostBattle, MSGBOX_AUTOCLOSE
	end


Route03_Trainer_Lawson::
# 54 "data/maps/Route03/scripts.pory"
	trainerbattle_single TRAINER_LAWSON, Route03_Text_LawsonIntro, Route03_Text_LawsonDefeated
# 55 "data/maps/Route03/scripts.pory"
	msgbox Route03_Text_LawsonPostBattle, MSGBOX_AUTOCLOSE
	end


Route03_Trainer_Marcel::
# 72 "data/maps/Route03/scripts.pory"
	trainerbattle_single TRAINER_MARCEL, Route03_Text_MarcelIntro, Route03_Text_MarcelDefeated
# 73 "data/maps/Route03/scripts.pory"
	msgbox Route03_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
	end


Route03_Trainer_Alberto::
# 90 "data/maps/Route03/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, Route03_Text_AlbertoIntro, Route03_Text_AlbertoDefeated
# 91 "data/maps/Route03/scripts.pory"
	msgbox Route03_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
	end


Route03_Trainer_Ed::
# 108 "data/maps/Route03/scripts.pory"
	trainerbattle_single TRAINER_ED, Route03_Text_EdIntro, Route03_Text_EdDefeated
# 109 "data/maps/Route03/scripts.pory"
	msgbox Route03_Text_EdPostBattle, MSGBOX_AUTOCLOSE
	end


Route03_Text_CliffsideWatcher::
# 31 "data/maps/Route03/scripts.pory"
	.string "Ugh...\p"
	.string "Some reckless trainer came sprinting\n"
	.string "through here and knocked the ladder\l"
	.string "right off the cliff.\p"
	.string "In such a hurry they didn't even look\n"
	.string "where they were going!\p"
	.string "Now how is anyone supposed to get down\n"
	.string "there?$"

Route03_Text_GabrielleIntro::
# 41 "data/maps/Route03/scripts.pory"
	.string "Some Pokémon walk, but mine prefer to\n"
	.string "flap and flutter!$"

Route03_Text_GabrielleDefeated::
# 45 "data/maps/Route03/scripts.pory"
	.string "Grounded!\n"
	.string "I can't believe it.$"

Route03_Text_GabriellePostBattle::
# 49 "data/maps/Route03/scripts.pory"
	.string "Yanma is really fast.\n"
	.string "It is hard to catch one.$"

Route03_Text_LawsonIntro::
# 59 "data/maps/Route03/scripts.pory"
	.string "Eek! A spider!\n"
	.string "Just kidding, it's my friend.$"

Route03_Text_LawsonDefeated::
# 63 "data/maps/Route03/scripts.pory"
	.string "Squashed like a bug...$"

Route03_Text_LawsonPostBattle::
# 67 "data/maps/Route03/scripts.pory"
	.string "Bug Pokémon evolve quickly.\n"
	.string "I can't wait for them to change.$"

Route03_Text_MarcelIntro::
# 77 "data/maps/Route03/scripts.pory"
	.string "Fire is hot, so you better watch out or\n"
	.string "you'll get burned!$"

Route03_Text_MarcelDefeated::
# 81 "data/maps/Route03/scripts.pory"
	.string "We burned out...$"

Route03_Text_MarcelPostBattle::
# 85 "data/maps/Route03/scripts.pory"
	.string "If you meet a Grass-type Pokémon, my\n"
	.string "Charmander is unbeatable.$"

Route03_Text_AlbertoIntro::
# 95 "data/maps/Route03/scripts.pory"
	.string "I'm thirsty for a battle.\n"
	.string "Let's make a splash!$"

Route03_Text_AlbertoDefeated::
# 99 "data/maps/Route03/scripts.pory"
	.string "I'm all dried up.$"

Route03_Text_AlbertoPostBattle::
# 103 "data/maps/Route03/scripts.pory"
	.string "Water Pokémon are the best.\n"
	.string "They have fewer weaknesses.$"

Route03_Text_EdIntro::
# 113 "data/maps/Route03/scripts.pory"
	.string "Stop right there!\n"
	.string "Only the strong pass this point.$"

Route03_Text_EdDefeated::
# 117 "data/maps/Route03/scripts.pory"
	.string "Okay, okay!\n"
	.string "You are strong enough.$"

Route03_Text_EdPostBattle::
# 121 "data/maps/Route03/scripts.pory"
	.string "Training is a never-ending road.\n"
	.string "Keep moving forward.$"
