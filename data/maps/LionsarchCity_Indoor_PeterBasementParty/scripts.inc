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
# 58 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 59 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_13
DiscoBasement_DJ_Peter_1:
# 61 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 62 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	release
	return

DiscoBasement_DJ_Peter_2:
# 12 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_RECEIVED_CLIMBING_ROPE, DiscoBasement_DJ_Peter_7
# 21 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 22 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_3
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_3:
# 26 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 27 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_4
# 28 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 29 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 30 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_5
# 31 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 32 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	removeitem ITEM_SOOT_SACK, 1
# 33 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_DELIVERED_ALIS_PACKAGE_TO_PETER
# 34 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 35 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_6
# 36 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 37 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 38 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_7
# 39 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 40 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 41 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_8
# 42 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 43 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 44 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_9
# 45 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 46 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 47 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_10
# 48 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 49 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	giveitem ITEM_CLIMBING_ROPE
# 50 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_RECEIVED_CLIMBING_ROPE
# 51 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 52 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_11
# 53 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 54 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 55 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_12
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_7:
# 13 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 14 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_TUNNEL_OPEN, DiscoBasement_DJ_Peter_10
# 17 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_2
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_10:
# 15 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_1
	goto DiscoBasement_DJ_Peter_1


DiscoBasement_Guard_DJStage::
# 67 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lock
# 68 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 69 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 70 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 71 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_BASEMENT_DJ_STAGE_ACCESS, DiscoBasement_Guard_DJStage_2
	checkitem ITEM_SOOT_SACK, 1
# 0 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne DiscoBasement_Guard_DJStage_3
# 121 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 122 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_6
DiscoBasement_Guard_DJStage_1:
# 124 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 125 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	release
	return

DiscoBasement_Guard_DJStage_2:
# 72 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_1
# 73 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_0
# 74 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq DiscoBasement_Guard_DJStage_17
DiscoBasement_Guard_DJStage_15:
# 79 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_14
DiscoBasement_Guard_DJStage_12:
# 84 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_11
DiscoBasement_Guard_DJStage_7:
# 89 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
	goto DiscoBasement_Guard_DJStage_1

DiscoBasement_Guard_DJStage_3:
# 91 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 92 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_2
# 93 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 94 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 95 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_3
# 96 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 97 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 98 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_4
# 99 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 100 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_BASEMENT_DJ_STAGE_ACCESS
# 101 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 102 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_5
# 103 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_0
# 104 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq DiscoBasement_Guard_DJStage_30
DiscoBasement_Guard_DJStage_28:
# 109 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_27
DiscoBasement_Guard_DJStage_25:
# 114 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_24
DiscoBasement_Guard_DJStage_20:
# 119 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
	goto DiscoBasement_Guard_DJStage_1

DiscoBasement_Guard_DJStage_8:
# 75 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_1
# 76 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 77 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_9:
# 80 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_3
# 81 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 82 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_10:
# 85 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_4
# 86 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 87 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_11:
# 84 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq DiscoBasement_Guard_DJStage_10
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_14:
# 79 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq DiscoBasement_Guard_DJStage_9
	goto DiscoBasement_Guard_DJStage_12

DiscoBasement_Guard_DJStage_17:
# 74 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq DiscoBasement_Guard_DJStage_8
	goto DiscoBasement_Guard_DJStage_15

DiscoBasement_Guard_DJStage_21:
# 105 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_1
# 106 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 107 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_22:
# 110 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_3
# 111 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 112 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_23:
# 115 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_4
# 116 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 117 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_24:
# 114 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq DiscoBasement_Guard_DJStage_23
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_27:
# 109 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq DiscoBasement_Guard_DJStage_22
	goto DiscoBasement_Guard_DJStage_25

DiscoBasement_Guard_DJStage_30:
# 104 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq DiscoBasement_Guard_DJStage_21
	goto DiscoBasement_Guard_DJStage_28


DiscoBasement_Guard_Tunnel::
# 130 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 131 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 132 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 133 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_TUNNEL_OPEN, DiscoBasement_Guard_Tunnel_2
# 139 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_RECEIVED_CLIMBING_ROPE, DiscoBasement_Guard_Tunnel_5
# 152 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_5
# 153 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 154 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 155 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_6
# 156 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 157 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 158 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_7
# 159 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 160 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 161 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_8, MSGBOX_AUTOCLOSE
# 162 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 163 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_Tunnel_Movement_0
# 164 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 165 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return

