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


ErpCity_Sign_Welcome::
# 18 "data/maps/ErpCity/scripts.pory"
	lock
# 19 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Welcome_Text_0, MSGBOX_SIGN
# 20 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 21 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Old_Man_Boekel::
# 25 "data/maps/ErpCity/scripts.pory"
	lock
# 26 "data/maps/ErpCity/scripts.pory"
	faceplayer
# 27 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Old_Man_Boekel_Text_0, MSGBOX_AUTOCLOSE
# 28 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 29 "data/maps/ErpCity/scripts.pory"
	release
	end


ErpCity_Woman::
# 34 "data/maps/ErpCity/scripts.pory"
	lock
# 35 "data/maps/ErpCity/scripts.pory"
	faceplayer
# 36 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Woman_Text_0, MSGBOX_AUTOCLOSE
# 37 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 38 "data/maps/ErpCity/scripts.pory"
	release
	end


ErpCity_ProfessorBirds_Speech_Pokedex::
# 43 "data/maps/ErpCity/scripts.pory"
	lockall
# 44 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_0
# 45 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_KICKED_OUT_LAB_CONVO
# 46 "data/maps/ErpCity/scripts.pory"
	addobject 2
# 47 "data/maps/ErpCity/scripts.pory"
	addobject 5
# 48 "data/maps/ErpCity/scripts.pory"
	addobject 10
# 49 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_1
# 50 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_2
# 51 "data/maps/ErpCity/scripts.pory"
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3
# 52 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 53 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 54 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_1, MSGBOX_AUTOCLOSE
# 55 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 56 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 57 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4
# 58 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 59 "data/maps/ErpCity/scripts.pory"
	delay 120
# 60 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5
# 61 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 62 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6
# 63 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 64 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_2, MSGBOX_AUTOCLOSE
# 65 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 66 "data/maps/ErpCity/scripts.pory"
	delay 40
# 67 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 68 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7
# 69 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8
# 70 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 71 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_3
# 72 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 73 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 74 "data/maps/ErpCity/scripts.pory"
	special EnableNationalPokedex
# 75 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 76 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 77 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_4
# 78 "data/maps/ErpCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 79 "data/maps/ErpCity/scripts.pory"
	waitfanfare
# 80 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 81 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 82 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_5
# 83 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 84 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 85 "data/maps/ErpCity/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 86 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 87 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 88 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_6, MSGBOX_AUTOCLOSE
# 89 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 90 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 91 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9
# 92 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4
# 93 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 94 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 95 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 96 "data/maps/ErpCity/scripts.pory"
	delay 60
# 97 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11
# 98 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12
# 99 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 100 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_7
# 101 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_8
# 102 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 103 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11
# 104 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 105 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_13
# 106 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 107 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_7
# 108 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_9, MSGBOX_AUTOCLOSE
# 109 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 110 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 111 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_14
# 112 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_15
# 113 "data/maps/ErpCity/scripts.pory"
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_16
# 114 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 115 "data/maps/ErpCity/scripts.pory"
	removeobject 5
# 116 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17
# 117 "data/maps/ErpCity/scripts.pory"
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_18
# 118 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 119 "data/maps/ErpCity/scripts.pory"
	removeobject 10
# 120 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_KICKED_OUT_LAB_CONVO
# 121 "data/maps/ErpCity/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 2
# 122 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_INTERN_BIRDS_LAB
# 123 "data/maps/ErpCity/scripts.pory"
	delay 120
# 124 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 125 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_10, MSGBOX_AUTOCLOSE
# 126 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 127 "data/maps/ErpCity/scripts.pory"
	delay 40
# 128 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_19
# 129 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 130 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 131 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 132 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 133 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_11, MSGBOX_AUTOCLOSE
# 134 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 135 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_20
# 136 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 137 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_21
# 138 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 139 "data/maps/ErpCity/scripts.pory"
	removeobject 2
# 140 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 141 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 142 "data/maps/ErpCity/scripts.pory"
	delay 60
