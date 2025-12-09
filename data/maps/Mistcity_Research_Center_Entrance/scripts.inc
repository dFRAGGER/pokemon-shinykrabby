Mistcity_Research_Center_Entrance_MapScripts::
	.byte 0


Mistcity_Research_Center_Entrance_Rangers_Slaking::
# 4 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 5 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 6 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0
# 7 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_1
# 8 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 9 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return


Mistcity_Research_Center_Entrance_Rangers_Shiftry::
# 13 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 14 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 15 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0
# 16 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Rangers_Shiftry_Text_0
# 17 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 18 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return


Mistcity_Research_Center_Entrance_Rangers_Paras::
# 22 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 23 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 24 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0
# 25 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Rangers_Paras_Text_0
# 26 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 27 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return


Mistcity_Research_Center_Entrance_Rangers_Tropius::
# 31 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 32 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 33 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0
# 34 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Rangers_Tropius_Text_0
# 35 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 36 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return


Mistcity_Research_Center_Entrance_Rangers_Trucks::
# 40 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 41 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 42 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0
# 43 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Rangers_Trucks_Text_0
# 44 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 45 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return


Mistcity_Research_Center_Entrance_Scientist_Mist::
# 49 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 50 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 51 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0
# 52 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Mist_Text_1
# 53 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 54 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return


Mistcity_Research_Center_Entrance_Scientist_Guard::
# 58 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 59 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 60 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0
# 61 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Guard_Text_0
# 62 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 63 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return


Mistcity_Research_Center_Entrance_Scientist_Paras::
# 67 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 68 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 69 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Paras_2
Mistcity_Research_Center_Entrance_Scientist_Paras_1:
# 72 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Paras_5
Mistcity_Research_Center_Entrance_Scientist_Paras_4:
# 76 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 77 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 3, Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0
# 78 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 79 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Scientist_Paras_2:
# 70 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Paras_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Paras_1

Mistcity_Research_Center_Entrance_Scientist_Paras_5:
# 73 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0
# 74 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Paras_Text_1
	goto Mistcity_Research_Center_Entrance_Scientist_Paras_4


Mistcity_Research_Center_Entrance_Scientist_Tropius::
# 83 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 84 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 85 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Tropius_2
Mistcity_Research_Center_Entrance_Scientist_Tropius_1:
# 88 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Tropius_5
Mistcity_Research_Center_Entrance_Scientist_Tropius_4:
# 92 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 93 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 12, Mistcity_Research_Center_Entrance_Scientist_Tropius_Movement_0
# 94 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 95 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Scientist_Tropius_2:
# 86 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Paras_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Tropius_1

Mistcity_Research_Center_Entrance_Scientist_Tropius_5:
# 89 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0
# 90 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Tropius_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Tropius_4


Mistcity_Research_Center_Entrance_Scientist_Shiftry::
# 99 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 100 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 101 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Shiftry_2
Mistcity_Research_Center_Entrance_Scientist_Shiftry_1:
# 104 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Shiftry_5
Mistcity_Research_Center_Entrance_Scientist_Shiftry_4:
# 108 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 109 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 4, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 110 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 111 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Scientist_Shiftry_2:
# 102 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Paras_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Shiftry_1

Mistcity_Research_Center_Entrance_Scientist_Shiftry_5:
# 105 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0
# 106 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Shiftry_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Shiftry_4


Mistcity_Research_Center_Entrance_Scientist_Slaking::
# 115 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 116 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 117 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Slaking_2
Mistcity_Research_Center_Entrance_Scientist_Slaking_1:
# 120 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Slaking_5
Mistcity_Research_Center_Entrance_Scientist_Slaking_4:
# 124 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 125 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 2, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 126 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 127 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Scientist_Slaking_2:
# 118 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Paras_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Slaking_1

Mistcity_Research_Center_Entrance_Scientist_Slaking_5:
# 121 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0
# 122 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Slaking_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Slaking_4


