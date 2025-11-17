Mistcity_Research_Center_Entrance_MapScripts::
	.byte 0


Mistcity_Research_Center_Entrance_Scientist_Paras::
# 4 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 5 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 6 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Paras_2
Mistcity_Research_Center_Entrance_Scientist_Paras_1:
# 9 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Paras_5
Mistcity_Research_Center_Entrance_Scientist_Paras_4:
# 12 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 13 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 3, Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0
# 14 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 15 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Scientist_Paras_2:
# 7 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Paras_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Paras_1

Mistcity_Research_Center_Entrance_Scientist_Paras_5:
# 10 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Paras_Text_1
	goto Mistcity_Research_Center_Entrance_Scientist_Paras_4


Mistcity_Research_Center_Entrance_Scientist_Tropius::
# 19 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 20 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 21 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Tropius_2
Mistcity_Research_Center_Entrance_Scientist_Tropius_1:
# 24 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Tropius_5
Mistcity_Research_Center_Entrance_Scientist_Tropius_4:
# 27 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 28 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 12, Mistcity_Research_Center_Entrance_Scientist_Tropius_Movement_0
# 29 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 30 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Scientist_Tropius_2:
# 22 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Paras_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Tropius_1

Mistcity_Research_Center_Entrance_Scientist_Tropius_5:
# 25 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Tropius_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Tropius_4


Mistcity_Research_Center_Entrance_Scientist_Shiftry::
# 34 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 35 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 36 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Shiftry_2
Mistcity_Research_Center_Entrance_Scientist_Shiftry_1:
# 39 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Shiftry_5
Mistcity_Research_Center_Entrance_Scientist_Shiftry_4:
# 42 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 43 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 4, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 44 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 45 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Scientist_Shiftry_2:
# 37 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Paras_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Shiftry_1

Mistcity_Research_Center_Entrance_Scientist_Shiftry_5:
# 40 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Shiftry_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Shiftry_4


Mistcity_Research_Center_Entrance_Scientist_Slaking::
# 49 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 50 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 51 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Slaking_2
Mistcity_Research_Center_Entrance_Scientist_Slaking_1:
# 54 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Slaking_5
Mistcity_Research_Center_Entrance_Scientist_Slaking_4:
# 57 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 58 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 2, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 59 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 60 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Scientist_Slaking_2:
# 52 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Paras_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Slaking_1

Mistcity_Research_Center_Entrance_Scientist_Slaking_5:
# 55 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Slaking_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Slaking_4


Mistcity_Research_Center_Entrance_Daan_RescueMission::
# 64 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 65 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	playse SE_PIN
# 66 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 19, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_0
# 67 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 68 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_1
# 69 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0, MSGBOX_AUTOCLOSE
# 70 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 71 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_2
# 72 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 73 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 19, Mistcity_Research_Center_Entrance_Scientist_Tropius_Movement_0
# 74 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 75 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_1, MSGBOX_AUTOCLOSE
# 76 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 77 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 19, Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0
# 78 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_1
# 79 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 80 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_2, MSGBOX_YESNO
# 81 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 82 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Mistcity_Research_Center_Entrance_Daan_RescueMission_2
Mistcity_Research_Center_Entrance_Daan_RescueMission_1:
# 85 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Mistcity_Research_Center_Entrance_Daan_RescueMission_5
Mistcity_Research_Center_Entrance_Daan_RescueMission_4:
# 88 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 89 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_3
# 90 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 21, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 91 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 92 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 19, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_3
# 93 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_4
# 94 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 95 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 96 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_5, MSGBOX_AUTOCLOSE
# 97 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 98 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_5
# 99 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 100 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_6, MSGBOX_AUTOCLOSE
# 101 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 102 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Scientist_Tropius_Movement_0
# 103 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 104 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	delay 40
# 105 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 106 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 107 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_7, MSGBOX_AUTOCLOSE
# 108 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 109 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_6
# 110 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 111 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_7
# 112 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 113 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_8, MSGBOX_AUTOCLOSE
# 114 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 115 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	delay 40
# 116 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0
# 117 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 118 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	delay 60
# 119 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_9, MSGBOX_AUTOCLOSE
# 120 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 121 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	delay 60
# 122 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 123 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 124 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_10, MSGBOX_AUTOCLOSE
# 125 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 126 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_8
# 127 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 128 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_11
# 129 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 130 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_9
# 131 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 132 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	removeobject 20
# 133 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 21, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_10
# 134 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 135 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	removeobject 21
# 136 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_11
# 137 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 138 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	removeobject 18
# 139 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 140 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setflag FLAG_HIDE_NASH_DAVID
# 141 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 19, Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0
# 142 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_1
# 143 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 144 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_12
# 145 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 146 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER, 1
# 147 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setflag FLAG_NASH_ENTRANCE_RESEARCH_CENTER1
# 148 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	end

