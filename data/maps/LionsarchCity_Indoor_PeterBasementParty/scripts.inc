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
# 100 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 101 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_26
DiscoBasement_DJ_Peter_1:
# 103 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 104 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	release
	return

DiscoBasement_DJ_Peter_2:
# 12 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_RECEIVED_CLIMBING_ROPE, DiscoBasement_DJ_Peter_7
# 63 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 64 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_16
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_3:
# 68 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 69 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_17
# 70 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 71 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 72 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_18
# 73 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 74 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	removeitem ITEM_SOOT_SACK, 1
# 75 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_DELIVERED_ALIS_PACKAGE_TO_PETER
# 76 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 77 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_19
# 78 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 79 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 80 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_20
# 81 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 82 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 83 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_21
# 84 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 85 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 86 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_22
# 87 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 88 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 89 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_23
# 90 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 91 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	giveitem ITEM_CLIMBING_ROPE
# 92 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_RECEIVED_CLIMBING_ROPE
# 93 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 94 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_24
# 95 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 96 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 97 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_25
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_7:
# 13 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 14 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_COMPLETE, DiscoBasement_DJ_Peter_10
# 31 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_TUNNEL_OPEN, DiscoBasement_DJ_Peter_11
# 33 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_PETER_GAVE_TUNNEL_PERMISSION, DiscoBasement_DJ_Peter_12
# 35 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, DiscoBasement_DJ_Peter_13
# 59 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_15
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_10:
# 15 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_PETER_GAVE_FACTORY_REWARD, DiscoBasement_DJ_Peter_19
# 18 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_2
# 19 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 20 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 21 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_3
# 22 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 23 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 24 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_4
# 25 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 26 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	giveitem ITEM_TM38
# 27 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_PETER_GAVE_FACTORY_REWARD
# 28 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 29 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_5
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_11:
# 32 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_6
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_12:
# 34 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_7
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_13:
# 36 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_8
# 37 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 38 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 39 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_9
# 40 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 41 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 42 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_10
# 43 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 44 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 45 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_11
# 46 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 47 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 48 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_12
# 49 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 50 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 51 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_13
# 52 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 53 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_DJ_Peter_Text_0
# 54 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_14
# 55 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 56 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_PETER_GAVE_TUNNEL_PERMISSION
# 57 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_HIDE_RECTOR_ELECTABUZZ_AFTER_BATTLE
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_19:
# 16 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DJ_Peter_Text_1
	goto DiscoBasement_DJ_Peter_1


DiscoBasement_Guard_DJStage::
# 109 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lock
# 110 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 111 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 112 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 113 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_BASEMENT_DJ_STAGE_ACCESS, DiscoBasement_Guard_DJStage_2
	checkitem ITEM_SOOT_SACK, 1
# 0 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne DiscoBasement_Guard_DJStage_3
# 164 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 165 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_6
DiscoBasement_Guard_DJStage_1:
# 167 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 168 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	release
	return

DiscoBasement_Guard_DJStage_2:
# 114 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 115 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_1
# 116 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_0
# 117 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq DiscoBasement_Guard_DJStage_17
DiscoBasement_Guard_DJStage_15:
# 122 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_14
DiscoBasement_Guard_DJStage_12:
# 127 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_11
DiscoBasement_Guard_DJStage_7:
# 132 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
	goto DiscoBasement_Guard_DJStage_1

DiscoBasement_Guard_DJStage_3:
# 134 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 135 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_2
# 136 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 137 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 138 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_3
# 139 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 140 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 141 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_4
# 142 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 143 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_BASEMENT_DJ_STAGE_ACCESS
# 144 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_DJStage_Text_0
# 145 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_DJStage_Text_5
# 146 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_0
# 147 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq DiscoBasement_Guard_DJStage_30
DiscoBasement_Guard_DJStage_28:
# 152 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_27
DiscoBasement_Guard_DJStage_25:
# 157 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_24
DiscoBasement_Guard_DJStage_20:
# 162 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
	goto DiscoBasement_Guard_DJStage_1

