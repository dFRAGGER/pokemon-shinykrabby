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
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_0, MSGBOX_AUTOCLOSE
# 27 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 28 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 29 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3
# 30 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 31 "data/maps/ErpCity/scripts.pory"
	delay 60
# 32 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 33 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3
# 34 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_1, MSGBOX_AUTOCLOSE
# 35 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 36 "data/maps/ErpCity/scripts.pory"
	delay 40
# 37 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 38 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4
# 39 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_2
# 40 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 41 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 42 "data/maps/ErpCity/scripts.pory"
	special EnableNationalPokedex
# 43 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 44 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_3
# 45 "data/maps/ErpCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 46 "data/maps/ErpCity/scripts.pory"
	waitfanfare
# 47 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 48 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_4
# 49 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 50 "data/maps/ErpCity/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 51 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 52 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_5
# 53 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 54 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 55 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3
# 56 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3
# 57 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5
# 58 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5
# 59 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 60 "data/maps/ErpCity/scripts.pory"
	delay 40
# 61 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6
# 62 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7
# 63 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 64 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_6
# 65 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 66 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6
# 67 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7
# 68 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 69 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_7
# 70 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 71 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 72 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8
# 73 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9
# 74 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 75 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 76 "data/maps/ErpCity/scripts.pory"
	removeobject 5
# 77 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_KICKED_OUT_LAB_CONVO
# 78 "data/maps/ErpCity/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 2
# 79 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_INTERN_BIRDS_LAB
# 80 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_8, MSGBOX_AUTOCLOSE
# 81 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 82 "data/maps/ErpCity/scripts.pory"
	delay 40
# 83 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5
# 84 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 85 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_9, MSGBOX_AUTOCLOSE
# 86 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 87 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11
# 88 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 89 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12
# 90 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 91 "data/maps/ErpCity/scripts.pory"
	removeobject 2
# 92 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5
# 93 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 94 "data/maps/ErpCity/scripts.pory"
	delay 60
# 95 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7
# 96 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 97 "data/maps/ErpCity/scripts.pory"
	delay 60
# 98 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9
# 99 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 100 "data/maps/ErpCity/scripts.pory"
	delay 60
# 101 "data/maps/ErpCity/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 102 "data/maps/ErpCity/scripts.pory"
	special BufferMonNickname
# 103 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_10, MSGBOX_AUTOCLOSE
# 104 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_ProfessorBirds_After_Speech::
# 108 "data/maps/ErpCity/scripts.pory"
	lockall
# 109 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_After_Speech_Text_0
# 110 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 111 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Mispoes_Miauw::
# 115 "data/maps/ErpCity/scripts.pory"
	lockall
# 116 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Mispoes_Miauw_Text_0
# 117 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 118 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Lab_Sign::
# 122 "data/maps/ErpCity/scripts.pory"
	lockall
# 123 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Lab_Sign_Text_0
# 124 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 125 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Hiker_Cave::
# 129 "data/maps/ErpCity/scripts.pory"
	lockall
# 130 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_Hiker_Cave_Movement_0
# 132 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Hiker_Cave_Text_0
# 133 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 134 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Cave_Sign::
# 138 "data/maps/ErpCity/scripts.pory"
	lockall
# 139 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Cave_Sign_Text_0
# 140 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 141 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Trigger_Stopplayer::
# 145 "data/maps/ErpCity/scripts.pory"
	lockall
# 146 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Trigger_Stopplayer_Text_0
# 147 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Move_Stopplayer
# 148 "data/maps/ErpCity/scripts.pory"
	waitmovement 0
# 149 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


# 152 "data/maps/ErpCity/scripts.pory"
ErpCity_Move_Stopplayer:
# 153 "data/maps/ErpCity/scripts.pory"
	walk_right
	step_end

ErpCity_Trigger_Stopplayer2::
# 157 "data/maps/ErpCity/scripts.pory"
	lockall
# 158 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Trigger_Stopplayer2_Text_0
# 159 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Trigger_Stopplayer2_Movement_0
# 160 "data/maps/ErpCity/scripts.pory"
	waitmovement 0
# 161 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Receive_Running_Shoes::
# 165 "data/maps/ErpCity/scripts.pory"
	lockall
# 166 "data/maps/ErpCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RUNNING_SHOES, ErpCity_Receive_Running_Shoes_1
# 200 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_5
# 201 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 202 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_2
# 203 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 204 "data/maps/ErpCity/scripts.pory"
	releaseall
	end

