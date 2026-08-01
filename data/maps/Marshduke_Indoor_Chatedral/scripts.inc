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


Marshduke_Indoor_Chatedral_Priest_History_Alakazam_NPC::
# 33 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 34 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 35 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_Priest_History_Alakazam_NPC_Text_0, MSGBOX_YESNO
# 36 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 37 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Marshduke_Indoor_Chatedral_Priest_History_Alakazam_NPC_2
Marshduke_Indoor_Chatedral_Priest_History_Alakazam_NPC_1:
# 40 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_Priest_History_Alakazam_NPC_Text_1, MSGBOX_AUTOCLOSE
# 41 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return

Marshduke_Indoor_Chatedral_Priest_History_Alakazam_NPC_2:
# 38 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	goto Marshduke_Indoor_Chatedral_EventScript_NPC_Priest_FirstMemory
	goto Marshduke_Indoor_Chatedral_Priest_History_Alakazam_NPC_1


Marshduke_Indoor_Chatedral_EventScript_Sign_Alakazam_Read::
# 46 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sign_Alakazam_Read_Text_0, MSGBOX_AUTOCLOSE
# 47 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 48 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sign_Alakazam_Read_Text_1, MSGBOX_AUTOCLOSE
# 49 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 50 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_NPC_Priest_FirstMemory::
# 54 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 55 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 56 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_Priest_FirstMemory_Text_0, MSGBOX_AUTOCLOSE
# 57 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 58 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	end


Marshduke_Indoor_Chatedral_EventScript_NPC_MegaStone::
# 63 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 64 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 65 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_MegaStone_Text_0, MSGBOX_AUTOCLOSE
# 66 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 67 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_OnLoad::
# 73 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	compare VAR_CATHEDRAL_STATE_MARSHDUKE, 0
	goto_if_eq Marshduke_Indoor_Chatedral_OnLoad_2
Marshduke_Indoor_Chatedral_OnLoad_1:
# 76 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	compare VAR_CATHEDRAL_STATE_MARSHDUKE, 0
	goto_if_ne Marshduke_Indoor_Chatedral_OnLoad_4
	return

Marshduke_Indoor_Chatedral_OnLoad_2:
# 74 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setflag FLAG_MARSHDUKE_CATHEDRAL_HIDE_BEFORE_TOUR
	goto Marshduke_Indoor_Chatedral_OnLoad_1

Marshduke_Indoor_Chatedral_OnLoad_4:
# 77 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	clearflag FLAG_MARSHDUKE_CATHEDRAL_HIDE_BEFORE_TOUR
	return


Marshduke_Indoor_Chatedral_EventScript_Alakazam::
# 82 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 83 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 84 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Alakazam_Text_0, MSGBOX_YESNO
# 85 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 86 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Marshduke_Indoor_Chatedral_EventScript_Alakazam_2
Marshduke_Indoor_Chatedral_EventScript_Alakazam_1:
# 89 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return

Marshduke_Indoor_Chatedral_EventScript_Alakazam_2:
# 87 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	goto Marshduke_Indoor_Chatedral_EventScript_Latias
	goto Marshduke_Indoor_Chatedral_EventScript_Alakazam_1


Marshduke_Indoor_Chatedral_EventScript_Latias::
# 97 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setvar VAR_MARSHDUKE_CATHEDRAL_VISION_STATE, 1
# 98 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	fadescreen FADE_TO_BLACK
# 99 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	warpsilent MAP_MARSHDUKE_INDOOR_VISION_LATIOS_LATIAS, 11, 7
# 100 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitstate
# 101 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_VisionReturn::
# 105 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setvar VAR_MARSHDUKE_CATHEDRAL_VISION_STATE, 0
# 106 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 107 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 25, Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Movement_0
# 108 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 109 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Text_0, MSGBOX_AUTOCLOSE
# 110 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 111 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 25, Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Movement_1
# 112 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 113 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Sister_Wren::
# 117 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 118 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 119 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sister_Wren_Text_0, MSGBOX_AUTOCLOSE
# 120 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 121 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan::
# 127 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 128 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 129 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 130 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_1, MSGBOX_AUTOCLOSE
# 131 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 132 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 133 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_2, MSGBOX_AUTOCLOSE
# 134 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 135 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 30, Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Movement_0
# 136 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 137 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour::
# 141 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 142 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 143 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 144 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_1, MSGBOX_AUTOCLOSE
# 145 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 146 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 147 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_2, MSGBOX_YESNO
# 148 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 149 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_2
Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_1:
# 155 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 156 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_4, MSGBOX_AUTOCLOSE
# 157 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 158 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return

Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_2:
# 150 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 151 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_3, MSGBOX_AUTOCLOSE
# 152 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 153 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	goto Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_1


