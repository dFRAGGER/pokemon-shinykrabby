CrabhillEntrance_MapScripts::
	.byte 0


Crabhill_Jacob_in_need::
# 4 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Crabhill_Jacob_in_need_Movement_0
# 5 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Jacob_in_need_Text_0
# 6 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Jacob_in_need_Text_1, MSGBOX_AUTOCLOSE
# 7 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
	return


Crabhill_Faculty_Grunt_Signal::
# 11 "data/maps/CrabhillEntrance/scripts.pory"
	lock
# 12 "data/maps/CrabhillEntrance/scripts.pory"
	hidefollower
# 13 "data/maps/CrabhillEntrance/scripts.pory"
	faceplayer
# 14 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Faculty_Grunt_Signal_Text_0
# 15 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Faculty_Grunt_Signal_Text_1, MSGBOX_AUTOCLOSE
# 16 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 17 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Crabhill_Faculty_Grunt_Signal_Movement_0
# 18 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 19 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Faculty_Grunt_Signal_Text_0
# 20 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Faculty_Grunt_Signal_Text_2, MSGBOX_AUTOCLOSE
# 21 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 22 "data/maps/CrabhillEntrance/scripts.pory"
	playse SE_PIN
# 23 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 34, Crabhill_Faculty_Grunt_Signal_Movement_1
# 24 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 25 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Faculty_Grunt_Signal_Text_0
# 26 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Faculty_Grunt_Signal_Text_3, MSGBOX_AUTOCLOSE
# 27 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 28 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 34, Crabhill_Faculty_Grunt_Signal_Movement_2
# 29 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 30 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Faculty_Grunt_Signal_Text_0
# 31 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Faculty_Grunt_Signal_Text_4, MSGBOX_AUTOCLOSE
# 32 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 33 "data/maps/CrabhillEntrance/scripts.pory"
	playse SE_M_EXPLOSION
# 34 "data/maps/CrabhillEntrance/scripts.pory"
	fadescreen FADE_TO_WHITE
# 35 "data/maps/CrabhillEntrance/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 36 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 34, Crabhill_Faculty_Grunt_Signal_Movement_0
# 37 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 38 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Faculty_Grunt_Signal_Text_0
# 39 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Faculty_Grunt_Signal_Text_5, MSGBOX_AUTOCLOSE
# 40 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 41 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 34, Crabhill_Faculty_Grunt_Signal_Movement_3
# 42 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 43 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Faculty_Grunt_Signal_Text_0
# 44 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Faculty_Grunt_Signal_Text_6, MSGBOX_AUTOCLOSE
# 45 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 46 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Crabhill_Faculty_Grunt_Signal_Movement_4
# 47 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 34, Crabhill_Faculty_Grunt_Signal_Movement_5
# 48 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 49 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 34
# 50 "data/maps/CrabhillEntrance/scripts.pory"
	call Won_or_Caught
# 51 "data/maps/CrabhillEntrance/scripts.pory"
	setvar VAR_MEESTRECH_TOWN_STATE, 1
# 52 "data/maps/CrabhillEntrance/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 53 "data/maps/CrabhillEntrance/scripts.pory"
	release
	end


Crabhill_Eventscript_ShinykrabbyEncounter::
# 58 "data/maps/CrabhillEntrance/scripts.pory"
	lock
# 59 "data/maps/CrabhillEntrance/scripts.pory"
	playmoncry SPECIES_KRABBY, CRY_MODE_ENCOUNTER
# 60 "data/maps/CrabhillEntrance/scripts.pory"
	delay 40
# 61 "data/maps/CrabhillEntrance/scripts.pory"
	waitmoncry
# 62 "data/maps/CrabhillEntrance/scripts.pory"
	setflag FLAG_NOCATCH_ENCOUNTER
# 63 "data/maps/CrabhillEntrance/scripts.pory"
	createmon 1, 0, SPECIES_KRABBY, 10, , , , , , , , , , , , , , , , , , , , , , SHINY_MODE_ALWAYS, , 
# 64 "data/maps/CrabhillEntrance/scripts.pory"
	dowildbattle
# 65 "data/maps/CrabhillEntrance/scripts.pory"
	clearflag FLAG_NOCATCH_ENCOUNTER
