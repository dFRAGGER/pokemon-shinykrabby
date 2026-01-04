SiltrootTown_Indoor_Pokecenter_1F_MapScripts::
# 2 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SiltrootTown_Indoor_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SiltrootTown_Indoor_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

SiltrootTown_Indoor_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	call Siltroottown_PokemonCenter_1F_OnTransition
	return

SiltrootTown_Indoor_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 6 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	call CableClub_OnResume
	return


Siltroottown_PokemonCenter_1F_OnTransition::
# 11 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SILTROOT_TOWN
	end


Siltroottown_PokemonCenter_1F_EventScript_Nurse::
# 16 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_MISTCITY_NURSE
# 17 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 18 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	waitmessage
# 19 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	waitbuttonpress
# 20 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	release
	end


SiltrootTown_Indoor_Pokecenter_1F_Captain::
# 25 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	lock
# 26 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	faceplayer
# 27 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	msgbox SiltrootTown_Indoor_Pokecenter_1F_Captain_Text_0, MSGBOX_AUTOCLOSE
# 28 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	waitmessage
# 29 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	release
	end


SiltrootTown_Indoor_Pokecenter_1F_Sailor1::
# 34 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	lock
# 35 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	faceplayer
# 36 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	msgbox SiltrootTown_Indoor_Pokecenter_1F_Sailor1_Text_0, MSGBOX_AUTOCLOSE
# 37 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	waitmessage
# 38 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	release
	end


SiltrootTown_Indoor_Pokecenter_1F_Sailor2::
# 43 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	lock
# 44 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	faceplayer
# 45 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	msgbox SiltrootTown_Indoor_Pokecenter_1F_Sailor2_Text_0, MSGBOX_AUTOCLOSE
# 46 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	waitmessage
# 47 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	release
	end


SiltrootTown_Indoor_Pokecenter_1F_Cook::
# 52 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	lock
# 53 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	faceplayer
# 54 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	msgbox SiltrootTown_Indoor_Pokecenter_1F_Cook_Text_0, MSGBOX_AUTOCLOSE
# 55 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	waitmessage
# 56 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	release
	end


SiltrootTown_Indoor_Pokecenter_1F_Captain_Text_0:
# 27 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	.string "That storm nearly claimed my ship, but\n"
	.string "we made it to port.\p"
	.string "Let the crew rest; they have earned a\n"
	.string "solid twelve hours of sleep.$"

SiltrootTown_Indoor_Pokecenter_1F_Sailor1_Text_0:
# 36 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	.string "The ground stopped moving hours ago,\n"
	.string "but my legs still feel like jelly.\p"
	.string "I have never been so happy to see a\n"
	.string "Nurse Joy in my life.$"

SiltrootTown_Indoor_Pokecenter_1F_Sailor2_Text_0:
# 45 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	.string "The waves out there were taller than\n"
	.string "the mast!\p"
	.string "It was so rough that even my\n"
	.string "Water-type Pokémon started getting\l"
	.string "seasick.$"

SiltrootTown_Indoor_Pokecenter_1F_Cook_Text_0:
# 54 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	.string "Try chopping carrots when the ship is\n"
	.string "tilting forty-five degrees!\p"
	.string "I think most of the crew's dinner ended\n"
	.string "up on the kitchen ceiling.$"