DiscoBasement_Guard_DJStage_8:
# 118 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_1
# 119 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 120 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_9:
# 123 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_3
# 124 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 125 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_10:
# 128 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_4
# 129 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 130 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_11:
# 127 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq DiscoBasement_Guard_DJStage_10
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_14:
# 122 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq DiscoBasement_Guard_DJStage_9
	goto DiscoBasement_Guard_DJStage_12

DiscoBasement_Guard_DJStage_17:
# 117 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq DiscoBasement_Guard_DJStage_8
	goto DiscoBasement_Guard_DJStage_15

DiscoBasement_Guard_DJStage_21:
# 148 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_1
# 149 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 150 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_22:
# 153 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_3
# 154 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 155 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_23:
# 158 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_4
# 159 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 160 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_24:
# 157 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq DiscoBasement_Guard_DJStage_23
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_27:
# 152 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq DiscoBasement_Guard_DJStage_22
	goto DiscoBasement_Guard_DJStage_25

DiscoBasement_Guard_DJStage_30:
# 147 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq DiscoBasement_Guard_DJStage_21
	goto DiscoBasement_Guard_DJStage_28


DiscoBasement_Guard_Tunnel::
# 173 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 174 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 175 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 176 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_TUNNEL_OPEN, DiscoBasement_Guard_Tunnel_2
# 182 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_PETER_GAVE_TUNNEL_PERMISSION, DiscoBasement_Guard_Tunnel_5
# 189 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_3
# 190 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 191 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 192 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_4
# 193 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 194 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 195 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_5, MSGBOX_AUTOCLOSE
# 196 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 197 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return

DiscoBasement_Guard_Tunnel_2:
# 177 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_1, MSGBOX_AUTOCLOSE
# 178 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 179 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	end

DiscoBasement_Guard_Tunnel_5:
# 183 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Tunnel_Text_2, MSGBOX_AUTOCLOSE
# 184 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 185 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_STEEL_FACTORY_TUNNEL_OPEN
# 186 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	end


DiscoBasement_Guard_Machoke::
# 202 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 203 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 204 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Machoke_Text_0
# 205 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Machoke_Text_1
# 206 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 207 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Guard_Staring::
# 212 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 213 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 214 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Staring_Text_0
# 215 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Guard_Staring_Text_1
# 216 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 217 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Giel::
# 221 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lock
# 222 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 223 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 224 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 225 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_GIEL_LEFT_BASEMENT, DiscoBasement_Giel_2
# 230 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 231 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_1
# 232 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 233 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 234 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_2
# 235 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 237 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 7, DiscoBasement_Giel_Movement_0
# 238 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 239 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 16
	goto_if_eq DiscoBasement_Giel_6
DiscoBasement_Giel_4:
# 243 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	delay 30
# 244 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 245 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_3, MSGBOX_AUTOCLOSE
# 246 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 247 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 7, DiscoBasement_Giel_Movement_2
# 248 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 250 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 251 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_4, MSGBOX_AUTOCLOSE
# 252 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 254 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	playse SE_PIN
# 255 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 4, DiscoBasement_Giel_Movement_3
# 256 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 257 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker NULL
# 258 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_5
# 259 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 260 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	playse SE_PIN
# 261 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 5, DiscoBasement_Giel_Movement_3
# 262 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 263 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_6
# 264 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 265 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	playse SE_PIN
# 266 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 6, DiscoBasement_Giel_Movement_3
# 267 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 268 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_7, MSGBOX_AUTOCLOSE
# 269 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 270 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 7, DiscoBasement_Giel_Movement_4
# 271 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 272 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 273 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 274 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_8
# 275 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 276 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 277 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_9
# 278 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 279 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Giel_Text_0
# 280 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Giel_Text_10, MSGBOX_AUTOCLOSE
# 281 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmessage
# 283 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_0, 17
	goto_if_eq DiscoBasement_Giel_11
