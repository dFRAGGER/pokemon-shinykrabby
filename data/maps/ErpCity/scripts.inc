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
	setflag FLAG_SYS_NATIONAL_DEX
# 43 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_3
# 44 "data/maps/ErpCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 45 "data/maps/ErpCity/scripts.pory"
	waitfanfare
# 46 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 47 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_4
# 48 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 49 "data/maps/ErpCity/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 50 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 51 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_5
# 52 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 53 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 54 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3
# 55 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3
# 56 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5
# 57 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5
# 58 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 59 "data/maps/ErpCity/scripts.pory"
	delay 40
# 60 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6
# 61 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7
# 62 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 63 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_6
# 64 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 65 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6
# 66 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7
# 67 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 68 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_7
# 69 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 70 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 71 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8
# 72 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9
# 73 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 74 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 75 "data/maps/ErpCity/scripts.pory"
	removeobject 5
# 76 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_KICKED_OUT_LAB_CONVO
# 77 "data/maps/ErpCity/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 2
# 78 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_INTERN_BIRDS_LAB
# 79 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_8, MSGBOX_AUTOCLOSE
# 80 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 81 "data/maps/ErpCity/scripts.pory"
	delay 40
# 82 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5
# 83 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 84 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_9, MSGBOX_AUTOCLOSE
# 85 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 86 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11
# 87 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 88 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12
# 89 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 90 "data/maps/ErpCity/scripts.pory"
	removeobject 2
# 91 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5
# 92 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 93 "data/maps/ErpCity/scripts.pory"
	delay 60
# 94 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7
# 95 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 96 "data/maps/ErpCity/scripts.pory"
	delay 60
# 97 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9
# 98 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 99 "data/maps/ErpCity/scripts.pory"
	delay 60
# 100 "data/maps/ErpCity/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 101 "data/maps/ErpCity/scripts.pory"
	special BufferMonNickname
# 102 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_10, MSGBOX_AUTOCLOSE
# 103 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_ProfessorBirds_After_Speech::
# 107 "data/maps/ErpCity/scripts.pory"
	lockall
# 108 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_After_Speech_Text_0
# 109 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 110 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Mispoes_Miauw::
# 114 "data/maps/ErpCity/scripts.pory"
	lockall
# 115 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Mispoes_Miauw_Text_0
# 116 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 117 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Lab_Sign::
# 121 "data/maps/ErpCity/scripts.pory"
	lockall
# 122 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Lab_Sign_Text_0
# 123 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 124 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Hiker_Cave::
# 128 "data/maps/ErpCity/scripts.pory"
	lockall
# 129 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_Hiker_Cave_Movement_0
# 131 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Hiker_Cave_Text_0
# 132 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 133 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Cave_Sign::
# 137 "data/maps/ErpCity/scripts.pory"
	lockall
# 138 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Cave_Sign_Text_0
# 139 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 140 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Trigger_Stopplayer::
# 144 "data/maps/ErpCity/scripts.pory"
	lockall
# 145 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Trigger_Stopplayer_Text_0
# 146 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Move_Stopplayer
# 147 "data/maps/ErpCity/scripts.pory"
	waitmovement 0
# 148 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


# 151 "data/maps/ErpCity/scripts.pory"
ErpCity_Move_Stopplayer:
# 152 "data/maps/ErpCity/scripts.pory"
	walk_right
	step_end

ErpCity_Trigger_Stopplayer2::
# 156 "data/maps/ErpCity/scripts.pory"
	lockall
# 157 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Trigger_Stopplayer2_Text_0
# 158 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Trigger_Stopplayer2_Movement_0
# 159 "data/maps/ErpCity/scripts.pory"
	waitmovement 0
# 160 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Receive_Running_Shoes::
# 164 "data/maps/ErpCity/scripts.pory"
	lockall
# 165 "data/maps/ErpCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RUNNING_SHOES, ErpCity_Receive_Running_Shoes_1
# 199 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_5
# 200 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 201 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_2
# 202 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 203 "data/maps/ErpCity/scripts.pory"
	releaseall
	end

ErpCity_Receive_Running_Shoes_1:
# 166 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_0
# 167 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 168 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_MOM_SHOES
# 169 "data/maps/ErpCity/scripts.pory"
	addobject 4
