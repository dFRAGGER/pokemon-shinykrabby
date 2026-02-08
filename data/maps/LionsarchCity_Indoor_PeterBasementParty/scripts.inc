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
# 57 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 58 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_13
DiscoBasement_DJ_Peter_1:
# 60 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 61 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	release
	return

DiscoBasement_DJ_Peter_2:
# 12 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, DiscoBasement_DJ_Peter_7
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
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 46 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_10
# 47 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 48 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 49 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 50 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 51 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_11
# 52 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 53 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 54 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_12
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_7:
# 13 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 14 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_1
	goto DiscoBasement_DJ_Peter_1


DiscoBasement_Guard_DJStage::
# 66 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lock
# 67 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 68 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 69 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 70 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_BASEMENT_DJ_STAGE_ACCESS, DiscoBasement_Guard_DJStage_2
	checkitem ITEM_SOOT_SACK, 1
# 0 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne DiscoBasement_Guard_DJStage_3
# 120 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 121 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_6
DiscoBasement_Guard_DJStage_1:
# 123 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 124 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	release
	return

DiscoBasement_Guard_DJStage_2:
# 71 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_1
# 72 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_0
# 73 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq DiscoBasement_Guard_DJStage_17
DiscoBasement_Guard_DJStage_15:
# 78 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_14
DiscoBasement_Guard_DJStage_12:
# 83 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_11
DiscoBasement_Guard_DJStage_7:
# 88 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
	goto DiscoBasement_Guard_DJStage_1

DiscoBasement_Guard_DJStage_3:
# 90 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 91 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_2
# 92 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 93 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 94 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_3
# 95 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 96 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 97 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_4
# 98 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 99 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_BASEMENT_DJ_STAGE_ACCESS
# 100 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 101 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_5
# 102 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_0
# 103 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq DiscoBasement_Guard_DJStage_30
DiscoBasement_Guard_DJStage_28:
# 108 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_27
DiscoBasement_Guard_DJStage_25:
# 113 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_24
DiscoBasement_Guard_DJStage_20:
# 118 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
	goto DiscoBasement_Guard_DJStage_1

DiscoBasement_Guard_DJStage_8:
# 74 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_1
# 75 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 76 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_9:
# 79 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_3
# 80 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 81 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_10:
# 84 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_4
# 85 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 86 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_11:
# 83 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq DiscoBasement_Guard_DJStage_10
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_14:
# 78 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq DiscoBasement_Guard_DJStage_9
	goto DiscoBasement_Guard_DJStage_12

DiscoBasement_Guard_DJStage_17:
# 73 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq DiscoBasement_Guard_DJStage_8
	goto DiscoBasement_Guard_DJStage_15

DiscoBasement_Guard_DJStage_21:
# 104 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_1
# 105 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 106 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_22:
# 109 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_3
# 110 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 111 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_23:
# 114 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_4
# 115 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 116 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_24:
# 113 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq DiscoBasement_Guard_DJStage_23
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_27:
# 108 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq DiscoBasement_Guard_DJStage_22
	goto DiscoBasement_Guard_DJStage_25

DiscoBasement_Guard_DJStage_30:
# 103 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq DiscoBasement_Guard_DJStage_21
	goto DiscoBasement_Guard_DJStage_28


DiscoBasement_Guard_Tunnel::
# 129 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 130 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 131 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 132 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_1
# 133 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 134 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 135 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_2
# 136 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 137 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 138 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_3
# 139 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 140 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 141 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_4, MSGBOX_AUTOCLOSE
# 142 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 143 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_Tunnel_Movement_0
# 144 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 146 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Guard_Machoke::
# 151 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 152 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 153 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Machoke_Text_0
# 154 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Machoke_Text_1
# 155 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 156 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Guard_Staring::
# 161 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 162 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 163 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Staring_Text_0
# 164 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Staring_Text_1
# 165 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 166 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Giel::
# 170 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lock
# 171 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 172 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 173 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 174 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_GIEL_LEFT_BASEMENT, DiscoBasement_Giel_2
# 179 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 180 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_1
# 181 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 182 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 183 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_2
# 184 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 186 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 7, DiscoBasement_Giel_Movement_0
# 187 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 188 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 16
	goto_if_eq DiscoBasement_Giel_6
DiscoBasement_Giel_4:
# 192 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	delay 30
# 193 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 194 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_3
# 195 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 196 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 197 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_4
# 198 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 200 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	playse SE_PIN
# 201 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 4, DiscoBasement_Giel_Movement_2
# 202 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 203 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker NULL
# 204 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_5
# 205 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 206 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	playse SE_PIN
# 207 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 5, DiscoBasement_Giel_Movement_2
# 208 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 209 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_6
# 210 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 211 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	playse SE_PIN
# 212 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 6, DiscoBasement_Giel_Movement_2
# 213 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 214 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_7
# 215 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 217 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 219 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 220 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 221 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_8
# 222 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 223 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 224 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_9
# 225 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 226 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 227 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_10
# 228 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 230 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 17
	goto_if_eq DiscoBasement_Giel_11