DiscoBasement_Giel_9:
# 286 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Giel_Movement_6
# 287 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 7, DiscoBasement_Giel_Movement_7
# 288 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 289 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setflag FLAG_GIEL_LEFT_BASEMENT
# 290 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	removeobject 7
# 292 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 4, DiscoBasement_Giel_Movement_8
# 293 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 5, DiscoBasement_Giel_Movement_8
# 294 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 6, DiscoBasement_Giel_Movement_8
# 295 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 296 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	release
	return

DiscoBasement_Giel_2:
# 227 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	end

DiscoBasement_Giel_5:
# 240 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Giel_Movement_1
	goto DiscoBasement_Giel_4

DiscoBasement_Giel_6:
# 239 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq DiscoBasement_Giel_5
	goto DiscoBasement_Giel_4

DiscoBasement_Giel_10:
# 284 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_Giel_Movement_5
	goto DiscoBasement_Giel_9

DiscoBasement_Giel_11:
# 283 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq DiscoBasement_Giel_10
	goto DiscoBasement_Giel_9


DiscoBasement_Dancer_1::
# 300 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 301 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 302 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Dancer_1_Text_0
# 303 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Dancer_2::
# 307 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 308 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 309 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Dancer_2_Text_0
# 310 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Dancer_3::
# 314 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 315 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 316 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Dancer_3_Text_0
# 317 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Chillaxer::
# 321 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 322 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 323 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Chillaxer_Text_0
# 324 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_AliFriend::
# 328 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 329 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 330 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_AliFriend_Text_0
# 331 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_Oldwoman::
# 335 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 336 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	faceplayer
# 337 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_Oldwoman_Text_0
# 338 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_DiscoBall::
# 342 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 343 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_DiscoBall_Text_0
# 344 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_SpeakerSystem::
# 348 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 349 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_SpeakerSystem_Text_0
# 350 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_VinylCollection::
# 354 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 355 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_VinylCollection_Text_0
# 356 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


DiscoBasement_TunnelEntrance_Check::
# 360 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_TUNNEL_OPEN, DiscoBasement_TunnelEntrance_Check_2
# 363 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 364 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	playse SE_PIN
# 365 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement 13, DiscoBasement_TunnelEntrance_Check_Movement_0
# 366 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 367 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
# 368 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_TunnelEntrance_Check_Text_0, MSGBOX_AUTOCLOSE
# 369 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	applymovement LOCALID_PLAYER, DiscoBasement_TunnelEntrance_Check_Movement_1
# 370 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	waitmovement
# 371 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	end

DiscoBasement_TunnelEntrance_Check_2:
	end


DiscoBasement_SecretEntrance::
# 376 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	lockall
# 377 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	msgbox DiscoBasement_SecretEntrance_Text_0
# 378 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	releaseall
	return


# 116 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_0:
# 116 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
# 116 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_left
	step_end

# 118 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_1:
# 118 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
# 118 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_up
	step_end

# 120 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_2:
# 120 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_left
# 120 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_down
	step_end

# 123 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_3:
# 123 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_up
# 123 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_up
	step_end

# 128 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Guard_DJStage_Movement_4:
# 128 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 128 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
	step_end

# 237 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_0:
# 237 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_left
	step_end

# 240 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_1:
# 240 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 240 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
# 240 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_left
	step_end

# 247 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_2:
# 247 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_left
	step_end

# 255 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_3:
# 255 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	emote_exclamation_mark
# 255 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_right
	step_end

# 270 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_4:
# 270 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_right
# 270 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_player
	step_end

# 284 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_5:
# 284 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	jump_right
# 284 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_down
	step_end

# 286 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_6:
# 286 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_down
	step_end

# 287 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_7:
# 287 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 287 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 287 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 287 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 287 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
# 287 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_down
	step_end

