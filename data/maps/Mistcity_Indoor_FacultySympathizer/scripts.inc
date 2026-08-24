Mistcity_Indoor_FacultySympathizer_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Mistcity_Indoor_FacultySympathizer_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Mistcity_Indoor_FacultySympathizer_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_MISTCITY_STATE, 1, Mistcity_Indoor_FacultySympathizer_Escape
	.2byte 0


Mistcity_Indoor_FacultySympathizer_Escape::
	lock
	setvar VAR_MISTCITY_STATE, 2
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_0
	msgbox Mistcity_Indoor_FacultySympathizer_Escape_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, Mistcity_Indoor_FacultySympathizer_Escape_Movement_0
	applymovement 4, Mistcity_Indoor_FacultySympathizer_Escape_Movement_1
	waitmovement
	applymovement 3, Mistcity_Indoor_FacultySympathizer_Escape_Movement_2
	setflag FLAG_FACULTY_SYMPATHIZERS_1
	removeobject 4
	delay 60
	applymovement 3, Mistcity_Indoor_FacultySympathizer_Escape_Movement_3
	delay 60
	applymovement 5, Mistcity_Indoor_FacultySympathizer_Escape_Movement_4
	waitmovement
	applymovement 3, Mistcity_Indoor_FacultySympathizer_Escape_Movement_5
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_2
	msgbox Mistcity_Indoor_FacultySympathizer_Escape_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 5, Mistcity_Indoor_FacultySympathizer_Escape_Movement_6
	waitmovement
	removeobject 5
	applymovement LOCALID_PLAYER, Mistcity_Indoor_FacultySympathizer_Escape_Movement_2
	applymovement 3, Mistcity_Indoor_FacultySympathizer_Escape_Movement_2
	waitmovement
	delay 120
	applymovement LOCALID_PLAYER, Mistcity_Indoor_FacultySympathizer_Escape_Movement_3
	waitmovement
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_4
	msgbox Mistcity_Indoor_FacultySympathizer_Escape_Text_5
	waitmessage
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_4
	msgbox Mistcity_Indoor_FacultySympathizer_Escape_Text_6, MSGBOX_AUTOCLOSE
	waitmessage
	goto_if_unset FLAG_SYS_POKENAV_GET, Mistcity_Indoor_FacultySympathizer_Escape_2
	playfanfare MUS_OBTAIN_ITEM
	message Mistcity_Indoor_FacultySympathizer_Escape_Text_8
	waitfanfare
	closemessage
Mistcity_Indoor_FacultySympathizer_Escape_1:
	setflag FLAG_FACULTY_SYMPATHIZERS_2
	clearflag FLAG_HIDE_ROUTE03_CLIFFSIDE_WATCHER
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
	setvar VAR_FORTREE_CITY_STATE, 1
	goto_if_set FLAG_BADGE02_GET, Mistcity_Indoor_FacultySympathizer_Escape_6
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_4
	msgbox Mistcity_Indoor_FacultySympathizer_Escape_Text_10, MSGBOX_AUTOCLOSE
	waitmessage
Mistcity_Indoor_FacultySympathizer_Escape_5:
	applymovement 3, Mistcity_Indoor_FacultySympathizer_Escape_Movement_7
	waitmovement
	removeobject 3
	release
	return

Mistcity_Indoor_FacultySympathizer_Escape_2:
	playfanfare MUS_OBTAIN_ITEM
	message Mistcity_Indoor_FacultySympathizer_Escape_Text_7
	waitfanfare
	closemessage
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_RECEIVED_POKENAV
	goto Mistcity_Indoor_FacultySympathizer_Escape_1

Mistcity_Indoor_FacultySympathizer_Escape_6:
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_4
	msgbox Mistcity_Indoor_FacultySympathizer_Escape_Text_9, MSGBOX_AUTOCLOSE
	waitmessage
	goto Mistcity_Indoor_FacultySympathizer_Escape_5


Mistcity_Indoor_Faculty_Husband::
	lock
	faceplayer
	goto_if_unset FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Faculty_Husband_2
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Faculty_Husband_4
	return

Mistcity_Indoor_Faculty_Husband_2:
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_0
	msgbox Mistcity_Indoor_Faculty_Husband_Text_0
	waitmessage
	release
	end

Mistcity_Indoor_Faculty_Husband_4:
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_0
	msgbox Mistcity_Indoor_Faculty_Husband_Text_1
	waitmessage
	release
	end


Mistcity_Indoor_Faculty_Wife::
	lock
	faceplayer
	goto_if_unset FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Faculty_Wife_2
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Faculty_Wife_4
	return

Mistcity_Indoor_Faculty_Wife_2:
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_2
	msgbox Mistcity_Indoor_Faculty_Wife_Text_0
	waitmessage
	release
	end

