ErpCity_MapScripts::
# 2 "data/maps/ErpCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ErpCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/ErpCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ErpCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ErpCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_KICKED_OUT_LAB_CONVO
	return

ErpCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/ErpCity/scripts.pory"
	map_script_2 VAR_RECIEVED_STARTER_POKEMON, 1, ErpCity_ProfessorBirds_Speech_Pokedex
	.2byte 0


ErpCity_ProfessorBirds_Speech_Pokedex::
# 12 "data/maps/ErpCity/scripts.pory"
	lockall
# 13 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_0
# 14 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_KICKED_OUT_LAB_CONVO
# 15 "data/maps/ErpCity/scripts.pory"
	addobject 4
# 16 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_1
# 19 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 20 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 21 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_1
# 22 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 23 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_2
# 24 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 25 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_3
# 26 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 27 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_4
# 28 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 29 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_5
# 30 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 31 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_6
# 32 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 33 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_7
# 34 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 35 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_2
# 36 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_8
# 37 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 38 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_9
# 39 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 40 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_10
# 41 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 42 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3
# 43 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_11
# 44 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 45 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_12
# 46 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 47 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_13
# 48 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 49 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_14
# 50 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 51 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 52 "data/maps/ErpCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 53 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_15
# 54 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 55 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_16
# 56 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 57 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_17
# 58 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 59 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_18
# 60 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_KICKED_OUT_LAB_CONVO
# 61 "data/maps/ErpCity/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 2
# 62 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_ProfessorBirds_After_Speech::
# 66 "data/maps/ErpCity/scripts.pory"
	lockall
# 67 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_After_Speech_Text_0
# 68 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 69 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Mispoes_Miauw::
# 73 "data/maps/ErpCity/scripts.pory"
	lockall
# 74 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Mispoes_Miauw_Text_0
# 75 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 76 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Lab_Sign::
# 80 "data/maps/ErpCity/scripts.pory"
	lockall
# 81 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Lab_Sign_Text_0
# 82 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 83 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Hiker_Cave::
# 87 "data/maps/ErpCity/scripts.pory"
	lockall
# 88 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_Hiker_Cave_Movement_0
# 90 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Hiker_Cave_Text_0
# 91 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 92 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Cave_Sign::
# 96 "data/maps/ErpCity/scripts.pory"
	lockall
# 97 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Cave_Sign_Text_0
# 98 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 99 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Trigger_Stopplayer::
# 103 "data/maps/ErpCity/scripts.pory"
	lockall
# 104 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Trigger_Stopplayer_Text_0
# 105 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Move_Stopplayer
# 106 "data/maps/ErpCity/scripts.pory"
	waitmovement 0
# 107 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


# 110 "data/maps/ErpCity/scripts.pory"
ErpCity_Move_Stopplayer:
# 111 "data/maps/ErpCity/scripts.pory"
	walk_right
	step_end

# 13 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_0:
# 13 "data/maps/ErpCity/scripts.pory"
	jump_left
# 13 "data/maps/ErpCity/scripts.pory"
	face_right
	step_end

# 16 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_1:
# 16 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 16 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 35 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_2:
# 35 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
	step_end

# 42 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3:
# 42 "data/maps/ErpCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 88 "data/maps/ErpCity/scripts.pory"
ErpCity_Hiker_Cave_Movement_0:
# 88 "data/maps/ErpCity/scripts.pory"
	face_player
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Text_0:
# 19 "data/maps/ErpCity/scripts.pory"
	.string "WHO DO YOU THINK YOU ARE? TAYLOR SWIFT\n"
	.string "OR SOMETHING?$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_1:
# 21 "data/maps/ErpCity/scripts.pory"
	.string "Actually.... I love Taylor Swift hehe..\n"
	.string "ANYWAYS!!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_2:
# 23 "data/maps/ErpCity/scripts.pory"
	.string "WHAT WERE YOU DOING, WANDERING AROUND\n"
	.string "IN MY SECRET LA..... I MEAN STORAGE\l"
	.string "ROOM?$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_3:
# 25 "data/maps/ErpCity/scripts.pory"
	.string "..... YOU ARE INTERESTED IN POKEMON??\n"
	.string "WELL, GET IN LINE! HAHAHA.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_4:
