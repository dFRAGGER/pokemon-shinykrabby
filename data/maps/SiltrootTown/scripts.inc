SiltrootTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SiltrootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SiltrootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_SILTROOT_TOWN
	return


Siltroottown_Joris_UpToTheWhiteLight::
	lock
	faceplayer
	setflag FLAG_UP_TO_THE_WHITELIGHT_SILTROOTTOWN
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	msgbox Siltroottown_Joris_UpToTheWhiteLight_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 26, Siltroottown_Joris_UpToTheWhiteLight_Movement_0
	delay 40
	setspeaker Siltroottown_Joris_UpToTheWhiteLight_Text_1
	msgbox Siltroottown_Joris_UpToTheWhiteLight_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_PIN
	applymovement LOCALID_PLAYER, Siltroottown_Joris_UpToTheWhiteLight_Movement_1
	delay 40
	compare VAR_TEMP_0, 51
	goto_if_eq Siltroottown_Joris_UpToTheWhiteLight_4
Siltroottown_Joris_UpToTheWhiteLight_3:
	applymovement 2, Siltroottown_Joris_UpToTheWhiteLight_Movement_3
Siltroottown_Joris_UpToTheWhiteLight_1:
	waitmovement
	removeobject 2
	release
	return

Siltroottown_Joris_UpToTheWhiteLight_2:
	applymovement 2, Siltroottown_Joris_UpToTheWhiteLight_Movement_2
	goto Siltroottown_Joris_UpToTheWhiteLight_1

Siltroottown_Joris_UpToTheWhiteLight_4:
	compare VAR_TEMP_1, 55
	goto_if_eq Siltroottown_Joris_UpToTheWhiteLight_2
	goto Siltroottown_Joris_UpToTheWhiteLight_3


SiltrootTown_Corsola_Jump1::
	lock
	playse SE_PIN
	applymovement 23, SiltrootTown_Corsola_Jump1_Movement_0
	waitmovement
	setflag FLAG_TEMP_1
	removeobject 23
	release
	return


SiltrootTown_Corsola_Jump2::
	lock
	playse SE_PIN
	applymovement 24, SiltrootTown_Corsola_Jump1_Movement_0
	waitmovement
	setflag FLAG_TEMP_2
	removeobject 24
	release
	return


SiltrootTown_Corsola_Jump3::
	lock
	playse SE_PIN
	applymovement 25, SiltrootTown_Corsola_Jump1_Movement_0
	waitmovement
	setflag FLAG_TEMP_2
	removeobject 25
	release
	return


SiltrootTown_Sign_AliApothecary::
	lock
	msgbox SiltrootTown_Sign_AliApothecary_Text_0, MSGBOX_SIGN
	waitmessage
	release
	return


SiltrootTown_Sign_Pokecenter::
	lock
	msgbox SiltrootTown_Sign_Pokecenter_Text_0, MSGBOX_SIGN
	waitmessage
	release
	return


Siltroottown_Sign_SiltrootTown::
	lock
	msgbox Siltroottown_Sign_SiltrootTown_Text_0, MSGBOX_SIGN
	waitmessage
	release
	return


SiltrootTown_Scott_Boatride::
	lockall
	checkitem ITEM_POKEBLOCK_CASE
	compare VAR_RESULT, FALSE
	goto_if_eq SiltrootTown_Scott_Boatride_2
	setflag FLAG_HIDE_SCOTT_LIONSARCH_CITY
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	faceplayer
	setspeaker SiltrootTown_Scott_Boatride_Text_0
	msgbox SiltrootTown_Scott_Boatride_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	setobjectsubpriority 12, MAP_SILTROOT_TOWN, 0
	setobjectsubpriority LOCALID_PLAYER, MAP_SILTROOT_TOWN, 0
	applymovement 12, SiltrootTown_Scott_Boatride_Movement_0
	waitmovement
	removeobject 12
	compare VAR_TEMP_0, 22
	goto_if_eq SiltrootTown_Scott_Boatride_14
SiltrootTown_Scott_Boatride_12:
	compare VAR_TEMP_0, 23
	goto_if_eq SiltrootTown_Scott_Boatride_11
SiltrootTown_Scott_Boatride_9:
	compare VAR_TEMP_0, 23
	goto_if_eq SiltrootTown_Scott_Boatride_8
