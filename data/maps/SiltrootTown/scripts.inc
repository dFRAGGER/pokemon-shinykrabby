SiltrootTown_MapScripts::
# 2 "data/maps/SiltrootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SiltrootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SiltrootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_VISITED_SILTROOT_TOWN
	return


Siltroottown_Joris_UpToTheWhiteLight::
# 8 "data/maps/SiltrootTown/scripts.pory"
	lock
# 9 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 10 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_UP_TO_THE_WHITELIGHT_SILTROOTTOWN
# 11 "data/maps/SiltrootTown/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 12 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Joris_UpToTheWhiteLight_Text_0, MSGBOX_AUTOCLOSE
# 13 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 14 "data/maps/SiltrootTown/scripts.pory"
	applymovement 26, Siltroottown_Joris_UpToTheWhiteLight_Movement_0
# 15 "data/maps/SiltrootTown/scripts.pory"
	delay 40
# 16 "data/maps/SiltrootTown/scripts.pory"
	setspeaker Siltroottown_Joris_UpToTheWhiteLight_Text_1
# 17 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Joris_UpToTheWhiteLight_Text_2, MSGBOX_AUTOCLOSE
# 18 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 19 "data/maps/SiltrootTown/scripts.pory"
	playse SE_PIN
# 20 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Siltroottown_Joris_UpToTheWhiteLight_Movement_1
# 21 "data/maps/SiltrootTown/scripts.pory"
	delay 40
# 22 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_0, 51
	goto_if_eq Siltroottown_Joris_UpToTheWhiteLight_4
Siltroottown_Joris_UpToTheWhiteLight_3:
# 26 "data/maps/SiltrootTown/scripts.pory"
	applymovement 2, Siltroottown_Joris_UpToTheWhiteLight_Movement_3
Siltroottown_Joris_UpToTheWhiteLight_1:
# 28 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 29 "data/maps/SiltrootTown/scripts.pory"
	removeobject 2
# 30 "data/maps/SiltrootTown/scripts.pory"
	release
	return

Siltroottown_Joris_UpToTheWhiteLight_2:
# 23 "data/maps/SiltrootTown/scripts.pory"
	applymovement 2, Siltroottown_Joris_UpToTheWhiteLight_Movement_2
	goto Siltroottown_Joris_UpToTheWhiteLight_1

Siltroottown_Joris_UpToTheWhiteLight_4:
# 22 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_1, 55
	goto_if_eq Siltroottown_Joris_UpToTheWhiteLight_2
	goto Siltroottown_Joris_UpToTheWhiteLight_3


SiltrootTown_Corsola_Jump1::
# 35 "data/maps/SiltrootTown/scripts.pory"
	lock
# 36 "data/maps/SiltrootTown/scripts.pory"
	playse SE_PIN
# 37 "data/maps/SiltrootTown/scripts.pory"
	applymovement 23, SiltrootTown_Corsola_Jump1_Movement_0
# 38 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 39 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_TEMP_1
# 40 "data/maps/SiltrootTown/scripts.pory"
	removeobject 23
# 41 "data/maps/SiltrootTown/scripts.pory"
	release
	return


SiltrootTown_Corsola_Jump2::
# 45 "data/maps/SiltrootTown/scripts.pory"
	lock
# 46 "data/maps/SiltrootTown/scripts.pory"
	playse SE_PIN
# 47 "data/maps/SiltrootTown/scripts.pory"
	applymovement 24, SiltrootTown_Corsola_Jump1_Movement_0
# 48 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 49 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_TEMP_2
# 50 "data/maps/SiltrootTown/scripts.pory"
	removeobject 24
# 51 "data/maps/SiltrootTown/scripts.pory"
	release
	return


SiltrootTown_Corsola_Jump3::
# 55 "data/maps/SiltrootTown/scripts.pory"
	lock
# 56 "data/maps/SiltrootTown/scripts.pory"
	playse SE_PIN
# 57 "data/maps/SiltrootTown/scripts.pory"
	applymovement 25, SiltrootTown_Corsola_Jump1_Movement_0
# 58 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 59 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_TEMP_2
# 60 "data/maps/SiltrootTown/scripts.pory"
	removeobject 25
# 61 "data/maps/SiltrootTown/scripts.pory"
	release
	return


