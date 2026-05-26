Route01_MapScripts::
	.byte 0


Route01_Text_Route01::
# 6 "data/maps/Route01/scripts.pory"
	lock
# 7 "data/maps/Route01/scripts.pory"
	msgbox Route01_Text_Route01_Text_0, MSGBOX_SIGN
# 8 "data/maps/Route01/scripts.pory"
	waitmessage
# 9 "data/maps/Route01/scripts.pory"
	release
	return


Route01_Convo_Bugcatcher::
# 16 "data/maps/Route01/scripts.pory"
	lock
# 17 "data/maps/Route01/scripts.pory"
	applymovement 4, Route01_Convo_Bugcatcher_Movement_0
# 18 "data/maps/Route01/scripts.pory"
	msgbox Route01_Convo_Bugcatcher_Text_0
# 19 "data/maps/Route01/scripts.pory"
	waitmessage
# 20 "data/maps/Route01/scripts.pory"
	release
	return


Route01_Convo_Fatman::
# 24 "data/maps/Route01/scripts.pory"
	lock
# 25 "data/maps/Route01/scripts.pory"
	msgbox Route01_Convo_Fatman_Text_0
# 26 "data/maps/Route01/scripts.pory"
	waitmessage
# 27 "data/maps/Route01/scripts.pory"
	release
	return


Route01_Convo_ExIntern::
# 31 "data/maps/Route01/scripts.pory"
	lock
# 32 "data/maps/Route01/scripts.pory"
	applymovement 6, Route01_Convo_Bugcatcher_Movement_0
# 33 "data/maps/Route01/scripts.pory"
	msgbox Route01_Convo_ExIntern_Text_0
# 34 "data/maps/Route01/scripts.pory"
	release
	return


Route01_Factulty_Grunts_Position1::
# 38 "data/maps/Route01/scripts.pory"
	lockall
# 39 "data/maps/Route01/scripts.pory"
	playse SE_PIN
# 40 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_0
# 41 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_0
# 42 "data/maps/Route01/scripts.pory"
	delay 40
# 43 "data/maps/Route01/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 44 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_1
# 45 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_2
# 46 "data/maps/Route01/scripts.pory"
	call Route01_Battle_Factulty_Grunts
# 47 "data/maps/Route01/scripts.pory"
	setspeaker Route01_Factulty_Grunts_Position1_Text_0
# 48 "data/maps/Route01/scripts.pory"
	msgbox Route01_Factulty_Grunts_Position1_Text_1, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route01/scripts.pory"
	setflag FLAG_FACULTY_GRUNTS_ROUT01
# 50 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_3
# 51 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_3
# 52 "data/maps/Route01/scripts.pory"
	waitmovement
# 53 "data/maps/Route01/scripts.pory"
	removeobject 2
# 54 "data/maps/Route01/scripts.pory"
	removeobject 3
# 55 "data/maps/Route01/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 3
# 56 "data/maps/Route01/scripts.pory"
	releaseall
	return


Route01_Factulty_Grunts_Position2::
# 60 "data/maps/Route01/scripts.pory"
	lockall
# 61 "data/maps/Route01/scripts.pory"
	playse SE_PIN
# 62 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_0
# 63 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_0
# 64 "data/maps/Route01/scripts.pory"
	delay 40
# 65 "data/maps/Route01/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 66 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position2_Movement_0
# 67 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position2_Movement_1
# 68 "data/maps/Route01/scripts.pory"
	call Route01_Battle_Factulty_Grunts
# 69 "data/maps/Route01/scripts.pory"
	setspeaker Route01_Factulty_Grunts_Position1_Text_0
# 70 "data/maps/Route01/scripts.pory"
	msgbox Route01_Factulty_Grunts_Position2_Text_0, MSGBOX_AUTOCLOSE
# 71 "data/maps/Route01/scripts.pory"
	setflag FLAG_FACULTY_GRUNTS_ROUT01
# 72 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_3
# 73 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_3
# 74 "data/maps/Route01/scripts.pory"
	waitmovement
