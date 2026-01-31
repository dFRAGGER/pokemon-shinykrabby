SiltrootTown_MapScripts::
	.byte 0


SiltrootTown_Sign_AliApothecary::
# 4 "data/maps/SiltrootTown/scripts.pory"
	lock
# 5 "data/maps/SiltrootTown/scripts.pory"
	msgbox SiltrootTown_Sign_AliApothecary_Text_0
# 6 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 7 "data/maps/SiltrootTown/scripts.pory"
	release
	return


SiltrootTown_Scott_Boatride::
# 11 "data/maps/SiltrootTown/scripts.pory"
	lockall
# 12 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_HIDE_SCOTT_LIONSARCH_CITY
# 13 "data/maps/SiltrootTown/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 14 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 15 "data/maps/SiltrootTown/scripts.pory"
	setspeaker SiltrootTown_Scott_Boatride_Text_0
# 16 "data/maps/SiltrootTown/scripts.pory"
	msgbox SiltrootTown_Scott_Boatride_Text_1, MSGBOX_AUTOCLOSE
# 17 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 18 "data/maps/SiltrootTown/scripts.pory"
	setobjectsubpriority 12, MAP_SILTROOT_TOWN, 0
# 19 "data/maps/SiltrootTown/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_SILTROOT_TOWN, 0
# 20 "data/maps/SiltrootTown/scripts.pory"
	applymovement 12, SiltrootTown_Scott_Boatride_Movement_0
# 21 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 22 "data/maps/SiltrootTown/scripts.pory"
	removeobject 12
# 23 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq SiltrootTown_Scott_Boatride_11
SiltrootTown_Scott_Boatride_9:
# 26 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_0, 23
	goto_if_eq SiltrootTown_Scott_Boatride_8
SiltrootTown_Scott_Boatride_6:
# 29 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_0, 23
	goto_if_eq SiltrootTown_Scott_Boatride_5
SiltrootTown_Scott_Boatride_1:
# 32 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 33 "data/maps/SiltrootTown/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_SILTROOT_TOWN
# 34 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 35 "data/maps/SiltrootTown/scripts.pory"
	playbgm MUS_SAILING, FALSE
# 36 "data/maps/SiltrootTown/scripts.pory"
	applymovement 1, Siltroottown_Boat_Ride_To_Lionsarch
# 37 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Siltroottown_Boat_Ride_To_Lionsarch
# 38 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 39 "data/maps/SiltrootTown/scripts.pory"
	goto SiltrootTown_Arrive_Boatride
	return

SiltrootTown_Scott_Boatride_2:
# 24 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Scott_Boatride_Movement_1
	goto SiltrootTown_Scott_Boatride_1

SiltrootTown_Scott_Boatride_3:
# 27 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Scott_Boatride_Movement_2
	goto SiltrootTown_Scott_Boatride_1

SiltrootTown_Scott_Boatride_4:
# 30 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Scott_Boatride_Movement_3
	goto SiltrootTown_Scott_Boatride_1

SiltrootTown_Scott_Boatride_5:
# 29 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_1, 21
	goto_if_eq SiltrootTown_Scott_Boatride_4
	goto SiltrootTown_Scott_Boatride_1

SiltrootTown_Scott_Boatride_8:
# 26 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_1, 19
	goto_if_eq SiltrootTown_Scott_Boatride_3
	goto SiltrootTown_Scott_Boatride_6

SiltrootTown_Scott_Boatride_11:
# 23 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_1, 20
	goto_if_eq SiltrootTown_Scott_Boatride_2
	goto SiltrootTown_Scott_Boatride_9


SiltrootTown_Arrive_Boatride::
# 43 "data/maps/SiltrootTown/scripts.pory"
	delay 50
# 44 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Arrive_Boatride_Movement_0
# 45 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 46 "data/maps/SiltrootTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 47 "data/maps/SiltrootTown/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_SILTROOT_TOWN
# 48 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Arrive_Boatride_Movement_1
# 49 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 50 "data/maps/SiltrootTown/scripts.pory"
	setobjectxyperm 7, 9, 59
