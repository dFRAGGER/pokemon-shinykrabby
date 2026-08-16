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


ErpCity_SpearowFearow_Flyby::
# 14 "data/maps/ErpCity/scripts.pory"
	setvar VAR_TEMP_0, 1
# 15 "data/maps/ErpCity/scripts.pory"
	setobjectsubpriority 11, MAP_ERP_CITY, 0
# 16 "data/maps/ErpCity/scripts.pory"
	setobjectsubpriority 12, MAP_ERP_CITY, 0
# 17 "data/maps/ErpCity/scripts.pory"
	setobjectsubpriority 13, MAP_ERP_CITY, 0
# 18 "data/maps/ErpCity/scripts.pory"
	applymovement 13, ErpCity_SpearowFearow_Flyby_Movement_0
# 19 "data/maps/ErpCity/scripts.pory"
	applymovement 12, ErpCity_SpearowFearow_Flyby_Movement_0
# 20 "data/maps/ErpCity/scripts.pory"
	applymovement 11, ErpCity_SpearowFearow_Flyby_Movement_0
# 21 "data/maps/ErpCity/scripts.pory"
	waitmovement 11
# 22 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_TEMP_1
# 23 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_TEMP_2
# 24 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_TEMP_3
# 25 "data/maps/ErpCity/scripts.pory"
	removeobject 13
# 26 "data/maps/ErpCity/scripts.pory"
	removeobject 12
# 27 "data/maps/ErpCity/scripts.pory"
	removeobject 11
	return


ErpCity_Visited::
# 31 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_VISITED_ERP_CITY
	return


ErpCity_Sign_Welcome::
# 35 "data/maps/ErpCity/scripts.pory"
	lock
# 36 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Welcome_Text_0, MSGBOX_SIGN
# 37 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 38 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Old_Man_Boekel::
# 42 "data/maps/ErpCity/scripts.pory"
	lock
# 43 "data/maps/ErpCity/scripts.pory"
	faceplayer
# 44 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Old_Man_Boekel_Text_0, MSGBOX_AUTOCLOSE
# 45 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 46 "data/maps/ErpCity/scripts.pory"
	release
	end


ErpCity_Woman::
# 51 "data/maps/ErpCity/scripts.pory"
	lock
# 52 "data/maps/ErpCity/scripts.pory"
	faceplayer
# 53 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Woman_Text_0, MSGBOX_AUTOCLOSE
# 54 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 55 "data/maps/ErpCity/scripts.pory"
	release
	end


ErpCity_ProfessorBirds_Speech_Pokedex::
# 60 "data/maps/ErpCity/scripts.pory"
	lockall
# 61 "data/maps/ErpCity/scripts.pory"
	opendoor 22, 18
# 62 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_0
# 63 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_KICKED_OUT_LAB_CONVO
# 64 "data/maps/ErpCity/scripts.pory"
	addobject 2
# 65 "data/maps/ErpCity/scripts.pory"
	addobject 5
# 66 "data/maps/ErpCity/scripts.pory"
	addobject 10
# 67 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_1
# 68 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_2
# 69 "data/maps/ErpCity/scripts.pory"
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3
# 70 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 71 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 72 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_1, MSGBOX_AUTOCLOSE
# 73 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 74 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 75 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4
# 76 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 77 "data/maps/ErpCity/scripts.pory"
	delay 120
# 78 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5
# 79 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 80 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6
# 81 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 82 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_2, MSGBOX_AUTOCLOSE
# 83 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 84 "data/maps/ErpCity/scripts.pory"
	delay 40
# 85 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 86 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7
# 87 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8
# 88 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 89 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_3
# 90 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 91 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 92 "data/maps/ErpCity/scripts.pory"
	special EnableNationalPokedex
# 93 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 94 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 95 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_4
# 96 "data/maps/ErpCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 97 "data/maps/ErpCity/scripts.pory"
	waitfanfare
# 98 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 99 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 100 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_5
# 101 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 102 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 103 "data/maps/ErpCity/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 104 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 105 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 106 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_6, MSGBOX_AUTOCLOSE
# 107 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 108 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 109 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9
# 110 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4
# 111 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 112 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 113 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 114 "data/maps/ErpCity/scripts.pory"
	delay 60
# 115 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11
# 116 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12
# 117 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 118 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_7
# 119 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_8
# 120 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 121 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11
# 122 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 123 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_13
# 124 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 125 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_7
# 126 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_9, MSGBOX_AUTOCLOSE
# 127 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 128 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 129 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_14
# 130 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_15
# 131 "data/maps/ErpCity/scripts.pory"
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_16
# 132 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 133 "data/maps/ErpCity/scripts.pory"
	removeobject 5