Marshduke_Indoor_Chatedral_EventScript_Sign_LatiosLatias::
# 162 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 163 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 164 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sign_LatiosLatias_Text_0, MSGBOX_AUTOCLOSE
# 165 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 166 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_NPC_Mother_TwoHearts::
# 172 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 173 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_Mother_TwoHearts_Text_0, MSGBOX_AUTOCLOSE
# 174 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 175 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 176 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_Mother_TwoHearts_Text_1, MSGBOX_AUTOCLOSE
# 177 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 178 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 179 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_Mother_TwoHearts_Text_2, MSGBOX_AUTOCLOSE
# 180 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 181 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 182 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_Mother_TwoHearts_Text_3, MSGBOX_AUTOCLOSE
# 184 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 185 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_NPC_Child_TwoHearts::
# 191 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 192 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_Child_TwoHearts_Text_0, MSGBOX_AUTOCLOSE
# 193 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 194 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 195 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_Child_TwoHearts_Text_1, MSGBOX_AUTOCLOSE
# 196 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 197 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 198 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_Child_TwoHearts_Text_2, MSGBOX_AUTOCLOSE
# 199 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 200 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 201 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 202 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_Child_TwoHearts_Text_3, MSGBOX_AUTOCLOSE
# 203 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 204 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_NPC_HoohLugia::
# 208 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 209 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 210 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_HoohLugia_Text_0, MSGBOX_AUTOCLOSE
# 211 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 212 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Priest_HoohLugia::
# 216 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 217 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 218 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Priest_HoohLugia_Text_0
# 219 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Priest_HoohLugia_Text_1, MSGBOX_AUTOCLOSE
# 220 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 221 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_NPC_EnteiRaikouSuicune::
# 225 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 226 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 227 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_EnteiRaikouSuicune_Text_0, MSGBOX_AUTOCLOSE
# 228 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 229 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Priest_EnteiRaikouSuicune::
# 233 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 234 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 235 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Priest_EnteiRaikouSuicune_Text_0
# 236 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Priest_EnteiRaikouSuicune_Text_1, MSGBOX_AUTOCLOSE
# 237 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 238 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_NPC_MewMewtwo::
# 242 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 243 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 244 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_MewMewtwo_Text_0, MSGBOX_AUTOCLOSE
# 245 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 246 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Priest_MewMewtwo::
# 252 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 253 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 254 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Priest_MewMewtwo_Text_0
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Priest_MewMewtwo_Text_1, MSGBOX_AUTOCLOSE
# 256 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 257 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Priest_GroundonKyogreRayquaza::
# 261 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 262 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 263 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Priest_GroundonKyogreRayquaza_Text_0
# 264 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Priest_GroundonKyogreRayquaza_Text_1, MSGBOX_AUTOCLOSE
# 265 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 266 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza::
# 270 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 271 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 272 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 273 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 15, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 274 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 275 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_0
# 276 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_1, MSGBOX_AUTOCLOSE
# 277 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 278 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 15, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_1
# 279 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 280 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_0
# 281 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_2, MSGBOX_AUTOCLOSE
# 282 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 283 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 284 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 34, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_2
# 285 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 286 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_M_MINIMIZE
# 287 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	callnative SetCastformSunnyForm
# 288 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 34, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_3
# 289 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 290 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 291 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 34, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_4
# 292 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 293 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 34, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_5
# 294 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 295 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_M_MINIMIZE
# 296 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	callnative SetCastformSnowyForm
# 297 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 34, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_5
# 298 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 299 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 15, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_6
# 301 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 302 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_0
# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_3, MSGBOX_AUTOCLOSE
# 304 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 305 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 306 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 34, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_7
# 307 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 308 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 309 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_0
# 310 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_4, MSGBOX_AUTOCLOSE
# 311 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 312 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Sign_EmptyShrine::
# 316 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 317 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 318 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sign_EmptyShrine_Text_0, MSGBOX_AUTOCLOSE
# 319 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 320 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Cathedral_Introduction_Ms_Stone::
# 327 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 328 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setvar VAR_CATHEDRAL_STATE_MARSHDUKE, 1
# 329 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 330 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 331 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 332 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_0
# 334 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 335 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 336 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0, MSGBOX_AUTOCLOSE
# 337 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 338 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_0
# 339 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 340 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_1
# 342 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 343 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 344 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_1, MSGBOX_AUTOCLOSE
# 345 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 346 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 347 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_7
# 348 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 349 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 350 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2, MSGBOX_AUTOCLOSE
# 351 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 352 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 353 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 354 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 355 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 356 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 357 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 358 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_3, MSGBOX_AUTOCLOSE
# 359 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 360 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 361 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_7
# 362 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 363 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_4, MSGBOX_AUTOCLOSE
# 365 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 366 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_3
# 367 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_4
# 368 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_5
# 369 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 370 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 371 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_5, MSGBOX_AUTOCLOSE
# 372 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 373 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 374 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 375 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 376 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 377 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 378 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_6
# 379 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 380 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_6
# 381 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 382 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_7, MSGBOX_AUTOCLOSE
# 383 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 384 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 385 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Movement_0
# 386 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 387 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_8, MSGBOX_AUTOCLOSE
# 388 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 389 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 390 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 391 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 392 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_9, MSGBOX_AUTOCLOSE
# 393 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_7
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_8
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_9
# 397 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 398 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 399 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_10, MSGBOX_AUTOCLOSE
# 400 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 401 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 402 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 403 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 404 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 405 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_11
# 406 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_6
# 407 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Movement_0
# 408 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 409 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 410 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_12, MSGBOX_AUTOCLOSE
# 411 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 412 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 40
# 413 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 414 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_13, MSGBOX_AUTOCLOSE
# 415 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 416 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 417 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 418 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_14, MSGBOX_AUTOCLOSE
# 419 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 420 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 421 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 422 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 423 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 424 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_15, MSGBOX_AUTOCLOSE
# 425 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 426 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_10
# 427 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_11
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_12
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_13
# 431 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 432 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_16
# 434 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 435 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 436 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 437 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 438 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 439 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_17, MSGBOX_AUTOCLOSE
# 440 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 441 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 442 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_14
# 443 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 444 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 445 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_18, MSGBOX_AUTOCLOSE
# 446 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 447 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 448 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_1
# 449 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 450 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_19, MSGBOX_AUTOCLOSE
# 451 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 452 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_6
# 453 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 454 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 455 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_20, MSGBOX_AUTOCLOSE
# 457 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 458 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 459 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 460 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 461 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 462 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 463 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_21, MSGBOX_AUTOCLOSE
# 464 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 465 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 466 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_15
# 467 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_16
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_17
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_18
# 471 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 472 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 473 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_22, MSGBOX_AUTOCLOSE
# 474 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 475 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 476 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 477 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 478 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 479 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 480 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_23
# 481 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 482 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Movement_0
# 483 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 484 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 485 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 486 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_24, MSGBOX_AUTOCLOSE
# 487 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 488 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 489 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_1
# 490 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 491 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_25, MSGBOX_AUTOCLOSE
# 492 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 493 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 494 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 495 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_26, MSGBOX_AUTOCLOSE
# 496 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 497 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 498 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 499 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 500 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 501 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 502 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_27
# 503 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 504 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 505 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 506 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 507 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 508 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 509 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_19
# 510 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_1
# 511 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 512 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 513 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 514 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_28, MSGBOX_AUTOCLOSE
# 515 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 516 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_20
# 517 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 518 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_21
# 519 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_22
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_23
# 521 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 522 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 523 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_29, MSGBOX_AUTOCLOSE
# 524 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 525 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 526 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 527 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 528 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 529 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 530 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_30, MSGBOX_AUTOCLOSE
# 531 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 532 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 533 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Movement_0
# 534 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 535 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_31, MSGBOX_AUTOCLOSE
# 536 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 537 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 538 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 539 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_32, MSGBOX_AUTOCLOSE
# 540 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 541 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 542 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Movement_0
# 543 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 544 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 545 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_33, MSGBOX_AUTOCLOSE
# 546 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 547 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_1
# 548 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 549 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 550 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 551 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 552 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_34
# 553 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 554 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 555 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 556 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 557 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_35, MSGBOX_AUTOCLOSE
# 558 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 559 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 560 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_24
# 561 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_25
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_26
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_27
# 565 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 566 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 567 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_36, MSGBOX_AUTOCLOSE
# 568 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 569 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 570 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 571 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_37, MSGBOX_AUTOCLOSE
# 572 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 573 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 574 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_1
# 575 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 576 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_38, MSGBOX_AUTOCLOSE
# 577 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 578 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 579 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 580 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 581 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_10
# 582 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 583 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_28
# 584 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_29
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_30
# 586 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 587 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 588 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_39, MSGBOX_AUTOCLOSE
# 589 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 590 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 591 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 592 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 593 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 594 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 595 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_40, MSGBOX_AUTOCLOSE
# 596 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 597 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 598 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_1
# 599 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 600 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_41, MSGBOX_AUTOCLOSE
# 601 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 602 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 603 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_31
# 604 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 605 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 606 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_42, MSGBOX_AUTOCLOSE
# 607 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 608 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 609 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 610 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_43, MSGBOX_AUTOCLOSE
# 611 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 612 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 613 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 614 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 615 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 616 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 617 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_44, MSGBOX_AUTOCLOSE
# 618 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 619 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 620 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_1
# 621 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Movement_0
# 622 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_7
# 623 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 624 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 625 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_45, MSGBOX_AUTOCLOSE
# 626 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 627 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 628 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 629 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_46, MSGBOX_AUTOCLOSE
# 630 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 631 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 632 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_6
# 633 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 634 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 635 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 636 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_47, MSGBOX_AUTOCLOSE
# 637 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 638 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 639 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	playse SE_PIN
# 640 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0
# 641 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 642 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 643 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_48, MSGBOX_AUTOCLOSE
# 644 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 645 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 646 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 647 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_49, MSGBOX_AUTOCLOSE
# 648 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 649 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 30
# 650 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_0
# 651 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_50, MSGBOX_AUTOCLOSE
# 652 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 653 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 654 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 655 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_24, MSGBOX_AUTOCLOSE
# 656 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 657 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 658 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 17, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_32
# 659 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 660 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_33
# 661 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 662 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 663 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_51, MSGBOX_AUTOCLOSE
# 664 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 665 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_1
# 666 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 667 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 60
# 668 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 669 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_52, MSGBOX_AUTOCLOSE
# 670 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 671 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	delay 120
# 672 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2
# 673 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setspeaker Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0
# 674 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_53, MSGBOX_AUTOCLOSE
# 675 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 676 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 14, Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_34
# 677 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 678 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setflag FLAG_MARSHDUKE_CATHEDRAL_TOUR
# 679 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	clearflag FLAG_MARSHDUKE_CATHEDRAL_HIDE_BEFORE_TOUR
# 680 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	removeobject 14
# 681 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	removeobject 17
# 682 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	addobject 15
# 683 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	addobject 16
# 684 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	addobject 22
# 685 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	addobject 23
# 686 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


