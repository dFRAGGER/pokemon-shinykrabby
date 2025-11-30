Mistcity_Research_Center_Entrance_MapScripts::
	.byte 0


Mistcity_Research_Center_Entrance_Rangers_Slaking::
# 4 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 5 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 6 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0
# 7 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 8 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return


Mistcity_Research_Center_Entrance_Rangers_Shiftry::
# 12 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 13 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 14 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Rangers_Shiftry_Text_0
# 15 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 16 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return


Mistcity_Research_Center_Entrance_Rangers_Paras::
# 20 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 21 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 22 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Rangers_Paras_Text_0
# 23 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 24 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return


Mistcity_Research_Center_Entrance_Rangers_Tropius::
# 28 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 29 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 30 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Rangers_Tropius_Text_0
# 31 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 32 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return


Mistcity_Research_Center_Entrance_Rangers_Trucks::
# 36 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 37 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 38 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Rangers_Trucks_Text_0
# 39 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 40 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return


Mistcity_Research_Center_Entrance_Scientist_Mist::
# 44 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 45 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 46 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0
# 47 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 48 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return


Mistcity_Research_Center_Entrance_Scientist_Guard::
# 52 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 53 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 54 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Guard_Text_0
# 55 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 56 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return


Mistcity_Research_Center_Entrance_Scientist_Paras::
# 60 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 61 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 62 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Paras_2
Mistcity_Research_Center_Entrance_Scientist_Paras_1:
# 65 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Paras_5
Mistcity_Research_Center_Entrance_Scientist_Paras_4:
# 68 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 69 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 3, Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0
# 70 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 71 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Scientist_Paras_2:
# 63 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Paras_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Paras_1

Mistcity_Research_Center_Entrance_Scientist_Paras_5:
# 66 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Paras_Text_1
	goto Mistcity_Research_Center_Entrance_Scientist_Paras_4


Mistcity_Research_Center_Entrance_Scientist_Tropius::
# 75 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 76 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 77 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Tropius_2
Mistcity_Research_Center_Entrance_Scientist_Tropius_1:
# 80 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Tropius_5
Mistcity_Research_Center_Entrance_Scientist_Tropius_4:
# 83 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 84 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 12, Mistcity_Research_Center_Entrance_Scientist_Tropius_Movement_0
# 85 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 86 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Scientist_Tropius_2:
# 78 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Paras_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Tropius_1

Mistcity_Research_Center_Entrance_Scientist_Tropius_5:
# 81 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Tropius_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Tropius_4


Mistcity_Research_Center_Entrance_Scientist_Shiftry::
# 90 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 91 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 92 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Shiftry_2
Mistcity_Research_Center_Entrance_Scientist_Shiftry_1:
# 95 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Shiftry_5
Mistcity_Research_Center_Entrance_Scientist_Shiftry_4:
# 98 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 99 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 4, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 100 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 101 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Scientist_Shiftry_2:
# 93 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Paras_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Shiftry_1

Mistcity_Research_Center_Entrance_Scientist_Shiftry_5:
# 96 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Shiftry_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Shiftry_4


Mistcity_Research_Center_Entrance_Scientist_Slaking::
# 105 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 106 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 107 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Slaking_2
Mistcity_Research_Center_Entrance_Scientist_Slaking_1:
# 110 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Slaking_5
Mistcity_Research_Center_Entrance_Scientist_Slaking_4:
# 113 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 114 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 2, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 115 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 116 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Scientist_Slaking_2:
# 108 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Paras_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Slaking_1

Mistcity_Research_Center_Entrance_Scientist_Slaking_5:
# 111 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Slaking_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Slaking_4


