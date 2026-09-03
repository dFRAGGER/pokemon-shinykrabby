CrabhillEntrance_MapScripts::
	.byte 0


Crabhill_Jacob_in_need::
	applymovement LOCALID_PLAYER, Crabhill_Jacob_in_need_Movement_0
	setspeaker Crabhill_Jacob_in_need_Text_0
	msgbox Crabhill_Jacob_in_need_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	return


Crabhill_Faculty_Grunt_Signal::
	lock
	hidefollower
	faceplayer
	setspeaker Crabhill_Faculty_Grunt_Signal_Text_0
	msgbox Crabhill_Faculty_Grunt_Signal_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, Crabhill_Faculty_Grunt_Signal_Movement_0
	waitmovement
	setspeaker Crabhill_Faculty_Grunt_Signal_Text_0
	msgbox Crabhill_Faculty_Grunt_Signal_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_PIN
	applymovement 34, Crabhill_Faculty_Grunt_Signal_Movement_1
	waitmovement
	setspeaker Crabhill_Faculty_Grunt_Signal_Text_0
	msgbox Crabhill_Faculty_Grunt_Signal_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 34, Crabhill_Faculty_Grunt_Signal_Movement_2
	waitmovement
	setspeaker Crabhill_Faculty_Grunt_Signal_Text_0
	msgbox Crabhill_Faculty_Grunt_Signal_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_M_EXPLOSION
	fadescreen FADE_TO_WHITE
	fadescreen FADE_FROM_WHITE
	applymovement 34, Crabhill_Faculty_Grunt_Signal_Movement_0
	waitmovement
	setspeaker Crabhill_Faculty_Grunt_Signal_Text_0
	msgbox Crabhill_Faculty_Grunt_Signal_Text_5, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 34, Crabhill_Faculty_Grunt_Signal_Movement_3
	waitmovement
	setspeaker Crabhill_Faculty_Grunt_Signal_Text_0
	msgbox Crabhill_Faculty_Grunt_Signal_Text_6, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, Crabhill_Faculty_Grunt_Signal_Movement_4
	applymovement 34, Crabhill_Faculty_Grunt_Signal_Movement_5
	waitmovement
	removeobject 34
	call Won_or_Caught
	setvar VAR_MEESTRECH_TOWN_STATE, 1
	clearflag FLAG_TEMP_HIDE_FOLLOWER
	release
	end


Crabhill_Eventscript_ShinykrabbyEncounter::
	lock
	playmoncry SPECIES_KRABBY, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_NOCATCH_ENCOUNTER
	createmon 1, 0, SPECIES_KRABBY, 10, , , , , , , , , , , , , , , , , , , , , , SHINY_MODE_ALWAYS, , 
	dowildbattle
	clearflag FLAG_NOCATCH_ENCOUNTER
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Crabhill_Eventscript_ShinykrabbyEncounter_2
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Crabhill_Eventscript_ShinykrabbyEncounter_3
Crabhill_Eventscript_ShinykrabbyEncounter_1:
	setvar VAR_MEESTRECH_TOWN_STATE, 1
	release
	return

Crabhill_Eventscript_ShinykrabbyEncounter_2:
	call Won_or_Caught
	goto Crabhill_Eventscript_ShinykrabbyEncounter_1

Crabhill_Eventscript_ShinykrabbyEncounter_3:
	clearflag FLAG_NOCATCH_ENCOUNTER
	goto Crabhill_Eventscript_ShinykrabbyEncounter_1


Won_or_Caught::
	msgbox Won_or_Caught_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 31, Won_or_Caught_Movement_0
	applymovement 30, Won_or_Caught_Movement_1
	applymovement 29, Won_or_Caught_Movement_1
	applymovement 32, Won_or_Caught_Movement_2
	applymovement 28, Won_or_Caught_Movement_2
	applymovement 25, Won_or_Caught_Movement_3
	applymovement 27, Crabhill_Faculty_Grunt_Signal_Movement_5
	applymovement 26, Crabhill_Faculty_Grunt_Signal_Movement_5
	applymovement 2, Won_or_Caught_Movement_4
	applymovement 23, Won_or_Caught_Movement_4
	applymovement 22, Crabhill_Faculty_Grunt_Signal_Movement_5
	applymovement 24, Crabhill_Faculty_Grunt_Signal_Movement_5
	applymovement 33, Crabhill_Faculty_Grunt_Signal_Movement_5
	applymovement 1, Won_or_Caught_Movement_5
	waitmovement
	delay 60
	removeobject 31
	removeobject 33
	removeobject 30
	removeobject 29
	removeobject 32
	removeobject 28
	removeobject 25
	removeobject 27
	removeobject 26
	removeobject 2
	removeobject 23
	removeobject 22
	removeobject 24
	removeobject 1
	setspeaker Won_or_Caught_Text_1
	msgbox Won_or_Caught_Text_2, MSGBOX_AUTOCLOSE
	applymovement 21, Won_or_Caught_Movement_6
	waitmovement
	setobjectmovementtype LOCALID_JACOB, MOVEMENT_TYPE_NONE
	getobjectxy LOCALID_JACOB, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
	delay 120
	compare VAR_TEMP_0, 32
	goto_if_eq Won_or_Caught_4
