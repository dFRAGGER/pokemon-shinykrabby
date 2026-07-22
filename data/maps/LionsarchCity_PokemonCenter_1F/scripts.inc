LionsarchCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LionsarchCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, LionsarchCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

LionsarchCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	call LionsarchCity_PokemonCenter_1F_OnTransition
	return

LionsarchCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 6 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	call CableClub_OnResume
	return


LionsarchCity_PokemonCenter_1F_OnTransition::
# 11 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LIONSARCH_CITY
	end


LionsarchCity_PokemonCenter_1F_EventScript_Nurse::
# 16 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 17 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 18 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 19 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 20 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	release
	end


LionsarchCity_PokemonCenter_1F_SailorRik::
# 27 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	lock
# 28 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 29 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	msgbox LionsarchCity_PokemonCenter_1F_SailorRik_Text_0
# 30 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 31 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	release
	return


LionsarchCity_PokemonCenter_1F_CourierBette::
# 37 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	lock
# 38 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 39 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	msgbox LionsarchCity_PokemonCenter_1F_CourierBette_Text_0
# 40 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 41 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	release
	return


LionsarchCity_PokemonCenter_1F_SailorRik_Text_0:
# 29 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
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
# 39 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	.string "Ugh, this city.\p"
	.string "Don't get me wrong, I love the work, but\n"
	.string "Lionsarch is always so COLD.\p"
	.string "I came up in a boat from Siltroot this\n"
	.string "morning and I can't feel my fingers.\p"
	.string "My Ponyta hated every second of it too.\p"
	.string "She stayed in her pokeball the whole\n"
	.string "time.$"