# 107 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Movement_0:
# 107 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
	step_end

# 111 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Movement_1:
# 111 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 111 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_down
	step_end

# 135 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Movement_0:
# 135 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_left
	step_end

# 273 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_0:
# 273 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_exclamation_mark
	step_end

# 278 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_1:
# 278 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_right
	step_end

# 284 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_2:
# 284 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 284 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 284 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
	step_end

# 288 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_3:
# 288 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 288 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_down
	step_end

# 291 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_4:
# 291 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_exclamation_mark
# 291 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	jump_in_place_down
# 291 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	jump_in_place_down
	step_end

# 293 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_5:
# 293 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_fast_left
# 293 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_fast_left
	step_end

# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_6:
# 300 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_question_mark
	step_end

# 306 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Movement_7:
# 306 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_down
	step_end

# 332 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_0:
# 332 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 332 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 332 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 332 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
	step_end

# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_1:
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_question_mark
# 341 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 356 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_2:
# 356 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 366 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_3:
# 366 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 366 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 366 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 366 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 366 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 366 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 366 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 366 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 367 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_4:
# 367 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 367 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 367 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 367 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 367 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 367 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 368 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_5:
# 368 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 368 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 368 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 368 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 368 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 368 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 368 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 368 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 368 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 380 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_6:
# 380 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_x
# 380 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_right
	step_end

# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_7:
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 394 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_8:
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 395 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_9:
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 396 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 426 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_10:
# 426 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 426 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 426 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 426 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 426 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 426 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_11:
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 428 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_12:
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 429 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_13:
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 430 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 442 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_14:
# 442 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_exclamation_mark
# 442 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_left
	step_end

# 466 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_15:
# 466 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 466 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 466 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 466 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 466 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 466 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_16:
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 468 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_17:
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 469 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_18:
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 470 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 509 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_19:
# 509 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_question_mark
# 509 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 509 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_left
	step_end

# 516 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_20:
# 516 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 516 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 516 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 516 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 516 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 516 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 516 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 518 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_21:
# 518 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 518 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 518 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 518 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 518 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 518 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 518 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 518 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 518 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 518 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 518 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 518 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 518 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 518 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 518 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 518 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 519 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_22:
# 519 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 519 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 519 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 519 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 519 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 519 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 519 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 519 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 519 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 519 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 519 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 519 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 519 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 519 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 519 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 519 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_23:
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 520 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 560 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_24:
# 560 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 560 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 560 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 560 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
	step_end

# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_25:
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 562 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_26:
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 563 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_27:
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 564 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 583 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_28:
# 583 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 583 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 583 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 583 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 583 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 583 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 583 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 583 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 583 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 583 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 583 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 583 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 583 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 583 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 583 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 583 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 584 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_29:
# 584 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 584 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 584 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 584 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 584 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 584 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 584 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 584 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 584 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 584 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 584 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 584 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 584 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 584 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 584 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 584 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 584 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_30:
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
# 585 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_up
	step_end