# 143 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12
# 144 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 145 "data/maps/ErpCity/scripts.pory"
	delay 60
# 146 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8
# 147 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 148 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_JACOB_SIENNA
# 149 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_INTERN_BIRDS_LAB
# 150 "data/maps/ErpCity/scripts.pory"
	delay 60
# 151 "data/maps/ErpCity/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 152 "data/maps/ErpCity/scripts.pory"
	special BufferMonNickname
# 153 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_12, MSGBOX_AUTOCLOSE
# 154 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_ProfessorBirds_After_Speech::
# 158 "data/maps/ErpCity/scripts.pory"
	lockall
# 159 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 160 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_After_Speech_Text_0
# 161 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 162 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Mispoes_Miauw::
# 166 "data/maps/ErpCity/scripts.pory"
	lockall
# 167 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Mispoes_Miauw_Text_0
# 168 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Mispoes_Miauw_Text_1
# 169 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 170 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Lab_Sign::
# 174 "data/maps/ErpCity/scripts.pory"
	lockall
# 175 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Lab_Sign_Text_0, MSGBOX_SIGN
# 176 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 177 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Hiker_Cave::
# 181 "data/maps/ErpCity/scripts.pory"
	lockall
# 182 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_Hiker_Cave_Movement_0
# 184 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Hiker_Cave_Text_0
# 185 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 186 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Cave_Sign::
# 190 "data/maps/ErpCity/scripts.pory"
	lockall
# 191 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Cave_Sign_Text_0
# 192 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 193 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Trigger_Stopplayer::
# 197 "data/maps/ErpCity/scripts.pory"
	lockall
# 198 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Trigger_Stopplayer_Text_0
# 199 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Move_Stopplayer
# 200 "data/maps/ErpCity/scripts.pory"
	waitmovement 0
# 201 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


# 204 "data/maps/ErpCity/scripts.pory"
ErpCity_Move_Stopplayer:
# 205 "data/maps/ErpCity/scripts.pory"
	walk_right
	step_end

ErpCity_Trigger_Stopplayer2::
# 209 "data/maps/ErpCity/scripts.pory"
	lockall
# 210 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Trigger_Stopplayer2_Text_0
# 211 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Trigger_Stopplayer2_Movement_0
# 212 "data/maps/ErpCity/scripts.pory"
	waitmovement 0
# 213 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Receive_Running_Shoes::
# 217 "data/maps/ErpCity/scripts.pory"
	lockall
# 218 "data/maps/ErpCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RUNNING_SHOES, ErpCity_Receive_Running_Shoes_1
# 259 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_7
# 260 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 261 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_2
# 262 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 263 "data/maps/ErpCity/scripts.pory"
	releaseall
	end

ErpCity_Receive_Running_Shoes_1:
# 219 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 220 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_0
# 221 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 222 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_MOM_SHOES
# 223 "data/maps/ErpCity/scripts.pory"
	addobject 4
# 224 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_Receive_Running_Shoes_Movement_1
# 225 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 226 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
# 227 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_1
# 228 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 229 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 230 "data/maps/ErpCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 231 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 232 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_2
# 233 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 234 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 235 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_3
# 236 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 237 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
# 238 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_4, MSGBOX_AUTOCLOSE
# 239 "data/maps/ErpCity/scripts.pory"
	delay 60
# 240 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
# 241 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_5, MSGBOX_AUTOCLOSE
# 242 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 243 "data/maps/ErpCity/scripts.pory"
	delay 40
# 244 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_2
# 245 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 246 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
# 247 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_6
# 248 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 249 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_Receive_Running_Shoes_Movement_3
# 250 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 251 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_MOM_SHOES
# 252 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 253 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_INTERN_BIRDS_LAB
# 254 "data/maps/ErpCity/scripts.pory"
	removeobject 4
# 255 "data/maps/ErpCity/scripts.pory"
	releaseall
	end


