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
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_1
# 23 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 24 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 25 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 26 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_1
# 27 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 28 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_2
# 29 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 30 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_3
# 31 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 32 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_4
# 33 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 34 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_5
# 35 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 36 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_6
# 37 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 38 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_7
# 39 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 40 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 41 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_2
# 42 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_8
# 43 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 44 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_9
# 45 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 46 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_10
# 47 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 48 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 49 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3
# 50 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_11
# 51 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 52 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_12
# 53 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 54 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_13
# 55 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 56 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_14
# 57 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 58 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 59 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 60 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_15
# 61 "data/maps/ErpCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 62 "data/maps/ErpCity/scripts.pory"
	waitfanfare
# 63 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 64 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_16
# 65 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 66 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_17
# 67 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 68 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_18
# 69 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 70 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_19
# 71 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 72 "data/maps/ErpCity/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 73 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 74 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_20
# 75 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 76 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_21
# 77 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 78 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_22
# 79 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 80 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_23
# 81 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4
# 82 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_KICKED_OUT_LAB_CONVO
# 83 "data/maps/ErpCity/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 2
# 84 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_ProfessorBirds_After_Speech::
# 88 "data/maps/ErpCity/scripts.pory"
	lockall
# 89 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_After_Speech_Text_0
# 90 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 91 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Mispoes_Miauw::
# 95 "data/maps/ErpCity/scripts.pory"
	lockall
# 96 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Mispoes_Miauw_Text_0
# 97 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 98 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Lab_Sign::
# 102 "data/maps/ErpCity/scripts.pory"
	lockall
# 103 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Lab_Sign_Text_0
# 104 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 105 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Hiker_Cave::
# 109 "data/maps/ErpCity/scripts.pory"
	lockall
# 110 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_Hiker_Cave_Movement_0
# 112 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Hiker_Cave_Text_0
# 113 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 114 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Cave_Sign::
# 118 "data/maps/ErpCity/scripts.pory"
	lockall
# 119 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Cave_Sign_Text_0
# 120 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 121 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Trigger_Stopplayer::
# 125 "data/maps/ErpCity/scripts.pory"
	lockall
# 126 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Trigger_Stopplayer_Text_0
# 127 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Move_Stopplayer
# 128 "data/maps/ErpCity/scripts.pory"
	waitmovement 0
# 129 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


# 132 "data/maps/ErpCity/scripts.pory"
ErpCity_Move_Stopplayer:
# 133 "data/maps/ErpCity/scripts.pory"
	walk_right
	step_end

ErpCity_Receive_Running_Shoes::
# 137 "data/maps/ErpCity/scripts.pory"
	lockall
# 138 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_0
# 139 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 140 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_MOM_SHOES
# 141 "data/maps/ErpCity/scripts.pory"
	addobject 4
# 142 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_Receive_Running_Shoes_Movement_1
# 143 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 144 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_0
# 145 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 146 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 147 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_1
# 148 "data/maps/ErpCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 149 "data/maps/ErpCity/scripts.pory"
	waitfanfare
# 150 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 151 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_2
# 152 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 153 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_Receive_Running_Shoes_Movement_2
# 154 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 155 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_MOM_SHOES
# 156 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 157 "data/maps/ErpCity/scripts.pory"
	removeobject 4
# 158 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


# 19 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_0:
# 19 "data/maps/ErpCity/scripts.pory"
	jump_left
# 19 "data/maps/ErpCity/scripts.pory"
	face_right
	step_end

# 22 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_1:
# 22 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 22 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 41 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_2:
# 41 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
	step_end

# 49 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3:
# 49 "data/maps/ErpCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 81 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4:
# 81 "data/maps/ErpCity/scripts.pory"
	jump_left
# 81 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 110 "data/maps/ErpCity/scripts.pory"
ErpCity_Hiker_Cave_Movement_0:
# 110 "data/maps/ErpCity/scripts.pory"
	face_player
	step_end

