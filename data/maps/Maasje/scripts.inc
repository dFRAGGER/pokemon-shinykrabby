Maasje_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Maasje_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Maasje_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Maasje_On_Transition
	return


Maasje_On_Transition::
	setflag FLAG_VISITED_MAASJE
	clearflag FLAG_DISABLE_FOLLOWER_POKEMON
	callnative UpdateFollowingPokemon
	return


Maasje_Sign_Welcome::
	lock
	msgbox Maasje_Sign_Welcome_Text_0, MSGBOX_SIGN
	waitmessage
	release
	return


Maasje_Sign_Jakub_Home::
	lock
	msgbox Maasje_Sign_Jakub_Home_Text_0
	waitmessage
	release
	return


Maasje_Sign_Gym::
	lock
	msgbox Maasje_Sign_Gym_Text_0
	waitmessage
	release
	return


Maasje_Sign_Hill::
	lock
	msgbox Maasje_Sign_Hill_Text_0
	waitmessage
	release
	return


Maasje_Sign_Beekeeper::
	lock
	msgbox Maasje_Sign_Beekeeper_Text_0
	waitmessage
	release
	return


Maasje_Sign_CrabHill::
	lock
	msgbox Maasje_Sign_CrabHill_Text_0
	waitmessage
	release
	return


Maasje_Tree_Boy_Cut::
	lock
	faceplayer
	msgbox Maasje_Tree_Boy_Cut_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


Maasje_Sign_NextRoute::
	lock
	msgbox Maasje_Sign_NextRoute_Text_0
	waitmessage
	release
	return


Maasje_Krabby_Cry::
	playmoncry SPECIES_KRABBY, CRY_MODE_NORMAL
	return


Maasje_Collect_Honey_BeeHives::
	lock
	msgbox Maasje_Collect_Honey_BeeHives_Text_0
	release
	return


Maasje_PeteLongfellow_Crabs_Gymhill::
	lock
	faceplayer
	setspeaker Maasje_PeteLongfellow_Crabs_Gymhill_Text_0
	goto_if_unset FLAG_MET_PETE_LONGFELLOW_GYMHILL, Maasje_PeteLongfellow_Crabs_Gymhill_2
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Maasje_PeteLongfellow_Crabs_Gymhill_8
	msgbox Maasje_PeteLongfellow_Crabs_Gymhill_Text_6, MSGBOX_AUTOCLOSE
Maasje_PeteLongfellow_Crabs_Gymhill_1:
	waitmessage
	release
	end

Maasje_PeteLongfellow_Crabs_Gymhill_2:
	setflag FLAG_MET_PETE_LONGFELLOW_GYMHILL
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Maasje_PeteLongfellow_Crabs_Gymhill_5
	msgbox Maasje_PeteLongfellow_Crabs_Gymhill_Text_4, MSGBOX_AUTOCLOSE
	goto Maasje_PeteLongfellow_Crabs_Gymhill_1

Maasje_PeteLongfellow_Crabs_Gymhill_5:
	msgbox Maasje_PeteLongfellow_Crabs_Gymhill_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 64, Maasje_PeteLongfellow_Crabs_Gymhill_Movement_0
	waitmovement
	setspeaker Maasje_PeteLongfellow_Crabs_Gymhill_Text_0
	msgbox Maasje_PeteLongfellow_Crabs_Gymhill_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	applymovement 64, Maasje_PeteLongfellow_Crabs_Gymhill_Movement_1
	waitmovement
	setspeaker Maasje_PeteLongfellow_Crabs_Gymhill_Text_0
	msgbox Maasje_PeteLongfellow_Crabs_Gymhill_Text_3, MSGBOX_AUTOCLOSE
	goto Maasje_PeteLongfellow_Crabs_Gymhill_1

Maasje_PeteLongfellow_Crabs_Gymhill_8:
	msgbox Maasje_PeteLongfellow_Crabs_Gymhill_Text_5, MSGBOX_AUTOCLOSE
	goto Maasje_PeteLongfellow_Crabs_Gymhill_1