# 51 "data/maps/SiltrootTown/scripts.pory"
	addobject 7
# 52 "data/maps/SiltrootTown/scripts.pory"
	setobjectsubpriority 7, MAP_SILTROOT_TOWN, 0
# 53 "data/maps/SiltrootTown/scripts.pory"
	clearflag FLAG_HIDE_SCOTT_LIONSARCH_CITY
# 54 "data/maps/SiltrootTown/scripts.pory"
	applymovement 7, SiltrootTown_Arrive_Boatride_Movement_0
# 55 "data/maps/SiltrootTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 56 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_HIDE_SCOTT_OUTSIDE_BOAT
# 57 "data/maps/SiltrootTown/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_SILTROOT_TOWN
# 58 "data/maps/SiltrootTown/scripts.pory"
	resetobjectsubpriority 7, MAP_LIONSARCH_CITY
# 59 "data/maps/SiltrootTown/scripts.pory"
	setspeaker SiltrootTown_Scott_Boatride_Text_0
# 60 "data/maps/SiltrootTown/scripts.pory"
	msgbox SiltrootTown_Arrive_Boatride_Text_0, MSGBOX_AUTOCLOSE
# 61 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 62 "data/maps/SiltrootTown/scripts.pory"
	applymovement 7, SiltrootTown_Arrive_Boatride_Movement_2
# 63 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 64 "data/maps/SiltrootTown/scripts.pory"
	removeobject 7
# 65 "data/maps/SiltrootTown/scripts.pory"
	applymovement 3, SiltrootTown_Arrive_Boatride_Movement_3
# 66 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 67 "data/maps/SiltrootTown/scripts.pory"
	removeobject 3
# 68 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_HIDE_SCOTT_LIONSARCH_CITY
	end


Siltroottown_Youth_Outide_Ali_Shop_1::
# 75 "data/maps/SiltrootTown/scripts.pory"
	lock
# 76 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Youth_Outide_Ali_Shop_1_Text_0, MSGBOX_AUTOCLOSE
# 77 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 78 "data/maps/SiltrootTown/scripts.pory"
	playse SE_PIN
# 79 "data/maps/SiltrootTown/scripts.pory"
	applymovement 14, Siltroottown_Youth_Outide_Ali_Shop_1_Movement_0
# 80 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Youth_Outide_Ali_Shop_1_Text_1
# 81 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 82 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Youth_Outide_Ali_Shop_2::
# 87 "data/maps/SiltrootTown/scripts.pory"
	lock
# 88 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 89 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Youth_Outide_Ali_Shop_2_Text_0
# 90 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 91 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Youth_Outide_Ali_Shop_3::
# 96 "data/maps/SiltrootTown/scripts.pory"
	lock
# 97 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 98 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Youth_Outide_Ali_Shop_3_Text_0
# 99 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 100 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Stoned_Dude_Outside::
# 105 "data/maps/SiltrootTown/scripts.pory"
	lock
# 106 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 107 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Stoned_Dude_Outside_Text_0
# 108 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 109 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Old_Lady::
# 115 "data/maps/SiltrootTown/scripts.pory"
	lock
# 116 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 117 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Old_Lady_Text_0
# 118 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 119 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Fat_Man::
# 124 "data/maps/SiltrootTown/scripts.pory"
	lock
# 125 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 126 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Fat_Man_Text_0
# 127 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 128 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Children_Boy::
# 133 "data/maps/SiltrootTown/scripts.pory"
	lock
# 135 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Children_Boy_Text_0
# 136 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 137 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Children_Girl::
# 142 "data/maps/SiltrootTown/scripts.pory"
	lock
# 143 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Children_Girl_Text_0
# 144 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 145 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Sailor_Biodiversity::
# 150 "data/maps/SiltrootTown/scripts.pory"
	lock
# 151 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 152 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Sailor_Biodiversity_Text_0
# 153 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 154 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Fisher_Sad::
# 159 "data/maps/SiltrootTown/scripts.pory"
	lock