# 134 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17
# 135 "data/maps/ErpCity/scripts.pory"
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_18
# 136 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 137 "data/maps/ErpCity/scripts.pory"
	removeobject 10
# 138 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_KICKED_OUT_LAB_CONVO
# 139 "data/maps/ErpCity/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 2
# 140 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_INTERN_BIRDS_LAB
# 141 "data/maps/ErpCity/scripts.pory"
	delay 120
# 142 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 143 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_10, MSGBOX_AUTOCLOSE
# 144 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 145 "data/maps/ErpCity/scripts.pory"
	delay 40
# 146 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_19
# 147 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 148 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 149 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 150 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 151 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_11, MSGBOX_AUTOCLOSE
# 152 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 153 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_20
# 154 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 155 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_21
# 156 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 157 "data/maps/ErpCity/scripts.pory"
	removeobject 2
# 158 "data/maps/ErpCity/scripts.pory"
	closedoor 22, 18
# 159 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 160 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 161 "data/maps/ErpCity/scripts.pory"
	delay 60
# 162 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12
# 163 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 164 "data/maps/ErpCity/scripts.pory"
	delay 60
# 165 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8
# 166 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 167 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_JACOB_SIENNA
# 168 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_INTERN_BIRDS_LAB
# 169 "data/maps/ErpCity/scripts.pory"
	delay 60
# 170 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_12, MSGBOX_AUTOCLOSE
# 171 "data/maps/ErpCity/scripts.pory"
	special UpdateFollowingPokemon
# 173 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_ProfessorBirds_After_Speech::
# 177 "data/maps/ErpCity/scripts.pory"
	lockall
# 178 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 179 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_After_Speech_Text_0
# 180 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 181 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Mispoes_Miauw::
# 185 "data/maps/ErpCity/scripts.pory"
	lockall
# 186 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Mispoes_Miauw_Text_0
# 187 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Mispoes_Miauw_Text_1
# 188 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 189 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Lab_Sign::
# 193 "data/maps/ErpCity/scripts.pory"
	lockall
# 194 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Lab_Sign_Text_0, MSGBOX_SIGN
# 195 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 196 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Hiker_Cave::
# 200 "data/maps/ErpCity/scripts.pory"
	lockall
# 201 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_Hiker_Cave_Movement_0
# 203 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Hiker_Cave_Text_0
# 204 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 205 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Cave_Sign::
# 209 "data/maps/ErpCity/scripts.pory"
	lockall
# 210 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Cave_Sign_Text_0
# 211 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 212 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Trigger_Stopplayer::
# 216 "data/maps/ErpCity/scripts.pory"
	lockall
# 217 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Trigger_Stopplayer_Text_0
# 218 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Move_Stopplayer
# 219 "data/maps/ErpCity/scripts.pory"
	waitmovement 0
# 220 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


# 223 "data/maps/ErpCity/scripts.pory"
ErpCity_Move_Stopplayer:
# 224 "data/maps/ErpCity/scripts.pory"
	walk_right
	step_end

ErpCity_Trigger_Stopplayer2::
# 228 "data/maps/ErpCity/scripts.pory"
	lockall
# 229 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Trigger_Stopplayer2_Text_0
# 230 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Trigger_Stopplayer2_Movement_0
# 231 "data/maps/ErpCity/scripts.pory"
	waitmovement 0
# 232 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Receive_Running_Shoes::
# 236 "data/maps/ErpCity/scripts.pory"
	lockall
# 237 "data/maps/ErpCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RUNNING_SHOES, ErpCity_Receive_Running_Shoes_1
# 274 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 275 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_5
# 276 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 277 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_2
# 278 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 279 "data/maps/ErpCity/scripts.pory"
	releaseall
	end

ErpCity_Receive_Running_Shoes_1:
# 238 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 239 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_0
# 240 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 241 "data/maps/ErpCity/scripts.pory"
	opendoor 19, 25
# 242 "data/maps/ErpCity/scripts.pory"
	waitdooranim
# 243 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_MOM_SHOES
# 244 "data/maps/ErpCity/scripts.pory"
	addobject 4
# 245 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_Receive_Running_Shoes_Movement_1
# 246 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 247 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
# 248 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_1
# 249 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 250 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 251 "data/maps/ErpCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 252 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 253 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_2
# 254 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 255 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 256 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_3
# 257 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 258 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
# 259 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_4, MSGBOX_AUTOCLOSE
# 260 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 261 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_2
# 262 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_Receive_Running_Shoes_Movement_3
# 263 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 264 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_MOM_SHOES
# 265 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 266 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_INTERN_BIRDS_LAB
# 267 "data/maps/ErpCity/scripts.pory"
	removeobject 4
