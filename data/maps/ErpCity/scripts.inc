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


ErpCity_ProfessorBirds_Speech_Pokedex::
# 18 "data/maps/ErpCity/scripts.pory"
	lockall
# 19 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_0
# 20 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_KICKED_OUT_LAB_CONVO
# 21 "data/maps/ErpCity/scripts.pory"
	addobject 2
# 22 "data/maps/ErpCity/scripts.pory"
	addobject 5
# 23 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_1
# 24 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_2
# 25 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 26 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 27 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_1, MSGBOX_AUTOCLOSE
# 28 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 29 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 30 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3
# 31 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 32 "data/maps/ErpCity/scripts.pory"
	delay 120
# 33 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4
# 34 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 35 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5
# 36 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 37 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_2, MSGBOX_AUTOCLOSE
# 38 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 39 "data/maps/ErpCity/scripts.pory"
	delay 40
# 40 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 41 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6
# 42 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7
# 43 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 44 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_3
# 45 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 46 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 47 "data/maps/ErpCity/scripts.pory"
	special EnableNationalPokedex
# 48 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 49 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 50 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_4
# 51 "data/maps/ErpCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 52 "data/maps/ErpCity/scripts.pory"
	waitfanfare
# 53 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 54 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 55 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_5
# 56 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 57 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 58 "data/maps/ErpCity/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 59 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 60 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 61 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_6, MSGBOX_AUTOCLOSE
# 62 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 63 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 64 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8
# 65 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3
# 66 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9
# 67 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9
# 68 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 69 "data/maps/ErpCity/scripts.pory"
	delay 60
# 70 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 71 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11
# 72 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 73 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_7
# 74 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_8
# 75 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 76 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 77 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 78 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12
# 79 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 80 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_7
# 81 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_9, MSGBOX_AUTOCLOSE
# 82 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 83 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 84 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_13
# 85 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_14
# 86 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 87 "data/maps/ErpCity/scripts.pory"
	removeobject 5
# 88 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_15
# 89 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 90 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_KICKED_OUT_LAB_CONVO
# 91 "data/maps/ErpCity/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 2
# 92 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_INTERN_BIRDS_LAB
# 93 "data/maps/ErpCity/scripts.pory"
	delay 120
# 94 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 95 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_10, MSGBOX_AUTOCLOSE
# 96 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 97 "data/maps/ErpCity/scripts.pory"
	delay 40
# 98 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_16
# 99 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 100 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9
# 101 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 102 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 103 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_11, MSGBOX_AUTOCLOSE
# 104 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 105 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17
# 106 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 107 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_18
# 108 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 109 "data/maps/ErpCity/scripts.pory"
	removeobject 2
# 110 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9
# 111 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 112 "data/maps/ErpCity/scripts.pory"
	delay 60
# 113 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11
# 114 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 115 "data/maps/ErpCity/scripts.pory"
	delay 60
# 116 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7
# 117 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 118 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_JACOB_SIENNA
# 119 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_INTERN_BIRDS_LAB
# 120 "data/maps/ErpCity/scripts.pory"
	delay 60
# 121 "data/maps/ErpCity/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 122 "data/maps/ErpCity/scripts.pory"
	special BufferMonNickname
# 123 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_12, MSGBOX_AUTOCLOSE
# 124 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_ProfessorBirds_After_Speech::
# 128 "data/maps/ErpCity/scripts.pory"
	lockall
# 129 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 130 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_After_Speech_Text_0
# 131 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 132 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Mispoes_Miauw::
# 136 "data/maps/ErpCity/scripts.pory"
	lockall
# 137 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Mispoes_Miauw_Text_0
# 138 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Mispoes_Miauw_Text_1
# 139 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 140 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Lab_Sign::
# 144 "data/maps/ErpCity/scripts.pory"
	lockall
# 145 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Lab_Sign_Text_0
# 146 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 147 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Hiker_Cave::
# 151 "data/maps/ErpCity/scripts.pory"
	lockall
# 152 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_Hiker_Cave_Movement_0
# 154 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Hiker_Cave_Text_0
# 155 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 156 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Cave_Sign::
# 160 "data/maps/ErpCity/scripts.pory"
	lockall
# 161 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Cave_Sign_Text_0
# 162 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 163 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Trigger_Stopplayer::
# 167 "data/maps/ErpCity/scripts.pory"
	lockall
# 168 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Trigger_Stopplayer_Text_0
# 169 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Move_Stopplayer
# 170 "data/maps/ErpCity/scripts.pory"
	waitmovement 0
