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
	faceplayer
# 13 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Faculty_Grunt_Signal_Text_0
# 14 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Faculty_Grunt_Signal_Text_1, MSGBOX_AUTOCLOSE
# 15 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 16 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Crabhill_Faculty_Grunt_Signal_Movement_0
# 17 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 18 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Faculty_Grunt_Signal_Text_0
# 19 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Faculty_Grunt_Signal_Text_2, MSGBOX_AUTOCLOSE
# 20 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 21 "data/maps/CrabhillEntrance/scripts.pory"
	playse SE_PIN
# 22 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 34, Crabhill_Faculty_Grunt_Signal_Movement_1
# 23 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 24 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Faculty_Grunt_Signal_Text_0
# 25 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Faculty_Grunt_Signal_Text_3, MSGBOX_AUTOCLOSE
# 26 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 27 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 34, Crabhill_Faculty_Grunt_Signal_Movement_2
# 28 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 29 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Faculty_Grunt_Signal_Text_0
# 30 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Faculty_Grunt_Signal_Text_4, MSGBOX_AUTOCLOSE
# 31 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 32 "data/maps/CrabhillEntrance/scripts.pory"
	playse SE_M_EXPLOSION
# 33 "data/maps/CrabhillEntrance/scripts.pory"
	fadescreen FADE_TO_WHITE
# 34 "data/maps/CrabhillEntrance/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 35 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 34, Crabhill_Faculty_Grunt_Signal_Movement_0
# 36 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 37 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Faculty_Grunt_Signal_Text_0
# 38 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Faculty_Grunt_Signal_Text_5, MSGBOX_AUTOCLOSE
# 39 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 40 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 34, Crabhill_Faculty_Grunt_Signal_Movement_3
# 41 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 42 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Faculty_Grunt_Signal_Text_0
# 43 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Faculty_Grunt_Signal_Text_6, MSGBOX_AUTOCLOSE
# 44 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 45 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Crabhill_Faculty_Grunt_Signal_Movement_4
# 46 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 34, Crabhill_Faculty_Grunt_Signal_Movement_5
# 47 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 48 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 34
# 49 "data/maps/CrabhillEntrance/scripts.pory"
	call Won_or_Caught
# 50 "data/maps/CrabhillEntrance/scripts.pory"
	setvar VAR_MEESTRECH_TOWN_STATE, 1
# 51 "data/maps/CrabhillEntrance/scripts.pory"
	release
	end


Crabhill_Eventscript_ShinykrabbyEncounter::
# 56 "data/maps/CrabhillEntrance/scripts.pory"
	lock
# 57 "data/maps/CrabhillEntrance/scripts.pory"
	playmoncry SPECIES_KRABBY, CRY_MODE_ENCOUNTER
# 58 "data/maps/CrabhillEntrance/scripts.pory"
	delay 40
# 59 "data/maps/CrabhillEntrance/scripts.pory"
	waitmoncry
# 60 "data/maps/CrabhillEntrance/scripts.pory"
	setflag FLAG_NOCATCH_ENCOUNTER
# 61 "data/maps/CrabhillEntrance/scripts.pory"
	createmon 1, 0, SPECIES_KRABBY, 10, , , , , , , , , , , , , , , , , , , , , , SHINY_MODE_ALWAYS, , 
# 62 "data/maps/CrabhillEntrance/scripts.pory"
	dowildbattle
# 63 "data/maps/CrabhillEntrance/scripts.pory"
	clearflag FLAG_NOCATCH_ENCOUNTER
# 64 "data/maps/CrabhillEntrance/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 65 "data/maps/CrabhillEntrance/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Crabhill_Eventscript_ShinykrabbyEncounter_2
# 69 "data/maps/CrabhillEntrance/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Crabhill_Eventscript_ShinykrabbyEncounter_3
Crabhill_Eventscript_ShinykrabbyEncounter_1:
# 73 "data/maps/CrabhillEntrance/scripts.pory"
	setvar VAR_MEESTRECH_TOWN_STATE, 1
# 74 "data/maps/CrabhillEntrance/scripts.pory"
	release
	return

Crabhill_Eventscript_ShinykrabbyEncounter_2:
# 67 "data/maps/CrabhillEntrance/scripts.pory"
	call Won_or_Caught
	goto Crabhill_Eventscript_ShinykrabbyEncounter_1

Crabhill_Eventscript_ShinykrabbyEncounter_3:
# 70 "data/maps/CrabhillEntrance/scripts.pory"
	clearflag FLAG_NOCATCH_ENCOUNTER
	goto Crabhill_Eventscript_ShinykrabbyEncounter_1