# 292 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_Giel_Movement_8:
# 292 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	face_up
	step_end

# 365 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_TunnelEntrance_Check_Movement_0:
# 365 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	emote_exclamation_mark
	step_end

# 369 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
DiscoBasement_TunnelEntrance_Check_Movement_1:
# 369 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	walk_up
	step_end

DiscoBasement_DJ_Peter_Text_0:
# 8 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "DJ PETER$"

DiscoBasement_DJ_Peter_Text_1:
# 16 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Seriously, you did it.\p"
	.string "The Faculty's gone, the factory's quiet,\n"
	.string "and I can finally breathe again.\p"
	.string "Party's louder than ever down here.\p"
	.string "That's all thanks to you.$"

DiscoBasement_DJ_Peter_Text_2:
# 18 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "You actually did it.\p"
	.string "I didn't think... I mean, I KNEW you could\n"
	.string "do it.\p"
	.string "But still.\p"
	.string "The Faculty. Gone. From my city.$"

DiscoBasement_DJ_Peter_Text_3:
# 21 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Look, I owe you.\p"
	.string "I had this stashed away for a while.\p"
	.string "Got it the hard way, if you know what I\n"
	.string "mean.\p"
	.string "There was a period in my life where I ran\n"
	.string "a little... HOT.\p"
	.string "Too hot.\p"
	.string "Like,\n"
	.string "everything-on-fire-including-myself\l"
	.string "hot.\p"
	.string "Not my proudest chapter.$"

DiscoBasement_DJ_Peter_Text_4:
# 24 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Point is, I learned a thing or two about\n"
	.string "Overheat.\p"
	.string "Not the kind you want to experience\n"
	.string "personally, trust me.\p"
	.string "But the kind your Pokemon can actually\n"
	.string "USE?\p"
	.string "That's a different story.\p"
	.string "Here. Take the TM.\p"
	.string "You'll do more good with it than I ever\n"
	.string "did.$"

DiscoBasement_DJ_Peter_Text_5:
# 29 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Now get back out there.\p"
	.string "And hey... stay funky.$"

DiscoBasement_DJ_Peter_Text_6:
# 32 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Welcome back to the GROOVE ZONE!\p"
	.string "You making progress in there?\p"
	.string "That factory's been giving me the\n"
	.string "creeps for years.\p"
	.string "Good to know someone's finally poking\n"
	.string "around.$"

DiscoBasement_DJ_Peter_Text_7:
# 34 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Tunnel's still open on our end.\p"
	.string "Paolo will let you through.\p"
	.string "Get in there and find out what they're\n"
	.string "really building.$"

DiscoBasement_DJ_Peter_Text_8:
# 36 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey... you're back.\p"
	.string "You've got that look.\p"
	.string "Like you've just been somewhere you\n"
	.string "weren't supposed to be.\p"
	.string "...What happened?$"

DiscoBasement_DJ_Peter_Text_9:
# 39 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "...\p"
	.string "They pushed you into a CREVASSE?!\p"
	.string "I always knew the Faculty played dirty.\p"
	.string "But throwing someone into a pit...$"

DiscoBasement_DJ_Peter_Text_10:
# 42 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "And they've already moved everything\n"
	.string "to the factory.\p"
	.string "This is escalating faster than I\n"
	.string "thought.$"

DiscoBasement_DJ_Peter_Text_11:
# 45 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I've been watching those people dig\n"
	.string "into those mountains for months.\p"
	.string "Every week the shipments get bigger.\p"
	.string "Every week the tremors get worse.$"

DiscoBasement_DJ_Peter_Text_12:
# 48 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I can't sit on this anymore.\p"
	.string "You need to get into that factory.\p"
	.string "Luckely I know a way in that the\n"
	.string "Faculty doesn't.$"