SiltrootTown_Sign_AliApothecary::
# 65 "data/maps/SiltrootTown/scripts.pory"
	lock
# 66 "data/maps/SiltrootTown/scripts.pory"
	msgbox SiltrootTown_Sign_AliApothecary_Text_0, MSGBOX_SIGN
# 67 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 68 "data/maps/SiltrootTown/scripts.pory"
	release
	return


SiltrootTown_Sign_Pokecenter::
# 72 "data/maps/SiltrootTown/scripts.pory"
	lock
# 73 "data/maps/SiltrootTown/scripts.pory"
	msgbox SiltrootTown_Sign_Pokecenter_Text_0, MSGBOX_SIGN
# 74 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 75 "data/maps/SiltrootTown/scripts.pory"
	release
	return


Siltroottown_Sign_SiltrootTown::
# 79 "data/maps/SiltrootTown/scripts.pory"
	lock
# 80 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Sign_SiltrootTown_Text_0, MSGBOX_SIGN
# 81 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 82 "data/maps/SiltrootTown/scripts.pory"
	release
	return


SiltrootTown_Scott_Boatride::
# 86 "data/maps/SiltrootTown/scripts.pory"
	lockall
# 87 "data/maps/SiltrootTown/scripts.pory"
	checkitem ITEM_POKEBLOCK_CASE
# 88 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SiltrootTown_Scott_Boatride_2
# 96 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_HIDE_SCOTT_LIONSARCH_CITY
# 97 "data/maps/SiltrootTown/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 98 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 99 "data/maps/SiltrootTown/scripts.pory"
	setspeaker SiltrootTown_Scott_Boatride_Text_0
# 100 "data/maps/SiltrootTown/scripts.pory"
	msgbox SiltrootTown_Scott_Boatride_Text_2, MSGBOX_AUTOCLOSE
# 101 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 102 "data/maps/SiltrootTown/scripts.pory"
	setobjectsubpriority 12, MAP_SILTROOT_TOWN, 0
# 103 "data/maps/SiltrootTown/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_SILTROOT_TOWN, 0
# 104 "data/maps/SiltrootTown/scripts.pory"
	applymovement 12, SiltrootTown_Scott_Boatride_Movement_0
# 105 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 106 "data/maps/SiltrootTown/scripts.pory"
	removeobject 12
# 107 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq SiltrootTown_Scott_Boatride_14
SiltrootTown_Scott_Boatride_12:
# 110 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_0, 23
	goto_if_eq SiltrootTown_Scott_Boatride_11
SiltrootTown_Scott_Boatride_9:
# 113 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_0, 23
	goto_if_eq SiltrootTown_Scott_Boatride_8
SiltrootTown_Scott_Boatride_4:
# 116 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 117 "data/maps/SiltrootTown/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_SILTROOT_TOWN
# 118 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 119 "data/maps/SiltrootTown/scripts.pory"
	playbgm MUS_SAILING, FALSE
# 120 "data/maps/SiltrootTown/scripts.pory"
	applymovement 1, Siltroottown_Boat_Ride_To_Lionsarch
# 121 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Siltroottown_Boat_Ride_To_Lionsarch
# 122 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 123 "data/maps/SiltrootTown/scripts.pory"
	goto SiltrootTown_Arrive_Boatride
	return

SiltrootTown_Scott_Boatride_2:
# 89 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 90 "data/maps/SiltrootTown/scripts.pory"
	setspeaker SiltrootTown_Scott_Boatride_Text_0
# 91 "data/maps/SiltrootTown/scripts.pory"
	msgbox SiltrootTown_Scott_Boatride_Text_1, MSGBOX_AUTOCLOSE
# 92 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 93 "data/maps/SiltrootTown/scripts.pory"
	releaseall
	end

SiltrootTown_Scott_Boatride_5:
# 108 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Scott_Boatride_Movement_1
	goto SiltrootTown_Scott_Boatride_4

SiltrootTown_Scott_Boatride_6:
# 111 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Scott_Boatride_Movement_2
	goto SiltrootTown_Scott_Boatride_4

SiltrootTown_Scott_Boatride_7:
# 114 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Scott_Boatride_Movement_3
	goto SiltrootTown_Scott_Boatride_4