# 66 "data/maps/CrabhillEntrance/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 67 "data/maps/CrabhillEntrance/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Crabhill_Eventscript_ShinykrabbyEncounter_2
# 71 "data/maps/CrabhillEntrance/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Crabhill_Eventscript_ShinykrabbyEncounter_3
Crabhill_Eventscript_ShinykrabbyEncounter_1:
# 75 "data/maps/CrabhillEntrance/scripts.pory"
	setvar VAR_MEESTRECH_TOWN_STATE, 1
# 76 "data/maps/CrabhillEntrance/scripts.pory"
	release
	return

Crabhill_Eventscript_ShinykrabbyEncounter_2:
# 69 "data/maps/CrabhillEntrance/scripts.pory"
	call Won_or_Caught
	goto Crabhill_Eventscript_ShinykrabbyEncounter_1

Crabhill_Eventscript_ShinykrabbyEncounter_3:
# 72 "data/maps/CrabhillEntrance/scripts.pory"
	clearflag FLAG_NOCATCH_ENCOUNTER
	goto Crabhill_Eventscript_ShinykrabbyEncounter_1


Won_or_Caught::
# 81 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Won_or_Caught_Text_0, MSGBOX_AUTOCLOSE
# 83 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 85 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 31, Won_or_Caught_Movement_0
# 86 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 30, Won_or_Caught_Movement_1
# 87 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 29, Won_or_Caught_Movement_1
# 88 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 32, Won_or_Caught_Movement_2
# 89 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 28, Won_or_Caught_Movement_2
# 90 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 25, Won_or_Caught_Movement_3
# 91 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 27, Crabhill_Faculty_Grunt_Signal_Movement_5
# 92 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 26, Crabhill_Faculty_Grunt_Signal_Movement_5
# 93 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 2, Won_or_Caught_Movement_4
# 94 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 23, Won_or_Caught_Movement_4
# 95 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 22, Crabhill_Faculty_Grunt_Signal_Movement_5
# 96 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 24, Crabhill_Faculty_Grunt_Signal_Movement_5
# 97 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 33, Crabhill_Faculty_Grunt_Signal_Movement_5
# 98 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 1, Won_or_Caught_Movement_5
# 99 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 100 "data/maps/CrabhillEntrance/scripts.pory"
	delay 60
# 101 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 31
# 102 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 33
# 103 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 30
# 104 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 29
# 105 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 32
# 106 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 28
# 107 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 25
# 108 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 27
# 109 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 26
# 110 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 2
# 111 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 23
# 112 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 22
# 113 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 24
# 114 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 1
# 115 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Won_or_Caught_Text_1
# 116 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Won_or_Caught_Text_2, MSGBOX_AUTOCLOSE
# 117 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 21, Won_or_Caught_Movement_6
# 118 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 119 "data/maps/CrabhillEntrance/scripts.pory"
	setobjectmovementtype LOCALID_JACOB, MOVEMENT_TYPE_NONE
# 120 "data/maps/CrabhillEntrance/scripts.pory"
	getobjectxy LOCALID_JACOB, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
# 121 "data/maps/CrabhillEntrance/scripts.pory"
	delay 120
# 122 "data/maps/CrabhillEntrance/scripts.pory"
	compare VAR_TEMP_0, 32
	goto_if_eq Won_or_Caught_4
Won_or_Caught_3:
# 127 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 21, Won_or_Caught_Movement_8
# 128 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
Won_or_Caught_1:
# 130 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Jacob_in_need_Text_0
# 131 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Won_or_Caught_Text_3
# 132 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Won_or_Caught_Text_1
# 133 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Won_or_Caught_Text_4, MSGBOX_AUTOCLOSE
# 134 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 21, Crabhill_Faculty_Grunt_Signal_Movement_5
# 135 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 136 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 21
# 137 "data/maps/CrabhillEntrance/scripts.pory"
	setflag FLAG_SHINY_KRABBY_ENCOUNTER
# 138 "data/maps/CrabhillEntrance/scripts.pory"
	clearflag FLAG_HIDE_JACOB_SIENNA
	return

Won_or_Caught_2:
# 123 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 21, Won_or_Caught_Movement_7
# 124 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
	goto Won_or_Caught_1

Won_or_Caught_4:
# 122 "data/maps/CrabhillEntrance/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq Won_or_Caught_2
	goto Won_or_Caught_3