# 160 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 161 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Fisher_Sad_Text_0
# 162 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 163 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Guard_shed::
# 168 "data/maps/SiltrootTown/scripts.pory"
	lock
# 169 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 170 "data/maps/SiltrootTown/scripts.pory"
	goto_if_unset FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1, Siltroottown_Guard_shed_11
Siltroottown_Guard_shed_9:
# 176 "data/maps/SiltrootTown/scripts.pory"
	goto_if_set FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1, Siltroottown_Guard_shed_8
Siltroottown_Guard_shed_6:
# 206 "data/maps/SiltrootTown/scripts.pory"
	goto_if_set FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1, Siltroottown_Guard_shed_5
Siltroottown_Guard_shed_1:
# 212 "data/maps/SiltrootTown/scripts.pory"
	release
	end

Siltroottown_Guard_shed_2:
# 171 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Guard_shed_Text_0, MSGBOX_AUTOCLOSE
# 172 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 173 "data/maps/SiltrootTown/scripts.pory"
	release
	end

Siltroottown_Guard_shed_3:
# 177 "data/maps/SiltrootTown/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 178 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Guard_shed_Text_0, MSGBOX_AUTOCLOSE
# 179 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 180 "data/maps/SiltrootTown/scripts.pory"
	delay 60
# 181 "data/maps/SiltrootTown/scripts.pory"
	playse SE_PIN
# 182 "data/maps/SiltrootTown/scripts.pory"
	applymovement 20, Siltroottown_Guard_shed_Movement_0
# 183 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 184 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Guard_shed_Text_1, MSGBOX_AUTOCLOSE
# 185 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 186 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_0, 62
	goto_if_eq Siltroottown_Guard_shed_20
Siltroottown_Guard_shed_18:
# 192 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_0, 61
	goto_if_eq Siltroottown_Guard_shed_17
Siltroottown_Guard_shed_14:
# 198 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Guard_shed_Text_2, MSGBOX_AUTOCLOSE
# 199 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 200 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Siltroottown_Guard_shed_Movement_5
# 201 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 202 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_HIDE_SILTROOTTOWN_SHED_GUARD
# 203 "data/maps/SiltrootTown/scripts.pory"
	release
	end

Siltroottown_Guard_shed_4:
# 207 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Guard_shed_Text_3, MSGBOX_AUTOCLOSE
# 208 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 209 "data/maps/SiltrootTown/scripts.pory"
	release
	end

Siltroottown_Guard_shed_5:
# 206 "data/maps/SiltrootTown/scripts.pory"
	goto_if_set FLAG_HIDE_SILTROOTTOWN_SHED_GUARD, Siltroottown_Guard_shed_4
	goto Siltroottown_Guard_shed_1

Siltroottown_Guard_shed_8:
# 176 "data/maps/SiltrootTown/scripts.pory"
	goto_if_unset FLAG_HIDE_SILTROOTTOWN_SHED_GUARD, Siltroottown_Guard_shed_3
	goto Siltroottown_Guard_shed_6

Siltroottown_Guard_shed_11:
# 170 "data/maps/SiltrootTown/scripts.pory"
	goto_if_unset FLAG_HIDE_SILTROOTTOWN_SHED_GUARD, Siltroottown_Guard_shed_2
	goto Siltroottown_Guard_shed_9

Siltroottown_Guard_shed_15:
# 187 "data/maps/SiltrootTown/scripts.pory"
	applymovement 20, Siltroottown_Guard_shed_Movement_1
# 188 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 189 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Siltroottown_Guard_shed_Movement_2
# 190 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
	goto Siltroottown_Guard_shed_14

Siltroottown_Guard_shed_16:
# 193 "data/maps/SiltrootTown/scripts.pory"
	applymovement 20, Siltroottown_Guard_shed_Movement_3
# 194 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 195 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Siltroottown_Guard_shed_Movement_4
# 196 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
	goto Siltroottown_Guard_shed_14

