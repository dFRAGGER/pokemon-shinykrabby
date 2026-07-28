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


Marshduke_Indoor_Chatedral_OnLoad::
# 13 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	compare VAR_CATHEDRAL_STATE_MARSHDUKE, 0
	goto_if_eq Marshduke_Indoor_Chatedral_OnLoad_2
Marshduke_Indoor_Chatedral_OnLoad_1:
# 16 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	compare VAR_CATHEDRAL_STATE_MARSHDUKE, 0
	goto_if_ne Marshduke_Indoor_Chatedral_OnLoad_4
	return

Marshduke_Indoor_Chatedral_OnLoad_2:
# 14 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setflag FLAG_MARSHDUKE_CATHEDRAL_HIDE_BEFORE_TOUR
	goto Marshduke_Indoor_Chatedral_OnLoad_1

Marshduke_Indoor_Chatedral_OnLoad_4:
# 17 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	clearflag FLAG_MARSHDUKE_CATHEDRAL_HIDE_BEFORE_TOUR
	return


Marshduke_Indoor_Chatedral_EventScript_Alakazam::
# 22 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 23 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 24 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Alakazam_Text_0, MSGBOX_YESNO
# 25 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 26 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Marshduke_Indoor_Chatedral_EventScript_Alakazam_2
Marshduke_Indoor_Chatedral_EventScript_Alakazam_1:
# 29 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return

Marshduke_Indoor_Chatedral_EventScript_Alakazam_2:
# 27 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	goto Marshduke_Indoor_Chatedral_EventScript_Latias
	goto Marshduke_Indoor_Chatedral_EventScript_Alakazam_1