ErpCity_Receive_Running_Shoes_1:
# 167 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 168 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_0
# 169 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 170 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_MOM_SHOES
# 171 "data/maps/ErpCity/scripts.pory"
	addobject 4
# 172 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_Receive_Running_Shoes_Movement_1
# 173 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 174 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_0
# 175 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 176 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 177 "data/maps/ErpCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 178 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_1
# 179 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 180 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_2, MSGBOX_AUTOCLOSE
# 181 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 182 "data/maps/ErpCity/scripts.pory"
	delay 60
# 183 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_3, MSGBOX_AUTOCLOSE
# 184 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 185 "data/maps/ErpCity/scripts.pory"
	delay 40
# 186 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_2
# 187 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 188 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_4
# 189 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 190 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_Receive_Running_Shoes_Movement_3
# 191 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 192 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_MOM_SHOES
# 193 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 194 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_INTERN_BIRDS_LAB
# 195 "data/maps/ErpCity/scripts.pory"
	removeobject 4
# 196 "data/maps/ErpCity/scripts.pory"
	releaseall
	end


ErpCity_Sign_Mailbox_ProfBirds::
# 210 "data/maps/ErpCity/scripts.pory"
	lock
# 211 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_ProfBirds_Text_0
# 212 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 213 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_Starthouse::
# 217 "data/maps/ErpCity/scripts.pory"
	lock
# 218 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_Starthouse_Text_0
# 219 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 220 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_BarryHouse::
# 224 "data/maps/ErpCity/scripts.pory"
	lock
# 225 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_BarryHouse_Text_0
# 226 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 227 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_JanVogels::
# 231 "data/maps/ErpCity/scripts.pory"
	lock
# 232 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_JanVogels_Text_0
# 233 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 234 "data/maps/ErpCity/scripts.pory"
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

# 29 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3:
# 29 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
	step_end

# 38 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4:
# 38 "data/maps/ErpCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 57 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5:
# 57 "data/maps/ErpCity/scripts.pory"
	face_right
	step_end

# 61 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6:
# 61 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 61 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 62 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7:
# 62 "data/maps/ErpCity/scripts.pory"
	face_down
	step_end

# 72 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8:
# 72 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
# 72 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 73 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9:
# 73 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 74 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10:
# 74 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 74 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 74 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 74 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 74 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 74 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 74 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 74 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
	step_end

# 87 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11:
# 87 "data/maps/ErpCity/scripts.pory"
	jump_left
# 87 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 89 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12:
# 89 "data/maps/ErpCity/scripts.pory"
	walk_right
# 89 "data/maps/ErpCity/scripts.pory"
	walk_up
	step_end

# 130 "data/maps/ErpCity/scripts.pory"
ErpCity_Hiker_Cave_Movement_0:
# 130 "data/maps/ErpCity/scripts.pory"
	face_player
	step_end

# 159 "data/maps/ErpCity/scripts.pory"
ErpCity_Trigger_Stopplayer2_Movement_0:
# 159 "data/maps/ErpCity/scripts.pory"
	walk_left
	step_end

# 168 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_0:
# 168 "data/maps/ErpCity/scripts.pory"
	emote_exclamation_mark
# 168 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 172 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_1:
# 172 "data/maps/ErpCity/scripts.pory"
	walk_down
# 172 "data/maps/ErpCity/scripts.pory"
	face_player
	step_end

# 186 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_2:
# 186 "data/maps/ErpCity/scripts.pory"
	walk_down
	step_end

# 190 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_3:
# 190 "data/maps/ErpCity/scripts.pory"
	walk_up
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Text_0:
# 26 "data/maps/ErpCity/scripts.pory"
	.string "{COLOR GREEN}Prof. Birds: {COLOR DARK_GRAY}WHO DO YOU THINK YOU ARE?\n"
	.string "TAYLOR SWIFT OR SOMETHING?\p"
	.string "Actually.... I love Taylor Swift hehe..\n"
	.string "ANYWAYS!!\p"
	.string "I TOLD YOU TO NOT SNIFF AROUND IN MY\n"
	.string "SECRET LA... I MEAN STORAGE ROOM!!\p"
	.string "...YOU DIDN'T STEAL ANYTHING RIGHT?\n"
	.string "RIGHT??!!\p"
	.string "IT DOESN'T REALLY MATTER ANYWAYS, YOU\n"
	.string "ARE FIRED!!\p"
	.string "I GOT MY SQUIRKY LITTLE INTERN CALLED\n"
	.string "BARRY ALREADY, HE IS LIVING THE\l"
	.string "DREAM...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_1:
# 34 "data/maps/ErpCity/scripts.pory"
	.string ".....wait a second....\p"
	.string ".....maybe this little slob can help me to\n"
	.string "get some data....\p"
	.string ".....yes a very good idea Jari, very\n"
	.string "smart....$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_2:
# 39 "data/maps/ErpCity/scripts.pory"
	.string ".....DID I SAY THAT OUT LOUD?\p"
	.string "ARGH ANYWAYS, HOW ABOUT I REHIRE YOU\n"
	.string "AGAIN TO BECOME MY DATA HOARDER....\p"
	.string "I MEAN MY FELLOW RESEARCHER OFCOURSE!\n"
	.string "MY BELOVED PARTNER!\p"
	.string "TO BECOME A REAL POKEMON MASTER WE... I\n"
	.string "MEAN YOU... NEED TO CATCH EVERY POKEMON\p"
	.string "AND SCAN THEM WITH THIS LITTLE\n"
	.string "DEVICE....$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_3:
# 44 "data/maps/ErpCity/scripts.pory"
	.string "You have received the Pokédex.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_4:
# 48 "data/maps/ErpCity/scripts.pory"
	.string "THIS DEVICE CAN COLLECT VITAL DATA ON\n"
	.string "POKEMON HABITATS, MIGRATION PATTERNS\l"
	.string "AND ...uh...\p"
	.string "UNIQUE GENOMIC SIGNATURES... FOR THE\n"
	.string "PIGS... you know...\p"
	.string "AND THIS WAY I WILL EXTRACT ALL\n"
	.string "NECESSARY INFORMATION FOR MY BELOVED\l"
	.string "SECRET TECHNOLO.... SENSORS FOR\l"
	.string "RESPONSIBLE PIG FARMING.\p"
	.string "NOW GO, AND DON'T COME BACK BEFORE YOU\n"
	.string "HAVE SCANNE... I MEAN CAUGHT SOME\l"
	.string "POKEMONS.\p"
	.string "WHAT DO YOU MEAN... HOW?\p"
	.string "JUST USE POKEBALLS....\p"
	.string "A POKEMON MASTER HAHAHA...\p"
	.string "YOU GOT TO BE JOKING$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_5:
# 52 "data/maps/ErpCity/scripts.pory"
	.string "THROW THESE MOTHERFUCKERS, AND THE\n"
	.string "WORLD WILL BE MINE... I MEAN OURS$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_6:
# 64 "data/maps/ErpCity/scripts.pory"
	.string "{COLOR BLUE}Barry: {COLOR DARK_GRAY}HE BREAKS INTO YOUR LAB AND\n"
	.string "GETS A POKEDEX, POKEBALLS AND A\l"
	.string "MISSION TO BECOME A POKEMON MASTER?\p"
	.string "WHAT DID I GET?\p"
	.string "A FUCKING MAGIKARP?\p"
	.string "THE MOST USELESS POKEMON EVER IN\n"
	.string "EXISTENCE?\p"
	.string "I QUIT!!\p"
	.string "FUCK YOU!!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_7:
# 69 "data/maps/ErpCity/scripts.pory"
	.string "{COLOR BLUE}Barry: {COLOR DARK_GRAY}...\p"
	.string "YOU??\p"
	.string "A POKEMON MASTER?\p"
	.string "DON'T LET ME LAUGH\p"
	.string "I WILL TAKE EVERY CHANCE TO PREVENT\n"
	.string "THAT FROM HAPPENING!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_8:
# 80 "data/maps/ErpCity/scripts.pory"
	.string "{COLOR GREEN}Prof. Birds: {COLOR DARK_GRAY}...I'd probably should\n"
	.string "search for another intern right now...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_9:
# 85 "data/maps/ErpCity/scripts.pory"
	.string "{COLOR GREEN}Prof. Birds: {COLOR DARK_GRAY}OH BY THE WAY... I HAVE AN\n"
	.string "OLD FRIEND IN THE NEXT TOWN WHO COULD\l"
	.string "HELP YOU CATCH A WONDERFULL SPECIE...\p"
	.string "HIS NAME IS JAKUB... HE USED TO LIVE IN\n"
	.string "THIS TOWN... BUT THE TRAITOR MOVED TO\l"
	.string "MAASJE...\p"
	.string "NOW WHAT ARE YOU WAITING FOR!?\p"
	.string "GET THAT DATA FOR ME... I MEAN US.\p"
	.string "AND STAY AWAY FROM MISPOES...\p"
	.string "HE DOESN'T LIKE ME...\p"
	.string "I MEAN YOU OFCOURSE!!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_10:
# 103 "data/maps/ErpCity/scripts.pory"
	.string "...I think it is safe to come out now\n"
	.string "{STR_VAR_1}, lets get out of here!$"

ErpCity_ProfessorBirds_After_Speech_Text_0:
# 109 "data/maps/ErpCity/scripts.pory"
	.string "WELL, WHAT ARE YOU WAITING FOR?\p"
	.string "GET THAT DATA FOR ME... I MEAN US.$"

ErpCity_Mispoes_Miauw_Text_0:
# 116 "data/maps/ErpCity/scripts.pory"
	.string "{COLOR RED}Mispoes: {COLOR DARK_GRAY}Miaaaauw... KSSSSJSJJGGGG$"

ErpCity_Lab_Sign_Text_0:
# 123 "data/maps/ErpCity/scripts.pory"
	.string "Professor Birds's Lab$"

ErpCity_Hiker_Cave_Text_0:
# 132 "data/maps/ErpCity/scripts.pory"
	.string "{COLOR RED}Hiker: {COLOR DARK_GRAY}The cave is not accessible at\n"
	.string "this time.\p"
	.string "Recent tremors from a unknown source\n"
	.string "have caused massive rock slides.\p"
	.string "The path is too dangerous.$"

ErpCity_Cave_Sign_Text_0:
# 139 "data/maps/ErpCity/scripts.pory"
	.string "A large map with a labyrint of routes\n"
	.string "going through the cave.\p"
	.string "Most of them are crossed out.$"

ErpCity_Trigger_Stopplayer_Text_0:
# 146 "data/maps/ErpCity/scripts.pory"
	.string "Wandering without any pokemon might be\n"
	.string "dangerous....$"

ErpCity_Trigger_Stopplayer2_Text_0:
# 158 "data/maps/ErpCity/scripts.pory"
	.string "Mom said the lab was up north I think...$"

ErpCity_Receive_Running_Shoes_Text_0:
# 174 "data/maps/ErpCity/scripts.pory"
	.string "{COLOR RED}Mom: {COLOR DARK_GRAY}Honey, I almost forgot!\p"
	.string "If you want to make an impression on\n"
	.string "the professor you should wear some\l"
	.string "different shoes.\p"
	.string "As a surprise I've bought a new pair for\n"
	.string "you!$"

ErpCity_Receive_Running_Shoes_Text_1:
# 178 "data/maps/ErpCity/scripts.pory"
	.string "You have received running shoes from\n"
	.string "Mom.$"

ErpCity_Receive_Running_Shoes_Text_2:
# 180 "data/maps/ErpCity/scripts.pory"
	.string "Look at you, all nice and shiny.\p"
	.string "Say hello to the professor for me.\p"
	.string "Have fun!$"

ErpCity_Receive_Running_Shoes_Text_3:
# 183 "data/maps/ErpCity/scripts.pory"
	.string "Well, go on!\n"
	.string "Don't be shy!$"

ErpCity_Receive_Running_Shoes_Text_4:
# 188 "data/maps/ErpCity/scripts.pory"
	.string "There you go!\n"
	.string "I'll prepare some potatoes, meat and\l"
	.string "vegetables for you when you get back,\l"
	.string "your favorite!$"

ErpCity_Receive_Running_Shoes_Text_5:
# 200 "data/maps/ErpCity/scripts.pory"
	.string "Better get to the lab, Mom probably\n"
	.string "won't let me in if I don't try.$"

ErpCity_Sign_Mailbox_ProfBirds_Text_0:
# 211 "data/maps/ErpCity/scripts.pory"
	.string "This mailbox seems to be filled to the\n"
	.string "brim, somebody should clean this thing\l"
	.string "out.$"

ErpCity_Sign_Mailbox_Starthouse_Text_0:
# 218 "data/maps/ErpCity/scripts.pory"
	.string "{PLAYER}'s house.$"

ErpCity_Sign_Mailbox_BarryHouse_Text_0:
# 225 "data/maps/ErpCity/scripts.pory"
	.string "Family Stonebakers's house.$"

ErpCity_Sign_Mailbox_JanVogels_Text_0:
# 232 "data/maps/ErpCity/scripts.pory"
	.string "Family Birds's house.$"