# 75 "data/maps/Route01/scripts.pory"
	removeobject 2
# 76 "data/maps/Route01/scripts.pory"
	removeobject 3
# 77 "data/maps/Route01/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 3
# 78 "data/maps/Route01/scripts.pory"
	releaseall
	return


Route01_Factulty_Grunts_Position3::
# 82 "data/maps/Route01/scripts.pory"
	lockall
# 83 "data/maps/Route01/scripts.pory"
	playse SE_PIN
# 84 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_0
# 85 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_0
# 86 "data/maps/Route01/scripts.pory"
	delay 40
# 87 "data/maps/Route01/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 88 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position3_Movement_0
# 89 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_1
# 90 "data/maps/Route01/scripts.pory"
	call Route01_Battle_Factulty_Grunts2
# 91 "data/maps/Route01/scripts.pory"
	setspeaker Route01_Factulty_Grunts_Position1_Text_0
# 92 "data/maps/Route01/scripts.pory"
	msgbox Route01_Factulty_Grunts_Position2_Text_0, MSGBOX_AUTOCLOSE
# 93 "data/maps/Route01/scripts.pory"
	setflag FLAG_FACULTY_GRUNTS_ROUT01
# 94 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_3
# 95 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_3
# 96 "data/maps/Route01/scripts.pory"
	waitmovement
# 97 "data/maps/Route01/scripts.pory"
	removeobject 2
# 98 "data/maps/Route01/scripts.pory"
	removeobject 3
# 99 "data/maps/Route01/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 3
# 100 "data/maps/Route01/scripts.pory"
	releaseall
	return


Route01_Factulty_Grunts_Position4::
# 104 "data/maps/Route01/scripts.pory"
	lockall
# 105 "data/maps/Route01/scripts.pory"
	playse SE_PIN
# 106 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position1_Movement_0
# 107 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position1_Movement_0
# 108 "data/maps/Route01/scripts.pory"
	delay 40
# 109 "data/maps/Route01/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 110 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position4_Movement_0
# 111 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position4_Movement_1
# 112 "data/maps/Route01/scripts.pory"
	call Route01_Battle_Factulty_Grunts2
# 113 "data/maps/Route01/scripts.pory"
	setspeaker Route01_Factulty_Grunts_Position1_Text_0
# 114 "data/maps/Route01/scripts.pory"
	msgbox Route01_Factulty_Grunts_Position2_Text_0, MSGBOX_AUTOCLOSE
# 115 "data/maps/Route01/scripts.pory"
	setflag FLAG_FACULTY_GRUNTS_ROUT01
# 116 "data/maps/Route01/scripts.pory"
	applymovement 2, Route01_Factulty_Grunts_Position4_Movement_2
# 117 "data/maps/Route01/scripts.pory"
	applymovement 3, Route01_Factulty_Grunts_Position4_Movement_3
# 118 "data/maps/Route01/scripts.pory"
	waitmovement
# 119 "data/maps/Route01/scripts.pory"
	removeobject 2
# 120 "data/maps/Route01/scripts.pory"
	removeobject 3
# 121 "data/maps/Route01/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 3
# 122 "data/maps/Route01/scripts.pory"
	releaseall
	return


Route01_Battle_Factulty_Grunts::
# 128 "data/maps/Route01/scripts.pory"
	setspeaker Route01_Battle_Factulty_Grunts_Text_0
# 129 "data/maps/Route01/scripts.pory"
	msgbox Route01_Battle_Factulty_Grunts_Text_1
# 130 "data/maps/Route01/scripts.pory"
	waitmessage
# 131 "data/maps/Route01/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_FACULTY_1, Route01_Loss_Ton_Cross
# 132 "data/maps/Route01/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 133 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_PLAYER, Route01_Battle_Factulty_Grunts_Movement_0
# 134 "data/maps/Route01/scripts.pory"
	setspeaker Route01_Factulty_Grunts_Position1_Text_0