# 603 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_31:
# 603 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_left
# 603 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	emote_exclamation_mark
	step_end

# 658 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_32:
# 658 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 658 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 658 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 658 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 658 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 658 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 658 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 658 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 658 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 658 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 658 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
	step_end

# 660 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_33:
# 660 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 660 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_up
	step_end

# 676 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Movement_34:
# 676 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 676 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 676 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 676 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_down
# 676 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 676 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 676 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 676 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 676 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 676 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
# 676 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
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

Marshduke_Indoor_Chatedral_Priest_History_Alakazam_NPC_Text_0:
# 35 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Hi there child. Do you want to hear the\n"
	.string "legend of the first memory?$"

Marshduke_Indoor_Chatedral_Priest_History_Alakazam_NPC_Text_1:
# 40 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Whenever you want to learn some\n"
	.string "history, I'll be here.$"

Marshduke_Indoor_Chatedral_EventScript_Sign_Alakazam_Read_Text_0:
# 46 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "THE REMEMBERER\n"
	.string "A visitor's guide.$"

Marshduke_Indoor_Chatedral_EventScript_Sign_Alakazam_Read_Text_1:
# 48 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
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

Marshduke_Indoor_Chatedral_EventScript_NPC_Priest_FirstMemory_Text_0:
# 56 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Well then.\p"
	.string "Nine hundred years ago, a storm drove a\n"
	.string "fishing village up this hill, and the sky\l"
	.string "above the ALAKAZAM simply opened.\p"
	.string "They saw a burning tower on a foreign\n"
	.string "shore, and a great bird descending in\l"
	.string "rainbow fire to lift three small shapes\l"
	.string "from the flames.\p"
	.string "None of them had ever heard of\n"
	.string "Ecruteak. And yet, as the village elder\l"
	.string "wrote, it was 'realer than real. I smelled\l"
	.string "the ash. I have never left this coast,\l"
	.string "and yet I grieve for a tower I have\l"
	.string "never seen.'\p"
	.string "Word spread. Pilgrims came. And in time\n"
	.string "we understood the visions were not\l"
	.string "random, but chosen.\p"
	.string "We call this the Doctrine of the Deep\n"
	.string "Archive: a mind that has seen too much,\l"
	.string "curating on our behalf, so we are not\l"
	.string "doomed to learn every lesson twice.\p"
	.string "It does not dream. It remembers for us.$"

Marshduke_Indoor_Chatedral_EventScript_NPC_MegaStone_Text_0:
# 65 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "I train PSYCHIC types myself. My\n"
	.string "DROWZEE can barely hold a CALM MIND for\l"
	.string "a few turns, and that one up there\l"
	.string "hasn't dropped its MEGA form in\l"
	.string "thousands of years.\p"
	.string "The scholars say it's raw psychic will\n"
	.string "alone, holding the transformation from\l"
	.string "the inside, the same way it holds the\l"
	.string "visions.\p"
	.string "No stone or trainer. Isn't that mental?$"

Marshduke_Indoor_Chatedral_EventScript_Alakazam_Text_0:
# 84 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "MEGA ALAKAZAM's spoons glow with a\n"
	.string "faint psychic light...\p"
	.string "Ancient memories stir at the edge of\n"
	.string "your mind, visions of LATIOS and LATIAS\l"
	.string "long past.\p"
	.string "Will you open your mind to them?$"

Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Text_0:
# 109 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Welcome back to the present.\p"
	.string "Give yourself time to readjust to the\n"
	.string "world around you.$"

Marshduke_Indoor_Chatedral_EventScript_Sister_Wren_Text_0:
# 119 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
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
# 129 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "BROTHER ANDRÉ$"