ErpCity_Sign_Mailbox_ProfBirds::
# 269 "data/maps/ErpCity/scripts.pory"
	lock
# 270 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_ProfBirds_Text_0, MSGBOX_SIGN
# 271 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 272 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_Starthouse::
# 276 "data/maps/ErpCity/scripts.pory"
	lock
# 277 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_Starthouse_Text_0, MSGBOX_SIGN
# 278 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 279 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_BarryHouse::
# 283 "data/maps/ErpCity/scripts.pory"
	lock
# 284 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_BarryHouse_Text_0, MSGBOX_SIGN
# 285 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 286 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_JanVogels::
# 290 "data/maps/ErpCity/scripts.pory"
	lock
# 291 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_JanVogels_Text_0, MSGBOX_SIGN
# 292 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 293 "data/maps/ErpCity/scripts.pory"
	release
	return


# 44 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_0:
# 44 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 44 "data/maps/ErpCity/scripts.pory"
	jump_left
# 44 "data/maps/ErpCity/scripts.pory"
	face_right
	step_end

# 49 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_1:
# 49 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 49 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
	step_end

# 50 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_2:
# 50 "data/maps/ErpCity/scripts.pory"
	walk_down
# 50 "data/maps/ErpCity/scripts.pory"
	walk_down
# 50 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 51 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3:
# 51 "data/maps/ErpCity/scripts.pory"
	jump_down
# 51 "data/maps/ErpCity/scripts.pory"
	jump_right
# 51 "data/maps/ErpCity/scripts.pory"
	jump_down
	step_end

# 57 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4:
# 57 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
	step_end

# 60 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5:
# 60 "data/maps/ErpCity/scripts.pory"
	walk_right
	step_end

# 62 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6:
# 62 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 68 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7:
# 68 "data/maps/ErpCity/scripts.pory"
	emote_exclamation_mark
# 68 "data/maps/ErpCity/scripts.pory"
	walk_left
	step_end

# 69 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8:
# 69 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 91 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9:
# 91 "data/maps/ErpCity/scripts.pory"
	emote_x
	step_end

# 93 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10:
# 93 "data/maps/ErpCity/scripts.pory"
	face_right
	step_end

# 97 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11:
# 97 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 97 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 98 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12:
# 98 "data/maps/ErpCity/scripts.pory"
	face_down
	step_end

# 105 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_13:
# 105 "data/maps/ErpCity/scripts.pory"
	face_down
# 105 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
	step_end

# 111 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_14:
# 111 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
# 111 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 112 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_15:
# 112 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 112 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 112 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 112 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 112 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 112 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 112 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 112 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 112 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 112 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 112 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 112 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
	step_end

# 113 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_16:
# 113 "data/maps/ErpCity/scripts.pory"
	jump_2_left
# 113 "data/maps/ErpCity/scripts.pory"
	jump_2_left
# 113 "data/maps/ErpCity/scripts.pory"
	jump_2_left
	step_end

# 116 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17:
# 116 "data/maps/ErpCity/scripts.pory"
	walk_down
# 116 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 117 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_18:
# 117 "data/maps/ErpCity/scripts.pory"
	jump_2_left
# 117 "data/maps/ErpCity/scripts.pory"
	jump_2_left
# 117 "data/maps/ErpCity/scripts.pory"
	jump_2_down
# 117 "data/maps/ErpCity/scripts.pory"
	jump_2_down
	step_end

# 128 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_19:
# 128 "data/maps/ErpCity/scripts.pory"
	walk_up
# 128 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 135 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_20:
# 135 "data/maps/ErpCity/scripts.pory"
	jump_left
# 135 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 137 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_21:
# 137 "data/maps/ErpCity/scripts.pory"
	walk_right
# 137 "data/maps/ErpCity/scripts.pory"
	walk_up
	step_end

# 182 "data/maps/ErpCity/scripts.pory"
ErpCity_Hiker_Cave_Movement_0:
# 182 "data/maps/ErpCity/scripts.pory"
	face_player
	step_end