Marshduke_Indoor_Chatedral_EventScript_Latias::
# 37 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setvar VAR_MARSHDUKE_CATHEDRAL_VISION_STATE, 1
# 38 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	fadescreen FADE_TO_BLACK
# 39 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	warpsilent MAP_MARSHDUKE_INDOOR_VISION_LATIOS_LATIAS, 11, 7
# 40 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitstate
# 41 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_VisionReturn::
# 45 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setvar VAR_MARSHDUKE_CATHEDRAL_VISION_STATE, 0
# 46 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 47 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 25, Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Movement_0
# 48 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 49 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Text_0, MSGBOX_AUTOCLOSE
# 50 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 51 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 25, Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Movement_1
# 52 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 53 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Sister_Wren::
# 57 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 58 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 59 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sister_Wren_Text_0, MSGBOX_AUTOCLOSE
# 60 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 61 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Sign_LatiosLatias::
# 65 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 66 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 67 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sign_LatiosLatias_Text_0, MSGBOX_AUTOCLOSE
# 68 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 69 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Sign_HoohLugia::
# 73 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 74 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 75 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sign_HoohLugia_Text_0, MSGBOX_AUTOCLOSE
# 76 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 77 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Sign_EnteiRaikouSuicune::
# 81 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 82 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 83 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sign_EnteiRaikouSuicune_Text_0, MSGBOX_AUTOCLOSE
# 84 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 85 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Sign_MewMewtwo::
# 89 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 90 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 91 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sign_MewMewtwo_Text_0, MSGBOX_AUTOCLOSE
# 92 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 93 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Sign_GroundonKyogreRayquaza::
# 97 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 98 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 99 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sign_GroundonKyogreRayquaza_Text_0, MSGBOX_AUTOCLOSE
# 100 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 101 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Sign_EmptyShrine::
# 105 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 106 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 107 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sign_EmptyShrine_Text_0, MSGBOX_AUTOCLOSE
# 108 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 109 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Cathedral_Introduction_Ms_Stone::
# 114 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 115 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setvar VAR_CATHEDRAL_STATE_MARSHDUKE, 1
# 116 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 117 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_0
# 118 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 119 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_1
# 121 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 122 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 123 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_1, MSGBOX_AUTOCLOSE
# 124 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 125 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_1
# 126 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 127 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 128 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 129 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 130 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2
# 131 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_3, MSGBOX_AUTOCLOSE
# 132 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 133 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 134 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_3
# 135 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 136 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 137 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_4, MSGBOX_AUTOCLOSE
# 138 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 139 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 140 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 141 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_0
# 142 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 143 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_4
# 144 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2
# 145 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_5, MSGBOX_AUTOCLOSE
# 146 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 147 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 148 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_3
# 149 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 150 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 151 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_6, MSGBOX_AUTOCLOSE
# 152 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 153 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_5
# 154 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_6
# 155 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_7
# 156 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 157 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 158 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_7, MSGBOX_AUTOCLOSE
# 159 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 160 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 161 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 162 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_0
# 163 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 164 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2
# 165 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_8
# 166 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 167 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_8
# 168 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 169 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_9, MSGBOX_AUTOCLOSE
# 170 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 171 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 172 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_9
# 173 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2
# 174 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_10, MSGBOX_AUTOCLOSE
# 175 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 176 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_4
# 177 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_4
# 178 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 179 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_11, MSGBOX_AUTOCLOSE
# 180 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_10
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_11
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_12
# 184 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 185 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 186 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_12, MSGBOX_AUTOCLOSE
# 187 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 188 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 189 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_0
# 190 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 191 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2
# 192 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_13
# 193 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_8
# 194 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_9
# 195 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 196 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 197 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_14, MSGBOX_AUTOCLOSE
# 198 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 199 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 40
# 200 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2
# 201 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_15, MSGBOX_AUTOCLOSE
# 202 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 203 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 204 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 205 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_16, MSGBOX_AUTOCLOSE
# 206 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 207 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 208 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_4
# 209 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_4
# 210 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 211 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_17, MSGBOX_AUTOCLOSE
# 212 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 213 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_13
# 214 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_14
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_15
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_16
# 218 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 219 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 220 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_18
# 221 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 222 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 223 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_0
# 224 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 225 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2
# 226 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_19, MSGBOX_AUTOCLOSE
# 227 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 228 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 229 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_17
# 230 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 231 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 232 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_20, MSGBOX_AUTOCLOSE
# 233 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 234 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 235 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_18
# 236 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2
# 237 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_21, MSGBOX_AUTOCLOSE
# 238 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 239 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_19
# 240 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 241 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 242 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 243 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_22, MSGBOX_AUTOCLOSE
# 244 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 245 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 246 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_4
# 247 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_4
# 248 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 249 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 250 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_23, MSGBOX_AUTOCLOSE
# 251 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 252 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 253 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_20
# 254 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_21
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_22
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_23
# 258 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 259 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 260 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_24, MSGBOX_AUTOCLOSE
# 261 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 262 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 120
# 263 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 264 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_0
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_25
# 268 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 269 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_9
# 270 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 271 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 272 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 273 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_26, MSGBOX_AUTOCLOSE
# 274 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 275 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 276 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_18
# 277 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2
# 278 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_27, MSGBOX_AUTOCLOSE
# 279 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 280 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 281 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 282 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_28, MSGBOX_AUTOCLOSE
# 283 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 284 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 285 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_4
# 286 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_4
# 287 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 288 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 289 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_29
# 290 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 291 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 292 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 293 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_24
# 294 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_18
# 295 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 296 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 297 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 298 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_30, MSGBOX_AUTOCLOSE
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_25
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 302 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_26
# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_27
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_28
# 305 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 306 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 307 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_31, MSGBOX_AUTOCLOSE
# 308 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 309 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 310 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 311 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_0
# 312 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 313 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2
# 314 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_32
# 315 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 316 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_9
# 317 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 318 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_33, MSGBOX_AUTOCLOSE
# 319 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 320 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 321 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2
# 322 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_34
# 323 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 324 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_4
# 325 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 326 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_35
# 327 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 328 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_9
# 329 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2
# 330 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_36, MSGBOX_AUTOCLOSE
# 331 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 332 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 333 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_4
# 334 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 335 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 336 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_37, MSGBOX_AUTOCLOSE
# 337 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 338 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_29
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_30
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_31
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_32
# 344 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 345 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 346 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_38, MSGBOX_AUTOCLOSE
# 347 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 348 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 349 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2
# 350 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_39, MSGBOX_AUTOCLOSE
# 351 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 352 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 353 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_18
# 354 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 355 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_40, MSGBOX_AUTOCLOSE
# 356 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 357 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 358 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_4
# 359 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 360 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_13
# 361 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_33
# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_34
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_35
# 365 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 366 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 367 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_41, MSGBOX_AUTOCLOSE
# 368 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 369 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 370 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 371 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_0
# 372 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 373 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2
# 374 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_42, MSGBOX_AUTOCLOSE
# 375 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 376 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 377 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_18
# 378 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 379 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_43, MSGBOX_AUTOCLOSE
# 380 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 381 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 382 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_36
# 383 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 384 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2
# 385 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_44, MSGBOX_AUTOCLOSE
# 386 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 387 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 388 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_45, MSGBOX_AUTOCLOSE
# 390 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 392 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_4
# 393 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_4
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_46, MSGBOX_AUTOCLOSE
# 397 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 398 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 399 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_18
# 400 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_9
# 401 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_3
# 402 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 403 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 404 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_47, MSGBOX_AUTOCLOSE
# 405 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 406 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 407 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2
# 408 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_48, MSGBOX_AUTOCLOSE
# 409 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 410 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 411 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 412 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_49, MSGBOX_AUTOCLOSE
# 413 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 414 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 415 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 416 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_0
# 417 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 418 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2
# 419 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_50, MSGBOX_AUTOCLOSE
# 420 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 421 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 422 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 423 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_51, MSGBOX_AUTOCLOSE
# 424 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 425 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 426 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2
# 427 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_52, MSGBOX_AUTOCLOSE
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 431 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_26, MSGBOX_AUTOCLOSE
# 432 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_37
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 436 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_38
# 437 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 438 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 439 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_53, MSGBOX_AUTOCLOSE
# 440 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 441 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_39
# 442 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_40
# 443 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 444 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 445 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 446 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_54, MSGBOX_AUTOCLOSE
# 447 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 448 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 120
# 449 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_9
# 450 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0
# 451 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_55, MSGBOX_AUTOCLOSE
# 452 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 453 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_41
# 454 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setflag FLAG_MARSHDUKE_CATHEDRAL_TOUR
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	clearflag FLAG_MARSHDUKE_CATHEDRAL_HIDE_BEFORE_TOUR
# 457 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	removeobject 14
# 458 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	removeobject 17
# 459 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	addobject 15
# 460 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	addobject 16
# 461 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	addobject 22
# 462 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	addobject 23
# 463 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


