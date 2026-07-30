Marshduke_Indoor_Chatedral_MapScripts::
# 2 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Marshduke_Indoor_Chatedral_MapScripts_MAP_SCRIPT_ON_LOAD
# 5 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Marshduke_Indoor_Chatedral_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Marshduke_Indoor_Chatedral_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	call Marshduke_Indoor_Chatedral_OnLoad
	return

Marshduke_Indoor_Chatedral_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	map_script_2 VAR_MARSHDUKE_CATHEDRAL_VISION_STATE, 2, Marshduke_Indoor_Chatedral_EventScript_VisionReturn
	.2byte 0


Marshduke_Indoor_Chatedral_Sign_Alakazam::
# 11 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 12 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 13 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_Sign_Alakazam_Text_0, MSGBOX_YESNO
# 14 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 15 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Marshduke_Indoor_Chatedral_Sign_Alakazam_2
Marshduke_Indoor_Chatedral_Sign_Alakazam_1:
# 18 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return

Marshduke_Indoor_Chatedral_Sign_Alakazam_2:
# 16 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	goto Marshduke_Indoor_Chatedral_EventScript_Sign_Alakazam_Read
	goto Marshduke_Indoor_Chatedral_Sign_Alakazam_1


Marshduke_Indoor_Chatedral_Plague_Empty::
# 22 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 23 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 24 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_Plague_Empty_Text_0, MSGBOX_YESNO
# 25 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 26 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Marshduke_Indoor_Chatedral_Plague_Empty_2
Marshduke_Indoor_Chatedral_Plague_Empty_1:
# 29 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return

Marshduke_Indoor_Chatedral_Plague_Empty_2:
# 27 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	goto Marshduke_Indoor_Chatedral_EventScript_Sign_EmptyShrine
	goto Marshduke_Indoor_Chatedral_Plague_Empty_1


Marshduke_Indoor_Chatedral_EventScript_Sign_Alakazam_Read::
# 33 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sign_Alakazam_Read_Text_0, MSGBOX_AUTOCLOSE
# 34 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 35 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sign_Alakazam_Read_Text_1, MSGBOX_AUTOCLOSE
# 36 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 37 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_OnLoad::
# 43 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	compare VAR_CATHEDRAL_STATE_MARSHDUKE, 0
	goto_if_eq Marshduke_Indoor_Chatedral_OnLoad_2
Marshduke_Indoor_Chatedral_OnLoad_1:
# 46 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	compare VAR_CATHEDRAL_STATE_MARSHDUKE, 0
	goto_if_ne Marshduke_Indoor_Chatedral_OnLoad_4
	return

Marshduke_Indoor_Chatedral_OnLoad_2:
# 44 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setflag FLAG_MARSHDUKE_CATHEDRAL_HIDE_BEFORE_TOUR
	goto Marshduke_Indoor_Chatedral_OnLoad_1

Marshduke_Indoor_Chatedral_OnLoad_4:
# 47 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	clearflag FLAG_MARSHDUKE_CATHEDRAL_HIDE_BEFORE_TOUR
	return


Marshduke_Indoor_Chatedral_EventScript_Alakazam::
# 52 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 53 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 54 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Alakazam_Text_0, MSGBOX_YESNO
# 55 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 56 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Marshduke_Indoor_Chatedral_EventScript_Alakazam_2
Marshduke_Indoor_Chatedral_EventScript_Alakazam_1:
# 59 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return

Marshduke_Indoor_Chatedral_EventScript_Alakazam_2:
# 57 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	goto Marshduke_Indoor_Chatedral_EventScript_Latias
	goto Marshduke_Indoor_Chatedral_EventScript_Alakazam_1