DiscoBasement_Guard_Tunnel_2:
# 134 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_1, MSGBOX_AUTOCLOSE
# 135 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 136 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	end

DiscoBasement_Guard_Tunnel_5:
# 140 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_2
# 141 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 142 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 143 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_3
# 144 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 145 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 146 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_4, MSGBOX_AUTOCLOSE
# 147 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 148 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_STEEL_FACTORY_TUNNEL_OPEN
# 149 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	end


DiscoBasement_Guard_Machoke::
# 170 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 171 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 172 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Machoke_Text_0
# 173 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Machoke_Text_1
# 174 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 175 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Guard_Staring::
# 180 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 181 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 182 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Staring_Text_0
# 183 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Staring_Text_1
# 184 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 185 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Giel::
# 189 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lock
# 190 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 191 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 192 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 193 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_GIEL_LEFT_BASEMENT, DiscoBasement_Giel_2
# 198 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 199 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_1
# 200 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 201 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 202 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_2
# 203 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 205 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 7, DiscoBasement_Giel_Movement_0
# 206 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 207 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 16
	goto_if_eq DiscoBasement_Giel_6
DiscoBasement_Giel_4:
# 211 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	delay 30
# 212 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 213 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_3, MSGBOX_AUTOCLOSE
# 214 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 215 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 7, DiscoBasement_Giel_Movement_2
# 216 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 218 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 219 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_4, MSGBOX_AUTOCLOSE
# 220 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 222 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	playse SE_PIN
# 223 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 4, DiscoBasement_Giel_Movement_3
# 224 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 225 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker NULL
# 226 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_5
# 227 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 228 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	playse SE_PIN
# 229 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 5, DiscoBasement_Giel_Movement_3
# 230 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 231 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_6
# 232 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 233 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	playse SE_PIN
# 234 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 6, DiscoBasement_Giel_Movement_3
# 235 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 236 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_7, MSGBOX_AUTOCLOSE
# 237 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 238 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 7, DiscoBasement_Giel_Movement_4
# 239 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 240 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 241 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 242 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_8
# 243 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 244 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 245 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_9
# 246 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 247 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 248 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_10, MSGBOX_AUTOCLOSE
# 249 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 251 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 17
	goto_if_eq DiscoBasement_Giel_11
DiscoBasement_Giel_9:
# 254 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Giel_Movement_6
# 255 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 7, DiscoBasement_Giel_Movement_7
# 256 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 257 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_GIEL_LEFT_BASEMENT
# 258 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	removeobject 7
# 260 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 4, DiscoBasement_Giel_Movement_8
# 261 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 5, DiscoBasement_Giel_Movement_8
# 262 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 6, DiscoBasement_Giel_Movement_8
# 263 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 264 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	release
	return

DiscoBasement_Giel_2:
# 195 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	end

DiscoBasement_Giel_5:
# 208 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Giel_Movement_1
	goto DiscoBasement_Giel_4

DiscoBasement_Giel_6:
# 207 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq DiscoBasement_Giel_5
	goto DiscoBasement_Giel_4

DiscoBasement_Giel_10:
# 252 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Giel_Movement_5
	goto DiscoBasement_Giel_9

DiscoBasement_Giel_11:
# 251 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq DiscoBasement_Giel_10
	goto DiscoBasement_Giel_9


DiscoBasement_Dancer_1::
# 268 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 269 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 270 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Dancer_1_Text_0
# 271 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Dancer_2::
# 275 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 276 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 277 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Dancer_2_Text_0
# 278 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Dancer_3::
# 282 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 283 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 284 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Dancer_3_Text_0
# 285 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Chillaxer::
# 289 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 290 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 291 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Chillaxer_Text_0
# 292 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_AliFriend::
# 296 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 297 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 298 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_AliFriend_Text_0
# 299 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Oldwoman::
# 303 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 304 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 305 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Oldwoman_Text_0
# 306 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_DiscoBall::
# 310 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 311 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DiscoBall_Text_0
# 312 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_SpeakerSystem::
# 316 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 317 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_SpeakerSystem_Text_0
# 318 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_VinylCollection::
# 322 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 323 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_VinylCollection_Text_0
# 324 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_SecretEntrance::
# 328 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 329 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_SecretEntrance_Text_0
# 330 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


# 73 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_0:
# 73 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
# 73 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_left
	step_end

# 75 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_1:
# 75 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
# 75 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_up
	step_end