# 47 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Movement_0:
# 47 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
	step_end

# 51 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Movement_1:
# 51 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 51 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_down
	step_end

# 117 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_0:
# 117 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_exclamation_mark
	step_end

# 119 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_1:
# 119 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 119 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 119 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 119 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
	step_end

# 128 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2:
# 128 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_question_mark
# 128 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 134 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_3:
# 134 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_down
	step_end

# 143 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_4:
# 143 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 153 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_5:
# 153 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 153 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 153 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 153 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 153 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 153 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 153 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 153 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 154 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_6:
# 154 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 154 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 154 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 154 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 154 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 154 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 155 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_7:
# 155 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 155 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 155 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 155 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 155 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 155 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 155 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 155 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 155 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 167 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_8:
# 167 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_x
# 167 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_right
	step_end

# 172 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_9:
# 172 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_left
	step_end

# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_10:
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_11:
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_12:
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 213 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_13:
# 213 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 213 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 213 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 213 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 213 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 213 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_14:
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 215 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_15:
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_16:
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 229 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_17:
# 229 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_exclamation_mark
# 229 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_left
	step_end

# 235 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_18:
# 235 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_right
	step_end

# 239 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_19:
# 239 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_question_mark
	step_end

# 253 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_20:
# 253 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 253 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 253 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 253 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 253 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 253 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_21:
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_22:
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_23:
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 293 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_24:
# 293 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_question_mark
# 293 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 293 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_left
	step_end

# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_25:
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 302 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_26:
# 302 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 302 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 302 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 302 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 302 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 302 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 302 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 302 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 302 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 302 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 302 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 302 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 302 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 302 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 302 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 302 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_27:
# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_28:
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_29:
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
	step_end

# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_30:
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
	walk_left
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
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
	walk_left
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_31:
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_32:
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_33:
# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_34:
# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_35:
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 382 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_36:
# 382 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_left
# 382 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_exclamation_mark
	step_end

# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_37:
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
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
	step_end

# 436 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_38:
# 436 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 436 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 441 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_39:
# 441 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 441 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
	step_end

# 442 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_40:
# 442 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 442 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_right
	step_end

# 453 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_41:
# 453 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 453 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 453 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 453 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 453 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 453 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 453 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 453 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 453 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 453 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
	step_end

Marshduke_Indoor_Chatedral_EventScript_Alakazam_Text_0:
# 24 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "MEGA ALAKAZAM's spoons glow with a\n"
	.string "faint psychic light...\p"
	.string "Ancient memories stir at the edge of\n"
	.string "your mind, visions of LATIOS and LATIAS\l"
	.string "long past.\p"
	.string "Will you open your mind to them?$"

Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Text_0:
# 49 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Welcome back to the present.\p"
	.string "Give yourself time to readjust to the\n"
	.string "world around you.$"

Marshduke_Indoor_Chatedral_EventScript_Sister_Wren_Text_0:
# 59 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
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

