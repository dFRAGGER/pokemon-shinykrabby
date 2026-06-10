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
# 82 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 83 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_21
DiscoBasement_DJ_Peter_1:
# 85 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 86 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	release
	return

DiscoBasement_DJ_Peter_2:
# 12 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_RECEIVED_CLIMBING_ROPE, DiscoBasement_DJ_Peter_7
# 45 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 46 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_11
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_3:
# 50 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 51 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_12
# 52 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 53 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 54 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_13
# 55 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 56 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	removeitem ITEM_SOOT_SACK, 1
# 57 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_DELIVERED_ALIS_PACKAGE_TO_PETER
# 58 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 59 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_14
# 60 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 61 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 62 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_15
# 63 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 64 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 65 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_16
# 66 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 67 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 68 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_17
# 69 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 70 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 71 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_18
# 72 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 73 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	giveitem ITEM_CLIMBING_ROPE
# 74 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_RECEIVED_CLIMBING_ROPE
# 75 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 76 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_19
# 77 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 78 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 79 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_20
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_7:
# 13 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 14 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_TUNNEL_OPEN, DiscoBasement_DJ_Peter_10
# 16 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_PETER_GAVE_TUNNEL_PERMISSION, DiscoBasement_DJ_Peter_11
# 18 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, DiscoBasement_DJ_Peter_12
# 41 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_10
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_10:
# 15 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_1
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_11:
# 17 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_2
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_12:
# 19 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_3
# 20 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 21 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 22 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_4
# 23 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 24 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 25 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_5
# 26 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 27 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 28 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_6
# 29 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 30 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 31 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_7
# 32 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 33 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 34 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_8
# 35 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 36 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 37 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_9
# 38 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 39 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_PETER_GAVE_TUNNEL_PERMISSION
	goto DiscoBasement_DJ_Peter_1


DiscoBasement_Guard_DJStage::
# 91 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lock
# 92 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 93 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 94 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 95 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_BASEMENT_DJ_STAGE_ACCESS, DiscoBasement_Guard_DJStage_2
	checkitem ITEM_SOOT_SACK, 1
# 0 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne DiscoBasement_Guard_DJStage_3
# 145 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 146 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_6
DiscoBasement_Guard_DJStage_1:
# 148 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 149 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	release
	return

DiscoBasement_Guard_DJStage_2:
# 96 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_1
# 97 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_0
# 98 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq DiscoBasement_Guard_DJStage_17
DiscoBasement_Guard_DJStage_15:
# 103 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_14
DiscoBasement_Guard_DJStage_12:
# 108 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_11
DiscoBasement_Guard_DJStage_7:
# 113 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
	goto DiscoBasement_Guard_DJStage_1

DiscoBasement_Guard_DJStage_3:
# 115 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 116 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_2
# 117 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 118 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 119 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_3
# 120 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 121 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 122 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_4
# 123 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 124 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_BASEMENT_DJ_STAGE_ACCESS
# 125 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 126 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_5
# 127 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_0
# 128 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq DiscoBasement_Guard_DJStage_30
DiscoBasement_Guard_DJStage_28:
# 133 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_27
DiscoBasement_Guard_DJStage_25:
# 138 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_24
DiscoBasement_Guard_DJStage_20:
# 143 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
	goto DiscoBasement_Guard_DJStage_1

DiscoBasement_Guard_DJStage_8:
# 99 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_1
# 100 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 101 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_9:
# 104 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_3
# 105 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 106 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_10:
# 109 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_4
# 110 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 111 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_11:
# 108 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq DiscoBasement_Guard_DJStage_10
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_14:
# 103 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq DiscoBasement_Guard_DJStage_9
	goto DiscoBasement_Guard_DJStage_12

DiscoBasement_Guard_DJStage_17:
# 98 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq DiscoBasement_Guard_DJStage_8
	goto DiscoBasement_Guard_DJStage_15

