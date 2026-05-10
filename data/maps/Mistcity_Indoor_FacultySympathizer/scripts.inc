Mistcity_Indoor_FacultySympathizer_MapScripts::
# 2 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Mistcity_Indoor_FacultySympathizer_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Mistcity_Indoor_FacultySympathizer_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	map_script_2 VAR_MISTCITY_STATE, 1, Mistcity_Indoor_FacultySympathizer_Escape
	.2byte 0


Mistcity_Indoor_FacultySympathizer_Escape::
# 9 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	lock
# 10 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setvar VAR_MISTCITY_STATE, 2
# 11 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_0
# 12 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_FacultySympathizer_Escape_Text_1, MSGBOX_AUTOCLOSE
# 13 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 14 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Indoor_FacultySympathizer_Escape_Movement_0
# 15 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement 4, Mistcity_Indoor_FacultySympathizer_Escape_Movement_1
# 16 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmovement
# 17 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement 3, Mistcity_Indoor_FacultySympathizer_Escape_Movement_2
# 18 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setflag FLAG_FACULTY_SYMPATHIZERS_1
# 19 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	removeobject 4
# 20 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	delay 60
# 21 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement 3, Mistcity_Indoor_FacultySympathizer_Escape_Movement_3
# 22 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	delay 60
# 23 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement 5, Mistcity_Indoor_FacultySympathizer_Escape_Movement_4
# 24 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmovement
# 25 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement 3, Mistcity_Indoor_FacultySympathizer_Escape_Movement_5
# 26 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_2
# 27 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_FacultySympathizer_Escape_Text_3, MSGBOX_AUTOCLOSE
# 28 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 29 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement 5, Mistcity_Indoor_FacultySympathizer_Escape_Movement_6
# 30 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmovement
# 31 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	removeobject 5
# 32 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Indoor_FacultySympathizer_Escape_Movement_2
# 33 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement 3, Mistcity_Indoor_FacultySympathizer_Escape_Movement_2
# 34 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmovement
# 35 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	delay 120
# 36 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Indoor_FacultySympathizer_Escape_Movement_3
# 37 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmovement
# 38 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_4
# 39 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_FacultySympathizer_Escape_Text_5
# 40 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 41 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_4
# 42 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_FacultySympathizer_Escape_Text_6, MSGBOX_AUTOCLOSE
# 43 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 44 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	goto_if_unset FLAG_SYS_POKENAV_GET, Mistcity_Indoor_FacultySympathizer_Escape_2
# 53 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 54 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	message Mistcity_Indoor_FacultySympathizer_Escape_Text_8
# 55 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitfanfare
# 56 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	closemessage
Mistcity_Indoor_FacultySympathizer_Escape_1:
# 58 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setflag FLAG_FACULTY_SYMPATHIZERS_2
# 59 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	clearflag FLAG_HIDE_ROUTE03_CLIFFSIDE_WATCHER
# 60 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 61 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setvar VAR_FORTREE_CITY_STATE, 1
# 62 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Mistcity_Indoor_FacultySympathizer_Escape_6
# 68 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_4
# 69 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_FacultySympathizer_Escape_Text_10, MSGBOX_AUTOCLOSE
# 70 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
Mistcity_Indoor_FacultySympathizer_Escape_5:
# 72 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement 3, Mistcity_Indoor_FacultySympathizer_Escape_Movement_7
# 73 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmovement
# 74 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	removeobject 3
# 75 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	release
	return

Mistcity_Indoor_FacultySympathizer_Escape_2:
# 45 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 46 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	message Mistcity_Indoor_FacultySympathizer_Escape_Text_7
# 47 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitfanfare
# 48 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	closemessage
# 49 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 50 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
	goto Mistcity_Indoor_FacultySympathizer_Escape_1

Mistcity_Indoor_FacultySympathizer_Escape_6:
# 63 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_4
# 64 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_FacultySympathizer_Escape_Text_9, MSGBOX_AUTOCLOSE
# 65 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
	goto Mistcity_Indoor_FacultySympathizer_Escape_5


Mistcity_Indoor_Faculty_Husband::
# 79 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	lock
# 80 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	faceplayer
# 81 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	goto_if_unset FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Faculty_Husband_2
# 88 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Faculty_Husband_4
	return

Mistcity_Indoor_Faculty_Husband_2:
# 82 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_0
# 83 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_Faculty_Husband_Text_0
# 84 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 85 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	release
	end

Mistcity_Indoor_Faculty_Husband_4:
# 89 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_0
# 90 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_Faculty_Husband_Text_1
# 91 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 92 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	release
	end


Mistcity_Indoor_Faculty_Wife::
# 98 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	lock
# 99 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	faceplayer
# 100 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	goto_if_unset FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Faculty_Wife_2
# 107 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Faculty_Wife_4
	return

Mistcity_Indoor_Faculty_Wife_2:
# 101 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_2
# 102 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_Faculty_Wife_Text_0
# 103 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 104 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	release
	end

Mistcity_Indoor_Faculty_Wife_4:
# 108 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_2
# 109 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_Faculty_Wife_Text_1
# 110 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 111 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	release
	end


# 14 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
Mistcity_Indoor_FacultySympathizer_Escape_Movement_0:
# 14 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_right
# 14 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	face_left
	step_end

# 15 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
Mistcity_Indoor_FacultySympathizer_Escape_Movement_1:
# 15 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_fast_down
# 15 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_fast_left
# 15 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_fast_down
# 15 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_fast_down
	step_end

