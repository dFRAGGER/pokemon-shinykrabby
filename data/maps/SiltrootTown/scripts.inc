SiltrootTown_MapScripts::
# 2 "data/maps/SiltrootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SiltrootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SiltrootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_VISITED_SILTROOT_TOWN
	return


SiltrootTown_Sign_AliApothecary::
# 8 "data/maps/SiltrootTown/scripts.pory"
	lock
# 9 "data/maps/SiltrootTown/scripts.pory"
	msgbox SiltrootTown_Sign_AliApothecary_Text_0, MSGBOX_SIGN
# 10 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 11 "data/maps/SiltrootTown/scripts.pory"
	release
	return


SiltrootTown_Sign_Pokecenter::
# 15 "data/maps/SiltrootTown/scripts.pory"
	lock
# 16 "data/maps/SiltrootTown/scripts.pory"
	msgbox SiltrootTown_Sign_Pokecenter_Text_0, MSGBOX_SIGN
# 17 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 18 "data/maps/SiltrootTown/scripts.pory"
	release
	return


Siltroottown_Sign_SiltrootTown::
# 22 "data/maps/SiltrootTown/scripts.pory"
	lock
# 23 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Sign_SiltrootTown_Text_0, MSGBOX_SIGN
# 24 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 25 "data/maps/SiltrootTown/scripts.pory"
	release
	return


SiltrootTown_Scott_Boatride::
# 29 "data/maps/SiltrootTown/scripts.pory"
	lockall
# 30 "data/maps/SiltrootTown/scripts.pory"
	checkitem ITEM_POKEBLOCK_CASE
# 31 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SiltrootTown_Scott_Boatride_2
# 39 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_HIDE_SCOTT_LIONSARCH_CITY
# 40 "data/maps/SiltrootTown/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 41 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 42 "data/maps/SiltrootTown/scripts.pory"
	setspeaker SiltrootTown_Scott_Boatride_Text_0
# 43 "data/maps/SiltrootTown/scripts.pory"
	msgbox SiltrootTown_Scott_Boatride_Text_2, MSGBOX_AUTOCLOSE
# 44 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 45 "data/maps/SiltrootTown/scripts.pory"
	setobjectsubpriority 12, MAP_SILTROOT_TOWN, 0
# 46 "data/maps/SiltrootTown/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_SILTROOT_TOWN, 0
# 47 "data/maps/SiltrootTown/scripts.pory"
	applymovement 12, SiltrootTown_Scott_Boatride_Movement_0
# 48 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 49 "data/maps/SiltrootTown/scripts.pory"
	removeobject 12
# 50 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq SiltrootTown_Scott_Boatride_14
SiltrootTown_Scott_Boatride_12:
# 53 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_0, 23
	goto_if_eq SiltrootTown_Scott_Boatride_11
SiltrootTown_Scott_Boatride_9:
# 56 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_0, 23
	goto_if_eq SiltrootTown_Scott_Boatride_8
SiltrootTown_Scott_Boatride_4:
# 59 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 60 "data/maps/SiltrootTown/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_SILTROOT_TOWN
# 61 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 62 "data/maps/SiltrootTown/scripts.pory"
	playbgm MUS_SAILING, FALSE
# 63 "data/maps/SiltrootTown/scripts.pory"
	applymovement 1, Siltroottown_Boat_Ride_To_Lionsarch
# 64 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Siltroottown_Boat_Ride_To_Lionsarch
# 65 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 66 "data/maps/SiltrootTown/scripts.pory"
	goto SiltrootTown_Arrive_Boatride
	return

SiltrootTown_Scott_Boatride_2:
# 32 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 33 "data/maps/SiltrootTown/scripts.pory"
	setspeaker SiltrootTown_Scott_Boatride_Text_0
# 34 "data/maps/SiltrootTown/scripts.pory"
	msgbox SiltrootTown_Scott_Boatride_Text_1, MSGBOX_AUTOCLOSE
# 35 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 36 "data/maps/SiltrootTown/scripts.pory"
	releaseall
	end

SiltrootTown_Scott_Boatride_5:
# 51 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Scott_Boatride_Movement_1
	goto SiltrootTown_Scott_Boatride_4

SiltrootTown_Scott_Boatride_6:
# 54 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Scott_Boatride_Movement_2
	goto SiltrootTown_Scott_Boatride_4

