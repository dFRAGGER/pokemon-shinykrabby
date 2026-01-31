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
	setspeaker Route01_Factulty_Grunts_Position1_Text_0
# 38 "data/maps/Route01/scripts.pory"
	msgbox Route01_Factulty_Grunts_Position1_Text_1, MSGBOX_AUTOCLOSE
# 39 "data/maps/Route01/scripts.pory"
	setflag FLAG_FACULTY_GRUNTS_ROUT01
# 40 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_3
# 41 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_3
# 42 "data/maps/Route01/scripts.pory"
	waitmovement
# 43 "data/maps/Route01/scripts.pory"
	removeobject 2
# 44 "data/maps/Route01/scripts.pory"
	removeobject 3
# 45 "data/maps/Route01/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 3
# 46 "data/maps/Route01/scripts.pory"
	releaseall
	return


Route01_Factulty_Grunts_Position2::
# 50 "data/maps/Route01/scripts.pory"
	lockall
# 51 "data/maps/Route01/scripts.pory"
	playse SE_PIN
# 52 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_0
# 53 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_0
# 54 "data/maps/Route01/scripts.pory"
	delay 40
# 55 "data/maps/Route01/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 56 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position2_Movement_0
# 57 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position2_Movement_1
# 58 "data/maps/Route01/scripts.pory"
	call Route01_Battle_Factulty_Grunts
# 59 "data/maps/Route01/scripts.pory"
	setspeaker Route01_Factulty_Grunts_Position1_Text_0
# 60 "data/maps/Route01/scripts.pory"
	msgbox Route01_Factulty_Grunts_Position2_Text_0, MSGBOX_AUTOCLOSE
# 61 "data/maps/Route01/scripts.pory"
	setflag FLAG_FACULTY_GRUNTS_ROUT01
# 62 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_3
# 63 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_3
# 64 "data/maps/Route01/scripts.pory"
	waitmovement
# 65 "data/maps/Route01/scripts.pory"
	removeobject 2
# 66 "data/maps/Route01/scripts.pory"
	removeobject 3
# 67 "data/maps/Route01/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 3
# 68 "data/maps/Route01/scripts.pory"
	releaseall
	return


Route01_Factulty_Grunts_Position3::
# 72 "data/maps/Route01/scripts.pory"
	lockall
# 73 "data/maps/Route01/scripts.pory"
	playse SE_PIN
# 74 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_0
# 75 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_0
# 76 "data/maps/Route01/scripts.pory"
	delay 40
# 77 "data/maps/Route01/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 78 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position3_Movement_0
# 79 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_1
# 80 "data/maps/Route01/scripts.pory"
	call Route01_Battle_Factulty_Grunts2
# 81 "data/maps/Route01/scripts.pory"
	setspeaker Route01_Factulty_Grunts_Position1_Text_0
# 82 "data/maps/Route01/scripts.pory"
	msgbox Route01_Factulty_Grunts_Position2_Text_0, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route01/scripts.pory"
	setflag FLAG_FACULTY_GRUNTS_ROUT01
# 84 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_3
# 85 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_3
# 86 "data/maps/Route01/scripts.pory"
	waitmovement
# 87 "data/maps/Route01/scripts.pory"
	removeobject 2
# 88 "data/maps/Route01/scripts.pory"
	removeobject 3
# 89 "data/maps/Route01/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 3
# 90 "data/maps/Route01/scripts.pory"
	releaseall
	return


Route01_Factulty_Grunts_Position4::
# 94 "data/maps/Route01/scripts.pory"
	lockall
# 95 "data/maps/Route01/scripts.pory"
	playse SE_PIN
# 96 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_0
# 97 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_0
# 98 "data/maps/Route01/scripts.pory"
	delay 40
# 99 "data/maps/Route01/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 100 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position4_Movement_0
# 101 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position4_Movement_1
# 102 "data/maps/Route01/scripts.pory"
	call Route01_Battle_Factulty_Grunts2
# 103 "data/maps/Route01/scripts.pory"
	setspeaker Route01_Factulty_Grunts_Position1_Text_0
# 104 "data/maps/Route01/scripts.pory"
	msgbox Route01_Factulty_Grunts_Position2_Text_0, MSGBOX_AUTOCLOSE
# 105 "data/maps/Route01/scripts.pory"
	setflag FLAG_FACULTY_GRUNTS_ROUT01
# 106 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position4_Movement_2
# 107 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position4_Movement_3
# 108 "data/maps/Route01/scripts.pory"
	waitmovement
# 109 "data/maps/Route01/scripts.pory"
	removeobject 2
# 110 "data/maps/Route01/scripts.pory"
	removeobject 3
