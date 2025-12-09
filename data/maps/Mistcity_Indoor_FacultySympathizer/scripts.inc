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
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_0
# 11 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_FacultySympathizer_Escape_Text_1, MSGBOX_AUTOCLOSE
# 12 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 13 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement 4, Mistcity_Indoor_FacultySympathizer_Escape_Movement_0
# 14 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Indoor_FacultySympathizer_Escape_Movement_1
# 15 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmovement
# 16 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement 3, Mistcity_Indoor_FacultySympathizer_Escape_Movement_2
# 17 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setflag FLAG_FACULTY_SYMPATHIZERS_1
# 18 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	removeobject 4
# 19 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	delay 60
# 20 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement 3, Mistcity_Indoor_FacultySympathizer_Escape_Movement_3
# 21 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	delay 60
# 22 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement 5, Mistcity_Indoor_FacultySympathizer_Escape_Movement_4
# 23 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmovement
# 24 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement 3, Mistcity_Indoor_FacultySympathizer_Escape_Movement_2
# 25 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_2
# 26 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_FacultySympathizer_Escape_Text_3, MSGBOX_AUTOCLOSE
# 27 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 28 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement 5, Mistcity_Indoor_FacultySympathizer_Escape_Movement_5
# 29 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmovement
# 30 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	removeobject 5
# 31 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Indoor_FacultySympathizer_Escape_Movement_2
# 32 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement 3, Mistcity_Indoor_FacultySympathizer_Escape_Movement_2
# 33 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmovement
# 34 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	delay 120
# 35 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Indoor_FacultySympathizer_Escape_Movement_3
# 36 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmovement
# 37 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_4
# 38 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_FacultySympathizer_Escape_Text_5
# 39 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 40 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Mistcity_Indoor_FacultySympathizer_Escape_2
# 46 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_4
# 47 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_FacultySympathizer_Escape_Text_7, MSGBOX_AUTOCLOSE
# 48 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
Mistcity_Indoor_FacultySympathizer_Escape_1:
# 50 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement 3, Mistcity_Indoor_FacultySympathizer_Escape_Movement_6
# 51 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmovement
# 52 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	removeobject 3
# 53 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	release
	return

Mistcity_Indoor_FacultySympathizer_Escape_2:
# 41 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_4
# 42 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_FacultySympathizer_Escape_Text_6, MSGBOX_AUTOCLOSE
# 43 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
	goto Mistcity_Indoor_FacultySympathizer_Escape_1


Mistcity_Indoor_Faculty_Husband::
# 57 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	lock
# 58 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	faceplayer
# 59 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	goto_if_unset FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Faculty_Husband_2
# 66 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Faculty_Husband_4
	return

Mistcity_Indoor_Faculty_Husband_2:
# 60 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_0
# 61 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_Faculty_Husband_Text_0
# 62 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 63 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	release
	end

Mistcity_Indoor_Faculty_Husband_4:
# 67 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_0
# 68 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_Faculty_Husband_Text_1
# 69 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 70 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	release
	end


Mistcity_Indoor_Faculty_Wife::
# 76 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	lock
# 77 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	faceplayer
# 78 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	goto_if_unset FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Faculty_Wife_2
# 85 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Faculty_Wife_4
	return

Mistcity_Indoor_Faculty_Wife_2:
# 79 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_2
# 80 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_Faculty_Wife_Text_0
# 81 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 82 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	release
	end

Mistcity_Indoor_Faculty_Wife_4:
# 86 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_2
# 87 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_Faculty_Wife_Text_1
# 88 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 89 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	release
	end


# 13 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
Mistcity_Indoor_FacultySympathizer_Escape_Movement_0:
# 13 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_fast_down
# 13 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_fast_left
# 13 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_fast_down
# 13 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_fast_down
# 13 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_fast_down
	step_end

# 14 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
Mistcity_Indoor_FacultySympathizer_Escape_Movement_1:
# 14 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	jump_right
# 14 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	face_left
	step_end

# 16 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
Mistcity_Indoor_FacultySympathizer_Escape_Movement_2:
# 16 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	face_down
	step_end

# 20 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
Mistcity_Indoor_FacultySympathizer_Escape_Movement_3:
# 20 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	face_up
	step_end

# 22 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
Mistcity_Indoor_FacultySympathizer_Escape_Movement_4:
# 22 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_fast_down
# 22 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_fast_down
# 22 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_fast_down
# 22 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	face_right
	step_end

# 28 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
Mistcity_Indoor_FacultySympathizer_Escape_Movement_5:
# 28 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_fast_down
	step_end