Won_or_Caught::
# 79 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Won_or_Caught_Text_0, MSGBOX_AUTOCLOSE
# 81 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 83 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 31, Won_or_Caught_Movement_0
# 84 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 30, Won_or_Caught_Movement_1
# 85 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 29, Won_or_Caught_Movement_1
# 86 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 32, Won_or_Caught_Movement_2
# 87 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 28, Won_or_Caught_Movement_2
# 88 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 25, Won_or_Caught_Movement_3
# 89 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 27, Crabhill_Faculty_Grunt_Signal_Movement_5
# 90 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 26, Crabhill_Faculty_Grunt_Signal_Movement_5
# 91 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 2, Won_or_Caught_Movement_4
# 92 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 23, Won_or_Caught_Movement_4
# 93 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 22, Crabhill_Faculty_Grunt_Signal_Movement_5
# 94 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 24, Crabhill_Faculty_Grunt_Signal_Movement_5
# 95 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 33, Crabhill_Faculty_Grunt_Signal_Movement_5
# 96 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 1, Won_or_Caught_Movement_5
# 97 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 98 "data/maps/CrabhillEntrance/scripts.pory"
	delay 60
# 99 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 31
# 100 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 33
# 101 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 30
# 102 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 29
# 103 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 32
# 104 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 28
# 105 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 25
# 106 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 27
# 107 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 26
# 108 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 2
# 109 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 23
# 110 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 22
# 111 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 24
# 112 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 1
# 113 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Jacob_in_need_Text_0
# 114 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Won_or_Caught_Text_1, MSGBOX_AUTOCLOSE
# 115 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 21, Won_or_Caught_Movement_6
# 116 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 117 "data/maps/CrabhillEntrance/scripts.pory"
	setobjectmovementtype LOCALID_JACOB, MOVEMENT_TYPE_NONE
# 118 "data/maps/CrabhillEntrance/scripts.pory"
	getobjectxy LOCALID_JACOB, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
# 119 "data/maps/CrabhillEntrance/scripts.pory"
	delay 120
# 120 "data/maps/CrabhillEntrance/scripts.pory"
	compare VAR_TEMP_0, 32
	goto_if_eq Won_or_Caught_4
Won_or_Caught_3:
# 125 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 21, Won_or_Caught_Movement_8
# 126 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
Won_or_Caught_1:
# 128 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Jacob_in_need_Text_0
# 129 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Won_or_Caught_Text_2, MSGBOX_AUTOCLOSE
# 130 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 21, Crabhill_Faculty_Grunt_Signal_Movement_5
# 131 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
# 132 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 21
# 133 "data/maps/CrabhillEntrance/scripts.pory"
	setflag FLAG_SHINY_KRABBY_ENCOUNTER
# 134 "data/maps/CrabhillEntrance/scripts.pory"
	clearflag FLAG_HIDE_JACOB_SIENNA
	return

Won_or_Caught_2:
# 121 "data/maps/CrabhillEntrance/scripts.pory"
	applymovement 21, Won_or_Caught_Movement_7
# 122 "data/maps/CrabhillEntrance/scripts.pory"
	waitmovement
	goto Won_or_Caught_1

Won_or_Caught_4:
# 120 "data/maps/CrabhillEntrance/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq Won_or_Caught_2
	goto Won_or_Caught_3


Krabby_won::
# 139 "data/maps/CrabhillEntrance/scripts.pory"
	playmoncry SPECIES_KRABBY, CRY_MODE_ENCOUNTER
# 140 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Krabby_won_Text_0, MSGBOX_AUTOCLOSE
# 141 "data/maps/CrabhillEntrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 142 "data/maps/CrabhillEntrance/scripts.pory"
	removeobject 1
# 143 "data/maps/CrabhillEntrance/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 144 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Krabby_won_Text_1
	return


Crabhill_Krabby_Cry::
# 149 "data/maps/CrabhillEntrance/scripts.pory"
	playmoncry SPECIES_KRABBY, CRY_MODE_NORMAL
	return


Crabhill_Wall_Carving::
# 153 "data/maps/CrabhillEntrance/scripts.pory"
	lock
# 154 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Wall_Carving_Text_0
# 155 "data/maps/CrabhillEntrance/scripts.pory"
	release
	return


Crabhill_Hiker_Hint::
# 159 "data/maps/CrabhillEntrance/scripts.pory"
	lock
# 160 "data/maps/CrabhillEntrance/scripts.pory"
	faceplayer