Mistcity_Research_Center_Entrance_Daan_RescueMission::
# 131 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 132 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	playse SE_PIN
# 133 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 19, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_0
# 134 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 135 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_1
# 136 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
# 137 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_1, MSGBOX_AUTOCLOSE
# 138 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 139 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_2
# 140 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 141 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 19, Mistcity_Research_Center_Entrance_Scientist_Tropius_Movement_0
# 142 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 143 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
# 144 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_2, MSGBOX_AUTOCLOSE
# 145 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 146 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 19, Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0
# 147 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_1
# 148 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 149 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
# 150 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_3, MSGBOX_YESNO
# 151 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 152 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Mistcity_Research_Center_Entrance_Daan_RescueMission_2
Mistcity_Research_Center_Entrance_Daan_RescueMission_1:
# 156 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Mistcity_Research_Center_Entrance_Daan_RescueMission_5
Mistcity_Research_Center_Entrance_Daan_RescueMission_4:
# 160 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 161 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_3
# 162 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 21, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 163 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 164 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 19, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_3
# 165 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_4
# 166 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 167 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 168 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
# 169 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_6, MSGBOX_AUTOCLOSE
# 170 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 171 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_5
# 172 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 173 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_7
# 174 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_8, MSGBOX_AUTOCLOSE
# 175 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 176 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Scientist_Tropius_Movement_0
# 177 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 178 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	delay 40
# 179 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 180 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 181 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_7
# 182 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_9, MSGBOX_AUTOCLOSE
# 183 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 184 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_6
# 185 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 186 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_7
# 187 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 188 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_10
# 189 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_11, MSGBOX_AUTOCLOSE
# 190 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 191 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	delay 40
# 192 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0
# 193 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 194 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	delay 60
# 195 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_10
# 196 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_12, MSGBOX_AUTOCLOSE
# 197 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 198 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	delay 60
# 199 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 200 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 201 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_10
# 202 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_13, MSGBOX_AUTOCLOSE
# 203 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 204 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_8
# 205 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 206 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
# 207 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_14
# 208 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 209 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_9
# 210 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 211 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	removeobject 20
# 212 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 21, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_10
# 213 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 214 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	removeobject 21
# 215 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_11
# 216 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 217 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	removeobject 18
# 218 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 219 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setflag FLAG_HIDE_NASH_DAVID
# 220 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 19, Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0
# 221 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_1
# 222 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 223 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
# 224 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_15
# 225 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 226 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER, 1
# 227 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setflag FLAG_NASH_ENTRANCE_RESEARCH_CENTER1
# 228 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	end

Mistcity_Research_Center_Entrance_Daan_RescueMission_2:
# 153 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
# 154 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_4, MSGBOX_AUTOCLOSE
	goto Mistcity_Research_Center_Entrance_Daan_RescueMission_1

Mistcity_Research_Center_Entrance_Daan_RescueMission_5:
# 157 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
# 158 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_5, MSGBOX_AUTOCLOSE
	goto Mistcity_Research_Center_Entrance_Daan_RescueMission_4


# 77 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0:
# 77 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_right
	step_end

# 93 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Scientist_Tropius_Movement_0:
# 93 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_up
	step_end

# 109 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0:
# 109 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_down
	step_end

# 133 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_0:
# 133 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_right
# 133 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	emote_exclamation_mark
	step_end

# 135 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_1:
# 135 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_left
	step_end

# 139 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_2:
# 139 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_left
# 139 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_left
# 139 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_left
# 139 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_up
	step_end

# 161 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_3:
# 161 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_right
# 161 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_right
# 161 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_up
	step_end

# 165 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_4:
# 165 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_right
# 165 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 165 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_down
	step_end

# 171 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_5:
# 171 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_down
	step_end

# 184 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_6:
# 184 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 184 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_down
	step_end

# 186 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_7:
# 186 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_down
# 186 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_right
# 186 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_down
	step_end

# 204 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_8:
# 204 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_left
# 204 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 204 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_down
	step_end

# 209 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_9:
# 209 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 209 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
	step_end

# 212 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_10:
# 212 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_left
# 212 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 212 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
	step_end

# 215 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_11:
# 215 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_right
# 215 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 215 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
	step_end

Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0:
# 6 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Ranger$"

Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_1:
# 7 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "This Slaking usually sleeps eighteen\n"
	.string "hours a day, but it keeps pressing its\l"
	.string "ear to the mud like it hears something\l"
	.string "moving deep underground.$"

