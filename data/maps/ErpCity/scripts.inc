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
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_0
# 62 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_KICKED_OUT_LAB_CONVO
# 63 "data/maps/ErpCity/scripts.pory"
	addobject 2
# 64 "data/maps/ErpCity/scripts.pory"
	addobject 5
# 65 "data/maps/ErpCity/scripts.pory"
	addobject 10
# 66 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_1
# 67 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_2
# 68 "data/maps/ErpCity/scripts.pory"
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3
# 69 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 70 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 71 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_1, MSGBOX_AUTOCLOSE
# 72 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 73 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 74 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4
# 75 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 76 "data/maps/ErpCity/scripts.pory"
	delay 120
# 77 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5
# 78 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 79 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6
# 80 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 81 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_2, MSGBOX_AUTOCLOSE
# 82 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 83 "data/maps/ErpCity/scripts.pory"
	delay 40
# 84 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 85 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7
# 86 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8
# 87 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 88 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_3
# 89 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 90 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 91 "data/maps/ErpCity/scripts.pory"
	special EnableNationalPokedex
# 92 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 93 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 94 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_4
# 95 "data/maps/ErpCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 96 "data/maps/ErpCity/scripts.pory"
	waitfanfare
# 97 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 98 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 99 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_5
# 100 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 101 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 102 "data/maps/ErpCity/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 103 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 104 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 105 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_6, MSGBOX_AUTOCLOSE
# 106 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 107 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 108 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9
# 109 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4
# 110 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 111 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 112 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 113 "data/maps/ErpCity/scripts.pory"
	delay 60
# 114 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11
# 115 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12
# 116 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 117 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_7
# 118 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_8
# 119 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 120 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11
# 121 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 122 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_13
# 123 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 124 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_7
# 125 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_9, MSGBOX_AUTOCLOSE
# 126 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 127 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 128 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_14
# 129 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_15
# 130 "data/maps/ErpCity/scripts.pory"
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_16
# 131 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 132 "data/maps/ErpCity/scripts.pory"
	removeobject 5
# 133 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17
# 134 "data/maps/ErpCity/scripts.pory"
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_18
# 135 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 136 "data/maps/ErpCity/scripts.pory"
	removeobject 10
# 137 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_KICKED_OUT_LAB_CONVO
# 138 "data/maps/ErpCity/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 2
# 139 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_INTERN_BIRDS_LAB
# 140 "data/maps/ErpCity/scripts.pory"
	delay 120
# 141 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 142 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_10, MSGBOX_AUTOCLOSE
# 143 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 144 "data/maps/ErpCity/scripts.pory"
	delay 40
# 145 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_19
# 146 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 147 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 148 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 149 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 150 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_11, MSGBOX_AUTOCLOSE
# 151 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 152 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_20
# 153 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 154 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_21
# 155 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 156 "data/maps/ErpCity/scripts.pory"
	removeobject 2
# 157 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 158 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 159 "data/maps/ErpCity/scripts.pory"
	delay 60
# 160 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12
# 161 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 162 "data/maps/ErpCity/scripts.pory"
	delay 60
# 163 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8
# 164 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 165 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_JACOB_SIENNA
# 166 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_INTERN_BIRDS_LAB
# 167 "data/maps/ErpCity/scripts.pory"
	delay 60
# 168 "data/maps/ErpCity/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 169 "data/maps/ErpCity/scripts.pory"
	special BufferMonNickname
# 170 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_12, MSGBOX_AUTOCLOSE
# 171 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_ProfessorBirds_After_Speech::
# 175 "data/maps/ErpCity/scripts.pory"
	lockall
# 176 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 177 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_After_Speech_Text_0
# 178 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 179 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Mispoes_Miauw::
# 183 "data/maps/ErpCity/scripts.pory"
	lockall
# 184 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Mispoes_Miauw_Text_0
# 185 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Mispoes_Miauw_Text_1
# 186 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 187 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Lab_Sign::
# 191 "data/maps/ErpCity/scripts.pory"
	lockall
# 192 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Lab_Sign_Text_0, MSGBOX_SIGN
# 193 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 194 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Hiker_Cave::
# 198 "data/maps/ErpCity/scripts.pory"
	lockall
# 199 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_Hiker_Cave_Movement_0
# 201 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Hiker_Cave_Text_0
# 202 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 203 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Cave_Sign::
# 207 "data/maps/ErpCity/scripts.pory"
	lockall
# 208 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Cave_Sign_Text_0
# 209 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 210 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Trigger_Stopplayer::
# 214 "data/maps/ErpCity/scripts.pory"
	lockall
