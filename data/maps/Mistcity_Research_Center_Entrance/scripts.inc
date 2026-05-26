Mistcity_Research_Center_Entrance_MapScripts::
	.byte 0


Mistcity_Research_Center_Entrance_Rangers_Slaking::
# 4 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 5 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 6 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Rangers_Slaking_2
Mistcity_Research_Center_Entrance_Rangers_Slaking_1:
# 10 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Rangers_Slaking_5
Mistcity_Research_Center_Entrance_Rangers_Slaking_4:
# 14 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 15 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Rangers_Slaking_2:
# 7 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0
# 8 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_1
	goto Mistcity_Research_Center_Entrance_Rangers_Slaking_1

Mistcity_Research_Center_Entrance_Rangers_Slaking_5:
# 11 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0
# 12 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_2
	goto Mistcity_Research_Center_Entrance_Rangers_Slaking_4


Mistcity_Research_Center_Entrance_Rangers_Shiftry::
# 19 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 20 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 21 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Rangers_Shiftry_2
Mistcity_Research_Center_Entrance_Rangers_Shiftry_1:
# 25 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Rangers_Shiftry_5
Mistcity_Research_Center_Entrance_Rangers_Shiftry_4:
# 29 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 30 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Rangers_Shiftry_2:
# 22 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0
# 23 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Rangers_Shiftry_Text_0
	goto Mistcity_Research_Center_Entrance_Rangers_Shiftry_1

Mistcity_Research_Center_Entrance_Rangers_Shiftry_5:
# 26 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0
# 27 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Rangers_Shiftry_Text_1
	goto Mistcity_Research_Center_Entrance_Rangers_Shiftry_4


Mistcity_Research_Center_Entrance_Rangers_Paras::
# 34 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 35 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 36 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Rangers_Paras_2
Mistcity_Research_Center_Entrance_Rangers_Paras_1:
# 40 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Rangers_Paras_5
Mistcity_Research_Center_Entrance_Rangers_Paras_4:
# 44 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 45 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Rangers_Paras_2:
# 37 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0
# 38 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Rangers_Paras_Text_0
	goto Mistcity_Research_Center_Entrance_Rangers_Paras_1

Mistcity_Research_Center_Entrance_Rangers_Paras_5:
# 41 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0
# 42 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Rangers_Paras_Text_1
	goto Mistcity_Research_Center_Entrance_Rangers_Paras_4


Mistcity_Research_Center_Entrance_Rangers_Tropius::
# 49 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 50 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 51 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Rangers_Tropius_2
Mistcity_Research_Center_Entrance_Rangers_Tropius_1:
# 55 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Rangers_Tropius_5
Mistcity_Research_Center_Entrance_Rangers_Tropius_4:
# 59 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 60 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Rangers_Tropius_2:
# 52 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0
# 53 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Rangers_Tropius_Text_0
	goto Mistcity_Research_Center_Entrance_Rangers_Tropius_1

Mistcity_Research_Center_Entrance_Rangers_Tropius_5:
# 56 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0
# 57 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Rangers_Tropius_Text_1
	goto Mistcity_Research_Center_Entrance_Rangers_Tropius_4


Mistcity_Research_Center_Entrance_Rangers_Trucks::
# 64 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 65 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 66 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Rangers_Trucks_2
Mistcity_Research_Center_Entrance_Rangers_Trucks_1:
# 70 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Rangers_Trucks_5
Mistcity_Research_Center_Entrance_Rangers_Trucks_4:
# 74 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 75 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Rangers_Trucks_2:
# 67 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0
# 68 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Rangers_Trucks_Text_0
	goto Mistcity_Research_Center_Entrance_Rangers_Trucks_1

Mistcity_Research_Center_Entrance_Rangers_Trucks_5:
# 71 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0
# 72 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Rangers_Trucks_Text_1
	goto Mistcity_Research_Center_Entrance_Rangers_Trucks_4


Mistcity_Research_Center_Entrance_Scientist_Mist::
# 79 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 80 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 81 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0
# 82 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Mist_Text_1
# 83 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 84 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return


Mistcity_Research_Center_Entrance_Scientist_Guard::
# 88 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 89 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 90 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0
# 91 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Guard_Text_0
# 92 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 93 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return


Mistcity_Research_Center_Entrance_Scientist_Paras::
# 97 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 98 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 99 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Paras_2
Mistcity_Research_Center_Entrance_Scientist_Paras_1:
# 103 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Paras_5
Mistcity_Research_Center_Entrance_Scientist_Paras_4:
# 107 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 108 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 3, Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0
# 109 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 110 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Scientist_Paras_2:
# 100 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0
# 101 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Paras_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Paras_1

