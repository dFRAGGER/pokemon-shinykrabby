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
	setvar VAR_0x800B, LOCALID_MISTCITY_NURSE
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
	msgbox LionsarchCity_PokemonCenter_1F_SailorRik_Text_1
# 32 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 33 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	release
	return


LionsarchCity_PokemonCenter_1F_CourierBette::
# 39 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	lock
# 40 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 41 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	msgbox LionsarchCity_PokemonCenter_1F_CourierBette_Text_0
# 42 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 43 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	msgbox LionsarchCity_PokemonCenter_1F_CourierBette_Text_1
# 44 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 45 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
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

LionsarchCity_PokemonCenter_1F_SailorRik_Text_1:
# 31 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	.string "You heading north?\p"
	.string "I'd wait a day if I were you.\p"
	.string "There's a cold front sitting right over\n"
	.string "the straits.\p"
	.string "Sea's the color of iron out there.\p"
	.string "Beautiful in a horrible sort of way.$"

LionsarchCity_PokemonCenter_1F_CourierBette_Text_0:
# 41 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	.string "Ugh, this city.\p"
	.string "Don't get me wrong, I love the work, but\n"
	.string "Lionsarch is always so COLD.\p"
	.string "I came up from Siltroot this morning and\n"
	.string "I can't feel my fingers.\p"
	.string "My Ponyta hated every second of it too.\p"
	.string "She kept trying to turn around.$"

LionsarchCity_PokemonCenter_1F_CourierBette_Text_1:
# 43 "data/maps/LionsarchCity_PokemonCenter_1F/scripts.pory"
	.string "Three more drops to make before\n"
	.string "sundown.\p"
	.string "A crate to the factory, something\n"
	.string "sealed for the harbor master,\n"
	.string "and a small parcel to someone on the\l"
	.string "east side.\p"
	.string "I don't ask what's in the parcels.\p"
	.string "You learn that fast in this job.$"