DiscoBasement_Guard_DJStage_21:
# 129 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_1
# 130 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 131 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_22:
# 134 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_3
# 135 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 136 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_23:
# 139 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_4
# 140 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 141 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_24:
# 138 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq DiscoBasement_Guard_DJStage_23
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_27:
# 133 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq DiscoBasement_Guard_DJStage_22
	goto DiscoBasement_Guard_DJStage_25

DiscoBasement_Guard_DJStage_30:
# 128 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq DiscoBasement_Guard_DJStage_21
	goto DiscoBasement_Guard_DJStage_28


DiscoBasement_Guard_Tunnel::
# 154 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 155 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 156 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 157 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_TUNNEL_OPEN, DiscoBasement_Guard_Tunnel_2
# 163 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_PETER_GAVE_TUNNEL_PERMISSION, DiscoBasement_Guard_Tunnel_5
# 170 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_3
# 171 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 172 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 173 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_4
# 174 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 175 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 176 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_5, MSGBOX_AUTOCLOSE
# 177 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 178 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return

DiscoBasement_Guard_Tunnel_2:
# 158 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_1, MSGBOX_AUTOCLOSE
# 159 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 160 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	end

DiscoBasement_Guard_Tunnel_5:
# 164 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_2, MSGBOX_AUTOCLOSE
# 165 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 166 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_STEEL_FACTORY_TUNNEL_OPEN
# 167 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	end


DiscoBasement_Guard_Machoke::
# 183 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 184 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 185 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Machoke_Text_0
# 186 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Machoke_Text_1
# 187 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 188 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Guard_Staring::
# 193 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 194 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 195 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Staring_Text_0
# 196 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Staring_Text_1
# 197 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 198 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Giel::
# 202 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lock
# 203 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 204 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 205 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 206 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_GIEL_LEFT_BASEMENT, DiscoBasement_Giel_2
# 211 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 212 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_1
# 213 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 214 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 215 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_2
# 216 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 218 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 7, DiscoBasement_Giel_Movement_0
# 219 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 220 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 16
	goto_if_eq DiscoBasement_Giel_6
DiscoBasement_Giel_4:
# 224 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	delay 30
# 225 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 226 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_3, MSGBOX_AUTOCLOSE
# 227 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 228 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 7, DiscoBasement_Giel_Movement_2
# 229 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 231 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 232 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_4, MSGBOX_AUTOCLOSE
# 233 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 235 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	playse SE_PIN
# 236 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 4, DiscoBasement_Giel_Movement_3
# 237 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 238 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker NULL
# 239 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_5
# 240 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 241 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	playse SE_PIN
# 242 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 5, DiscoBasement_Giel_Movement_3
# 243 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 244 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_6
# 245 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 246 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	playse SE_PIN
# 247 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 6, DiscoBasement_Giel_Movement_3
# 248 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 249 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_7, MSGBOX_AUTOCLOSE
# 250 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 251 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 7, DiscoBasement_Giel_Movement_4
# 252 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 253 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 254 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 255 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_8
# 256 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 257 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 258 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_9
# 259 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 260 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 261 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_10, MSGBOX_AUTOCLOSE
# 262 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 264 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 17
	goto_if_eq DiscoBasement_Giel_11
DiscoBasement_Giel_9:
# 267 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Giel_Movement_6
# 268 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 7, DiscoBasement_Giel_Movement_7
# 269 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 270 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_GIEL_LEFT_BASEMENT
# 271 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	removeobject 7
# 273 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 4, DiscoBasement_Giel_Movement_8
# 274 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 5, DiscoBasement_Giel_Movement_8
# 275 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 6, DiscoBasement_Giel_Movement_8
# 276 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 277 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	release
	return

DiscoBasement_Giel_2:
# 208 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	end

DiscoBasement_Giel_5:
# 221 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Giel_Movement_1
	goto DiscoBasement_Giel_4

DiscoBasement_Giel_6:
# 220 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq DiscoBasement_Giel_5
	goto DiscoBasement_Giel_4

DiscoBasement_Giel_10:
# 265 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Giel_Movement_5
	goto DiscoBasement_Giel_9

DiscoBasement_Giel_11:
# 264 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq DiscoBasement_Giel_10
	goto DiscoBasement_Giel_9