# 268 "data/maps/ErpCity/scripts.pory"
	closedoor 19, 25
# 269 "data/maps/ErpCity/scripts.pory"
	waitdooranim
# 270 "data/maps/ErpCity/scripts.pory"
	releaseall
	end


ErpCity_Sign_Mailbox_ProfBirds::
# 285 "data/maps/ErpCity/scripts.pory"
	lock
# 286 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_ProfBirds_Text_0, MSGBOX_SIGN
# 287 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 288 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_Starthouse::
# 292 "data/maps/ErpCity/scripts.pory"
	lock
# 293 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_Starthouse_Text_0, MSGBOX_SIGN
# 294 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 295 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_BarryHouse::
# 299 "data/maps/ErpCity/scripts.pory"
	lock
# 300 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_BarryHouse_Text_0, MSGBOX_SIGN
# 301 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 302 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_JanVogels::
# 306 "data/maps/ErpCity/scripts.pory"
	lock
# 307 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_JanVogels_Text_0, MSGBOX_SIGN
# 308 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 309 "data/maps/ErpCity/scripts.pory"
	release
	return


OldMiner_Sjeng_Reminisce::
# 313 "data/maps/ErpCity/scripts.pory"
	lock
# 314 "data/maps/ErpCity/scripts.pory"
	faceplayer
# 315 "data/maps/ErpCity/scripts.pory"
	msgbox OldMiner_Sjeng_Reminisce_Text_0, MSGBOX_AUTOCLOSE
# 316 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 317 "data/maps/ErpCity/scripts.pory"
	release
	end


# 18 "data/maps/ErpCity/scripts.pory"
ErpCity_SpearowFearow_Flyby_Movement_0:
# 18 "data/maps/ErpCity/scripts.pory"
	jump_2_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
	step_end

# 62 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_0:
# 62 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 62 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 62 "data/maps/ErpCity/scripts.pory"
	jump_left
# 62 "data/maps/ErpCity/scripts.pory"
	face_right
	step_end

# 67 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_1:
# 67 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 67 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 67 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
	step_end

# 68 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_2:
# 68 "data/maps/ErpCity/scripts.pory"
	walk_down
# 68 "data/maps/ErpCity/scripts.pory"
	walk_down
# 68 "data/maps/ErpCity/scripts.pory"
	walk_down
# 68 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 69 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3:
# 69 "data/maps/ErpCity/scripts.pory"
	jump_down
# 69 "data/maps/ErpCity/scripts.pory"
	jump_down
# 69 "data/maps/ErpCity/scripts.pory"
	jump_right
# 69 "data/maps/ErpCity/scripts.pory"
	jump_down
	step_end

# 75 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4:
# 75 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
	step_end

# 78 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5:
# 78 "data/maps/ErpCity/scripts.pory"
	walk_right
	step_end

# 80 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6:
# 80 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 86 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7:
# 86 "data/maps/ErpCity/scripts.pory"
	emote_exclamation_mark
# 86 "data/maps/ErpCity/scripts.pory"
	walk_left
	step_end

# 87 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8:
# 87 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 109 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9:
# 109 "data/maps/ErpCity/scripts.pory"
	emote_x
	step_end

# 111 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10:
# 111 "data/maps/ErpCity/scripts.pory"
	face_right
	step_end

# 115 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11:
# 115 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 115 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 116 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12:
# 116 "data/maps/ErpCity/scripts.pory"
	face_down
	step_end

# 123 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_13:
# 123 "data/maps/ErpCity/scripts.pory"
	face_down
# 123 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
	step_end

# 129 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_14:
# 129 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
# 129 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 130 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_15:
# 130 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 130 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 130 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 130 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 130 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 130 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 130 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 130 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 130 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 130 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 130 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 130 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
	step_end

# 131 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_16:
# 131 "data/maps/ErpCity/scripts.pory"
	jump_2_left
# 131 "data/maps/ErpCity/scripts.pory"
	jump_2_left
# 131 "data/maps/ErpCity/scripts.pory"
	jump_2_left
	step_end

# 134 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17:
# 134 "data/maps/ErpCity/scripts.pory"
	walk_down
# 134 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 135 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_18:
# 135 "data/maps/ErpCity/scripts.pory"
	jump_2_left
# 135 "data/maps/ErpCity/scripts.pory"
	jump_2_left