SiltrootTown_Scott_Boatride_7:
# 57 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Scott_Boatride_Movement_3
	goto SiltrootTown_Scott_Boatride_4

SiltrootTown_Scott_Boatride_8:
# 56 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_1, 21
	goto_if_eq SiltrootTown_Scott_Boatride_7
	goto SiltrootTown_Scott_Boatride_4

SiltrootTown_Scott_Boatride_11:
# 53 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_1, 19
	goto_if_eq SiltrootTown_Scott_Boatride_6
	goto SiltrootTown_Scott_Boatride_9

SiltrootTown_Scott_Boatride_14:
# 50 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_1, 20
	goto_if_eq SiltrootTown_Scott_Boatride_5
	goto SiltrootTown_Scott_Boatride_12


SiltrootTown_Arrive_Boatride::
# 70 "data/maps/SiltrootTown/scripts.pory"
	delay 50
# 71 "data/maps/SiltrootTown/scripts.pory"
	setspeaker SiltrootTown_Scott_Boatride_Text_0
# 72 "data/maps/SiltrootTown/scripts.pory"
	msgbox SiltrootTown_Arrive_Boatride_Text_0, MSGBOX_AUTOCLOSE
# 73 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 74 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Arrive_Boatride_Movement_0
# 75 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 76 "data/maps/SiltrootTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 77 "data/maps/SiltrootTown/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_SILTROOT_TOWN
# 78 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Arrive_Boatride_Movement_1
# 79 "data/maps/SiltrootTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 80 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_HIDE_SCOTT_OUTSIDE_BOAT
# 81 "data/maps/SiltrootTown/scripts.pory"
	setobjectxyperm 5, 9, 59
# 82 "data/maps/SiltrootTown/scripts.pory"
	addobject 5
# 83 "data/maps/SiltrootTown/scripts.pory"
	setobjectsubpriority 5, MAP_SILTROOT_TOWN, 0
# 84 "data/maps/SiltrootTown/scripts.pory"
	clearflag FLAG_HIDE_SCOTT_LIONSARCH_CITY
# 85 "data/maps/SiltrootTown/scripts.pory"
	applymovement 5, SiltrootTown_Arrive_Boatride_Movement_2
# 86 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 87 "data/maps/SiltrootTown/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_SILTROOT_TOWN
# 88 "data/maps/SiltrootTown/scripts.pory"
	resetobjectsubpriority 5, MAP_LIONSARCH_CITY
# 89 "data/maps/SiltrootTown/scripts.pory"
	setspeaker SiltrootTown_Scott_Boatride_Text_0
# 90 "data/maps/SiltrootTown/scripts.pory"
	msgbox SiltrootTown_Arrive_Boatride_Text_1, MSGBOX_AUTOCLOSE
# 91 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 92 "data/maps/SiltrootTown/scripts.pory"
	applymovement 5, SiltrootTown_Arrive_Boatride_Movement_3
# 93 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 94 "data/maps/SiltrootTown/scripts.pory"
	removeobject 5
# 95 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_HIDE_SCOTT_LIONSARCH_CITY
# 96 "data/maps/SiltrootTown/scripts.pory"
	setrespawn HEAL_LOCATION_LIONSARCH_CITY
	end


Siltroottown_Youth_Outide_Ali_Shop_1::
# 103 "data/maps/SiltrootTown/scripts.pory"
	lock
# 104 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Youth_Outide_Ali_Shop_1_Text_0, MSGBOX_AUTOCLOSE
# 105 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 106 "data/maps/SiltrootTown/scripts.pory"
	playse SE_PIN
# 107 "data/maps/SiltrootTown/scripts.pory"
	applymovement 14, Siltroottown_Youth_Outide_Ali_Shop_1_Movement_0
# 108 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Youth_Outide_Ali_Shop_1_Text_1
# 109 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 110 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Youth_Outide_Ali_Shop_2::
# 115 "data/maps/SiltrootTown/scripts.pory"
	lock
# 116 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 117 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Youth_Outide_Ali_Shop_2_Text_0
# 118 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 119 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Youth_Outide_Ali_Shop_3::
# 124 "data/maps/SiltrootTown/scripts.pory"
	lock
# 125 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 126 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Youth_Outide_Ali_Shop_3_Text_0
# 127 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 128 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Stoned_Dude_Outside::
# 133 "data/maps/SiltrootTown/scripts.pory"
	lock
