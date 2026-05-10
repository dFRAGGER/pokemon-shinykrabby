LionsarchCity_Indoor_PeterBasementParty_MapScripts::
	.byte 0


DiscoBasement_DJ_Peter::
# 6 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lock
# 7 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 8 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 10 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_DELIVERED_ALIS_PACKAGE_TO_PETER, DiscoBasement_DJ_Peter_2
	checkitem ITEM_SOOT_SACK, 1
# 0 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne DiscoBasement_DJ_Peter_3
# 54 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 55 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_12
DiscoBasement_DJ_Peter_1:
# 57 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 58 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	release
	return

DiscoBasement_DJ_Peter_2:
# 12 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_RECEIVED_CLIMBING_ROPE, DiscoBasement_DJ_Peter_7
# 17 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 18 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_2
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_3:
# 22 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 23 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_3
# 24 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 25 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 26 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_4
# 27 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 28 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	removeitem ITEM_SOOT_SACK, 1
# 29 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_DELIVERED_ALIS_PACKAGE_TO_PETER
# 30 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 31 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_5
# 32 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 33 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 34 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_6
# 35 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 36 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 37 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_7
# 38 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 39 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 40 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_8
# 41 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 42 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 43 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_9
# 44 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 45 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	giveitem ITEM_CLIMBING_ROPE
# 46 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_RECEIVED_CLIMBING_ROPE
# 47 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 48 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_10
# 49 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 50 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 51 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_11
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_7:
# 13 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 14 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_1
	goto DiscoBasement_DJ_Peter_1


DiscoBasement_Guard_DJStage::
# 63 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lock
# 64 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 65 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 66 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 67 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_BASEMENT_DJ_STAGE_ACCESS, DiscoBasement_Guard_DJStage_2
	checkitem ITEM_SOOT_SACK, 1
# 0 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne DiscoBasement_Guard_DJStage_3
# 117 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 118 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_6
DiscoBasement_Guard_DJStage_1:
# 120 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 121 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	release
	return

DiscoBasement_Guard_DJStage_2:
# 68 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_1
# 69 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_0
# 70 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq DiscoBasement_Guard_DJStage_17
DiscoBasement_Guard_DJStage_15:
# 75 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_14
DiscoBasement_Guard_DJStage_12:
# 80 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_11
DiscoBasement_Guard_DJStage_7:
# 85 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
	goto DiscoBasement_Guard_DJStage_1

DiscoBasement_Guard_DJStage_3:
# 87 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 88 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_2
# 89 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 90 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 91 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_3
# 92 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 93 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 94 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_4
# 95 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 96 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_BASEMENT_DJ_STAGE_ACCESS
# 97 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 98 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_5
# 99 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_0
# 100 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq DiscoBasement_Guard_DJStage_30
DiscoBasement_Guard_DJStage_28:
# 105 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_27
DiscoBasement_Guard_DJStage_25:
# 110 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_24
DiscoBasement_Guard_DJStage_20:
# 115 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
	goto DiscoBasement_Guard_DJStage_1

DiscoBasement_Guard_DJStage_8:
# 71 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_1
# 72 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 73 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_9:
# 76 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_3
# 77 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 78 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_10:
# 81 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_4
# 82 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 83 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_11:
# 80 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq DiscoBasement_Guard_DJStage_10
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_14:
# 75 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq DiscoBasement_Guard_DJStage_9
	goto DiscoBasement_Guard_DJStage_12

DiscoBasement_Guard_DJStage_17:
# 70 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq DiscoBasement_Guard_DJStage_8
	goto DiscoBasement_Guard_DJStage_15

DiscoBasement_Guard_DJStage_21:
# 101 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_1
# 102 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 103 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_22:
# 106 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_3
# 107 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 108 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_23:
# 111 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_4
# 112 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 113 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_24:
# 110 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq DiscoBasement_Guard_DJStage_23
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_27:
# 105 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq DiscoBasement_Guard_DJStage_22
	goto DiscoBasement_Guard_DJStage_25

