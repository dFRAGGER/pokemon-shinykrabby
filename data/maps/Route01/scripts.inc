Route01_MapScripts::
	.byte 0


Route01_Convo_Bugcatcher::
# 6 "data/maps/Route01/scripts.pory"
	lock
# 7 "data/maps/Route01/scripts.pory"
	applymovement 4, Route01_Convo_Bugcatcher_Movement_0
# 8 "data/maps/Route01/scripts.pory"
	msgbox Route01_Convo_Bugcatcher_Text_0
# 9 "data/maps/Route01/scripts.pory"
	waitmessage
# 10 "data/maps/Route01/scripts.pory"
	release
	return


Route01_Convo_Fatman::
# 14 "data/maps/Route01/scripts.pory"
	lock
# 15 "data/maps/Route01/scripts.pory"
	msgbox Route01_Convo_Fatman_Text_0
# 16 "data/maps/Route01/scripts.pory"
	waitmessage
# 17 "data/maps/Route01/scripts.pory"
	release
	return


Route01_Convo_ExIntern::
# 21 "data/maps/Route01/scripts.pory"
	lock
# 22 "data/maps/Route01/scripts.pory"
	applymovement 6, Route01_Convo_Bugcatcher_Movement_0
# 23 "data/maps/Route01/scripts.pory"
	msgbox Route01_Convo_ExIntern_Text_0
# 24 "data/maps/Route01/scripts.pory"
	release
	return


Route01_Factulty_Grunts_Position1::
# 28 "data/maps/Route01/scripts.pory"
	lockall
# 29 "data/maps/Route01/scripts.pory"
	playse SE_PIN
# 30 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_0
# 31 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_0
# 32 "data/maps/Route01/scripts.pory"
	delay 40
# 33 "data/maps/Route01/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 34 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_1
# 35 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_2
# 36 "data/maps/Route01/scripts.pory"
	call Route01_Battle_Factulty_Grunts
# 37 "data/maps/Route01/scripts.pory"
	msgbox Route01_Factulty_Grunts_Position1_Text_0, MSGBOX_AUTOCLOSE
# 38 "data/maps/Route01/scripts.pory"
	setflag FLAG_FACULTY_GRUNTS_ROUT01
# 39 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_3
# 40 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_3
# 41 "data/maps/Route01/scripts.pory"
	waitmovement
# 42 "data/maps/Route01/scripts.pory"
	removeobject 2
# 43 "data/maps/Route01/scripts.pory"
	removeobject 3
# 44 "data/maps/Route01/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 3
# 45 "data/maps/Route01/scripts.pory"
	releaseall
	return


Route01_Factulty_Grunts_Position2::
# 49 "data/maps/Route01/scripts.pory"
	lockall
# 50 "data/maps/Route01/scripts.pory"
	playse SE_PIN
# 51 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_0
# 52 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_0
# 53 "data/maps/Route01/scripts.pory"
	delay 40
# 54 "data/maps/Route01/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 55 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position2_Movement_0
# 56 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position2_Movement_1
# 57 "data/maps/Route01/scripts.pory"
	call Route01_Battle_Factulty_Grunts
# 58 "data/maps/Route01/scripts.pory"
	msgbox Route01_Factulty_Grunts_Position2_Text_0, MSGBOX_AUTOCLOSE
# 59 "data/maps/Route01/scripts.pory"
	setflag FLAG_FACULTY_GRUNTS_ROUT01
# 60 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_3
# 61 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_3
# 62 "data/maps/Route01/scripts.pory"
	waitmovement
# 63 "data/maps/Route01/scripts.pory"
	removeobject 2
# 64 "data/maps/Route01/scripts.pory"
	removeobject 3
# 65 "data/maps/Route01/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 3
# 66 "data/maps/Route01/scripts.pory"
	releaseall
	return


Route01_Factulty_Grunts_Position3::
# 70 "data/maps/Route01/scripts.pory"
	lockall
# 71 "data/maps/Route01/scripts.pory"
	playse SE_PIN
# 72 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_0
# 73 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_0
# 74 "data/maps/Route01/scripts.pory"
	delay 40
# 75 "data/maps/Route01/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 76 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position3_Movement_0
# 77 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_1
# 78 "data/maps/Route01/scripts.pory"
	call Route01_Battle_Factulty_Grunts