# 215 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Trigger_Stopplayer_Text_0
# 216 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Move_Stopplayer
# 217 "data/maps/ErpCity/scripts.pory"
	waitmovement 0
# 218 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


# 221 "data/maps/ErpCity/scripts.pory"
ErpCity_Move_Stopplayer:
# 222 "data/maps/ErpCity/scripts.pory"
	walk_right
	step_end

ErpCity_Trigger_Stopplayer2::
# 226 "data/maps/ErpCity/scripts.pory"
	lockall
# 227 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Trigger_Stopplayer2_Text_0
# 228 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Trigger_Stopplayer2_Movement_0
# 229 "data/maps/ErpCity/scripts.pory"
	waitmovement 0
# 230 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Receive_Running_Shoes::
# 234 "data/maps/ErpCity/scripts.pory"
	lockall
# 235 "data/maps/ErpCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RUNNING_SHOES, ErpCity_Receive_Running_Shoes_1
# 276 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_7
# 277 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 278 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_2
# 279 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 280 "data/maps/ErpCity/scripts.pory"
	releaseall
	end

ErpCity_Receive_Running_Shoes_1:
# 236 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 237 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_0
# 238 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 239 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_MOM_SHOES
# 240 "data/maps/ErpCity/scripts.pory"
	addobject 4
# 241 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_Receive_Running_Shoes_Movement_1
# 242 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 243 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
# 244 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_1
# 245 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 246 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 247 "data/maps/ErpCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 248 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 249 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_2
# 250 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 251 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 252 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_3
# 253 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 254 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
# 255 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_4, MSGBOX_AUTOCLOSE
# 256 "data/maps/ErpCity/scripts.pory"
	delay 60
# 257 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
# 258 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_5, MSGBOX_AUTOCLOSE
# 259 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 260 "data/maps/ErpCity/scripts.pory"
	delay 40
# 261 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_2
# 262 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 263 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
# 264 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_6
# 265 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 266 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_Receive_Running_Shoes_Movement_3
# 267 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 268 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_MOM_SHOES
# 269 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 270 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_INTERN_BIRDS_LAB
# 271 "data/maps/ErpCity/scripts.pory"
	removeobject 4
# 272 "data/maps/ErpCity/scripts.pory"
	releaseall
	end


ErpCity_Sign_Mailbox_ProfBirds::
# 286 "data/maps/ErpCity/scripts.pory"
	lock
# 287 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_ProfBirds_Text_0, MSGBOX_SIGN
# 288 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 289 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_Starthouse::
# 293 "data/maps/ErpCity/scripts.pory"
	lock
# 294 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_Starthouse_Text_0, MSGBOX_SIGN
# 295 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 296 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_BarryHouse::
# 300 "data/maps/ErpCity/scripts.pory"
	lock
# 301 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_BarryHouse_Text_0, MSGBOX_SIGN
# 302 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 303 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_JanVogels::
# 307 "data/maps/ErpCity/scripts.pory"
	lock
# 308 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_JanVogels_Text_0, MSGBOX_SIGN
# 309 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 310 "data/maps/ErpCity/scripts.pory"
	release
	return


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

# 61 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_0:
# 61 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 61 "data/maps/ErpCity/scripts.pory"
	jump_left
# 61 "data/maps/ErpCity/scripts.pory"
	face_right
	step_end

# 66 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_1:
# 66 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 66 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
	step_end

# 67 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_2:
# 67 "data/maps/ErpCity/scripts.pory"
	walk_down
# 67 "data/maps/ErpCity/scripts.pory"
	walk_down
# 67 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 68 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3:
# 68 "data/maps/ErpCity/scripts.pory"
	jump_down
# 68 "data/maps/ErpCity/scripts.pory"
	jump_right
# 68 "data/maps/ErpCity/scripts.pory"
	jump_down
	step_end

# 74 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4:
# 74 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
	step_end

# 77 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5:
# 77 "data/maps/ErpCity/scripts.pory"
	walk_right
	step_end

# 79 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6:
# 79 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 85 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7:
# 85 "data/maps/ErpCity/scripts.pory"
	emote_exclamation_mark
# 85 "data/maps/ErpCity/scripts.pory"
	walk_left
	step_end

# 86 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8:
# 86 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 108 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9:
# 108 "data/maps/ErpCity/scripts.pory"
	emote_x
	step_end

# 110 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10:
# 110 "data/maps/ErpCity/scripts.pory"
	face_right
	step_end