# 211 "data/maps/ErpCity/scripts.pory"
ErpCity_Trigger_Stopplayer2_Movement_0:
# 211 "data/maps/ErpCity/scripts.pory"
	walk_left
	step_end

# 220 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_0:
# 220 "data/maps/ErpCity/scripts.pory"
	emote_exclamation_mark
# 220 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 224 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_1:
# 224 "data/maps/ErpCity/scripts.pory"
	walk_down
# 224 "data/maps/ErpCity/scripts.pory"
	face_player
	step_end

# 244 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_2:
# 244 "data/maps/ErpCity/scripts.pory"
	walk_down
	step_end

# 249 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_3:
# 249 "data/maps/ErpCity/scripts.pory"
	walk_up
	step_end

ErpCity_Sign_Welcome_Text_0:
# 19 "data/maps/ErpCity/scripts.pory"
	.string "ERPUS CITY\p"
	.string "Tranquil and peaceful.$"

ErpCity_Old_Man_Boekel_Text_0:
# 27 "data/maps/ErpCity/scripts.pory"
	.string "Some folks mock Erp for being small with\n"
	.string "just four houses, but at least we aren't\l"
	.string "Boekel!\p"
	.string "That place only has one house, occupied\n"
	.string "by a weird redhead who isn't even home\l"
	.string "half the time!$"

ErpCity_Woman_Text_0:
# 36 "data/maps/ErpCity/scripts.pory"
	.string "I traveled here from Meestrech just to\n"
	.string "gaze at that lake over there!\p"
	.string "The water is so calm and clear it looks\n"
	.string "like a mirror.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_0:
# 53 "data/maps/ErpCity/scripts.pory"
	.string "Prof. Birds$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_1:
# 54 "data/maps/ErpCity/scripts.pory"
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
# 64 "data/maps/ErpCity/scripts.pory"
	.string ".....wait a second....\p"
	.string ".....maybe this little slob can help me to\n"
	.string "get some data...\p"
	.string "...that strange anomaly....\p"
	.string ".....yes a very good idea Jari, very\n"
	.string "smart....$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_3:
# 71 "data/maps/ErpCity/scripts.pory"
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
# 77 "data/maps/ErpCity/scripts.pory"
	.string "You have received the Pokédex.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_5:
# 82 "data/maps/ErpCity/scripts.pory"
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
# 88 "data/maps/ErpCity/scripts.pory"
	.string "THROW THESE MOTHERFUCKERS, AND THE\n"
	.string "WORLD WILL BE MINE...\p"
	.string "...I mean ours...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_7:
# 100 "data/maps/ErpCity/scripts.pory"
	.string "Barry$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_8:
# 101 "data/maps/ErpCity/scripts.pory"
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
# 108 "data/maps/ErpCity/scripts.pory"
	.string "...\p"
	.string "YOU??\p"
	.string "A POKEMON MASTER?\p"
	.string "DON'T MAKE ME LAUGH.\p"
	.string "I WILL TAKE EVERY CHANCE TO PREVENT\n"
	.string "THAT FROM HAPPENING!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_10:
# 125 "data/maps/ErpCity/scripts.pory"
	.string "...I'd probably should search for\n"
	.string "another intern right now...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_11:
# 133 "data/maps/ErpCity/scripts.pory"
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
# 153 "data/maps/ErpCity/scripts.pory"
	.string "...I think it is safe to come out now\n"
	.string "{STR_VAR_1}, lets get out of here!$"

ErpCity_ProfessorBirds_After_Speech_Text_0:
# 160 "data/maps/ErpCity/scripts.pory"
	.string "WELL, WHAT ARE YOU WAITING FOR?\p"
	.string "GET THAT DATA ON THAT GOLDEN KRABBY\n"
	.string "FOR ME... I MEAN US.$"

ErpCity_Mispoes_Miauw_Text_0:
# 167 "data/maps/ErpCity/scripts.pory"
	.string "Mispoes$"