# 79 "data/maps/Route01/scripts.pory"
	msgbox Route01_Factulty_Grunts_Position2_Text_0, MSGBOX_AUTOCLOSE
# 80 "data/maps/Route01/scripts.pory"
	setflag FLAG_FACULTY_GRUNTS_ROUT01
# 81 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_3
# 82 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_3
# 83 "data/maps/Route01/scripts.pory"
	waitmovement
# 84 "data/maps/Route01/scripts.pory"
	removeobject 2
# 85 "data/maps/Route01/scripts.pory"
	removeobject 3
# 86 "data/maps/Route01/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 3
# 87 "data/maps/Route01/scripts.pory"
	releaseall
	return


Route01_Factulty_Grunts_Position4::
# 91 "data/maps/Route01/scripts.pory"
	lockall
# 92 "data/maps/Route01/scripts.pory"
	playse SE_PIN
# 93 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_0
# 94 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_0
# 95 "data/maps/Route01/scripts.pory"
	delay 40
# 96 "data/maps/Route01/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 97 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position4_Movement_0
# 98 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position4_Movement_1
# 99 "data/maps/Route01/scripts.pory"
	call Route01_Battle_Factulty_Grunts
# 100 "data/maps/Route01/scripts.pory"
	msgbox Route01_Factulty_Grunts_Position2_Text_0, MSGBOX_AUTOCLOSE
# 101 "data/maps/Route01/scripts.pory"
	setflag FLAG_FACULTY_GRUNTS_ROUT01
# 102 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position4_Movement_2
# 103 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position4_Movement_3
# 104 "data/maps/Route01/scripts.pory"
	waitmovement
# 105 "data/maps/Route01/scripts.pory"
	removeobject 2
# 106 "data/maps/Route01/scripts.pory"
	removeobject 3
# 107 "data/maps/Route01/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 3
# 108 "data/maps/Route01/scripts.pory"
	releaseall
	return


Route01_Battle_Factulty_Grunts::
# 114 "data/maps/Route01/scripts.pory"
	msgbox Route01_Battle_Factulty_Grunts_Text_0
# 115 "data/maps/Route01/scripts.pory"
	waitmessage
# 116 "data/maps/Route01/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_FACULTY_1, Route01_Loss_Ton_Cross
# 117 "data/maps/Route01/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 118 "data/maps/Route01/scripts.pory"
	msgbox Route01_Battle_Factulty_Grunts_Text_1
# 119 "data/maps/Route01/scripts.pory"
	waitmessage
# 120 "data/maps/Route01/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_FACULTY_2, Route01_Loss_Ad_Dice
# 121 "data/maps/Route01/scripts.pory"
	waitse
	return


# 7 "data/maps/Route01/scripts.pory"
Route01_Convo_Bugcatcher_Movement_0:
# 7 "data/maps/Route01/scripts.pory"
	face_player
	step_end

# 30 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position1_Movement_0:
# 30 "data/maps/Route01/scripts.pory"
	emote_exclamation_mark
	step_end

# 34 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position1_Movement_1:
# 34 "data/maps/Route01/scripts.pory"
	walk_right
# 34 "data/maps/Route01/scripts.pory"
	walk_right
# 34 "data/maps/Route01/scripts.pory"
	walk_right
# 34 "data/maps/Route01/scripts.pory"
	walk_right
# 34 "data/maps/Route01/scripts.pory"
	walk_right
# 34 "data/maps/Route01/scripts.pory"
	walk_right
	step_end

# 35 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position1_Movement_2:
# 35 "data/maps/Route01/scripts.pory"
	walk_right
# 35 "data/maps/Route01/scripts.pory"
	walk_right
# 35 "data/maps/Route01/scripts.pory"
	walk_right
# 35 "data/maps/Route01/scripts.pory"
	walk_right
# 35 "data/maps/Route01/scripts.pory"
	walk_right
# 35 "data/maps/Route01/scripts.pory"
	walk_right
# 35 "data/maps/Route01/scripts.pory"
	walk_right
# 35 "data/maps/Route01/scripts.pory"
	walk_down
	step_end

# 39 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position1_Movement_3:
# 39 "data/maps/Route01/scripts.pory"
	walk_left
