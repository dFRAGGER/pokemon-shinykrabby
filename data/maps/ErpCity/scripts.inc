ErpCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ErpCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ErpCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ErpCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_KICKED_OUT_LAB_CONVO
	setflag FLAG_HIDE_MOM_SHOES
	call ErpCity_Visited
	return

ErpCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_RECIEVED_STARTER_POKEMON, 1, ErpCity_ProfessorBirds_Speech_Pokedex
	.2byte 0


ErpCity_SpearowFearow_Flyby::
	setvar VAR_TEMP_0, 1
	setobjectsubpriority 11, MAP_ERP_CITY, 0
	setobjectsubpriority 12, MAP_ERP_CITY, 0
	setobjectsubpriority 13, MAP_ERP_CITY, 0
	applymovement 13, ErpCity_SpearowFearow_Flyby_Movement_0
	applymovement 12, ErpCity_SpearowFearow_Flyby_Movement_0
	applymovement 11, ErpCity_SpearowFearow_Flyby_Movement_0
	waitmovement 11
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	removeobject 13
	removeobject 12
	removeobject 11
	return


ErpCity_Visited::
	setflag FLAG_VISITED_ERP_CITY
	return


ErpCity_Sign_Welcome::
	lock
	msgbox ErpCity_Sign_Welcome_Text_0, MSGBOX_SIGN
	waitmessage
	release
	return


ErpCity_Old_Man_Boekel::
	lock
	faceplayer
	msgbox ErpCity_Old_Man_Boekel_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


ErpCity_Woman::
	lock
	faceplayer
	msgbox ErpCity_Woman_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


ErpCity_ProfessorBirds_Speech_Pokedex::
	lockall
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
	opendoor 22, 18
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_0
	clearflag FLAG_KICKED_OUT_LAB_CONVO
	addobject 2
	addobject 5
	addobject 10
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_1
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_2
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3
	waitmovement
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5
	waitmovement
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_FAILURE
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6
	waitmovement
	delay 120
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7
	waitmovement
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	delay 40
	playse SE_PIN
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	setflag FLAG_SYS_POKEDEX_GET
	special EnableNationalPokedex
	setflag FLAG_SYS_NATIONAL_DEX
	setspeaker NULL
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_5
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	waitmessage
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_6
	waitmessage
	playse SE_BALL_THROW
	setspeaker NULL
	giveitem ITEM_POKE_BALL, 5
	waitmessage
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_7, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_FAILURE
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6
	waitmovement
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11
	waitmovement
	delay 60
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_13
	waitmovement
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_8
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_9
	waitmessage
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12
	playse SE_PIN
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_14
	waitmovement
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_10
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_11, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_PIN
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_15
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_16
	playse SE_LEDGE
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17
	waitmovement
	playse SE_LEDGE
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17
	waitmovement
	playse SE_LEDGE
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17
	waitmovement
	playse SE_LEDGE
	removeobject 5
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_18
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17
	waitmovement
	playse SE_LEDGE
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17
	waitmovement
	playse SE_LEDGE
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_19
	waitmovement
	playse SE_LEDGE
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_19
	waitmovement
	removeobject 10
	setflag FLAG_KICKED_OUT_LAB_CONVO
	setvar VAR_RECIEVED_STARTER_POKEMON, 2
	clearflag FLAG_HIDE_INTERN_BIRDS_LAB
	delay 120
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_12, MSGBOX_AUTOCLOSE
	waitmessage
	delay 40
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_20
	waitmovement
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11
	waitmovement
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_13, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_LEDGE
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_21
	waitmovement
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_22
	waitmovement
	removeobject 2
	closedoor 22, 18
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11
	waitmovement
	delay 60
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_13
	waitmovement
	delay 60
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9
	waitmovement
	setflag FLAG_HIDE_JACOB_SIENNA
	clearflag FLAG_HIDE_INTERN_BIRDS_LAB
	delay 60
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_14, MSGBOX_AUTOCLOSE
	special UpdateFollowingPokemon
	fadedefaultbgm
	releaseall
	return


ErpCity_ProfessorBirds_After_Speech::
	lockall
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
	msgbox ErpCity_ProfessorBirds_After_Speech_Text_0
	waitmessage
	releaseall
	return


ErpCity_Mispoes_Miauw::
	lockall
	faceplayer
	msgbox ErpCity_Mispoes_Miauw_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	releaseall
	return