Maasje_Advice_Fisher_Crabhill::
	lock
	faceplayer
	applymovement 60, Maasje_PeteLongfellow_Crabs_Gymhill_Movement_1
	goto_if_unset FLAG_RECEIVED_ESCAPE_ROPE, Maasje_Advice_Fisher_Crabhill_2
	msgbox Maasje_Advice_Fisher_Crabhill_Text_2
	waitmessage
Maasje_Advice_Fisher_Crabhill_1:
	release
	return

Maasje_Advice_Fisher_Crabhill_2:
	msgbox Maasje_Advice_Fisher_Crabhill_Text_0
	giveitem ITEM_ESCAPE_ROPE
	setflag FLAG_RECEIVED_ESCAPE_ROPE
	msgbox Maasje_Advice_Fisher_Crabhill_Text_1
	waitmessage
	goto Maasje_Advice_Fisher_Crabhill_1


Maasje_Flag_Follower_Prep::
	setflag FLAG_DISABLE_FOLLOWER_POKEMON
	return


Maasje_Beehive_01::
	lock
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_01_2
	msgbox Maasje_Beehive_01_Text_3
	waitmessage
Maasje_Beehive_01_1:
	release
	return

Maasje_Beehive_01_2:
	goto_if_unset FLAG_CLEAR_BEEHIVE_01, Maasje_Beehive_01_5
	msgbox Maasje_Beehive_01_Text_2
	waitmessage
	goto Maasje_Beehive_01_1

Maasje_Beehive_01_5:
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_01_8
	goto Maasje_Beehive_01_1

Maasje_Beehive_01_8:
	msgbox Maasje_Beehive_01_Text_1
	addvar VAR_BEEKEEPER_GEURTS, 1
	setflag FLAG_CLEAR_BEEHIVE_01
	waitmessage
	goto Maasje_Beehive_01_1


Maasje_Beehive_02::
	lock
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_02_2
	msgbox Maasje_Beehive_01_Text_3
	waitmessage
Maasje_Beehive_02_1:
	release
	return

Maasje_Beehive_02_2:
	goto_if_unset FLAG_CLEAR_BEEHIVE_02, Maasje_Beehive_02_5
	msgbox Maasje_Beehive_01_Text_2
	waitmessage
	goto Maasje_Beehive_02_1

Maasje_Beehive_02_5:
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_02_8
	goto Maasje_Beehive_02_1

Maasje_Beehive_02_8:
	msgbox Maasje_Beehive_01_Text_1
	addvar VAR_BEEKEEPER_GEURTS, 1
	setflag FLAG_CLEAR_BEEHIVE_02
	waitmessage
	goto Maasje_Beehive_02_1


Maasje_Beehive_03::
	lock
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_03_2
	msgbox Maasje_Beehive_01_Text_3
	waitmessage
Maasje_Beehive_03_1:
	release
	return

Maasje_Beehive_03_2:
	goto_if_unset FLAG_CLEAR_BEEHIVE_03, Maasje_Beehive_03_5
	msgbox Maasje_Beehive_01_Text_2
	waitmessage
	goto Maasje_Beehive_03_1

Maasje_Beehive_03_5:
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_03_8
	goto Maasje_Beehive_03_1

Maasje_Beehive_03_8:
	msgbox Maasje_Beehive_01_Text_1
	addvar VAR_BEEKEEPER_GEURTS, 1
	setflag FLAG_CLEAR_BEEHIVE_03
	waitmessage
	goto Maasje_Beehive_03_1


Maasje_Beehive_04::
	lock
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_04_2
	msgbox Maasje_Beehive_01_Text_3
	waitmessage
Maasje_Beehive_04_1:
	release
	return

