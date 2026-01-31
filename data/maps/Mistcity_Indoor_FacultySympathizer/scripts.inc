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
	applymovement 3, Mistcity_Indoor_FacultySympathizer_Escape_Movement_2
# 26 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_2
# 27 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_FacultySympathizer_Escape_Text_3, MSGBOX_AUTOCLOSE
# 28 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 29 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement 5, Mistcity_Indoor_FacultySympathizer_Escape_Movement_5
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
	goto_if_set FLAG_BADGE02_GET, Mistcity_Indoor_FacultySympathizer_Escape_2
# 47 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_4
# 48 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_FacultySympathizer_Escape_Text_7, MSGBOX_AUTOCLOSE
# 49 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
Mistcity_Indoor_FacultySympathizer_Escape_1:
# 51 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	applymovement 3, Mistcity_Indoor_FacultySympathizer_Escape_Movement_6
# 52 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmovement
# 53 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	removeobject 3
# 54 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	release
	return

Mistcity_Indoor_FacultySympathizer_Escape_2:
# 42 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_4
# 43 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_FacultySympathizer_Escape_Text_6, MSGBOX_AUTOCLOSE
# 44 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
	goto Mistcity_Indoor_FacultySympathizer_Escape_1


Mistcity_Indoor_Faculty_Husband::
# 58 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	lock
# 59 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	faceplayer
# 60 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	goto_if_unset FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Faculty_Husband_2
# 67 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Faculty_Husband_4
	return

Mistcity_Indoor_Faculty_Husband_2:
# 61 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_0
# 62 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_Faculty_Husband_Text_0
# 63 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 64 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	release
	end

Mistcity_Indoor_Faculty_Husband_4:
# 68 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_0
# 69 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_Faculty_Husband_Text_1
# 70 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 71 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	release
	end


Mistcity_Indoor_Faculty_Wife::
# 77 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	lock
# 78 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	faceplayer
# 79 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	goto_if_unset FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Faculty_Wife_2
# 86 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Faculty_Wife_4
	return

Mistcity_Indoor_Faculty_Wife_2:
# 80 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_2
# 81 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_Faculty_Wife_Text_0
# 82 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 83 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	release
	end

Mistcity_Indoor_Faculty_Wife_4:
# 87 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_2
# 88 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_Faculty_Wife_Text_1
# 89 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 90 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	release
	end


# 14 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
Mistcity_Indoor_FacultySympathizer_Escape_Movement_0:
# 14 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	jump_right
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
	walk_fast_down
# 23 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_fast_down
# 23 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_fast_down
# 23 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	face_right
	step_end

# 29 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
Mistcity_Indoor_FacultySympathizer_Escape_Movement_5:
# 29 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_fast_down
	step_end

# 51 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
Mistcity_Indoor_FacultySympathizer_Escape_Movement_6:
# 51 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_left
# 51 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	walk_down
# 51 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
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
	.string "ones the faculty were using in\l"
	.string "Whisperwood grove.\p"
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
	.string "Forget the internship for a moment,\n"
	.string "this is bigger.\p"
	.string "The reports from the northern rangers\n"
	.string "are getting worse.\p"
	.string "Something big is happening near\n"
	.string "Lionsarch City and the Lion Mountains.\p"
	.string "You have to investigate.\p"
	.string "To get there, head west through Bat\n"
	.string "Cave, towards Siltroot Town.\p"
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
# 43 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Oh, you already beat David?\n"
	.string "Impressive.\p"
	.string "You're ready for the swamps, then.\p"
	.string "Good luck, {PLAYER}. I'll let you know\n"
	.string "what we find out from Prof. Birds.$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_7:
# 48 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "I'll let you know what we find out from\n"
	.string "Prof. Birds.$"

Mistcity_Indoor_Faculty_Husband_Text_0:
# 62 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
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
# 69 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "You.\p"
	.string "So you're the hooligan who interfered\n"
	.string "with our work.\p"
	.string "You've accomplished nothing but\n"
	.string "delaying the inevitable.\p"
	.string "This region needs order, not\n"
	.string "sentimental rabble-rousers.$"

Mistcity_Indoor_Faculty_Wife_Text_0:
# 81 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
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
# 88 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Mph.\p"
	.string "I suppose you think you're some kind of\n"
	.string "hero.\p"
	.string "Enjoy your precious, muddy trees.\p"
	.string "Progress will find a way, with or without\n"
	.string "your approval.$"