# 111 "data/maps/Route01/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 3
# 112 "data/maps/Route01/scripts.pory"
	releaseall
	return


Route01_Battle_Factulty_Grunts::
# 118 "data/maps/Route01/scripts.pory"
	setspeaker Route01_Battle_Factulty_Grunts_Text_0
# 119 "data/maps/Route01/scripts.pory"
	msgbox Route01_Battle_Factulty_Grunts_Text_1
# 120 "data/maps/Route01/scripts.pory"
	waitmessage
# 121 "data/maps/Route01/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_FACULTY_1, Route01_Loss_Ton_Cross
# 122 "data/maps/Route01/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 123 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_PLAYER, Route01_Battle_Factulty_Grunts_Movement_0
# 124 "data/maps/Route01/scripts.pory"
	setspeaker Route01_Factulty_Grunts_Position1_Text_0
# 125 "data/maps/Route01/scripts.pory"
	msgbox Route01_Battle_Factulty_Grunts_Text_2
# 126 "data/maps/Route01/scripts.pory"
	waitmessage
# 127 "data/maps/Route01/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_FACULTY_2, Route01_Loss_Ad_Dice
# 128 "data/maps/Route01/scripts.pory"
	waitse
	return


Route01_Battle_Factulty_Grunts2::
# 132 "data/maps/Route01/scripts.pory"
	setspeaker Route01_Battle_Factulty_Grunts_Text_0
# 133 "data/maps/Route01/scripts.pory"
	msgbox Route01_Battle_Factulty_Grunts_Text_1
# 134 "data/maps/Route01/scripts.pory"
	waitmessage
# 135 "data/maps/Route01/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_FACULTY_1, Route01_Loss_Ton_Cross
# 136 "data/maps/Route01/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 137 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_PLAYER, Route01_Battle_Factulty_Grunts2_Movement_0
# 138 "data/maps/Route01/scripts.pory"
	setspeaker Route01_Factulty_Grunts_Position1_Text_0
# 139 "data/maps/Route01/scripts.pory"
	msgbox Route01_Battle_Factulty_Grunts_Text_2
# 140 "data/maps/Route01/scripts.pory"
	waitmessage
# 141 "data/maps/Route01/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_FACULTY_2, Route01_Loss_Ad_Dice
# 142 "data/maps/Route01/scripts.pory"
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

# 40 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position1_Movement_3:
# 40 "data/maps/Route01/scripts.pory"
	walk_left
# 40 "data/maps/Route01/scripts.pory"
	walk_left
# 40 "data/maps/Route01/scripts.pory"
	walk_left
# 40 "data/maps/Route01/scripts.pory"
	walk_left
# 40 "data/maps/Route01/scripts.pory"
	walk_left
# 40 "data/maps/Route01/scripts.pory"
	walk_left
# 40 "data/maps/Route01/scripts.pory"
	walk_left
# 40 "data/maps/Route01/scripts.pory"
	walk_left
# 40 "data/maps/Route01/scripts.pory"
	walk_left
# 40 "data/maps/Route01/scripts.pory"
	walk_left
	step_end

# 56 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position2_Movement_0:
# 56 "data/maps/Route01/scripts.pory"
	walk_up
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
	step_end

# 57 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position2_Movement_1:
# 57 "data/maps/Route01/scripts.pory"
	walk_right
# 57 "data/maps/Route01/scripts.pory"
	walk_right
# 57 "data/maps/Route01/scripts.pory"
	walk_right
# 57 "data/maps/Route01/scripts.pory"
	walk_right
# 57 "data/maps/Route01/scripts.pory"
	walk_right
# 57 "data/maps/Route01/scripts.pory"
	walk_right
# 57 "data/maps/Route01/scripts.pory"
	walk_right
# 57 "data/maps/Route01/scripts.pory"
	face_player
	step_end

# 78 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position3_Movement_0:
# 78 "data/maps/Route01/scripts.pory"
	walk_up
# 78 "data/maps/Route01/scripts.pory"
	walk_right
# 78 "data/maps/Route01/scripts.pory"
	walk_right
# 78 "data/maps/Route01/scripts.pory"
	walk_right
# 78 "data/maps/Route01/scripts.pory"
	walk_right
# 78 "data/maps/Route01/scripts.pory"
	walk_right
# 78 "data/maps/Route01/scripts.pory"
	walk_right
# 78 "data/maps/Route01/scripts.pory"
	walk_right
# 78 "data/maps/Route01/scripts.pory"
	face_up
	step_end

# 100 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position4_Movement_0:
# 100 "data/maps/Route01/scripts.pory"
	walk_up
