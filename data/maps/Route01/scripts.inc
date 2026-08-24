Route01_MapScripts::
	.byte 0


Route01_Text_Route01::
	lock
	msgbox Route01_Text_Route01_Text_0, MSGBOX_SIGN
	waitmessage
	release
	return


Route01_Convo_Bugcatcher::
	lock
	applymovement 4, Route01_Convo_Bugcatcher_Movement_0
	msgbox Route01_Convo_Bugcatcher_Text_0
	waitmessage
	release
	return


Route01_Convo_Fatman::
	lock
	msgbox Route01_Convo_Fatman_Text_0
	waitmessage
	release
	return


Route01_Convo_ExIntern::
	lock
	applymovement 6, Route01_Convo_Bugcatcher_Movement_0
	msgbox Route01_Convo_ExIntern_Text_0
	release
	return


Route01_Factulty_Grunts_Position1::
	lockall
	playse SE_PIN
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_0
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_0
	delay 40
	playse MUS_AQUA_MAGMA_HIDEOUT
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_1
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_2
	call Route01_Battle_Factulty_Grunts
	setspeaker Route01_Factulty_Grunts_Position1_Text_0
	msgbox Route01_Factulty_Grunts_Position1_Text_1, MSGBOX_AUTOCLOSE
	setflag FLAG_FACULTY_GRUNTS_ROUT01
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_3
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_3
	waitmovement
	removeobject 2
	removeobject 3
	setvar VAR_RECIEVED_STARTER_POKEMON, 3
	releaseall
	return


Route01_Factulty_Grunts_Position2::
	lockall
	playse SE_PIN
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_0
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_0
	delay 40
	playse MUS_AQUA_MAGMA_HIDEOUT
	applymovement 2, Route01_Factulty_Grunts_Position2_Movement_0
	applymovement 3, Route01_Factulty_Grunts_Position2_Movement_1
	call Route01_Battle_Factulty_Grunts
	setspeaker Route01_Factulty_Grunts_Position1_Text_0
	msgbox Route01_Factulty_Grunts_Position1_Text_1, MSGBOX_AUTOCLOSE
	setflag FLAG_FACULTY_GRUNTS_ROUT01
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_3
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_3
	waitmovement
	removeobject 2
	removeobject 3
	setvar VAR_RECIEVED_STARTER_POKEMON, 3
	releaseall
	return


Route01_Factulty_Grunts_Position3::
	lockall
	playse SE_PIN
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_0
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_0
	delay 40
	playse MUS_AQUA_MAGMA_HIDEOUT
	applymovement 2, Route01_Factulty_Grunts_Position3_Movement_0
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_1
	call Route01_Battle_Factulty_Grunts2
	setspeaker Route01_Factulty_Grunts_Position1_Text_0
	msgbox Route01_Factulty_Grunts_Position1_Text_1, MSGBOX_AUTOCLOSE
	setflag FLAG_FACULTY_GRUNTS_ROUT01
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_3
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_3
	waitmovement
	removeobject 2
	removeobject 3
	setvar VAR_RECIEVED_STARTER_POKEMON, 3
	releaseall
	return


Route01_Factulty_Grunts_Position4::
	lockall
	playse SE_PIN
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_0
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_0
	delay 40
	playse MUS_AQUA_MAGMA_HIDEOUT
	applymovement 2, Route01_Factulty_Grunts_Position4_Movement_0
	applymovement 3, Route01_Factulty_Grunts_Position4_Movement_1
	call Route01_Battle_Factulty_Grunts2
	setspeaker Route01_Factulty_Grunts_Position1_Text_0
	msgbox Route01_Factulty_Grunts_Position1_Text_1, MSGBOX_AUTOCLOSE
	setflag FLAG_FACULTY_GRUNTS_ROUT01
	applymovement 2, Route01_Factulty_Grunts_Position4_Movement_2
	applymovement 3, Route01_Factulty_Grunts_Position4_Movement_2
	waitmovement
	removeobject 2
	removeobject 3
	setvar VAR_RECIEVED_STARTER_POKEMON, 3
	releaseall
	return


Route01_Battle_Factulty_Grunts::
	setspeaker Route01_Battle_Factulty_Grunts_Text_0
	msgbox Route01_Battle_Factulty_Grunts_Text_1
	waitmessage
	trainerbattle_no_intro TRAINER_GRUNT_FACULTY_1, Route01_Loss_Ton_Cross
	playse MUS_AQUA_MAGMA_HIDEOUT
	applymovement LOCALID_PLAYER, Route01_Battle_Factulty_Grunts_Movement_0
	setspeaker Route01_Factulty_Grunts_Position1_Text_0
	msgbox Route01_Battle_Factulty_Grunts_Text_2
	waitmessage
	trainerbattle_no_intro TRAINER_GRUNT_FACULTY_2, Route01_Loss_Ad_Dice
	waitse
	return