DiscoBasement_DJ_Peter_Text_13:
# 51 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "There's a tunnel running from this\n"
	.string "basement straight to the factory's\l"
	.string "lower level.\p"
	.string "Old smuggling route.\p"
	.string "The Faculty thinks they sealed their\n"
	.string "end years ago.\p"
	.string "They didn't seal ours.$"

DiscoBasement_DJ_Peter_Text_14:
# 54 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Paolo guards the entrance down here.\p"
	.string "I'll tell him you have my blessing to go\n"
	.string "through.\p"
	.string "Get in there.\p"
	.string "Find out what they're really building.\p"
	.string "And be careful.$"

DiscoBasement_DJ_Peter_Text_15:
# 59 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey, you're still kicking around\n"
	.string "Lionsarch!\p"
	.string "Good to see you.\p"
	.string "Something's been feeling off up in\n"
	.string "those mountains lately.\p"
	.string "Stay funky out there.$"

DiscoBasement_DJ_Peter_Text_16:
# 64 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey, thanks again for the delivery!\p"
	.string "Don't forget you've still got those\n"
	.string "boots of mine!$"

DiscoBasement_DJ_Peter_Text_17:
# 69 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Wait... that smell...\p"
	.string "Is that what I think it is?$"

DiscoBasement_DJ_Peter_Text_18:
# 72 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "You brought the goods from Ali!\p"
	.string "My man! This is exactly what I needed!\p"
	.string "The party can really get started now!$"

DiscoBasement_DJ_Peter_Text_19:
# 77 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Let me return the favor - first round\n"
	.string "of dancing is on the house!$"

DiscoBasement_DJ_Peter_Text_20:
# 80 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "...\p"
	.string "No?\p"
	.string "You don't want to dance?\p"
	.string "You've got that look.\p"
	.string "Someone with places to be.\p"
	.string "Tough crowd!$"

DiscoBasement_DJ_Peter_Text_21:
# 83 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Alright, let me return the favor another\n"
	.string "way.\p"
	.string "When I first rolled into Lionsarch, I\n"
	.string "had nothing.\p"
	.string "No gig, no place, no plan.\p"
	.string "Just a pair of boots and a whole lot of\n"
	.string "nerve.$"

DiscoBasement_DJ_Peter_Text_22:
# 86 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Nights I'd dance in 'em right here on\n"
	.string "this floor.\p"
	.string "Days I'd climb the Lion Mountains in the\n"
	.string "same pair.\p"
	.string "Up those rocky ridges before the sun\n"
	.string "got too high.\p"
	.string "Same boots. Same rhythm. Different\n"
	.string "terrain.$"

DiscoBasement_DJ_Peter_Text_23:
# 89 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I got new ones eventually.\p"
	.string "But these old ones deserve someone\n"
	.string "who'll actually use 'em.\p"
	.string "Here. Take 'em.\p"
	.string "They'll get you places.$"

DiscoBasement_DJ_Peter_Text_24:
# 94 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Come back sometime, yeah?\p"
	.string "There's more down here than just good\n"
	.string "music.\p"
	.string "You talk to the right people... you'd be\n"
	.string "surprised what doors open.$"

DiscoBasement_DJ_Peter_Text_25:
# 97 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Now get out there.\p"
	.string "And remember... stay funky!$"

DiscoBasement_DJ_Peter_Text_26:
# 101 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Welcome to the GROOVE ZONE!\p"
	.string "This is where the real party happens!\p"
	.string "Old school disco, baby!\p"
	.string "None of that modern stuff - just pure,\n"
	.string "unadulterated FUNK!$"

DiscoBasement_Guard_DJStage_Text_0:
# 112 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "BOUNCER CARLO$"

DiscoBasement_Guard_DJStage_Text_1:
# 115 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Alright, you're cool.\p"
	.string "Our VIPs can go where ever they want.\p"
	.string "Enjoy the party!$"

DiscoBasement_Guard_DJStage_Text_2:
# 135 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey, hold up.\p"
	.string "Nobody gets past me without clearance.\p"
	.string "...$"