Marshduke_Indoor_Chatedral_EventScript_Andre_Trashcan_Text_1:
# 130 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
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
# 133 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...I really should empty this before Ms.\n"
	.string "STONE finds out I've been talking to it\l"
	.string "instead of emptying it.$"

Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_0:
# 143 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Ms. STONE$"

Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_1:
# 144 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Oh, it's you again. Please tell me you\n"
	.string "didn't let a Pidgey in behind you.\p"
	.string "I've chased the same one out through\n"
	.string "that roof gap eleven times this week.\l"
	.string "I'm fairly sure it's mocking me at this\l"
	.string "point.$"

Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_2:
# 147 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Anyway, have you seen all five of the\n"
	.string "memories yet?$"

Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_3:
# 151 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Good. And you didn't just glance at\n"
	.string "them, I hope.\p"
	.string "Half our visitors watch the first one\n"
	.string "and call it a day. That's like reading a\l"
	.string "book's first page and shelving it.\p"
	.string "Gen Z nowadays...$"

Marshduke_Indoor_Chatedral_EventScript_Stone_PostTour_Text_4:
# 156 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Well, go on then. They're not going\n"
	.string "anywhere.\p"
	.string "Neither is he.$"

Marshduke_Indoor_Chatedral_EventScript_Sign_LatiosLatias_Text_0:
# 164 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "THE LESSON OF THE TWO HEARTS:\n"
	.string "Love is the only thing that grows larger\l"
	.string "when shared.$"

Marshduke_Indoor_Chatedral_EventScript_NPC_Mother_TwoHearts_Text_0:
# 173 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...and that's why they never leave each\n"
	.string "other's side.\p"
	.string "They choose not to, even though they\n"
	.string "can if they want.$"

Marshduke_Indoor_Chatedral_EventScript_NPC_Mother_TwoHearts_Text_1:
# 176 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Would you ever choose not to leave me?$"

Marshduke_Indoor_Chatedral_EventScript_NPC_Mother_TwoHearts_Text_2:
# 179 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "I already did, sweetheart. The day you\n"
	.string "were born.$"

Marshduke_Indoor_Chatedral_EventScript_NPC_Mother_TwoHearts_Text_3:
# 183 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Oh, sorry. Were we in your way?\p"
	.string "We just come here sometimes, to look at\n"
	.string "the two of them.$"

Marshduke_Indoor_Chatedral_EventScript_NPC_Child_TwoHearts_Text_0:
# 192 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Mom, why does the boy dragon look like\n"
	.string "the girl dragon, but not exactly?$"

Marshduke_Indoor_Chatedral_EventScript_NPC_Child_TwoHearts_Text_1:
# 195 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Because they're not the same, love.\p"
	.string "LATIOS and LATIAS are brother and\n"
	.string "sister, not reflections.\p"
	.string "Two different people who just happen\n"
	.string "to love each other completely.$"

Marshduke_Indoor_Chatedral_EventScript_NPC_Child_TwoHearts_Text_2:
# 198 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...That's kind of like us, huh?$"

Marshduke_Indoor_Chatedral_EventScript_NPC_Child_TwoHearts_Text_3:
# 202 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Oh! Hi. Have you seen the two dragons\n"
	.string "yet? They're my favorite.$"

Marshduke_Indoor_Chatedral_EventScript_NPC_HoohLugia_Text_0:
# 210 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
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

Marshduke_Indoor_Chatedral_EventScript_Priest_HoohLugia_Text_0:
# 218 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "BROTHER COLM$"

Marshduke_Indoor_Chatedral_EventScript_Priest_HoohLugia_Text_1:
# 219 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Some visitors call LUGIA's hiding\n"
	.string "humility.\p"
	.string "Me personally? I call it a god too afraid\n"
	.string "of itself to help anyone.\p"
	.string "Guilt only becomes a virtue once you\n"
	.string "actually do something with it.$"

Marshduke_Indoor_Chatedral_EventScript_NPC_EnteiRaikouSuicune_Text_0:
# 227 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Oh! You caught me dancing with my\n"
	.string "Vapereon.\p"
	.string "I'm a KIMONO GIRL, all the way from\n"
	.string "Ecruteak City in Johto.\p"
	.string "I crossed half the world just to stand\n"
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

Marshduke_Indoor_Chatedral_EventScript_Priest_EnteiRaikouSuicune_Text_0:
# 235 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "SISTER ODILE$"

Marshduke_Indoor_Chatedral_EventScript_Priest_EnteiRaikouSuicune_Text_1:
# 236 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Second life this. Second life that. Blaa,\n"
	.string "blaa blaaaaah.\p"
	.string "In my opinion it's a life sentence,\n"
	.string "HO-OH never asked them if they wanted\l"
	.string "to keep running.\p"
	.string "I'm already getting tired thinking\n"
	.string "about it.$"