Mistcity_Indoor_Faculty_Wife_4:
	setspeaker Mistcity_Indoor_FacultySympathizer_Escape_Text_2
	msgbox Mistcity_Indoor_Faculty_Wife_Text_1
	waitmessage
	release
	end


Mistcity_Indoor_FacultySympathizer_Escape_Movement_0:
	walk_right
	face_left
	step_end

Mistcity_Indoor_FacultySympathizer_Escape_Movement_1:
	walk_fast_down
	walk_fast_left
	walk_fast_down
	walk_fast_down
	step_end

Mistcity_Indoor_FacultySympathizer_Escape_Movement_2:
	face_down
	step_end

Mistcity_Indoor_FacultySympathizer_Escape_Movement_3:
	face_up
	step_end

Mistcity_Indoor_FacultySympathizer_Escape_Movement_4:
	walk_down
	walk_down
	face_right
	step_end

Mistcity_Indoor_FacultySympathizer_Escape_Movement_5:
	face_left
	step_end

Mistcity_Indoor_FacultySympathizer_Escape_Movement_6:
	walk_down
	walk_down
	step_end

Mistcity_Indoor_FacultySympathizer_Escape_Movement_7:
	walk_left
	walk_down
	step_end

Mistcity_Indoor_FacultySympathizer_Escape_Text_0:
	.string "MARCUS$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_1:
	.string "... I'M TELLING YOU NOTHING, YOU STUPID\n"
	.string "TREE HUGGER!!\p"
	.string "NOW GET OUT OF MY WAY!$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_2:
	.string "ELEANOR$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_3:
	.string "Mph.\p"
	.string "I suppose you think you are some kind\n"
	.string "of hero?\p"
	.string "Enjoy your precious, muddy trees.\p"
	.string "Progress will find a way, with or without\n"
	.string "your approval.$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_4:
	.string "DAAN$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_5:
	.string "I think they're gone.\p"
	.string "Ran like Rattata the second I started\n"
	.string "asking real questions about the\l"
	.string "excavation.\p"
	.string "They knew exactly what The Faculty was\n"
	.string "doing to the forest.\p"
	.string "...\p"
	.string "What? There were problems in MASO TOWN\n"
	.string "as well?\p"
	.string "...\p"
	.string "That device looks very similar to the\n"
	.string "ones the faculty were using in the\l"
	.string "forest.\p"
	.string "But this... this feels too big for just\n"
	.string "them.\p"
	.string "I can't shake this feeling about PROF.\n"
	.string "BIRDS.\p"
	.string "You remember what I said in the truck?\p"
	.string "About him scanning the forest years\n"
	.string "ago?\p"
	.string "It's too much of a coincidence.\n"
	.string "I'm going to call JACOB.\p"
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
	.string "Here. Take this.\p"
	.string "I've already added my number.\p"
	.string "I'll call you on the Pokénav once we've\n"
	.string "dealt with the Professor.\p"
	.string "There's more I need to tell you but I'd\n"
	.string "rather not say it all out loud in here.$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_7:
	.string "DAAN handed you the Pokénav!\n"
	.string "His number has been registered!$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_8:
	.string "DAAN's number has been\n"
	.string "registered in your Pokénav!$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_9:
	.string "Oh, you already beat DAVID?\n"
	.string "Impressive.\p"
	.string "You're ready for the swamps, then.\p"
	.string "Good luck, {PLAYER}.$"

Mistcity_Indoor_FacultySympathizer_Escape_Text_10:
	.string "Oh, and don't skip the gym while you're\n"
	.string "in town.\p"
	.string "Good luck, {PLAYER}.$"

Mistcity_Indoor_Faculty_Husband_Text_0:
	.string "Welcome to the future site of progress.\p"
	.string "My name is {COLOR BLUE}MARCUS{COLOR DARK_GRAY}.\p"
	.string "The Faculty transferred me here to\n"
	.string "oversee regional development.\p"
	.string "This town and forest is a chaotic mess\n"
	.string "of untapped resources.\p"
	.string "We're here to implement structure, to\n"
	.string "turn this town into a model of\l"
	.string "efficiency.$"

Mistcity_Indoor_Faculty_Husband_Text_1:
	.string "You.\p"
	.string "So you're the hooligan who interfered\n"
	.string "with our work.\p"
	.string "You've accomplished nothing but\n"
	.string "delaying the inevitable.\p"
	.string "This region needs order, not\n"
	.string "sentimental rabble-rousers.$"

Mistcity_Indoor_Faculty_Wife_Text_0:
	.string "Oh, hello.\p"
	.string "A new face?\p"
	.string "I'm {COLOR BLUE}ELEANOR{COLOR DARK_GRAY}.\p"
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
	.string "Mph.\p"
	.string "I suppose you think you're some kind of\n"
	.string "hero.\p"
	.string "Enjoy your precious, muddy trees.\p"
	.string "Progress will find a way, with or without\n"
	.string "your approval.$"