Marshduke_Indoor_Chatedral_EventScript_Latias::
# 67 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setvar VAR_MARSHDUKE_CATHEDRAL_VISION_STATE, 1
# 68 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	fadescreen FADE_TO_BLACK
# 69 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	warpsilent MAP_MARSHDUKE_INDOOR_VISION_LATIOS_LATIAS, 11, 7
# 70 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitstate
# 71 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_VisionReturn::
# 75 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setvar VAR_MARSHDUKE_CATHEDRAL_VISION_STATE, 0
# 76 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 77 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 25, Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Movement_0
# 78 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 79 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Text_0, MSGBOX_AUTOCLOSE
# 80 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 81 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 25, Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Movement_1
# 82 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 83 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Sister_Wren::
# 87 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 88 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 89 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sister_Wren_Text_0, MSGBOX_AUTOCLOSE
# 90 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 91 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan::
# 97 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 98 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 99 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 100 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_1, MSGBOX_AUTOCLOSE
# 101 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 102 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 103 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_2, MSGBOX_AUTOCLOSE
# 104 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 105 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 30, Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Movement_0
# 106 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 107 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Sign_LatiosLatias::
# 111 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 112 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 113 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sign_LatiosLatias_Text_0, MSGBOX_AUTOCLOSE
# 114 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 115 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_NPC_HoohLugia::
# 119 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 120 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 121 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_HoohLugia_Text_0, MSGBOX_AUTOCLOSE
# 122 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 123 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_NPC_EnteiRaikouSuicune::
# 127 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 128 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 129 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_EnteiRaikouSuicune_Text_0, MSGBOX_AUTOCLOSE
# 130 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 131 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_NPC_MewMewtwo::
# 135 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 136 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 137 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_MewMewtwo_Text_0, MSGBOX_AUTOCLOSE
# 138 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 139 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza::
# 143 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 144 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 145 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 146 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 15, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 147 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 148 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_0
# 149 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_1, MSGBOX_AUTOCLOSE
# 150 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 151 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 15, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_1
# 152 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 153 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_0
# 154 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_2, MSGBOX_AUTOCLOSE
# 155 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 156 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 157 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 34, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_2
# 158 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 159 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_M_MINIMIZE
# 160 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	callnative SetCastformSunnyForm
# 161 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 34, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_3
# 162 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 163 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 164 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 34, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_4
# 165 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 166 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 34, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_5
# 167 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 168 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_M_MINIMIZE
# 169 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	callnative SetCastformSnowyForm
# 170 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 34, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_5
# 171 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 172 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 173 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 15, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_6
# 174 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 175 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_0
# 176 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_3, MSGBOX_AUTOCLOSE
# 177 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 178 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 179 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 34, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_7
# 180 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 15, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_7
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_0
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_4, MSGBOX_AUTOCLOSE
# 184 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 185 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Sign_EmptyShrine::
# 189 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 190 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 191 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sign_EmptyShrine_Text_0, MSGBOX_AUTOCLOSE
# 192 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 193 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Cathedral_Introduction_Ms_Stone::
# 198 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 199 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setvar VAR_CATHEDRAL_STATE_MARSHDUKE, 1
# 200 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 201 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 202 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 203 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_0
# 205 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 206 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 207 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_1, MSGBOX_AUTOCLOSE
# 208 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 209 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_0
# 210 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 211 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 212 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_1
# 213 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 214 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2, MSGBOX_AUTOCLOSE
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 218 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_7
# 219 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 220 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 221 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_3, MSGBOX_AUTOCLOSE
# 222 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 223 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 224 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 225 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 226 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 227 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 228 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 229 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_4, MSGBOX_AUTOCLOSE
# 230 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 231 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 232 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_7
# 233 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 234 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 235 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_5, MSGBOX_AUTOCLOSE
# 236 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 237 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_3
# 238 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_4
# 239 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_5
# 240 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 241 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 242 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_6, MSGBOX_AUTOCLOSE
# 243 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 244 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 245 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 246 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 247 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 248 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 249 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_7
# 250 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 251 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_6
# 252 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 253 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_8, MSGBOX_AUTOCLOSE
# 254 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Movement_0
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 258 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_9, MSGBOX_AUTOCLOSE
# 259 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 260 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 261 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 262 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 263 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_10, MSGBOX_AUTOCLOSE
# 264 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_7
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_8
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_9
# 268 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 269 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 270 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_11, MSGBOX_AUTOCLOSE
# 271 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 272 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 273 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 274 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 275 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 276 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_12
# 277 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_6
# 278 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Movement_0
# 279 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 280 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 281 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_13, MSGBOX_AUTOCLOSE
# 282 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 283 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 40
# 284 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 285 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_14, MSGBOX_AUTOCLOSE
# 286 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 287 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 288 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 289 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_15, MSGBOX_AUTOCLOSE
# 290 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 291 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 292 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 293 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 294 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 295 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_16, MSGBOX_AUTOCLOSE
# 296 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 297 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_10
# 298 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_11
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_12
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_13
# 302 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_17
# 305 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 306 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 307 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 308 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 309 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 310 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_18, MSGBOX_AUTOCLOSE
# 311 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 312 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 313 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_14
# 314 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 315 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 316 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_19, MSGBOX_AUTOCLOSE
# 317 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 318 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 319 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_1
# 320 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 321 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_20, MSGBOX_AUTOCLOSE
# 322 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 323 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_6
# 324 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 325 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 326 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 327 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_21, MSGBOX_AUTOCLOSE
# 328 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 329 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 330 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 331 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 332 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 333 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 334 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_22, MSGBOX_AUTOCLOSE
# 335 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 336 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 337 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_15
# 338 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_16
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_17
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_18
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 344 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_23, MSGBOX_AUTOCLOSE
# 345 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 346 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 347 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 348 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 349 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 350 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 351 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_24
# 352 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 353 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Movement_0
# 354 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 355 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 356 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 357 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_25, MSGBOX_AUTOCLOSE
# 358 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 359 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 360 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_1
# 361 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_26, MSGBOX_AUTOCLOSE
# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 365 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 366 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_27, MSGBOX_AUTOCLOSE
# 367 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 368 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 369 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 370 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 371 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 372 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 373 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_28
# 374 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 375 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 376 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 377 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 378 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 379 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 380 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_19
# 381 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_1
# 382 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 383 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 384 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 385 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_29, MSGBOX_AUTOCLOSE
# 386 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 387 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_20
# 388 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_21
# 390 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_22
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_23
# 392 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 393 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_30, MSGBOX_AUTOCLOSE
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 397 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 398 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 399 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 400 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 401 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_31, MSGBOX_AUTOCLOSE
# 402 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 403 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 404 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Movement_0
# 405 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 406 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_32, MSGBOX_AUTOCLOSE
# 407 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 408 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 409 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 410 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_33, MSGBOX_AUTOCLOSE
# 411 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 412 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 413 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Movement_0
# 414 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 415 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 416 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_34, MSGBOX_AUTOCLOSE
# 417 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 418 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_1
# 419 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 420 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 421 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 422 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 423 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_35
# 424 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 425 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 426 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 427 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_36, MSGBOX_AUTOCLOSE
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 431 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_24
# 432 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_25
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_26
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_27
# 436 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 437 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 438 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_37, MSGBOX_AUTOCLOSE
# 439 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 440 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 441 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 442 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_38, MSGBOX_AUTOCLOSE
# 443 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 444 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 445 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_1
# 446 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 447 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_39, MSGBOX_AUTOCLOSE
# 448 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 449 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 450 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 451 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 452 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_10
# 453 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 454 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_28
# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_29
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_30
# 457 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 458 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 459 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_40, MSGBOX_AUTOCLOSE
# 460 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 461 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 462 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 463 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 464 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 465 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 466 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_41, MSGBOX_AUTOCLOSE
# 467 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_1
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 471 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_42, MSGBOX_AUTOCLOSE
# 472 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 473 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 474 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_31
# 475 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 476 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 477 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_43, MSGBOX_AUTOCLOSE
# 478 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 479 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 480 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 481 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_44, MSGBOX_AUTOCLOSE
# 482 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 483 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 484 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 485 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 486 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 487 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 488 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_45, MSGBOX_AUTOCLOSE
# 489 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 490 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 491 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_1
# 492 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Movement_0
# 493 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_7
# 494 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 495 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 496 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_46, MSGBOX_AUTOCLOSE
# 497 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 498 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 499 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 500 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_47, MSGBOX_AUTOCLOSE
# 501 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 502 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 503 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_6
# 504 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 505 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 506 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 507 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_48, MSGBOX_AUTOCLOSE
# 508 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 509 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 510 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 511 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 512 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 513 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 514 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_49, MSGBOX_AUTOCLOSE
# 515 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 516 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 517 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 518 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_50, MSGBOX_AUTOCLOSE
# 519 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 521 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 522 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_51, MSGBOX_AUTOCLOSE
# 523 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 524 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 525 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 526 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_25, MSGBOX_AUTOCLOSE
# 527 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 528 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 529 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_32
# 530 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 531 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_33
# 532 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 533 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 534 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_52, MSGBOX_AUTOCLOSE
# 535 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 536 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_1
# 537 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 538 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 539 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 540 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_53, MSGBOX_AUTOCLOSE
# 541 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 542 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 120
# 543 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 544 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 545 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_54, MSGBOX_AUTOCLOSE
# 546 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 547 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_34
# 548 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 549 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setflag FLAG_MARSHDUKE_CATHEDRAL_TOUR
# 550 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	clearflag FLAG_MARSHDUKE_CATHEDRAL_HIDE_BEFORE_TOUR
# 551 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	removeobject 14
# 552 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	removeobject 17
# 553 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	addobject 15
# 554 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	addobject 16
# 555 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	addobject 22
# 556 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	addobject 23
# 557 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


