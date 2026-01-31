ErpCity_MapScripts::
# 2 "data/maps/ErpCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ErpCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/ErpCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ErpCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ErpCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_KICKED_OUT_LAB_CONVO
# 4 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_MOM_SHOES
# 5 "data/maps/ErpCity/scripts.pory"
	call ErpCity_Visited
	return

ErpCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/ErpCity/scripts.pory"
	map_script_2 VAR_RECIEVED_STARTER_POKEMON, 1, ErpCity_ProfessorBirds_Speech_Pokedex
	.2byte 0


ErpCity_Visited::
# 14 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_VISITED_ERP_CITY
	return


ErpCity_Old_Man_Boekel::
# 18 "data/maps/ErpCity/scripts.pory"
	lock
# 19 "data/maps/ErpCity/scripts.pory"
	faceplayer
# 20 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Old_Man_Boekel_Text_0, MSGBOX_AUTOCLOSE
# 21 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 22 "data/maps/ErpCity/scripts.pory"
	release
	end


ErpCity_Woman::
# 27 "data/maps/ErpCity/scripts.pory"
	lock
# 28 "data/maps/ErpCity/scripts.pory"
	faceplayer
# 29 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Woman_Text_0, MSGBOX_AUTOCLOSE
# 30 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 31 "data/maps/ErpCity/scripts.pory"
	release
	end


ErpCity_ProfessorBirds_Speech_Pokedex::
# 36 "data/maps/ErpCity/scripts.pory"
	lockall
# 37 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_0
# 38 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_KICKED_OUT_LAB_CONVO
# 39 "data/maps/ErpCity/scripts.pory"
	addobject 2
# 40 "data/maps/ErpCity/scripts.pory"
	addobject 5
# 41 "data/maps/ErpCity/scripts.pory"
	addobject 10
# 42 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_1
# 43 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_2
# 44 "data/maps/ErpCity/scripts.pory"
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3
# 45 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 46 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 47 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_1, MSGBOX_AUTOCLOSE
# 48 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 49 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 50 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4
# 51 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 52 "data/maps/ErpCity/scripts.pory"
	delay 120
# 53 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5
# 54 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 55 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6
# 56 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 57 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_2, MSGBOX_AUTOCLOSE
# 58 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 59 "data/maps/ErpCity/scripts.pory"
	delay 40
# 60 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 61 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7
# 62 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8
# 63 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 64 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_3
# 65 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 66 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 67 "data/maps/ErpCity/scripts.pory"
	special EnableNationalPokedex
# 68 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 69 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 70 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_4
# 71 "data/maps/ErpCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 72 "data/maps/ErpCity/scripts.pory"
	waitfanfare
# 73 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 74 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 75 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_5
# 76 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 77 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 78 "data/maps/ErpCity/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 79 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 80 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 81 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_6, MSGBOX_AUTOCLOSE
# 82 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 83 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 84 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9
# 85 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4
# 86 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 87 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 88 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 89 "data/maps/ErpCity/scripts.pory"
	delay 60
# 90 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11
# 91 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12
# 92 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 93 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_7
# 94 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_8
# 95 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 96 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11
# 97 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 98 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_13
# 99 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 100 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_7
# 101 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_9, MSGBOX_AUTOCLOSE
# 102 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 103 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 104 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_14
# 105 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_15
# 106 "data/maps/ErpCity/scripts.pory"
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_16
# 107 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 108 "data/maps/ErpCity/scripts.pory"
	removeobject 5
# 109 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17
# 110 "data/maps/ErpCity/scripts.pory"
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_18
# 111 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 112 "data/maps/ErpCity/scripts.pory"
	removeobject 10
# 113 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_KICKED_OUT_LAB_CONVO
# 114 "data/maps/ErpCity/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 2
# 115 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_INTERN_BIRDS_LAB
# 116 "data/maps/ErpCity/scripts.pory"
	delay 120
# 117 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 118 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_10, MSGBOX_AUTOCLOSE
# 119 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 120 "data/maps/ErpCity/scripts.pory"
	delay 40