DiscoBasement_Guard_DJStage_30:
# 100 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq DiscoBasement_Guard_DJStage_21
	goto DiscoBasement_Guard_DJStage_28


DiscoBasement_Guard_Tunnel::
# 126 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 127 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 128 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 129 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_1
# 130 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 131 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 132 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_2
# 133 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 134 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 135 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_3
# 136 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 137 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 138 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_4, MSGBOX_AUTOCLOSE
# 139 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 140 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_Tunnel_Movement_0
# 141 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 143 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Guard_Machoke::
# 148 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 149 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 150 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Machoke_Text_0
# 151 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Machoke_Text_1
# 152 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 153 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Guard_Staring::
# 158 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 159 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 160 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Staring_Text_0
# 161 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Staring_Text_1
# 162 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 163 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Giel::
# 167 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lock
# 168 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 169 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 170 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 171 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_GIEL_LEFT_BASEMENT, DiscoBasement_Giel_2
# 176 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 177 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_1
# 178 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 179 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 180 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_2
# 181 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 183 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 7, DiscoBasement_Giel_Movement_0
# 184 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 185 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 16
	goto_if_eq DiscoBasement_Giel_6
DiscoBasement_Giel_4:
# 189 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	delay 30
# 190 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 191 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_3
# 192 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 193 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 194 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_4
# 195 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 197 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	playse SE_PIN
# 198 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 4, DiscoBasement_Giel_Movement_2
# 199 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 200 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker NULL
# 201 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_5
# 202 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 203 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	playse SE_PIN
# 204 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 5, DiscoBasement_Giel_Movement_2
# 205 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 206 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_6
# 207 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 208 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	playse SE_PIN
# 209 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 6, DiscoBasement_Giel_Movement_2
# 210 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 211 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_7
# 212 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 214 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 216 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 217 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 218 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_8
# 219 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 220 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 221 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_9
# 222 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 223 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 224 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_10
# 225 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 227 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 17
	goto_if_eq DiscoBasement_Giel_11
DiscoBasement_Giel_9:
# 230 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Giel_Movement_4
# 231 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 7, DiscoBasement_Giel_Movement_5
# 232 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 233 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_GIEL_LEFT_BASEMENT
# 234 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	removeobject 7
# 236 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker NULL
# 237 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_11
# 238 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 239 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 4, DiscoBasement_Giel_Movement_6
# 240 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 5, DiscoBasement_Giel_Movement_6
# 241 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 6, DiscoBasement_Giel_Movement_6
# 242 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 243 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	release
	return

DiscoBasement_Giel_2:
# 173 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	end

DiscoBasement_Giel_5:
# 186 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Giel_Movement_1
	goto DiscoBasement_Giel_4

DiscoBasement_Giel_6:
# 185 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq DiscoBasement_Giel_5
	goto DiscoBasement_Giel_4

DiscoBasement_Giel_10:
# 228 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Giel_Movement_3
	goto DiscoBasement_Giel_9

DiscoBasement_Giel_11:
# 227 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq DiscoBasement_Giel_10
	goto DiscoBasement_Giel_9


DiscoBasement_Dancer_1::
# 247 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 248 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 249 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Dancer_1_Text_0
# 250 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Dancer_2::
# 254 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 255 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 256 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Dancer_2_Text_0
# 257 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Dancer_3::
# 261 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 262 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 263 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Dancer_3_Text_0
# 264 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Chillaxer::
# 268 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 269 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 270 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Chillaxer_Text_0
# 271 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_AliFriend::
# 275 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 276 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 277 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_AliFriend_Text_0
# 278 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Oldwoman::
# 282 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 283 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 284 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Oldwoman_Text_0
# 285 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_DiscoBall::
# 289 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 290 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DiscoBall_Text_0
# 291 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_SpeakerSystem::
# 295 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 296 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_SpeakerSystem_Text_0
# 297 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_VinylCollection::
# 301 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 302 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_VinylCollection_Text_0
# 303 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_SecretEntrance::
# 307 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 308 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_SecretEntrance_Text_0
# 309 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