# 77 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Movement_0:
# 77 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
	step_end

# 81 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Movement_1:
# 81 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 81 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_down
	step_end

# 105 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Movement_0:
# 105 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_left
	step_end

# 146 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0:
# 146 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_exclamation_mark
	step_end

# 151 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_1:
# 151 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_right
	step_end

# 157 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_2:
# 157 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 157 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 157 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
	step_end

# 161 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_3:
# 161 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 161 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_down
	step_end

# 164 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_4:
# 164 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_exclamation_mark
# 164 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	jump_in_place_down
# 164 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	jump_in_place_down
	step_end

# 166 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_5:
# 166 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_fast_left
# 166 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_fast_left
	step_end

# 173 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_6:
# 173 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_question_mark
	step_end

# 179 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_7:
# 179 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_down
	step_end

# 203 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_0:
# 203 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 203 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 203 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 203 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
	step_end

# 212 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_1:
# 212 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_question_mark
# 212 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 227 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2:
# 227 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 237 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_3:
# 237 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 237 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 237 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 237 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 237 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 237 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 237 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 237 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 238 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_4:
# 238 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 238 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 238 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 238 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 238 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 238 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 239 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_5:
# 239 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 239 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 239 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 239 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 239 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 239 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 239 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 239 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 239 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 251 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_6:
# 251 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_x
# 251 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_right
	step_end

# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_7:
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_8:
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_9:
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 297 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_10:
# 297 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 297 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 297 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 297 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 297 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 297 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_11:
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_12:
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_13:
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 313 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_14:
# 313 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_exclamation_mark
# 313 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_left
	step_end

# 337 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_15:
# 337 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 337 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 337 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 337 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 337 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 337 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_16:
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_17:
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_18:
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 380 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_19:
# 380 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_question_mark
# 380 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 380 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_left
	step_end

# 387 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_20:
# 387 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 387 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 387 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 387 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 387 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 387 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 387 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_21:
# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 390 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_22:
# 390 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 390 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 390 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 390 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 390 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 390 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 390 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 390 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 390 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 390 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 390 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 390 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 390 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 390 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 390 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 390 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_23:
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 431 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_24:
# 431 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 431 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 431 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 431 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
	step_end

# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_25:
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_26:
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_27:
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 454 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_28:
# 454 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 454 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 454 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 454 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 454 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 454 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 454 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 454 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 454 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 454 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 454 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 454 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 454 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 454 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 454 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 454 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_29:
# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_30:
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 474 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_31:
# 474 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_left
# 474 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_exclamation_mark
	step_end

# 529 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_32:
# 529 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 529 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 529 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 529 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 529 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 529 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 529 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 529 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 529 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 529 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 529 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
	step_end

# 531 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_33:
# 531 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 531 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 547 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_34:
# 547 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 547 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 547 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 547 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 547 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 547 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 547 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 547 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 547 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 547 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 547 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
	step_end

Marshduke_Indoor_Chatedral_Sign_Alakazam_Text_0:
# 13 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "There's an infographic mounted here.\n"
	.string "Read it?$"

Marshduke_Indoor_Chatedral_Plague_Empty_Text_0:
# 24 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "There's an plaque attached to the\n"
	.string "altar. Read it?$"

Marshduke_Indoor_Chatedral_EventScript_Sign_Alakazam_Read_Text_0:
# 33 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "THE REMEMBERER\n"
	.string "A visitor's guide.$"

Marshduke_Indoor_Chatedral_EventScript_Sign_Alakazam_Read_Text_1:
# 35 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The latest research, based on sediment\n"
	.string "layers in the rock around it, suggests\l"
	.string "this ALAKAZAM began meditating some\l"
	.string "10,000 years ago, right after the last\l"
	.string "ice age.\p"
	.string "Legend says that when the glaciers\n"
	.string "retreated and the climate changed, it\l"
	.string "simply sat down, and has remained here\l"
	.string "ever since.\p"
	.string "The glacial meltwater has reshaped the\n"
	.string "delta many times over the following\l"
	.string "millennia, yet the hill beneath it shows\l"
	.string "no trace of that erosion.\p"
	.string "An ALAKAZAM forgets nothing, not one\n"
	.string "moment, since birth.\p"
	.string "Its brain never stops growing,\n"
	.string "endlessly multiplying brain cells.\p"
	.string "It is estimated this POKéMON has an\n"
	.string "astounding IQ of 5,000, and a memory\l"
	.string "sharp enough to recall everything it\l"
	.string "has ever experienced.\p"
	.string "Mega Evolution is normally temporary,\n"
	.string "but this ALAKAZAM has held its Mega\l"
	.string "form the entire time.\p"
	.string "It's assumed to be sustaining it\n"
	.string "through sheer psychic power.\p"
	.string "Historical records agree it has never\n"
	.string "once moved.\p"
	.string "And yet the memories it displays\n"
	.string "include events that happened\l"
	.string "elsewhere, while it sat on this very hill.\p"
	.string "How that's possible, science has yet to\n"
	.string "explain.$"