# 134 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 135 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Stoned_Dude_Outside_Text_0
# 136 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 137 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Old_Lady::
# 143 "data/maps/SiltrootTown/scripts.pory"
	lock
# 144 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 145 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Old_Lady_Text_0
# 146 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 147 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Fat_Man::
# 152 "data/maps/SiltrootTown/scripts.pory"
	lock
# 153 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 154 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Fat_Man_Text_0
# 155 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 156 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Children_Boy::
# 161 "data/maps/SiltrootTown/scripts.pory"
	lock
# 163 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Children_Boy_Text_0
# 164 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 165 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Children_Girl::
# 170 "data/maps/SiltrootTown/scripts.pory"
	lock
# 171 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Children_Girl_Text_0
# 172 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 173 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Sailor_Biodiversity::
# 178 "data/maps/SiltrootTown/scripts.pory"
	lock
# 179 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 180 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Sailor_Biodiversity_Text_0
# 181 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 182 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Fisher_Sad::
# 187 "data/maps/SiltrootTown/scripts.pory"
	lock
# 188 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 189 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Fisher_Sad_Text_0
# 190 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 191 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Guard_shed::
# 196 "data/maps/SiltrootTown/scripts.pory"
	lock
# 197 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 198 "data/maps/SiltrootTown/scripts.pory"
	goto_if_unset FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1, Siltroottown_Guard_shed_11
Siltroottown_Guard_shed_9:
# 204 "data/maps/SiltrootTown/scripts.pory"
	goto_if_set FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1, Siltroottown_Guard_shed_8
Siltroottown_Guard_shed_6:
# 234 "data/maps/SiltrootTown/scripts.pory"
	goto_if_set FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1, Siltroottown_Guard_shed_5
Siltroottown_Guard_shed_1:
# 240 "data/maps/SiltrootTown/scripts.pory"
	release
	end

Siltroottown_Guard_shed_2:
# 199 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Guard_shed_Text_0, MSGBOX_AUTOCLOSE
# 200 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 201 "data/maps/SiltrootTown/scripts.pory"
	release
	end

Siltroottown_Guard_shed_3:
# 205 "data/maps/SiltrootTown/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 206 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Guard_shed_Text_0, MSGBOX_AUTOCLOSE
# 207 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 208 "data/maps/SiltrootTown/scripts.pory"
	delay 60
# 209 "data/maps/SiltrootTown/scripts.pory"
	playse SE_PIN
# 210 "data/maps/SiltrootTown/scripts.pory"
	applymovement 20, Siltroottown_Guard_shed_Movement_0
# 211 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 212 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Guard_shed_Text_1, MSGBOX_AUTOCLOSE
# 213 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 214 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_0, 62
	goto_if_eq Siltroottown_Guard_shed_20
Siltroottown_Guard_shed_18:
# 220 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_0, 61
	goto_if_eq Siltroottown_Guard_shed_17
Siltroottown_Guard_shed_14:
# 226 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Guard_shed_Text_2, MSGBOX_AUTOCLOSE
# 227 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 228 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Siltroottown_Guard_shed_Movement_5
# 229 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 230 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_HIDE_SILTROOTTOWN_SHED_GUARD
# 231 "data/maps/SiltrootTown/scripts.pory"
	release
	end

Siltroottown_Guard_shed_4:
# 235 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Guard_shed_Text_3, MSGBOX_AUTOCLOSE
# 236 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 237 "data/maps/SiltrootTown/scripts.pory"
	release
	end

Siltroottown_Guard_shed_5:
# 234 "data/maps/SiltrootTown/scripts.pory"
	goto_if_set FLAG_HIDE_SILTROOTTOWN_SHED_GUARD, Siltroottown_Guard_shed_4
	goto Siltroottown_Guard_shed_1

Siltroottown_Guard_shed_8:
# 204 "data/maps/SiltrootTown/scripts.pory"
	goto_if_unset FLAG_HIDE_SILTROOTTOWN_SHED_GUARD, Siltroottown_Guard_shed_3
	goto Siltroottown_Guard_shed_6

Siltroottown_Guard_shed_11:
# 198 "data/maps/SiltrootTown/scripts.pory"
	goto_if_unset FLAG_HIDE_SILTROOTTOWN_SHED_GUARD, Siltroottown_Guard_shed_2
	goto Siltroottown_Guard_shed_9