# 17 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
Mistcity_Indoor_FacultySympathizer_Escape_Movement_2:
# 17 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	face_down
	step_end

# 21 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
Mistcity_Indoor_FacultySympathizer_Escape_Movement_3:
# 21 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	face_up
	step_end

# 23 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
Mistcity_Indoor_FacultySympathizer_Escape_Movement_4:
# 23 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_down
# 23 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_down
# 23 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	face_right
	step_end

# 25 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
Mistcity_Indoor_FacultySympathizer_Escape_Movement_5:
# 25 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	face_left
	step_end

# 29 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
Mistcity_Indoor_FacultySympathizer_Escape_Movement_6:
# 29 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_down
# 29 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_down
	step_end

# 72 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
Mistcity_Indoor_FacultySympathizer_Escape_Movement_7:
# 72 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_left
# 72 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_down
	step_end

Mistcity_Indoor_FacultySympathizer_Escape_Text_0:
# 11 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Marcus$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_1:
# 12 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "... I'M TELLING YOU NOTHING, YOU STUPID\n"
	.string "TREE HUGGER!!\p"
	.string "NOW GET OUT OF MY WAY!$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_2:
# 26 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Eleanor$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_3:
# 27 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Mph.\p"
	.string "I suppose you think you are some kind\n"
	.string "of hero?\p"
	.string "Enjoy your precious, muddy trees.\p"
	.string "Progress will find a way, with or without\n"
	.string "your approval.$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_4:
# 38 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Daan$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_5:
# 39 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "I think they're gone.\p"
	.string "Ran like Rattata the second I started\n"
	.string "asking real questions about the\l"
	.string "excavation.\p"
	.string "They knew exactly what The Faculty was\n"
	.string "doing to the forest.\p"
	.string "...\p"
	.string "What? There were problems in\n"
	.string "Meestreech as well?\p"
	.string "...\p"
	.string "That device looks very similar to the\n"
	.string "ones the faculty were using in the\l"
	.string "forest.\p"
	.string "But this... this feels too big for just\n"
	.string "them.\p"
	.string "I can't shake this feeling about Prof.\n"
	.string "Birds.\p"
	.string "You remember what I said in the truck?\p"
	.string "About him scanning the forest years\n"
	.string "ago?\p"
	.string "It's too much of a coincidence.\n"
	.string "I'm going to call Jacob.\p"
	.string "He's got a way of making people talk...\n"
	.string "after a few drinks... if you know what I\l"
	.string "mean.\p"
	.string "We're going to pay the Professor a visit\n"
	.string "at his lab.\p"
	.string "We need to know what he was really\n"
	.string "looking for back then.\p"
	.string "If he knows anything about Registeel,\n"
	.string "we're going to get it out of him.\p"
	.string "While we sort out Prof. Birds, I want you\n"
	.string "to start heading west, through\l"
	.string "batcave.\p"
	.string "Forget the internship for a moment,\n"
	.string "this is bigger now.$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_6:
# 42 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Here. Take this.\p"
	.string "I've already added my number.\p"
	.string "I'll call you on the Pokénav once we've\n"
	.string "dealt with the Professor.\p"
	.string "There's more I need to tell you but I'd\n"
	.string "rather not say it all out loud in here.$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_7:
# 46 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Daan handed you the Pokénav!\n"
	.string "His number has been registered!$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_8:
# 54 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Daan's number has been\n"
	.string "registered in your Pokénav!$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_9:
# 64 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Oh, you already beat David?\n"
	.string "Impressive.\p"
	.string "You're ready for the swamps, then.\p"
	.string "Good luck, {PLAYER}.$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_10:
# 69 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Oh, and don't skip the gym while you're\n"
	.string "in town.\p"
	.string "Good luck, {PLAYER}.$"

Mistcity_Indoor_Faculty_Husband_Text_0:
# 83 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Welcome to the future site of progress.\p"
	.string "My name is {COLOR BLUE}Marcus{COLOR DARK_GRAY}.\p"
	.string "The Faculty transferred me here to\n"
	.string "oversee regional development.\p"
	.string "This town and forest is a chaotic mess\n"
	.string "of untapped resources.\p"
	.string "We're here to implement structure, to\n"
	.string "turn this town into a model of\l"
	.string "efficiency.$"

Mistcity_Indoor_Faculty_Husband_Text_1:
# 90 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "You.\p"
	.string "So you're the hooligan who interfered\n"
	.string "with our work.\p"
	.string "You've accomplished nothing but\n"
	.string "delaying the inevitable.\p"
	.string "This region needs order, not\n"
	.string "sentimental rabble-rousers.$"

Mistcity_Indoor_Faculty_Wife_Text_0:
# 102 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Oh, hello.\p"
	.string "A new face?\p"
	.string "I'm {COLOR BLUE}Eleanor{COLOR DARK_GRAY}.\p"
	.string "Mist City has a certain... rustic charm, I\n"
	.string "suppose.\p"
	.string "But it's so dreadfully unproductive.\p"
	.string "Don't you worry, The Faculty will bring\n"
	.string "modern amenities and a real sense of\l"
	.string "purpose to this place.\p"
	.string "That Daan fellow chaining himself to a\n"
	.string "tree? Utterly backwards.\p"
	.string "You can't stop the future.$"

Mistcity_Indoor_Faculty_Wife_Text_1:
# 109 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Mph.\p"
	.string "I suppose you think you're some kind of\n"
	.string "hero.\p"
	.string "Enjoy your precious, muddy trees.\p"
	.string "Progress will find a way, with or without\n"
	.string "your approval.$"