DiscoBasement_Giel_9:
# 233 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Giel_Movement_4
# 234 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 7, DiscoBasement_Giel_Movement_5
# 235 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 236 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_GIEL_LEFT_BASEMENT
# 237 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	removeobject 7
# 239 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker NULL
# 240 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_11
# 241 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 242 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 4, DiscoBasement_Giel_Movement_6
# 243 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 5, DiscoBasement_Giel_Movement_6
# 244 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 6, DiscoBasement_Giel_Movement_6
# 245 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 246 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	release
	return

DiscoBasement_Giel_2:
# 176 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	end

DiscoBasement_Giel_5:
# 189 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Giel_Movement_1
	goto DiscoBasement_Giel_4

DiscoBasement_Giel_6:
# 188 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq DiscoBasement_Giel_5
	goto DiscoBasement_Giel_4

DiscoBasement_Giel_10:
# 231 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Giel_Movement_3
	goto DiscoBasement_Giel_9

DiscoBasement_Giel_11:
# 230 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq DiscoBasement_Giel_10
	goto DiscoBasement_Giel_9


DiscoBasement_Dancer_1::
# 250 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 251 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 252 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Dancer_1_Text_0
# 253 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Dancer_2::
# 257 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 258 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 259 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Dancer_2_Text_0
# 260 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Dancer_3::
# 264 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 265 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 266 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Dancer_3_Text_0
# 267 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Chillaxer::
# 271 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 272 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 273 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Chillaxer_Text_0
# 274 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_AliFriend::
# 278 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 279 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 280 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_AliFriend_Text_0
# 281 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Oldwoman::
# 285 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 286 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 287 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Oldwoman_Text_0
# 288 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_DiscoBall::
# 292 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 293 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DiscoBall_Text_0
# 294 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_SpeakerSystem::
# 298 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 299 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_SpeakerSystem_Text_0
# 300 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_VinylCollection::
# 304 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 305 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_VinylCollection_Text_0
# 306 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_SecretEntrance::
# 310 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 311 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_SecretEntrance_Text_0
# 312 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


# 72 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_0:
# 72 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
# 72 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_left
	step_end

# 74 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_1:
# 74 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
# 74 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_up
	step_end

# 76 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_2:
# 76 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_left
# 76 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_down
	step_end

# 79 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_3:
# 79 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_up
# 79 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_up
	step_end

# 84 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_4:
# 84 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 84 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
	step_end

# 143 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_Tunnel_Movement_0:
# 143 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
	step_end

# 186 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_0:
# 186 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_left
	step_end

# 189 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_1:
# 189 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 189 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
# 189 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_left
	step_end

# 201 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_2:
# 201 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	emote_exclamation_mark
# 201 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_right
	step_end

# 231 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_3:
# 231 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	jump_right
# 231 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_down
	step_end

# 233 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_4:
# 233 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_down
	step_end

# 234 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_5:
# 234 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 234 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 234 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 234 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 234 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
	step_end

# 242 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_6:
# 242 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_up
	step_end

DiscoBasement_DJ_Peter_Text_0:
# 8 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "DJ Peter$"

DiscoBasement_DJ_Peter_Text_1:
# 14 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Welcome back to the GROOVE ZONE!\p"
	.string "The herbs you brought are keeping the\n"
	.string "vibes strong!\p"
	.string "Rock Smash treating you well?\p"
	.string "Remember, you need permission from the\n"
	.string "Gym Leader to use it outside!$"

DiscoBasement_DJ_Peter_Text_2:
# 18 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey, thanks again for the delivery!\p"
	.string "Don't forget to use that Rock Smash I\n"
	.string "gave you!\p"
	.string "Just get permission from the Gym\n"
	.string "Leader first.$"

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
	.string "So, you want to know about the Faculty?\p"
	.string "Those corporate goons...\p"
	.string "They're mining at the foot of East Lion\n"
	.string "Mountain.\p"
	.string "Digging up the whole place, destroying\n"
	.string "the natural beauty.$"

DiscoBasement_DJ_Peter_Text_6:
# 34 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "They've got the whole operation locked\n"
	.string "down tight.\p"
	.string "You need to pass through there to\n"
	.string "reach the Lion Mountains proper.$"