SiltrootTown_Scott_Boatride_4:
	waitmovement
	hideobjectat LOCALID_PLAYER, MAP_SILTROOT_TOWN
	setflag FLAG_DONT_TRANSITION_MUSIC
	playbgm MUS_SAILING, FALSE
	applymovement 1, Siltroottown_Boat_Ride_To_Lionsarch
	applymovement LOCALID_PLAYER, Siltroottown_Boat_Ride_To_Lionsarch
	waitmovement
	goto SiltrootTown_Arrive_Boatride
	return

SiltrootTown_Scott_Boatride_2:
	faceplayer
	setspeaker SiltrootTown_Scott_Boatride_Text_0
	msgbox SiltrootTown_Scott_Boatride_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	releaseall
	end

SiltrootTown_Scott_Boatride_5:
	applymovement LOCALID_PLAYER, SiltrootTown_Scott_Boatride_Movement_1
	goto SiltrootTown_Scott_Boatride_4

SiltrootTown_Scott_Boatride_6:
	applymovement LOCALID_PLAYER, SiltrootTown_Scott_Boatride_Movement_2
	goto SiltrootTown_Scott_Boatride_4

SiltrootTown_Scott_Boatride_7:
	applymovement LOCALID_PLAYER, SiltrootTown_Scott_Boatride_Movement_3
	goto SiltrootTown_Scott_Boatride_4

SiltrootTown_Scott_Boatride_8:
	compare VAR_TEMP_1, 21
	goto_if_eq SiltrootTown_Scott_Boatride_7
	goto SiltrootTown_Scott_Boatride_4

SiltrootTown_Scott_Boatride_11:
	compare VAR_TEMP_1, 19
	goto_if_eq SiltrootTown_Scott_Boatride_6
	goto SiltrootTown_Scott_Boatride_9

SiltrootTown_Scott_Boatride_14:
	compare VAR_TEMP_1, 20
	goto_if_eq SiltrootTown_Scott_Boatride_5
	goto SiltrootTown_Scott_Boatride_12


SiltrootTown_Arrive_Boatride::
	delay 50
	setspeaker SiltrootTown_Scott_Boatride_Text_0
	msgbox SiltrootTown_Arrive_Boatride_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, SiltrootTown_Arrive_Boatride_Movement_0
	waitmovement
	call Common_EventScript_StopBrineysBoatMusic
	showobjectat LOCALID_PLAYER, MAP_SILTROOT_TOWN
	applymovement LOCALID_PLAYER, SiltrootTown_Arrive_Boatride_Movement_1
	call Common_EventScript_StopBrineysBoatMusic
	setflag FLAG_HIDE_SCOTT_OUTSIDE_BOAT
	setobjectxyperm 5, 9, 59
	addobject 5
	setobjectsubpriority 5, MAP_SILTROOT_TOWN, 0
	clearflag FLAG_HIDE_SCOTT_LIONSARCH_CITY
	applymovement 5, SiltrootTown_Arrive_Boatride_Movement_2
	waitmovement
	resetobjectsubpriority LOCALID_PLAYER, MAP_SILTROOT_TOWN
	resetobjectsubpriority 5, MAP_LIONSARCH_CITY
	setspeaker SiltrootTown_Arrive_Boatride_Text_1
	msgbox SiltrootTown_Arrive_Boatride_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 5, SiltrootTown_Arrive_Boatride_Movement_3
	waitmovement
	removeobject 5
	setflag FLAG_HIDE_SCOTT_LIONSARCH_CITY
	setrespawn HEAL_LOCATION_LIONSARCH_CITY
	end


Siltroottown_Youth_Outide_Ali_Shop_1::
	lock
	msgbox Siltroottown_Youth_Outide_Ali_Shop_1_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_PIN
	applymovement 14, Siltroottown_Youth_Outide_Ali_Shop_1_Movement_0
	msgbox Siltroottown_Youth_Outide_Ali_Shop_1_Text_1
	waitmessage
	release
	end


Siltroottown_Youth_Outide_Ali_Shop_2::
	lock
	faceplayer
	msgbox Siltroottown_Youth_Outide_Ali_Shop_2_Text_0
	waitmessage
	release
	end


Siltroottown_Youth_Outide_Ali_Shop_3::
	lock
	faceplayer
	msgbox Siltroottown_Youth_Outide_Ali_Shop_3_Text_0
	waitmessage
	release
	end


Siltroottown_Stoned_Dude_Outside::
	lock
	faceplayer
	msgbox Siltroottown_Stoned_Dude_Outside_Text_0
	waitmessage
	release
	end