Route01_Battle_Factulty_Grunts2::
	setspeaker Route01_Battle_Factulty_Grunts_Text_0
	msgbox Route01_Battle_Factulty_Grunts_Text_1
	waitmessage
	trainerbattle_no_intro TRAINER_GRUNT_FACULTY_1, Route01_Loss_Ton_Cross
	playse MUS_AQUA_MAGMA_HIDEOUT
	applymovement LOCALID_PLAYER, Route01_Battle_Factulty_Grunts2_Movement_0
	setspeaker Route01_Factulty_Grunts_Position1_Text_0
	msgbox Route01_Battle_Factulty_Grunts_Text_2
	waitmessage
	trainerbattle_no_intro TRAINER_GRUNT_FACULTY_2, Route01_Loss_Ad_Dice
	waitse
	return


Route01_EventScript_Calvin::
	trainerbattle_single TRAINER_CALVIN_1, Route01_Text_CalvinIntro, Route01_Text_CalvinDefeated
	msgbox Route01_Text_CalvinPostBattle, MSGBOX_AUTOCLOSE
	end


Route01_EventScript_James::
	trainerbattle_single TRAINER_JAMES_1, Route01_Text_JamesIntro, Route01_Text_JamesDefeated
	msgbox Route01_Text_JamesPostBattle, MSGBOX_AUTOCLOSE
	end


Route01_Convo_Bugcatcher_Movement_0:
	face_player
	step_end

Route01_Factulty_Grunts_Position1_Movement_0:
	emote_exclamation_mark
	step_end

Route01_Factulty_Grunts_Position1_Movement_1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route01_Factulty_Grunts_Position1_Movement_2:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

Route01_Factulty_Grunts_Position1_Movement_3:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route01_Factulty_Grunts_Position2_Movement_0:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route01_Factulty_Grunts_Position2_Movement_1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_player
	step_end

Route01_Factulty_Grunts_Position3_Movement_0:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Route01_Factulty_Grunts_Position4_Movement_0:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Route01_Factulty_Grunts_Position4_Movement_1:
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route01_Factulty_Grunts_Position4_Movement_2:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route01_Battle_Factulty_Grunts_Movement_0:
	face_up
	step_end

Route01_Battle_Factulty_Grunts2_Movement_0:
	face_down
	step_end

Route01_Text_Route01_Text_0:
	.string "ROUTE 1\n"
	.string "{LEFT_ARROW} MOSA TOWN\p"
	.string "{RIGHT_ARROW} ERP TOWN$"

Route01_Convo_Bugcatcher_Text_0:
	.string "This place is the perfect place to\n"
	.string "catch some pidgeys.\p"
	.string "Although lately they seem to be a little\n"
	.string "on edge.\p"
	.string "Yesterday I saw a curly tail sticking\n"
	.string "out of the grass, but I'm pretty sure it\l"
	.string "wasn't a Rattata or Sentret.\p"
	.string "Maybe my eyes decieved me...$"

Route01_Convo_Fatman_Text_0:
	.string "A clearing is visible through the trees,\n"
	.string "but the path is overgrown.\p"
	.string "Someone will have to clear the bushes\n"
	.string "to get to that place.$"

Route01_Convo_ExIntern_Text_0:
	.string "I used to be an intern for Professor\n"
	.string "Birds.\p"
	.string "The day he told me to carve a hole in a\n"
	.string "stone wall, I quit.$"

Route01_Factulty_Grunts_Position1_Text_0:
	.string "AD$"

Route01_Factulty_Grunts_Position1_Text_1:
	.string "Argh, nevermind.\p"
	.string "That Pokemon isn't worth registrating\n"
	.string "anyway.\p"
	.string "He barely listens to his owner and he\n"
	.string "has a weak personality.\p"
	.string "The Faculty would discard him right\n"
	.string "away!\p"
	.string "Let's go ADDY. Forget this kid.\p"
	.string "We got more important things to do.$"

Route01_Battle_Factulty_Grunts_Text_0:
	.string "ADDY$"

Route01_Battle_Factulty_Grunts_Text_1:
	.string "Do you have registration for that\n"
	.string "Pokémon?\p"
	.string "No registration?\p"
	.string "All unregistered Pokémon have to be\n"
	.string "confiscated by The Faculty!\p"
	.string "Let me take on this loser, AD.$"

Route01_Battle_Factulty_Grunts_Text_2:
	.string "ADDY, you are an absolute loser, let me\n"
	.string "handle this prick.$"

Route01_Loss_Ton_Cross::
	.string "I used to wear more comfortable\n"
	.string "clothes, but the faculty forced me to\l"
	.string "wear this uniform.$"

Route01_Loss_Ad_Dice::
	.string "Being a janitor or losing a battle?\p"
	.string "I'd rather lose a battle than spend\n"
	.string "another minute with my old colleagues.$"

Route01_Text_CalvinIntro::
	.string "If you have POKéMON with you, then\n"
	.string "you're an official POKéMON TRAINER!\l"
	.string "You can't say no to my challenge!$"

Route01_Text_CalvinDefeated::
	.string "Arrgh, I lost…\n"
	.string "I should have trained mine more…$"

Route01_Text_CalvinPostBattle::
	.string "Listen, you. If you're strong,\n"
	.string "you should have told me before!$"

Route01_Text_JamesIntro::
	.string "If you take BUG POKéMON to school,\n"
	.string "you get to be instantly popular!$"

Route01_Text_JamesDefeated::
	.string "I can't be popular if I lose.$"

Route01_Text_JamesPostBattle::
	.string "If you have a big BUG POKéMON,\n"
	.string "people respect you for it.$"