DiscoBasement_DJ_Peter_Text_7:
# 37 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "You know what?\p"
	.string "You've done me a solid, so let me return\n"
	.string "the favor.\p"
	.string "How about a night out of dancing?\p"
	.string "On the house, baby!$"

DiscoBasement_DJ_Peter_Text_8:
# 40 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "...\p"
	.string "No?\p"
	.string "You don't want to dance?\p"
	.string "Tough crowd!$"

DiscoBasement_DJ_Peter_Text_9:
# 43 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Alright, alright, I got something\n"
	.string "better.\p"
	.string "I discovered this technique when\n"
	.string "experimenting with my Loudreds.\p"
	.string "Turns out, if you point really loud\n"
	.string "sounds at rocks...\p"
	.string "They just... pulverize!$"

DiscoBasement_DJ_Peter_Text_10:
# 46 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I call it 'Rock Smash'.\p"
	.string "You're gonna need this to get through\n"
	.string "the rocky terrain near the Lion\l"
	.string "Mountains.$"

DiscoBasement_DJ_Peter_Text_11:
# 51 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "But here's the thing...\p"
	.string "You can't just go around smashing rocks\n"
	.string "willy-nilly.\p"
	.string "You need official permission from the\n"
	.string "Gym Leader to use it outside.\p"
	.string "Bureaucracy, am I right?$"

DiscoBasement_DJ_Peter_Text_12:
# 54 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Now get out there and show those\n"
	.string "Faculty goons what's up!\p"
	.string "And remember... stay funky!$"

DiscoBasement_DJ_Peter_Text_13:
# 58 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Welcome to the GROOVE ZONE!\p"
	.string "This is where the real party happens!\p"
	.string "Old school disco, baby!\p"
	.string "None of that modern stuff - just pure,\n"
	.string "unadulterated FUNK!$"

DiscoBasement_Guard_DJStage_Text_0:
# 69 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Bouncer Carlo$"

DiscoBasement_Guard_DJStage_Text_1:
# 71 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Alright, you're cool.\p"
	.string "Our VIPs can go where ever they want.\p"
	.string "Enjoy the party!$"

DiscoBasement_Guard_DJStage_Text_2:
# 91 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey, hold up.\p"
	.string "Nobody gets past me without clearance.\p"
	.string "...$"

DiscoBasement_Guard_DJStage_Text_3:
# 94 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Wait... is that Ali's stash you're\n"
	.string "carrying?\p"
	.string "I can smell it from here!\p"
	.string "Damn, that's the good stuff!$"

DiscoBasement_Guard_DJStage_Text_4:
# 97 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Alright, you're clearly here on business.\p"
	.string "Peter's gonna want to see you.\p"
	.string "Go on through, VIP access granted!$"

DiscoBasement_Guard_DJStage_Text_5:
# 101 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Tell Peter I said what's up!$"

DiscoBasement_Guard_DJStage_Text_6:
# 121 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey, VIP area only past this point.\p"
	.string "No entry without clearance from the\n"
	.string "boss.\p"
	.string "You want in? Talk to someone who knows\n"
	.string "someone.$"

DiscoBasement_Guard_Tunnel_Text_0:
# 131 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Bouncer Claudio$"

DiscoBasement_Guard_Tunnel_Text_1:
# 132 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "You see that old tunnel over there?\p"
	.string "It used to run all the way to the Iron\n"
	.string "Factory.\p"
	.string "Back in the day, it was a smuggling\n"
	.string "route.\p"
	.string "Direct link from the harbor, if you know\n"
	.string "what I mean.$"

DiscoBasement_Guard_Tunnel_Text_2:
# 135 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Used to move all kinds of...\n"
	.string "'merchandise' through there.\p"
	.string "No customs, no questions asked.\p"
	.string "The good old days, you know?$"

DiscoBasement_Guard_Tunnel_Text_3:
# 138 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
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
# 141 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "It's a shame, really.\p"
	.string "That tunnel had some history.\p"
	.string "Now it's just another thing the Faculty\n"
	.string "controls.$"

DiscoBasement_Guard_Machoke_Text_0:
# 153 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Machoke$"

DiscoBasement_Guard_Machoke_Text_1:
# 154 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "MACHOKE! CHOKE!$"

DiscoBasement_Guard_Staring_Text_0:
# 163 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Bouncer Alessio$"

DiscoBasement_Guard_Staring_Text_1:
# 164 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Man, look at those dancers go!\p"
	.string "Peter really knows how to throw a\n"
	.string "party!\p"
	.string "I could watch them dance all night!$"

DiscoBasement_Giel_Text_0:
# 173 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Giel$"