# 69 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_0:
# 69 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
# 69 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_left
	step_end

# 71 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_1:
# 71 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
# 71 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_up
	step_end

# 73 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_2:
# 73 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_left
# 73 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_down
	step_end

# 76 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_3:
# 76 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_up
# 76 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_up
	step_end

# 81 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_4:
# 81 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 81 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
	step_end

# 140 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_Tunnel_Movement_0:
# 140 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
	step_end

# 183 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_0:
# 183 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_left
	step_end

# 186 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_1:
# 186 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 186 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
# 186 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_left
	step_end

# 198 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_2:
# 198 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	emote_exclamation_mark
# 198 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_right
	step_end

# 228 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_3:
# 228 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	jump_right
# 228 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_down
	step_end

# 230 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_4:
# 230 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_down
	step_end

# 231 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_5:
# 231 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 231 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 231 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 231 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 231 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
	step_end

# 239 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_6:
# 239 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_up
	step_end

DiscoBasement_DJ_Peter_Text_0:
# 8 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "DJ Peter$"

DiscoBasement_DJ_Peter_Text_1:
# 14 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Welcome back to the GROOVE ZONE!\p"
	.string "Treat those old boots well, yeah?\p"
	.string "And hey - whenever you're back, my\n"
	.string "door's always open.\p"
	.string "Peter remembers the ones who do him\n"
	.string "right.$"

DiscoBasement_DJ_Peter_Text_2:
# 18 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey, thanks again for the delivery!\p"
	.string "Don't forget you've still got those\n"
	.string "boots of mine!$"

DiscoBasement_DJ_Peter_Text_3:
# 23 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Wait... that smell...\p"
	.string "Is that what I think it is?$"

DiscoBasement_DJ_Peter_Text_4:
# 26 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "You brought the goods from Ali!\p"
	.string "My man! This is exactly what I needed!\p"
	.string "The party can really get started now!$"

DiscoBasement_DJ_Peter_Text_5:
# 31 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Let me return the favor - first round\n"
	.string "of dancing is on the house!$"

DiscoBasement_DJ_Peter_Text_6:
# 34 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "...\p"
	.string "No?\p"
	.string "You don't want to dance?\p"
	.string "You've got that look.\p"
	.string "Someone with places to be.\p"
	.string "Tough crowd!$"

DiscoBasement_DJ_Peter_Text_7:
# 37 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Alright, let me return the favor another\n"
	.string "way.\p"
	.string "When I first rolled into Lionsarch, I\n"
	.string "had nothing.\p"
	.string "No gig, no place, no plan.\p"
	.string "Just a pair of boots and a whole lot of\n"
	.string "nerve.$"

DiscoBasement_DJ_Peter_Text_8:
# 40 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Nights I'd dance in 'em right here on\n"
	.string "this floor.\p"
	.string "Days I'd climb the Lion Mountains in the\n"
	.string "same pair.\p"
	.string "Up those rocky ridges before the sun\n"
	.string "got too high.\p"
	.string "Same boots. Same rhythm. Different\n"
	.string "terrain.$"

DiscoBasement_DJ_Peter_Text_9:
# 43 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I got new ones eventually.\p"
	.string "But these old ones deserve someone\n"
	.string "who'll actually use 'em.\p"
	.string "Here. Take 'em.\p"
	.string "They'll get you places.$"

DiscoBasement_DJ_Peter_Text_10:
# 48 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Come back sometime, yeah?\p"
	.string "There's more down here than just good\n"
	.string "music.\p"
	.string "You talk to the right people... you'd be\n"
	.string "surprised what doors open.$"

DiscoBasement_DJ_Peter_Text_11:
# 51 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Now get out there.\p"
	.string "And remember... stay funky!$"

DiscoBasement_DJ_Peter_Text_12:
# 55 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Welcome to the GROOVE ZONE!\p"
	.string "This is where the real party happens!\p"
	.string "Old school disco, baby!\p"
	.string "None of that modern stuff - just pure,\n"
	.string "unadulterated FUNK!$"

DiscoBasement_Guard_DJStage_Text_0:
# 66 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Bouncer Carlo$"

