CrabhillEntrance_MapScripts::
	.byte 0


Crabhill_Eventscript_ShinykrabbyEncounter::
# 4 "data/maps/CrabhillEntrance/scripts.pory"
	lockall
# 5 "data/maps/CrabhillEntrance/scripts.pory"
	setflag FLAG_SHINY_KRABBY_ENCOUNTER
# 6 "data/maps/CrabhillEntrance/scripts.pory"
	playmoncry SPECIES_KRABBY, CRY_MODE_ENCOUNTER
# 7 "data/maps/CrabhillEntrance/scripts.pory"
	delay 40
# 8 "data/maps/CrabhillEntrance/scripts.pory"
	waitmoncry
# 9 "data/maps/CrabhillEntrance/scripts.pory"
	createmon 1, 0, SPECIES_KRABBY, 10, , , , , , , , , , , , , , , , , , , , , , 1
# 10 "data/maps/CrabhillEntrance/scripts.pory"
	dowildbattle
# 11 "data/maps/CrabhillEntrance/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 12 "data/maps/CrabhillEntrance/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Crabhill_Eventscript_ShinykrabbyEncounter_2
# 15 "data/maps/CrabhillEntrance/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Crabhill_Eventscript_ShinykrabbyEncounter_3
# 18 "data/maps/CrabhillEntrance/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Crabhill_Eventscript_ShinykrabbyEncounter_4
# 21 "data/maps/CrabhillEntrance/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Crabhill_Eventscript_ShinykrabbyEncounter_5
Crabhill_Eventscript_ShinykrabbyEncounter_1:
# 24 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 25 "data/maps/CrabhillEntrance/scripts.pory"
	releaseall
	return

Crabhill_Eventscript_ShinykrabbyEncounter_2:
# 13 "data/maps/CrabhillEntrance/scripts.pory"
	call Won_or_Caught
	goto Crabhill_Eventscript_ShinykrabbyEncounter_1

Crabhill_Eventscript_ShinykrabbyEncounter_3:
# 16 "data/maps/CrabhillEntrance/scripts.pory"
	call Won_or_Caught
	goto Crabhill_Eventscript_ShinykrabbyEncounter_1

Crabhill_Eventscript_ShinykrabbyEncounter_4:
# 19 "data/maps/CrabhillEntrance/scripts.pory"
	call RanAway
	goto Crabhill_Eventscript_ShinykrabbyEncounter_1

Crabhill_Eventscript_ShinykrabbyEncounter_5:
# 22 "data/maps/CrabhillEntrance/scripts.pory"
	call RanAway
	goto Crabhill_Eventscript_ShinykrabbyEncounter_1


Won_or_Caught::
# 29 "data/maps/CrabhillEntrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 30 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 1
# 31 "data/maps/CrabhillEntrance/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 32 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Won_or_Caught_Text_0
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


Won_or_Caught_Text_0:
# 32 "data/maps/CrabhillEntrance/scripts.pory"
	.string "The Krabby's seem to have snapped out\n"
	.string "of their hypnosis.$"

RanAway_Text_0:
# 38 "data/maps/CrabhillEntrance/scripts.pory"
	.string "KRGHJEJRJAERAHG$"

RanAway_Text_1:
# 42 "data/maps/CrabhillEntrance/scripts.pory"
	.string "The shiny Krabby fled through a crack\n"
	.string "in the wall, the Krabby's seem to have\l"
	.string "snapped out of their hypnosis.$"

Crabhill_Wall_Carving_Text_0:
# 52 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Carved into the damp cave wall,\n"
	.string "glistening with moisture:\n"
	.string "When stone weeps and the tide is low, a\l"
	.string "claw of gold shall start to glow. Its\l"
	.string "light awaits the destined hand, who will\l"
	.string "soon command the land.$"