# 171 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


# 174 "data/maps/ErpCity/scripts.pory"
ErpCity_Move_Stopplayer:
# 175 "data/maps/ErpCity/scripts.pory"
	walk_right
	step_end

ErpCity_Trigger_Stopplayer2::
# 179 "data/maps/ErpCity/scripts.pory"
	lockall
# 180 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Trigger_Stopplayer2_Text_0
# 181 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Trigger_Stopplayer2_Movement_0
# 182 "data/maps/ErpCity/scripts.pory"
	waitmovement 0
# 183 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Receive_Running_Shoes::
# 187 "data/maps/ErpCity/scripts.pory"
	lockall
# 188 "data/maps/ErpCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RUNNING_SHOES, ErpCity_Receive_Running_Shoes_1
# 229 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_7
# 230 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 231 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_2
# 232 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 233 "data/maps/ErpCity/scripts.pory"
	releaseall
	end

ErpCity_Receive_Running_Shoes_1:
# 189 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 190 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_0
# 191 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 192 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_MOM_SHOES
# 193 "data/maps/ErpCity/scripts.pory"
	addobject 4
# 194 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_Receive_Running_Shoes_Movement_1
# 195 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 196 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
# 197 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_1
# 198 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 199 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 200 "data/maps/ErpCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 201 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 202 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_2
# 203 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 204 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 205 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_3
# 206 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 207 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
# 208 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_4, MSGBOX_AUTOCLOSE
# 209 "data/maps/ErpCity/scripts.pory"
	delay 60
# 210 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
# 211 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_5, MSGBOX_AUTOCLOSE
# 212 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 213 "data/maps/ErpCity/scripts.pory"
	delay 40
# 214 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_2
# 215 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 216 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
# 217 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_6
# 218 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 219 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_Receive_Running_Shoes_Movement_3
# 220 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 221 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_MOM_SHOES
# 222 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 223 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_INTERN_BIRDS_LAB
# 224 "data/maps/ErpCity/scripts.pory"
	removeobject 4
# 225 "data/maps/ErpCity/scripts.pory"
	releaseall
	end


ErpCity_Sign_Mailbox_ProfBirds::
# 239 "data/maps/ErpCity/scripts.pory"
	lock
# 240 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_ProfBirds_Text_0
# 241 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 242 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_Starthouse::
# 246 "data/maps/ErpCity/scripts.pory"
	lock
# 247 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_Starthouse_Text_0
# 248 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 249 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_BarryHouse::
# 253 "data/maps/ErpCity/scripts.pory"
	lock
# 254 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_BarryHouse_Text_0
# 255 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 256 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_JanVogels::
# 260 "data/maps/ErpCity/scripts.pory"
	lock
# 261 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_JanVogels_Text_0
# 262 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 263 "data/maps/ErpCity/scripts.pory"
	release
	return


# 19 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_0:
# 19 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 19 "data/maps/ErpCity/scripts.pory"
	jump_left
# 19 "data/maps/ErpCity/scripts.pory"
	face_right
	step_end

# 23 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_1:
# 23 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 23 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
	step_end

# 24 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_2:
# 24 "data/maps/ErpCity/scripts.pory"
	walk_down
# 24 "data/maps/ErpCity/scripts.pory"
	walk_down
# 24 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 30 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3:
# 30 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
	step_end

# 33 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4:
# 33 "data/maps/ErpCity/scripts.pory"
	walk_slow_right
# 33 "data/maps/ErpCity/scripts.pory"
	walk_slow_right
	step_end

# 35 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5:
# 35 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 41 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6:
# 41 "data/maps/ErpCity/scripts.pory"
	emote_exclamation_mark
# 41 "data/maps/ErpCity/scripts.pory"
	walk_left
# 41 "data/maps/ErpCity/scripts.pory"
	walk_left
	step_end

# 42 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7:
# 42 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 64 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8:
# 64 "data/maps/ErpCity/scripts.pory"
	emote_x
	step_end

# 66 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9:
# 66 "data/maps/ErpCity/scripts.pory"
	face_right
	step_end

# 70 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10:
# 70 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 70 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 71 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11:
# 71 "data/maps/ErpCity/scripts.pory"
	face_down
	step_end

# 78 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12:
# 78 "data/maps/ErpCity/scripts.pory"
	face_down
# 78 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
	step_end

# 84 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_13:
# 84 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
# 84 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 85 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_14:
# 85 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 85 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 85 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 85 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 85 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 85 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 85 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 85 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
	step_end