DiscoBasement_Guard_DJStage_Text_1:
# 68 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Alright, you're cool.\p"
	.string "Our VIPs can go where ever they want.\p"
	.string "Enjoy the party!$"

DiscoBasement_Guard_DJStage_Text_2:
# 88 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey, hold up.\p"
	.string "Nobody gets past me without clearance.\p"
	.string "...$"

DiscoBasement_Guard_DJStage_Text_3:
# 91 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Wait... is that Ali's stash you're\n"
	.string "carrying?\p"
	.string "I can smell it from here!\p"
	.string "Damn, that's the good stuff!$"

DiscoBasement_Guard_DJStage_Text_4:
# 94 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Alright, you're clearly here on business.\p"
	.string "Peter's gonna want to see you.\p"
	.string "Go on through, VIP access granted!$"

DiscoBasement_Guard_DJStage_Text_5:
# 98 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Tell Peter I said what's up!$"

DiscoBasement_Guard_DJStage_Text_6:
# 118 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey, VIP area only past this point.\p"
	.string "No entry without clearance from the\n"
	.string "boss.\p"
	.string "You want in? Talk to someone who knows\n"
	.string "someone.$"

DiscoBasement_Guard_Tunnel_Text_0:
# 128 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Bouncer Paolo$"

DiscoBasement_Guard_Tunnel_Text_1:
# 129 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "You see that old tunnel over there?\p"
	.string "It used to run all the way to the Iron\n"
	.string "Factory.\p"
	.string "Back in the day, it was a smuggling\n"
	.string "route.\p"
	.string "Direct link from the harbor, if you know\n"
	.string "what I mean.$"

DiscoBasement_Guard_Tunnel_Text_2:
# 132 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Used to move all kinds of...\n"
	.string "'merchandise' through there.\p"
	.string "No customs, no questions asked.\p"
	.string "The good old days, you know?$"

DiscoBasement_Guard_Tunnel_Text_3:
# 135 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "But then the Faculty took over the\n"
	.string "factory.\p"
	.string "They sealed the whole thing up.\p"
	.string "Now only Peter and the Faculty have the\n"
	.string "keys.\p"
	.string "Rest of us are locked out for good.\p"
	.string "Peter told me to not let anyone near it,\n"
	.string "so... here I am, doing my part to keep\l"
	.string "the secrets safe.\p"
	.string "Even VIPs can't get in there, sorry.$"

DiscoBasement_Guard_Tunnel_Text_4:
# 138 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "It's a shame, really.\p"
	.string "That tunnel had some history.\p"
	.string "Now it's just another thing the Faculty\n"
	.string "controls.$"

DiscoBasement_Guard_Machoke_Text_0:
# 150 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Machoke$"

DiscoBasement_Guard_Machoke_Text_1:
# 151 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "MACHOKE! CHOKE!$"

DiscoBasement_Guard_Staring_Text_0:
# 160 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Bouncer Marco$"

DiscoBasement_Guard_Staring_Text_1:
# 161 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Man, look at those dancers go!\p"
	.string "Peter really knows how to throw a\n"
	.string "party!\p"
	.string "I could watch them dance all night!$"

DiscoBasement_Giel_Text_0:
# 170 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Giel$"

DiscoBasement_Giel_Text_1:
# 177 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Oh hey, it's you!\p"
	.string "Small world, right?\p"
	.string "I got here way faster than you.\p"
	.string "I know people, you see. Connections.$"

DiscoBasement_Giel_Text_2:
# 180 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "When you mentioned Lionsarch City back\n"
	.string "in Siltroot Town, I got inspired.\p"
	.string "Thought I'd check out the scene here.\p"
	.string "Maybe meet some intellectuals who\n"
	.string "appreciate fine conversation.$"

DiscoBasement_Giel_Text_3:
# 191 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "See those lovely ladies over there?\p"
	.string "I've been trying to impress them with my\n"
	.string "knowledge.\p"
	.string "Hey Ladies!!\p"
	.string "Did you know about the historical\n"
	.string "conflicts in the Kanto region?\p"
	.string "Fascinating stuff, really.$"