Marshduke_Indoor_Chatedral_EventScript_Alakazam_Text_0:
# 54 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "MEGA ALAKAZAM's spoons glow with a\n"
	.string "faint psychic light...\p"
	.string "Ancient memories stir at the edge of\n"
	.string "your mind, visions of LATIOS and LATIAS\l"
	.string "long past.\p"
	.string "Will you open your mind to them?$"

Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Text_0:
# 79 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Welcome back to the present.\p"
	.string "Give yourself time to readjust to the\n"
	.string "world around you.$"

Marshduke_Indoor_Chatedral_EventScript_Sister_Wren_Text_0:
# 89 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The meaning of the vision in my opinion?\p"
	.string "Interdependence. Take one away and\n"
	.string "the other falls.\p"
	.string "Some people think that is a weakness.\p"
	.string "It's not. It's the core of everything in\n"
	.string "the universe.\p"
	.string "Light and dark, life and death, love and\n"
	.string "hate.\p"
	.string "They are all two sides of the same coin.\p"
	.string "It's the only design that has ever\n"
	.string "worked.\p"
	.string "For willows, for waters, for worlds. For\n"
	.string "Latios and Latias.$"

Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0:
# 99 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "BROTHER ANDRÉ$"

Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_1:
# 100 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Ah, as I was saying, before Ms. STONE so\n"
	.string "rudely assigned me a chore.\p"
	.string "Trashcans are just like black holes.\n"
	.string "Nothing that falls in ever truly leaves.\l"
	.string "It only becomes... unreachable.\p"
	.string "A receipt. A wilted flower. A letter\n"
	.string "someone almost sent. Each one mattered\l"
	.string "enough to keep, once.\p"
	.string "Is that not the shape of every memory\n"
	.string "the ALAKAZAM shows us? Kept.\l"
	.string "Cherished. And then, eventually,\l"
	.string "discarded.\p"
	.string "We built a cathedral for what gets\n"
	.string "remembered.\p"
	.string "But nobody built anything for what\n"
	.string "gets thrown away.\p"
	.string "Perhaps the trashcan is the truer\n"
	.string "altar. The one that does not discrimin...$"

Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_2:
# 103 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...I really should empty this before Ms.\n"
	.string "STONE finds out I've been talking to it\l"
	.string "instead of emptying it.$"

Marshduke_Indoor_Chatedral_EventScript_Sign_LatiosLatias_Text_0:
# 113 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "THE LESSON OF THE TWO HEARTS:\n"
	.string "Love is the only thing that grows larger\l"
	.string "when shared.$"

Marshduke_Indoor_Chatedral_EventScript_NPC_HoohLugia_Text_0:
# 121 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Rumors say LUGIA's storm was the one\n"
	.string "that burned the Brass Tower down, the\l"
	.string "same fire ENTEI, RAIKOU, and SUICUNE\l"
	.string "rose from.\p"
	.string "Even a being that can move oceans\n"
	.string "couldn't stop that fire in time once it\l"
	.string "started.\p"
	.string "Not every disaster bends to strength,\n"
	.string "however great.\p"
	.string "It fled that night, and stayed hidden\n"
	.string "for years, ashamed of what it couldn't\l"
	.string "prevent, until the world needed it\l"
	.string "again.\p"
	.string "Perhaps that's the truer lesson: even\n"
	.string "the mightiest cannot always win. What\l"
	.string "matters is choosing, again and again, to\l"
	.string "use what power you have for good.$"