Siltroottown_Guard_shed_15:
# 215 "data/maps/SiltrootTown/scripts.pory"
	applymovement 20, Siltroottown_Guard_shed_Movement_1
# 216 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 217 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Siltroottown_Guard_shed_Movement_2
# 218 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
	goto Siltroottown_Guard_shed_14

Siltroottown_Guard_shed_16:
# 221 "data/maps/SiltrootTown/scripts.pory"
	applymovement 20, Siltroottown_Guard_shed_Movement_3
# 222 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 223 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Siltroottown_Guard_shed_Movement_4
# 224 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
	goto Siltroottown_Guard_shed_14

Siltroottown_Guard_shed_17:
# 220 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_1, 66
	goto_if_eq Siltroottown_Guard_shed_16
	goto Siltroottown_Guard_shed_14

Siltroottown_Guard_shed_20:
# 214 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_1, 65
	goto_if_eq Siltroottown_Guard_shed_15
	goto Siltroottown_Guard_shed_18


# 244 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Boat_Ride_To_Lionsarch:
# 245 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 246 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 247 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 248 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 249 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 250 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 251 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 252 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 253 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 254 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 255 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 256 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 257 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 258 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 259 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 260 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 261 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 262 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 263 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 264 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 265 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 266 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 267 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 268 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 269 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 270 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 271 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 272 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 273 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 274 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 275 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 276 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 277 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 278 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 279 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 280 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 281 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 282 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 283 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 284 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 285 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 286 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 287 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 288 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 289 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 290 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 291 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 292 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 293 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 294 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 295 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 296 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 297 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 298 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 299 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 300 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 301 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 302 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 303 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 304 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 305 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 306 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 307 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 308 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 309 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 310 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 311 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 312 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 313 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 314 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 315 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 316 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 317 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 318 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 319 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 320 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 321 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 322 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 323 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 324 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 325 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 326 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 327 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 328 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 329 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 330 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 331 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 332 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 333 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 334 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 335 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 336 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 337 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 338 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 339 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 340 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 341 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 342 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 343 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 344 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 345 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 346 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 347 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 348 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 349 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 350 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 351 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 352 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 353 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 354 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 355 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 356 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 357 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 358 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 359 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 360 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 361 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 362 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 363 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 364 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 365 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 366 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 367 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 368 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 369 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 370 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 371 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 372 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 373 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 374 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
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
	walk_fast_up
# 385 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 386 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 387 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 388 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 389 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 390 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 391 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 392 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
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
	walk_faster_up
# 417 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 418 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 419 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 420 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 421 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 422 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 423 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 424 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 425 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 426 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 427 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 428 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 429 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 430 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 431 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 432 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 433 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 434 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 435 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 436 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 437 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 438 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 439 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 440 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 441 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 442 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 443 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 444 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 445 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 446 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 447 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 448 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 449 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
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
	walk_faster_up
# 475 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 476 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 477 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 478 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 479 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 480 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 481 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 482 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 483 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 484 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 485 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 486 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 487 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 488 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 489 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 490 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 491 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 492 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 493 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 494 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
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
	walk_fast_up
# 505 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 506 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 507 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 508 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 509 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 510 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 511 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 512 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 513 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 514 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 515 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 516 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 517 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 518 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 519 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 520 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 521 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 522 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 523 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 524 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 525 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 526 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 527 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 528 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 529 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 530 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 531 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 532 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 533 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 534 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 535 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 536 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 537 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 538 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 539 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 540 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 541 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 542 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 543 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 544 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 545 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 546 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 547 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 548 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 549 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 550 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 551 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 552 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 553 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 554 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 555 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 556 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 557 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 558 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 559 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 560 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 561 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 562 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 563 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 564 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 565 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 566 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 567 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 568 "data/maps/SiltrootTown/scripts.pory"
	step_end

# 47 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Scott_Boatride_Movement_0:
# 47 "data/maps/SiltrootTown/scripts.pory"
	walk_right
	step_end

# 51 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Scott_Boatride_Movement_1:
# 51 "data/maps/SiltrootTown/scripts.pory"
	walk_right
# 51 "data/maps/SiltrootTown/scripts.pory"
	walk_right
	step_end

# 54 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Scott_Boatride_Movement_2:
# 54 "data/maps/SiltrootTown/scripts.pory"
	walk_down