Siltroottown_Old_Lady::
	lock
	faceplayer
	msgbox Siltroottown_Old_Lady_Text_0
	waitmessage
	release
	end


Siltroottown_Fat_Man::
	lock
	faceplayer
	msgbox Siltroottown_Fat_Man_Text_0
	waitmessage
	release
	end


Siltroottown_Children_Boy::
	lock
	msgbox Siltroottown_Children_Boy_Text_0
	waitmessage
	release
	end


Siltroottown_Children_Girl::
	lock
	msgbox Siltroottown_Children_Girl_Text_0
	waitmessage
	release
	end


Siltroottown_Sailor_Biodiversity::
	lock
	faceplayer
	msgbox Siltroottown_Sailor_Biodiversity_Text_0
	waitmessage
	release
	end


Siltroottown_Fisher_Sad::
	lock
	faceplayer
	msgbox Siltroottown_Fisher_Sad_Text_0
	waitmessage
	release
	end


Siltroottown_Guard_shed::
	lock
	faceplayer
	goto_if_unset FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1, Siltroottown_Guard_shed_11
Siltroottown_Guard_shed_9:
	goto_if_set FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1, Siltroottown_Guard_shed_8
Siltroottown_Guard_shed_6:
	goto_if_set FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1, Siltroottown_Guard_shed_5
Siltroottown_Guard_shed_1:
	release
	end

Siltroottown_Guard_shed_2:
	msgbox Siltroottown_Guard_shed_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end

Siltroottown_Guard_shed_3:
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	msgbox Siltroottown_Guard_shed_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	playse SE_PIN
	applymovement 20, Siltroottown_Guard_shed_Movement_0
	waitmovement
	msgbox Siltroottown_Guard_shed_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	compare VAR_TEMP_0, 62
	goto_if_eq Siltroottown_Guard_shed_20
Siltroottown_Guard_shed_18:
	compare VAR_TEMP_0, 61
	goto_if_eq Siltroottown_Guard_shed_17
Siltroottown_Guard_shed_14:
	msgbox Siltroottown_Guard_shed_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, Siltroottown_Guard_shed_Movement_5
	waitmovement
	setflag FLAG_HIDE_SILTROOTTOWN_SHED_GUARD
	release
	end

Siltroottown_Guard_shed_4:
	msgbox Siltroottown_Guard_shed_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end

Siltroottown_Guard_shed_5:
	goto_if_set FLAG_HIDE_SILTROOTTOWN_SHED_GUARD, Siltroottown_Guard_shed_4
	goto Siltroottown_Guard_shed_1

Siltroottown_Guard_shed_8:
	goto_if_unset FLAG_HIDE_SILTROOTTOWN_SHED_GUARD, Siltroottown_Guard_shed_3
	goto Siltroottown_Guard_shed_6

Siltroottown_Guard_shed_11:
	goto_if_unset FLAG_HIDE_SILTROOTTOWN_SHED_GUARD, Siltroottown_Guard_shed_2
	goto Siltroottown_Guard_shed_9

Siltroottown_Guard_shed_15:
	applymovement 20, Siltroottown_Guard_shed_Movement_1
	waitmovement
	applymovement LOCALID_PLAYER, Siltroottown_Guard_shed_Movement_2
	waitmovement
	goto Siltroottown_Guard_shed_14

Siltroottown_Guard_shed_16:
	applymovement 20, Siltroottown_Guard_shed_Movement_3
	waitmovement
	applymovement LOCALID_PLAYER, Siltroottown_Guard_shed_Movement_4
	waitmovement
	goto Siltroottown_Guard_shed_14

Siltroottown_Guard_shed_17:
	compare VAR_TEMP_1, 66
	goto_if_eq Siltroottown_Guard_shed_16
	goto Siltroottown_Guard_shed_14

Siltroottown_Guard_shed_20:
	compare VAR_TEMP_1, 65
	goto_if_eq Siltroottown_Guard_shed_15
	goto Siltroottown_Guard_shed_18


Siltroottown_Boat_Ride_To_Lionsarch:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Siltroottown_Joris_UpToTheWhiteLight_Movement_0:
	walk_in_place_fast_down
	step_end

Siltroottown_Joris_UpToTheWhiteLight_Movement_1:
	emote_question_mark
	step_end

Siltroottown_Joris_UpToTheWhiteLight_Movement_2:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Siltroottown_Joris_UpToTheWhiteLight_Movement_3:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