SiltrootTown_Scott_Boatride_8:
# 113 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_1, 21
	goto_if_eq SiltrootTown_Scott_Boatride_7
	goto SiltrootTown_Scott_Boatride_4

SiltrootTown_Scott_Boatride_11:
# 110 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_1, 19
	goto_if_eq SiltrootTown_Scott_Boatride_6
	goto SiltrootTown_Scott_Boatride_9

SiltrootTown_Scott_Boatride_14:
# 107 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_1, 20
	goto_if_eq SiltrootTown_Scott_Boatride_5
	goto SiltrootTown_Scott_Boatride_12


SiltrootTown_Arrive_Boatride::
# 127 "data/maps/SiltrootTown/scripts.pory"
	delay 50
# 128 "data/maps/SiltrootTown/scripts.pory"
	setspeaker SiltrootTown_Scott_Boatride_Text_0
# 129 "data/maps/SiltrootTown/scripts.pory"
	msgbox SiltrootTown_Arrive_Boatride_Text_0, MSGBOX_AUTOCLOSE
# 130 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 131 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Arrive_Boatride_Movement_0
# 132 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 133 "data/maps/SiltrootTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 134 "data/maps/SiltrootTown/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_SILTROOT_TOWN
# 135 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Arrive_Boatride_Movement_1
# 136 "data/maps/SiltrootTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 137 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_HIDE_SCOTT_OUTSIDE_BOAT
# 138 "data/maps/SiltrootTown/scripts.pory"
	setobjectxyperm 5, 9, 59
# 139 "data/maps/SiltrootTown/scripts.pory"
	addobject 5
# 140 "data/maps/SiltrootTown/scripts.pory"
	setobjectsubpriority 5, MAP_SILTROOT_TOWN, 0
# 141 "data/maps/SiltrootTown/scripts.pory"
	clearflag FLAG_HIDE_SCOTT_LIONSARCH_CITY
# 142 "data/maps/SiltrootTown/scripts.pory"
	applymovement 5, SiltrootTown_Arrive_Boatride_Movement_2
# 143 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 144 "data/maps/SiltrootTown/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_SILTROOT_TOWN
# 145 "data/maps/SiltrootTown/scripts.pory"
	resetobjectsubpriority 5, MAP_LIONSARCH_CITY
# 146 "data/maps/SiltrootTown/scripts.pory"
	setspeaker SiltrootTown_Scott_Boatride_Text_0
# 147 "data/maps/SiltrootTown/scripts.pory"
	msgbox SiltrootTown_Arrive_Boatride_Text_1, MSGBOX_AUTOCLOSE
# 148 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 149 "data/maps/SiltrootTown/scripts.pory"
	applymovement 5, SiltrootTown_Arrive_Boatride_Movement_3
# 150 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 151 "data/maps/SiltrootTown/scripts.pory"
	removeobject 5
# 152 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_HIDE_SCOTT_LIONSARCH_CITY
# 153 "data/maps/SiltrootTown/scripts.pory"
	setrespawn HEAL_LOCATION_LIONSARCH_CITY
	end


Siltroottown_Youth_Outide_Ali_Shop_1::
# 160 "data/maps/SiltrootTown/scripts.pory"
	lock
# 161 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Youth_Outide_Ali_Shop_1_Text_0, MSGBOX_AUTOCLOSE
# 162 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 163 "data/maps/SiltrootTown/scripts.pory"
	playse SE_PIN
# 164 "data/maps/SiltrootTown/scripts.pory"
	applymovement 14, Siltroottown_Youth_Outide_Ali_Shop_1_Movement_0
# 165 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Youth_Outide_Ali_Shop_1_Text_1
# 166 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 167 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Youth_Outide_Ali_Shop_2::
# 172 "data/maps/SiltrootTown/scripts.pory"
	lock
# 173 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 174 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Youth_Outide_Ali_Shop_2_Text_0
# 175 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 176 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Youth_Outide_Ali_Shop_3::
# 181 "data/maps/SiltrootTown/scripts.pory"
	lock
# 182 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 183 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Youth_Outide_Ali_Shop_3_Text_0
# 184 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 185 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Stoned_Dude_Outside::
# 190 "data/maps/SiltrootTown/scripts.pory"
	lock