# 88 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_15:
# 88 "data/maps/ErpCity/scripts.pory"
	walk_down
# 88 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 98 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_16:
# 98 "data/maps/ErpCity/scripts.pory"
	walk_up
# 98 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 105 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17:
# 105 "data/maps/ErpCity/scripts.pory"
	jump_left
# 105 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 107 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_18:
# 107 "data/maps/ErpCity/scripts.pory"
	walk_right
# 107 "data/maps/ErpCity/scripts.pory"
	walk_up
	step_end

# 152 "data/maps/ErpCity/scripts.pory"
ErpCity_Hiker_Cave_Movement_0:
# 152 "data/maps/ErpCity/scripts.pory"
	face_player
	step_end

# 181 "data/maps/ErpCity/scripts.pory"
ErpCity_Trigger_Stopplayer2_Movement_0:
# 181 "data/maps/ErpCity/scripts.pory"
	walk_left
	step_end

# 190 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_0:
# 190 "data/maps/ErpCity/scripts.pory"
	emote_exclamation_mark
# 190 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 194 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_1:
# 194 "data/maps/ErpCity/scripts.pory"
	walk_down
# 194 "data/maps/ErpCity/scripts.pory"
	face_player
	step_end

# 214 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_2:
# 214 "data/maps/ErpCity/scripts.pory"
	walk_down
	step_end

# 219 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_3:
# 219 "data/maps/ErpCity/scripts.pory"
	walk_up
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Text_0:
# 26 "data/maps/ErpCity/scripts.pory"
	.string "Prof. Birds$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_1:
# 27 "data/maps/ErpCity/scripts.pory"
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
# 37 "data/maps/ErpCity/scripts.pory"
	.string ".....wait a second....\p"
	.string ".....maybe this little slob can help me to\n"
	.string "get some data....\p"
	.string ".....yes a very good idea Jari, very\n"
	.string "smart....$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_3:
# 44 "data/maps/ErpCity/scripts.pory"
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
# 50 "data/maps/ErpCity/scripts.pory"
	.string "You have received the Pokédex.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_5:
# 55 "data/maps/ErpCity/scripts.pory"
	.string "THIS DEVICE CAN COLLECT VITAL DATA ON\n"
	.string "POKEMON HABITATS, MIGRATION PATTERNS\l"
	.string "AND ...uh...\p"
	.string "...unique genomic signatures... for the\n"
	.string "pigs... you know...\p"
	.string "AND THIS WAY I WILL EXTRACT ALL\n"
	.string "NECESSARY INFORMATION FOR MY BELOVED\l"
	.string "SECRET TECHNOLO....\p"
	.string "...sensors for responsible pig farming...\p"
	.string "NOW GO, AND DON'T COME BACK BEFORE YOU\n"
	.string "HAVE SCANNE...\p"
	.string "...caught some Pokémons...\p"
	.string "...\p"
	.string "WHAT DO YOU MEAN... HOW?\p"
	.string "JUST USE POKEBALLS....\p"
	.string "A POKEMON MASTER HAHAHA...\p"
	.string "you got to be joking...\p"
	.string "HERE, CATCH THESE!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_6:
# 61 "data/maps/ErpCity/scripts.pory"
	.string "THROW THESE MOTHERFUCKERS, AND THE\n"
	.string "WORLD WILL BE MINE...\p"
	.string "...I mean ours...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_7:
# 73 "data/maps/ErpCity/scripts.pory"
	.string "Barry$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_8:
# 74 "data/maps/ErpCity/scripts.pory"
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
# 81 "data/maps/ErpCity/scripts.pory"
	.string "...\p"
	.string "YOU??\p"
	.string "A POKEMON MASTER?\p"
	.string "DON'T MAKE ME LAUGH.\p"
	.string "I WILL TAKE EVERY CHANCE TO PREVENT\n"
	.string "THAT FROM HAPPENING!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_10:
# 95 "data/maps/ErpCity/scripts.pory"
	.string "...I'd probably should search for\n"
	.string "another intern right now...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_11:
# 103 "data/maps/ErpCity/scripts.pory"
	.string "OH BY THE WAY... I HAVE AN OLD FRIEND IN\n"
	.string "THE NEXT TOWN WHO COULD HELP YOU CATCH\l"
	.string "A WONDERFULL SPECIE...\p"
	.string "HIS NAME IS {COLOR GREEN}Jacob{COLOR DARK_GRAY}...\n"
	.string "He used to live in this town...\p"
	.string "...but the traitor moved to {COLOR RED}Mestreech{COLOR DARK_GRAY}\n"
	.string "just east of here...\p"
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
# 123 "data/maps/ErpCity/scripts.pory"
	.string "...I think it is safe to come out now\n"
	.string "{STR_VAR_1}, lets get out of here!$"