Siltroottown_Guard_shed_17:
# 192 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_1, 66
	goto_if_eq Siltroottown_Guard_shed_16
	goto Siltroottown_Guard_shed_14

Siltroottown_Guard_shed_20:
# 186 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_1, 65
	goto_if_eq Siltroottown_Guard_shed_15
	goto Siltroottown_Guard_shed_18


# 216 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Boat_Ride_To_Lionsarch:
# 217 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 218 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 219 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 220 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 221 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 222 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 223 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 224 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 225 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 226 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 227 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 228 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 229 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 230 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 231 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 232 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 233 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 234 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 235 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 236 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 237 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 238 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 239 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 240 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 241 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 242 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 243 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 244 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 245 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 246 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 247 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 248 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 249 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 250 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 251 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 252 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 253 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 254 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 255 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 256 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 257 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 258 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 259 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 260 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 261 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 262 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 263 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 264 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 265 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 266 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 267 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 268 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 269 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 270 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 271 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 272 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 273 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 274 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 275 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 276 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 277 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 278 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 279 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 280 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 281 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 282 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 283 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 284 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 285 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 286 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 287 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 288 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 289 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 290 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 291 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 292 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 293 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 294 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 295 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 296 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 297 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 298 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 299 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 300 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 301 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 302 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 303 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 304 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 305 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 306 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 307 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 308 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 309 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
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
	walk_fast_up
# 332 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 333 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 334 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 335 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 336 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 337 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 338 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 339 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
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
	walk_fast_up
# 357 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 358 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 359 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 360 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 361 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 362 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 363 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 364 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 365 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 366 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 367 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
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
	walk_fast_up
# 390 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 391 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 392 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 393 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_right
# 394 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 395 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 396 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 397 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 398 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 399 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 400 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 401 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 402 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 403 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 404 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 405 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_left
# 406 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 407 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 408 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 409 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
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
	walk_faster_up
# 418 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 419 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 420 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 421 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 422 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 423 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
# 424 "data/maps/SiltrootTown/scripts.pory"
	walk_faster_up
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
	walk_fast_up
# 477 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 478 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 479 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_up
# 480 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 481 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 482 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 483 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 484 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 485 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 486 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 487 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 488 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 489 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 490 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 491 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 492 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 493 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 494 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 495 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 496 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 497 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 498 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 499 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 500 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 501 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 502 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 503 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 504 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 505 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 506 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 507 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 508 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 509 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 510 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 511 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 512 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 513 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 514 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 515 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 516 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 517 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 518 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 519 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 520 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 521 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 522 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 523 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 524 "data/maps/SiltrootTown/scripts.pory"
	walk_up
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
	walk_up
# 536 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 537 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 538 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 539 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 540 "data/maps/SiltrootTown/scripts.pory"
	step_end

# 20 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Scott_Boatride_Movement_0:
# 20 "data/maps/SiltrootTown/scripts.pory"
	walk_right
	step_end

# 24 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Scott_Boatride_Movement_1:
# 24 "data/maps/SiltrootTown/scripts.pory"
	walk_right
# 24 "data/maps/SiltrootTown/scripts.pory"
	walk_right
	step_end

# 27 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Scott_Boatride_Movement_2:
# 27 "data/maps/SiltrootTown/scripts.pory"
	walk_down
# 27 "data/maps/SiltrootTown/scripts.pory"
	walk_right
	step_end

# 30 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Scott_Boatride_Movement_3:
# 30 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 30 "data/maps/SiltrootTown/scripts.pory"
	walk_right
	step_end

# 44 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Arrive_Boatride_Movement_0:
# 44 "data/maps/SiltrootTown/scripts.pory"
	walk_up
	step_end

# 48 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Arrive_Boatride_Movement_1:
# 48 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 48 "data/maps/SiltrootTown/scripts.pory"
	face_down
	step_end

# 62 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Arrive_Boatride_Movement_2:
# 62 "data/maps/SiltrootTown/scripts.pory"
	walk_down
	step_end