# 77 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_2:
# 77 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_left
# 77 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_down
	step_end

# 80 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_3:
# 80 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_up
# 80 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_up
	step_end

# 85 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_4:
# 85 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 85 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
	step_end

# 163 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_Tunnel_Movement_0:
# 163 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
	step_end

# 205 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_0:
# 205 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_left
	step_end

# 208 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_1:
# 208 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 208 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
# 208 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_left
	step_end

# 215 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_2:
# 215 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_left
	step_end

# 223 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_3:
# 223 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	emote_exclamation_mark
# 223 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_right
	step_end

# 238 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_4:
# 238 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
# 238 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_player
	step_end

# 252 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_5:
# 252 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	jump_right
# 252 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_down
	step_end

# 254 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_6:
# 254 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_down
	step_end

# 255 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_7:
# 255 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 255 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 255 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 255 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 255 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 255 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
	step_end

# 260 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_8:
# 260 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_up
	step_end

DiscoBasement_DJ_Peter_Text_0:
# 8 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "DJ Peter$"

DiscoBasement_DJ_Peter_Text_1:
# 15 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Welcome back to the GROOVE ZONE!\p"
	.string "You making progress in there?\p"
	.string "That factory's been giving me the\n"
	.string "creeps for years.\p"
	.string "Good to know someone's finally poking\n"
	.string "around.$"

DiscoBasement_DJ_Peter_Text_2:
# 17 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Welcome back!\p"
	.string "Hey - you know that old tunnel Paolo\n"
	.string "guards?\p"
	.string "I told him to let you through.\p"
	.string "That tunnel goes straight into the\n"
	.string "Steel Factory basement.\p"
	.string "Been sealed for years, but I still have\n"
	.string "my ways.\p"
	.string "The Faculty thinks they control\n"
	.string "everything around here.\p"
	.string "They don't control Peter.$"

DiscoBasement_DJ_Peter_Text_3:
# 22 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey, thanks again for the delivery!\p"
	.string "Don't forget you've still got those\n"
	.string "boots of mine!$"

DiscoBasement_DJ_Peter_Text_4:
# 27 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Wait... that smell...\p"
	.string "Is that what I think it is?$"

DiscoBasement_DJ_Peter_Text_5:
# 30 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "You brought the goods from Ali!\p"
	.string "My man! This is exactly what I needed!\p"
	.string "The party can really get started now!$"

DiscoBasement_DJ_Peter_Text_6:
# 35 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Let me return the favor - first round\n"
	.string "of dancing is on the house!$"

DiscoBasement_DJ_Peter_Text_7:
# 38 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "...\p"
	.string "No?\p"
	.string "You don't want to dance?\p"
	.string "You've got that look.\p"
	.string "Someone with places to be.\p"
	.string "Tough crowd!$"

DiscoBasement_DJ_Peter_Text_8:
# 41 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Alright, let me return the favor another\n"
	.string "way.\p"
	.string "When I first rolled into Lionsarch, I\n"
	.string "had nothing.\p"
	.string "No gig, no place, no plan.\p"
	.string "Just a pair of boots and a whole lot of\n"
	.string "nerve.$"

DiscoBasement_DJ_Peter_Text_9:
# 44 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Nights I'd dance in 'em right here on\n"
	.string "this floor.\p"
	.string "Days I'd climb the Lion Mountains in the\n"
	.string "same pair.\p"
	.string "Up those rocky ridges before the sun\n"
	.string "got too high.\p"
	.string "Same boots. Same rhythm. Different\n"
	.string "terrain.$"

DiscoBasement_DJ_Peter_Text_10:
# 47 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I got new ones eventually.\p"
	.string "But these old ones deserve someone\n"
	.string "who'll actually use 'em.\p"
	.string "Here. Take 'em.\p"
	.string "They'll get you places.$"

DiscoBasement_DJ_Peter_Text_11:
# 52 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Come back sometime, yeah?\p"
	.string "There's more down here than just good\n"
	.string "music.\p"
	.string "You talk to the right people... you'd be\n"
	.string "surprised what doors open.$"

DiscoBasement_DJ_Peter_Text_12:
# 55 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Now get out there.\p"
	.string "And remember... stay funky!$"

DiscoBasement_DJ_Peter_Text_13:
# 59 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Welcome to the GROOVE ZONE!\p"
	.string "This is where the real party happens!\p"
	.string "Old school disco, baby!\p"
	.string "None of that modern stuff - just pure,\n"
	.string "unadulterated FUNK!$"

