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
	lock
# 17 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	msgbox Siltroottown_PokemonCenter_1F_EventScript_Nurse_Text_0, MSGBOX_YESNO
# 18 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	waitmessage
# 19 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Siltroottown_PokemonCenter_1F_EventScript_Nurse_2
# 29 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	msgbox Siltroottown_PokemonCenter_1F_EventScript_Nurse_Text_2, MSGBOX_AUTOCLOSE
# 30 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	waitmessage
# 32 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Siltroottown_PokemonCenter_1F_EventScript_Nurse_Movement_0
# 33 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	waitmovement
# 34 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	release
	end

Siltroottown_PokemonCenter_1F_EventScript_Nurse_2:
# 20 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 21 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	msgbox Siltroottown_PokemonCenter_1F_EventScript_Nurse_Text_1, MSGBOX_AUTOCLOSE
# 22 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	waitmessage
# 23 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Siltroottown_PokemonCenter_1F_EventScript_Nurse_Movement_0
# 24 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	waitmovement
# 25 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	release
	end


SiltrootTown_Indoor_Pokecenter_1F_Captain::
# 39 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	lock
# 40 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	faceplayer
# 41 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	msgbox SiltrootTown_Indoor_Pokecenter_1F_Captain_Text_0, MSGBOX_AUTOCLOSE
# 42 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	waitmessage
# 43 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	release
	end


SiltrootTown_Indoor_Pokecenter_1F_Sailor1::
# 48 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	lock
# 49 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	faceplayer
# 50 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	msgbox SiltrootTown_Indoor_Pokecenter_1F_Sailor1_Text_0, MSGBOX_AUTOCLOSE
# 51 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	waitmessage
# 52 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	release
	end


SiltrootTown_Indoor_Pokecenter_1F_Sailor2::
# 57 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	lock
# 58 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	faceplayer
# 59 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	msgbox SiltrootTown_Indoor_Pokecenter_1F_Sailor2_Text_0, MSGBOX_AUTOCLOSE
# 60 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	waitmessage
# 61 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	release
	end


SiltrootTown_Indoor_Pokecenter_1F_Cook::
# 66 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	lock
# 67 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	faceplayer
# 68 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	msgbox SiltrootTown_Indoor_Pokecenter_1F_Cook_Text_0, MSGBOX_AUTOCLOSE
# 69 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	waitmessage
# 70 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	release
	end


# 23 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
Siltroottown_PokemonCenter_1F_EventScript_Nurse_Movement_0:
# 23 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	face_down
	step_end

Siltroottown_PokemonCenter_1F_EventScript_Nurse_Text_0:
# 17 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	.string "Welcome to the Siltroot Town Pokémon\n"
	.string "Center.\p"
	.string "We are the oldest Pokémon Center in the\n"
	.string "region.\p"
	.string "Would you like to heal your Pokémon?$"

Siltroottown_PokemonCenter_1F_EventScript_Nurse_Text_1:
# 21 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	.string "Your Pokémon have been healed!\p"
	.string "Thank you for visiting the Siltroot\n"
	.string "Town Pokémon Center.\p"
	.string "We hope to see you again!$"

Siltroottown_PokemonCenter_1F_EventScript_Nurse_Text_2:
# 29 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	.string "No problem! Come back when you're\n"
	.string "ready.\p"
	.string "We always have bed available for you.$"

SiltrootTown_Indoor_Pokecenter_1F_Captain_Text_0:
# 41 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	.string "That storm nearly claimed my ship, but\n"
	.string "we made it to port.\p"
	.string "Let the crew rest; they have earned a\n"
	.string "solid twelve hours of sleep.$"

SiltrootTown_Indoor_Pokecenter_1F_Sailor1_Text_0:
# 50 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	.string "The ground stopped moving hours ago,\n"
	.string "but my legs still feel like jelly.\p"
	.string "I have never been so happy to see a\n"
	.string "nurse in my life.$"

SiltrootTown_Indoor_Pokecenter_1F_Sailor2_Text_0:
# 59 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	.string "The waves out there were taller than\n"
	.string "the mast!\p"
	.string "It was so rough that even my\n"
	.string "Water-type Pokémon started getting\l"
	.string "seasick.$"

SiltrootTown_Indoor_Pokecenter_1F_Cook_Text_0:
# 68 "data/maps/SiltrootTown_Indoor_Pokecenter_1F/scripts.pory"
	.string "Try chopping carrots when the ship is\n"
	.string "tilting forty-five degrees!\p"
	.string "I think most of the crew's dinner ended\n"
	.string "up on the kitchen ceiling.$"