# 135 "data/maps/Route01/scripts.pory"
	msgbox Route01_Battle_Factulty_Grunts_Text_2
# 136 "data/maps/Route01/scripts.pory"
	waitmessage
# 137 "data/maps/Route01/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_FACULTY_2, Route01_Loss_Ad_Dice
# 138 "data/maps/Route01/scripts.pory"
	waitse
	return


Route01_Battle_Factulty_Grunts2::
# 142 "data/maps/Route01/scripts.pory"
	setspeaker Route01_Battle_Factulty_Grunts_Text_0
# 143 "data/maps/Route01/scripts.pory"
	msgbox Route01_Battle_Factulty_Grunts_Text_1
# 144 "data/maps/Route01/scripts.pory"
	waitmessage
# 145 "data/maps/Route01/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_FACULTY_1, Route01_Loss_Ton_Cross
# 146 "data/maps/Route01/scripts.pory"
	playse MUS_AQUA_MAGMA_HIDEOUT
# 147 "data/maps/Route01/scripts.pory"
	applymovement LOCALID_PLAYER, Route01_Battle_Factulty_Grunts2_Movement_0
# 148 "data/maps/Route01/scripts.pory"
	setspeaker Route01_Factulty_Grunts_Position1_Text_0
# 149 "data/maps/Route01/scripts.pory"
	msgbox Route01_Battle_Factulty_Grunts_Text_2
# 150 "data/maps/Route01/scripts.pory"
	waitmessage
# 151 "data/maps/Route01/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_FACULTY_2, Route01_Loss_Ad_Dice
# 152 "data/maps/Route01/scripts.pory"
	waitse
	return


# 17 "data/maps/Route01/scripts.pory"
Route01_Convo_Bugcatcher_Movement_0:
# 17 "data/maps/Route01/scripts.pory"
	face_player
	step_end

# 40 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position1_Movement_0:
# 40 "data/maps/Route01/scripts.pory"
	emote_exclamation_mark
	step_end

# 44 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position1_Movement_1:
# 44 "data/maps/Route01/scripts.pory"
	walk_right
# 44 "data/maps/Route01/scripts.pory"
	walk_right
# 44 "data/maps/Route01/scripts.pory"
	walk_right
# 44 "data/maps/Route01/scripts.pory"
	walk_right
# 44 "data/maps/Route01/scripts.pory"
	walk_right
# 44 "data/maps/Route01/scripts.pory"
	walk_right
	step_end

# 45 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position1_Movement_2:
# 45 "data/maps/Route01/scripts.pory"
	walk_right
# 45 "data/maps/Route01/scripts.pory"
	walk_right
# 45 "data/maps/Route01/scripts.pory"
	walk_right
# 45 "data/maps/Route01/scripts.pory"
	walk_right
# 45 "data/maps/Route01/scripts.pory"
	walk_right
# 45 "data/maps/Route01/scripts.pory"
	walk_right
# 45 "data/maps/Route01/scripts.pory"
	walk_right
# 45 "data/maps/Route01/scripts.pory"
	walk_down
	step_end

# 50 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position1_Movement_3:
# 50 "data/maps/Route01/scripts.pory"
	walk_left
# 50 "data/maps/Route01/scripts.pory"
	walk_left
# 50 "data/maps/Route01/scripts.pory"
	walk_left
# 50 "data/maps/Route01/scripts.pory"
	walk_left
# 50 "data/maps/Route01/scripts.pory"
	walk_left
# 50 "data/maps/Route01/scripts.pory"
	walk_left
# 50 "data/maps/Route01/scripts.pory"
	walk_left
# 50 "data/maps/Route01/scripts.pory"
	walk_left
# 50 "data/maps/Route01/scripts.pory"
	walk_left
# 50 "data/maps/Route01/scripts.pory"
	walk_left
	step_end

# 66 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position2_Movement_0:
# 66 "data/maps/Route01/scripts.pory"
	walk_up
# 66 "data/maps/Route01/scripts.pory"
	walk_right