DiscoBasement_Guard_DJStage_Text_0:
# 70 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Bouncer Carlo$"

DiscoBasement_Guard_DJStage_Text_1:
# 72 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Alright, you're cool.\p"
	.string "Our VIPs can go where ever they want.\p"
	.string "Enjoy the party!$"

DiscoBasement_Guard_DJStage_Text_2:
# 92 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey, hold up.\p"
	.string "Nobody gets past me without clearance.\p"
	.string "...$"

DiscoBasement_Guard_DJStage_Text_3:
# 95 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Wait... is that Ali's stash you're\n"
	.string "carrying?\p"
	.string "I can smell it from here!\p"
	.string "Damn, that's the good stuff!$"

DiscoBasement_Guard_DJStage_Text_4:
# 98 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Alright, you're clearly here on business.\p"
	.string "Peter's gonna want to see you.\p"
	.string "Go on through, VIP access granted!$"

DiscoBasement_Guard_DJStage_Text_5:
# 102 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Tell Peter I said what's up!$"

DiscoBasement_Guard_DJStage_Text_6:
# 122 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey, VIP area only past this point.\p"
	.string "No entry without clearance from the\n"
	.string "boss.\p"
	.string "You want in? Talk to someone who knows\n"
	.string "someone.$"

DiscoBasement_Guard_Tunnel_Text_0:
# 132 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Bouncer Paolo$"

DiscoBasement_Guard_Tunnel_Text_1:
# 134 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Peter said to let you through.\p"
	.string "Watch yourself in there.\p"
	.string "The Faculty doesn't take kindly to\n"
	.string "uninvited guests.$"

DiscoBasement_Guard_Tunnel_Text_2:
# 140 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey, you're the one Peter was talking\n"
	.string "about.\p"
	.string "Said you did him a solid.\p"
	.string "He asked me to let you through the\n"
	.string "tunnel - personally cleared the bypass\l"
	.string "on his end.$"

DiscoBasement_Guard_Tunnel_Text_3:
# 143 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Just so you know - the Faculty sealed\n"
	.string "their side a while back.\p"
	.string "But Peter's had a workaround for years.\p"
	.string "Old smuggler's trick. Don't ask me how it\n"
	.string "works.$"

DiscoBasement_Guard_Tunnel_Text_4:
# 146 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "The Steel Factory's through there.\p"
	.string "Tough place. Be careful.\p"
	.string "And hey - if you find anything...\n"
	.string "interesting in there, Peter would want\l"
	.string "to know.$"

DiscoBasement_Guard_Tunnel_Text_5:
# 152 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "You see that old tunnel over there?\p"
	.string "It used to run all the way to the Iron\n"
	.string "Factory.\p"
	.string "Back in the day, it was a smuggling\n"
	.string "route.\p"
	.string "Direct link from the harbor, if you know\n"
	.string "what I mean.$"

DiscoBasement_Guard_Tunnel_Text_6:
# 155 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Used to move all kinds of...\n"
	.string "'merchandise' through there.\p"
	.string "No customs, no questions asked.\p"
	.string "The good old days, you know?$"

DiscoBasement_Guard_Tunnel_Text_7:
# 158 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
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

DiscoBasement_Guard_Tunnel_Text_8:
# 161 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "It's a shame, really.\p"
	.string "That tunnel had some history.\p"
	.string "Now it's just another thing the Faculty\n"
	.string "controls.$"

DiscoBasement_Guard_Machoke_Text_0:
# 172 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Machoke$"

DiscoBasement_Guard_Machoke_Text_1:
# 173 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "MACHOKE! CHOKE!$"

DiscoBasement_Guard_Staring_Text_0:
# 182 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Bouncer Marco$"

DiscoBasement_Guard_Staring_Text_1:
# 183 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Man, look at those dancers go!\p"
	.string "Peter really knows how to throw a\n"
	.string "party!\p"
	.string "I could watch them dance all night!$"

DiscoBasement_Giel_Text_0:
# 192 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Giel$"

DiscoBasement_Giel_Text_1:
# 199 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Oh hey, it's you!\p"
	.string "Small world, right?\p"
	.string "I got here way faster than you.\p"
	.string "I know people, you see. Connections.$"