# 39 "data/maps/Route01/scripts.pory"
	walk_left
# 39 "data/maps/Route01/scripts.pory"
	walk_left
# 39 "data/maps/Route01/scripts.pory"
	walk_left
# 39 "data/maps/Route01/scripts.pory"
	walk_left
# 39 "data/maps/Route01/scripts.pory"
	walk_left
# 39 "data/maps/Route01/scripts.pory"
	walk_left
# 39 "data/maps/Route01/scripts.pory"
	walk_left
# 39 "data/maps/Route01/scripts.pory"
	walk_left
# 39 "data/maps/Route01/scripts.pory"
	walk_left
	step_end

# 55 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position2_Movement_0:
# 55 "data/maps/Route01/scripts.pory"
	walk_up
# 55 "data/maps/Route01/scripts.pory"
	walk_right
# 55 "data/maps/Route01/scripts.pory"
	walk_right
# 55 "data/maps/Route01/scripts.pory"
	walk_right
# 55 "data/maps/Route01/scripts.pory"
	walk_right
# 55 "data/maps/Route01/scripts.pory"
	walk_right
# 55 "data/maps/Route01/scripts.pory"
	walk_right
	step_end

# 56 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position2_Movement_1:
# 56 "data/maps/Route01/scripts.pory"
	walk_right
# 56 "data/maps/Route01/scripts.pory"
	walk_right
# 56 "data/maps/Route01/scripts.pory"
	walk_right
# 56 "data/maps/Route01/scripts.pory"
	walk_right
# 56 "data/maps/Route01/scripts.pory"
	walk_right
# 56 "data/maps/Route01/scripts.pory"
	walk_right
# 56 "data/maps/Route01/scripts.pory"
	walk_right
# 56 "data/maps/Route01/scripts.pory"
	face_player
	step_end

# 76 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position3_Movement_0:
# 76 "data/maps/Route01/scripts.pory"
	walk_right
# 76 "data/maps/Route01/scripts.pory"
	walk_right
# 76 "data/maps/Route01/scripts.pory"
	walk_right
# 76 "data/maps/Route01/scripts.pory"
	walk_right
# 76 "data/maps/Route01/scripts.pory"
	walk_right
# 76 "data/maps/Route01/scripts.pory"
	walk_right
# 76 "data/maps/Route01/scripts.pory"
	walk_right
# 76 "data/maps/Route01/scripts.pory"
	walk_up
	step_end

# 97 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position4_Movement_0:
# 97 "data/maps/Route01/scripts.pory"
	walk_right
# 97 "data/maps/Route01/scripts.pory"
	walk_right
# 97 "data/maps/Route01/scripts.pory"
	walk_right
# 97 "data/maps/Route01/scripts.pory"
	walk_right
# 97 "data/maps/Route01/scripts.pory"
	walk_right
# 97 "data/maps/Route01/scripts.pory"
	walk_right
# 97 "data/maps/Route01/scripts.pory"
	walk_right
# 97 "data/maps/Route01/scripts.pory"
	walk_up
# 97 "data/maps/Route01/scripts.pory"
	walk_up
	step_end

# 98 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position4_Movement_1:
# 98 "data/maps/Route01/scripts.pory"
	walk_right
# 98 "data/maps/Route01/scripts.pory"
	walk_up
# 98 "data/maps/Route01/scripts.pory"
	walk_right
# 98 "data/maps/Route01/scripts.pory"
	walk_right
# 98 "data/maps/Route01/scripts.pory"
	walk_right
# 98 "data/maps/Route01/scripts.pory"
	walk_right
# 98 "data/maps/Route01/scripts.pory"
	walk_right
	step_end

# 102 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position4_Movement_2:
# 102 "data/maps/Route01/scripts.pory"
	walk_down
# 102 "data/maps/Route01/scripts.pory"
	walk_down
# 102 "data/maps/Route01/scripts.pory"
	walk_left
# 102 "data/maps/Route01/scripts.pory"
	walk_left
# 102 "data/maps/Route01/scripts.pory"
	walk_left
# 102 "data/maps/Route01/scripts.pory"
	walk_left
# 102 "data/maps/Route01/scripts.pory"
	walk_left
# 102 "data/maps/Route01/scripts.pory"
	walk_left