Maasje_Beehive_04_2:
	goto_if_unset FLAG_CLEAR_BEEHIVE_04, Maasje_Beehive_04_5
	msgbox Maasje_Beehive_01_Text_2
	waitmessage
	goto Maasje_Beehive_04_1

Maasje_Beehive_04_5:
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_04_8
	goto Maasje_Beehive_04_1

Maasje_Beehive_04_8:
	msgbox Maasje_Beehive_01_Text_1
	addvar VAR_BEEKEEPER_GEURTS, 1
	setflag FLAG_CLEAR_BEEHIVE_04
	waitmessage
	goto Maasje_Beehive_04_1


Maasje_Beehive_05::
	lock
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_05_2
	msgbox Maasje_Beehive_01_Text_3
	waitmessage
Maasje_Beehive_05_1:
	release
	return

Maasje_Beehive_05_2:
	goto_if_unset FLAG_CLEAR_BEEHIVE_05, Maasje_Beehive_05_5
	msgbox Maasje_Beehive_01_Text_2
	waitmessage
	goto Maasje_Beehive_05_1

Maasje_Beehive_05_5:
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_05_8
	goto Maasje_Beehive_05_1

Maasje_Beehive_05_8:
	msgbox Maasje_Beehive_01_Text_1
	addvar VAR_BEEKEEPER_GEURTS, 1
	setflag FLAG_CLEAR_BEEHIVE_05
	waitmessage
	goto Maasje_Beehive_05_1


Maasje_Beehive_06::
	lock
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_06_2
	msgbox Maasje_Beehive_01_Text_3
	waitmessage
Maasje_Beehive_06_1:
	release
	return

Maasje_Beehive_06_2:
	goto_if_unset FLAG_CLEAR_BEEHIVE_06, Maasje_Beehive_06_5
	msgbox Maasje_Beehive_01_Text_2
	waitmessage
	goto Maasje_Beehive_06_1

Maasje_Beehive_06_5:
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_06_8
	goto Maasje_Beehive_06_1

Maasje_Beehive_06_8:
	msgbox Maasje_Beehive_01_Text_1
	addvar VAR_BEEKEEPER_GEURTS, 1
	setflag FLAG_CLEAR_BEEHIVE_06
	waitmessage
	playmoncry SPECIES_VOLBEAT, CRY_MODE_ENCOUNTER
	msgbox Maasje_Beehive_06_Text_0
	waitmessage
	waitmoncry
	createmon 1, 0, SPECIES_VOLBEAT, 8
	dowildbattle
	goto Maasje_Beehive_06_1


Maasje_Beehive_07::
	lock
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_07_2
	msgbox Maasje_Beehive_01_Text_3
	waitmessage
Maasje_Beehive_07_1:
	release
	return

Maasje_Beehive_07_2:
	goto_if_unset FLAG_CLEAR_BEEHIVE_07, Maasje_Beehive_07_5
	msgbox Maasje_Beehive_01_Text_2
	waitmessage
	goto Maasje_Beehive_07_1

Maasje_Beehive_07_5:
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_07_8
	goto Maasje_Beehive_07_1

Maasje_Beehive_07_8:
	msgbox Maasje_Beehive_01_Text_1
	addvar VAR_BEEKEEPER_GEURTS, 1
	setflag FLAG_CLEAR_BEEHIVE_07
	waitmessage
	goto Maasje_Beehive_07_1


Maasje_Beehive_08::
	lock
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_08_2
	msgbox Maasje_Beehive_01_Text_3
	waitmessage
Maasje_Beehive_08_1:
	release
	return

Maasje_Beehive_08_2:
	goto_if_unset FLAG_CLEAR_BEEHIVE_08, Maasje_Beehive_08_5
	msgbox Maasje_Beehive_01_Text_2
	waitmessage
	goto Maasje_Beehive_08_1

Maasje_Beehive_08_5:
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_08_8
	goto Maasje_Beehive_08_1