# 191 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 192 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Stoned_Dude_Outside_Text_0
# 193 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 194 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Old_Lady::
# 200 "data/maps/SiltrootTown/scripts.pory"
	lock
# 201 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 202 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Old_Lady_Text_0
# 203 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 204 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Fat_Man::
# 209 "data/maps/SiltrootTown/scripts.pory"
	lock
# 210 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 211 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Fat_Man_Text_0
# 212 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 213 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Children_Boy::
# 218 "data/maps/SiltrootTown/scripts.pory"
	lock
# 220 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Children_Boy_Text_0
# 221 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 222 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Children_Girl::
# 227 "data/maps/SiltrootTown/scripts.pory"
	lock
# 228 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Children_Girl_Text_0
# 229 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 230 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Sailor_Biodiversity::
# 235 "data/maps/SiltrootTown/scripts.pory"
	lock
# 236 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 237 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Sailor_Biodiversity_Text_0
# 238 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 239 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Fisher_Sad::
# 244 "data/maps/SiltrootTown/scripts.pory"
	lock
# 245 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 246 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Fisher_Sad_Text_0
# 247 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 248 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Guard_shed::
# 253 "data/maps/SiltrootTown/scripts.pory"
	lock
# 254 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 255 "data/maps/SiltrootTown/scripts.pory"
	goto_if_unset FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1, Siltroottown_Guard_shed_11
Siltroottown_Guard_shed_9:
# 261 "data/maps/SiltrootTown/scripts.pory"
	goto_if_set FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1, Siltroottown_Guard_shed_8
Siltroottown_Guard_shed_6:
# 291 "data/maps/SiltrootTown/scripts.pory"
	goto_if_set FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1, Siltroottown_Guard_shed_5
Siltroottown_Guard_shed_1:
# 297 "data/maps/SiltrootTown/scripts.pory"
	release
	end

Siltroottown_Guard_shed_2:
# 256 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Guard_shed_Text_0, MSGBOX_AUTOCLOSE
# 257 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 258 "data/maps/SiltrootTown/scripts.pory"
	release
	end

Siltroottown_Guard_shed_3:
# 262 "data/maps/SiltrootTown/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 263 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Guard_shed_Text_0, MSGBOX_AUTOCLOSE
# 264 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 265 "data/maps/SiltrootTown/scripts.pory"
	delay 60
# 266 "data/maps/SiltrootTown/scripts.pory"
	playse SE_PIN
# 267 "data/maps/SiltrootTown/scripts.pory"
	applymovement 20, Siltroottown_Guard_shed_Movement_0
# 268 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 269 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Guard_shed_Text_1, MSGBOX_AUTOCLOSE
# 270 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 271 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_0, 62
	goto_if_eq Siltroottown_Guard_shed_20
Siltroottown_Guard_shed_18:
# 277 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_0, 61
	goto_if_eq Siltroottown_Guard_shed_17
Siltroottown_Guard_shed_14:
# 283 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Guard_shed_Text_2, MSGBOX_AUTOCLOSE
# 284 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 285 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Siltroottown_Guard_shed_Movement_5
# 286 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 287 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_HIDE_SILTROOTTOWN_SHED_GUARD
# 288 "data/maps/SiltrootTown/scripts.pory"
	release
	end

Siltroottown_Guard_shed_4:
# 292 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Guard_shed_Text_3, MSGBOX_AUTOCLOSE
# 293 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 294 "data/maps/SiltrootTown/scripts.pory"
	release
	end

Siltroottown_Guard_shed_5:
# 291 "data/maps/SiltrootTown/scripts.pory"
	goto_if_set FLAG_HIDE_SILTROOTTOWN_SHED_GUARD, Siltroottown_Guard_shed_4
	goto Siltroottown_Guard_shed_1

Siltroottown_Guard_shed_8:
# 261 "data/maps/SiltrootTown/scripts.pory"
	goto_if_unset FLAG_HIDE_SILTROOTTOWN_SHED_GUARD, Siltroottown_Guard_shed_3
	goto Siltroottown_Guard_shed_6

Siltroottown_Guard_shed_11:
# 255 "data/maps/SiltrootTown/scripts.pory"
	goto_if_unset FLAG_HIDE_SILTROOTTOWN_SHED_GUARD, Siltroottown_Guard_shed_2
	goto Siltroottown_Guard_shed_9