# 66 "data/maps/Route01/scripts.pory"
	walk_right
# 66 "data/maps/Route01/scripts.pory"
	walk_right
# 66 "data/maps/Route01/scripts.pory"
	walk_right
# 66 "data/maps/Route01/scripts.pory"
	walk_right
# 66 "data/maps/Route01/scripts.pory"
	walk_right
	step_end

# 67 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position2_Movement_1:
# 67 "data/maps/Route01/scripts.pory"
	walk_right
# 67 "data/maps/Route01/scripts.pory"
	walk_right
# 67 "data/maps/Route01/scripts.pory"
	walk_right
# 67 "data/maps/Route01/scripts.pory"
	walk_right
# 67 "data/maps/Route01/scripts.pory"
	walk_right
# 67 "data/maps/Route01/scripts.pory"
	walk_right
# 67 "data/maps/Route01/scripts.pory"
	walk_right
# 67 "data/maps/Route01/scripts.pory"
	face_player
	step_end

# 88 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position3_Movement_0:
# 88 "data/maps/Route01/scripts.pory"
	walk_up
# 88 "data/maps/Route01/scripts.pory"
	walk_right
# 88 "data/maps/Route01/scripts.pory"
	walk_right
# 88 "data/maps/Route01/scripts.pory"
	walk_right
# 88 "data/maps/Route01/scripts.pory"
	walk_right
# 88 "data/maps/Route01/scripts.pory"
	walk_right
# 88 "data/maps/Route01/scripts.pory"
	walk_right
# 88 "data/maps/Route01/scripts.pory"
	walk_right
# 88 "data/maps/Route01/scripts.pory"
	face_up
	step_end

# 110 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position4_Movement_0:
# 110 "data/maps/Route01/scripts.pory"
	walk_up
# 110 "data/maps/Route01/scripts.pory"
	walk_up
# 110 "data/maps/Route01/scripts.pory"
	walk_right
# 110 "data/maps/Route01/scripts.pory"
	walk_right
# 110 "data/maps/Route01/scripts.pory"
	walk_right
# 110 "data/maps/Route01/scripts.pory"
	walk_right
# 110 "data/maps/Route01/scripts.pory"
	walk_right
# 110 "data/maps/Route01/scripts.pory"
	walk_right
# 110 "data/maps/Route01/scripts.pory"
	walk_right
# 110 "data/maps/Route01/scripts.pory"
	face_up
	step_end

# 111 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position4_Movement_1:
# 111 "data/maps/Route01/scripts.pory"
	walk_right
# 111 "data/maps/Route01/scripts.pory"
	walk_up
# 111 "data/maps/Route01/scripts.pory"
	walk_right
# 111 "data/maps/Route01/scripts.pory"
	walk_right
# 111 "data/maps/Route01/scripts.pory"
	walk_right
# 111 "data/maps/Route01/scripts.pory"
	walk_right
# 111 "data/maps/Route01/scripts.pory"
	walk_right
	step_end

# 116 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position4_Movement_2:
# 116 "data/maps/Route01/scripts.pory"
	walk_down
# 116 "data/maps/Route01/scripts.pory"
	walk_down
# 116 "data/maps/Route01/scripts.pory"
	walk_left
# 116 "data/maps/Route01/scripts.pory"
	walk_left
# 116 "data/maps/Route01/scripts.pory"
	walk_left
# 116 "data/maps/Route01/scripts.pory"
	walk_left
# 116 "data/maps/Route01/scripts.pory"
	walk_left
# 116 "data/maps/Route01/scripts.pory"
	walk_left
# 116 "data/maps/Route01/scripts.pory"
	walk_left
# 116 "data/maps/Route01/scripts.pory"
	walk_left
# 116 "data/maps/Route01/scripts.pory"
	walk_left
# 116 "data/maps/Route01/scripts.pory"
	walk_left
	step_end

# 117 "data/maps/Route01/scripts.pory"
Route01_Factulty_Grunts_Position4_Movement_3:
# 117 "data/maps/Route01/scripts.pory"
	walk_down