Maasje_Beehive_08_8:
	msgbox Maasje_Beehive_01_Text_1
	addvar VAR_BEEKEEPER_GEURTS, 1
	setflag FLAG_CLEAR_BEEHIVE_08
	waitmessage
	playmoncry SPECIES_ILLUMISE, CRY_MODE_ENCOUNTER
	msgbox Maasje_Beehive_06_Text_0
	waitmessage
	waitmoncry
	createmon 1, 0, SPECIES_ILLUMISE, 8
	dowildbattle
	goto Maasje_Beehive_08_1


Maasje_Joris_UpToTheWhiteLight::
	lock
	faceplayer
	setflag FLAG_UP_TO_THE_WHITELIGHT_MAASJE
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	msgbox Maasje_Joris_UpToTheWhiteLight_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 5, Maasje_Joris_UpToTheWhiteLight_Movement_0
	delay 40
	setspeaker Maasje_Joris_UpToTheWhiteLight_Text_1
	msgbox Maasje_Joris_UpToTheWhiteLight_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, Maasje_Joris_UpToTheWhiteLight_Movement_1
	delay 40
	compare VAR_TEMP_0, 49
	goto_if_eq Maasje_Joris_UpToTheWhiteLight_4
Maasje_Joris_UpToTheWhiteLight_3:
	applymovement 5, Maasje_Joris_UpToTheWhiteLight_Movement_3
Maasje_Joris_UpToTheWhiteLight_1:
	waitmovement
	removeobject 5
	release
	return

Maasje_Joris_UpToTheWhiteLight_2:
	applymovement 5, Maasje_Joris_UpToTheWhiteLight_Movement_2
	goto Maasje_Joris_UpToTheWhiteLight_1

Maasje_Joris_UpToTheWhiteLight_4:
	compare VAR_TEMP_1, 34
	goto_if_eq Maasje_Joris_UpToTheWhiteLight_2
	goto Maasje_Joris_UpToTheWhiteLight_3


Maasje_Evenscript_Rick::
	trainerbattle_single TRAINER_RICK_MAASJE_SK, Maasje_Text_RickIntro, Maasje_Text_RickDefeated
	msgbox Maasje_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Evenscript_Allen::
	trainerbattle_single TRAINER_ALLEN_MAASJE_SK, Maasje_Text_AllenIntro, Maasje_Text_AllenDefeated
	msgbox Maasje_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Eventscript_Ivan::
	trainerbattle_single TRAINER_IVAN_MAASJE_SK, Maasje_Text_IvanIntro, Maasje_Text_IvanDefeated
	msgbox Maasje_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Eventscript_Winston::
	trainerbattle_single TRAINER_WINSTON_1_SK, Maasje_Text_WinstonIntro, Maasje_Text_WinstonDefeated
	msgbox Maasje_Text_WinstonPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Eventscript_Maniac::
	lock
	faceplayer
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Maasje_Eventscript_Maniac_1
	msgbox Maasje_Eventscript_Maniac_Text_1
	release
	end

Maasje_Eventscript_Maniac_1:
	msgbox Maasje_Eventscript_Maniac_Text_0
	release
	end


Maasje_EventScript_Tiana::
	trainerbattle_single TRAINER_TIANA_SK, Maasje_Text_TianaIntro, Maasje_Text_TianaDefeated
	msgbox Maasje_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_PeteLongfellow_Crabs_Gymhill_Movement_0:
	face_left
	step_end

Maasje_PeteLongfellow_Crabs_Gymhill_Movement_1:
	face_player
	step_end

Maasje_Joris_UpToTheWhiteLight_Movement_0:
	walk_in_place_fast_down
	step_end

Maasje_Joris_UpToTheWhiteLight_Movement_1:
	emote_question_mark
	step_end

Maasje_Joris_UpToTheWhiteLight_Movement_2:
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_down
	walk_fast_down
	step_end

Maasje_Joris_UpToTheWhiteLight_Movement_3:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	step_end

Maasje_Sign_Welcome_Text_0:
	.string "MASO TOWN\n"
	.string "Home to people, and crustaceans.$"