# 161 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Hiker_Hint_Text_0
# 162 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 163 "data/maps/CrabhillEntrance/scripts.pory"
	release
	return


Crabhill_Faculty_Lost_grunt::
# 167 "data/maps/CrabhillEntrance/scripts.pory"
	lock
# 168 "data/maps/CrabhillEntrance/scripts.pory"
	faceplayer
# 169 "data/maps/CrabhillEntrance/scripts.pory"
	setspeaker Crabhill_Faculty_Grunt_Signal_Text_0
# 170 "data/maps/CrabhillEntrance/scripts.pory"
	msgbox Crabhill_Faculty_Lost_grunt_Text_0
# 171 "data/maps/CrabhillEntrance/scripts.pory"
	waitmessage
# 172 "data/maps/CrabhillEntrance/scripts.pory"
	release
	return


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

# 16 "data/maps/CrabhillEntrance/scripts.pory"
Crabhill_Faculty_Grunt_Signal_Movement_0:
# 16 "data/maps/CrabhillEntrance/scripts.pory"
	jump_down
# 16 "data/maps/CrabhillEntrance/scripts.pory"
	face_up
	step_end

# 22 "data/maps/CrabhillEntrance/scripts.pory"
Crabhill_Faculty_Grunt_Signal_Movement_1:
# 22 "data/maps/CrabhillEntrance/scripts.pory"
	face_up
# 22 "data/maps/CrabhillEntrance/scripts.pory"
	emote_exclamation_mark
	step_end

# 27 "data/maps/CrabhillEntrance/scripts.pory"
Crabhill_Faculty_Grunt_Signal_Movement_2:
# 27 "data/maps/CrabhillEntrance/scripts.pory"
	walk_up
	step_end

# 40 "data/maps/CrabhillEntrance/scripts.pory"
Crabhill_Faculty_Grunt_Signal_Movement_3:
# 40 "data/maps/CrabhillEntrance/scripts.pory"
	face_down
	step_end

# 45 "data/maps/CrabhillEntrance/scripts.pory"
Crabhill_Faculty_Grunt_Signal_Movement_4:
# 45 "data/maps/CrabhillEntrance/scripts.pory"
	jump_left
# 45 "data/maps/CrabhillEntrance/scripts.pory"
	face_down
	step_end

# 46 "data/maps/CrabhillEntrance/scripts.pory"
Crabhill_Faculty_Grunt_Signal_Movement_5:
# 46 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 46 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 46 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 46 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 46 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 46 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
# 46 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_down
	step_end

# 83 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_0:
# 83 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 83 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 83 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 83 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 83 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
	step_end

# 84 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_1:
# 84 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
# 84 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
# 84 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
# 84 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
	step_end

# 86 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_2:
# 86 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 86 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 86 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 86 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 86 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 86 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 86 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
	step_end

# 88 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_3:
# 88 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
# 88 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
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

# 91 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_4:
# 91 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
# 91 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_up
# 91 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 91 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 91 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 91 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 91 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 91 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
# 91 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_left
	step_end

# 96 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_5:
# 96 "data/maps/CrabhillEntrance/scripts.pory"
	walk_down
# 96 "data/maps/CrabhillEntrance/scripts.pory"
	walk_right
# 96 "data/maps/CrabhillEntrance/scripts.pory"
	jump_2_right
# 96 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 96 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 96 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 96 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
# 96 "data/maps/CrabhillEntrance/scripts.pory"
	walk_fast_right
	step_end

# 115 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_6:
# 115 "data/maps/CrabhillEntrance/scripts.pory"
	walk_slow_left
# 115 "data/maps/CrabhillEntrance/scripts.pory"
	walk_slow_right
# 115 "data/maps/CrabhillEntrance/scripts.pory"
	walk_slow_left
# 115 "data/maps/CrabhillEntrance/scripts.pory"
	walk_slow_right
	step_end

# 121 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_7:
# 121 "data/maps/CrabhillEntrance/scripts.pory"
	walk_right
# 121 "data/maps/CrabhillEntrance/scripts.pory"
	walk_right
# 121 "data/maps/CrabhillEntrance/scripts.pory"
	walk_right
# 121 "data/maps/CrabhillEntrance/scripts.pory"
	face_up
	step_end

# 125 "data/maps/CrabhillEntrance/scripts.pory"
Won_or_Caught_Movement_8:
# 125 "data/maps/CrabhillEntrance/scripts.pory"
	walk_right
# 125 "data/maps/CrabhillEntrance/scripts.pory"
	walk_right