Marshduke_Indoor_Chatedral_EventScript_NPC_MewMewtwo_Text_0:
# 244 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
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

Marshduke_Indoor_Chatedral_EventScript_Priest_MewMewtwo_Text_0:
# 254 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "SISTER RUTH$"

Marshduke_Indoor_Chatedral_EventScript_Priest_MewMewtwo_Text_1:
# 255 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The Order teaches that origin doesn't\n"
	.string "matter, only choice...\p"
	.string "I think that's a comfort we tell MEWTWO\n"
	.string "so we don't have to sit with what was\l"
	.string "actually done to it in that laboratory.\p"
	.string "Some wounds aren't erased by a nice\n"
	.string "philosophy.$"

Marshduke_Indoor_Chatedral_EventScript_Priest_GroundonKyogreRayquaza_Text_0:
# 263 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "SISTER MARGUERITE$"

Marshduke_Indoor_Chatedral_EventScript_Priest_GroundonKyogreRayquaza_Text_1:
# 264 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "RAYQUAZA, everybody loves him, calls him\n"
	.string "righteous and sees him as our lord and\l"
	.string "saviour.\p"
	.string "I call him a coup with a weather machine\n"
	.string "attached.\p"
	.string "Fly in, end the argument by ending\n"
	.string "everyone's ability to have one, call it a\l"
	.string "peace deal forever after.\p"
	.string "Same move every dictator in history has\n"
	.string "made, he's just working with a much\l"
	.string "better color palette.$"

Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_0:
# 275 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Dr. FERRAN$"

Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_1:
# 276 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Careful, don't stand too close.\p"
	.string "My castform is trying to register some\n"
	.string "temperature differences.$"

Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_2:
# 281 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Well, go on.$"

Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_3:
# 303 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "What do you mean?\p"
	.string "Over 9000 degrees?! By Arceus!$"

Marshduke_Indoor_Chatedral_EventScript_NPC_GroundonKyogreRayquaza_Text_4:
# 310 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Sorry about that.\p"
	.string "I'm Dr. FERRAN, Head of Instrumentation\n"
	.string "at the Luzac Institute.\p"
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
# 318 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "FIVE MEMORIES OF WHAT WAS. ONE SPACE\n"
	.string "FOR WHAT COULD BE. THE DIFFERENCE\l"
	.string "BETWEEN THEM IS US.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_0:
# 336 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Ah, a new face! Wonderful.\p"
	.string "I'm the curator and caretaker of this\n"
	.string "cathedral, Head of the Order of the\l"
	.string "Open Eye, and chief remover of Pidgey.\p"
	.string "But please, call me Ms. STONE.\p"
	.string "You have the look of someone who\n"
	.string "wandered in.\p"
	.string "Would you like a tour? It's free, and I'm\n"
	.string "very good at it.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_1:
# 344 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...The seeker arrives at the hour of\n"
	.string "arriving.\p"
	.string "As they always do. As they always have.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_2:
# 350 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "That's BROTHER ANDRÉ...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_3:
# 358 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...I am but a JANITOR!$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_4:
# 364 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "He is but a janitor.\p"
	.string "At the moment, there's no one here but\n"
	.string "the priests of the Order of the Open\l"
	.string "Eye, and us.\p"
	.string "A rare opportunity, let's make the most\n"
	.string "of it.\p"
	.string "Come along, both of you.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_5:
# 371 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "There. That's what you came for,\n"
	.string "whether you knew it or not.\p"
	.string "A MEGA ALAKAZAM. In trance. It has been\n"
	.string "sitting on this hill longer than the hill\l"
	.string "has had a name.\p"
	.string "Older than the city, the walls and we\n"
	.string "think even older than the delta itself.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_6:
# 378 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "It does not sit. It is held.\p"
	.string "Time flows around it as water flows\n"
	.string "around a stone that has decided not to\l"
	.string "be moved...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_7:
# 382 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "It's sitting, André.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_8:
# 387 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...It is sitting in a transcendent\n"
	.string "manner.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_9:
# 392 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
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

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_10:
# 399 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
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

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_11:
# 405 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Three flames of one flame!\p"
	.string "Three faces of one face!\p"
	.string "The many that is secretly the ONE...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_12:
# 410 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "They're not one, André, that's rather\n"
	.string "the point. That's the whole point.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_13:
# 414 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...Three faces of one face that are\n"
	.string "also, in a deeper sense, three faces.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_14:
# 418 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...\p"
	.string "Better.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_15:
# 424 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The lesson here is: A second life is not\n"
	.string "a gift; it is an assignment.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_16:
# 433 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
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

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_17:
# 439 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The silver one is the SILENCE BETWEEN\n"
	.string "THE NOTES.\p"
	.string "The pause in which the chord discovers\n"
	.string "what it truly...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_18:
# 445 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "That's... actually not bad.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_19:
# 450 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...the pause in which the chord\n"
	.string "discovers what it truly... dreams.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_20:
# 456 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...Nevermind.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_21:
# 463 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The old records call this the Divided\n"
	.string "Sky.\p"
	.string "Personally I see it differently.\p"
	.string "Nobody divided that sky. It was only\n"
	.string "ever meant to be balanced and\l"
	.string "maintained.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_22:
# 473 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
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

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_23:
# 480 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "And who among us is not asking that\n"
	.string "same...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_24:
# 486 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "André.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_25:
# 491 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "I was going to say something about the\n"
	.string "ocean.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_26:
# 495 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "I know.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_27:
# 502 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Watch that one to the end, by the way.\n"
	.string "It lingers on the little one, Mew.\p"
	.string "Longer than it needs to. Nobody knows\n"
	.string "why.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_28:
# 514 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "You saw the little one? Mew?\p"
	.string "...\p"
	.string "Not possible. Mew hasn't been seen in\n"
	.string "the wild for decades.\p"
	.string "I think you have mistaken it for\n"
	.string "something else.\p"
	.string "Lets go to the next altar.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_29:
# 523 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
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

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_30:
# 530 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "AH. Now here I have thoughts...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_31:
# 535 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "I'm sure.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_32:
# 539 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...for is not the serpent the AXIS? The\n"
	.string "thread through the bead? The high still\l"
	.string "point about which the war...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_33:
# 545 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "André...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_34:
# 552 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "We send feuding families here, you know.\n"
	.string "Merchant guilds. In-laws. They shake\l"
	.string "hands under the arch and it counts.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_35:
# 557 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "It works about half the time. Which for\n"
	.string "in-laws is remarkable.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_36:
# 567 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
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

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_37:
# 571 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...This is the one I come to. When it's\n"
	.string "late. When nobody is watching.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_38:
# 576 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...\p"
	.string "Yes. Well. Me too.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_39:
# 588 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
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

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_40:
# 595 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The unmanifest! The not-yet! The\n"
	.string "pregnant silence in which all possible\l"
	.string "altars are simultaneously...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_41:
# 600 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "For once, André, that is very close to\n"
	.string "the Order's actual position.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_42:
# 606 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Is it?$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_43:
# 610 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Don't let it go to your head.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_44:
# 617 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Somebody left a plaque here. We've\n"
	.string "never taken it down.\p"
	.string "It reads:\p"
	.string "FIVE MEMORIES OF WHAT WAS.\p"
	.string "ONE SPACE FOR WHAT COULD BE.\p"
	.string "THE DIFFERENCE BETWEEN THEM IS US.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_45:
# 625 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "And that's the tour. Five memories, one\n"
	.string "empty space, and a very old creature\l"
	.string "that hasn't moved since before your\l"
	.string "grandmother's grandmother's\l"
	.string "grandmother.\p"
	.string "Go and watch them properly.\p"
	.string "Take your time.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_46:
# 629 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "May the seeker find what the seeker\n"
	.string "seeks.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_47:
# 636 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Thank you, André.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_48:
# 643 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Or, and this is important, may they find\n"
	.string "what they were NOT seeking.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_49:
# 647 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...That one was quite good.\p"
	.string "Can you clean out the trashcans right\n"
	.string "now?\p"
	.string "You know, your job? Thank you!$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_50:
# 651 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Yes mam. The trashcans, a beautifull\n"
	.string "methaphor for the all the forgotten\l"
	.string "memories.\p"
	.string "You know, trashcans are just like black\n"
	.string "holes...$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_51:
# 663 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
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

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_52:
# 669 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "I don't think it's showing us old stories\n"
	.string "at all, child.\p"
	.string "I think it's showing us what's happening\n"
	.string "right now.$"

Marshduke_Indoor_Cathedral_Introduction_Ms_Stone_Text_53:
# 674 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "...Anyway. Looks like a few visitors have\n"
	.string "trickled in.\p"
	.string "I'd best go scare off the Pidgey. That\n"
	.string "bloody open roof.\p"
	.string "Enjoy the altars.$"