Maasje_Sign_Jakub_Home_Text_0:
	.string "Jacob's House$"

Maasje_Sign_Gym_Text_0:
	.string "MASO Gym:\n"
	.string "Where sand rules the world.$"

Maasje_Sign_Hill_Text_0:
	.string "{UP_ARROW} PokeGym\n"
	.string "{DOWN_ARROW} The beach$"

Maasje_Sign_Beekeeper_Text_0:
	.string "Beekeeper Smells's House$"

Maasje_Sign_CrabHill_Text_0:
	.string "CRAB HILL:\n"
	.string "WARNING! EASY TO GET LOST! TAKE CARE!$"

Maasje_Tree_Boy_Cut_Text_0:
	.string "The rain in the Cloud Forest makes\n"
	.string "trees grow back overnight.\p"
	.string "Luckely you only need a POKéMON that\n"
	.string "CAN learn Cut in your party - no need to\l"
	.string "actually teach it.\p"
	.string "More room for the good moves, am I\n"
	.string "right!$"

Maasje_Sign_NextRoute_Text_0:
	.string "{UP_ARROW} The Cloud Forest\n"
	.string "Enter on own risk, or with a guide.$"

Maasje_Collect_Honey_BeeHives_Text_0:
	.string "You have collected honey from the\n"
	.string "beehive.$"

Maasje_PeteLongfellow_Crabs_Gymhill_Text_0:
	.string "PETE$"

Maasje_PeteLongfellow_Crabs_Gymhill_Text_1:
	.string "Ah, a challenger! Or, no...$"

Maasje_PeteLongfellow_Crabs_Gymhill_Text_2:
	.string "LOOK at this, how am I supposed to-$"

Maasje_PeteLongfellow_Crabs_Gymhill_Text_3:
	.string "...sorry. Sorry.\p"
	.string "I'm PETE LONGFELLOW, the gym leader\n"
	.string "here. For what that's worth right now.\p"
	.string "The gym is CLOSED. Just look at them!\p"
	.string "In all my years sailing every sea this\n"
	.string "world has to offer...\p"
	.string "...through the pages of my finest\n"
	.string "geography books, of course...\p"
	.string "I have NEVER once come across\n"
	.string "behaviour like this. Never!\p"
	.string "...I just don't understand it.\p"
	.string "Come back another time. Please. Once\n"
	.string "this sorts itself out.$"

Maasje_PeteLongfellow_Crabs_Gymhill_Text_4:
	.string "Oh - h-hello there.\p"
	.string "Sorry, I'm Pete Longfellow, the gym\n"
	.string "leader. You catching me out here\l"
	.string "instead of in the gym is, frankly, a\l"
	.string "little humiliating.\p"
	.string "But! Good news, the crabs seem back to\n"
	.string "normal. FINALLY.\p"
	.string "...They still need time to adjust and get\n"
	.string "back to the sea, though, so don't get\l"
	.string "any ideas.\p"
	.string "Come back at the end of the day and the\n"
	.string "gym is yours to challenge.\p"
	.string "Until then, go have a look around town.\n"
	.string "Or something.$"

Maasje_PeteLongfellow_Crabs_Gymhill_Text_5:
	.string "Still! Still not past these blasted\n"
	.string "crabs!\p"
	.string "...Come back another time. Once this\n"
	.string "sorts itself out.$"

Maasje_PeteLongfellow_Crabs_Gymhill_Text_6:
	.string "Right, right, the crabs are back to\n"
	.string "normal, but they still need time before\l"
	.string "I can let anyone through.\p"
	.string "Come back at the end of the day, the\n"
	.string "gym will be ready.\p"
	.string "...Go look around town in the meantime,\n"
	.string "would you?$"

Maasje_Advice_Fisher_Crabhill_Text_0:
	.string "Whoa there, planning on going in?\p"
	.string "That place can be a tricky maze. Here,\n"
	.string "take this with you, just in case.$"