Krabby_won::
# 143 "data/maps/CrabhillEntrance/scripts.pory"
	playmoncry SPECIES_KRABBY, CRY_MODE_ENCOUNTER
# 144 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Krabby_won_Text_0, MSGBOX_AUTOCLOSE
# 145 "data/maps/CrabhillEntrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 146 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 1
# 147 "data/maps/CrabhillEntrance/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 148 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Krabby_won_Text_1
	return


Crabhill_Krabby_Cry::
# 153 "data/maps/CrabhillEntrance/scripts.pory"
	playmoncry SPECIES_KRABBY, CRY_MODE_NORMAL
	return


Crabhill_Wall_Carving::
# 157 "data/maps/CrabhillEntrance/scripts.pory"
	lock
# 158 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Wall_Carving_Text_0
# 159 "data/maps/CrabhillEntrance/scripts.pory"
	release
	return


Crabhill_Hiker_Hint::
# 163 "data/maps/CrabhillEntrance/scripts.pory"
	lock
# 164 "data/maps/CrabhillEntrance/scripts.pory"
	faceplayer
# 165 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Hiker_Hint_Text_0
# 166 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 167 "data/maps/CrabhillEntrance/scripts.pory"
	release
	return


Crabhill_Faculty_Lost_grunt::
# 171 "data/maps/CrabhillEntrance/scripts.pory"
	lock
# 172 "data/maps/CrabhillEntrance/scripts.pory"
	faceplayer
# 173 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Faculty_Lost_grunt_Text_0
# 174 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Faculty_Lost_grunt_Text_1
# 175 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 176 "data/maps/CrabhillEntrance/scripts.pory"
	release
	return


CrabhillEntrance_EventScript_Lyle::
# 182 "data/maps/CrabhillEntrance/scripts.pory"
	trainerbattle_single TRAINER_LYLE, CrabhillEntrance_Text_LyleIntro, CrabhillEntrance_Text_LyleDefeated
# 183 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox CrabhillEntrance_Text_LylePostBattle, MSGBOX_AUTOCLOSE
	end


# 4 "data/maps/CrabhillEntrance/scripts.pory"
Crabhill_Jacob_in_need_Movement_0:
# 4 "data/maps/CrabhillEntrance/scripts.pory"
	walk_up
# 4 "data/maps/CrabhillEntrance/scripts.pory"
	walk_up
# 4 "data/maps/CrabhillEntrance/scripts.pory"
	walk_up
# 4 "data/maps/CrabhillEntrance/scripts.pory"
	walk_up
# 4 "data/maps/CrabhillEntrance/scripts.pory"
	face_left
	step_end

# 17 "data/maps/CrabhillEntrance/scripts.pory"
Crabhill_Faculty_Grunt_Signal_Movement_0:
# 17 "data/maps/CrabhillEntrance/scripts.pory"
	jump_down
# 17 "data/maps/CrabhillEntrance/scripts.pory"
	face_up
	step_end

# 23 "data/maps/CrabhillEntrance/scripts.pory"
Crabhill_Faculty_Grunt_Signal_Movement_1:
# 23 "data/maps/CrabhillEntrance/scripts.pory"
	face_up
# 23 "data/maps/CrabhillEntrance/scripts.pory"
	emote_exclamation_mark
	step_end

# 28 "data/maps/CrabhillEntrance/scripts.pory"
Crabhill_Faculty_Grunt_Signal_Movement_2:
# 28 "data/maps/CrabhillEntrance/scripts.pory"
	walk_up
	step_end

# 41 "data/maps/CrabhillEntrance/scripts.pory"
Crabhill_Faculty_Grunt_Signal_Movement_3:
# 41 "data/maps/CrabhillEntrance/scripts.pory"
	face_down
	step_end

# 46 "data/maps/CrabhillEntrance/scripts.pory"
Crabhill_Faculty_Grunt_Signal_Movement_4:
# 46 "data/maps/CrabhillEntrance/scripts.pory"
	jump_left
# 46 "data/maps/CrabhillEntrance/scripts.pory"
	face_down
	step_end

# 47 "data/maps/CrabhillEntrance/scripts.pory"
Crabhill_Faculty_Grunt_Signal_Movement_5:
# 47 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 47 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 47 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 47 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 47 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 47 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 47 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
	step_end