# 121 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_19
# 122 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 123 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 124 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 125 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 126 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_11, MSGBOX_AUTOCLOSE
# 127 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 128 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_20
# 129 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 130 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_21
# 131 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 132 "data/maps/ErpCity/scripts.pory"
	removeobject 2
# 133 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 134 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 135 "data/maps/ErpCity/scripts.pory"
	delay 60
# 136 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12
# 137 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 138 "data/maps/ErpCity/scripts.pory"
	delay 60
# 139 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8
# 140 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 141 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_JACOB_SIENNA
# 142 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_INTERN_BIRDS_LAB
# 143 "data/maps/ErpCity/scripts.pory"
	delay 60
# 144 "data/maps/ErpCity/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 145 "data/maps/ErpCity/scripts.pory"
	special BufferMonNickname
# 146 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_12, MSGBOX_AUTOCLOSE
# 147 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_ProfessorBirds_After_Speech::
# 151 "data/maps/ErpCity/scripts.pory"
	lockall
# 152 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 153 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_After_Speech_Text_0
# 154 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 155 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Mispoes_Miauw::
# 159 "data/maps/ErpCity/scripts.pory"
	lockall
# 160 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Mispoes_Miauw_Text_0
# 161 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Mispoes_Miauw_Text_1
# 162 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 163 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Lab_Sign::
# 167 "data/maps/ErpCity/scripts.pory"
	lockall
# 168 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Lab_Sign_Text_0
# 169 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 170 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Hiker_Cave::
# 174 "data/maps/ErpCity/scripts.pory"
	lockall
# 175 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_Hiker_Cave_Movement_0
# 177 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Hiker_Cave_Text_0
# 178 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 179 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Cave_Sign::
# 183 "data/maps/ErpCity/scripts.pory"
	lockall
# 184 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Cave_Sign_Text_0
# 185 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 186 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Trigger_Stopplayer::
# 190 "data/maps/ErpCity/scripts.pory"
	lockall
# 191 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Trigger_Stopplayer_Text_0
# 192 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Move_Stopplayer
# 193 "data/maps/ErpCity/scripts.pory"
	waitmovement 0
# 194 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


# 197 "data/maps/ErpCity/scripts.pory"
ErpCity_Move_Stopplayer:
# 198 "data/maps/ErpCity/scripts.pory"
	walk_right
	step_end

ErpCity_Trigger_Stopplayer2::
# 202 "data/maps/ErpCity/scripts.pory"
	lockall
# 203 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Trigger_Stopplayer2_Text_0
# 204 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Trigger_Stopplayer2_Movement_0
# 205 "data/maps/ErpCity/scripts.pory"
	waitmovement 0
# 206 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Receive_Running_Shoes::
# 210 "data/maps/ErpCity/scripts.pory"
	lockall
# 211 "data/maps/ErpCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RUNNING_SHOES, ErpCity_Receive_Running_Shoes_1
# 252 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_7
# 253 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 254 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_2
# 255 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 256 "data/maps/ErpCity/scripts.pory"
	releaseall
	end

ErpCity_Receive_Running_Shoes_1:
# 212 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 213 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_0
# 214 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 215 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_MOM_SHOES
# 216 "data/maps/ErpCity/scripts.pory"
	addobject 4
# 217 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_Receive_Running_Shoes_Movement_1
# 218 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 219 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
# 220 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_1
# 221 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 222 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 223 "data/maps/ErpCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 224 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 225 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_2
# 226 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 227 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 228 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_3
# 229 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 230 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
# 231 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_4, MSGBOX_AUTOCLOSE
# 232 "data/maps/ErpCity/scripts.pory"
	delay 60
# 233 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
# 234 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_5, MSGBOX_AUTOCLOSE
# 235 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 236 "data/maps/ErpCity/scripts.pory"
	delay 40
# 237 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_2
# 238 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 239 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
# 240 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_6
# 241 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 242 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_Receive_Running_Shoes_Movement_3
# 243 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 244 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_MOM_SHOES
# 245 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 246 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_INTERN_BIRDS_LAB
# 247 "data/maps/ErpCity/scripts.pory"
	removeobject 4