ErpCity_Lab_Sign::
	lockall
	msgbox ErpCity_Lab_Sign_Text_0, MSGBOX_SIGN
	waitmessage
	releaseall
	return


ErpCity_Hiker_Cave::
	lockall
	faceplayer
	applymovement 5, ErpCity_Hiker_Cave_Movement_0
	msgbox ErpCity_Hiker_Cave_Text_0
	waitmessage
	releaseall
	return


ErpCity_Cave_Sign::
	lockall
	msgbox ErpCity_Cave_Sign_Text_0
	waitmessage
	releaseall
	return


ErpCity_Trigger_Stopplayer::
	lockall
	msgbox ErpCity_Trigger_Stopplayer_Text_0
	applymovement LOCALID_PLAYER, ErpCity_Move_Stopplayer
	waitmovement 0
	releaseall
	return


ErpCity_Move_Stopplayer:
	walk_right
	step_end

ErpCity_Trigger_Stopplayer2::
	lockall
	msgbox ErpCity_Trigger_Stopplayer2_Text_0
	applymovement LOCALID_PLAYER, ErpCity_Trigger_Stopplayer2_Movement_0
	waitmovement 0
	releaseall
	return


ErpCity_Receive_Running_Shoes::
	lockall
	goto_if_unset FLAG_RECEIVED_RUNNING_SHOES, ErpCity_Receive_Running_Shoes_1
	setspeaker NULL
	msgbox ErpCity_Receive_Running_Shoes_Text_5
	waitmessage
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_2
	waitmovement
	releaseall
	end

ErpCity_Receive_Running_Shoes_1:
	playse SE_PIN
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_0
	waitmovement
	opendoor 19, 25
	waitdooranim
	clearflag FLAG_HIDE_MOM_SHOES
	addobject 4
	applymovement 4, ErpCity_Receive_Running_Shoes_Movement_1
	waitmovement
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
	msgbox ErpCity_Receive_Running_Shoes_Text_1
	waitmessage
	setflag FLAG_RECEIVED_RUNNING_SHOES
	playfanfare MUS_OBTAIN_ITEM
	setspeaker NULL
	msgbox ErpCity_Receive_Running_Shoes_Text_2
	waitmessage
	setspeaker NULL
	msgbox ErpCity_Receive_Running_Shoes_Text_3
	waitmessage
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
	msgbox ErpCity_Receive_Running_Shoes_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_2
	applymovement 4, ErpCity_Receive_Running_Shoes_Movement_3
	waitmovement
	setflag FLAG_HIDE_MOM_SHOES
	setflag FLAG_SYS_B_DASH
	setflag FLAG_HIDE_INTERN_BIRDS_LAB
	removeobject 4
	closedoor 19, 25
	waitdooranim
	releaseall
	end


ErpCity_Sign_Mailbox_ProfBirds::
	lock
	msgbox ErpCity_Sign_Mailbox_ProfBirds_Text_0, MSGBOX_SIGN
	waitmessage
	release
	return


ErpCity_Sign_Mailbox_Starthouse::
	lock
	msgbox ErpCity_Sign_Mailbox_Starthouse_Text_0, MSGBOX_SIGN
	waitmessage
	release
	return


ErpCity_Sign_Mailbox_BarryHouse::
	lock
	msgbox ErpCity_Sign_Mailbox_BarryHouse_Text_0, MSGBOX_SIGN
	waitmessage
	release
	return


ErpCity_Sign_Mailbox_JanVogels::
	lock
	msgbox ErpCity_Sign_Mailbox_JanVogels_Text_0, MSGBOX_SIGN
	waitmessage
	release
	return


OldMiner_Sjeng_Reminisce::
	lock
	faceplayer
	msgbox OldMiner_Sjeng_Reminisce_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


ErpCity_SpearowFearow_Flyby_Movement_0:
	jump_2_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_0:
	walk_fast_down
	walk_fast_left
	jump_left
	face_right
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_1:
	walk_fast_down
	walk_fast_down
	walk_fast_left
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_2:
	walk_down
	walk_down
	walk_down
	face_left
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3:
	jump_down
	jump_down
	jump_right
	jump_down
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4:
	face_up
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5:
	walk_right
	face_down
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6:
	emote_x
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7:
	walk_right
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8:
	emote_exclamation_mark
	walk_left
	walk_left
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9:
	face_left
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10:
	emote_question_mark
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11:
	face_right
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12:
	walk_fast_left
	face_up
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_13:
	face_down
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_14:
	face_down
	emote_question_mark
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_15:
	emote_question_mark
	face_left
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_16:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17:
	jump_2_left
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_18:
	walk_down
	face_left
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_19:
	jump_2_down
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_20:
	walk_up
	face_left
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_21:
	jump_left
	face_left
	step_end