# 100 "data/maps/Route01/scripts.pory"
	walk_up
# 100 "data/maps/Route01/scripts.pory"
	walk_right
# 100 "data/maps/Route01/scripts.pory"
	walk_right
# 100 "data/maps/Route01/scripts.pory"
	walk_right
# 100 "data/maps/Route01/scripts.pory"
	walk_right
# 100 "data/maps/Route01/scripts.pory"
	walk_right
# 100 "data/maps/Route01/scripts.pory"
	walk_right
# 100 "data/maps/Route01/scripts.pory"
	walk_right
# 100 "data/maps/Route01/scripts.pory"
	face_up
	step_end

# 101 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position4_Movement_1:
# 101 "data/maps/Route01/scripts.pory"
	walk_right
# 101 "data/maps/Route01/scripts.pory"
	walk_up
# 101 "data/maps/Route01/scripts.pory"
	walk_right
# 101 "data/maps/Route01/scripts.pory"
	walk_right
# 101 "data/maps/Route01/scripts.pory"
	walk_right
# 101 "data/maps/Route01/scripts.pory"
	walk_right
# 101 "data/maps/Route01/scripts.pory"
	walk_right
	step_end

# 106 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position4_Movement_2:
# 106 "data/maps/Route01/scripts.pory"
	walk_down
# 106 "data/maps/Route01/scripts.pory"
	walk_down
# 106 "data/maps/Route01/scripts.pory"
	walk_left
# 106 "data/maps/Route01/scripts.pory"
	walk_left
# 106 "data/maps/Route01/scripts.pory"
	walk_left
# 106 "data/maps/Route01/scripts.pory"
	walk_left
# 106 "data/maps/Route01/scripts.pory"
	walk_left
# 106 "data/maps/Route01/scripts.pory"
	walk_left
# 106 "data/maps/Route01/scripts.pory"
	walk_left
# 106 "data/maps/Route01/scripts.pory"
	walk_left
# 106 "data/maps/Route01/scripts.pory"
	walk_left
# 106 "data/maps/Route01/scripts.pory"
	walk_left
	step_end

# 107 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position4_Movement_3:
# 107 "data/maps/Route01/scripts.pory"
	walk_down
# 107 "data/maps/Route01/scripts.pory"
	walk_left
# 107 "data/maps/Route01/scripts.pory"
	walk_left
# 107 "data/maps/Route01/scripts.pory"
	walk_left
# 107 "data/maps/Route01/scripts.pory"
	walk_left
# 107 "data/maps/Route01/scripts.pory"
	walk_left
# 107 "data/maps/Route01/scripts.pory"
	walk_left
# 107 "data/maps/Route01/scripts.pory"
	walk_left
# 107 "data/maps/Route01/scripts.pory"
	walk_left
# 107 "data/maps/Route01/scripts.pory"
	walk_left
# 107 "data/maps/Route01/scripts.pory"
	walk_left
	step_end

# 123 "data/maps/Route01/scripts.pory"
Route01_Battle_Factulty_Grunts_Movement_0:
# 123 "data/maps/Route01/scripts.pory"
	face_up
	step_end

# 137 "data/maps/Route01/scripts.pory"
Route01_Battle_Factulty_Grunts2_Movement_0:
# 137 "data/maps/Route01/scripts.pory"
	face_down
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
	.string "Ad Dice$"

Route01_Factulty_Grunts_Position1_Text_1:
# 38 "data/maps/Route01/scripts.pory"
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
# 60 "data/maps/Route01/scripts.pory"
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
# 118 "data/maps/Route01/scripts.pory"
	.string "Ton Cross$"

Route01_Battle_Factulty_Grunts_Text_1:
# 119 "data/maps/Route01/scripts.pory"
	.string "Do you have registration for that\n"
	.string "Pokémon?\p"
	.string "No registration?\p"
	.string "All unregistered Pokémon have to be\n"
	.string "confiscated by The Faculty!\p"
	.string "Let me take on this loser, Ad.$"

Route01_Battle_Factulty_Grunts_Text_2:
# 125 "data/maps/Route01/scripts.pory"
	.string "Ton, you are an absolute loser, let me\n"
	.string "handle this prick.$"

Route01_Loss_Ton_Cross::
# 145 "data/maps/Route01/scripts.pory"
	.string "Even losing does not feel as bad as\n"
	.string "teaching geography to unmotivated\l"
	.string "children.$"

Route01_Loss_Ad_Dice::
# 149 "data/maps/Route01/scripts.pory"
	.string "Being a janitor or losing a battle?\p"
	.string "I'd rather lose a battle than spend\n"
	.string "another minute with my old colleagues.$"