# 102 "data/maps/Route01/scripts.pory"
	walk_left
# 102 "data/maps/Route01/scripts.pory"
	walk_left
# 102 "data/maps/Route01/scripts.pory"
	walk_left
# 102 "data/maps/Route01/scripts.pory"
	walk_left
	step_end

# 103 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position4_Movement_3:
# 103 "data/maps/Route01/scripts.pory"
	walk_down
# 103 "data/maps/Route01/scripts.pory"
	walk_left
# 103 "data/maps/Route01/scripts.pory"
	walk_left
# 103 "data/maps/Route01/scripts.pory"
	walk_left
# 103 "data/maps/Route01/scripts.pory"
	walk_left
# 103 "data/maps/Route01/scripts.pory"
	walk_left
# 103 "data/maps/Route01/scripts.pory"
	walk_left
# 103 "data/maps/Route01/scripts.pory"
	walk_left
# 103 "data/maps/Route01/scripts.pory"
	walk_left
# 103 "data/maps/Route01/scripts.pory"
	walk_left
# 103 "data/maps/Route01/scripts.pory"
	walk_left
	step_end

Route01_Convo_Bugcatcher_Text_0:
# 8 "data/maps/Route01/scripts.pory"
	.string "This place is the perfect place to\n"
	.string "catch some pidgeys.\p"
	.string "Although lately they seem to be a little\n"
	.string "on edge.\p"
	.string "Yesterday I saw a curly tail sticking\n"
	.string "out of the grass, but I'm pretty sure it\l"
	.string "wasn't a Rattata or Sentret.\p"
	.string "Maybe my eyes decieved me...$"

Route01_Convo_Fatman_Text_0:
# 15 "data/maps/Route01/scripts.pory"
	.string "A clearing is visible through the trees,\n"
	.string "but the path is overgrown.\p"
	.string "Someone will have to clear the bushes\n"
	.string "to get to that place.$"

Route01_Convo_ExIntern_Text_0:
# 23 "data/maps/Route01/scripts.pory"
	.string "I used to be an intern for Professor\n"
	.string "Birds.\p"
	.string "The day he told me to carve a hole in a\n"
	.string "stone wall, I quit.$"

Route01_Factulty_Grunts_Position1_Text_0:
# 37 "data/maps/Route01/scripts.pory"
	.string "Argh, nevermind.\p"
	.string "That Pokemon isn't worth registrating\n"
	.string "anyway.\p"
	.string "He barely listens to his owner and so he\n"
	.string "has no potential.\p"
	.string "The Faculty would discard him right\n"
	.string "away!\p"
	.string "Come on Ton, let's go. The boss is\n"
	.string "waiting for us.$"

Route01_Factulty_Grunts_Position2_Text_0:
# 58 "data/maps/Route01/scripts.pory"
	.string "Argh, nevermind.\p"
	.string "That Pokemon isn't worth registrating\n"
	.string "anyway.\p"
	.string "He barely listens to his owner and he\n"
	.string "has a weak personality.\p"
	.string "The Faculty would discard him right\n"
	.string "away!\p"
	.string "Come on Ton, let's go. The boss is\n"
	.string "waiting for us.$"

Route01_Battle_Factulty_Grunts_Text_0:
# 114 "data/maps/Route01/scripts.pory"
	.string "Do you have registration for that\n"
	.string "Pokémon?\p"
	.string "No registration?\p"
	.string "All unregistered Pokémon have to be\n"
	.string "confiscated by The Faculty!\p"
	.string "Let me take on this loser, Ad.$"

Route01_Battle_Factulty_Grunts_Text_1:
# 118 "data/maps/Route01/scripts.pory"
	.string "Ton, you are an absolute loser, let me\n"
	.string "handle this prick.$"

Route01_Loss_Ton_Cross::
# 124 "data/maps/Route01/scripts.pory"
	.string "Even losing does not feel as bad as\n"
	.string "teaching geography to unmotivated\l"
	.string "children.$"

Route01_Loss_Ad_Dice::
# 128 "data/maps/Route01/scripts.pory"
	.string "Being a janitor or losing a battle?\p"
	.string "I'd rather lose a battle than spend\n"
	.string "another minute with my old colleagues.$"