DiscoBasement_Giel_Text_1:
# 180 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Oh hey, it's you!\p"
	.string "Small world, right?\p"
	.string "I got here way faster than you.\p"
	.string "I know people, you see. Connections.$"

DiscoBasement_Giel_Text_2:
# 183 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "When you mentioned Lionsarch City back\n"
	.string "in Siltroot Town, I got inspired.\p"
	.string "Thought I'd check out the scene here.\p"
	.string "Maybe meet some intellectuals who\n"
	.string "appreciate fine conversation.$"

DiscoBasement_Giel_Text_3:
# 194 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "See those lovely ladies over there?\p"
	.string "I've been trying to impress them with my\n"
	.string "knowledge.\p"
	.string "Did you know about the historical\n"
	.string "conflicts in the Kanto region?\p"
	.string "Fascinating stuff, really.$"

DiscoBasement_Giel_Text_4:
# 197 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "The war between Celadon and Saffron...\p"
	.string "The trade disputes of Vermilion\n"
	.string "Harbor...\p"
	.string "Classic historical drama!$"

DiscoBasement_Giel_Text_5:
# 204 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Ugh, this guy again?\p"
	.string "Nobody wants to hear about ancient\n"
	.string "wars!\p"
	.string "We're trying to DANCE here!$"

DiscoBasement_Giel_Text_6:
# 209 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Seriously, take the hint!\p"
	.string "You've been hovering around us all\n"
	.string "night!\p"
	.string "So creepy!$"

DiscoBasement_Giel_Text_7:
# 214 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Security! Can someone get this weirdo\n"
	.string "away from us?!$"

DiscoBasement_Giel_Text_8:
# 221 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "FINE!\p"
	.string "I see how it is!\p"
	.string "You just can't appreciate intellectual\n"
	.string "discourse!\p"
	.string "This is what's wrong with society today!$"

DiscoBasement_Giel_Text_9:
# 224 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Women just don't appreciate a man who\n"
	.string "understands history!\p"
	.string "I try to share my knowledge and THIS is\n"
	.string "the thanks I get?!$"

DiscoBasement_Giel_Text_10:
# 227 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I'm done with this city!\p"
	.string "The disco scene here is TERRIBLE\n"
	.string "anyway!\p"
	.string "I'm going back to Hezik City where\n"
	.string "people actually have CULTURE!$"

DiscoBasement_Giel_Text_11:
# 240 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Finally! Good riddance!\p"
	.string "Now we can dance in peace!$"

DiscoBasement_Dancer_1_Text_0:
# 252 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Can you FEEL it?!\p"
	.string "The bass is hitting different tonight!\p"
	.string "I haven't stopped dancing for THREE\n"
	.string "HOURS!$"

DiscoBasement_Dancer_2_Text_0:
# 259 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "This place is the best-kept secret in\n"
	.string "Lionsarch!\p"
	.string "No Faculty goons, no harbor noise...\p"
	.string "Just pure vibes and disco lights!$"

DiscoBasement_Dancer_3_Text_0:
# 266 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Peter only plays vinyl.\p"
	.string "He says digital music doesn't have the\n"
	.string "same soul.\p"
	.string "I don't know about that, but this music\n"
	.string "SLAPS!$"

DiscoBasement_Chillaxer_Text_0:
# 273 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I needed this, you know?\p"
	.string "The city above is all smog and industry.\p"
	.string "Down here, it's like traveling back to a\n"
	.string "better time.$"

DiscoBasement_AliFriend_Text_0:
# 280 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Ali from Siltroot Town hooks Peter up\n"
	.string "with the good stuff.\p"
	.string "I mean... the good MUSIC.\p"
	.string "Yeah. Definitely just music.$"

DiscoBasement_Oldwoman_Text_0:
# 287 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I used to come here when I was younger.\p"
	.string "Peter's been throwing parties here for\n"
	.string "decades!\p"
	.string "The music's changed, but the vibe is\n"
	.string "still the same.$"

DiscoBasement_DiscoBall_Text_0:
# 293 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "A massive disco ball spins overhead,\n"
	.string "scattering light across the room.\p"
	.string "It's mesmerizing...$"

DiscoBasement_SpeakerSystem_Text_0:
# 299 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "The Loudred is blasting:\n"
	.string "'Le Freak' by Chic\p"
	.string "'FREAK OUT!'$"

DiscoBasement_VinylCollection_Text_0:
# 305 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Peter's vinyl collection is MASSIVE.\p"
	.string "Hundreds of records, all meticulously\n"
	.string "organized.\p"
	.string "This must have cost a fortune!$"

DiscoBasement_SecretEntrance_Text_0:
# 311 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "A discrete entrance hidden behind a\n"
	.string "bookshelf upstairs.\p"
	.string "Very clever!$"