DiscoBasement_Dancer_1::
# 281 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 282 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 283 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Dancer_1_Text_0
# 284 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Dancer_2::
# 288 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 289 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 290 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Dancer_2_Text_0
# 291 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Dancer_3::
# 295 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 296 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 297 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Dancer_3_Text_0
# 298 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Chillaxer::
# 302 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 303 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 304 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Chillaxer_Text_0
# 305 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_AliFriend::
# 309 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 310 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 311 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_AliFriend_Text_0
# 312 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Oldwoman::
# 316 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 317 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 318 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Oldwoman_Text_0
# 319 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_DiscoBall::
# 323 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 324 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DiscoBall_Text_0
# 325 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_SpeakerSystem::
# 329 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 330 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_SpeakerSystem_Text_0
# 331 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_VinylCollection::
# 335 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 336 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_VinylCollection_Text_0
# 337 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_TunnelEntrance_Check::
# 341 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_TUNNEL_OPEN, DiscoBasement_TunnelEntrance_Check_2
# 344 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 345 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	playse SE_PIN
# 346 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 13, DiscoBasement_TunnelEntrance_Check_Movement_0
# 347 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 348 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 349 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_TunnelEntrance_Check_Text_0, MSGBOX_AUTOCLOSE
# 350 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_TunnelEntrance_Check_Movement_1
# 351 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 352 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	end

DiscoBasement_TunnelEntrance_Check_2:
	end


DiscoBasement_SecretEntrance::
# 357 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 358 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_SecretEntrance_Text_0
# 359 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


# 97 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_0:
# 97 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
# 97 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_left
	step_end

# 99 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_1:
# 99 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
# 99 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_up
	step_end

# 101 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_2:
# 101 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_left
# 101 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_down
	step_end

# 104 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_3:
# 104 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_up
# 104 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_up
	step_end

# 109 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_4:
# 109 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 109 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
	step_end

# 218 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_0:
# 218 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_left
	step_end

# 221 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_1:
# 221 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 221 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
# 221 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_left
	step_end

# 228 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_2:
# 228 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_left
	step_end

# 236 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_3:
# 236 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	emote_exclamation_mark
# 236 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_right
	step_end

# 251 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_4:
# 251 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
# 251 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_player
	step_end

# 265 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_5:
# 265 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	jump_right
# 265 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_down
	step_end

# 267 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_6:
# 267 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_down
	step_end

# 268 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_7:
# 268 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 268 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 268 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 268 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 268 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 268 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
	step_end

# 273 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_8:
# 273 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_up
	step_end

# 346 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_TunnelEntrance_Check_Movement_0:
# 346 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	emote_exclamation_mark
	step_end

# 350 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_TunnelEntrance_Check_Movement_1:
# 350 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_up
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
	.string "Tunnel's still open on our end.\p"
	.string "Paolo will let you through.\p"
	.string "Get in there and find out what they're\n"
	.string "really building.$"

DiscoBasement_DJ_Peter_Text_3:
# 19 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey... you're back.\p"
	.string "You've got that look.\p"
	.string "Like you've just been somewhere you\n"
	.string "weren't supposed to be.\p"
	.string "...What happened?$"

DiscoBasement_DJ_Peter_Text_4:
# 22 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "...\p"
	.string "They pushed you into a CREVASSE?!\p"
	.string "I always knew the Faculty played dirty.\p"
	.string "But throwing someone into a pit...$"

DiscoBasement_DJ_Peter_Text_5:
# 25 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "And they've already moved everything\n"
	.string "to the factory.\p"
	.string "This is escalating faster than I\n"
	.string "thought.$"

DiscoBasement_DJ_Peter_Text_6:
# 28 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I've been watching those people dig\n"
	.string "into those mountains for months.\p"
	.string "Every week the shipments get bigger.\p"
	.string "Every week the tremors get worse.$"

DiscoBasement_DJ_Peter_Text_7:
# 31 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I can't sit on this anymore.\p"
	.string "You need to get into that factory.\p"
	.string "Luckely I know a way in that the\n"
	.string "Faculty doesn't.$"