# 170 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_Receive_Running_Shoes_Movement_1
# 171 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 172 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_0
# 173 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 174 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 175 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_1
# 176 "data/maps/ErpCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 177 "data/maps/ErpCity/scripts.pory"
	waitfanfare
# 178 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 179 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_2, MSGBOX_AUTOCLOSE
# 180 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 181 "data/maps/ErpCity/scripts.pory"
	delay 60
# 182 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_3, MSGBOX_AUTOCLOSE
# 183 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 184 "data/maps/ErpCity/scripts.pory"
	delay 40
# 185 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_2
# 186 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 187 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_4
# 188 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 189 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_Receive_Running_Shoes_Movement_3
# 190 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 191 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_MOM_SHOES
# 192 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 193 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_INTERN_BIRDS_LAB
# 194 "data/maps/ErpCity/scripts.pory"
	removeobject 4
# 195 "data/maps/ErpCity/scripts.pory"
	releaseall
	end


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

# 56 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5:
# 56 "data/maps/ErpCity/scripts.pory"
	face_right
	step_end

# 60 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6:
# 60 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 60 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 61 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7:
# 61 "data/maps/ErpCity/scripts.pory"
	face_down
	step_end

# 71 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8:
# 71 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
# 71 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 72 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9:
# 72 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 73 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10:
# 73 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 73 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 73 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 73 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 73 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 73 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 73 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 73 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
	step_end

# 86 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11:
# 86 "data/maps/ErpCity/scripts.pory"
	jump_left
# 86 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 88 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12:
# 88 "data/maps/ErpCity/scripts.pory"
	walk_right
# 88 "data/maps/ErpCity/scripts.pory"
	walk_up
	step_end

# 129 "data/maps/ErpCity/scripts.pory"
ErpCity_Hiker_Cave_Movement_0:
# 129 "data/maps/ErpCity/scripts.pory"
	face_player
	step_end

# 158 "data/maps/ErpCity/scripts.pory"
ErpCity_Trigger_Stopplayer2_Movement_0:
# 158 "data/maps/ErpCity/scripts.pory"
	walk_left
	step_end

# 166 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_0:
# 166 "data/maps/ErpCity/scripts.pory"
	emote_exclamation_mark
# 166 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 170 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_1:
# 170 "data/maps/ErpCity/scripts.pory"
	walk_down
# 170 "data/maps/ErpCity/scripts.pory"
	face_player
	step_end

# 185 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_2:
# 185 "data/maps/ErpCity/scripts.pory"
	walk_down
	step_end

# 189 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_3:
# 189 "data/maps/ErpCity/scripts.pory"
	walk_up
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Text_0:
# 26 "data/maps/ErpCity/scripts.pory"
	.string "WHO DO YOU THINK YOU ARE? TAYLOR SWIFT\n"
	.string "OR SOMETHING?\p"
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
# 43 "data/maps/ErpCity/scripts.pory"
	.string "You have received the Pokédex.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_4:
# 47 "data/maps/ErpCity/scripts.pory"
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
# 51 "data/maps/ErpCity/scripts.pory"
	.string "THROW THESE MOTHERFUCKERS, AND THE\n"
	.string "WORLD WILL BE MINE... I MEAN OURS$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_6:
# 63 "data/maps/ErpCity/scripts.pory"
	.string "HE BREAKS INTO YOUR LAB AND GETS A\n"
	.string "POKEDEX, POKEBALLS AND A MISSION TO\l"
	.string "BECOME A POKEMON MASTER?\p"
	.string "WHAT DID I GET?\p"
	.string "A FUCKING MAGIKARP?\p"
	.string "THE MOST USELESS POKEMON EVER IN\n"
	.string "EXISTENCE?\p"
	.string "I QUIT!!\p"
	.string "FUCK YOU!!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_7:
# 68 "data/maps/ErpCity/scripts.pory"
	.string "...\p"
	.string "YOU??\p"
	.string "A POKEMON MASTER?\p"
	.string "DON'T LET ME LAUGH\p"
	.string "I WILL TAKE EVERY CHANCE TO PREVENT\n"
	.string "THAT FROM HAPPENING!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_8:
# 79 "data/maps/ErpCity/scripts.pory"
	.string "...I'd probably should search for\n"
	.string "another intern right now...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_9:
# 84 "data/maps/ErpCity/scripts.pory"
	.string "OH BY THE WAY... I HAVE AN OLD FRIEND IN\n"
	.string "THE NEXT TOWN WHO COULD HELP YOU CATCH\l"
	.string "A WONDERFULL SPECIE...\p"
	.string "HIS NAME IS JAKUB... HE USED TO LIVE IN\n"
	.string "THIS TOWN... BUT THE TRAITOR MOVED TO\l"
	.string "MAASJE...\p"
	.string "NOW WHAT ARE YOU WAITING FOR!?\p"
	.string "GET THAT DATA FOR ME... I MEAN US.\p"
	.string "AND STAY AWAY FROM MISPOES...\p"
	.string "HE DOESN'T LIKE ME...\p"
	.string "I MEAN YOU OFCOURSE!!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_10:
# 102 "data/maps/ErpCity/scripts.pory"
	.string "...I think it is safe to come out now\n"
	.string "{STR_VAR_1}, lets get out of here!$"

ErpCity_ProfessorBirds_After_Speech_Text_0:
# 108 "data/maps/ErpCity/scripts.pory"
	.string "WELL, WHAT ARE YOU WAITING FOR?\p"
	.string "GET THAT DATA FOR ME... I MEAN US.$"

ErpCity_Mispoes_Miauw_Text_0:
# 115 "data/maps/ErpCity/scripts.pory"
	.string "Mispoes: Miaaaauw... KSSSSJSJJGGGG$"

ErpCity_Lab_Sign_Text_0:
# 122 "data/maps/ErpCity/scripts.pory"
	.string "Professor Birds's Lab$"

ErpCity_Hiker_Cave_Text_0:
# 131 "data/maps/ErpCity/scripts.pory"
	.string "The cave is not accessible at this time.\p"
	.string "Recent tremors from a unknown source\n"
	.string "have caused massive rock slides.\p"
	.string "The path is to dangerous.$"

ErpCity_Cave_Sign_Text_0:
# 138 "data/maps/ErpCity/scripts.pory"
	.string "A large map with a labyrint of routes\n"
	.string "going through the cave.\p"
	.string "Most of them are crossed out.$"

ErpCity_Trigger_Stopplayer_Text_0:
# 145 "data/maps/ErpCity/scripts.pory"
	.string "Wandering without any pokemon might be\n"
	.string "dangerous....$"

ErpCity_Trigger_Stopplayer2_Text_0:
# 157 "data/maps/ErpCity/scripts.pory"
	.string "Mom said the lab was up north I think...$"

ErpCity_Receive_Running_Shoes_Text_0:
# 172 "data/maps/ErpCity/scripts.pory"
	.string "Honey, I almost forgot!\p"
	.string "If you want to make an impression on\n"
	.string "the professor you should wear some\l"
	.string "different shoes.\p"
	.string "As a surprise I've bought a new pair for\n"
	.string "you!$"

ErpCity_Receive_Running_Shoes_Text_1:
# 175 "data/maps/ErpCity/scripts.pory"
	.string "You have received running shoes from\n"
	.string "Mom.$"

ErpCity_Receive_Running_Shoes_Text_2:
# 179 "data/maps/ErpCity/scripts.pory"
	.string "Look at you, all nice and shiny.\p"
	.string "Say hello to the professor for me.\p"
	.string "Have fun!$"

ErpCity_Receive_Running_Shoes_Text_3:
# 182 "data/maps/ErpCity/scripts.pory"
	.string "Well, go on!\n"
	.string "Don't be shy!$"

ErpCity_Receive_Running_Shoes_Text_4:
# 187 "data/maps/ErpCity/scripts.pory"
	.string "There you go!\n"
	.string "I'll see you at dinner!$"

ErpCity_Receive_Running_Shoes_Text_5:
# 199 "data/maps/ErpCity/scripts.pory"
	.string "Better get to the lab, Mom probably\n"
	.string "won't let me in if I don't try.$"