Mistcity_Research_Center_Entrance_Daan_RescueMission::
# 120 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 121 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	playse SE_PIN
# 122 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 19, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_0
# 123 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 124 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_1
# 125 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0, MSGBOX_AUTOCLOSE
# 126 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 127 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_2
# 128 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 129 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 19, Mistcity_Research_Center_Entrance_Scientist_Tropius_Movement_0
# 130 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 131 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_1, MSGBOX_AUTOCLOSE
# 132 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 133 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 19, Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0
# 134 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_1
# 135 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 136 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_2, MSGBOX_YESNO
# 137 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 138 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Mistcity_Research_Center_Entrance_Daan_RescueMission_2
Mistcity_Research_Center_Entrance_Daan_RescueMission_1:
# 141 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Mistcity_Research_Center_Entrance_Daan_RescueMission_5
Mistcity_Research_Center_Entrance_Daan_RescueMission_4:
# 144 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 145 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_3
# 146 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 21, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 147 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 148 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 19, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_3
# 149 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_4
# 150 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 151 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 152 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_5, MSGBOX_AUTOCLOSE
# 153 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 154 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_5
# 155 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 156 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_6, MSGBOX_AUTOCLOSE
# 157 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 158 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Scientist_Tropius_Movement_0
# 159 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 160 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	delay 40
# 161 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 162 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 163 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_7, MSGBOX_AUTOCLOSE
# 164 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 165 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_6
# 166 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 167 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_7
# 168 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 169 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_8, MSGBOX_AUTOCLOSE
# 170 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 171 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	delay 40
# 172 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0
# 173 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 174 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	delay 60
# 175 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_9, MSGBOX_AUTOCLOSE
# 176 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 177 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	delay 60
# 178 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 179 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 180 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_10, MSGBOX_AUTOCLOSE
# 181 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 182 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_8
# 183 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 184 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_11
# 185 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 186 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_9
# 187 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 188 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	removeobject 20
# 189 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 21, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_10
# 190 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 191 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	removeobject 21
# 192 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_11
# 193 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 194 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	removeobject 18
# 195 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 196 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setflag FLAG_HIDE_NASH_DAVID
# 197 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 19, Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0
# 198 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_1
# 199 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 200 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_12
# 201 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 202 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER, 1
# 203 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setflag FLAG_NASH_ENTRANCE_RESEARCH_CENTER1
# 204 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	end

Mistcity_Research_Center_Entrance_Daan_RescueMission_2:
# 139 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_3, MSGBOX_AUTOCLOSE
	goto Mistcity_Research_Center_Entrance_Daan_RescueMission_1

Mistcity_Research_Center_Entrance_Daan_RescueMission_5:
# 142 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_4, MSGBOX_AUTOCLOSE
	goto Mistcity_Research_Center_Entrance_Daan_RescueMission_4


# 69 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0:
# 69 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_right
	step_end

# 84 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Scientist_Tropius_Movement_0:
# 84 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_up
	step_end

# 99 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0:
# 99 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_down
	step_end

# 122 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_0:
# 122 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_right
# 122 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	emote_exclamation_mark
	step_end

# 124 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_1:
# 124 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_left
	step_end

# 127 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_2:
# 127 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_left
# 127 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_left
# 127 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_left
# 127 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_up
	step_end

# 145 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_3:
# 145 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_right
# 145 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_right
# 145 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_up
	step_end

# 149 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_4:
# 149 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_right
# 149 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 149 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_down
	step_end

# 154 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_5:
# 154 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_down
	step_end

# 165 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_6:
# 165 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 165 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_down
	step_end

# 167 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_7:
# 167 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_down
# 167 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_right
# 167 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_down
	step_end

# 182 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_8:
# 182 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_left
# 182 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 182 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_down
	step_end

# 186 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_9:
# 186 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 186 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
	step_end

# 189 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_10:
# 189 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_left
# 189 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 189 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
	step_end

# 192 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_11:
# 192 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_right
# 192 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 192 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
	step_end

Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0:
# 6 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "This Slaking usually sleeps eighteen\n"
	.string "hours a day, but it keeps pressing its\l"
	.string "ear to the mud like it hears something\l"
	.string "moving deep underground.$"

Mistcity_Research_Center_Entrance_Rangers_Shiftry_Text_0:
# 14 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "I've never seen a Shiftry act this\n"
	.string "aggressive, but it keeps staring toward\l"
	.string "the deep woods and howling as if an\l"
	.string "intruder is tearing up its home.$"