DiscoBasement_DJ_Peter_Text_8:
# 34 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "There's a tunnel running from this\n"
	.string "basement straight to the factory's\l"
	.string "lower level.\p"
	.string "Old smuggling route.\p"
	.string "The Faculty thinks they sealed their\n"
	.string "end years ago.\p"
	.string "They didn't seal ours.$"

DiscoBasement_DJ_Peter_Text_9:
# 37 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Paolo guards the entrance down here.\p"
	.string "I'll tell him you have my blessing to go\n"
	.string "through.\p"
	.string "Get in there.\p"
	.string "Find out what they're really building.\p"
	.string "And be careful.$"

DiscoBasement_DJ_Peter_Text_10:
# 41 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey, you're still kicking around\n"
	.string "Lionsarch!\p"
	.string "Good to see you.\p"
	.string "Something's been feeling off up in\n"
	.string "those mountains lately.\p"
	.string "Stay funky out there.$"

DiscoBasement_DJ_Peter_Text_11:
# 46 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey, thanks again for the delivery!\p"
	.string "Don't forget you've still got those\n"
	.string "boots of mine!$"

DiscoBasement_DJ_Peter_Text_12:
# 51 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Wait... that smell...\p"
	.string "Is that what I think it is?$"

DiscoBasement_DJ_Peter_Text_13:
# 54 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "You brought the goods from Ali!\p"
	.string "My man! This is exactly what I needed!\p"
	.string "The party can really get started now!$"

DiscoBasement_DJ_Peter_Text_14:
# 59 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Let me return the favor - first round\n"
	.string "of dancing is on the house!$"

DiscoBasement_DJ_Peter_Text_15:
# 62 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "...\p"
	.string "No?\p"
	.string "You don't want to dance?\p"
	.string "You've got that look.\p"
	.string "Someone with places to be.\p"
	.string "Tough crowd!$"

DiscoBasement_DJ_Peter_Text_16:
# 65 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Alright, let me return the favor another\n"
	.string "way.\p"
	.string "When I first rolled into Lionsarch, I\n"
	.string "had nothing.\p"
	.string "No gig, no place, no plan.\p"
	.string "Just a pair of boots and a whole lot of\n"
	.string "nerve.$"

DiscoBasement_DJ_Peter_Text_17:
# 68 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Nights I'd dance in 'em right here on\n"
	.string "this floor.\p"
	.string "Days I'd climb the Lion Mountains in the\n"
	.string "same pair.\p"
	.string "Up those rocky ridges before the sun\n"
	.string "got too high.\p"
	.string "Same boots. Same rhythm. Different\n"
	.string "terrain.$"

DiscoBasement_DJ_Peter_Text_18:
# 71 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I got new ones eventually.\p"
	.string "But these old ones deserve someone\n"
	.string "who'll actually use 'em.\p"
	.string "Here. Take 'em.\p"
	.string "They'll get you places.$"

DiscoBasement_DJ_Peter_Text_19:
# 76 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Come back sometime, yeah?\p"
	.string "There's more down here than just good\n"
	.string "music.\p"
	.string "You talk to the right people... you'd be\n"
	.string "surprised what doors open.$"

DiscoBasement_DJ_Peter_Text_20:
# 79 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Now get out there.\p"
	.string "And remember... stay funky!$"

DiscoBasement_DJ_Peter_Text_21:
# 83 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Welcome to the GROOVE ZONE!\p"
	.string "This is where the real party happens!\p"
	.string "Old school disco, baby!\p"
	.string "None of that modern stuff - just pure,\n"
	.string "unadulterated FUNK!$"

DiscoBasement_Guard_DJStage_Text_0:
# 94 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Bouncer Carlo$"

DiscoBasement_Guard_DJStage_Text_1:
# 96 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Alright, you're cool.\p"
	.string "Our VIPs can go where ever they want.\p"
	.string "Enjoy the party!$"

DiscoBasement_Guard_DJStage_Text_2:
# 116 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey, hold up.\p"
	.string "Nobody gets past me without clearance.\p"
	.string "...$"