# 117 "data/maps/Route01/scripts.pory"
	walk_left
# 117 "data/maps/Route01/scripts.pory"
	walk_left
# 117 "data/maps/Route01/scripts.pory"
	walk_left
# 117 "data/maps/Route01/scripts.pory"
	walk_left
# 117 "data/maps/Route01/scripts.pory"
	walk_left
# 117 "data/maps/Route01/scripts.pory"
	walk_left
# 117 "data/maps/Route01/scripts.pory"
	walk_left
# 117 "data/maps/Route01/scripts.pory"
	walk_left
# 117 "data/maps/Route01/scripts.pory"
	walk_left
# 117 "data/maps/Route01/scripts.pory"
	walk_left
	step_end

# 133 "data/maps/Route01/scripts.pory"
Route01_Battle_Factulty_Grunts_Movement_0:
# 133 "data/maps/Route01/scripts.pory"
	face_up
	step_end

# 147 "data/maps/Route01/scripts.pory"
Route01_Battle_Factulty_Grunts2_Movement_0:
# 147 "data/maps/Route01/scripts.pory"
	face_down
	step_end

Route01_Text_Route01_Text_0:
# 7 "data/maps/Route01/scripts.pory"
	.string "ROUTE 1\n"
	.string "{LEFT_ARROW} MEESTRECH CITY\p"
	.string "{RIGHT_ARROW} ERP CITY$"

Route01_Convo_Bugcatcher_Text_0:
# 18 "data/maps/Route01/scripts.pory"
	.string "This place is the perfect place to\n"
	.string "catch some pidgeys.\p"
	.string "Although lately they seem to be a little\n"
	.string "on edge.\p"
	.string "Yesterday I saw a curly tail sticking\n"
	.string "out of the grass, but I'm pretty sure it\l"
	.string "wasn't a Rattata or Sentret.\p"
	.string "Maybe my eyes decieved me...$"

Route01_Convo_Fatman_Text_0:
# 25 "data/maps/Route01/scripts.pory"
	.string "A clearing is visible through the trees,\n"
	.string "but the path is overgrown.\p"
	.string "Someone will have to clear the bushes\n"
	.string "to get to that place.$"

Route01_Convo_ExIntern_Text_0:
# 33 "data/maps/Route01/scripts.pory"
	.string "I used to be an intern for Professor\n"
	.string "Birds.\p"
	.string "The day he told me to carve a hole in a\n"
	.string "stone wall, I quit.$"

Route01_Factulty_Grunts_Position1_Text_0:
# 47 "data/maps/Route01/scripts.pory"
	.string "Ad Dice$"

Route01_Factulty_Grunts_Position1_Text_1:
# 48 "data/maps/Route01/scripts.pory"
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
# 70 "data/maps/Route01/scripts.pory"
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
# 128 "data/maps/Route01/scripts.pory"
	.string "Ton Cross$"

Route01_Battle_Factulty_Grunts_Text_1:
# 129 "data/maps/Route01/scripts.pory"
	.string "Do you have registration for that\n"
	.string "Pokémon?\p"
	.string "No registration?\p"
	.string "All unregistered Pokémon have to be\n"
	.string "confiscated by The Faculty!\p"
	.string "Let me take on this loser, Ad.$"

Route01_Battle_Factulty_Grunts_Text_2:
# 135 "data/maps/Route01/scripts.pory"
	.string "Ton, you are an absolute loser, let me\n"
	.string "handle this prick.$"

Route01_Loss_Ton_Cross::
# 155 "data/maps/Route01/scripts.pory"
	.string "Even losing does not feel as bad as\n"
	.string "teaching geography to unmotivated\l"
	.string "children.$"

Route01_Loss_Ad_Dice::
# 159 "data/maps/Route01/scripts.pory"
	.string "Being a janitor or losing a battle?\p"
	.string "I'd rather lose a battle than spend\n"
	.string "another minute with my old colleagues.$"