# 54 "data/maps/SiltrootTown/scripts.pory"
	walk_right
	step_end

# 57 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Scott_Boatride_Movement_3:
# 57 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 57 "data/maps/SiltrootTown/scripts.pory"
	walk_right
	step_end

# 74 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Arrive_Boatride_Movement_0:
# 74 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
	step_end

# 78 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Arrive_Boatride_Movement_1:
# 78 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 78 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 78 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 78 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 78 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 78 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 78 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 78 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 78 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 78 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 78 "data/maps/SiltrootTown/scripts.pory"
	face_left
	step_end

# 85 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Arrive_Boatride_Movement_2:
# 85 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 85 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 85 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 85 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 85 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 85 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 85 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 85 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 85 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 85 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 85 "data/maps/SiltrootTown/scripts.pory"
	face_right
	step_end

# 92 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Arrive_Boatride_Movement_3:
# 92 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 92 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 92 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 92 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 92 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 92 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 92 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 92 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 92 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 92 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 92 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
	step_end

# 107 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Youth_Outide_Ali_Shop_1_Movement_0:
# 107 "data/maps/SiltrootTown/scripts.pory"
	emote_exclamation_mark
# 107 "data/maps/SiltrootTown/scripts.pory"
	face_player
	step_end

# 210 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_0:
# 210 "data/maps/SiltrootTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 215 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_1:
# 215 "data/maps/SiltrootTown/scripts.pory"
	walk_down
# 215 "data/maps/SiltrootTown/scripts.pory"
	face_up
	step_end

# 217 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_2:
# 217 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 217 "data/maps/SiltrootTown/scripts.pory"
	face_down
	step_end

# 221 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_3:
# 221 "data/maps/SiltrootTown/scripts.pory"
	walk_right
# 221 "data/maps/SiltrootTown/scripts.pory"
	face_left
	step_end

# 223 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_4:
# 223 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 223 "data/maps/SiltrootTown/scripts.pory"
	face_right
	step_end

# 228 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_5:
# 228 "data/maps/SiltrootTown/scripts.pory"
	face_up
	step_end

SiltrootTown_Sign_AliApothecary_Text_0:
# 9 "data/maps/SiltrootTown/scripts.pory"
	.string "Coffeeshop the Magical Root!\n"
	.string "Where the smoke is thick and the leaves\l"
	.string "burn bright!$"

SiltrootTown_Sign_Pokecenter_Text_0:
# 16 "data/maps/SiltrootTown/scripts.pory"
	.string "Pokecenter Siltroot\n"
	.string "The oldest medical facility in the\l"
	.string "region!$"

Siltroottown_Sign_SiltrootTown_Text_0:
# 23 "data/maps/SiltrootTown/scripts.pory"
	.string "{LEFT_ARROW} Siltroot Town\n"
	.string "Where the mud is thick and the roots\l"
	.string "are deep.$"

SiltrootTown_Scott_Boatride_Text_0:
# 33 "data/maps/SiltrootTown/scripts.pory"
	.string "Scott$"

SiltrootTown_Scott_Boatride_Text_1:
# 34 "data/maps/SiltrootTown/scripts.pory"
	.string "...I don't know you.\p"
	.string "You got no credentials.\p"
	.string "Go see Ali first.\p"
	.string "If he vouches for you, you'll know what\n"
	.string "to bring.$"

SiltrootTown_Scott_Boatride_Text_2:
# 43 "data/maps/SiltrootTown/scripts.pory"
	.string "Nobody saw you right?\p"
	.string "Lets move before the satellite flies\n"
	.string "over.\p"
	.string "The boat ride will be a rough one.$"

SiltrootTown_Arrive_Boatride_Text_0:
# 72 "data/maps/SiltrootTown/scripts.pory"
	.string "Bravo, Tango here.\p"
	.string "Ready to disembark?\p"
	.string "...\p"
	.string "Copy that.\p"
	.string "Let's move!$"

SiltrootTown_Arrive_Boatride_Text_1:
# 90 "data/maps/SiltrootTown/scripts.pory"
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
# 104 "data/maps/SiltrootTown/scripts.pory"
	.string "Yo Charmander, give your tail here, I\n"
	.string "need to light my joint as we...$"

