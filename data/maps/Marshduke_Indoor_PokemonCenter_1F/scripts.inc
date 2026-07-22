Marshduke_Indoor_PokemonCenter_1F_MapScripts::
# 2 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Marshduke_Indoor_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Marshduke_Indoor_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Marshduke_Indoor_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	call Marshduke_Indoor_PokemonCenter_1F_OnTransition
	return

Marshduke_Indoor_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 6 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	call CableClub_OnResume
	return


Marshduke_Indoor_PokemonCenter_1F_OnTransition::
# 11 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MARSH_DUKE_CITY
	end


Marshduke_Indoor_PokemonCenter_1F_EventScript_Nurse::
# 16 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 17 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 18 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	waitmessage
# 19 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 20 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	release
	end


Marshduke_Indoor_PokemonCenter_1F_HexManiac::
# 25 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	lock
# 26 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	faceplayer
# 27 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	msgbox Marshduke_Indoor_PokemonCenter_1F_HexManiac_Text_0
# 28 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	waitmessage
# 29 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	release
	return


Marshduke_Indoor_PokemonCenter_1F_FatMan::
# 33 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	lock
# 34 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	faceplayer
# 35 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	msgbox Marshduke_Indoor_PokemonCenter_1F_FatMan_Text_0
# 36 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	waitmessage
# 37 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	release
	return


Marshduke_Indoor_PokemonCenter_1F_HexManiac_Text_0:
# 27 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	.string "Shh. Put your ear to the floor.\p"
	.string "...\p"
	.string "No? Fine. I'll tell you.\p"
	.string "You know that hum from the ALAKAZAM in\n"
	.string "the Cathedral?\p"
	.string "It comes up through the floor\n"
	.string "everywhere in this city.\p"
	.string "It has been B-flat for decades.\p"
	.string "How do I know that?\p"
	.string "My psyduck hates B-flat. Just like\n"
	.string "anything else which makes noise to be\l"
	.string "honest...\p"
	.string "Anyways, last week for ONE second it\n"
	.string "wavered.\p"
	.string "Nobody believes me, but my psyduck\n"
	.string "stopped running and looked intrigued.\p"
	.string "Then he went back to being anoyed.$"

Marshduke_Indoor_PokemonCenter_1F_FatMan_Text_0:
# 35 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	.string "Most towns, trainers heal and leave.\p"
	.string "Here, they heal and go stand in the\n"
	.string "cathedral for an hour.$"