# 248 "data/maps/ErpCity/scripts.pory"
	releaseall
	end


ErpCity_Sign_Mailbox_ProfBirds::
# 262 "data/maps/ErpCity/scripts.pory"
	lock
# 263 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_ProfBirds_Text_0
# 264 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 265 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_Starthouse::
# 269 "data/maps/ErpCity/scripts.pory"
	lock
# 270 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_Starthouse_Text_0
# 271 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 272 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_BarryHouse::
# 276 "data/maps/ErpCity/scripts.pory"
	lock
# 277 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_BarryHouse_Text_0
# 278 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 279 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_JanVogels::
# 283 "data/maps/ErpCity/scripts.pory"
	lock
# 284 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_JanVogels_Text_0
# 285 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 286 "data/maps/ErpCity/scripts.pory"
	release
	return


# 37 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_0:
# 37 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 37 "data/maps/ErpCity/scripts.pory"
	jump_left
# 37 "data/maps/ErpCity/scripts.pory"
	face_right
	step_end

# 42 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_1:
# 42 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 42 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
	step_end

# 43 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_2:
# 43 "data/maps/ErpCity/scripts.pory"
	walk_down
# 43 "data/maps/ErpCity/scripts.pory"
	walk_down
# 43 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 44 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3:
# 44 "data/maps/ErpCity/scripts.pory"
	jump_down
# 44 "data/maps/ErpCity/scripts.pory"
	jump_right
# 44 "data/maps/ErpCity/scripts.pory"
	jump_down
	step_end

# 50 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4:
# 50 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
	step_end

# 53 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5:
# 53 "data/maps/ErpCity/scripts.pory"
	walk_slow_right
# 53 "data/maps/ErpCity/scripts.pory"
	walk_slow_right
	step_end

# 55 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6:
# 55 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 61 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7:
# 61 "data/maps/ErpCity/scripts.pory"
	emote_exclamation_mark
# 61 "data/maps/ErpCity/scripts.pory"
	walk_left
# 61 "data/maps/ErpCity/scripts.pory"
	walk_left
	step_end

# 62 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8:
# 62 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 84 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9:
# 84 "data/maps/ErpCity/scripts.pory"
	emote_x
	step_end

# 86 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10:
# 86 "data/maps/ErpCity/scripts.pory"
	face_right
	step_end

# 90 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11:
# 90 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 90 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 91 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12:
# 91 "data/maps/ErpCity/scripts.pory"
	face_down
	step_end

# 98 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_13:
# 98 "data/maps/ErpCity/scripts.pory"
	face_down
# 98 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
	step_end

# 104 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_14:
# 104 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
# 104 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 105 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_15:
# 105 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 105 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 105 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 105 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 105 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 105 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 105 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 105 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
	step_end

# 106 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_16:
# 106 "data/maps/ErpCity/scripts.pory"
	jump_2_left
# 106 "data/maps/ErpCity/scripts.pory"
	jump_2_left
	step_end

# 109 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17:
# 109 "data/maps/ErpCity/scripts.pory"
	walk_down
# 109 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 110 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_18:
# 110 "data/maps/ErpCity/scripts.pory"
	jump_2_left
# 110 "data/maps/ErpCity/scripts.pory"
	jump_2_left
# 110 "data/maps/ErpCity/scripts.pory"
	jump_2_left
# 110 "data/maps/ErpCity/scripts.pory"
	jump_2_left
	step_end

# 121 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_19:
# 121 "data/maps/ErpCity/scripts.pory"
	walk_up
# 121 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 128 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_20:
# 128 "data/maps/ErpCity/scripts.pory"
	jump_left
# 128 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 130 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_21:
# 130 "data/maps/ErpCity/scripts.pory"
	walk_right
# 130 "data/maps/ErpCity/scripts.pory"
	walk_up
	step_end