Mistcity_Research_Center_Entrance_Scientist_Paras_5:
# 104 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0
# 105 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Paras_Text_1
	goto Mistcity_Research_Center_Entrance_Scientist_Paras_4


Mistcity_Research_Center_Entrance_Scientist_Tropius::
# 114 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 115 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 116 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Tropius_2
Mistcity_Research_Center_Entrance_Scientist_Tropius_1:
# 120 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Tropius_5
Mistcity_Research_Center_Entrance_Scientist_Tropius_4:
# 124 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 125 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 12, Mistcity_Research_Center_Entrance_Scientist_Tropius_Movement_0
# 126 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 127 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Scientist_Tropius_2:
# 117 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0
# 118 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Tropius_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Tropius_1

Mistcity_Research_Center_Entrance_Scientist_Tropius_5:
# 121 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0
# 122 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Tropius_Text_1
	goto Mistcity_Research_Center_Entrance_Scientist_Tropius_4


Mistcity_Research_Center_Entrance_Scientist_Shiftry::
# 131 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 132 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 133 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Shiftry_2
Mistcity_Research_Center_Entrance_Scientist_Shiftry_1:
# 137 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Shiftry_5
Mistcity_Research_Center_Entrance_Scientist_Shiftry_4:
# 141 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 142 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 4, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 143 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 144 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Scientist_Shiftry_2:
# 134 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0
# 135 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Shiftry_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Shiftry_1

Mistcity_Research_Center_Entrance_Scientist_Shiftry_5:
# 138 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0
# 139 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Shiftry_Text_1
	goto Mistcity_Research_Center_Entrance_Scientist_Shiftry_4


Mistcity_Research_Center_Entrance_Scientist_Slaking::
# 148 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 149 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 150 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Slaking_2
Mistcity_Research_Center_Entrance_Scientist_Slaking_1:
# 154 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Slaking_5
Mistcity_Research_Center_Entrance_Scientist_Slaking_4:
# 158 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 159 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 2, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 160 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 161 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_Scientist_Slaking_2:
# 151 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0
# 152 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Slaking_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Slaking_1

Mistcity_Research_Center_Entrance_Scientist_Slaking_5:
# 155 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0
# 156 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Scientist_Slaking_Text_1
	goto Mistcity_Research_Center_Entrance_Scientist_Slaking_4


Mistcity_Research_Center_Entrance_Daan_RescueMission::
# 165 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 166 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setflag FLAG_DISABLE_FOLLOWER_POKEMON
# 167 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	hidefollower
# 168 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	playse SE_PIN
# 169 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 19, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_0
# 170 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 171 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_1
# 172 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
# 173 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_1, MSGBOX_AUTOCLOSE
# 174 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 175 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_2
# 176 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 177 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 19, Mistcity_Research_Center_Entrance_Scientist_Tropius_Movement_0
# 178 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 179 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
# 180 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_2, MSGBOX_AUTOCLOSE
# 181 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 182 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 19, Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0
# 183 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_1
# 184 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 185 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
# 186 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_3, MSGBOX_YESNO
# 187 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 188 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Mistcity_Research_Center_Entrance_Daan_RescueMission_2
Mistcity_Research_Center_Entrance_Daan_RescueMission_1:
# 192 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Mistcity_Research_Center_Entrance_Daan_RescueMission_5
Mistcity_Research_Center_Entrance_Daan_RescueMission_4:
# 196 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 197 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_3
# 198 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 21, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 201 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 202 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 19, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_3
# 203 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_4
# 204 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 205 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 206 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
# 207 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_6, MSGBOX_AUTOCLOSE
# 208 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 209 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_5
# 210 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 211 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_7
# 212 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_8, MSGBOX_AUTOCLOSE
# 213 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 214 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Scientist_Tropius_Movement_0
# 215 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 216 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	delay 40
# 217 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 218 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 219 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_7
# 220 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_9, MSGBOX_AUTOCLOSE
# 221 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 222 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_6
# 223 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 224 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_7
# 225 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 226 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_10
# 227 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_11, MSGBOX_AUTOCLOSE
# 228 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 229 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	delay 40
# 230 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0
# 231 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 232 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	delay 60
# 233 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_10
# 234 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_12, MSGBOX_AUTOCLOSE
# 235 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 236 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	delay 60
# 237 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
# 238 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 239 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_10
# 240 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_13, MSGBOX_AUTOCLOSE
# 241 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 242 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_8
# 243 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 244 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
# 245 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_14
# 246 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 247 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 20, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_9
# 248 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 249 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	removeobject 20
# 250 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 21, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_10
# 251 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 252 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	removeobject 21
# 253 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 18, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_11
# 254 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 255 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	removeobject 18
# 256 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 257 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setflag FLAG_HIDE_NASH_DAVID
# 258 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement 19, Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0
# 259 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_1
# 260 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmovement
# 261 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
# 262 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_15
# 263 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 264 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER, 1
# 265 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setflag FLAG_NASH_ENTRANCE_RESEARCH_CENTER1
# 266 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	clearflag FLAG_DISABLE_FOLLOWER_POKEMON
# 267 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	end

