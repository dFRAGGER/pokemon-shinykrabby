ErpCity_MapScripts::
# 2 "data/maps/ErpCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/ErpCity/scripts.pory"
	goto_if_set FLAG_PROFESSOR_BIRDS_DISCOVERY, ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_1
	return

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_1:
# 4 "data/maps/ErpCity/scripts.pory"
	lockall
# 5 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Movement_0
# 6 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_0
# 7 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 8 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_1
# 9 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 10 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_2
# 11 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 12 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_3
# 13 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 14 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_4
# 15 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 16 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_5
# 17 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 18 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_6
# 19 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 20 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_7
# 21 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 23 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_8
# 24 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 25 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_9
# 26 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 27 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_10
# 28 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 29 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_11
# 30 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 31 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_12
# 32 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 33 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_13
# 34 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 35 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_14
# 36 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 37 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 38 "data/maps/ErpCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 39 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_15
# 40 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 41 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_16
# 42 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 43 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_17
# 44 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 45 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_18
# 46 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_KICKED_OUT_LAB_CONVO
# 47 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_PROFESSOR_BIRDS_DISCOVERY
# 48 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Mispoes_Miauw::
# 57 "data/maps/ErpCity/scripts.pory"
	lockall
# 58 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Mispoes_Miauw_Text_0
# 59 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 60 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Lab_Sign::
# 64 "data/maps/ErpCity/scripts.pory"
	lockall
# 65 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Lab_Sign_Text_0
# 66 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 67 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


# 5 "data/maps/ErpCity/scripts.pory"
ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Movement_0:
# 5 "data/maps/ErpCity/scripts.pory"
	jump_special_left
# 5 "data/maps/ErpCity/scripts.pory"
	face_right
	step_end

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_0:
# 6 "data/maps/ErpCity/scripts.pory"
	.string "WHO DO YOU THINK YOU ARE? TAYLOR SWIFT\n"
	.string "OR SOMETHING?$"

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_1:
# 8 "data/maps/ErpCity/scripts.pory"
	.string "Actually.... I love Taylor Swift hehe..\n"
	.string "ANYWAYS!!$"

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_2:
# 10 "data/maps/ErpCity/scripts.pory"
	.string "WHAT WERE YOU DOING, WONDERING AROUND\n"
	.string "IN MY SECRET LA..... I MEAN STORAGE\l"
	.string "ROOM?$"

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_3:
# 12 "data/maps/ErpCity/scripts.pory"
	.string "..... YOU ARE INTRESTED IN POKEMON??\n"
	.string "WELL, GET IN LINE HAHAHA.$"

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_4:
# 14 "data/maps/ErpCity/scripts.pory"
	.string "MY NAME IS PROFESSOR BIRDS, I RESEARCH\n"
	.string "POKEMON FOR A LIVING!!$"

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_5:
# 16 "data/maps/ErpCity/scripts.pory"
	.string "BESIDES THAT, I ALSO DEVELOP SECRET\n"
	.string "TECHNOLOGY IN MY SECRET LA..... I MEAN\l"
	.string "SENSORS FOR PIG FARMS.$"

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_6:
# 18 "data/maps/ErpCity/scripts.pory"
	.string "SO YOU WANT TO BECOME A POKEMON\n"
	.string "MASTER?$"

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_7:
# 20 "data/maps/ErpCity/scripts.pory"
	.string "MUAAHAHAHAH, YOU!!? A POKEMON\n"
	.string "MASTER???$"

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_8:
# 23 "data/maps/ErpCity/scripts.pory"
	.string ".....wait a second....$"

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_9:
# 25 "data/maps/ErpCity/scripts.pory"
	.string ".....maybe this little slob can help me to\n"
	.string "get some data....$"

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_10:
# 27 "data/maps/ErpCity/scripts.pory"
	.string ".....yes a very good idea Jari, very\n"
	.string "smart....$"

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_11:
# 29 "data/maps/ErpCity/scripts.pory"
	.string ".....DID I SAY THAT OUT LOUD? ARGH\n"
	.string "ANYWAYS, HOW ABOUT YOU BECOME MY\l"
	.string "LITTLE INTERN...$"

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_12:
# 31 "data/maps/ErpCity/scripts.pory"
	.string "I MEAN MY FELLOW RESEARCHER OFCOURSE!\n"
	.string "MY BELOVED PARTNER!$"

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_13:
# 33 "data/maps/ErpCity/scripts.pory"
	.string "TO BECOME A REAL POKEMON MASTER WE... I\n"
	.string "MEAN YOU... NEED TO CATCH EVERY POKEMON$"

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_14:
# 35 "data/maps/ErpCity/scripts.pory"
	.string "AND SCAN THEM WITH THIS LITTLE\n"
	.string "DEVICE....$"

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_15:
# 39 "data/maps/ErpCity/scripts.pory"
	.string "You have recieved the Pokédex.$"

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_16:
# 41 "data/maps/ErpCity/scripts.pory"
	.string "WITH THIS DEVICE ALL THE DATA WILL BE\n"
	.string "TRANSFERRED TO ME..... AND YOU\l"
	.string "OFCOURSE.....$"

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_17:
# 43 "data/maps/ErpCity/scripts.pory"
	.string "AND THIS WAY I WILL EXTRACT ALL\n"
	.string "INFORMATION FOR MY BELOVED SECRET\l"
	.string "TECHNOLO.... SENSORS FOR RESPONSIBLE\l"
	.string "PIG FARMING.$"

ErpCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_Text_18:
# 45 "data/maps/ErpCity/scripts.pory"
	.string "NOW GO, AND DON'T COME BACK BEFORE YOU\n"
	.string "HAVE CAUGHT 10 POKEMONS.$"

ErpCity_Mispoes_Miauw_Text_0:
# 58 "data/maps/ErpCity/scripts.pory"
	.string "Mispoes:'Miaaaauw... KSSSSJSJJGGGG'$"

ErpCity_Lab_Sign_Text_0:
# 65 "data/maps/ErpCity/scripts.pory"
	.string "'Professor Birds Lab'$"