Siltroottown_Guard_shed_15:
# 272 "data/maps/SiltrootTown/scripts.pory"
	applymovement 20, Siltroottown_Guard_shed_Movement_1
# 273 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 274 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Siltroottown_Guard_shed_Movement_2
# 275 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
	goto Siltroottown_Guard_shed_14

Siltroottown_Guard_shed_16:
# 278 "data/maps/SiltrootTown/scripts.pory"
	applymovement 20, Siltroottown_Guard_shed_Movement_3
# 279 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 280 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Siltroottown_Guard_shed_Movement_4
# 281 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
	goto Siltroottown_Guard_shed_14

Siltroottown_Guard_shed_17:
# 277 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_1, 66
	goto_if_eq Siltroottown_Guard_shed_16
	goto Siltroottown_Guard_shed_14

Siltroottown_Guard_shed_20:
# 271 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_1, 65
	goto_if_eq Siltroottown_Guard_shed_15
	goto Siltroottown_Guard_shed_18


# 301 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Boat_Ride_To_Lionsarch:
# 302 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 303 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 304 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 305 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 306 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 307 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 308 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 309 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 310 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 311 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 312 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 313 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 314 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 315 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 316 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 317 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 318 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 319 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 320 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 321 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 322 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 323 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 324 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 325 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 326 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 327 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 328 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 329 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 330 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 331 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 332 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 333 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 334 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 335 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 336 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 337 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 338 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 339 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 340 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 341 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 342 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 343 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 344 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 345 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 346 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 347 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 348 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 349 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 350 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 351 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 352 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 353 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 354 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 355 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 356 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 357 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 358 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 359 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 360 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 361 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 362 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 363 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 364 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 365 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 366 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 367 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 368 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 369 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 370 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 371 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 372 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 373 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 374 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 375 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 376 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 377 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 378 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 379 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 380 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 381 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 382 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 383 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 384 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 385 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 386 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 387 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 388 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 389 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 390 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 391 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 392 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 393 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 394 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 395 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 396 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 397 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 398 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 399 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 400 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 401 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 402 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 403 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 404 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 405 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 406 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 407 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 408 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 409 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 410 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 411 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 412 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 413 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 414 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 415 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 416 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 417 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 418 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 419 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 420 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 421 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 422 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 423 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 424 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 425 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 426 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 427 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 428 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 429 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 430 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 431 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 432 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 433 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 434 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 435 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 436 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 437 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 438 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 439 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 440 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 441 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 442 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 443 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 444 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 445 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 446 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 447 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 448 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 449 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 450 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 451 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 452 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 453 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 454 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 455 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 456 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 457 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 458 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 459 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 460 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 461 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 462 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 463 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 464 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 465 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 466 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 467 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 468 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 469 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 470 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 471 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 472 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 473 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 474 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 475 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 476 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 477 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 478 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 479 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 480 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 481 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 482 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 483 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 484 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 485 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 486 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 487 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 488 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 489 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 490 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 491 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 492 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 493 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 494 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 495 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 496 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 497 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 498 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 499 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 500 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 501 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 502 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 503 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 504 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 505 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 506 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 507 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 508 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 509 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 510 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 511 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 512 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 513 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 514 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 515 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 516 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 517 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 518 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 519 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 520 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 521 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 522 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 523 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 524 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 525 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 526 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 527 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 528 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 529 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 530 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 531 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 532 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 533 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 534 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 535 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 536 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 537 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 538 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 539 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 540 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 541 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 542 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 543 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 544 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 545 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 546 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 547 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 548 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 549 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 550 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 551 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 552 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 553 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 554 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 555 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 556 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 557 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 558 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 559 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 560 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 561 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 562 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 563 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 564 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 565 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 566 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 567 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 568 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 569 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 570 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 571 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 572 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 573 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 574 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 575 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 576 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 577 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 578 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 579 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 580 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 581 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 582 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 583 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 584 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 585 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 586 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 587 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 588 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 589 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 590 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 591 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 592 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 593 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 594 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 595 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 596 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 597 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 598 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 599 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 600 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 601 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 602 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 603 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 604 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 605 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 606 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 607 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 608 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 609 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 610 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 611 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 612 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 613 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 614 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 615 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 616 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 617 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 618 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 619 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 620 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 621 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 622 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 623 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 624 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 625 "data/maps/SiltrootTown/scripts.pory"
	step_end