Mistcity_Research_Center_Entrance_Daan_RescueMission_2:
# 189 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
# 190 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_4, MSGBOX_AUTOCLOSE
	goto Mistcity_Research_Center_Entrance_Daan_RescueMission_1

Mistcity_Research_Center_Entrance_Daan_RescueMission_5:
# 193 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
# 194 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_5, MSGBOX_AUTOCLOSE
	goto Mistcity_Research_Center_Entrance_Daan_RescueMission_4


Mistcity_Research_Center_Entrance_LeadScientist::
# 272 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 273 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 274 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_LeadScientist_2
Mistcity_Research_Center_Entrance_LeadScientist_1:
# 278 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_LeadScientist_5
Mistcity_Research_Center_Entrance_LeadScientist_4:
# 282 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 283 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_LeadScientist_2:
# 275 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
# 276 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_LeadScientist_Text_0
	goto Mistcity_Research_Center_Entrance_LeadScientist_1

Mistcity_Research_Center_Entrance_LeadScientist_5:
# 279 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
# 280 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_LeadScientist_Text_1
	goto Mistcity_Research_Center_Entrance_LeadScientist_4


Mistcity_Research_Center_Entrance_ScientistPlatform::
# 287 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	lock
# 288 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	faceplayer
# 289 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_ScientistPlatform_2
Mistcity_Research_Center_Entrance_ScientistPlatform_1:
# 293 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_ScientistPlatform_5
Mistcity_Research_Center_Entrance_ScientistPlatform_4:
# 297 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	waitmessage
# 298 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	release
	return

Mistcity_Research_Center_Entrance_ScientistPlatform_2:
# 290 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0
# 291 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_ScientistPlatform_Text_0
	goto Mistcity_Research_Center_Entrance_ScientistPlatform_1

Mistcity_Research_Center_Entrance_ScientistPlatform_5:
# 294 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	setspeaker Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0
# 295 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	msgbox Mistcity_Research_Center_Entrance_ScientistPlatform_Text_1
	goto Mistcity_Research_Center_Entrance_ScientistPlatform_4


# 108 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0:
# 108 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_right
	step_end

# 125 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Scientist_Tropius_Movement_0:
# 125 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_up
	step_end

# 142 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0:
# 142 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_down
	step_end

# 169 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_0:
# 169 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_right
# 169 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	emote_exclamation_mark
	step_end

# 171 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_1:
# 171 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_left
	step_end

# 175 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_2:
# 175 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_left
# 175 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_left
# 175 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_left
# 175 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_up
	step_end

# 197 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_3:
# 197 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_right
# 197 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_right
# 197 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_up
	step_end

# 203 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_4:
# 203 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_right
# 203 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 203 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_down
	step_end

# 209 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_5:
# 209 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_down
	step_end

# 222 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_6:
# 222 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 222 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_down
	step_end

# 224 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_7:
# 224 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_down
# 224 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_right
# 224 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_down
	step_end

# 242 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_8:
# 242 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_left
# 242 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 242 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	face_down
	step_end

# 247 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_9:
# 247 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 247 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
	step_end

# 250 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_10:
# 250 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_left
# 250 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 250 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
	step_end

# 253 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_11:
# 253 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_right
# 253 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
# 253 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	walk_up
	step_end

Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0:
# 7 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Ranger$"

Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_1:
# 8 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "It is finally out cold.\p"
	.string "It stopped pressing its ear to the\n"
	.string "floor about an hour ago.\p"
	.string "To be honest, seeing it snore that\n"
	.string "loudly is a huge relief.$"

Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_2:
# 12 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "This Slaking usually sleeps eighteen\n"
	.string "hours a day, but it keeps pressing its\l"
	.string "ear to the mud like it hears something\l"
	.string "moving deep underground.$"

Mistcity_Research_Center_Entrance_Rangers_Shiftry_Text_0:
# 23 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "The howling has completely stopped.\p"
	.string "It is just grooming its leaf fans now.\p"
	.string "It seems whatever was invading its\n"
	.string "territory in the deep woods is gone.$"