Mistcity_Research_Center_Entrance_Daan_RescueMission_2:
# 83 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_3, MSGBOX_AUTOCLOSE
	goto Mistcity_Research_Center_Entrance_Daan_RescueMission_1

Mistcity_Research_Center_Entrance_Daan_RescueMission_5:
# 86 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_4, MSGBOX_AUTOCLOSE
	goto Mistcity_Research_Center_Entrance_Daan_RescueMission_4


# 13 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0:
# 13 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_right
	step_end

# 28 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Scientist_Tropius_Movement_0:
# 28 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_up
	step_end

# 43 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0:
# 43 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_down
	step_end

# 66 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_0:
# 66 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_right
# 66 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	emote_exclamation_mark
	step_end

# 68 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_1:
# 68 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_left
	step_end

# 71 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_2:
# 71 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_left
# 71 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_left
# 71 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_left
# 71 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_up
	step_end

# 89 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_3:
# 89 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_right
# 89 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_right
# 89 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_up
	step_end

# 93 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_4:
# 93 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_right
# 93 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 93 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_down
	step_end

# 98 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_5:
# 98 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_down
	step_end

# 109 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_6:
# 109 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 109 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_down
	step_end

# 111 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_7:
# 111 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_down
# 111 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_right
# 111 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_down
	step_end

# 126 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_8:
# 126 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_left
# 126 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 126 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_down
	step_end

# 130 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_9:
# 130 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 130 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
	step_end

# 133 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_10:
# 133 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_left
# 133 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 133 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
	step_end

# 136 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_11:
# 136 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_right
# 136 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 136 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
	step_end

Mistcity_Research_Center_Entrance_Scientist_Paras_Text_0:
# 7 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "$"

Mistcity_Research_Center_Entrance_Scientist_Paras_Text_1:
# 10 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "{COLOR RED}Scientist{COLOR DARK_GRAY}: Now, this is the most\n"
	.string "alarming case.\p"
	.string "The tochukaso mushroom that controls\n"
	.string "the Parasect is a fungus, right?\p"
	.string "It's incredibly sensitive to geological\n"
	.string "changes.\p"
	.string "Lately, we've rescued several Parasect\n"
	.string "from the deep woods whose mushrooms\l"
	.string "have developed a faint, unnatural\l"
	.string "bio-luminescence.\p"
	.string "It's a defensive reaction.\p"
	.string "Our hypothesis is that something is\n"
	.string "emitting powerful, systematic waves of\l"
	.string "energy into the ground-like a sonar.\p"
	.string "The fungus is reacting to being\n"
	.string "'scanned.'\p"
	.string "Someone isn't just exploring the\n"
	.string "forest; they're X-raying it.$"

Mistcity_Research_Center_Entrance_Scientist_Tropius_Text_0:
# 25 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "{COLOR RED}Scientist{COLOR DARK_GRAY}: This poor thing was part of a\n"
	.string "whole herd we saw fleeing the\l"
	.string "Whisperwood Grove area last week.\p"
	.string "They were in a complete panic, flying\n"
	.string "erratically as if escaping a huge\l"
	.string "predator, but there was nothing there.\p"
	.string "This one got separated and was\n"
	.string "exhausted.\p"
	.string "It's still incredibly skittish.\p"
	.string "We've been getting similar reports from\n"
	.string "other flying-type Pokémon.\p"
	.string "Some kind of powerful, ground-based\n"
	.string "energy pulse in that sector is making\l"
	.string "the sky feel unsafe to them.$"

