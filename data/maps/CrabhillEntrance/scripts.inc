CrabhillEntrance_MapScripts::
	.byte 0


Crabhill_Eventscript_ShinykrabbyEncounter::
# 4 "data/maps/CrabhillEntrance/scripts.pory"
	lockall
# 5 "data/maps/CrabhillEntrance/scripts.pory"
	playmoncry SPECIES_KRABBY, CRY_MODE_ENCOUNTER
# 6 "data/maps/CrabhillEntrance/scripts.pory"
	delay 40
# 7 "data/maps/CrabhillEntrance/scripts.pory"
	waitmoncry
# 8 "data/maps/CrabhillEntrance/scripts.pory"
	createmon 1, 0, SPECIES_KRABBY, 10, , , , , , , , , , , , , , , , , , , , , , 1
# 9 "data/maps/CrabhillEntrance/scripts.pory"
	dowildbattle
# 10 "data/maps/CrabhillEntrance/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 11 "data/maps/CrabhillEntrance/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Crabhill_Eventscript_ShinykrabbyEncounter_2
# 14 "data/maps/CrabhillEntrance/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Crabhill_Eventscript_ShinykrabbyEncounter_3
# 17 "data/maps/CrabhillEntrance/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Crabhill_Eventscript_ShinykrabbyEncounter_4
# 20 "data/maps/CrabhillEntrance/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Crabhill_Eventscript_ShinykrabbyEncounter_5
Crabhill_Eventscript_ShinykrabbyEncounter_1:
# 23 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 24 "data/maps/CrabhillEntrance/scripts.pory"
	releaseall
	return

Crabhill_Eventscript_ShinykrabbyEncounter_2:
# 12 "data/maps/CrabhillEntrance/scripts.pory"
	call Won_or_Caught
	goto Crabhill_Eventscript_ShinykrabbyEncounter_1

Crabhill_Eventscript_ShinykrabbyEncounter_3:
# 15 "data/maps/CrabhillEntrance/scripts.pory"
	call Won_or_Caught
	goto Crabhill_Eventscript_ShinykrabbyEncounter_1

Crabhill_Eventscript_ShinykrabbyEncounter_4:
# 18 "data/maps/CrabhillEntrance/scripts.pory"
	call RanAway
	goto Crabhill_Eventscript_ShinykrabbyEncounter_1

Crabhill_Eventscript_ShinykrabbyEncounter_5:
# 21 "data/maps/CrabhillEntrance/scripts.pory"
	call RanAway
	goto Crabhill_Eventscript_ShinykrabbyEncounter_1


Won_or_Caught::
# 28 "data/maps/CrabhillEntrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 29 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 1
# 30 "data/maps/CrabhillEntrance/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 31 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Won_or_Caught_Text_0
# 32 "data/maps/CrabhillEntrance/scripts.pory"
	setflag FLAG_SHINY_KRABBY_ENCOUNTER
	return


RanAway::
# 37 "data/maps/CrabhillEntrance/scripts.pory"
	playmoncry SPECIES_KRABBY, CRY_MODE_ENCOUNTER
# 38 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox RanAway_Text_0, MSGBOX_AUTOCLOSE
# 39 "data/maps/CrabhillEntrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 40 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 1
# 41 "data/maps/CrabhillEntrance/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 42 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox RanAway_Text_1
	return


Crabhill_Krabby_Cry::
# 47 "data/maps/CrabhillEntrance/scripts.pory"
	playmoncry SPECIES_KRABBY, CRY_MODE_NORMAL
	return


Crabhill_Wall_Carving::
# 51 "data/maps/CrabhillEntrance/scripts.pory"
	lock
# 52 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Wall_Carving_Text_0
# 53 "data/maps/CrabhillEntrance/scripts.pory"
	release
	return


Crabhill_Hiker_Hint::
# 57 "data/maps/CrabhillEntrance/scripts.pory"
	lock
# 58 "data/maps/CrabhillEntrance/scripts.pory"
	faceplayer
# 59 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Hiker_Hint_Text_0
# 60 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 61 "data/maps/CrabhillEntrance/scripts.pory"
	release
	return


Won_or_Caught_Text_0:
# 31 "data/maps/CrabhillEntrance/scripts.pory"
	.string "The Krabby's seem to have snapped out\n"
	.string "of their confusion.$"

RanAway_Text_0:
# 38 "data/maps/CrabhillEntrance/scripts.pory"
	.string "KRGHJEJRJAERAHG$"

RanAway_Text_1:
# 42 "data/maps/CrabhillEntrance/scripts.pory"
	.string "The shiny Krabby fled through a crack\n"
	.string "in the wall, the other krabby's seem\l"
	.string "still confused.$"

Crabhill_Wall_Carving_Text_0:
# 52 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Carved into the damp cave wall,\n"
	.string "glistening with moisture:\p"
	.string "When stone weeps and the tide is low, a\n"
	.string "claw of gold shall start to glow. Its\l"
	.string "light awaits the destined hand, who will\l"
	.string "soon command the land.$"

Crabhill_Hiker_Hint_Text_0:
# 59 "data/maps/CrabhillEntrance/scripts.pory"
	.string "{COLOR RED}Hiker: {COLOR DARK_GRAY}I have been in this cave for\n"
	.string "hours.\p"
	.string "The more time I spend in here the more I\n"
	.string "realize going backwards might be going\l"
	.string "forward, and the other way around.\p"
	.string "If you know what I mean.$"
