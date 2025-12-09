CrabhillEntrance_MapScripts::
	.byte 0


Crabhill_Jacob_in_need::
# 4 "data/maps/CrabhillEntrance/scripts.pory"
	setvar VAR_MEESTRECH_TOWN_STATE, 1
# 5 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Crabhill_Jacob_in_need_Movement_0
# 6 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Jacob_in_need_Text_0
# 7 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Jacob_in_need_Text_1, MSGBOX_AUTOCLOSE
# 8 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
	return


Crabhill_Eventscript_ShinykrabbyEncounter::
# 12 "data/maps/CrabhillEntrance/scripts.pory"
	lock
# 13 "data/maps/CrabhillEntrance/scripts.pory"
	playmoncry SPECIES_KRABBY, CRY_MODE_ENCOUNTER
# 14 "data/maps/CrabhillEntrance/scripts.pory"
	delay 40
# 15 "data/maps/CrabhillEntrance/scripts.pory"
	waitmoncry
# 16 "data/maps/CrabhillEntrance/scripts.pory"
	createmon 1, 0, SPECIES_KRABBY, 10, , , , , , , , , , , , , , , , , , , , , , TRUE, , 
# 17 "data/maps/CrabhillEntrance/scripts.pory"
	setflag B_FLAG_NO_RUNNING
# 18 "data/maps/CrabhillEntrance/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 19 "data/maps/CrabhillEntrance/scripts.pory"
	dowildbattle
# 20 "data/maps/CrabhillEntrance/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 21 "data/maps/CrabhillEntrance/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Crabhill_Eventscript_ShinykrabbyEncounter_2
# 24 "data/maps/CrabhillEntrance/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Crabhill_Eventscript_ShinykrabbyEncounter_3
Crabhill_Eventscript_ShinykrabbyEncounter_1:
# 27 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 28 "data/maps/CrabhillEntrance/scripts.pory"
	clearflag B_FLAG_NO_RUNNING
# 29 "data/maps/CrabhillEntrance/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 30 "data/maps/CrabhillEntrance/scripts.pory"
	release
	return

Crabhill_Eventscript_ShinykrabbyEncounter_2:
# 22 "data/maps/CrabhillEntrance/scripts.pory"
	call Won_or_Caught
	goto Crabhill_Eventscript_ShinykrabbyEncounter_1

Crabhill_Eventscript_ShinykrabbyEncounter_3:
# 25 "data/maps/CrabhillEntrance/scripts.pory"
	call Krabby_won
	goto Crabhill_Eventscript_ShinykrabbyEncounter_1


Won_or_Caught::
# 34 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Won_or_Caught_Movement_0
# 35 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 36 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 1, Won_or_Caught_Movement_1
# 37 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 38 "data/maps/CrabhillEntrance/scripts.pory"
	delay 60
# 39 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Won_or_Caught_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 41 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 31, Won_or_Caught_Movement_2
# 42 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 30, Won_or_Caught_Movement_3
# 43 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 29, Won_or_Caught_Movement_3
# 44 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 32, Won_or_Caught_Movement_4
# 45 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 28, Won_or_Caught_Movement_4
# 46 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 25, Won_or_Caught_Movement_5
# 47 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 27, Won_or_Caught_Movement_6
# 48 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 26, Won_or_Caught_Movement_6
# 49 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 2, Won_or_Caught_Movement_7
# 50 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 23, Won_or_Caught_Movement_7
# 51 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 22, Won_or_Caught_Movement_8
# 52 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 24, Won_or_Caught_Movement_8
# 53 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 54 "data/maps/CrabhillEntrance/scripts.pory"
	setflag FLAG_SHINY_KRABBY_ENCOUNTER
# 55 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 31
# 56 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 30
# 57 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 29
# 58 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 32
# 59 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 28
# 60 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 25
# 61 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 27
# 62 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 26
# 63 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 2
# 64 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 23
# 65 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 22
# 66 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 24
# 67 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 1
# 68 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Jacob_in_need_Text_0
# 69 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Won_or_Caught_Text_1, MSGBOX_AUTOCLOSE
# 70 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 21, Won_or_Caught_Movement_9
# 71 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 72 "data/maps/CrabhillEntrance/scripts.pory"
	delay 120
# 73 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 21, Won_or_Caught_Movement_10
# 74 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Jacob_in_need_Text_0
# 75 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Won_or_Caught_Text_2, MSGBOX_AUTOCLOSE
# 76 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 77 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Won_or_Caught_Movement_11
# 78 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 79 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Jacob_in_need_Text_0
# 80 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Won_or_Caught_Text_3, MSGBOX_AUTOCLOSE
# 81 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
	return


Krabby_won::
# 86 "data/maps/CrabhillEntrance/scripts.pory"
	playmoncry SPECIES_KRABBY, CRY_MODE_ENCOUNTER
# 87 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Krabby_won_Text_0, MSGBOX_AUTOCLOSE
# 88 "data/maps/CrabhillEntrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 89 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 1
# 90 "data/maps/CrabhillEntrance/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 91 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Krabby_won_Text_1
	return


Crabhill_Krabby_Cry::
# 96 "data/maps/CrabhillEntrance/scripts.pory"
	playmoncry SPECIES_KRABBY, CRY_MODE_NORMAL
	return


Crabhill_Wall_Carving::
# 100 "data/maps/CrabhillEntrance/scripts.pory"
	lock
# 101 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Wall_Carving_Text_0
# 102 "data/maps/CrabhillEntrance/scripts.pory"
	release
	return


Crabhill_Hiker_Hint::
# 106 "data/maps/CrabhillEntrance/scripts.pory"
	lock
# 107 "data/maps/CrabhillEntrance/scripts.pory"
	faceplayer