Marshduke_Indoor_Chatedral_EventScript_NPC_EnteiRaikouSuicune_Text_0:
# 129 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Oh! You caught me dancing with my\n"
	.string "Vapereon.\p"
	.string "I'm a KIMONO GIRL, all the way from\n"
	.string "Ecruteak City in Johto.\p"
	.string "I crossed half the region just to stand\n"
	.string "in front of this ALAKAZAM and watch its\l"
	.string "memory of my hometown.\p"
	.string "My sisters have danced in the ashes of\n"
	.string "the BURNED TOWER for generations, but\l"
	.string "none of us have ever seen it whole. Not\l"
	.string "until I came here.\p"
	.string "Did you know, three hundred years ago,\n"
	.string "some KIMONO GIRLS made this same\l"
	.string "journey, and carried pieces of the\l"
	.string "burned wood to leave it here?\p"
	.string "Those scorched fragments are on\n"
	.string "display in the city's gallery now,\l"
	.string "curated by a collector named ARI.$"

Marshduke_Indoor_Chatedral_EventScript_NPC_MewMewtwo_Text_0:
# 137 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "I've been standing here an hour,\n"
	.string "staring at a creature made in a lab\l"
	.string "beside the one it was copied from.\p"
	.string "Most pilgrims argue about which one's\n"
	.string "the 'real' one, but the memory never\l"
	.string "says, and I don't think it's supposed\l"
	.string "to.\p"
	.string "The circumstances of one's birth are\n"
	.string "irrelevant; it's what you do with the\l"
	.string "gift of life that determines who you\l"
	.string "are.$"

Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_0:
# 148 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Dr. FERRAN$"

Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_1:
# 149 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Careful, don't stand too close.\p"
	.string "My castform is trying to register some\n"
	.string "temperature differences.$"

Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_2:
# 154 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Well, go on.$"

Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_3:
# 176 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "What do you mean?\p"
	.string "Over 9000 degrees?! By Arceus!$"

Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_4:
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Sorry about that.\p"
	.string "Dr. FERRAN, instrumentation.\p"
	.string "I've been measuring the temperature at\n"
	.string "this altar for twenty years now.\p"
	.string "The GROUDON side reads hot enough to\n"
	.string "melt solder.\p"
	.string "The KYOGRE side reads freezing.\p"
	.string "And every sensor I've ever placed\n"
	.string "between them has failed in increasingly\l"
	.string "creative ways.\p"
	.string "Last week my thermometer even\n"
	.string "reported the weather of a country that\l"
	.string "doesn't exist.\p"
	.string "Three weeks ago a humidity gauge that\n"
	.string "started transmitting in Morse code.\p"
	.string "And one time, a probe simply vanished,\n"
	.string "and turned up in my lunchbox three days\l"
	.string "later, slightly damp...\p"
	.string "I've begun to suspect the ALAKAZAM is\n"
	.string "doing this on purpose.$"

Marshduke_Indoor_Chatedral_EventScript_Sign_EmptyShrine_Text_0:
# 191 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "FIVE MEMORIES OF WHAT WAS. ONE SPACE\n"
	.string "FOR WHAT COULD BE. THE DIFFERENCE\l"
	.string "BETWEEN THEM IS US.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0:
# 206 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Ms. STONE$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_1:
# 207 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Ah, a new face! Wonderful.\p"
	.string "I'm the curator and caretaker of this\n"
	.string "cathedral, Head of the Order of the\l"
	.string "Open Eye, and chief remover of pigeons.\p"
	.string "But please, call me Ms. STONE.\p"
	.string "You have the look of someone who\n"
	.string "wandered in.\p"
	.string "Would you like a tour? It's free, and I'm\n"
	.string "very good at it.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2:
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...The seeker arrives at the hour of\n"
	.string "arriving.\p"
	.string "As they always do. As they always have.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_3:
# 221 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "That's BROTHER ANDRÉ...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_4:
# 229 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...I am but a JANITOR!$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_5:
# 235 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "He is but a janitor.\p"
	.string "At the moment, there's no one here but\n"
	.string "the priests of the Order of the Open\l"
	.string "Eye, and us.\p"
	.string "A rare opportunity, let's make the most\n"
	.string "of it.\p"
	.string "Come along, both of you.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_6:
# 242 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "There. That's what you came for,\n"
	.string "whether you knew it or not.\p"
	.string "A MEGA ALAKAZAM. In trance. It has been\n"
	.string "sitting on this hill longer than the hill\l"
	.string "has had a name.\p"
	.string "Older than the city, the walls and we\n"
	.string "think even older than the delta itself.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_7:
# 249 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "It does not sit. It is held.\p"
	.string "Time flows around it as water flows\n"
	.string "around a stone that has decided not to\l"
	.string "be moved...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_8:
# 253 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "It's sitting, André.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_9:
# 258 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...It is sitting in a transcendent\n"
	.string "manner.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_10:
# 263 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "An ALAKAZAM forgets nothing. Not one\n"
	.string "moment of its whole life.\p"
	.string "Now imagine thousands of years of that,\n"
	.string "all at once, all still there.\p"
	.string "So it stopped moving. Stopped living\n"
	.string "forward. And started, we think, sorting.\p"
	.string "And what it finds worth keeping, it\n"
	.string "shows us.\p"
	.string "Above the altars. Five memories. Come\n"
	.string "see.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_11:
# 270 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The REKINDLED. A tower burned, far from\n"
	.string "here.\p"
	.string "Three Pokémon died in the fire.\p"
	.string "And something came down through the\n"
	.string "smoke and gave them back, not as they\l"
	.string "were, but as three completely different\l"
	.string "things.\p"
	.string "Storm. Flame. Clean water.\p"
	.string "And then they ran, and they've never\n"
	.string "stopped running.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_12:
# 276 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Three flames of one flame!\p"
	.string "Three faces of one face!\p"
	.string "The many that is secretly the ONE...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_13:
# 281 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "They're not one, André, that's rather\n"
	.string "the point. That's the whole point.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_14:
# 285 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...Three faces of one face that are\n"
	.string "also, in a deeper sense, three faces.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_15:
# 289 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...\p"
	.string "Better.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_16:
# 295 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The lesson here is: A second life is not\n"
	.string "a gift; it is an assignment.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_17:
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The BALANCED SKY. Three great birds\n"
	.string "over a foreign ocean: fire, frost, and\l"
	.string "lightning.\p"
	.string "When one of them grows stronger than\n"
	.string "the other two, the sky comes apart.\p"
	.string "So the silver one rises from the sea,\n"
	.string "tunes them back to balance, and simply\l"
	.string "leaves.\p"
	.string "It shows us that power great enough to\n"
	.string "remake the world is sometimes wisest\l"
	.string "left alone.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_18:
# 310 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The silver one is the SILENCE BETWEEN\n"
	.string "THE NOTES.\p"
	.string "The pause in which the chord discovers\n"
	.string "what it truly...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_19:
# 316 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "That's... actually not bad.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_20:
# 321 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...the pause in which the chord\n"
	.string "discovers what it truly... dreams.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_21:
# 327 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...Nevermind.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_22:
# 334 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The old records call this the Divided\n"
	.string "Sky.\p"
	.string "Personally I see it differently.\p"
	.string "Nobody divided that sky. It was only\n"
	.string "ever meant to be balanced and\l"
	.string "maintained.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_23:
# 344 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The MIRROR. A creature made in a\n"
	.string "laboratory, and the creature it was\l"
	.string "made from.\p"
	.string "One the original, one the perfect copy.\p"
	.string "Pilgrims come here to argue about which\n"
	.string "one is stronger, better, more perfect.\p"
	.string "In my opinion, they need each other,\n"
	.string "they strengthen each other, they can\l"
	.string "learn from each other.\p"
	.string "I think it ends with a question instead:\n"
	.string "What if we work together, instead of\l"
	.string "against each other?$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_24:
# 351 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "And who among us is not asking that\n"
	.string "same...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_25:
# 357 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "André.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_26:
# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "I was going to say something about the\n"
	.string "ocean.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_27:
# 366 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "I know.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_28:
# 373 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Watch that one to the end, by the way.\n"
	.string "It lingers on the little one, Mew.\p"
	.string "Longer than it needs to. Nobody knows\n"
	.string "why.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_29:
# 385 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "You saw the little one? Mew?\p"
	.string "...\p"
	.string "Not possible. Mew hasn't been seen in\n"
	.string "the wild for decades.\p"
	.string "I think you have mistaken it for\n"
	.string "something else.\p"
	.string "Lets go to the next altar.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_30:
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Careful, this one's cold on the left and\n"
	.string "hot on the right, we're not sure why.\p"
	.string "The oldest memory we have. Land and\n"
	.string "sea, tearing a young world in half.\p"
	.string "Continents rising. Continents drowning.\p"
	.string "Neither of them was wrong, mind you.\p"
	.string "Land wanted land. Sea wanted sea.\n"
	.string "Perfectly reasonable, both of them.\p"
	.string "But eventually everything needs a\n"
	.string "balance, and the answer came from\l"
	.string "above.\p"
	.string "The sky split open and the green\n"
	.string "serpent came down from very high up and\l"
	.string "simply stopped it.\p"
	.string "Legends say it was just a glance, and\n"
	.string "the world was saved.\p"
	.string "Sometimes seeing both sides and not\n"
	.string "choosing at all, is the only way to\l"
	.string "choose.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_31:
# 401 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "AH. Now here I have thoughts...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_32:
# 406 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "I'm sure.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_33:
# 410 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...for is not the serpent the AXIS? The\n"
	.string "thread through the bead? The high still\l"
	.string "point about which the war...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_34:
# 416 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "André...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_35:
# 423 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "We send feuding families here, you know.\n"
	.string "Merchant guilds. In-laws. They shake\l"
	.string "hands under the arch and it counts.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_36:
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "It works about half the time. Which for\n"
	.string "in-laws is remarkable.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_37:
# 438 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The TWO HEARTS. Two dragons. Two\n"
	.string "personalities. Two ways of being. But\l"
	.string "one team.\p"
	.string "While they are the same species, they\n"
	.string "are not the same individual.\p"
	.string "Still, each needs the other to survive.\p"
	.string "And when one is lost, the other perishes\n"
	.string "with it.\p"
	.string "The lesson: love is the only thing that\n"
	.string "grows larger when shared.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_38:
# 442 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...This is the one I come to. When it's\n"
	.string "late. When nobody is watching.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_39:
# 447 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...\p"
	.string "Yes. Well. Me too.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_40:
# 459 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "And this one is my favorite, which\n"
	.string "annoys everybody.\p"
	.string "It's empty. Always has been.\p"
	.string "During the cathedral's construction,\n"
	.string "long ago, the workers claimed to have\l"
	.string "seen warped visions at this very spot.\p"
	.string "Whatever it was, it hasn't shown itself\n"
	.string "since, not in at least 900 years.\p"
	.string "All we have left is hearsay, and hearsay\n"
	.string "doesn't agree with itself.\p"
	.string "Some talk of a giant with seven eyes.\n"
	.string "Others claim to have seen several\l"
	.string "giants at once.\p"
	.string "But everyone agrees on one thing:\n"
	.string "whatever it was, it came wrapped in a\l"
	.string "green light. Nobody knows why.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_41:
# 466 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The unmanifest! The not-yet! The\n"
	.string "pregnant silence in which all possible\l"
	.string "altars are simultaneously...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_42:
# 471 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "For once, André, that is very close to\n"
	.string "the Order's actual position.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_43:
# 477 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Is it?$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_44:
# 481 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Don't let it go to your head.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_45:
# 488 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Somebody left a plaque here. We've\n"
	.string "never taken it down.\p"
	.string "It reads:\p"
	.string "FIVE MEMORIES OF WHAT WAS.\p"
	.string "ONE SPACE FOR WHAT COULD BE.\p"
	.string "THE DIFFERENCE BETWEEN THEM IS US.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_46:
# 496 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "And that's the tour. Five memories, one\n"
	.string "empty space, and a very old creature\l"
	.string "that hasn't moved since before your\l"
	.string "grandmother's grandmother's\l"
	.string "grandmother.\p"
	.string "Go and watch them properly.\p"
	.string "Take your time.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_47:
# 500 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "May the seeker find what the seeker\n"
	.string "seeks.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_48:
# 507 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Thank you, André.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_49:
# 514 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Or, and this is important, may they find\n"
	.string "what they were NOT seeking.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_50:
# 518 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...That one was quite good.\p"
	.string "Can you clean out the trashcans right\n"
	.string "now?\p"
	.string "You know, your job? Thank you!$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_51:
# 522 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Yes mam. The trashcans, a beautifull\n"
	.string "methaphor for the all the forgotten\l"
	.string "memories.\p"
	.string "You know, trashcans are just like black\n"
	.string "holes...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_52:
# 534 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...May I tell you something I don't put in\n"
	.string "the tour?\p"
	.string "Everyone watches the gods.\p"
	.string "Nine hundred years, and every single\n"
	.string "person who has stood where you're\l"
	.string "standing... ...has watched the gods.\p"
	.string "But there's a world behind them. In\n"
	.string "every memory.\p"
	.string "Water so full of fish you can't see\n"
	.string "through it.\p"
	.string "Countless birds species in the skies so\n"
	.string "you can't see the sun.\p"
	.string "They're gone now. All of them.\p"
	.string "But nobody seems to notice. Including\n"
	.string "me. For sixty years.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_53:
# 540 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "I don't think it's showing us old stories\n"
	.string "at all, child.\p"
	.string "I think it's showing us what's happening\n"
	.string "right now.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_54:
# 545 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...Anyway. Pigeons. That bloody open\n"
	.string "roof.\p"
	.string "Enjoy the altars.$"