ErpCity_ProfessorBirds_Speech_Pokedex_Movement_22:
	walk_right
	walk_up
	walk_up
	step_end

ErpCity_Hiker_Cave_Movement_0:
	face_player
	step_end

ErpCity_Trigger_Stopplayer2_Movement_0:
	walk_left
	step_end

ErpCity_Receive_Running_Shoes_Movement_0:
	emote_exclamation_mark
	face_up
	step_end

ErpCity_Receive_Running_Shoes_Movement_1:
	walk_down
	face_player
	step_end

ErpCity_Receive_Running_Shoes_Movement_2:
	walk_down
	step_end

ErpCity_Receive_Running_Shoes_Movement_3:
	walk_up
	step_end

ErpCity_Sign_Welcome_Text_0:
	.string "ERP TOWN\p"
	.string "Tranquil and peaceful.$"

ErpCity_Old_Man_Boekel_Text_0:
	.string "Some folks mock Erp for being small with\n"
	.string "just four houses, but at least we aren't\l"
	.string "Boekel!\p"
	.string "That place only has one house, occupied\n"
	.string "by a weird redhead who isn't even home\l"
	.string "half the time!$"

ErpCity_Woman_Text_0:
	.string "I traveled here from Mosa Town just to\n"
	.string "gaze at that lake over there!\p"
	.string "The water is so calm and clear it looks\n"
	.string "like a mirror.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_0:
	.string "PROF. BIRDS$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_1:
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
	.string "AM I RIGHT, BARRY?!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_3:
	.string ".....wait a second....\p"
	.string ".....maybe this little slob can help me to\n"
	.string "get some data...\p"
	.string "...that strange anomaly JACOB called\n"
	.string "about....\p"
	.string ".....yes a very good idea Jari, very\n"
	.string "smart....$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_4:
	.string ".....did I say that out loud?\p"
	.string "ARGH ANYWAYS! How about I rehire you\n"
	.string "again to become my data hoarder....\p"
	.string "JUNIOR RESEARCHER OFCOURSE! My\n"
	.string "beloved partner!\p"
	.string "For your first assignment I order you\n"
	.string "to...\p"
	.string "I MEAN I ask you to head to MASO TOWN,\n"
	.string "and visit my old friend JACOB.\p"
	.string "Apparently he has seen a rare pokemon\n"
	.string "species, an ANOMALY he said.\p"
	.string "He told me about a GOLDEN KING, the\n"
	.string "single most magnificent creature to\l"
	.string "sidle on this earth.\p"
	.string "Well I want you to go and SCAN that\n"
	.string "POKEMON with this genomic sequence.... I\l"
	.string "MEAN POKeDEX!!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_5:
	.string "You have received the Pokédex.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_6:
	.string "This device can collect VITAL DATA ON\n"
	.string "POKEMON HABITATS, MIGRATION PATTERNS\l"
	.string "AND ...uh...\p"
	.string "...unique genomic signatures... for the\n"
	.string "pigs... you know...\p"
	.string "And this way I WILL EXTRACT ALL\n"
	.string "NECESSARY INFORMATION FOR MY\l"
	.string "BELOVED....\p"
	.string "...sensors for responsible pig farming...\p"
	.string "NOW GO, AND DON'T COME BACK BEFORE YOU\n"
	.string "HAVE SEQUENC...\p"
	.string "...scanned that rare Pokémon...\p"
	.string "...\p"
	.string "WHAT DO YOU MEAN... HOW?\p"
	.string "Just use Pokeballs, catch it and scan it\n"
	.string "after....\p"
	.string "A POKEMON RESEARCHER??? HAHAHA...\p"
	.string "...you got to be joking...\p"
	.string "HERE, CATCH THESE!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_7:
	.string "Throw these right at your... at its head,\n"
	.string "CATCH the ANOMALY and don't come back\l"
	.string "before...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_8:
	.string "BARRY$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_9:
	.string "HE BREAKS INTO YOUR LAB AND GETS A\n"
	.string "POKEDEX, POKEBALLS AND AN ACTUAL\l"
	.string "ASSIGNMENT?\p"
	.string "WHAT DID I GET?\p"
	.string "A FUCKING MAGIKARP?\p"
	.string "THE MOST USELESS POKEMON EVER IN\n"
	.string "EXISTENCE?\p"
	.string "I QUIT!!\p"
	.string "AND STOP SAYING BARRY!\p"
	.string "MY NAME IS W O U T E R!!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_10:
	.string "W O U T E R$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_11:
	.string "...\p"
	.string "YOU??\p"
	.string "BECOMING A POKEMON RESEARCHER?\p"
	.string "DON'T MAKE ME LAUGH.\p"
	.string "I WILL TAKE EVERY CHANCE TO PREVENT\n"
	.string "THAT FROM HAPPENING!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_12:
	.string "...I'd probably should search for\n"
	.string "another intern right now...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_13:
	.string "Well, WHAT ARE YOU WAITING FOR!?\p"
	.string "I want that data TODAY!\p"
	.string "This could be the perfect start to my\n"
	.string "genome triangul... I MEAN PIG SENSOR\l"
	.string "DEVELOPMENT!\p"
	.string "AND STAY AWAY FROM MISPOES...\p"
	.string "He doesn't like me...\p"
	.string "I MEAN YOU OFCOURSE!!\p"
	.string "...\p"
	.string "...so I was shouting the entire time?\p"
	.string "WHO CARES!\p"
	.string "NOW FUCK OFF!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_14:
	.string "...I think it is safe to come out now,\n"
	.string "lets get out of here!$"