Maasje_Advice_Fisher_Crabhill_Text_1:
	.string "It's an Escape Rope. A real lifesaver if\n"
	.string "you ever feel hopelessly lost!$"

Maasje_Advice_Fisher_Crabhill_Text_2:
	.string "Can you believe this whole place was\n"
	.string "once an underwater reef?\p"
	.string "Thanks to the tireless work of crabs,\n"
	.string "the reef grew over time, creating this\l"
	.string "safe haven for Pokémon.$"

Maasje_Beehive_01_Text_0:
	.string "This beehive seems full of honey, do you\n"
	.string "want to collect it?$"

Maasje_Beehive_01_Text_1:
	.string "{PLAYER} collected the honey.$"

Maasje_Beehive_01_Text_2:
	.string "The beehive is empty. Better look for\n"
	.string "another hive.$"

Maasje_Beehive_01_Text_3:
	.string "It's a beehive, better not touch it.$"

Maasje_Beehive_06_Text_0:
	.string "......BZZZZZZZZZZZZZZ$"

Maasje_Joris_UpToTheWhiteLight_Text_0:
	.string "...$"

Maasje_Joris_UpToTheWhiteLight_Text_1:
	.string "?????$"

Maasje_Joris_UpToTheWhiteLight_Text_2:
	.string "UP TO THE WHITELIGHT!!!$"

Maasje_Eventscript_Maniac_Text_0:
	.string "This town is overrun by Krabby's.\p"
	.string "Everybody is scared to go outside.\p"
	.string "I still need groceries though, so I'm\n"
	.string "taking the risk!$"

Maasje_Eventscript_Maniac_Text_1:
	.string "Everybody is still shook by the\n"
	.string "infestation by those Krabby's.\p"
	.string "You won't seem them outside very often.\p"
	.string "Hopefully one day everyting will be\n"
	.string "back to normal.$"

Maasje_Text_RickIntro::
	.string "Hahah! Our eyes met!\n"
	.string "I'll take you on with my BUG POKéMON!$"

Maasje_Text_RickDefeated::
	.string "Ow! Down and out!$"

Maasje_Text_RickPostBattle::
	.string "If you lock eyes with a TRAINER,\n"
	.string "you have to challenge! It's a rule!$"

Maasje_Text_AllenIntro::
	.string "Did you just become a TRAINER?\n"
	.string "We're both beginners!$"

Maasje_Text_AllenDefeated::
	.string "I called you because I thought\n"
	.string "I could beat you…$"

Maasje_Text_AllenPostBattle::
	.string "I haven't won once yet…\n"
	.string "I wish I would win soon…$"

Maasje_Text_IvanIntro::
	.string "Why keep it a secret?\n"
	.string "I'm the WATER POKéMON expert!\p"
	.string "Huh?\n"
	.string "You don't know me?$"

Maasje_Text_IvanDefeated::
	.string "I thought I wasn't too bad, if I may\n"
	.string "say so, but I guess not… Bleah…$"

Maasje_Text_IvanPostBattle::
	.string "I got too into fishing.\n"
	.string "I forgot I had to raise my POKéMON…$"

Maasje_Text_WinstonIntro::
	.string "Oh, sure, I'll accept your challenge.\n"
	.string "I have a lot of money.$"

Maasje_Text_WinstonDefeated::
	.string "Why couldn't I win?$"

Maasje_Text_WinstonPostBattle::
	.string "There are some things money can't buy.\n"
	.string "That's POKéMON…$"

Maasje_Text_TianaIntro::
	.string "I'm going to keep winning and aim\n"
	.string "to be the best TRAINER.\p"
	.string "Help me further my career!$"

Maasje_Text_TianaDefeated::
	.string "I ended up furthering your career…$"

Maasje_Text_TianaPostBattle::
	.string "To keep winning my way up, I see that\n"
	.string "I have to catch more POKéMON.$"
