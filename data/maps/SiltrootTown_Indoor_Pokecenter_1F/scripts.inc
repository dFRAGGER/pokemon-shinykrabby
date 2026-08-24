SiltrootTown_Indoor_Pokecenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SiltrootTown_Indoor_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, SiltrootTown_Indoor_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

SiltrootTown_Indoor_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Siltroottown_PokemonCenter_1F_OnTransition
	return

SiltrootTown_Indoor_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call CableClub_OnResume
	return


Siltroottown_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_SILTROOT_TOWN
	end


Siltroottown_PokemonCenter_1F_EventScript_Nurse::
	lock
	msgbox Siltroottown_PokemonCenter_1F_EventScript_Nurse_Text_0, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, YES
	goto_if_eq Siltroottown_PokemonCenter_1F_EventScript_Nurse_2
	msgbox Siltroottown_PokemonCenter_1F_EventScript_Nurse_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, Siltroottown_PokemonCenter_1F_EventScript_Nurse_Movement_0
	waitmovement
	release
	end

Siltroottown_PokemonCenter_1F_EventScript_Nurse_2:
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox Siltroottown_PokemonCenter_1F_EventScript_Nurse_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, Siltroottown_PokemonCenter_1F_EventScript_Nurse_Movement_0
	waitmovement
	release
	end


SiltrootTown_Indoor_Pokecenter_1F_Captain::
	lock
	faceplayer
	msgbox SiltrootTown_Indoor_Pokecenter_1F_Captain_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


SiltrootTown_Indoor_Pokecenter_1F_Sailor1::
	lock
	faceplayer
	msgbox SiltrootTown_Indoor_Pokecenter_1F_Sailor1_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


SiltrootTown_Indoor_Pokecenter_1F_Sailor2::
	lock
	faceplayer
	msgbox SiltrootTown_Indoor_Pokecenter_1F_Sailor2_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


SiltrootTown_Indoor_Pokecenter_1F_Cook::
	lock
	faceplayer
	msgbox SiltrootTown_Indoor_Pokecenter_1F_Cook_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Siltroottown_PokemonCenter_1F_EventScript_Nurse_Movement_0:
	face_down
	step_end

Siltroottown_PokemonCenter_1F_EventScript_Nurse_Text_0:
	.string "Welcome to the Siltroot Town Pokémon\n"
	.string "Center.\p"
	.string "We are the oldest Pokémon Center in the\n"
	.string "region.\p"
	.string "Would you like to heal your Pokémon?$"

Siltroottown_PokemonCenter_1F_EventScript_Nurse_Text_1:
	.string "Your Pokémon have been healed!\p"
	.string "Thank you for visiting the Siltroot\n"
	.string "Town Pokémon Center.\p"
	.string "We hope to see you again!$"

Siltroottown_PokemonCenter_1F_EventScript_Nurse_Text_2:
	.string "No problem! Come back when you're\n"
	.string "ready.\p"
	.string "We always have bed available for you.$"

SiltrootTown_Indoor_Pokecenter_1F_Captain_Text_0:
	.string "That storm nearly claimed my ship, but\n"
	.string "we made it to port.\p"
	.string "Let the crew rest; they have earned a\n"
	.string "solid twelve hours of sleep.$"

SiltrootTown_Indoor_Pokecenter_1F_Sailor1_Text_0:
	.string "The ground stopped moving hours ago,\n"
	.string "but my legs still feel like jelly.\p"
	.string "I have never been so happy to see a\n"
	.string "nurse in my life.$"

SiltrootTown_Indoor_Pokecenter_1F_Sailor2_Text_0:
	.string "The waves out there were taller than\n"
	.string "the mast!\p"
	.string "It was so rough that even my\n"
	.string "Water-type Pokémon started getting\l"
	.string "seasick.$"

SiltrootTown_Indoor_Pokecenter_1F_Cook_Text_0:
	.string "Try chopping carrots when the ship is\n"
	.string "tilting forty-five degrees!\p"
	.string "I think most of the crew's dinner ended\n"
	.string "up on the kitchen ceiling.$"