Mistcity_Research_Center_Entrance_Rangers_Shiftry_Text_1:
# 27 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "I've never seen a Shiftry act this\n"
	.string "aggressive, but it keeps staring toward\l"
	.string "the deep woods and howling as if an\l"
	.string "intruder is tearing up its home.$"

Mistcity_Research_Center_Entrance_Rangers_Paras_Text_0:
# 38 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "The air is finally clear.\p"
	.string "The defensive spore release has\n"
	.string "stopped.\p"
	.string "It seems the 'seismic activity' it was\n"
	.string "sensing has calmed down.$"

Mistcity_Research_Center_Entrance_Rangers_Paras_Text_1:
# 42 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "The mushroom on this Parasect's back\n"
	.string "has been releasing defensive spores all\l"
	.string "morning, a reaction usually only\l"
	.string "triggered by heavy seismic activity.$"

Mistcity_Research_Center_Entrance_Rangers_Tropius_Text_0:
# 53 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "It is happily munching on some Nanab\n"
	.string "berries now.\p"
	.string "That metallic grinding sound must have\n"
	.string "ceased, because this big guy is totally\l"
	.string "relaxed again.$"

Mistcity_Research_Center_Entrance_Rangers_Tropius_Text_1:
# 57 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "We found this poor Tropius tangled in\n"
	.string "the lower branches; it was terrified of\l"
	.string "a loud, metallic grinding sound echoing\l"
	.string "from the restricted zone.$"

Mistcity_Research_Center_Entrance_Rangers_Trucks_Text_0:
# 68 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "The distress signals have flatlined.\p"
	.string "We are actually parking the transport\n"
	.string "trucks for the first time in days.\p"
	.string "Sounds like peace has returned to the\n"
	.string "forest core.$"

Mistcity_Research_Center_Entrance_Rangers_Trucks_Text_1:
# 72 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "We've had to mobilize all our rescue\n"
	.string "trucks just to keep up with the sheer\l"
	.string "volume of distress signals coming from\l"
	.string "the forest core.$"

Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0:
# 81 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Scientist$"

Mistcity_Research_Center_Entrance_Scientist_Mist_Text_1:
# 82 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "The deep cloud forest is a biological\n"
	.string "marvel, a unique ecosystem where the\l"
	.string "perpetual mist allows rare and ancient\l"
	.string "Pokémon species to thrive in isolation.$"

Mistcity_Research_Center_Entrance_Scientist_Guard_Text_0:
# 91 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "I can't let you through; the upper level\n"
	.string "is strictly reserved for our lead\l"
	.string "researchers to analyze the sensitive\l"
	.string "data coming from the forest.$"

Mistcity_Research_Center_Entrance_Scientist_Paras_Text_0:
# 101 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Incredible.\p"
	.string "The bioluminescence on the Tochukaso\n"
	.string "mushroom is fading rapidly.\p"
	.string "It has returned to its natural, dull\n"
	.string "color.\p"
	.string "That 'sonar' signal that was irritating\n"
	.string "the fungus seems to have been cut off\l"
	.string "completely.\p"
	.string "Whatever you did down there silenced\n"
	.string "the noise.$"

Mistcity_Research_Center_Entrance_Scientist_Paras_Text_1:
# 105 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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
# 118 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Just look at it.\p"
	.string "It is preening its wings and growling\n"
	.string "softly.\p"
	.string "The sheer terror is gone.\p"
	.string "If the atmospheric disturbance has\n"
	.string "truly dissipated, this one should be\l"
	.string "ready to return to Whisperwood Grove\l"
	.string "very soon.\p"
	.string "It finally feels safe to fly.$"

Mistcity_Research_Center_Entrance_Scientist_Tropius_Text_1:
# 122 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "This poor thing was part of a whole herd\n"
	.string "we saw fleeing the Whisperwood Grove\l"
	.string "area last week.\p"
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
# 135 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "The Shiftry has stopped staring at the\n"
	.string "floor.\p"
	.string "It is looking out the window towards\n"
	.string "the treeline.\p"
	.string "Its internal compass seems to have\n"
	.string "realigned.\p"
	.string "The magnetic interference that was\n"
	.string "scrambling its senses has vanished.\p"
	.string "It is back to being the master of the\n"
	.string "forest.$"