ErpCity_Mispoes_Miauw_Text_1:
# 168 "data/maps/ErpCity/scripts.pory"
	.string "Miaaaauw... KSSSSJSJJGGGG$"

ErpCity_Lab_Sign_Text_0:
# 175 "data/maps/ErpCity/scripts.pory"
	.string "Professor Birds's Lab$"

ErpCity_Hiker_Cave_Text_0:
# 184 "data/maps/ErpCity/scripts.pory"
	.string "The cave is not accessible at this time.\p"
	.string "Recent tremors from a unknown source\n"
	.string "have caused massive rock slides.\p"
	.string "The path is too dangerous.$"

ErpCity_Cave_Sign_Text_0:
# 191 "data/maps/ErpCity/scripts.pory"
	.string "A large map with a labyrint of routes\n"
	.string "going through the cave.\p"
	.string "Most of them are crossed out.$"

ErpCity_Trigger_Stopplayer_Text_0:
# 198 "data/maps/ErpCity/scripts.pory"
	.string "Wandering without any pokemon might be\n"
	.string "dangerous....$"

ErpCity_Trigger_Stopplayer2_Text_0:
# 210 "data/maps/ErpCity/scripts.pory"
	.string "Mom said the lab was up north I think...$"

ErpCity_Receive_Running_Shoes_Text_0:
# 226 "data/maps/ErpCity/scripts.pory"
	.string "Mom$"

ErpCity_Receive_Running_Shoes_Text_1:
# 227 "data/maps/ErpCity/scripts.pory"
	.string "Honey, I almost forgot!\p"
	.string "If you want to make an impression on\n"
	.string "the professor you should wear some\l"
	.string "different shoes.\p"
	.string "As a surprise I've bought a new pair for\n"
	.string "you!$"

ErpCity_Receive_Running_Shoes_Text_2:
# 232 "data/maps/ErpCity/scripts.pory"
	.string "You have received running shoes from\n"
	.string "Mom.$"

ErpCity_Receive_Running_Shoes_Text_3:
# 235 "data/maps/ErpCity/scripts.pory"
	.string "Now if you press your 'B muscle' while\n"
	.string "moving, you will sprint!$"

ErpCity_Receive_Running_Shoes_Text_4:
# 238 "data/maps/ErpCity/scripts.pory"
	.string "Look at you, all nice and shiny.\p"
	.string "Say hello to the professor for me.\p"
	.string "Have fun!$"

ErpCity_Receive_Running_Shoes_Text_5:
# 241 "data/maps/ErpCity/scripts.pory"
	.string "Well, go on!\n"
	.string "Don't be shy!$"

ErpCity_Receive_Running_Shoes_Text_6:
# 247 "data/maps/ErpCity/scripts.pory"
	.string "There you go!\n"
	.string "I'll prepare some potatoes, meat and\l"
	.string "vegetables for you when you get back,\l"
	.string "your favorite!$"

ErpCity_Receive_Running_Shoes_Text_7:
# 259 "data/maps/ErpCity/scripts.pory"
	.string "Better get to the lab, Mom probably\n"
	.string "won't let me in if I don't try.$"

ErpCity_Sign_Mailbox_ProfBirds_Text_0:
# 270 "data/maps/ErpCity/scripts.pory"
	.string "This mailbox seems to be filled to the\n"
	.string "brim, somebody should clean this thing\l"
	.string "out.$"

ErpCity_Sign_Mailbox_Starthouse_Text_0:
# 277 "data/maps/ErpCity/scripts.pory"
	.string "Home.$"

ErpCity_Sign_Mailbox_BarryHouse_Text_0:
# 284 "data/maps/ErpCity/scripts.pory"
	.string "Family Stonebakers's house.$"

ErpCity_Sign_Mailbox_JanVogels_Text_0:
# 291 "data/maps/ErpCity/scripts.pory"
	.string "Family Birds's house.$"