# 135 "data/maps/ErpCity/scripts.pory"
	jump_2_down
# 135 "data/maps/ErpCity/scripts.pory"
	jump_2_down
	step_end

# 146 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_19:
# 146 "data/maps/ErpCity/scripts.pory"
	walk_up
# 146 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 153 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_20:
# 153 "data/maps/ErpCity/scripts.pory"
	jump_left
# 153 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 155 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_21:
# 155 "data/maps/ErpCity/scripts.pory"
	walk_right
# 155 "data/maps/ErpCity/scripts.pory"
	walk_up
# 155 "data/maps/ErpCity/scripts.pory"
	walk_up
	step_end

# 201 "data/maps/ErpCity/scripts.pory"
ErpCity_Hiker_Cave_Movement_0:
# 201 "data/maps/ErpCity/scripts.pory"
	face_player
	step_end

# 230 "data/maps/ErpCity/scripts.pory"
ErpCity_Trigger_Stopplayer2_Movement_0:
# 230 "data/maps/ErpCity/scripts.pory"
	walk_left
	step_end

# 239 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_0:
# 239 "data/maps/ErpCity/scripts.pory"
	emote_exclamation_mark
# 239 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 245 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_1:
# 245 "data/maps/ErpCity/scripts.pory"
	walk_down
# 245 "data/maps/ErpCity/scripts.pory"
	face_player
	step_end

# 261 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_2:
# 261 "data/maps/ErpCity/scripts.pory"
	walk_down
	step_end

# 262 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_3:
# 262 "data/maps/ErpCity/scripts.pory"
	walk_up
	step_end

ErpCity_Sign_Welcome_Text_0:
# 36 "data/maps/ErpCity/scripts.pory"
	.string "ERP TOWN\p"
	.string "Tranquil and peaceful.$"

ErpCity_Old_Man_Boekel_Text_0:
# 44 "data/maps/ErpCity/scripts.pory"
	.string "Some folks mock Erp for being small with\n"
	.string "just four houses, but at least we aren't\l"
	.string "Boekel!\p"
	.string "That place only has one house, occupied\n"
	.string "by a weird redhead who isn't even home\l"
	.string "half the time!$"

ErpCity_Woman_Text_0:
# 53 "data/maps/ErpCity/scripts.pory"
	.string "I traveled here from Mosa Town just to\n"
	.string "gaze at that lake over there!\p"
	.string "The water is so calm and clear it looks\n"
	.string "like a mirror.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_0:
# 71 "data/maps/ErpCity/scripts.pory"
	.string "PROF. BIRDS$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_1:
# 72 "data/maps/ErpCity/scripts.pory"
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
# 82 "data/maps/ErpCity/scripts.pory"
	.string ".....wait a second....\p"
	.string ".....maybe this little slob can help me to\n"
	.string "get some data...\p"
	.string "...that strange anomaly....\p"
	.string ".....yes a very good idea Jari, very\n"
	.string "smart....$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_3:
# 89 "data/maps/ErpCity/scripts.pory"
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
# 95 "data/maps/ErpCity/scripts.pory"
	.string "You have received the Pokédex.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_5:
# 100 "data/maps/ErpCity/scripts.pory"
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
# 106 "data/maps/ErpCity/scripts.pory"
	.string "THROW THESE MOTHERFUCKERS, AND THE\n"
	.string "WORLD WILL BE MINE...\p"
	.string "...I mean ours...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_7:
# 118 "data/maps/ErpCity/scripts.pory"
	.string "BARRY$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_8:
# 119 "data/maps/ErpCity/scripts.pory"
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
# 126 "data/maps/ErpCity/scripts.pory"
	.string "...\p"
	.string "YOU??\p"
	.string "A POKEMON MASTER?\p"
	.string "DON'T MAKE ME LAUGH.\p"
	.string "I WILL TAKE EVERY CHANCE TO PREVENT\n"
	.string "THAT FROM HAPPENING!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_10:
# 143 "data/maps/ErpCity/scripts.pory"
	.string "...I'd probably should search for\n"
	.string "another intern right now...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_11:
# 151 "data/maps/ErpCity/scripts.pory"
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
# 170 "data/maps/ErpCity/scripts.pory"
	.string "...I think it is safe to come out now,\n"
	.string "lets get out of here!$"

ErpCity_ProfessorBirds_After_Speech_Text_0:
# 179 "data/maps/ErpCity/scripts.pory"
	.string "WELL, WHAT ARE YOU WAITING FOR?\p"
	.string "GET THAT DATA ON THAT GOLDEN KRABBY\n"
	.string "FOR ME... I MEAN US.$"