# 85 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_0:
# 85 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 85 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 85 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 85 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 85 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
	step_end

# 86 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_1:
# 86 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
# 86 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
# 86 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
# 86 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
	step_end

# 88 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_2:
# 88 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 88 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 88 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 88 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 88 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 88 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 88 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
	step_end

# 90 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_3:
# 90 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
# 90 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
# 90 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 90 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 90 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 90 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 90 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 90 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 90 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
	step_end

# 93 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_4:
# 93 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
# 93 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
# 93 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 93 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 93 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 93 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 93 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 93 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 93 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
	step_end

# 98 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_5:
# 98 "data/maps/CrabhillEntrance/scripts.pory"
	walk_down
# 98 "data/maps/CrabhillEntrance/scripts.pory"
	walk_right
# 98 "data/maps/CrabhillEntrance/scripts.pory"
	jump_2_right
# 98 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 98 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 98 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 98 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 98 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
	step_end

# 117 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_6:
# 117 "data/maps/CrabhillEntrance/scripts.pory"
	walk_slow_left
# 117 "data/maps/CrabhillEntrance/scripts.pory"
	walk_slow_right
# 117 "data/maps/CrabhillEntrance/scripts.pory"
	walk_slow_left
# 117 "data/maps/CrabhillEntrance/scripts.pory"
	walk_slow_right
	step_end

# 123 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_7:
# 123 "data/maps/CrabhillEntrance/scripts.pory"
	walk_right
# 123 "data/maps/CrabhillEntrance/scripts.pory"
	walk_right
# 123 "data/maps/CrabhillEntrance/scripts.pory"
	walk_right
# 123 "data/maps/CrabhillEntrance/scripts.pory"
	face_up
	step_end

# 127 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_8:
# 127 "data/maps/CrabhillEntrance/scripts.pory"
	walk_right
# 127 "data/maps/CrabhillEntrance/scripts.pory"
	walk_right
# 127 "data/maps/CrabhillEntrance/scripts.pory"
	face_up
	step_end

Crabhill_Jacob_in_need_Text_0:
# 5 "data/maps/CrabhillEntrance/scripts.pory"
	.string "?????$"

Crabhill_Jacob_in_need_Text_1:
# 6 "data/maps/CrabhillEntrance/scripts.pory"
	.string "HEY!\n"
	.string "HELP ME!\p"
	.string "I'M SO TIRED!\p"
	.string "STOP THAT MAN OVER THERE!\p"
	.string "HE IS BROADCASTING SOMETHING...\p"
	.string "I CAN'T MOVE...\n"
	.string "NO, I MUST MOVE!!$"

Crabhill_Faculty_Grunt_Signal_Text_0:
# 14 "data/maps/CrabhillEntrance/scripts.pory"
	.string "AD$"

Crabhill_Faculty_Grunt_Signal_Text_1:
# 15 "data/maps/CrabhillEntrance/scripts.pory"
	.string "HEY, YOU AGAIN?!\n"
	.string "Step back boy!$"

Crabhill_Faculty_Grunt_Signal_Text_2:
# 20 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Signal output nominal. All organic\n"
	.string "assets are oscillating in perfect\l"
	.string "synchronization.\p"
	.string "Look at this beautiful efficiency! This\n"
	.string "is the future of workforce\l"
	.string "optimization!$"

Crabhill_Faculty_Grunt_Signal_Text_3:
# 26 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Wait. Anomaly detected.\p"
	.string "You there, the gold variant. Your neural\n"
	.string "pathways are rejecting the command.\p"
	.string "Compliance is not optional. Receive the\n"
	.string "input!$"

Crabhill_Faculty_Grunt_Signal_Text_4:
# 31 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Why aren't you moving?!\p"
	.string "Increasing signal intensity to maximum\n"
	.string "voltage! Obey!$"

Crabhill_Faculty_Grunt_Signal_Text_5:
# 39 "data/maps/CrabhillEntrance/scripts.pory"
	.string "It... it deflected the carrier wave?!\p"
	.string "The feedback loop just fried the\n"
	.string "transmitter circuits!\p"
	.string "That carapace is acting like a mirror!$"

Crabhill_Faculty_Grunt_Signal_Text_6:
# 44 "data/maps/CrabhillEntrance/scripts.pory"
	.string "This data is completely anomalous!\p"
	.string "I am not paid enough for radioactive\n"
	.string "crustaceans!\p"
	.string "Tactical retreat! Abort mission!\p"
	.string "The boss is not going to be happy...$"