# 114 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11:
# 114 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 114 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 115 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12:
# 115 "data/maps/ErpCity/scripts.pory"
	face_down
	step_end

# 122 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_13:
# 122 "data/maps/ErpCity/scripts.pory"
	face_down
# 122 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
	step_end

# 128 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_14:
# 128 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
# 128 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 129 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_15:
# 129 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 129 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 129 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 129 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 129 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 129 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 129 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 129 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 129 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 129 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 129 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 129 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
	step_end

# 130 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_16:
# 130 "data/maps/ErpCity/scripts.pory"
	jump_2_left
# 130 "data/maps/ErpCity/scripts.pory"
	jump_2_left
# 130 "data/maps/ErpCity/scripts.pory"
	jump_2_left
	step_end

# 133 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17:
# 133 "data/maps/ErpCity/scripts.pory"
	walk_down
# 133 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 134 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_18:
# 134 "data/maps/ErpCity/scripts.pory"
	jump_2_left
# 134 "data/maps/ErpCity/scripts.pory"
	jump_2_left
# 134 "data/maps/ErpCity/scripts.pory"
	jump_2_down
# 134 "data/maps/ErpCity/scripts.pory"
	jump_2_down
	step_end

# 145 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_19:
# 145 "data/maps/ErpCity/scripts.pory"
	walk_up
# 145 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 152 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_20:
# 152 "data/maps/ErpCity/scripts.pory"
	jump_left
# 152 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 154 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_21:
# 154 "data/maps/ErpCity/scripts.pory"
	walk_right
# 154 "data/maps/ErpCity/scripts.pory"
	walk_up
	step_end

# 199 "data/maps/ErpCity/scripts.pory"
ErpCity_Hiker_Cave_Movement_0:
# 199 "data/maps/ErpCity/scripts.pory"
	face_player
	step_end

# 228 "data/maps/ErpCity/scripts.pory"
ErpCity_Trigger_Stopplayer2_Movement_0:
# 228 "data/maps/ErpCity/scripts.pory"
	walk_left
	step_end

# 237 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_0:
# 237 "data/maps/ErpCity/scripts.pory"
	emote_exclamation_mark
# 237 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 241 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_1:
# 241 "data/maps/ErpCity/scripts.pory"
	walk_down
# 241 "data/maps/ErpCity/scripts.pory"
	face_player
	step_end

# 261 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_2:
# 261 "data/maps/ErpCity/scripts.pory"
	walk_down
	step_end

# 266 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_3:
# 266 "data/maps/ErpCity/scripts.pory"
	walk_up
	step_end

ErpCity_Sign_Welcome_Text_0:
# 36 "data/maps/ErpCity/scripts.pory"
	.string "ERPUS CITY\p"
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
	.string "I traveled here from Meestrech just to\n"
	.string "gaze at that lake over there!\p"
	.string "The water is so calm and clear it looks\n"
	.string "like a mirror.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_0:
# 70 "data/maps/ErpCity/scripts.pory"
	.string "Prof. Birds$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_1:
# 71 "data/maps/ErpCity/scripts.pory"
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
# 81 "data/maps/ErpCity/scripts.pory"
	.string ".....wait a second....\p"
	.string ".....maybe this little slob can help me to\n"
	.string "get some data...\p"
	.string "...that strange anomaly....\p"
	.string ".....yes a very good idea Jari, very\n"
	.string "smart....$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_3:
# 88 "data/maps/ErpCity/scripts.pory"
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
# 94 "data/maps/ErpCity/scripts.pory"
	.string "You have received the Pokédex.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_5:
# 99 "data/maps/ErpCity/scripts.pory"
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
# 105 "data/maps/ErpCity/scripts.pory"
	.string "THROW THESE MOTHERFUCKERS, AND THE\n"
	.string "WORLD WILL BE MINE...\p"
	.string "...I mean ours...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_7:
# 117 "data/maps/ErpCity/scripts.pory"
	.string "Barry$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_8:
# 118 "data/maps/ErpCity/scripts.pory"
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
# 125 "data/maps/ErpCity/scripts.pory"
	.string "...\p"
	.string "YOU??\p"
	.string "A POKEMON MASTER?\p"
	.string "DON'T MAKE ME LAUGH.\p"
	.string "I WILL TAKE EVERY CHANCE TO PREVENT\n"
	.string "THAT FROM HAPPENING!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_10:
# 142 "data/maps/ErpCity/scripts.pory"
	.string "...I'd probably should search for\n"
	.string "another intern right now...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_11:
# 150 "data/maps/ErpCity/scripts.pory"
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
	.string "...I think it is safe to come out now\n"
	.string "{STR_VAR_1}, lets get out of here!$"

ErpCity_ProfessorBirds_After_Speech_Text_0:
# 177 "data/maps/ErpCity/scripts.pory"
	.string "WELL, WHAT ARE YOU WAITING FOR?\p"
	.string "GET THAT DATA ON THAT GOLDEN KRABBY\n"
	.string "FOR ME... I MEAN US.$"

ErpCity_Mispoes_Miauw_Text_0:
# 184 "data/maps/ErpCity/scripts.pory"
	.string "Mispoes$"

ErpCity_Mispoes_Miauw_Text_1:
# 185 "data/maps/ErpCity/scripts.pory"
	.string "Miaaaauw... KSSSSJSJJGGGG$"

ErpCity_Lab_Sign_Text_0:
# 192 "data/maps/ErpCity/scripts.pory"
	.string "Professor Birds's Lab$"

ErpCity_Hiker_Cave_Text_0:
# 201 "data/maps/ErpCity/scripts.pory"
	.string "The cave is not accessible at this time.\p"
	.string "Recent tremors from a unknown source\n"
	.string "have caused massive rock slides.\p"
	.string "The path is too dangerous.$"

ErpCity_Cave_Sign_Text_0:
# 208 "data/maps/ErpCity/scripts.pory"
	.string "A large map with a labyrint of routes\n"
	.string "going through the cave.\p"
	.string "Most of them are crossed out.$"

ErpCity_Trigger_Stopplayer_Text_0:
# 215 "data/maps/ErpCity/scripts.pory"
	.string "Wandering without any pokemon might be\n"
	.string "dangerous....$"

ErpCity_Trigger_Stopplayer2_Text_0:
# 227 "data/maps/ErpCity/scripts.pory"
	.string "Mom said the lab was up north I think...$"

ErpCity_Receive_Running_Shoes_Text_0:
# 243 "data/maps/ErpCity/scripts.pory"
	.string "Mom$"

ErpCity_Receive_Running_Shoes_Text_1:
# 244 "data/maps/ErpCity/scripts.pory"
	.string "Honey, I almost forgot!\p"
	.string "If you want to make an impression on\n"
	.string "the professor you should wear some\l"
	.string "different shoes.\p"
	.string "As a surprise I've bought a new pair for\n"
	.string "you!$"

ErpCity_Receive_Running_Shoes_Text_2:
# 249 "data/maps/ErpCity/scripts.pory"
	.string "You have received running shoes from\n"
	.string "Mom.$"

ErpCity_Receive_Running_Shoes_Text_3:
# 252 "data/maps/ErpCity/scripts.pory"
	.string "Now if you press your 'B muscle' while\n"
	.string "moving, you will sprint!$"

ErpCity_Receive_Running_Shoes_Text_4:
# 255 "data/maps/ErpCity/scripts.pory"
	.string "Look at you, all nice and shiny.\p"
	.string "Say hello to the professor for me.\p"
	.string "Have fun!$"

ErpCity_Receive_Running_Shoes_Text_5:
# 258 "data/maps/ErpCity/scripts.pory"
	.string "Well, go on!\n"
	.string "Don't be shy!$"

ErpCity_Receive_Running_Shoes_Text_6:
# 264 "data/maps/ErpCity/scripts.pory"
	.string "There you go!\n"
	.string "I'll prepare some potatoes, meat and\l"
	.string "vegetables for you when you get back,\l"
	.string "your favorite!$"

ErpCity_Receive_Running_Shoes_Text_7:
# 276 "data/maps/ErpCity/scripts.pory"
	.string "Better get to the lab, Mom probably\n"
	.string "won't let me in if I don't try.$"

ErpCity_Sign_Mailbox_ProfBirds_Text_0:
# 287 "data/maps/ErpCity/scripts.pory"
	.string "This mailbox seems to be filled to the\n"
	.string "brim, somebody should clean this thing\l"
	.string "out.$"

ErpCity_Sign_Mailbox_Starthouse_Text_0:
# 294 "data/maps/ErpCity/scripts.pory"
	.string "Home.$"

ErpCity_Sign_Mailbox_BarryHouse_Text_0:
# 301 "data/maps/ErpCity/scripts.pory"
	.string "Family Stonebakers's house.$"

ErpCity_Sign_Mailbox_JanVogels_Text_0:
# 308 "data/maps/ErpCity/scripts.pory"
	.string "Family Birds's house.$"