Siltroottown_Youth_Outide_Ali_Shop_1_Text_1:
# 108 "data/maps/SiltrootTown/scripts.pory"
	.string "!!\p"
	.string "...as well as my incense!\p"
	.string "Yes, purely medicinal incense.\p"
	.string "For my... glaucoma.\p"
	.string "Please don't tell Officer Jenny.$"

Siltroottown_Youth_Outide_Ali_Shop_2_Text_0:
# 117 "data/maps/SiltrootTown/scripts.pory"
	.string "Dude, be cool!\p"
	.string "Stop looking at me!\p"
	.string "If you stare, they'll know we aren't\n"
	.string "actually training.\p"
	.string "Just act natural.\p"
	.string "...Is 'acting natural' standing\n"
	.string "perfectly still or waving my arms? I\l"
	.string "forgot.$"

Siltroottown_Youth_Outide_Ali_Shop_3_Text_0:
# 126 "data/maps/SiltrootTown/scripts.pory"
	.string "Ali really knows his botany...\p"
	.string "I feel like a Hoppip floating on a\n"
	.string "breeze.\p"
	.string "Hey, do you have any snacks?\p"
	.string "I would kill for a Lava Cookie right now.$"

Siltroottown_Stoned_Dude_Outside_Text_0:
# 135 "data/maps/SiltrootTown/scripts.pory"
	.string "I came outside for some fresh air, but\n"
	.string "the air feels... really loud right now.\p"
	.string "I think I'm just going to stare at the\n"
	.string "sand for a while.$"

Siltroottown_Old_Lady_Text_0:
# 145 "data/maps/SiltrootTown/scripts.pory"
	.string "All this beautiful nature, and the youth\n"
	.string "only care about those dreadful herbs.\p"
	.string "They should be burying their noses in\n"
	.string "books, not clouds of smoke.$"

Siltroottown_Fat_Man_Text_0:
# 154 "data/maps/SiltrootTown/scripts.pory"
	.string "Everyone claims the hunger comes from\n"
	.string "the special grass, but that is total\l"
	.string "nonsense.\p"
	.string "I am just big-boned and naturally\n"
	.string "require three pizzas every hour to\l"
	.string "survive.$"

Siltroottown_Children_Boy_Text_0:
# 163 "data/maps/SiltrootTown/scripts.pory"
	.string "Hey, cut it out! Janine!\p"
	.string "I am trying to look for a Magikarp down\n"
	.string "here and you are scaring them away!\p"
	.string "Why is your face all red? The water isn't\n"
	.string "even hot!$"

Siltroottown_Children_Girl_Text_0:
# 171 "data/maps/SiltrootTown/scripts.pory"
	.string "Take that! Adrian!\p"
	.string "I bet you can't catch me, even with\n"
	.string "those floaties on!\p"
	.string "...But if you did catch me, I wouldn't be\n"
	.string "mad or anything.$"

Siltroottown_Sailor_Biodiversity_Text_0:
# 180 "data/maps/SiltrootTown/scripts.pory"
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
# 189 "data/maps/SiltrootTown/scripts.pory"
	.string "They say the fish are gone because of\n"
	.string "'overfishing,' but that is total rubbish.\p"
	.string "It is the bureaucrats and their endless\n"
	.string "regulations that killed this town!\p"
	.string "That is why I sneak into the protected\n"
	.string "marine reserve to cast my line now.\p"
	.string "You have to break the law just to find a\n"
	.string "decent catch these days!$"

Siltroottown_Guard_shed_Text_0:
# 199 "data/maps/SiltrootTown/scripts.pory"
	.string "Whoa, hold your Ponyta.\p"
	.string "This is a restricted agricultural\n"
	.string "facility.\p"
	.string "Strictly authorized personnel only.$"

Siltroottown_Guard_shed_Text_1:
# 212 "data/maps/SiltrootTown/scripts.pory"
	.string "...\p"
	.string "Oh? Ali sent you?\p"
	.string "For the 'Project Star-Shot' shipment?\p"
	.string "Alright, you're clear.$"

Siltroottown_Guard_shed_Text_2:
# 226 "data/maps/SiltrootTown/scripts.pory"
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
# 235 "data/maps/SiltrootTown/scripts.pory"
	.string "Remember, don't let the Slowbro's see\n"
	.string "you.\p"
	.string "The bag is in the back.\p"
	.string "Move like a ghost, kid.$"