Mistcity_Research_Center_Entrance_Scientist_Shiftry_Text_1:
# 139 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Shiftry are masters of the forest,\n"
	.string "moving like ghosts through the trees.\p"
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
# 152 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Shh... keep your voice down.\p"
	.string "For the first time in weeks, the Slaking\n"
	.string "is preparing to sleep.\p"
	.string "That low-frequency hum must have\n"
	.string "stopped, because its heart rate is\l"
	.string "perfectly slow and steady.\p"
	.string "It is finally back to doing what it does\n"
	.string "best... absolutely nothing.$"

Mistcity_Research_Center_Entrance_Scientist_Slaking_Text_1:
# 156 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "It's the strangest thing.\p"
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
# 172 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Lead Scientist$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_1:
# 173 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Hold it right there.\p"
	.string "You're a skilled trainer, right?\p"
	.string "...Good. We have a serious situation.\p"
	.string "Join us.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_2:
# 180 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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
# 186 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Can you do it?$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_4:
# 190 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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
	.string "trying to tear the heart out of the\l"
	.string "forest.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_5:
# 194 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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
	.string "trying to tear the heart out of the\l"
	.string "forest.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_6:
# 207 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "I want to introduce you to two of my\n"
	.string "people, {COLOR BLUE}Nash{COLOR DARK_GRAY} & {COLOR GREEN}David{COLOR DARK_GRAY}.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_7:
# 211 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Nash$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_8:
# 212 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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
# 220 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "This is the kid's first time out in the\n"
	.string "deep woods.\p"
	.string "He's... a specialist.\p"
	.string "A bit green, but the sharpest mind we've\n"
	.string "got.\p"
	.string "Let's all make sure we get back in one\n"
	.string "piece.\p"
	.string "Go ahead, introduce yourself.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_10:
# 226 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "David$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_11:
# 227 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
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
# 234 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "It's... loud out there.\p"
	.string "Lots of data.\p"
	.string "All the agitated Pokémon are creating\n"
	.string "chaotic energy spikes.\p"
	.string "But their pattern is random.\p"
	.string "The deforestation signal... that will be\n"
	.string "a steady, repeating pattern.\p"
	.string "A clean signal in the noise.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_13:
# 240 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "I'll find the signal.\p"
	.string "That's what I'm good at.\p"
	.string "Just...\p"
	.string "just keep the angry Beedrill away from\n"
	.string "me.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_14:
# 245 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Nash.\n"
	.string "David.\p"
	.string "Go downstairs and prepare the truck.\p"
	.string "Keep me updated on your progress.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_15:
# 262 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Don't be afraid.\p"
	.string "Nash & David are the best people I got.\p"
	.string "Make sure you heal your Pokémon and\n"
	.string "stack up on some potions, the forest\l"
	.string "can be a very harsh place.\p"
	.string "I'll keep in contact trough the radio.\p"
	.string "Nash and David should be ready any\n"
	.string "minute now.$"

Mistcity_Research_Center_Entrance_LeadScientist_Text_0:
# 276 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "You actually did it.\p"
	.string "Daan is safe, and the seismic\n"
	.string "disturbances have completely ceased.\p"
	.string "Nash and David said you handled\n"
	.string "yourself like a veteran out there.\p"
	.string "To think that strange group was\n"
	.string "operating right under our noses...\p"
	.string "We owe you a great debt, {PLAYER}.\p"
	.string "The forest can finally heal.$"

Mistcity_Research_Center_Entrance_LeadScientist_Text_1:
# 280 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "Don't be afraid.\p"
	.string "Nash & David are the best people we\n"
	.string "got.\p"
	.string "Make sure you heal your Pokémon and\n"
	.string "stack up on some potions, the forest\l"
	.string "can be a very harsh place.\p"
	.string "I'll keep in contact trough the radio.\p"
	.string "Nash and David are waiting for you\n"
	.string "downstairs.$"

Mistcity_Research_Center_Entrance_ScientistPlatform_Text_0:
# 291 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "The anomaly just... vanished.\p"
	.string "Look at the monitor.\p"
	.string "The interference pattern flatlined\n"
	.string "some time ago.\p"
	.string "The background noise is back to normal\n"
	.string "ambient levels.\p"
	.string "It is like someone just walked up to the\n"
	.string "source and pulled the plug.$"

Mistcity_Research_Center_Entrance_ScientistPlatform_Text_1:
# 295 "data/maps/Mistcity_Research_Center_Entrance/scripts.pory"
	.string "This doesn't make any sense.\p"
	.string "The seismic needles are jumping every\n"
	.string "thirty seconds exactly.\p"
	.string "Nature isn't this rhythmic.\p"
	.string "It looks less like tectonic movement\n"
	.string "and more like... heavy machinery?\p"
	.string "Whatever it is, it is shaking the very\n"
	.string "foundation of the forest.$"