Won_or_Caught_3:
	applymovement 21, Won_or_Caught_Movement_8
	waitmovement
Won_or_Caught_1:
	setspeaker Crabhill_Jacob_in_need_Text_0
	msgbox Won_or_Caught_Text_3
	setspeaker Won_or_Caught_Text_1
	msgbox Won_or_Caught_Text_4, MSGBOX_AUTOCLOSE
	applymovement 21, Crabhill_Faculty_Grunt_Signal_Movement_5
	waitmovement
	removeobject 21
	setflag FLAG_SHINY_KRABBY_ENCOUNTER
	clearflag FLAG_HIDE_JACOB_SIENNA
	return

Won_or_Caught_2:
	applymovement 21, Won_or_Caught_Movement_7
	waitmovement
	goto Won_or_Caught_1

Won_or_Caught_4:
	compare VAR_TEMP_1, 13
	goto_if_eq Won_or_Caught_2
	goto Won_or_Caught_3


Krabby_won::
	playmoncry SPECIES_KRABBY, CRY_MODE_ENCOUNTER
	msgbox Krabby_won_Text_0, MSGBOX_AUTOCLOSE
	fadescreen FADE_TO_BLACK
	removeobject 1
	fadescreen FADE_FROM_BLACK
	msgbox Krabby_won_Text_1
	return


Crabhill_Krabby_Cry::
	playmoncry SPECIES_KRABBY, CRY_MODE_NORMAL
	return


Crabhill_Wall_Carving::
	lock
	msgbox Crabhill_Wall_Carving_Text_0
	release
	return


Crabhill_Hiker_Hint::
	lock
	faceplayer
	msgbox Crabhill_Hiker_Hint_Text_0
	waitmessage
	release
	return


Crabhill_Faculty_Lost_grunt::
	lock
	faceplayer
	setspeaker Crabhill_Faculty_Lost_grunt_Text_0
	msgbox Crabhill_Faculty_Lost_grunt_Text_1
	waitmessage
	release
	return


CrabhillEntrance_EventScript_Lyle::
	trainerbattle_single TRAINER_LYLE_SK, CrabhillEntrance_Text_LyleIntro, CrabhillEntrance_Text_LyleDefeated
	msgbox CrabhillEntrance_Text_LylePostBattle, MSGBOX_AUTOCLOSE
	end


Crabhill_Jacob_in_need_Movement_0:
	walk_up
	walk_up
	walk_up
	walk_up
	face_left
	step_end

Crabhill_Faculty_Grunt_Signal_Movement_0:
	jump_down
	face_up
	step_end

Crabhill_Faculty_Grunt_Signal_Movement_1:
	face_up
	emote_exclamation_mark
	step_end

Crabhill_Faculty_Grunt_Signal_Movement_2:
	walk_up
	step_end

Crabhill_Faculty_Grunt_Signal_Movement_3:
	face_down
	step_end

Crabhill_Faculty_Grunt_Signal_Movement_4:
	jump_left
	face_down
	step_end

Crabhill_Faculty_Grunt_Signal_Movement_5:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Won_or_Caught_Movement_0:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Won_or_Caught_Movement_1:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Won_or_Caught_Movement_2:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Won_or_Caught_Movement_3:
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Won_or_Caught_Movement_4:
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Won_or_Caught_Movement_5:
	walk_down
	walk_right
	jump_2_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Won_or_Caught_Movement_6:
	walk_slow_left
	walk_slow_right
	walk_slow_left
	walk_slow_right
	step_end

Won_or_Caught_Movement_7:
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Won_or_Caught_Movement_8:
	walk_right
	walk_right
	face_up
	step_end

Crabhill_Jacob_in_need_Text_0:
	.string "?????$"

Crabhill_Jacob_in_need_Text_1:
	.string "HEY!\n"
	.string "HELP ME!\p"
	.string "I'M SO TIRED!\p"
	.string "STOP THAT MAN OVER THERE!\p"
	.string "HE IS BROADCASTING SOMETHING...\p"
	.string "I CAN'T MOVE...\n"
	.string "NO, I MUST MOVE!!$"

Crabhill_Faculty_Grunt_Signal_Text_0:
	.string "AD$"

Crabhill_Faculty_Grunt_Signal_Text_1:
	.string "HEY, YOU AGAIN?!\n"
	.string "Step back boy!$"

