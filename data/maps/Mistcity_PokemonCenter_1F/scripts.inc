Mistcity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Mistcity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Mistcity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Mistcity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	call Mistcity_PokemonCenter_1F_OnTransition
	return

Mistcity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 6 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	call CableClub_OnResume
	return


Mistcity_PokemonCenter_1F_OnTransition::
# 11 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MIST_CITY
	end


Mistcity_PokemonCenter_1F_EventScript_Nurse::
# 16 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_MISTCITY_NURSE
# 17 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 18 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 19 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 20 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	release
	end


Mistcity_PokemonCenter_BugCatcher::
# 26 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	lock
# 27 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 28 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	msgbox Mistcity_PokemonCenter_BugCatcher_Text_0
# 29 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 30 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	release
	return


Mistcity_PokemonCenter_Hiker::
# 34 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	lock
# 35 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 36 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	msgbox Mistcity_PokemonCenter_Hiker_Text_0
# 37 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 38 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	release
	return


Mistcity_PokemonCenter_BugCatcher_Text_0:
# 28 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	.string "Walking through the fog really tires\n"
	.string "you out, doesn't it?\p"
	.string "It's nice to just sit here for a while\n"
	.string "and listen to the healing machine chime.$"

Mistcity_PokemonCenter_Hiker_Text_0:
# 36 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	.string "It rains almost every day in this town,\n"
	.string "so I keep my Charmander inside its Poké\l"
	.string "Ball to keep its tail flame safe.$"