Mistcity_Research_Center_Entrance_Rangers_Shiftry_Text_0:
# 16 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "I've never seen a Shiftry act this\n"
	.string "aggressive, but it keeps staring toward\l"
	.string "the deep woods and howling as if an\l"
	.string "intruder is tearing up its home.$"

Mistcity_Research_Center_Entrance_Rangers_Paras_Text_0:
# 25 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "The mushroom on this Parasect's back\n"
	.string "has been releasing defensive spores all\l"
	.string "morning, a reaction usually only\l"
	.string "triggered by heavy seismic activity.$"

Mistcity_Research_Center_Entrance_Rangers_Tropius_Text_0:
# 34 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "We found this poor Tropius tangled in\n"
	.string "the lower branches; it was terrified of\l"
	.string "a loud, metallic grinding sound echoing\l"
	.string "from the restricted zone.$"

Mistcity_Research_Center_Entrance_Rangers_Trucks_Text_0:
# 43 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "We've had to mobilize the all our rescue\n"
	.string "trucks just to keep up with the sheer\l"
	.string "volume of distress signals coming from\l"
	.string "the forest core.$"

Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0:
# 51 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Scientist$"

Mistcity_Research_Center_Entrance_Scientist_Mist_Text_1:
# 52 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "The deep cloud forest is a biological\n"
	.string "marvel, a unique ecosystem where the\l"
	.string "perpetual mist allows rare and ancient\l"
	.string "Pokémon species to thrive in isolation.$"

Mistcity_Research_Center_Entrance_Scientist_Guard_Text_0:
# 61 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "I can't let you through; the upper level\n"
	.string "is strictly reserved for our lead\l"
	.string "researchers to analyze the sensitive\l"
	.string "data coming from the forest.$"

Mistcity_Research_Center_Entrance_Scientist_Paras_Text_0:
# 70 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "$"

Mistcity_Research_Center_Entrance_Scientist_Paras_Text_1:
# 74 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Now, this is the most alarming case.\p"
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
# 90 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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
# 106 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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
# 122 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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
# 136 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Lead Scientist$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_1:
# 137 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Hold it right there.\p"
	.string "You're a skilled trainer, right?\p"
	.string "...Good. We have a serious situation.\p"
	.string "Join us.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_2:
# 144 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_3:
# 150 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Can you do it?$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_4:
# 154 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_5:
# 158 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_6:
# 169 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "I want to introduce you to two of my\n"
	.string "people, {COLOR BLUE}Nash{COLOR DARK_GRAY} & {COLOR GREEN}David{COLOR DARK_GRAY}.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_7:
# 173 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Nash$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_8:
# 174 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Glad to have you with us.\p"
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

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_9:
# 182 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "This is the kid's first time out in the\n"
	.string "deep woods.\p"
	.string "He's... a specialist.\p"
	.string "A bit green, but the sharpest mind we've\n"
	.string "got.\p"
	.string "Let's all make sure we get back in one\n"
	.string "piece.\p"
	.string "Go ahead, introduce yourself.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_10:
# 188 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "David$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_11:
# 189 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_12:
# 196 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "It's... loud out there.\p"
	.string "Lots of data.\p"
	.string "All the agitated Pokémon are creating\n"
	.string "chaotic energy spikes.\p"
	.string "But their pattern is random.\p"
	.string "The deforestation signal... that will be\n"
	.string "a steady, repeating pattern.\p"
	.string "A clean signal in the noise.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_13:
# 202 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "I'll find the signal.\p"
	.string "That's what I'm good at.\p"
	.string "Just...\p"
	.string "just keep the angry Beedrill away from\n"
	.string "me.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_14:
# 207 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Nash.\n"
	.string "David.\p"
	.string "Go downstairs and prepare the truck.\p"
	.string "Keep me updated on your progress.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_15:
# 224 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Don't be afraid.\p"
	.string "Nash & David are the best people I got.\p"
	.string "Make sure you heal your Pokémon and\n"
	.string "stack up on some potions, the forest\l"
	.string "can be a very harsh place.\p"
	.string "I'll keep in contact trough the radio.\p"
	.string "Nash and David should be ready any\n"
	.string "minute now.$"