ErpCity_ProfessorBirds_After_Speech_Text_0:
# 130 "data/maps/ErpCity/scripts.pory"
	.string "WELL, WHAT ARE YOU WAITING FOR?\p"
	.string "GET THAT DATA FOR ME... I MEAN US.$"

ErpCity_Mispoes_Miauw_Text_0:
# 137 "data/maps/ErpCity/scripts.pory"
	.string "Mispoes$"

ErpCity_Mispoes_Miauw_Text_1:
# 138 "data/maps/ErpCity/scripts.pory"
	.string "Miaaaauw... KSSSSJSJJGGGG$"

ErpCity_Lab_Sign_Text_0:
# 145 "data/maps/ErpCity/scripts.pory"
	.string "Professor Birds's Lab$"

ErpCity_Hiker_Cave_Text_0:
# 154 "data/maps/ErpCity/scripts.pory"
	.string "The cave is not accessible at this time.\p"
	.string "Recent tremors from a unknown source\n"
	.string "have caused massive rock slides.\p"
	.string "The path is too dangerous.$"

ErpCity_Cave_Sign_Text_0:
# 161 "data/maps/ErpCity/scripts.pory"
	.string "A large map with a labyrint of routes\n"
	.string "going through the cave.\p"
	.string "Most of them are crossed out.$"

ErpCity_Trigger_Stopplayer_Text_0:
# 168 "data/maps/ErpCity/scripts.pory"
	.string "Wandering without any pokemon might be\n"
	.string "dangerous....$"

ErpCity_Trigger_Stopplayer2_Text_0:
# 180 "data/maps/ErpCity/scripts.pory"
	.string "Mom said the lab was up north I think...$"

ErpCity_Receive_Running_Shoes_Text_0:
# 196 "data/maps/ErpCity/scripts.pory"
	.string "Mom$"

ErpCity_Receive_Running_Shoes_Text_1:
# 197 "data/maps/ErpCity/scripts.pory"
	.string "Honey, I almost forgot!\p"
	.string "If you want to make an impression on\n"
	.string "the professor you should wear some\l"
	.string "different shoes.\p"
	.string "As a surprise I've bought a new pair for\n"
	.string "you!$"

ErpCity_Receive_Running_Shoes_Text_2:
# 202 "data/maps/ErpCity/scripts.pory"
	.string "You have received running shoes from\n"
	.string "Mom.$"

ErpCity_Receive_Running_Shoes_Text_3:
# 205 "data/maps/ErpCity/scripts.pory"
	.string "Now if you press your 'B muscle' while\n"
	.string "moving, you will sprint!$"

ErpCity_Receive_Running_Shoes_Text_4:
# 208 "data/maps/ErpCity/scripts.pory"
	.string "Look at you, all nice and shiny.\p"
	.string "Say hello to the professor for me.\p"
	.string "Have fun!$"

ErpCity_Receive_Running_Shoes_Text_5:
# 211 "data/maps/ErpCity/scripts.pory"
	.string "Well, go on!\n"
	.string "Don't be shy!$"

ErpCity_Receive_Running_Shoes_Text_6:
# 217 "data/maps/ErpCity/scripts.pory"
	.string "There you go!\n"
	.string "I'll prepare some potatoes, meat and\l"
	.string "vegetables for you when you get back,\l"
	.string "your favorite!$"

ErpCity_Receive_Running_Shoes_Text_7:
# 229 "data/maps/ErpCity/scripts.pory"
	.string "Better get to the lab, Mom probably\n"
	.string "won't let me in if I don't try.$"

ErpCity_Sign_Mailbox_ProfBirds_Text_0:
# 240 "data/maps/ErpCity/scripts.pory"
	.string "This mailbox seems to be filled to the\n"
	.string "brim, somebody should clean this thing\l"
	.string "out.$"

ErpCity_Sign_Mailbox_Starthouse_Text_0:
# 247 "data/maps/ErpCity/scripts.pory"
	.string "{PLAYER}'s house.$"

ErpCity_Sign_Mailbox_BarryHouse_Text_0:
# 254 "data/maps/ErpCity/scripts.pory"
	.string "Family Stonebakers's house.$"

ErpCity_Sign_Mailbox_JanVogels_Text_0:
# 261 "data/maps/ErpCity/scripts.pory"
	.string "Family Birds's house.$"