# 65 "data/maps/SiltrootTown/scripts.pory"
SiltrootTown_Arrive_Boatride_Movement_3:
# 65 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 65 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 65 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 65 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 65 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 65 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
# 65 "data/maps/SiltrootTown/scripts.pory"
	walk_fast_down
	step_end

# 79 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Youth_Outide_Ali_Shop_1_Movement_0:
# 79 "data/maps/SiltrootTown/scripts.pory"
	emote_exclamation_mark
# 79 "data/maps/SiltrootTown/scripts.pory"
	face_player
	step_end

# 182 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_0:
# 182 "data/maps/SiltrootTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 187 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_1:
# 187 "data/maps/SiltrootTown/scripts.pory"
	walk_down
# 187 "data/maps/SiltrootTown/scripts.pory"
	face_up
	step_end

# 189 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_2:
# 189 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 189 "data/maps/SiltrootTown/scripts.pory"
	face_down
	step_end

# 193 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_3:
# 193 "data/maps/SiltrootTown/scripts.pory"
	walk_right
# 193 "data/maps/SiltrootTown/scripts.pory"
	face_left
	step_end

# 195 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_4:
# 195 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 195 "data/maps/SiltrootTown/scripts.pory"
	face_right
	step_end

# 200 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_5:
# 200 "data/maps/SiltrootTown/scripts.pory"
	face_up
	step_end

SiltrootTown_Sign_AliApothecary_Text_0:
# 5 "data/maps/SiltrootTown/scripts.pory"
	.string "$"

SiltrootTown_Scott_Boatride_Text_0:
# 15 "data/maps/SiltrootTown/scripts.pory"
	.string "Scott$"

SiltrootTown_Scott_Boatride_Text_1:
# 16 "data/maps/SiltrootTown/scripts.pory"
	.string "Nobody saw you right?\p"
	.string "Lets move before the sattelite flies\n"
	.string "over.\p"
	.string "The boat ride will be a rough one.$"

SiltrootTown_Arrive_Boatride_Text_0:
# 60 "data/maps/SiltrootTown/scripts.pory"
	.string "Touchdown. We are in the blind spot.\p"
	.string "My scanners show a gap in the harbor\n"
	.string "security grid for exactly forty-five\l"
	.string "seconds.\p"
	.string "Listen fast because I am burning fuel\n"
	.string "here.\p"
	.string "I am not going into the city.\p"
	.string "Too many facial recognition towers.\p"
	.string "You have to take the package to the\n"
	.string "client yourself.\p"
	.string "He is a DJ.\p"
	.string "Peter.\p"
	.string "If you hear loud, old-school disco\n"
	.string "music, that is the drop-off point.\p"
	.string "Now get moving!\p"
	.string "Don't look back.\p"
	.string "If anyone asks, we never met.\p"
	.string "I was never here.\p"
	.string "This boat doesn't exist!$"

Siltroottown_Youth_Outide_Ali_Shop_1_Text_0:
# 76 "data/maps/SiltrootTown/scripts.pory"
	.string "Yo Charmander, give your tail here, I\n"
	.string "need to light my joint as we...$"

Siltroottown_Youth_Outide_Ali_Shop_1_Text_1:
# 80 "data/maps/SiltrootTown/scripts.pory"
	.string "!!\p"
	.string "...as well as my incense!\p"
	.string "Yes, purely medicinal incense.\p"
	.string "For my... glaucoma.\p"
	.string "Please don't tell Officer Jenny.$"

Siltroottown_Youth_Outide_Ali_Shop_2_Text_0:
# 89 "data/maps/SiltrootTown/scripts.pory"
	.string "Dude, be cool!\p"
	.string "Stop looking at me!\p"
	.string "If you stare, they'll know we aren't\n"
	.string "actually training.\p"
	.string "Just act natural.\p"
	.string "...Is 'acting natural' standing\n"
	.string "perfectly still or waving my arms? I\l"
	.string "forgot.$"