SiltrootTown_Corsola_Jump1_Movement_0:
	emote_exclamation_mark
	jump_2_left
	step_end

SiltrootTown_Scott_Boatride_Movement_0:
	walk_right
	step_end

SiltrootTown_Scott_Boatride_Movement_1:
	walk_right
	walk_right
	step_end

SiltrootTown_Scott_Boatride_Movement_2:
	walk_down
	walk_right
	step_end

SiltrootTown_Scott_Boatride_Movement_3:
	walk_up
	walk_right
	step_end

SiltrootTown_Arrive_Boatride_Movement_0:
	walk_fast_up
	step_end

SiltrootTown_Arrive_Boatride_Movement_1:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_right
	face_left
	step_end

SiltrootTown_Arrive_Boatride_Movement_2:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_up
	face_right
	step_end

SiltrootTown_Arrive_Boatride_Movement_3:
	walk_fast_down
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Siltroottown_Youth_Outide_Ali_Shop_1_Movement_0:
	emote_exclamation_mark
	face_player
	step_end

Siltroottown_Guard_shed_Movement_0:
	emote_exclamation_mark
	step_end

Siltroottown_Guard_shed_Movement_1:
	walk_down
	face_up
	step_end

Siltroottown_Guard_shed_Movement_2:
	walk_left
	face_down
	step_end

Siltroottown_Guard_shed_Movement_3:
	walk_right
	face_left
	step_end

Siltroottown_Guard_shed_Movement_4:
	walk_up
	face_right
	step_end

Siltroottown_Guard_shed_Movement_5:
	face_up
	step_end

Siltroottown_Joris_UpToTheWhiteLight_Text_0:
	.string "...$"

Siltroottown_Joris_UpToTheWhiteLight_Text_1:
	.string "?????$"

Siltroottown_Joris_UpToTheWhiteLight_Text_2:
	.string "UP TO THE WHITELIGHT!!!$"

SiltrootTown_Sign_AliApothecary_Text_0:
	.string "Coffeeshop the Magical Root!\n"
	.string "Where the smoke is thick and the leaves\l"
	.string "burn bright!$"

SiltrootTown_Sign_Pokecenter_Text_0:
	.string "Pokecenter Siltroot\n"
	.string "The oldest medical facility in the\l"
	.string "region!$"

Siltroottown_Sign_SiltrootTown_Text_0:
	.string "{LEFT_ARROW} Siltroot Town\n"
	.string "Where the mud is thick and the roots\l"
	.string "are deep.$"

SiltrootTown_Scott_Boatride_Text_0:
	.string "SCOTT$"

SiltrootTown_Scott_Boatride_Text_1:
	.string "...I don't know you.\p"
	.string "You got no credentials.\p"
	.string "Go see Ali first.\p"
	.string "If he vouches for you, you'll know what\n"
	.string "to bring.$"

SiltrootTown_Scott_Boatride_Text_2:
	.string "Nobody saw you right?\p"
	.string "Lets move before the satellite flies\n"
	.string "over.\p"
	.string "The boat ride will be a rough one.$"

SiltrootTown_Arrive_Boatride_Text_0:
	.string "Bravo, Tango here.\p"
	.string "Ready to disembark?\p"
	.string "...\p"
	.string "Copy that.\p"
	.string "Let's move!$"

SiltrootTown_Arrive_Boatride_Text_1:
	.string "Scott$"

SiltrootTown_Arrive_Boatride_Text_2:
	.string "Touchdown. We are in the blind spot.\p"
	.string "My scanners show a gap in the harbor\n"
	.string "security grid for exactly forty-five\l"
	.string "seconds.\p"
	.string "Listen fast because I am burning fuel\n"
	.string "right now.\p"
	.string "I am not going further into the city.\p"
	.string "Too many facial recognition towers.\p"
	.string "You have to take the package to the\n"
	.string "client yourself.\p"
	.string "He is a DJ.\p"
	.string "PETER.\p"
	.string "If you hear loud, old-school disco\n"
	.string "music, that is the drop-off point.\p"
	.string "Now get moving!\p"
	.string "Walk forward and don't look back.\p"
	.string "If anyone asks, we never met.\p"
	.string "I was never here.\p"
	.string "Tango going dark.$"

Siltroottown_Youth_Outide_Ali_Shop_1_Text_0:
	.string "Yo Charmander, give your tail here, I\n"
	.string "need to light my joint as we...$"