Mistcity_Research_Center_Entrance_Scientist_Shiftry_Text_0:
# 40 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "{COLOR RED}Scientist{COLOR DARK_GRAY}: Shiftry are masters of the\n"
	.string "forest, moving like ghosts through the\l"
	.string "trees.\p"
	.string "They are deeply connected to their\n"
	.string "territory.\p"
	.string "But this one? We found it completely\n"
	.string "disoriented, miles from its home.\p"
	.string "It acts dazed, sometimes just staring\n"
	.string "blankly at the ground for hours.\p"
	.string "Our analysis suggests its sensory\n"
	.string "organs, which help it navigate, are\l"
	.string "being overwhelmed by some kind of\l"
	.string "external interference.\p"
	.string "It's like its natural compass has been\n"
	.string "scrambled by a powerful magnetic field.$"

Mistcity_Research_Center_Entrance_Scientist_Slaking_Text_0:
# 55 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "{COLOR RED}Scientist{COLOR DARK_GRAY}: It's the strangest thing.\p"
	.string "Slaking are the definition of energy\n"
	.string "conservation, but this one... it won't\l"
	.string "rest.\p"
	.string "We rescued it a few weeks back after\n"
	.string "reports of it aggressively pacing near\l"
	.string "some ancient stone ruins deep in the\l"
	.string "forest.\p"
	.string "Its bio-scans are all over the place,\n"
	.string "showing constant, low-level stress.\p"
	.string "It's as if it's reacting to a persistent,\n"
	.string "low-frequency hum that none of our\l"
	.string "equipment can even detect.\p"
	.string "Something out there is seriously\n"
	.string "disturbing the peace.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0:
# 69 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "{COLOR RED}Lead Ranger{COLOR DARK_GRAY}: Hold it right there.\p"
	.string "You're a skilled trainer, right?\p"
	.string "...Good. We have a serious situation.\p"
	.string "Join us.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_1:
# 75 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "About two hours ago, a distress alarm\n"
	.string "went off in the Whisperwood Grove.\p"
	.string "It's in the same sector we've been\n"
	.string "getting all these weird reports from.\p"
	.string "The alarm was triggered by a report of\n"
	.string "illegal deforestation.\p"
	.string "Our best ranger, Daan, took the first\n"
	.string "truck out to investigate.\p"
	.string "We were expecting a radio check-in an\n"
	.string "hour ago, but we've gotten nothing but\l"
	.string "static.\p"
	.string "We need someone to head to his last\n"
	.string "known coordinates to provide backup\l"
	.string "and find out what's going on.\p"
	.string "We're stretched thin here with all these\n"
	.string "agitated Pokémon.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_2:
# 80 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Can you do it?$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_3:
# 83 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "...Great!\p"
	.string "Don't go in there unprepared.\p"
	.string "Every Pokémon we've rescued recently\n"
	.string "has come from that sector.\p"
	.string "They're all on edge, so expect wild\n"
	.string "Pokémon to be more aggressive than\l"
	.string "usual.\p"
	.string "The reports mentioned there were\n"
	.string "tracks from vehicles that have no\l"
	.string "business being that deep in a\l"
	.string "protected forest.\p"
	.string "This group, whoever they are, are\n"
	.string "well-equipped, and they're after\l"
	.string "something specific.\p"
	.string "Look for tracks, listen for machinery,\n"
	.string "and find Daan.\p"
	.string "But be careful, whoever is out there is\n"
	.string "not just breaking the rules;they're\l"
	.string "trying to tear the heart out of the\l"
	.string "forest.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_4:
# 86 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Well, I'm afraid you have no choice.\p"
	.string "We are understaffed but you won't go in\n"
	.string "there alone.\p"
	.string "Every Pokémon we've rescued recently\n"
	.string "has come from that sector.\p"
	.string "They're all on edge, so expect wild\n"
	.string "Pokémon to be more aggressive than\l"
	.string "usual.\p"
	.string "The reports mentioned there were\n"
	.string "tracks from vehicles that have no\l"
	.string "business being that deep in a\l"
	.string "protected forest.\p"
	.string "This group, whoever they are, are\n"
	.string "well-equipped, and they're after\l"
	.string "something specific.\p"
	.string "Look for tracks, listen for machinery,\n"
	.string "and find Daan.\p"
	.string "But be careful, whoever is out there is\n"
	.string "not just breaking the rules; they're\l"
	.string "trying to tear the heart out of the\l"
	.string "forest.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_5:
# 96 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "{COLOR RED}Lead Ranger{COLOR DARK_GRAY}: I want to introduce you to\n"
	.string "two of my people, {COLOR BLUE}Nash{COLOR DARK_GRAY} & {COLOR GREEN}David{COLOR DARK_GRAY}.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_6:
# 100 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: Glad to have you with us.\p"
	.string "My partner, Arcanine, and I know that\n"
	.string "sector like the back of our hands.\p"
	.string "I'll handle communications and watch\n"
	.string "our six for any ambushes.\p"
	.string "The reports about organized\n"
	.string "trespassers are what worry me most.\p"
	.string "Amateurs get lost; professionals leave\n"
	.string "tracks like the ones we've seen.\p"
	.string "Let's move out, find Daan, and make sure\n"
	.string "whoever is doing this regrets stepping\l"
	.string "foot in our forest.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_7:
# 107 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: This is the kid's first time out in\n"
	.string "the deep woods.\p"
	.string "He's... a specialist.\p"
	.string "A bit green, but the sharpest mind we've\n"
	.string "got.\p"
	.string "Let's all make sure we get back in one\n"
	.string "piece.\p"
	.string "Go ahead, introduce yourself.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_8:
# 113 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "I'm {COLOR GREEN}David Heartfield{COLOR DARK_GRAY}.\p"
	.string "I'm...\p"
	.string "I'm not a great battler.\p"
	.string "Nash is for the fighting.\p"
	.string "I'm here to find the wrongness.\p"
	.string "The scientists... they said the\n"
	.string "Parasect's mushroom was glowing.\p"
	.string "A stress reaction to a high-frequency\n"
	.string "energy pulse.\p"
	.string "I built a scanner to detect that\n"
	.string "specific frequency.\p"
	.string "It won't find Pokémon... it will find the\n"
	.string "source of what's hurting them.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_9:
# 119 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "It's... loud out there.\p"
	.string "Lots of data.\p"
	.string "All the agitated Pokémon are creating\n"
	.string "chaotic energy spikes.\p"
	.string "But their pattern is random.\p"
	.string "The deforestation signal... that will be\n"
	.string "a steady, repeating pattern.\p"
	.string "A clean signal in the noise.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_10:
# 124 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "I'll find the signal.\p"
	.string "That's what I'm good at.\p"
	.string "Just...\p"
	.string "just keep the angry Beedrill away from\n"
	.string "me.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_11:
# 128 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "{COLOR RED}Lead Ranger{COLOR DARK_GRAY}: Nash.\n"
	.string "David.\p"
	.string "Go downstairs and prepare the truck.\p"
	.string "Keep me updated on your progress.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_12:
# 144 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "{COLOR RED}Lead Ranger{COLOR DARK_GRAY}: Don't be afraid.\p"
	.string "Nash & David are the best people I got.\p"
	.string "Make sure you heal your Pokémon and\n"
	.string "stack up on some potions, the forest\l"
	.string "can be a very harsh place.\p"
	.string "I'll keep in contact trough the radio.\p"
	.string "Nash and David should be ready any\n"
	.string "minute now.$"