Crabhill_Faculty_Grunt_Signal_Text_2:
	.string "Signal output nominal. All organic\n"
	.string "assets are oscillating in perfect\l"
	.string "synchronization.\p"
	.string "Look at this beautiful efficiency! This\n"
	.string "is the future of workforce\l"
	.string "optimization!$"

Crabhill_Faculty_Grunt_Signal_Text_3:
	.string "Wait. Anomaly detected.\p"
	.string "You there, the gold variant. Your neural\n"
	.string "pathways are rejecting the command.\p"
	.string "Compliance is not optional. Receive the\n"
	.string "input!$"

Crabhill_Faculty_Grunt_Signal_Text_4:
	.string "Why aren't you moving?!\p"
	.string "Increasing signal intensity to maximum\n"
	.string "voltage! Obey!$"

Crabhill_Faculty_Grunt_Signal_Text_5:
	.string "It... it deflected the carrier wave?!\p"
	.string "The feedback loop just fried the\n"
	.string "transmitter circuits!\p"
	.string "That carapace is acting like a mirror!$"

Crabhill_Faculty_Grunt_Signal_Text_6:
	.string "This data is completely anomalous!\p"
	.string "I am not paid enough for radioactive\n"
	.string "crustaceans!\p"
	.string "Tactical retreat! Abort mission!\p"
	.string "The boss is not going to be happy...$"

Won_or_Caught_Text_0:
	.string "The Krabby's seem to have snapped out\n"
	.string "of it!\p"
	.string "Whatever was controlling them... it\n"
	.string "stopped working.$"

Won_or_Caught_Text_1:
	.string "JACOB$"

Won_or_Caught_Text_2:
	.string "Left... Right... Left... WHOA!$"

Won_or_Caught_Text_3:
	.string "Kid! You broke the trance!\p"
	.string "Thank Arceus... another five minutes of\n"
	.string "that and my legs would have fallen right\l"
	.string "off!\p"
	.string "Nice to meet you, my name is JACOB$"

Won_or_Caught_Text_4:
	.string "But did you see it?!\p"
	.string "A Krabby!\p"
	.string "The single most magnificent creature\n"
	.string "to sidle on this earth!\p"
	.string "People talk about Dragonites or\n"
	.string "Tyranitars... pshh!\p"
	.string "Look at that carapace!\p"
	.string "Look at that perfect pincer geometry!\p"
	.string "It is the peak of evolution!\p"
	.string "The best Pokémon in the whole wide\n"
	.string "world, bar none!\p"
	.string "And this one...\n"
	.string "a golden King...\n"
	.string "and it got away...\p"
	.string "Truly, a dark day for science.\p"
	.string "Wait...\p"
	.string "How long was I doing the side-step\n"
	.string "shuffle?\p"
	.string "Oh no.\n"
	.string "Oh no no no.\p"
	.string "I left without telling my wife!\p"
	.string "She's probably barricaded the door by\n"
	.string "now!\p"
	.string "If I don't get back before dark, she's\n"
	.string "going to be scarier than a Gyarados!\p"
	.string "I gotta run!\p"
	.string "You are welcome to join for dinner!$"

Krabby_won_Text_0:
	.string "KRABBY, KRAB-BY!$"

Krabby_won_Text_1:
	.string "The shiny Krabby fled through a crack\n"
	.string "in the wall, the other krabby's seem\l"
	.string "still confused.$"

Crabhill_Wall_Carving_Text_0:
	.string "Carved into the damp cave wall,\n"
	.string "glistening with moisture:\p"
	.string "When stone weeps and the tide is low, a\n"
	.string "claw of gold shall start to glow. Its\l"
	.string "light awaits the destined hand, who will\l"
	.string "soon command the land.$"

Crabhill_Hiker_Hint_Text_0:
	.string "I have been in this cave for hours.\p"
	.string "The more time I spend in here the more I\n"
	.string "realize going backwards might be going\l"
	.string "forward, and the other way around.\p"
	.string "If you know what I mean.$"

Crabhill_Faculty_Lost_grunt_Text_0:
	.string "ADDY$"

Crabhill_Faculty_Lost_grunt_Text_1:
	.string "Pfffff... Every room looks exactly the\n"
	.string "same...\p"
	.string "I lost my colleague a while ago in here...\p"
	.string "Have you seen him?\p"
	.string "Wait... Your face...\p"
	.string "Do we know each other?$"

CrabhillEntrance_Text_LyleIntro::
	.string "I caught a whole bunch of POKéMON!\p"
	.string "Go, go, go!\n"
	.string "My CRUSTACEAN POKéMON team!$"

CrabhillEntrance_Text_LyleDefeated::
	.string "I have all these POKéMON,\n"
	.string "but I couldn't win…$"

CrabhillEntrance_Text_LylePostBattle::
	.string "I caught a bunch of POKéMON.\n"
	.string "Now I'm out of POKé BALLS.$"