# 14 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Joris_UpToTheWhiteLight_Movement_0:
# 14 "data/maps/SiltrootTown/scripts.pory"
	walk_in_place_fast_down
	step_end

# 20 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Joris_UpToTheWhiteLight_Movement_1:
# 20 "data/maps/SiltrootTown/scripts.pory"
	emote_question_mark
	step_end

# 23 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Joris_UpToTheWhiteLight_Movement_2:
# 23 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 23 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 23 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 23 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 23 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 23 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 23 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 23 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 23 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 23 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 23 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 23 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 23 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
	step_end

# 26 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Joris_UpToTheWhiteLight_Movement_3:
# 26 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 26 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 26 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 26 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 26 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 26 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 26 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 26 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 26 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 26 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 26 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 26 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
	step_end

# 37 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Corsola_Jump1_Movement_0:
# 37 "data/maps/SiltrootTown/scripts.pory"
	emote_exclamation_mark
# 37 "data/maps/SiltrootTown/scripts.pory"
	jump_2_left
	step_end

# 104 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Scott_Boatride_Movement_0:
# 104 "data/maps/SiltrootTown/scripts.pory"
	walk_right
	step_end

# 108 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Scott_Boatride_Movement_1:
# 108 "data/maps/SiltrootTown/scripts.pory"
	walk_right
# 108 "data/maps/SiltrootTown/scripts.pory"
	walk_right
	step_end

# 111 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Scott_Boatride_Movement_2:
# 111 "data/maps/SiltrootTown/scripts.pory"
	walk_down
# 111 "data/maps/SiltrootTown/scripts.pory"
	walk_right
	step_end

# 114 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Scott_Boatride_Movement_3:
# 114 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 114 "data/maps/SiltrootTown/scripts.pory"
	walk_right
	step_end

# 131 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Arrive_Boatride_Movement_0:
# 131 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
	step_end

# 135 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Arrive_Boatride_Movement_1:
# 135 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 135 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 135 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 135 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 135 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 135 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 135 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 135 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 135 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 135 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 135 "data/maps/SiltrootTown/scripts.pory"
	face_left
	step_end

# 142 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Arrive_Boatride_Movement_2:
# 142 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 142 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 142 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 142 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 142 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 142 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 142 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 142 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 142 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 142 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 142 "data/maps/SiltrootTown/scripts.pory"
	face_right
	step_end

# 149 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Arrive_Boatride_Movement_3:
# 149 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 149 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 149 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 149 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 149 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 149 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 149 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 149 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 149 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 149 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 149 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
	step_end

# 164 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Youth_Outide_Ali_Shop_1_Movement_0:
# 164 "data/maps/SiltrootTown/scripts.pory"
	emote_exclamation_mark
# 164 "data/maps/SiltrootTown/scripts.pory"
	face_player
	step_end

# 267 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_0:
# 267 "data/maps/SiltrootTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 272 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_1:
# 272 "data/maps/SiltrootTown/scripts.pory"
	walk_down
# 272 "data/maps/SiltrootTown/scripts.pory"
	face_up
	step_end

# 274 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_2:
# 274 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 274 "data/maps/SiltrootTown/scripts.pory"
	face_down
	step_end

# 278 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_3:
# 278 "data/maps/SiltrootTown/scripts.pory"
	walk_right
# 278 "data/maps/SiltrootTown/scripts.pory"
	face_left
	step_end

# 280 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_4:
# 280 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 280 "data/maps/SiltrootTown/scripts.pory"
	face_right
	step_end

# 285 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_5:
# 285 "data/maps/SiltrootTown/scripts.pory"
	face_up
	step_end

Siltroottown_Joris_UpToTheWhiteLight_Text_0:
# 12 "data/maps/SiltrootTown/scripts.pory"
	.string "...$"

Siltroottown_Joris_UpToTheWhiteLight_Text_1:
# 16 "data/maps/SiltrootTown/scripts.pory"
	.string "?????$"

Siltroottown_Joris_UpToTheWhiteLight_Text_2:
# 17 "data/maps/SiltrootTown/scripts.pory"
	.string "UP TO THE WHITELIGHT!!!$"