DiscoBasement_Guard_DJStage_Text_3:
# 119 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Wait... is that Ali's stash you're\n"
	.string "carrying?\p"
	.string "I can smell it from here!\p"
	.string "Damn, that's the good stuff!$"

DiscoBasement_Guard_DJStage_Text_4:
# 122 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Alright, you're clearly here on business.\p"
	.string "Peter's gonna want to see you.\p"
	.string "Go on through, VIP access granted!$"

DiscoBasement_Guard_DJStage_Text_5:
# 126 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Tell Peter I said what's up!$"

DiscoBasement_Guard_DJStage_Text_6:
# 146 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey, VIP area only past this point.\p"
	.string "No entry without clearance from the\n"
	.string "boss.\p"
	.string "You want in? Talk to someone who knows\n"
	.string "someone.$"

DiscoBasement_Guard_Tunnel_Text_0:
# 156 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Bouncer Paolo$"

DiscoBasement_Guard_Tunnel_Text_1:
# 158 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Peter said to let you through.\p"
	.string "Watch yourself in there.\p"
	.string "The Faculty doesn't take kindly to\n"
	.string "uninvited guests.$"

DiscoBasement_Guard_Tunnel_Text_2:
# 164 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Just got the clearance over the radio\n"
	.string "from Peter.\p"
	.string "Said you did him a solid.\p"
	.string "He asked me to let you through the\n"
	.string "tunnel, the keys are in the door.\p"
	.string "Be careful in there, alright?$"

DiscoBasement_Guard_Tunnel_Text_3:
# 170 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "You see that old tunnel over there?\p"
	.string "It used to run all the way to the Iron\n"
	.string "Factory.\p"
	.string "Back in the day, it was a smuggling\n"
	.string "route.\p"
	.string "Direct link from the harbor, if you know\n"
	.string "what I mean.$"

DiscoBasement_Guard_Tunnel_Text_4:
# 173 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Used to move all kinds of...\n"
	.string "'merchandise' through there.\p"
	.string "No customs, no questions asked.\p"
	.string "The good old days, you know?$"

DiscoBasement_Guard_Tunnel_Text_5:
# 176 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "But then the Faculty took over the\n"
	.string "factory.\p"
	.string "They sealed the whole thing up.\p"
	.string "Now only Peter and the Faculty have the\n"
	.string "keys.\p"
	.string "Rest of us are locked out for good.\p"
	.string "Peter told me to not let anyone near it,\n"
	.string "so... here I am, doing my part to keep\l"
	.string "the secrets safe.$"

DiscoBasement_Guard_Machoke_Text_0:
# 185 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Machoke$"

DiscoBasement_Guard_Machoke_Text_1:
# 186 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "MACHOKE! CHOKE!$"

DiscoBasement_Guard_Staring_Text_0:
# 195 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Bouncer Marco$"

DiscoBasement_Guard_Staring_Text_1:
# 196 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Man, look at those dancers go!\p"
	.string "Peter really knows how to throw a\n"
	.string "party!\p"
	.string "I could watch them dance all night!$"

DiscoBasement_Giel_Text_0:
# 205 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Giel$"

DiscoBasement_Giel_Text_1:
# 212 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Oh hey, it's you!\p"
	.string "Small world, right?\p"
	.string "I got here way faster than you.\p"
	.string "I know people, you see. Connections.$"

DiscoBasement_Giel_Text_2:
# 215 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "When you mentioned Lionsarch City back\n"
	.string "in Siltroot Town, I got inspired.\p"
	.string "Thought I'd check out the scene here.\p"
	.string "Maybe meet some intellectuals who\n"
	.string "appreciate fine conversation.$"

DiscoBasement_Giel_Text_3:
# 226 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "See those lovely ladies over there?\p"
	.string "I've been trying to impress them with my\n"
	.string "knowledge.\p"
	.string "Watch this!$"