# 27 "data/maps/ErpCity/scripts.pory"
	.string "MY NAME IS PROFESSOR BIRDS, I RESEARCH\n"
	.string "POKEMON FOR A LIVING!!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_5:
# 29 "data/maps/ErpCity/scripts.pory"
	.string "BESIDES THAT, I ALSO DEVELOP SECRET\n"
	.string "TECHNOL... I MEAN SENSORS FOR PIG\l"
	.string "FARMS.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_6:
# 31 "data/maps/ErpCity/scripts.pory"
	.string "SO YOU WANT TO BECOME A POKEMON\n"
	.string "MASTER?$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_7:
# 33 "data/maps/ErpCity/scripts.pory"
	.string "MUAAHAHAHAH, YOU!!? A POKEMON\n"
	.string "MASTER???$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_8:
# 36 "data/maps/ErpCity/scripts.pory"
	.string ".....wait a second....$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_9:
# 38 "data/maps/ErpCity/scripts.pory"
	.string ".....maybe this little slob can help me to\n"
	.string "get some data....$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_10:
# 40 "data/maps/ErpCity/scripts.pory"
	.string ".....yes a very good idea Jari, very\n"
	.string "smart....$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_11:
# 43 "data/maps/ErpCity/scripts.pory"
	.string ".....DID I SAY THAT OUT LOUD? ARGH\n"
	.string "ANYWAYS, HOW ABOUT YOU BECOME MY\l"
	.string "LITTLE INTERN...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_12:
# 45 "data/maps/ErpCity/scripts.pory"
	.string "I MEAN MY FELLOW RESEARCHER OFCOURSE!\n"
	.string "MY BELOVED PARTNER!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_13:
# 47 "data/maps/ErpCity/scripts.pory"
	.string "TO BECOME A REAL POKEMON MASTER WE... I\n"
	.string "MEAN YOU... NEED TO CATCH EVERY POKEMON$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_14:
# 49 "data/maps/ErpCity/scripts.pory"
	.string "AND SCAN THEM WITH THIS LITTLE\n"
	.string "DEVICE....$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_15:
# 53 "data/maps/ErpCity/scripts.pory"
	.string "You have received the Pokédex.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_16:
# 55 "data/maps/ErpCity/scripts.pory"
	.string "WITH THIS DEVICE ALL THE DATA WILL BE\n"
	.string "TRANSFERRED TO ME..... AND YOU\l"
	.string "OFCOURSE.....$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_17:
# 57 "data/maps/ErpCity/scripts.pory"
	.string "AND THIS WAY I WILL EXTRACT ALL\n"
	.string "INFORMATION FOR MY BELOVED SECRET\l"
	.string "TECHNOLO.... SENSORS FOR RESPONSIBLE\l"
	.string "PIG FARMING.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_18:
# 59 "data/maps/ErpCity/scripts.pory"
	.string "NOW GO, AND DON'T COME BACK BEFORE YOU\n"
	.string "HAVE CAUGHT 10 POKEMONS.$"

ErpCity_ProfessorBirds_After_Speech_Text_0:
# 67 "data/maps/ErpCity/scripts.pory"
	.string "WELL, WHAT ARE YOU WAITING FOR? GET\n"
	.string "THAT DATA FOR ME... I MEAN US.$"

ErpCity_Mispoes_Miauw_Text_0:
# 74 "data/maps/ErpCity/scripts.pory"
	.string "Mispoes: Miaaaauw... KSSSSJSJJGGGG$"

ErpCity_Lab_Sign_Text_0:
# 81 "data/maps/ErpCity/scripts.pory"
	.string "Professor Birds Lab$"

ErpCity_Hiker_Cave_Text_0:
# 90 "data/maps/ErpCity/scripts.pory"
	.string "The cave is not accessible at this time.\n"
	.string "Recent tremors from a unknown source\l"
	.string "have caused massive rock slides. The\l"
	.string "path is to dangerous.$"

ErpCity_Cave_Sign_Text_0:
# 97 "data/maps/ErpCity/scripts.pory"
	.string "A large map with a labyrint of routes\n"
	.string "going through the cave. Most of them\l"
	.string "are crossed out.$"

ErpCity_Trigger_Stopplayer_Text_0:
# 104 "data/maps/ErpCity/scripts.pory"
	.string "Wandering without any pokemon might be\n"
	.string "dangerous....$"
