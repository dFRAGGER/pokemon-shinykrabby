Mistcity_PokemonCenter_1F_MapScripts::
	.byte 0


Mistcity_PokemonCenter_1F_EventScript_Nurse::
# 4 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_MISTCITY_NURSE
# 5 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 6 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 7 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 8 "data/maps/Mistcity_PokemonCenter_1F/scripts.pory"
	release
	end

