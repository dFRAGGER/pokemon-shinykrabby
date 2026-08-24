Mistcity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Mistcity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, Mistcity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Mistcity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Mistcity_PokemonCenter_1F_OnTransition
	return

Mistcity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call CableClub_OnResume
	return


Mistcity_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_MIST_CITY
	end


Mistcity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


Mistcity_PokemonCenter_BugCatcher::
	lock
	faceplayer
	msgbox Mistcity_PokemonCenter_BugCatcher_Text_0
	waitmessage
	release
	return


Mistcity_PokemonCenter_Hiker::
	lock
	faceplayer
	msgbox Mistcity_PokemonCenter_Hiker_Text_0
	waitmessage
	release
	return


Mistcity_PokemonCenter_BugCatcher_Text_0:
	.string "Walking through the rain really tires\n"
	.string "you out, doesn't it?\p"
	.string "It's nice to just sit here for a while\n"
	.string "and listen to the healing machine chime.$"

Mistcity_PokemonCenter_Hiker_Text_0:
	.string "It rains almost every day in this town\n"
	.string "due to permanent clouds trapped in the\l"
	.string "valley, so I keep my Charmander inside\l"
	.string "its Poké Ball to keep its tail flame\l"
	.string "safe.$"