ErpCity_ProfessorBirds_After_Speech_Text_0:
	.string "Well, what are you waiting for?\p"
	.string "Get that data for me... I MEAN US.$"

ErpCity_Mispoes_Miauw_Text_0:
	.string "MISSSS....POESSSSSSS....$"

ErpCity_Lab_Sign_Text_0:
	.string "Professor Birds's Lab$"

ErpCity_Hiker_Cave_Text_0:
	.string "The cave is not accessible at this time.\p"
	.string "Recent tremors from a unknown source\n"
	.string "have caused massive rock slides.\p"
	.string "The path is too dangerous.$"

ErpCity_Cave_Sign_Text_0:
	.string "A large map with a labyrint of routes\n"
	.string "going through the cave.\p"
	.string "Most of them are crossed out.$"

ErpCity_Trigger_Stopplayer_Text_0:
	.string "Wandering without any pokemon might be\n"
	.string "dangerous....$"

ErpCity_Trigger_Stopplayer2_Text_0:
	.string "Mom said the lab was up north I think...$"

ErpCity_Receive_Running_Shoes_Text_0:
	.string "MOM$"

ErpCity_Receive_Running_Shoes_Text_1:
	.string "Honey, I almost forgot!\p"
	.string "If you want to make an impression on\n"
	.string "the professor you should wear some\l"
	.string "different shoes.\p"
	.string "As a surprise I've bought a new pair for\n"
	.string "you!$"

ErpCity_Receive_Running_Shoes_Text_2:
	.string "You have received running shoes from\n"
	.string "Mom.$"

ErpCity_Receive_Running_Shoes_Text_3:
	.string "Now if you press your 'B muscle' while\n"
	.string "moving, you will sprint!$"

ErpCity_Receive_Running_Shoes_Text_4:
	.string "Look at you, all nice and shiny.\p"
	.string "Say hello to the professor for me.\p"
	.string "The lab is up the hill, north from here.\p"
	.string "Have fun!$"

ErpCity_Receive_Running_Shoes_Text_5:
	.string "Better get to the lab, Mom probably\n"
	.string "won't let me in if I don't try.$"

ErpCity_Sign_Mailbox_ProfBirds_Text_0:
	.string "This mailbox seems to be filled to the\n"
	.string "brim, somebody should clean this thing\l"
	.string "out.$"

ErpCity_Sign_Mailbox_Starthouse_Text_0:
	.string "Home.$"

ErpCity_Sign_Mailbox_BarryHouse_Text_0:
	.string "Family Stonebakers's house.$"

ErpCity_Sign_Mailbox_JanVogels_Text_0:
	.string "Family Birds's house.$"

OldMiner_Sjeng_Reminisce_Text_0:
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