SiltrootTown_Sign_AliApothecary_Text_0:
# 66 "data/maps/SiltrootTown/scripts.pory"
	.string "Coffeeshop the Magical Root!\n"
	.string "Where the smoke is thick and the leaves\l"
	.string "burn bright!$"

SiltrootTown_Sign_Pokecenter_Text_0:
# 73 "data/maps/SiltrootTown/scripts.pory"
	.string "Pokecenter Siltroot\n"
	.string "The oldest medical facility in the\l"
	.string "region!$"

Siltroottown_Sign_SiltrootTown_Text_0:
# 80 "data/maps/SiltrootTown/scripts.pory"
	.string "{LEFT_ARROW} Siltroot Town\n"
	.string "Where the mud is thick and the roots\l"
	.string "are deep.$"

SiltrootTown_Scott_Boatride_Text_0:
# 90 "data/maps/SiltrootTown/scripts.pory"
	.string "Scott$"

SiltrootTown_Scott_Boatride_Text_1:
# 91 "data/maps/SiltrootTown/scripts.pory"
	.string "...I don't know you.\p"
	.string "You got no credentials.\p"
	.string "Go see Ali first.\p"
	.string "If he vouches for you, you'll know what\n"
	.string "to bring.$"

SiltrootTown_Scott_Boatride_Text_2:
# 100 "data/maps/SiltrootTown/scripts.pory"
	.string "Nobody saw you right?\p"
	.string "Lets move before the satellite flies\n"
	.string "over.\p"
	.string "The boat ride will be a rough one.$"

SiltrootTown_Arrive_Boatride_Text_0:
# 129 "data/maps/SiltrootTown/scripts.pory"
	.string "Bravo, Tango here.\p"
	.string "Ready to disembark?\p"
	.string "...\p"
	.string "Copy that.\p"
	.string "Let's move!$"

SiltrootTown_Arrive_Boatride_Text_1:
# 147 "data/maps/SiltrootTown/scripts.pory"
	.string "Touchdown. We are in the blind spot.\p"
	.string "My scanners show a gap in the harbor\n"
	.string "security grid for exactly forty-five\l"
	.string "seconds.\p"
	.string "Listen fast because I am burning fuel\n"
	.string "right now.\p"
	.string "I am not going further into the city.\p"
	.string "Too many facial recognition towers.\p"
	.string "You have to take the package to the\n"
	.string "client yourself.\p"
	.string "He is a DJ.\p"
	.string "Peter.\p"
	.string "If you hear loud, old-school disco\n"
	.string "music, that is the drop-off point.\p"
	.string "Now get moving!\p"
	.string "Walk forward and don't look back.\p"
	.string "If anyone asks, we never met.\p"
	.string "I was never here.\p"
	.string "Tango going dark.$"

Siltroottown_Youth_Outide_Ali_Shop_1_Text_0:
# 161 "data/maps/SiltrootTown/scripts.pory"
	.string "Yo Charmander, give your tail here, I\n"
	.string "need to light my joint as we...$"

Siltroottown_Youth_Outide_Ali_Shop_1_Text_1:
# 165 "data/maps/SiltrootTown/scripts.pory"
	.string "!!\p"
	.string "...as well as my incense!\p"
	.string "Yes, purely medicinal incense.\p"
	.string "For my... glaucoma.\p"
	.string "Please don't tell Officer Jenny.$"

Siltroottown_Youth_Outide_Ali_Shop_2_Text_0:
# 174 "data/maps/SiltrootTown/scripts.pory"
	.string "Dude, be cool!\p"
	.string "Stop looking at me!\p"
	.string "If you stare, they'll know we aren't\n"
	.string "actually training.\p"
	.string "Just act natural.\p"
	.string "...Is 'acting natural' standing\n"
	.string "perfectly still or waving my arms? I\l"
	.string "forgot.$"

Siltroottown_Youth_Outide_Ali_Shop_3_Text_0:
# 183 "data/maps/SiltrootTown/scripts.pory"
	.string "Ali really knows his botany...\p"
	.string "I feel like a Hoppip floating on a\n"
	.string "breeze.\p"
	.string "Hey, do you have any snacks?\p"
	.string "I would kill for a Lava Cookie right now.$"