# 50 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
Mistcity_Indoor_FacultySympathizer_Escape_Movement_6:
# 50 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_left
# 50 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_down
# 50 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_down
	step_end

Mistcity_Indoor_FacultySympathizer_Escape_Text_0:
# 10 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Marcus$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_1:
# 11 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "... I'M TELLING YOU NOTHING, YOU STUPID\n"
	.string "TREE HUGGER!!\p"
	.string "NOW GET OUT OF MY WAY!$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_2:
# 25 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Eleanor$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_3:
# 26 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Mph.\p"
	.string "I suppose you think you are some kind\n"
	.string "of hero?\p"
	.string "Enjoy your precious, muddy trees.\p"
	.string "Progress will find a way, with or without\n"
	.string "your approval.$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_4:
# 37 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Daan$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_5:
# 38 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "I think they're gone.\p"
	.string "Ran like Rattata the second I started\n"
	.string "asking real questions about the\l"
	.string "excavation.\p"
	.string "They knew exactly what The Faculty was\n"
	.string "doing to the forest.\p"
	.string "But this... this feels too big for just\n"
	.string "them.\p"
	.string "I can't shake this feeling about Prof.\n"
	.string "Birds.\p"
	.string "You remember what I said in the truck?\p"
	.string "About him scanning the forest years\n"
	.string "ago?\p"
	.string "It's too much of a coincidence.\n"
	.string "Im going to call Jacob.\p"
	.string "He's got a way of making people talk.\p"
	.string "We're going to pay the Professor a visit\n"
	.string "at his lab.\p"
	.string "We need to know what he was really\n"
	.string "looking for back then.\p"
	.string "If he knows anything about Registeel,\n"
	.string "we're going to get it out of him.\p"
	.string "While we handle Prof. Birds, I need you\n"
	.string "to keep chasing The Faculty.\p"
	.string "The reports from the northern rangers\n"
	.string "are getting worse.\p"
	.string "Something big is happening near\n"
	.string "Lionsarch City and the Lion Mountains.\p"
	.string "You have to investigate.\p"
	.string "To get there, head through Bat Cave to\n"
	.string "Siltroot Town.\p"
	.string "It's an old, rural trading post deep in\n"
	.string "the mangroves.\p"
	.string "Look for a guy named Ali.\p"
	.string "He's an old friend... a brilliant\n"
	.string "herbalist.\p"
	.string "...though he's usually busy sampling his\n"
	.string "own... very potent herbs.\p"
	.string "He knows all the old smuggling routes\n"
	.string "and the boat captains.\p"
	.string "If anyone can get you a ride to\n"
	.string "Lionsarch, it's him.\p"
	.string "Oh and don't forget to check out the\n"
	.string "gym before you leave!\p"
	.string "The gym leader might surprise you...$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_6:
# 42 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Oh, you already beat David?\n"
	.string "Impressive.\p"
	.string "You're ready for the swamps, then.\p"
	.string "Good luck, {PLAYER}. I'll let you know\n"
	.string "what we find out from Prof. Birds.$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_7:
# 47 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Also, you'll learn to move trough pitch\n"
	.string "darkness.\p"
	.string "Something you'll need to pass through\n"
	.string "Bat Cave safely.\p"
	.string "I'll let you know what we find out from\n"
	.string "Prof. Birds.$"

Mistcity_Indoor_Faculty_Husband_Text_0:
# 61 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
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
# 68 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "You.\p"
	.string "So you're the hooligan who interfered\n"
	.string "with our work.\p"
	.string "You've accomplished nothing but\n"
	.string "delaying the inevitable.\p"
	.string "This region needs order, not\n"
	.string "sentimental rabble-rousers.$"

Mistcity_Indoor_Faculty_Wife_Text_0:
# 80 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Oh, hello.\p"
	.string "A new face?\p"
	.string "I'm {COLOR BLUE}Eleanor{COLOR DARK_GRAY}.\p"
	.string "Mist City has a certain... rustic charm, I\n"
	.string "suppose.\p"
	.string "But it's so dreadfully unproductive.\p"
	.string "Don't you worry, The Faculty will bring\n"
	.string "modern amenities and a real sense of\l"
	.string "purpose to this place.\p"
	.string "That Dan fellow chaining himself to a\n"
	.string "tree? Utterly backwards.\p"
	.string "You can't stop the future.$"

Mistcity_Indoor_Faculty_Wife_Text_1:
# 87 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Mph.\p"
	.string "I suppose you think you're some kind of\n"
	.string "hero.\p"
	.string "Enjoy your precious, muddy trees.\p"
	.string "Progress will find a way, with or without\n"
	.string "your approval.$"