Siltroottown_Youth_Outide_Ali_Shop_1_Text_1:
	.string "!!\p"
	.string "...as well as my incense!\p"
	.string "Yes, purely medicinal incense.\p"
	.string "For my... glaucoma.\p"
	.string "Please don't tell Officer Jenny.$"

Siltroottown_Youth_Outide_Ali_Shop_2_Text_0:
	.string "Dude, be cool!\p"
	.string "Stop looking at me!\p"
	.string "If you stare, they'll know we aren't\n"
	.string "actually training.\p"
	.string "Just act natural.\p"
	.string "...Is 'acting natural' standing\n"
	.string "perfectly still or waving my arms? I\l"
	.string "forgot.$"

Siltroottown_Youth_Outide_Ali_Shop_3_Text_0:
	.string "ALI really knows his botany...\p"
	.string "I feel like a Hoppip floating on a\n"
	.string "breeze.\p"
	.string "Hey, do you have any snacks?\p"
	.string "I would kill for a Lava Cookie right now.$"

Siltroottown_Stoned_Dude_Outside_Text_0:
	.string "I came outside for some fresh air, but\n"
	.string "the air feels... really loud right now.\p"
	.string "I think I'm just going to stare at the\n"
	.string "sand for a while.$"

Siltroottown_Old_Lady_Text_0:
	.string "All this beautiful nature, and the youth\n"
	.string "only care about those dreadful herbs.\p"
	.string "They should be burying their noses in\n"
	.string "books, not clouds of smoke.$"

Siltroottown_Fat_Man_Text_0:
	.string "Everyone claims the hunger comes from\n"
	.string "the special grass, but that is total\l"
	.string "nonsense.\p"
	.string "I am just big-boned and naturally\n"
	.string "require three pizzas every hour to\l"
	.string "survive.$"

Siltroottown_Children_Boy_Text_0:
	.string "Hey, cut it out! Janine!\p"
	.string "I am trying to look for a Magikarp down\n"
	.string "here and you are scaring them away!\p"
	.string "Why is your face all red? The water isn't\n"
	.string "even hot!$"

Siltroottown_Children_Girl_Text_0:
	.string "Take that! Adrian!\p"
	.string "I bet you can't catch me, even with\n"
	.string "those floaties on!\p"
	.string "...But if you did catch me, I wouldn't be\n"
	.string "mad or anything.$"

Siltroottown_Sailor_Biodiversity_Text_0:
	.string "Back in the day, you couldn't cast a line\n"
	.string "into these mangroves without hooking\l"
	.string "something rare.\p"
	.string "Siltroot was legendary, the water was\n"
	.string "practically bubbling with life.\p"
	.string "But for the last twenty years? It has\n"
	.string "been dead silent.\p"
	.string "Now you sit here for hours and catch\n"
	.string "nothing but old boots and seaweed.\p"
	.string "It breaks my heart to see the mudflats\n"
	.string "this empty.$"

Siltroottown_Fisher_Sad_Text_0:
	.string "They say the fish are gone because of\n"
	.string "'overfishing,' but that is total rubbish.\p"
	.string "It is the bureaucrats and their endless\n"
	.string "regulations that killed this town!\p"
	.string "That is why I sneak into the protected\n"
	.string "marine reserve to cast my line now.\p"
	.string "You have to break the law just to find a\n"
	.string "decent catch these days!$"

Siltroottown_Guard_shed_Text_0:
	.string "Whoa, hold your Ponyta.\p"
	.string "This is a restricted agricultural\n"
	.string "facility.\p"
	.string "Strictly authorized personnel only.$"

Siltroottown_Guard_shed_Text_1:
	.string "...\p"
	.string "Oh? ALI sent you?\p"
	.string "For the 'Project Star-Shot' shipment?\p"
	.string "Alright, you're clear.$"

Siltroottown_Guard_shed_Text_2:
	.string "But listen carefully.\p"
	.string "The production team is inside right now.\p"
	.string "It's a bunch of Slowbros.\p"
	.string "They are in a deep, meditative trance\n"
	.string "while they work.\p"
	.string "If they see you, it breaks their flow,\n"
	.string "and they will use their psychic powers\l"
	.string "to toss you right back out the front\l"
	.string "door.\p"
	.string "The bag is in the back.\p"
	.string "Move like a ghost, kid.$"

Siltroottown_Guard_shed_Text_3:
	.string "Remember, don't let the Slowbro's see\n"
	.string "you.\p"
	.string "The bag is in the back.\p"
	.string "Move like a ghost, kid.$"
