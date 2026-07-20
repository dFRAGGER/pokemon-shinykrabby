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
	setvar VAR_0x800B, LOCALID_MARSHDUKE_NURSE
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
	.string "Shh. Watch her ears.\p"
	.string "That's my PSYDUCK - she runs in\n"
	.string "circles when a headache is coming.\p"
	.string "Exactly forty-two laps, every time.\n"
	.string "I've counted. I always count.\p"
	.string "Yesterday she stopped at forty-one.\n"
	.string "Nobody believes me, but something\n"
	.string "is different about this one.$"

Marshduke_Indoor_PokemonCenter_1F_FatMan_Text_0:
# 35 "data/maps/Marshduke_Indoor_PokemonCenter_1F/scripts.pory"
	.string "Most towns, trainers heal and leave.\p"
	.string "Here, they heal and go stand\n"
	.string "in the cathedral for an hour.$"