ErpCity_Mispoes_Miauw_Text_0:
# 186 "data/maps/ErpCity/scripts.pory"
	.string "MISPOES$"

ErpCity_Mispoes_Miauw_Text_1:
# 187 "data/maps/ErpCity/scripts.pory"
	.string "Miaaaauw... KSSSSJSJJGGGG$"

ErpCity_Lab_Sign_Text_0:
# 194 "data/maps/ErpCity/scripts.pory"
	.string "Professor Birds's Lab$"

ErpCity_Hiker_Cave_Text_0:
# 203 "data/maps/ErpCity/scripts.pory"
	.string "The cave is not accessible at this time.\p"
	.string "Recent tremors from a unknown source\n"
	.string "have caused massive rock slides.\p"
	.string "The path is too dangerous.$"

ErpCity_Cave_Sign_Text_0:
# 210 "data/maps/ErpCity/scripts.pory"
	.string "A large map with a labyrint of routes\n"
	.string "going through the cave.\p"
	.string "Most of them are crossed out.$"

ErpCity_Trigger_Stopplayer_Text_0:
# 217 "data/maps/ErpCity/scripts.pory"
	.string "Wandering without any pokemon might be\n"
	.string "dangerous....$"

ErpCity_Trigger_Stopplayer2_Text_0:
# 229 "data/maps/ErpCity/scripts.pory"
	.string "Mom said the lab was up north I think...$"

ErpCity_Receive_Running_Shoes_Text_0:
# 247 "data/maps/ErpCity/scripts.pory"
	.string "MOM$"

ErpCity_Receive_Running_Shoes_Text_1:
# 248 "data/maps/ErpCity/scripts.pory"
	.string "Honey, I almost forgot!\p"
	.string "If you want to make an impression on\n"
	.string "the professor you should wear some\l"
	.string "different shoes.\p"
	.string "As a surprise I've bought a new pair for\n"
	.string "you!$"

ErpCity_Receive_Running_Shoes_Text_2:
# 253 "data/maps/ErpCity/scripts.pory"
	.string "You have received running shoes from\n"
	.string "Mom.$"

ErpCity_Receive_Running_Shoes_Text_3:
# 256 "data/maps/ErpCity/scripts.pory"
	.string "Now if you press your 'B muscle' while\n"
	.string "moving, you will sprint!$"

ErpCity_Receive_Running_Shoes_Text_4:
# 259 "data/maps/ErpCity/scripts.pory"
	.string "Look at you, all nice and shiny.\p"
	.string "Say hello to the professor for me.\p"
	.string "The lab is up the hill, north from here.\p"
	.string "Have fun!$"

ErpCity_Receive_Running_Shoes_Text_5:
# 275 "data/maps/ErpCity/scripts.pory"
	.string "Better get to the lab, Mom probably\n"
	.string "won't let me in if I don't try.$"

ErpCity_Sign_Mailbox_ProfBirds_Text_0:
# 286 "data/maps/ErpCity/scripts.pory"
	.string "This mailbox seems to be filled to the\n"
	.string "brim, somebody should clean this thing\l"
	.string "out.$"

ErpCity_Sign_Mailbox_Starthouse_Text_0:
# 293 "data/maps/ErpCity/scripts.pory"
	.string "Home.$"

ErpCity_Sign_Mailbox_BarryHouse_Text_0:
# 300 "data/maps/ErpCity/scripts.pory"
	.string "Family Stonebakers's house.$"

ErpCity_Sign_Mailbox_JanVogels_Text_0:
# 307 "data/maps/ErpCity/scripts.pory"
	.string "Family Birds's house.$"

OldMiner_Sjeng_Reminisce_Text_0:
# 315 "data/maps/ErpCity/scripts.pory"
	.string "Fifty years ago, this town was just\n"
	.string "river and rock.\p"
	.string "Then a wild Meowth dug up a nugget of\n"
	.string "gold deep in the mountains.\p"
	.string "Folks rushed in from everywhere. They\n"
	.string "laid these tracks and built this\l"
	.string "station.\p"
	.string "But in the end, nobody found much more\n"
	.string "than that one nugget.\p"
	.string "The rush died, the trains stopped\n"
	.string "coming, and I'm still waiting on one that\l"
	.string "won't arrive.\p"
	.string "Some routes still run up toward the\n"
	.string "mountain, though.\p"
	.string "Only battle-hardened trainers and\n"
	.string "folks who know their bushcraft make it\l"
	.string "past the treeline.$"