Won_or_Caught_Text_0:
# 81 "data/maps/CrabhillEntrance/scripts.pory"
	.string "The Krabby's seem to have snapped out\n"
	.string "of it!\p"
	.string "Whatever was controlling them... it\n"
	.string "stopped working.$"

Won_or_Caught_Text_1:
# 115 "data/maps/CrabhillEntrance/scripts.pory"
	.string "JACOB$"

Won_or_Caught_Text_2:
# 116 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Left... Right... Left... WHOA!$"

Won_or_Caught_Text_3:
# 131 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Kid! You broke the trance!\p"
	.string "Thank Arceus... another five minutes of\n"
	.string "that and my legs would have fallen right\l"
	.string "off!\p"
	.string "Nice to meet you, my name is JACOB$"

Won_or_Caught_Text_4:
# 133 "data/maps/CrabhillEntrance/scripts.pory"
	.string "But did you see it?!\p"
	.string "A Krabby!\p"
	.string "The single most magnificent creature\n"
	.string "to sidle on this earth!\p"
	.string "People talk about Dragonites or\n"
	.string "Tyranitars... pshh!\p"
	.string "Look at that carapace!\p"
	.string "Look at that perfect pincer geometry!\p"
	.string "It is the peak of evolution!\p"
	.string "The best Pokémon in the whole wide\n"
	.string "world, bar none!\p"
	.string "And this one...\n"
	.string "a golden King...\n"
	.string "and it got away...\p"
	.string "Truly, a dark day for science.\p"
	.string "Wait...\p"
	.string "How long was I doing the side-step\n"
	.string "shuffle?\p"
	.string "Oh no.\n"
	.string "Oh no no no.\p"
	.string "I left without telling my wife!\p"
	.string "She's probably barricaded the door by\n"
	.string "now!\p"
	.string "If I don't get back before dark, she's\n"
	.string "going to be scarier than a Gyarados!\p"
	.string "I gotta run!\p"
	.string "You are welcome to join for dinner!$"

Krabby_won_Text_0:
# 144 "data/maps/CrabhillEntrance/scripts.pory"
	.string "KRABBY, KRAB-BY!$"

Krabby_won_Text_1:
# 148 "data/maps/CrabhillEntrance/scripts.pory"
	.string "The shiny Krabby fled through a crack\n"
	.string "in the wall, the other krabby's seem\l"
	.string "still confused.$"

Crabhill_Wall_Carving_Text_0:
# 158 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Carved into the damp cave wall,\n"
	.string "glistening with moisture:\p"
	.string "When stone weeps and the tide is low, a\n"
	.string "claw of gold shall start to glow. Its\l"
	.string "light awaits the destined hand, who will\l"
	.string "soon command the land.$"

Crabhill_Hiker_Hint_Text_0:
# 165 "data/maps/CrabhillEntrance/scripts.pory"
	.string "I have been in this cave for hours.\p"
	.string "The more time I spend in here the more I\n"
	.string "realize going backwards might be going\l"
	.string "forward, and the other way around.\p"
	.string "If you know what I mean.$"

Crabhill_Faculty_Lost_grunt_Text_0:
# 173 "data/maps/CrabhillEntrance/scripts.pory"
	.string "ADDY$"

Crabhill_Faculty_Lost_grunt_Text_1:
# 174 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Pfffff... Every room looks exactly the\n"
	.string "same...\p"
	.string "I lost my colleague a while ago in here...\p"
	.string "Have you seen him?\p"
	.string "Wait... Your face...\p"
	.string "Do we know each other?$"

CrabhillEntrance_Text_LyleIntro::
# 187 "data/maps/CrabhillEntrance/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
	.string "Go, go, go!\n"
	.string "My CRUSTACEAN POKéMON team!$"

CrabhillEntrance_Text_LyleDefeated::
# 191 "data/maps/CrabhillEntrance/scripts.pory"
	.string "I have all these POKéMON,\n"
	.string "but I couldn't win…$"

CrabhillEntrance_Text_LylePostBattle::
# 195 "data/maps/CrabhillEntrance/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
	.string "Now I'm out of POKé BALLS.$"