DiscoBasement_Guard_DJStage_Text_3:
# 138 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Wait... is that Ali's stash you're\n"
	.string "carrying?\p"
	.string "I can smell it from here!\p"
	.string "Damn, that's the good stuff!$"

DiscoBasement_Guard_DJStage_Text_4:
# 141 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Alright, you're clearly here on business.\p"
	.string "Peter's gonna want to see you.\p"
	.string "Go on through, VIP access granted!$"

DiscoBasement_Guard_DJStage_Text_5:
# 145 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Tell Peter I said what's up!$"

DiscoBasement_Guard_DJStage_Text_6:
# 165 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey, VIP area only past this point.\p"
	.string "No entry without clearance from the\n"
	.string "boss.\p"
	.string "You want in? Talk to someone who knows\n"
	.string "someone.$"

DiscoBasement_Guard_Tunnel_Text_0:
# 175 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "BOUNCER PAOLO$"

DiscoBasement_Guard_Tunnel_Text_1:
# 177 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Peter said to let you through.\p"
	.string "Watch yourself in there.\p"
	.string "The Faculty doesn't take kindly to\n"
	.string "uninvited guests.$"

DiscoBasement_Guard_Tunnel_Text_2:
# 183 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Just got the clearance over the radio\n"
	.string "from Peter.\p"
	.string "Said you did him a solid.\p"
	.string "He asked me to let you through the\n"
	.string "tunnel, the keys are in the door.\p"
	.string "Be careful in there, alright?$"

DiscoBasement_Guard_Tunnel_Text_3:
# 189 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "You see that old tunnel over there?\p"
	.string "It used to run all the way to the Iron\n"
	.string "Factory.\p"
	.string "Back in the day, it was a smuggling\n"
	.string "route.\p"
	.string "Direct link from the harbor, if you know\n"
	.string "what I mean.$"

DiscoBasement_Guard_Tunnel_Text_4:
# 192 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Used to move all kinds of...\n"
	.string "'merchandise' through there.\p"
	.string "No customs, no questions asked.\p"
	.string "The good old days, you know?$"

DiscoBasement_Guard_Tunnel_Text_5:
# 195 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
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
# 204 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "MACHOKE$"

DiscoBasement_Guard_Machoke_Text_1:
# 205 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "MACHOKE! CHOKE!$"

DiscoBasement_Guard_Staring_Text_0:
# 214 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "BOUNCER MARCO$"

DiscoBasement_Guard_Staring_Text_1:
# 215 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Man, look at those dancers go!\p"
	.string "Peter really knows how to throw a\n"
	.string "party!\p"
	.string "I could watch them dance all night!$"

DiscoBasement_Giel_Text_0:
# 224 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "GIEL$"

DiscoBasement_Giel_Text_1:
# 231 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Oh hey, it's you!\p"
	.string "Small world, right?\p"
	.string "I got here way faster than you.\p"
	.string "I know people, you see. Connections.$"

DiscoBasement_Giel_Text_2:
# 234 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "When you mentioned Lionsarch City back\n"
	.string "in Siltroot Town, I got inspired.\p"
	.string "Thought I'd check out the scene here.\p"
	.string "Maybe meet some intellectuals who\n"
	.string "appreciate fine conversation.$"

DiscoBasement_Giel_Text_3:
# 245 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "See those lovely ladies over there?\p"
	.string "I've been trying to impress them with my\n"
	.string "knowledge.\p"
	.string "Watch this!$"

DiscoBasement_Giel_Text_4:
# 251 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey Ladies!!\p"
	.string "Did you know about the historical\n"
	.string "conflicts in the Kanto region?\p"
	.string "Fascinating stuff, really.\p"
	.string "The war between Celadon and Saffron...\p"
	.string "The trade disputes of Vermilion\n"
	.string "Harbor...\p"
	.string "Classic historical drama!$"

