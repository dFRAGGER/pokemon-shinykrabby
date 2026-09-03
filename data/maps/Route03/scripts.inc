Route03_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route03_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_RESUME, Route03_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Route03_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Route03_OnLoad
	return

Route03_MapScripts_MAP_SCRIPT_ON_RESUME:
	call Route03_OnLoad
	return


Route03_OnLoad::
	goto_if_unset FLAG_FACULTY_SYMPATHIZERS_2, Route03_OnLoad_2
	setmetatile 10, 14, 0x07C, TRUE
	setmetatile 10, 15, 0x079, TRUE
	setmetatile 10, 16, 0x274, TRUE
	setmetatile 10, 17, 0x27C, TRUE
	setmetatile 10, 18, 0x27C, TRUE
	return

Route03_OnLoad_2:
	return


Route03_Script_CliffsideWatcher::
	lock
	faceplayer
	msgbox Route03_Text_CliffsideWatcher, MSGBOX_DEFAULT
	release
	end


Route03_Trainer_Gabrielle::
	trainerbattle_single TRAINER_GABRIELLE, Route03_Text_GabrielleIntro, Route03_Text_GabrielleDefeated
	msgbox Route03_Text_GabriellePostBattle, MSGBOX_AUTOCLOSE
	end


Route03_Trainer_Lawson::
	trainerbattle_single TRAINER_LAWSON, Route03_Text_LawsonIntro, Route03_Text_LawsonDefeated
	msgbox Route03_Text_LawsonPostBattle, MSGBOX_AUTOCLOSE
	end


Route03_Trainer_Marcel::
	trainerbattle_single TRAINER_MARCEL_ROUTE03_SK, Route03_Text_MarcelIntro, Route03_Text_MarcelDefeated
	msgbox Route03_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
	end


Route03_Trainer_Alberto::
	trainerbattle_single TRAINER_ALBERTO_ROUTE03_SK, Route03_Text_AlbertoIntro, Route03_Text_AlbertoDefeated
	msgbox Route03_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
	end


Route03_Trainer_Ed::
	trainerbattle_single TRAINER_ED_ROUTE03_SK, Route03_Text_EdIntro, Route03_Text_EdDefeated
	msgbox Route03_Text_EdPostBattle, MSGBOX_AUTOCLOSE
	end


Route03_Text_CliffsideWatcher::
	.string "Ugh...\p"
	.string "Some reckless trainer came sprinting\n"
	.string "through here and knocked the ladder\l"
	.string "right off the cliff.\p"
	.string "In such a hurry they didn't even look\n"
	.string "where they were going!\p"
	.string "Now how is anyone supposed to get down\n"
	.string "there?$"

Route03_Text_GabrielleIntro::
	.string "Some Pokémon walk, but mine prefer to\n"
	.string "flap and flutter!$"

Route03_Text_GabrielleDefeated::
	.string "Grounded!\n"
	.string "I can't believe it.$"

Route03_Text_GabriellePostBattle::
	.string "Yanma is really fast.\n"
	.string "It is hard to catch one.$"

Route03_Text_LawsonIntro::
	.string "Eek! A spider!\n"
	.string "Just kidding, it's my friend.$"

Route03_Text_LawsonDefeated::
	.string "Squashed like a bug...$"

Route03_Text_LawsonPostBattle::
	.string "Bug Pokémon evolve quickly.\n"
	.string "I can't wait for them to change.$"

Route03_Text_MarcelIntro::
	.string "Fire is hot, so you better watch out or\n"
	.string "you'll get burned!$"

Route03_Text_MarcelDefeated::
	.string "We burned out...$"

Route03_Text_MarcelPostBattle::
	.string "If you meet a Grass-type Pokémon, my\n"
	.string "Charmander is unbeatable.$"

Route03_Text_AlbertoIntro::
	.string "I'm thirsty for a battle.\n"
	.string "Let's make a splash!$"

Route03_Text_AlbertoDefeated::
	.string "I'm all dried up.$"

Route03_Text_AlbertoPostBattle::
	.string "Water Pokémon are the best.\n"
	.string "They have fewer weaknesses.$"

Route03_Text_EdIntro::
	.string "Stop right there!\n"
	.string "Only the strong pass this point.$"

Route03_Text_EdDefeated::
	.string "Okay, okay!\n"
	.string "You are strong enough.$"

Route03_Text_EdPostBattle::
	.string "Training is a never-ending road.\n"
	.string "Keep moving forward.$"