DiscoBasement_Giel_Text_2:
# 202 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "When you mentioned Lionsarch City back\n"
	.string "in Siltroot Town, I got inspired.\p"
	.string "Thought I'd check out the scene here.\p"
	.string "Maybe meet some intellectuals who\n"
	.string "appreciate fine conversation.$"

DiscoBasement_Giel_Text_3:
# 213 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "See those lovely ladies over there?\p"
	.string "I've been trying to impress them with my\n"
	.string "knowledge.\p"
	.string "Watch this!$"

DiscoBasement_Giel_Text_4:
# 219 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey Ladies!!\p"
	.string "Did you know about the historical\n"
	.string "conflicts in the Kanto region?\p"
	.string "Fascinating stuff, really.\p"
	.string "The war between Celadon and Saffron...\p"
	.string "The trade disputes of Vermilion\n"
	.string "Harbor...\p"
	.string "Classic historical drama!$"

DiscoBasement_Giel_Text_5:
# 226 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Ugh, this guy again?\p"
	.string "Nobody wants to hear about ancient\n"
	.string "wars!\p"
	.string "We're trying to DANCE here!$"

DiscoBasement_Giel_Text_6:
# 231 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Seriously, take the hint!\p"
	.string "You've been hovering around us all\n"
	.string "night!\p"
	.string "So creepy!$"

DiscoBasement_Giel_Text_7:
# 236 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Security! Can someone get this weirdo\n"
	.string "away from us?!$"

DiscoBasement_Giel_Text_8:
# 242 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "FINE!\p"
	.string "I see how it is!\p"
	.string "You just can't appreciate intellectual\n"
	.string "discourse!\p"
	.string "This is what's wrong with society today!$"

DiscoBasement_Giel_Text_9:
# 245 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Women just don't appreciate a man who\n"
	.string "understands history!\p"
	.string "I try to share my knowledge and THIS is\n"
	.string "the thanks I get?!$"

DiscoBasement_Giel_Text_10:
# 248 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I'm done with this city!\p"
	.string "The disco scene here is TERRIBLE\n"
	.string "anyway!\p"
	.string "I'm going back to Hezik City where\n"
	.string "people actually have CULTURE!$"

DiscoBasement_Dancer_1_Text_0:
# 270 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Can you FEEL it?!\p"
	.string "The bass is hitting different tonight!\p"
	.string "I haven't stopped dancing for THREE\n"
	.string "HOURS!$"

DiscoBasement_Dancer_2_Text_0:
# 277 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "This place is the best-kept secret in\n"
	.string "Lionsarch!\p"
	.string "No Faculty goons, no harbor noise...\p"
	.string "Just pure vibes and disco lights!$"

DiscoBasement_Dancer_3_Text_0:
# 284 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Peter only plays vinyl.\p"
	.string "He says digital music doesn't have the\n"
	.string "same soul.\p"
	.string "I don't know about that, but this music\n"
	.string "SLAPS!$"

DiscoBasement_Chillaxer_Text_0:
# 291 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I needed this, you know?\p"
	.string "The city above is all smog and industry.\p"
	.string "Down here, it's like traveling back to a\n"
	.string "better time.$"

DiscoBasement_AliFriend_Text_0:
# 298 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Ali from Siltroot Town hooks Peter up\n"
	.string "with the good stuff.\p"
	.string "I mean... the good MUSIC.\p"
	.string "Yeah. Definitely just music.$"

DiscoBasement_Oldwoman_Text_0:
# 305 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I used to come here when I was younger.\p"
	.string "Peter's been throwing parties here for\n"
	.string "decades!\p"
	.string "The music's changed, but the vibe is\n"
	.string "still the same.$"

DiscoBasement_DiscoBall_Text_0:
# 311 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "A massive disco ball spins overhead,\n"
	.string "scattering light across the room.\p"
	.string "It's mesmerizing...$"

DiscoBasement_SpeakerSystem_Text_0:
# 317 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "The Loudred is blasting:\n"
	.string "'Le Freak' by Chic\p"
	.string "'FREAK OUT!'$"

DiscoBasement_VinylCollection_Text_0:
# 323 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Peter's vinyl collection is MASSIVE.\p"
	.string "Hundreds of records, all meticulously\n"
	.string "organized.\p"
	.string "This must have cost a fortune!$"

DiscoBasement_SecretEntrance_Text_0:
# 329 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "A discrete entrance hidden behind a\n"
	.string "bookshelf upstairs.\p"
	.string "Very clever!$"
