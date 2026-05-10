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