Siltroottown_Stoned_Dude_Outside_Text_0:
# 192 "data/maps/SiltrootTown/scripts.pory"
	.string "I came outside for some fresh air, but\n"
	.string "the air feels... really loud right now.\p"
	.string "I think I'm just going to stare at the\n"
	.string "sand for a while.$"

Siltroottown_Old_Lady_Text_0:
# 202 "data/maps/SiltrootTown/scripts.pory"
	.string "All this beautiful nature, and the youth\n"
	.string "only care about those dreadful herbs.\p"
	.string "They should be burying their noses in\n"
	.string "books, not clouds of smoke.$"

Siltroottown_Fat_Man_Text_0:
# 211 "data/maps/SiltrootTown/scripts.pory"
	.string "Everyone claims the hunger comes from\n"
	.string "the special grass, but that is total\l"
	.string "nonsense.\p"
	.string "I am just big-boned and naturally\n"
	.string "require three pizzas every hour to\l"
	.string "survive.$"

Siltroottown_Children_Boy_Text_0:
# 220 "data/maps/SiltrootTown/scripts.pory"
	.string "Hey, cut it out! Janine!\p"
	.string "I am trying to look for a Magikarp down\n"
	.string "here and you are scaring them away!\p"
	.string "Why is your face all red? The water isn't\n"
	.string "even hot!$"

Siltroottown_Children_Girl_Text_0:
# 228 "data/maps/SiltrootTown/scripts.pory"
	.string "Take that! Adrian!\p"
	.string "I bet you can't catch me, even with\n"
	.string "those floaties on!\p"
	.string "...But if you did catch me, I wouldn't be\n"
	.string "mad or anything.$"

Siltroottown_Sailor_Biodiversity_Text_0:
# 237 "data/maps/SiltrootTown/scripts.pory"
	.string "Back in the day, you couldn't cast a line\n"
	.string "into these mangroves without hooking\l"
	.string "something rare.\p"
	.string "Siltroot was legendary, the water was\n"
	.string "practically bubbling with life.\p"
	.string "But for the last twenty years? It has\n"
	.string "been dead silent.\p"
	.string "Now you sit here for hours and catch\n"
	.string "nothing but old boots and seaweed.\p"
	.string "It breaks my heart to see the mudflats\n"
	.string "this empty.$"

Siltroottown_Fisher_Sad_Text_0:
# 246 "data/maps/SiltrootTown/scripts.pory"
	.string "They say the fish are gone because of\n"
	.string "'overfishing,' but that is total rubbish.\p"
	.string "It is the bureaucrats and their endless\n"
	.string "regulations that killed this town!\p"
	.string "That is why I sneak into the protected\n"
	.string "marine reserve to cast my line now.\p"
	.string "You have to break the law just to find a\n"
	.string "decent catch these days!$"

Siltroottown_Guard_shed_Text_0:
# 256 "data/maps/SiltrootTown/scripts.pory"
	.string "Whoa, hold your Ponyta.\p"
	.string "This is a restricted agricultural\n"
	.string "facility.\p"
	.string "Strictly authorized personnel only.$"

Siltroottown_Guard_shed_Text_1:
# 269 "data/maps/SiltrootTown/scripts.pory"
	.string "...\p"
	.string "Oh? Ali sent you?\p"
	.string "For the 'Project Star-Shot' shipment?\p"
	.string "Alright, you're clear.$"

Siltroottown_Guard_shed_Text_2:
# 283 "data/maps/SiltrootTown/scripts.pory"
	.string "But listen carefully.\p"
	.string "The production team is inside right now.\p"
	.string "It's a bunch of Slowbros.\p"
	.string "They are in a deep, meditative trance\n"
	.string "while they work.\p"
	.string "If they see you, it breaks their flow,\n"
	.string "and they will use their psychic powers\l"
	.string "to toss you right back out the front\l"
	.string "door.\p"
	.string "The bag is in the back.\p"
	.string "Move like a ghost, kid.$"

Siltroottown_Guard_shed_Text_3:
# 292 "data/maps/SiltrootTown/scripts.pory"
	.string "Remember, don't let the Slowbro's see\n"
	.string "you.\p"
	.string "The bag is in the back.\p"
	.string "Move like a ghost, kid.$"