DiscoBasement_Giel_Text_4:
# 194 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "The war between Celadon and Saffron...\p"
	.string "The trade disputes of Vermilion\n"
	.string "Harbor...\p"
	.string "Classic historical drama!$"

DiscoBasement_Giel_Text_5:
# 201 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Ugh, this guy again?\p"
	.string "Nobody wants to hear about ancient\n"
	.string "wars!\p"
	.string "We're trying to DANCE here!$"

DiscoBasement_Giel_Text_6:
# 206 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Seriously, take the hint!\p"
	.string "You've been hovering around us all\n"
	.string "night!\p"
	.string "So creepy!$"

DiscoBasement_Giel_Text_7:
# 211 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Security! Can someone get this weirdo\n"
	.string "away from us?!$"

DiscoBasement_Giel_Text_8:
# 218 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "FINE!\p"
	.string "I see how it is!\p"
	.string "You just can't appreciate intellectual\n"
	.string "discourse!\p"
	.string "This is what's wrong with society today!$"

DiscoBasement_Giel_Text_9:
# 221 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Women just don't appreciate a man who\n"
	.string "understands history!\p"
	.string "I try to share my knowledge and THIS is\n"
	.string "the thanks I get?!$"

DiscoBasement_Giel_Text_10:
# 224 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I'm done with this city!\p"
	.string "The disco scene here is TERRIBLE\n"
	.string "anyway!\p"
	.string "I'm going back to Hezik City where\n"
	.string "people actually have CULTURE!$"

DiscoBasement_Giel_Text_11:
# 237 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Finally! Good riddance!\p"
	.string "Now we can dance in peace!$"

DiscoBasement_Dancer_1_Text_0:
# 249 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Can you FEEL it?!\p"
	.string "The bass is hitting different tonight!\p"
	.string "I haven't stopped dancing for THREE\n"
	.string "HOURS!$"

DiscoBasement_Dancer_2_Text_0:
# 256 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "This place is the best-kept secret in\n"
	.string "Lionsarch!\p"
	.string "No Faculty goons, no harbor noise...\p"
	.string "Just pure vibes and disco lights!$"

DiscoBasement_Dancer_3_Text_0:
# 263 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Peter only plays vinyl.\p"
	.string "He says digital music doesn't have the\n"
	.string "same soul.\p"
	.string "I don't know about that, but this music\n"
	.string "SLAPS!$"

DiscoBasement_Chillaxer_Text_0:
# 270 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I needed this, you know?\p"
	.string "The city above is all smog and industry.\p"
	.string "Down here, it's like traveling back to a\n"
	.string "better time.$"

DiscoBasement_AliFriend_Text_0:
# 277 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Ali from Siltroot Town hooks Peter up\n"
	.string "with the good stuff.\p"
	.string "I mean... the good MUSIC.\p"
	.string "Yeah. Definitely just music.$"

DiscoBasement_Oldwoman_Text_0:
# 284 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I used to come here when I was younger.\p"
	.string "Peter's been throwing parties here for\n"
	.string "decades!\p"
	.string "The music's changed, but the vibe is\n"
	.string "still the same.$"

DiscoBasement_DiscoBall_Text_0:
# 290 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "A massive disco ball spins overhead,\n"
	.string "scattering light across the room.\p"
	.string "It's mesmerizing...$"

DiscoBasement_SpeakerSystem_Text_0:
# 296 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "The Loudred is blasting:\n"
	.string "'Le Freak' by Chic\p"
	.string "'FREAK OUT!'$"

DiscoBasement_VinylCollection_Text_0:
# 302 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Peter's vinyl collection is MASSIVE.\p"
	.string "Hundreds of records, all meticulously\n"
	.string "organized.\p"
	.string "This must have cost a fortune!$"

DiscoBasement_SecretEntrance_Text_0:
# 308 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "A discrete entrance hidden behind a\n"
	.string "bookshelf upstairs.\p"
	.string "Very clever!$"