Mistcity_Research_Center_Entrance_Rangers_Paras_Text_0:
# 22 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "The mushroom on this Parasect's back\n"
	.string "has been releasing defensive spores all\l"
	.string "morning, a reaction usually only\l"
	.string "triggered by heavy seismic activity.$"

Mistcity_Research_Center_Entrance_Rangers_Tropius_Text_0:
# 30 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "We found this poor Tropius tangled in\n"
	.string "the lower branches; it was terrified of\l"
	.string "a loud, metallic grinding sound echoing\l"
	.string "from the restricted zone.$"

Mistcity_Research_Center_Entrance_Rangers_Trucks_Text_0:
# 38 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "We've had to mobilize the all our rescue\n"
	.string "trucks just to keep up with the sheer\l"
	.string "volume of distress signals coming from\l"
	.string "the forest core.$"

Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0:
# 46 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "The deep cloud forest is a biological\n"
	.string "marvel, a unique ecosystem where the\l"
	.string "perpetual mist allows rare and ancient\l"
	.string "Pokémon species to thrive in isolation.$"

Mistcity_Research_Center_Entrance_Scientist_Guard_Text_0:
# 54 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "I can't let you through; the upper level\n"
	.string "is strictly reserved for our lead\l"
	.string "researchers to analyze the sensitive\l"
	.string "data coming from the forest.$"

Mistcity_Research_Center_Entrance_Scientist_Paras_Text_0:
# 63 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "$"

Mistcity_Research_Center_Entrance_Scientist_Paras_Text_1:
# 66 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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
# 81 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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
# 96 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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
# 111 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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
# 125 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "{COLOR RED}Lead Scientist{COLOR DARK_GRAY}: Hold it right there.\p"
	.string "You're a skilled trainer, right?\p"
	.string "...Good. We have a serious situation.\p"
	.string "Join us.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_1:
# 131 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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
# 136 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Can you do it?$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_3:
# 139 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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
# 142 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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
# 152 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "{COLOR RED}Lead Scientist{COLOR DARK_GRAY}: I want to introduce you\n"
	.string "to two of my people, {COLOR BLUE}Nash{COLOR DARK_GRAY} & {COLOR GREEN}David{COLOR DARK_GRAY}.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_6:
# 156 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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
# 163 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: This is the kid's first time out in\n"
	.string "the deep woods.\p"
	.string "He's... a specialist.\p"
	.string "A bit green, but the sharpest mind we've\n"
	.string "got.\p"
	.string "Let's all make sure we get back in one\n"
	.string "piece.\p"
	.string "Go ahead, introduce yourself.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_8:
# 169 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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
# 175 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "It's... loud out there.\p"
	.string "Lots of data.\p"
	.string "All the agitated Pokémon are creating\n"
	.string "chaotic energy spikes.\p"
	.string "But their pattern is random.\p"
	.string "The deforestation signal... that will be\n"
	.string "a steady, repeating pattern.\p"
	.string "A clean signal in the noise.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_10:
# 180 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "I'll find the signal.\p"
	.string "That's what I'm good at.\p"
	.string "Just...\p"
	.string "just keep the angry Beedrill away from\n"
	.string "me.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_11:
# 184 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "{COLOR RED}Lead Scientist{COLOR DARK_GRAY}: Nash.\n"
	.string "David.\p"
	.string "Go downstairs and prepare the truck.\p"
	.string "Keep me updated on your progress.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_12:
# 200 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "{COLOR RED}Lead Scientist{COLOR DARK_GRAY}: Don't be afraid.\p"
	.string "Nash & David are the best people I got.\p"
	.string "Make sure you heal your Pokémon and\n"
	.string "stack up on some potions, the forest\l"
	.string "can be a very harsh place.\p"
	.string "I'll keep in contact trough the radio.\p"
	.string "Nash and David should be ready any\n"
	.string "minute now.$"