# 138 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_0:
# 138 "data/maps/ErpCity/scripts.pory"
	emote_exclamation_mark
# 138 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 142 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_1:
# 142 "data/maps/ErpCity/scripts.pory"
	walk_down
# 142 "data/maps/ErpCity/scripts.pory"
	face_player
	step_end

# 153 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_2:
# 153 "data/maps/ErpCity/scripts.pory"
	walk_up
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Text_0:
# 24 "data/maps/ErpCity/scripts.pory"
	.string "WHO DO YOU THINK YOU ARE? TAYLOR SWIFT\n"
	.string "OR SOMETHING?$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_1:
# 26 "data/maps/ErpCity/scripts.pory"
	.string "Actually.... I love Taylor Swift hehe..\n"
	.string "ANYWAYS!!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_2:
# 28 "data/maps/ErpCity/scripts.pory"
	.string "WHAT WERE YOU DOING, WANDERING AROUND\n"
	.string "IN MY SECRET LA..... I MEAN STORAGE\l"
	.string "ROOM?$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_3:
# 30 "data/maps/ErpCity/scripts.pory"
	.string "..... YOU ARE INTERESTED IN POKEMON??\n"
	.string "WELL, GET IN LINE! HAHAHA.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_4:
# 32 "data/maps/ErpCity/scripts.pory"
	.string "MY NAME IS PROFESSOR BIRDS, I RESEARCH\n"
	.string "POKEMON FOR A LIVING!!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_5:
# 34 "data/maps/ErpCity/scripts.pory"
	.string "BESIDES THAT, I ALSO DEVELOP SECRET\n"
	.string "TECHNOL... I MEAN SENSORS FOR PIG\l"
	.string "FARMS.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_6:
# 36 "data/maps/ErpCity/scripts.pory"
	.string "SO YOU WANT TO BECOME A POKEMON\n"
	.string "MASTER?$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_7:
# 38 "data/maps/ErpCity/scripts.pory"
	.string "MUAAHAHAHAH, YOU!!? A POKEMON\n"
	.string "MASTER???$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_8:
# 42 "data/maps/ErpCity/scripts.pory"
	.string ".....wait a second....$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_9:
# 44 "data/maps/ErpCity/scripts.pory"
	.string ".....maybe this little slob can help me to\n"
	.string "get some data....$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_10:
# 46 "data/maps/ErpCity/scripts.pory"
	.string ".....yes a very good idea Jari, very\n"
	.string "smart....$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_11:
# 50 "data/maps/ErpCity/scripts.pory"
	.string ".....DID I SAY THAT OUT LOUD? ARGH\n"
	.string "ANYWAYS, HOW ABOUT YOU BECOME MY\l"
	.string "LITTLE INTERN...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_12:
# 52 "data/maps/ErpCity/scripts.pory"
	.string "I MEAN MY FELLOW RESEARCHER OFCOURSE!\n"
	.string "MY BELOVED PARTNER!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_13:
# 54 "data/maps/ErpCity/scripts.pory"
	.string "TO BECOME A REAL POKEMON MASTER WE... I\n"
	.string "MEAN YOU... NEED TO CATCH EVERY POKEMON$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_14:
# 56 "data/maps/ErpCity/scripts.pory"
	.string "AND SCAN THEM WITH THIS LITTLE\n"
	.string "DEVICE....$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_15:
# 60 "data/maps/ErpCity/scripts.pory"
	.string "You have received the Pokédex.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_16:
# 64 "data/maps/ErpCity/scripts.pory"
	.string "WITH THIS DEVICE ALL THE DATA WILL BE\n"
	.string "TRANSFERRED TO ME..... AND YOU\l"
	.string "OFCOURSE.....$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_17:
# 66 "data/maps/ErpCity/scripts.pory"
	.string "AND THIS WAY I WILL EXTRACT ALL\n"
	.string "INFORMATION FOR MY BELOVED SECRET\l"
	.string "TECHNOLO.... SENSORS FOR RESPONSIBLE\l"
	.string "PIG FARMING.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_18:
# 68 "data/maps/ErpCity/scripts.pory"
	.string "NOW GO, AND DON'T COME BACK BEFORE YOU\n"
	.string "HAVE CAUGHT 10 POKEMONS.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_19:
# 70 "data/maps/ErpCity/scripts.pory"
	.string "WHAT DO YOU MEAN... HOW? JUST USE\n"
	.string "POKEBALLS.... A POKEMON MASTER HAHAHA...\l"
	.string "YOU GOT TO BE JOKING$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_20:
# 74 "data/maps/ErpCity/scripts.pory"
	.string "THROW THESE MOTHERFUCKERS, AND THE\n"
	.string "WORLD WILL BE MINE... I MEAN OURS$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_21:
# 76 "data/maps/ErpCity/scripts.pory"
	.string "OH BY THE WAY... I HAVE AN OLD FRIEND IN\n"
	.string "THE NEXT TOWN WHO COULD HELP YOU CATCH\l"
	.string "A WONDERFULL SPECIE...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_22:
# 78 "data/maps/ErpCity/scripts.pory"
	.string "HIS NAME IS JAKUB... HE USED TO LIVE IN\n"
	.string "THIS TOWN... BUT THE TRAITOR MOVED TO\l"
	.string "MAASJE...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_23:
# 80 "data/maps/ErpCity/scripts.pory"
	.string "NOW WHAT ARE YOU WAITING FOR.... YOU\n"
	.string "IDIOT... AND STAY AWAY FROM MISPOES...\l"
	.string "HE DOESN'T LIKE YOU...$"

ErpCity_ProfessorBirds_After_Speech_Text_0:
# 89 "data/maps/ErpCity/scripts.pory"
	.string "WELL, WHAT ARE YOU WAITING FOR? GET\n"
	.string "THAT DATA FOR ME... I MEAN US.$"

ErpCity_Mispoes_Miauw_Text_0:
# 96 "data/maps/ErpCity/scripts.pory"
	.string "Mispoes: Miaaaauw... KSSSSJSJJGGGG$"

ErpCity_Lab_Sign_Text_0:
# 103 "data/maps/ErpCity/scripts.pory"
	.string "Professor Birds Lab$"

ErpCity_Hiker_Cave_Text_0:
# 112 "data/maps/ErpCity/scripts.pory"
	.string "The cave is not accessible at this time.\n"
	.string "Recent tremors from a unknown source\l"
	.string "have caused massive rock slides. The\l"
	.string "path is to dangerous.$"

ErpCity_Cave_Sign_Text_0:
# 119 "data/maps/ErpCity/scripts.pory"
	.string "A large map with a labyrint of routes\n"
	.string "going through the cave. Most of them\l"
	.string "are crossed out.$"

ErpCity_Trigger_Stopplayer_Text_0:
# 126 "data/maps/ErpCity/scripts.pory"
	.string "Wandering without any pokemon might be\n"
	.string "dangerous....$"

ErpCity_Receive_Running_Shoes_Text_0:
# 144 "data/maps/ErpCity/scripts.pory"
	.string "Honey, what did I tell you? Always wear\n"
	.string "good shoes outside, you never know\l"
	.string "what adventure will bring you!$"

ErpCity_Receive_Running_Shoes_Text_1:
# 147 "data/maps/ErpCity/scripts.pory"
	.string "You have received running shoes from\n"
	.string "mom.$"

ErpCity_Receive_Running_Shoes_Text_2:
# 151 "data/maps/ErpCity/scripts.pory"
	.string "I heard that the local professor was\n"
	.string "looking for an intern, maybe you should\l"
	.string "visit him? This way you can get some\l"
	.string "experience under your belt before you\l"
	.string "start university next year! The lab is\l"
	.string "north of our house I think. Have fun!$"
