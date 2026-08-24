LionsarchCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LionsarchCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, LionsarchCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

LionsarchCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call LionsarchCity_PokemonCenter_1F_OnTransition
	return

LionsarchCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call CableClub_OnResume
	return


LionsarchCity_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_LIONSARCH_CITY
	end


LionsarchCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


LionsarchCity_PokemonCenter_1F_SailorRik::
	lock
	faceplayer
	msgbox LionsarchCity_PokemonCenter_1F_SailorRik_Text_0
	waitmessage
	release
	return


LionsarchCity_PokemonCenter_1F_CourierBette::
	lock
	faceplayer
	msgbox LionsarchCity_PokemonCenter_1F_CourierBette_Text_0
	waitmessage
	release
	return


LionsarchCity_PokemonCenter_1F_SailorRik_Text_0:
	.string "Rough crossing last night.\p"
	.string "Swell coming in from the northwest, four\n"
	.string "meters easy.\p"
	.string "My Tentacruel got knocked around\n"
	.string "something fierce trying to steady the\l"
	.string "hull.\p"
	.string "Nurse says he'll be right as rain in a\n"
	.string "few minutes.\p"
	.string "Me, I'll need a bit longer.$"

LionsarchCity_PokemonCenter_1F_CourierBette_Text_0:
	.string "Ugh, this city.\p"
	.string "Don't get me wrong, I love the work, but\n"
	.string "Lionsarch is always so COLD.\p"
	.string "I came up in a boat from Siltroot this\n"
	.string "morning and I can't feel my fingers.\p"
	.string "My Ponyta hated every second of it too.\p"
	.string "She stayed in her pokeball the whole\n"
	.string "time.$"