DiscoBasement_Giel_Text_4:
# 232 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey Ladies!!\p"
	.string "Did you know about the historical\n"
	.string "conflicts in the Kanto region?\p"
	.string "Fascinating stuff, really.\p"
	.string "The war between Celadon and Saffron...\p"
	.string "The trade disputes of Vermilion\n"
	.string "Harbor...\p"
	.string "Classic historical drama!$"

DiscoBasement_Giel_Text_5:
# 239 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Ugh, this guy again?\p"
	.string "Nobody wants to hear about ancient\n"
	.string "wars!\p"
	.string "We're trying to DANCE here!$"

DiscoBasement_Giel_Text_6:
# 244 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Seriously, take the hint!\p"
	.string "You've been hovering around us all\n"
	.string "night!\p"
	.string "So creepy!$"

DiscoBasement_Giel_Text_7:
# 249 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Security! Can someone get this weirdo\n"
	.string "away from us?!$"

DiscoBasement_Giel_Text_8:
# 255 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "FINE!\p"
	.string "I see how it is!\p"
	.string "You just can't appreciate intellectual\n"
	.string "discourse!\p"
	.string "This is what's wrong with society today!$"

DiscoBasement_Giel_Text_9:
# 258 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Women just don't appreciate a man who\n"
	.string "understands history!\p"
	.string "I try to share my knowledge and THIS is\n"
	.string "the thanks I get?!$"

DiscoBasement_Giel_Text_10:
# 261 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I'm done with this city!\p"
	.string "The disco scene here is TERRIBLE\n"
	.string "anyway!\p"
	.string "I'm going back to Hezik City where\n"
	.string "people actually have CULTURE!$"

DiscoBasement_Dancer_1_Text_0:
# 283 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Can you FEEL it?!\p"
	.string "The bass is hitting different tonight!\p"
	.string "I haven't stopped dancing for THREE\n"
	.string "HOURS!$"

DiscoBasement_Dancer_2_Text_0:
# 290 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "This place is the best-kept secret in\n"
	.string "Lionsarch!\p"
	.string "No Faculty goons, no harbor noise...\p"
	.string "Just pure vibes and disco lights!$"

DiscoBasement_Dancer_3_Text_0:
# 297 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Peter only plays vinyl.\p"
	.string "He says digital music doesn't have the\n"
	.string "same soul.\p"
	.string "I don't know about that, but this music\n"
	.string "SLAPS!$"

DiscoBasement_Chillaxer_Text_0:
# 304 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I needed this, you know?\p"
	.string "The city above is all smog and industry.\p"
	.string "Down here, it's like traveling back to a\n"
	.string "better time.$"

DiscoBasement_AliFriend_Text_0:
# 311 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Ali from Siltroot Town hooks Peter up\n"
	.string "with the good stuff.\p"
	.string "I mean... the good MUSIC.\p"
	.string "Yeah. Definitely just music.$"

DiscoBasement_Oldwoman_Text_0:
# 318 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I used to come here when I was younger.\p"
	.string "Peter's been throwing parties here for\n"
	.string "decades!\p"
	.string "The music's changed, but the vibe is\n"
	.string "still the same.$"

DiscoBasement_DiscoBall_Text_0:
# 324 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "A massive disco ball spins overhead,\n"
	.string "scattering light across the room.\p"
	.string "It's mesmerizing...$"

DiscoBasement_SpeakerSystem_Text_0:
# 330 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "The Loudred is blasting:\n"
	.string "'Le Freak' by Chic\p"
	.string "'FREAK OUT!'$"

DiscoBasement_VinylCollection_Text_0:
# 336 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Peter's vinyl collection is MASSIVE.\p"
	.string "Hundreds of records, all meticulously\n"
	.string "organized.\p"
	.string "This must have cost a fortune!$"

DiscoBasement_TunnelEntrance_Check_Text_0:
# 349 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey! You can't just walk in there.\p"
	.string "That tunnel is off-limits.\p"
	.string "If you want access, talk to me first.$"

DiscoBasement_SecretEntrance_Text_0:
# 358 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "A discrete entrance hidden behind a\n"
	.string "bookshelf upstairs.\p"
	.string "Very clever!$"