# 125 "data/maps/CrabhillEntrance/scripts.pory"
	face_up
	step_end

Crabhill_Jacob_in_need_Text_0:
# 5 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Jacob$"

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
# 13 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Faculty Grunt$"

Crabhill_Faculty_Grunt_Signal_Text_1:
# 14 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Step back boy!$"

Crabhill_Faculty_Grunt_Signal_Text_2:
# 19 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Signal output nominal. All organic\n"
	.string "assets are oscillating in perfect\l"
	.string "synchronization.\p"
	.string "Look at this beautiful efficiency! This\n"
	.string "is the future of workforce\l"
	.string "optimization!$"

Crabhill_Faculty_Grunt_Signal_Text_3:
# 25 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Wait. Anomaly detected.\p"
	.string "You there, the gold variant. Your neural\n"
	.string "pathways are rejecting the command.\p"
	.string "Compliance is not optional. Receive the\n"
	.string "input!$"

Crabhill_Faculty_Grunt_Signal_Text_4:
# 30 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Why aren't you moving?!\p"
	.string "Increasing signal intensity to maximum\n"
	.string "voltage! Obey!$"

Crabhill_Faculty_Grunt_Signal_Text_5:
# 38 "data/maps/CrabhillEntrance/scripts.pory"
	.string "It... it deflected the carrier wave?!\p"
	.string "The feedback loop just fried the\n"
	.string "transmitter circuits!\p"
	.string "That carapace is acting like a mirror!$"

Crabhill_Faculty_Grunt_Signal_Text_6:
# 43 "data/maps/CrabhillEntrance/scripts.pory"
	.string "This data is completely anomalous!\p"
	.string "I am not paid enough for radioactive\n"
	.string "crustaceans!\p"
	.string "Tactical retreat! Abort mission!$"

Won_or_Caught_Text_0:
# 79 "data/maps/CrabhillEntrance/scripts.pory"
	.string "The Krabby's seem to have snapped out\n"
	.string "of it!\p"
	.string "Whatever was controlling them... it\n"
	.string "stopped working.$"

Won_or_Caught_Text_1:
# 114 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Left... Right... Left... WHOA!$"

Won_or_Caught_Text_2:
# 129 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Kid! You broke the trance!\p"
	.string "Thank Arceus... another five minutes of\n"
	.string "that and my legs would have fallen right\l"
	.string "off!\p"
	.string "But did you see it?!\p"
	.string "That was it!\p"
	.string "That was the 'special specimen' I\n"
	.string "wanted to show you!\p"
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
	.string "And a Shiny one...\n"
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
	.string "If I don't get back before she realizes\n"
	.string "I've been gone for three hours without\l"
	.string "permission, she's going to be scarier\l"
	.string "than a Gyarados!\p"
	.string "I gotta run!\p"
	.string "You are welcome to join for dinner!$"

Krabby_won_Text_0:
# 140 "data/maps/CrabhillEntrance/scripts.pory"
	.string "KRABBY, KRAB-BY!$"

Krabby_won_Text_1:
# 144 "data/maps/CrabhillEntrance/scripts.pory"
	.string "The shiny Krabby fled through a crack\n"
	.string "in the wall, the other krabby's seem\l"
	.string "still confused.$"

Crabhill_Wall_Carving_Text_0:
# 154 "data/maps/CrabhillEntrance/scripts.pory"
	.string "Carved into the damp cave wall,\n"
	.string "glistening with moisture:\p"
	.string "When stone weeps and the tide is low, a\n"
	.string "claw of gold shall start to glow. Its\l"
	.string "light awaits the destined hand, who will\l"
	.string "soon command the land.$"

Crabhill_Hiker_Hint_Text_0:
# 161 "data/maps/CrabhillEntrance/scripts.pory"
	.string "I have been in this cave for hours.\p"
	.string "The more time I spend in here the more I\n"
	.string "realize going backwards might be going\l"
	.string "forward, and the other way around.\p"
	.string "If you know what I mean.$"

Crabhill_Faculty_Lost_grunt_Text_0:
# 170 "data/maps/CrabhillEntrance/scripts.pory"
	.string "I have lost contact with my associate,\n"
	.string "this cave is a maze!\p"
	.string "The Control Signal seemed to cause a\n"
	.string "chaotic dispersal instead of\l"
	.string "obedience!\p"
	.string "Wait... erase that input! I absolutely\n"
	.string "did not say we are manipulating local\l"
	.string "wildlife frequencies!\p"
	.string "Forget you heard anything about the\n"
	.string "signal!$"