Siltroottown_Youth_Outide_Ali_Shop_3_Text_0:
# 98 "data/maps/SiltrootTown/scripts.pory"
	.string "Ali really knows his botany...\p"
	.string "I feel like a Hoppip floating on a\n"
	.string "breeze.\p"
	.string "Hey, do you have any snacks?\p"
	.string "I would kill for a Lava Cookie right now.$"

Siltroottown_Stoned_Dude_Outside_Text_0:
# 107 "data/maps/SiltrootTown/scripts.pory"
	.string "I came outside for some fresh air, but\n"
	.string "the air feels... really loud right now.\p"
	.string "I think I'm just going to stare at the\n"
	.string "sand for a while.$"

Siltroottown_Old_Lady_Text_0:
# 117 "data/maps/SiltrootTown/scripts.pory"
	.string "All this beautiful nature, and the youth\n"
	.string "only care about those dreadful herbs.\p"
	.string "They should be burying their noses in\n"
	.string "books, not clouds of smoke.$"

Siltroottown_Fat_Man_Text_0:
# 126 "data/maps/SiltrootTown/scripts.pory"
	.string "Everyone claims the hunger comes from\n"
	.string "the special grass, but that is total\l"
	.string "nonsense.\p"
	.string "I am just big-boned and naturally\n"
	.string "require three pizzas every hour to\l"
	.string "survive.$"

Siltroottown_Children_Boy_Text_0:
# 135 "data/maps/SiltrootTown/scripts.pory"
	.string "Hey, cut it out! Janine!\p"
	.string "I am trying to look for a Magikarp down\n"
	.string "here and you are scaring them away!\p"
	.string "Why is your face all red? The water isn't\n"
	.string "even hot!$"

Siltroottown_Children_Girl_Text_0:
# 143 "data/maps/SiltrootTown/scripts.pory"
	.string "Take that! Adrian!\p"
	.string "I bet you can't catch me, even with\n"
	.string "those floaties on!\p"
	.string "...But if you did catch me, I wouldn't be\n"
	.string "mad or anything.$"

Siltroottown_Sailor_Biodiversity_Text_0:
# 152 "data/maps/SiltrootTown/scripts.pory"
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
# 161 "data/maps/SiltrootTown/scripts.pory"
	.string "They say the fish are gone because of\n"
	.string "'overfishing,' but that is total rubbish.\p"
	.string "It is the bureaucrats and their endless\n"
	.string "regulations that killed this town!\p"
	.string "That is why I sneak into the protected\n"
	.string "marine reserve to cast my line now.\p"
	.string "You have to break the law just to find a\n"
	.string "decent catch these days!$"

Siltroottown_Guard_shed_Text_0:
# 171 "data/maps/SiltrootTown/scripts.pory"
	.string "Whoa, hold your Ponyta.\p"
	.string "This is a restricted agricultural\n"
	.string "facility.\p"
	.string "Strictly authorized personnel only.$"

Siltroottown_Guard_shed_Text_1:
# 184 "data/maps/SiltrootTown/scripts.pory"
	.string "...\p"
	.string "Oh? Ali sent you?\p"
	.string "For the 'Project Star-Shot' shipment?\p"
	.string "Alright, you're clear.$"

Siltroottown_Guard_shed_Text_2:
# 198 "data/maps/SiltrootTown/scripts.pory"
	.string "But listen carefully.\p"
	.string "The production team is inside right now.\p"
	.string "It's a bunch of Slowbros.\p"
	.string "They are in a deep, meditative trance\n"
	.string "while they work.\p"
	.string "If they see you, it breaks their flow,\n"
	.string "and they will use Confusion to toss you\l"
	.string "right back out the front door.\p"
	.string "The bag is in the back.\p"
	.string "Move like a ghost, kid.$"

Siltroottown_Guard_shed_Text_3:
# 207 "data/maps/SiltrootTown/scripts.pory"
	.string "Remember, don't let the Slowbro's see\n"
	.string "you.\p"
	.string "The bag is in the back.\p"
	.string "Move like a ghost, kid.$"