# 175 "data/maps/ErpCity/scripts.pory"
ErpCity_Hiker_Cave_Movement_0:
# 175 "data/maps/ErpCity/scripts.pory"
	face_player
	step_end

# 204 "data/maps/ErpCity/scripts.pory"
ErpCity_Trigger_Stopplayer2_Movement_0:
# 204 "data/maps/ErpCity/scripts.pory"
	walk_left
	step_end

# 213 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_0:
# 213 "data/maps/ErpCity/scripts.pory"
	emote_exclamation_mark
# 213 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 217 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_1:
# 217 "data/maps/ErpCity/scripts.pory"
	walk_down
# 217 "data/maps/ErpCity/scripts.pory"
	face_player
	step_end

# 237 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_2:
# 237 "data/maps/ErpCity/scripts.pory"
	walk_down
	step_end

# 242 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_3:
# 242 "data/maps/ErpCity/scripts.pory"
	walk_up
	step_end

ErpCity_Old_Man_Boekel_Text_0:
# 20 "data/maps/ErpCity/scripts.pory"
	.string "Some folks mock Erp for being small with\n"
	.string "just four houses, but at least we aren't\l"
	.string "Boekel!\p"
	.string "That place only has one house, occupied\n"
	.string "by a weird redhead who isn't even home\l"
	.string "half the time!$"

ErpCity_Woman_Text_0:
# 29 "data/maps/ErpCity/scripts.pory"
	.string "I traveled here just to gaze at that\n"
	.string "lake over there!\p"
	.string "The water is so calm and clear it looks\n"
	.string "like a mirror.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_0:
# 46 "data/maps/ErpCity/scripts.pory"
	.string "Prof. Birds$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_1:
# 47 "data/maps/ErpCity/scripts.pory"
	.string "WHO DO YOU THINK YOU ARE?\n"
	.string "TAYLOR SWIFT OR SOMETHING?\p"
	.string "Actually.... I love Taylor Swift hehe..\n"
	.string "ANYWAYS!!\p"
	.string "I TOLD YOU TO NOT SNIFF AROUND IN MY\n"
	.string "SECRET LA... I MEAN STORAGE ROOM!!\p"
	.string "...YOU DIDN'T STEAL ANYTHING RIGHT?\n"
	.string "RIGHT??!!\p"
	.string "...It doesn't really matter anyways...\p"
	.string "YOU ARE FIRED!!\p"
	.string "I GOT MY SQUIRKY LITTLE INTERN CALLED\n"
	.string "BARRY ALREADY!\p"
	.string "HE IS LIVING THE DREAM!!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_2:
# 57 "data/maps/ErpCity/scripts.pory"
	.string ".....wait a second....\p"
	.string ".....maybe this little slob can help me to\n"
	.string "get some data...\p"
	.string "...that strange anomaly....\p"
	.string ".....yes a very good idea Jari, very\n"
	.string "smart....$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_3:
# 64 "data/maps/ErpCity/scripts.pory"
	.string ".....DID I SAY THAT OUT LOUD?\p"
	.string "ARGH ANYWAYS, HOW ABOUT I REHIRE YOU\n"
	.string "AGAIN TO BECOME MY DATA HOARDER....\p"
	.string "I MEAN MY FELLOW RESEARCHER OFCOURSE!\n"
	.string "MY BELOVED PARTNER!\p"
	.string "TO BECOME A REAL POKEMON MASTER WE... I\n"
	.string "MEAN YOU... NEED TO CATCH EVERY POKEMON\p"
	.string "AND SCAN THEM WITH THIS LITTLE\n"
	.string "DEVICE....$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_4:
# 70 "data/maps/ErpCity/scripts.pory"
	.string "You have received the Pokédex.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_5:
# 75 "data/maps/ErpCity/scripts.pory"
	.string "THIS DEVICE CAN COLLECT VITAL DATA ON\n"
	.string "POKEMON HABITATS, MIGRATION PATTERNS\l"
	.string "AND ...uh...\p"
	.string "...unique genomic signatures... for the\n"
	.string "pigs... you know...\p"
	.string "AND THIS WAY I WILL EXTRACT ALL\n"
	.string "NECESSARY INFORMATION FOR MY\l"
	.string "BELOVED....\p"
	.string "...sensors for responsible pig farming...\p"
	.string "NOW GO, AND DON'T COME BACK BEFORE YOU\n"
	.string "HAVE SCANNE...\p"
	.string "...caught some rare Pokémons...\p"
	.string "...\p"
	.string "WHAT DO YOU MEAN... HOW?\p"
	.string "JUST USE POKEBALLS....\p"
	.string "A POKEMON MASTER HAHAHA...\p"
	.string "you got to be joking...\p"
	.string "HERE, CATCH THESE!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_6:
# 81 "data/maps/ErpCity/scripts.pory"
	.string "THROW THESE MOTHERFUCKERS, AND THE\n"
	.string "WORLD WILL BE MINE...\p"
	.string "...I mean ours...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_7:
# 93 "data/maps/ErpCity/scripts.pory"
	.string "Barry$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_8:
# 94 "data/maps/ErpCity/scripts.pory"
	.string "HE BREAKS INTO YOUR LAB AND GETS A\n"
	.string "POKEDEX, POKEBALLS AND A MISSION TO\l"
	.string "BECOME A POKEMON MASTER?\p"
	.string "WHAT DID I GET?\p"
	.string "A FUCKING MAGIKARP?\p"
	.string "THE MOST USELESS POKEMON EVER IN\n"
	.string "EXISTENCE?\p"
	.string "I QUIT!!\p"
	.string "AND STOP SAYING BARRY!\p"
	.string "MY NAME IS W O U T E R!!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_9:
# 101 "data/maps/ErpCity/scripts.pory"
	.string "...\p"
	.string "YOU??\p"
	.string "A POKEMON MASTER?\p"
	.string "DON'T MAKE ME LAUGH.\p"
	.string "I WILL TAKE EVERY CHANCE TO PREVENT\n"
	.string "THAT FROM HAPPENING!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_10:
# 118 "data/maps/ErpCity/scripts.pory"
	.string "...I'd probably should search for\n"
	.string "another intern right now...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_11:
# 126 "data/maps/ErpCity/scripts.pory"
	.string "ABOUT THAT ANOM... YOUR MISSION!\p"
	.string "AN OLD FRIEND CALLED ME YESTERDAY...\p"
	.string "HIS NAME IS {COLOR GREEN}Jacob{COLOR DARK_GRAY}...\n"
	.string "He used to live in this town...\p"
	.string "...but the traitor moved to {COLOR RED}Mestreech{COLOR DARK_GRAY}\n"
	.string "just west of here...\p"
	.string "...apparently a GOLDEN KRABBY has been\n"
	.string "sighted there...\p"
	.string "...a rare genetic ANOMALY...\p"
	.string "...this could be the perfect start to my\n"
	.string "genome triangul... I MEAN PIG SENSOR\l"
	.string "DEVELOPMENT!\p"
	.string "NOW WHAT ARE YOU WAITING FOR!?\p"
	.string "GET THAT DATA FOR ME... I MEAN US.\p"
	.string "AND STAY AWAY FROM MISPOES...\p"
	.string "HE DOESN'T LIKE ME...\p"
	.string "I MEAN YOU OFCOURSE!!\p"
	.string "...\p"
	.string "...so I was shouting the entire time?\p"
	.string "WHO CARES!\p"
	.string "NOW FUCK OFF!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_12:
# 146 "data/maps/ErpCity/scripts.pory"
	.string "...I think it is safe to come out now\n"
	.string "{STR_VAR_1}, lets get out of here!$"

ErpCity_ProfessorBirds_After_Speech_Text_0:
# 153 "data/maps/ErpCity/scripts.pory"
	.string "WELL, WHAT ARE YOU WAITING FOR?\p"
	.string "GET THAT DATA ON THAT GOLDEN KRABBY\n"
	.string "FOR ME... I MEAN US.$"