# 108 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Hiker_Hint_Text_0
# 109 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 110 "data/maps/CrabhillEntrance/scripts.pory"
	release
	return


# 5 "data/maps/CrabhillEntrance/scripts.pory"
Crabhill_Jacob_in_need_Movement_0:
# 5 "data/maps/CrabhillEntrance/scripts.pory"
	walk_up
# 5 "data/maps/CrabhillEntrance/scripts.pory"
	walk_up
# 5 "data/maps/CrabhillEntrance/scripts.pory"
	walk_up
# 5 "data/maps/CrabhillEntrance/scripts.pory"
	walk_up
# 5 "data/maps/CrabhillEntrance/scripts.pory"
	face_left
	step_end

# 34 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_0:
# 34 "data/maps/CrabhillEntrance/scripts.pory"
	jump_left
# 34 "data/maps/CrabhillEntrance/scripts.pory"
	face_down
	step_end

# 36 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_1:
# 36 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 36 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 36 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 36 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 36 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 36 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 36 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
	step_end

# 41 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_2:
# 41 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 41 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 41 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 41 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
	step_end

# 42 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_3:
# 42 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
# 42 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
# 42 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
# 42 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
	step_end

# 44 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_4:
# 44 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 44 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 44 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 44 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
	step_end

# 46 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_5:
# 46 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 46 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 46 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 46 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 46 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
	step_end

# 47 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_6:
# 47 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 47 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 47 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 47 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
	step_end

# 49 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_7:
# 49 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
# 49 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
# 49 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 49 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 49 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 49 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 49 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 49 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 49 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
	step_end

# 51 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_8:
# 51 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 51 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 51 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 51 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 51 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
	step_end

# 70 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_9:
# 70 "data/maps/CrabhillEntrance/scripts.pory"
	walk_slow_left
# 70 "data/maps/CrabhillEntrance/scripts.pory"
	walk_slow_right
# 70 "data/maps/CrabhillEntrance/scripts.pory"
	walk_slow_left
# 70 "data/maps/CrabhillEntrance/scripts.pory"
	walk_slow_right
	step_end

# 73 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_10:
# 73 "data/maps/CrabhillEntrance/scripts.pory"
	face_up
	step_end

# 77 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_11:
# 77 "data/maps/CrabhillEntrance/scripts.pory"
	walk_right
# 77 "data/maps/CrabhillEntrance/scripts.pory"
	walk_down
# 77 "data/maps/CrabhillEntrance/scripts.pory"
	walk_down
# 77 "data/maps/CrabhillEntrance/scripts.pory"
	walk_down
# 77 "data/maps/CrabhillEntrance/scripts.pory"
	face_left
	step_end

Crabhill_Jacob_in_need_Text_0:
# 6 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Jacob$"

Crabhill_Jacob_in_need_Text_1:
# 7 "data/maps/CrabhillEntrance/scripts.pory"
	.string "HEY! HELP ME! I'M SO TIRED!\n"
	.string "ATTACK THAT GOLDEN KRABBY OVER THERE!\p"
	.string "I CAN'T MOVE...\n"
	.string "NO, I MUST MOVE!!$"

Won_or_Caught_Text_0:
# 39 "data/maps/CrabhillEntrance/scripts.pory"
	.string "The Krabby's seem to have snapped out\n"
	.string "of their confusion.$"

Won_or_Caught_Text_1:
# 69 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Left... Right... Left... WHOA!$"

Won_or_Caught_Text_2:
# 75 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Kid! You broke the trance!\p"
	.string "Thank Arceus... another five minutes of\n"
	.string "that and my legs would have fallen right\l"
	.string "off!$"

Won_or_Caught_Text_3:
# 80 "data/maps/CrabhillEntrance/scripts.pory"
	.string "But did you see it?!\p"
	.string "That was it!\p"
	.string "That was the 'special specimen' I\n"
	.string "wanted to show you!\p"
	.string "A Krabby!\p"
	.string "The single most magnificent creature\n"
	.string "to walk—or sidle—on this earth!\p"
	.string "People talk about Dragonites or\n"
	.string "Tyranitars... pshh!\p"
	.string "Look at that carapace!\p"
	.string "Look at that perfect pincer geometry!\p"
	.string "It is the peak of evolution!\p"
	.string "The best Pokémon in the whole wide\n"
	.string "world, bar none!\p"
	.string "And a Shiny one...\n"
	.string "a golden King...\n"
	.string "and it got away.\p"
	.string "Truly, a dark day for science.\p"
	.string "It would have been the perfect specie\n"
	.string "to start your internship with, Prof.\l"
	.string "Birds would have been soo proud...$"

Krabby_won_Text_0:
# 87 "data/maps/CrabhillEntrance/scripts.pory"
	.string "KRABBY, KRAB-BY!$"

Krabby_won_Text_1:
# 91 "data/maps/CrabhillEntrance/scripts.pory"
	.string "The shiny Krabby fled through a crack\n"
	.string "in the wall, the other krabby's seem\l"
	.string "still confused.$"

Crabhill_Wall_Carving_Text_0:
# 101 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Carved into the damp cave wall,\n"
	.string "glistening with moisture:\p"
	.string "When stone weeps and the tide is low, a\n"
	.string "claw of gold shall start to glow. Its\l"
	.string "light awaits the destined hand, who will\l"
	.string "soon command the land.$"

Crabhill_Hiker_Hint_Text_0:
# 108 "data/maps/CrabhillEntrance/scripts.pory"
	.string "I have been in this cave for hours.\p"
	.string "The more time I spend in here the more I\n"
	.string "realize going backwards might be going\l"
	.string "forward, and the other way around.\p"
	.string "If you know what I mean.$"