Marshduke_Indoor_Chatedral_EventScript_Sign_LatiosLatias_Text_0:
# 67 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "THE LESSON OF THE TWO HEARTS:\n"
	.string "Love is the only thing that grows larger\l"
	.string "when shared.$"

Marshduke_Indoor_Chatedral_EventScript_Sign_HoohLugia_Text_0:
# 75 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "THE LESSON OF THE DIVIDED SKY:\n"
	.string "Power that loves the world must\l"
	.string "sometimes leave it.$"

Marshduke_Indoor_Chatedral_EventScript_Sign_EnteiRaikouSuicune_Text_0:
# 83 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "THE LESSON OF THE RUNNERS:\n"
	.string "A second life is not a gift. It is an\l"
	.string "assignment.$"

Marshduke_Indoor_Chatedral_EventScript_Sign_MewMewtwo_Text_0:
# 91 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "THE LESSON OF THE MIRROR:\n"
	.string "The circumstances of one's birth are\l"
	.string "irrelevant. It is what you do with the\l"
	.string "gift of life that determines who you\l"
	.string "are.$"

Marshduke_Indoor_Chatedral_EventScript_Sign_GroundonKyogreRayquaza_Text_0:
# 99 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "THE LESSON OF THE DROWNED AND BURNING\n"
	.string "WORLD:\n"
	.string "When two truths war without limit, the\l"
	.string "answer comes from above them both.$"

Marshduke_Indoor_Chatedral_EventScript_Sign_EmptyShrine_Text_0:
# 107 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "FIVE MEMORIES OF WHAT WAS. ONE SPACE\n"
	.string "FOR WHAT COULD BE. THE DIFFERENCE\l"
	.string "BETWEEN THEM IS US.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0:
# 122 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Ms. STONE$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_1:
# 123 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
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
# 130 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "BROTHER ANDRÉ$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_3:
# 131 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...The seeker arrives at the hour of\n"
	.string "arriving.\p"
	.string "As they always do. As they always have.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_4:
# 137 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "That's BROTHER ANDRÉ...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_5:
# 145 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...I am but a JANITOR!$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_6:
# 151 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "He is but a janitor.\p"
	.string "At the moment, there's no one here but\n"
	.string "the priests of the Order of the Open\l"
	.string "Eye, and us.\p"
	.string "A rare opportunity — let's make the most\n"
	.string "of it.\p"
	.string "Come along, both of you.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_7:
# 158 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "There. That's what you came for,\n"
	.string "whether you knew it or not.\p"
	.string "A MEGA ALAKAZAM. In trance. It has been\n"
	.string "sitting on this hill longer than the hill\l"
	.string "has had a name.\p"
	.string "Older than the city. Older than the\n"
	.string "walls. Even older than the delta itself.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_8:
# 165 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "It does not sit. It is held.\p"
	.string "Time flows around it as water flows\n"
	.string "around a stone that has decided not to\l"
	.string "be moved...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_9:
# 169 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "It's sitting, André.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_10:
# 174 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...It is sitting in a transcendent\n"
	.string "manner.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_11:
# 179 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
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

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_12:
# 186 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
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

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_13:
# 192 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Three flames of one flame!\p"
	.string "Three faces of one face!\p"
	.string "The many that is secretly the ONE...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_14:
# 197 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "They're not one, André, that's rather\n"
	.string "the point. That's the whole point.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_15:
# 201 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...Three faces of one face that are\n"
	.string "also, in a deeper sense, three faces.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_16:
# 205 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...\p"
	.string "Better.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_17:
# 211 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The blessing is: you didn't survive for\n"
	.string "nothing.\p"
	.string "Now run.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_18:
# 220 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The BALANCED SKY. Three great birds\n"
	.string "over a foreign ocean, fire, frost, and\l"
	.string "lightning.\p"
	.string "All matched. All magnificent. And when\n"
	.string "one of them grows stronger than the\l"
	.string "other two, the sky comes apart.\p"
	.string "So the silver one rises out of the sea\n"
	.string "and, this is the part people always get\l"
	.string "wrong, it doesn't win.\p"
	.string "It tunes them. Back to even. Then it\n"
	.string "goes home and claims nothing.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_19:
# 226 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The silver one is the SILENCE BETWEEN\n"
	.string "THE NOTES.\p"
	.string "The pause in which the chord discovers\n"
	.string "what it truly...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_20:
# 232 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "That's... actually not bad.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_21:
# 237 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...what it truly dreams.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_22:
# 243 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "... Nevermind.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_23:
# 250 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The old records call this the Divided\n"
	.string "Sky.\p"
	.string "Wrong name.\p"
	.string "Nobody divided that sky. It was only\n"
	.string "ever meant to be balanced.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_24:
# 260 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "A creature made in a laboratory, and the\n"
	.string "creature it was made from.\p"
	.string "One the original, one a copy.\p"
	.string "Pilgrims come here to argue about which\n"
	.string "one the memory blames.\p"
	.string "In my opinion, it blames nobody.\p"
	.string "I think it ends with a question instead:\n"
	.string "What am I?$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_25:
# 267 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "And who among us is not asking that\n"
	.string "same...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_26:
# 273 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "André.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_27:
# 278 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "I was going to say something about the\n"
	.string "ocean.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_28:
# 282 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "I know.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_29:
# 289 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Watch that one to the end, by the way.\n"
	.string "It lingers on the little one.\p"
	.string "Longer than it needs to. Nobody knows\n"
	.string "why.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_30:
# 298 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "You saw the little one? Mew?\p"
	.string "...\p"
	.string "Not possible. Mew hasn't been seen in\n"
	.string "the wild for decades.\p"
	.string "I think you have mistaken it for\n"
	.string "something else.\p"
	.string "Lets go to the next altar.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_31:
# 307 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
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

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_32:
# 314 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "AH. Now here I have thoughts...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_33:
# 318 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "I'm sure.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_34:
# 322 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...for is not the serpent the AXIS? The\n"
	.string "thread through the bead? The high still\l"
	.string "point about which the war...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_35:
# 326 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "We send feuding families here, you know.\n"
	.string "Merchant guilds. In-laws. They shake\l"
	.string "hands under the arch and it counts.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_36:
# 330 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...the war turns.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_37:
# 336 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "It works about half the time. Which for\n"
	.string "in-laws is remarkable.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_38:
# 346 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The TWO HEARTS. Two dragons. Brother\n"
	.string "and sister. Partners. One team.\p"
	.string "While they are the same species, they\n"
	.string "are not the same individual.\p"
	.string "Both need the other to survive.\p"
	.string "And when one of them is gone, the other\n"
	.string "is lost.\p"
	.string "The lesson is: love is the only thing\n"
	.string "that grows larger when shared.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_39:
# 350 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...This is the one I come to. When it's\n"
	.string "late. When nobody is watching.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_40:
# 355 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...\p"
	.string "Yes. Well. Me too.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_41:
# 367 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "And this one is my favorite, which\n"
	.string "annoys everybody.\p"
	.string "It's empty. Always has been. Nine\n"
	.string "hundred years and it has never shown a\l"
	.string "thing.\p"
	.string "The floor's worn smooth, though. Look\n"
	.string "at it. Something stood here. Or\l"
	.string "something's going to.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_42:
# 374 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The unmanifest! The not-yet! The\n"
	.string "pregnant silence in which all possible\l"
	.string "altars are simultaneously...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_43:
# 379 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "For once, André, that is very close to\n"
	.string "the Order's actual position.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_44:
# 385 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Is it?$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_45:
# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Don't let it go to your head.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_46:
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Somebody left a plaque here. We've\n"
	.string "never taken it down.\p"
	.string "It reads:\p"
	.string "FIVE MEMORIES OF WHAT WAS.\p"
	.string "ONE SPACE FOR WHAT COULD BE.\p"
	.string "THE DIFFERENCE BETWEEN THEM IS US.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_47:
# 404 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "And that's the tour. Five memories, one\n"
	.string "empty space, and a very old creature\l"
	.string "that hasn't moved since before your\l"
	.string "grandmother's grandmother's\l"
	.string "grandmother.\p"
	.string "Go and watch them properly.\p"
	.string "Take your time.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_48:
# 408 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "May the seeker find what the seeker\n"
	.string "seeks.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_49:
# 412 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Thank you, André.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_50:
# 419 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Or, and this is important, may they find\n"
	.string "what they were NOT seeking.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_51:
# 423 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "…That one was quite good.\p"
	.string "Can you clean out the trashcans right\n"
	.string "now?\p"
	.string "You know, your job? Thank you!$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_52:
# 427 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Yes mam. The trashcans, a beautifull\n"
	.string "methaphor for the all the forgotten\l"
	.string "memories.\p"
	.string "You know, trashcans make me feel...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_53:
# 439 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
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

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_54:
# 446 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "I don't think it's showing us old stories\n"
	.string "at all, child.\p"
	.string "I think it's showing us what's happening\n"
	.string "right now.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_55:
# 451 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...Anyway. Pigeons. That bloody open\n"
	.string "roof.\p"
	.string "Enjoy the altars.$"