ErpCity_Mispoes_Miauw_Text_0:
# 160 "data/maps/ErpCity/scripts.pory"
	.string "Mispoes$"

ErpCity_Mispoes_Miauw_Text_1:
# 161 "data/maps/ErpCity/scripts.pory"
	.string "Miaaaauw... KSSSSJSJJGGGG$"

ErpCity_Lab_Sign_Text_0:
# 168 "data/maps/ErpCity/scripts.pory"
	.string "Professor Birds's Lab$"

ErpCity_Hiker_Cave_Text_0:
# 177 "data/maps/ErpCity/scripts.pory"
	.string "The cave is not accessible at this time.\p"
	.string "Recent tremors from a unknown source\n"
	.string "have caused massive rock slides.\p"
	.string "The path is too dangerous.$"

ErpCity_Cave_Sign_Text_0:
# 184 "data/maps/ErpCity/scripts.pory"
	.string "A large map with a labyrint of routes\n"
	.string "going through the cave.\p"
	.string "Most of them are crossed out.$"

ErpCity_Trigger_Stopplayer_Text_0:
# 191 "data/maps/ErpCity/scripts.pory"
	.string "Wandering without any pokemon might be\n"
	.string "dangerous....$"

ErpCity_Trigger_Stopplayer2_Text_0:
# 203 "data/maps/ErpCity/scripts.pory"
	.string "Mom said the lab was up north I think...$"

ErpCity_Receive_Running_Shoes_Text_0:
# 219 "data/maps/ErpCity/scripts.pory"
	.string "Mom$"

ErpCity_Receive_Running_Shoes_Text_1:
# 220 "data/maps/ErpCity/scripts.pory"
	.string "Honey, I almost forgot!\p"
	.string "If you want to make an impression on\n"
	.string "the professor you should wear some\l"
	.string "different shoes.\p"
	.string "As a surprise I've bought a new pair for\n"
	.string "you!$"

ErpCity_Receive_Running_Shoes_Text_2:
# 225 "data/maps/ErpCity/scripts.pory"
	.string "You have received running shoes from\n"
	.string "Mom.$"

ErpCity_Receive_Running_Shoes_Text_3:
# 228 "data/maps/ErpCity/scripts.pory"
	.string "Now if you press your 'B muscle' while\n"
	.string "moving, you will sprint!$"

ErpCity_Receive_Running_Shoes_Text_4:
# 231 "data/maps/ErpCity/scripts.pory"
	.string "Look at you, all nice and shiny.\p"
	.string "Say hello to the professor for me.\p"
	.string "Have fun!$"

ErpCity_Receive_Running_Shoes_Text_5:
# 234 "data/maps/ErpCity/scripts.pory"
	.string "Well, go on!\n"
	.string "Don't be shy!$"

ErpCity_Receive_Running_Shoes_Text_6:
# 240 "data/maps/ErpCity/scripts.pory"
	.string "There you go!\n"
	.string "I'll prepare some potatoes, meat and\l"
	.string "vegetables for you when you get back,\l"
	.string "your favorite!$"

ErpCity_Receive_Running_Shoes_Text_7:
# 252 "data/maps/ErpCity/scripts.pory"
	.string "Better get to the lab, Mom probably\n"
	.string "won't let me in if I don't try.$"

ErpCity_Sign_Mailbox_ProfBirds_Text_0:
# 263 "data/maps/ErpCity/scripts.pory"
	.string "This mailbox seems to be filled to the\n"
	.string "brim, somebody should clean this thing\l"
	.string "out.$"

ErpCity_Sign_Mailbox_Starthouse_Text_0:
# 270 "data/maps/ErpCity/scripts.pory"
	.string "{PLAYER}'s house.$"

ErpCity_Sign_Mailbox_BarryHouse_Text_0:
# 277 "data/maps/ErpCity/scripts.pory"
	.string "Family Stonebakers's house.$"

ErpCity_Sign_Mailbox_JanVogels_Text_0:
# 284 "data/maps/ErpCity/scripts.pory"
	.string "Family Birds's house.$"