DiscoBasement_Giel_Text_5:
# 258 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Ugh, this guy again?\p"
	.string "Nobody wants to hear about ancient\n"
	.string "wars!\p"
	.string "We're trying to DANCE here!$"

DiscoBasement_Giel_Text_6:
# 263 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Seriously, take the hint!\p"
	.string "You've been hovering around us all\n"
	.string "night!\p"
	.string "So creepy!$"

DiscoBasement_Giel_Text_7:
# 268 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Security! Can someone get this weirdo\n"
	.string "away from us?!$"

DiscoBasement_Giel_Text_8:
# 274 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "FINE!\p"
	.string "I see how it is!\p"
	.string "You just can't appreciate intellectual\n"
	.string "discourse!\p"
	.string "This is what's wrong with society today!$"

DiscoBasement_Giel_Text_9:
# 277 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Women just don't appreciate a man who\n"
	.string "understands history!\p"
	.string "I try to share my knowledge and THIS is\n"
	.string "the thanks I get?!$"

DiscoBasement_Giel_Text_10:
# 280 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I'm done with this city!\p"
	.string "The disco scene here is TERRIBLE\n"
	.string "anyway!\p"
	.string "I'm going back to Hezik City where\n"
	.string "people actually have CULTURE!$"

DiscoBasement_Dancer_1_Text_0:
# 302 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Can you FEEL it?!\p"
	.string "The bass is hitting different tonight!\p"
	.string "I haven't stopped dancing for THREE\n"
	.string "HOURS!$"

DiscoBasement_Dancer_2_Text_0:
# 309 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "This place is the best-kept secret in\n"
	.string "Lionsarch!\p"
	.string "No Faculty goons, no harbor noise...\p"
	.string "Just pure vibes and disco lights!$"

DiscoBasement_Dancer_3_Text_0:
# 316 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "PETER only plays vinyl.\p"
	.string "He says digital music doesn't have the\n"
	.string "same soul.\p"
	.string "I don't know about that, but this music\n"
	.string "SLAPS!$"

DiscoBasement_Chillaxer_Text_0:
# 323 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I needed this, you know?\p"
	.string "The city above is all smog and industry.\p"
	.string "Down here, it's like traveling back to a\n"
	.string "better time.$"

DiscoBasement_AliFriend_Text_0:
# 330 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "ALI from Siltroot Town hooks PETER up\n"
	.string "with the good stuff.\p"
	.string "I mean... the good MUSIC.\p"
	.string "Yeah. Definitely just music.$"

DiscoBasement_Oldwoman_Text_0:
# 337 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "I used to come here when I was younger.\p"
	.string "PETER's been throwing parties here for\n"
	.string "decades!\p"
	.string "The music's changed, but the vibe is\n"
	.string "still the same.$"

DiscoBasement_DiscoBall_Text_0:
# 343 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "A massive disco ball spins overhead,\n"
	.string "scattering light across the room.\p"
	.string "It's mesmerizing...$"

DiscoBasement_SpeakerSystem_Text_0:
# 349 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "The Loudred is blasting:\n"
	.string "'Le Freak' by Chic\p"
	.string "'FREAK OUT!'$"

DiscoBasement_VinylCollection_Text_0:
# 355 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "PETER's vinyl collection is MASSIVE.\p"
	.string "Hundreds of records, all meticulously\n"
	.string "organized.\p"
	.string "This must have cost a fortune!$"

DiscoBasement_TunnelEntrance_Check_Text_0:
# 368 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "Hey! You can't just walk in there.\p"
	.string "That tunnel is off-limits.\p"
	.string "If you want access, talk to me first.$"

DiscoBasement_SecretEntrance_Text_0:
# 377 "data/maps/LionsarchCity_Indoor_PeterBasementParty/scripts.pory"
	.string "A discrete entrance hidden behind a\n"
	.string "bookshelf upstairs.\p"
	.string "Very clever!$"
