Marshduke_Indoor_Chatedral_MapScripts::
# 2 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Marshduke_Indoor_Chatedral_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Marshduke_Indoor_Chatedral_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	map_script_2 VAR_MARSHDUKE_CATHEDRAL_VISION_STATE, 2, Marshduke_Indoor_Chatedral_EventScript_VisionReturn
	.2byte 0


Marshduke_Indoor_Chatedral_EventScript_Alakazam::
# 8 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 9 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 10 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Alakazam_Text_0, MSGBOX_YESNO
# 11 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 12 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Marshduke_Indoor_Chatedral_EventScript_Alakazam_2
Marshduke_Indoor_Chatedral_EventScript_Alakazam_1:
# 15 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return

Marshduke_Indoor_Chatedral_EventScript_Alakazam_2:
# 13 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	goto Marshduke_Indoor_Chatedral_EventScript_Latias
	goto Marshduke_Indoor_Chatedral_EventScript_Alakazam_1


Marshduke_Indoor_Chatedral_EventScript_Latias::
# 23 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setvar VAR_MARSHDUKE_CATHEDRAL_VISION_STATE, 1
# 24 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	fadescreen FADE_TO_BLACK
# 25 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	warpsilent MAP_MARSHDUKE_INDOOR_VISION_LATIOS_LATIAS, 11, 7
# 26 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitstate
# 27 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_VisionReturn::
# 31 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setvar VAR_MARSHDUKE_CATHEDRAL_VISION_STATE, 0
# 32 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 33 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 27, Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Movement_0
# 34 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 35 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Text_0, MSGBOX_AUTOCLOSE
# 36 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 37 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 27, Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Movement_1
# 38 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement
# 39 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Sister_Wren::
# 43 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 44 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 45 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sister_Wren_Text_0, MSGBOX_AUTOCLOSE
# 46 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 47 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Sign_LatiosLatias::
# 51 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 52 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 53 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sign_LatiosLatias_Text_0, MSGBOX_AUTOCLOSE
# 54 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 55 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Sign_HoohLugia::
# 59 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 60 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 61 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sign_HoohLugia_Text_0, MSGBOX_AUTOCLOSE
# 62 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 63 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Sign_EnteiRaikouSuicune::
# 67 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 68 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 69 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sign_EnteiRaikouSuicune_Text_0, MSGBOX_AUTOCLOSE
# 70 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 71 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Sign_MewMewtwo::
# 75 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 76 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 77 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sign_MewMewtwo_Text_0, MSGBOX_AUTOCLOSE
# 78 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 79 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Sign_GroundonKyogreRayquaza::
# 83 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 84 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 85 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sign_GroundonKyogreRayquaza_Text_0, MSGBOX_AUTOCLOSE
# 86 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 87 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


Marshduke_Indoor_Chatedral_EventScript_Sign_EmptyShrine::
# 91 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	lock
# 92 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	faceplayer
# 93 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	msgbox Marshduke_Indoor_Chatedral_EventScript_Sign_EmptyShrine_Text_0, MSGBOX_AUTOCLOSE
# 94 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmessage
# 95 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	release
	return


# 33 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Movement_0:
# 33 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_right
	step_end

# 37 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Movement_1:
# 37 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_left
# 37 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	face_down
	step_end

Marshduke_Indoor_Chatedral_EventScript_Alakazam_Text_0:
# 10 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "MEGA ALAKAZAM's spoons glow with a\n"
	.string "faint psychic light...\p"
	.string "Ancient memories stir at the edge of\n"
	.string "your mind, visions of LATIOS and LATIAS\l"
	.string "long past.\p"
	.string "Will you open your mind to them?$"

Marshduke_Indoor_Chatedral_EventScript_VisionReturn_Text_0:
# 35 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "Welcome back to the present.\p"
	.string "Give yourself time to readjust to the\n"
	.string "world around you.$"

Marshduke_Indoor_Chatedral_EventScript_Sister_Wren_Text_0:
# 45 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "The meaning of the vision in my opinion?\p"
	.string "Interdependence. Take one away and\n"
	.string "the other falls.\p"
	.string "Some people think that is a weakness.\p"
	.string "It's not. It's the core of everything in\n"
	.string "the universe.\p"
	.string "Light and dark, life and death, love and\n"
	.string "hate.\p"
	.string "They are all two sides of the same coin.\p"
	.string "It's the only design that has ever\n"
	.string "worked.\p"
	.string "For willows, for waters, for worlds. For\n"
	.string "Latios and Latias.$"

Marshduke_Indoor_Chatedral_EventScript_Sign_LatiosLatias_Text_0:
# 53 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "THE LESSON OF THE TWO HEARTS:\n"
	.string "Love is the only thing that grows larger\l"
	.string "when shared.$"

Marshduke_Indoor_Chatedral_EventScript_Sign_HoohLugia_Text_0:
# 61 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "THE LESSON OF THE DIVIDED SKY:\n"
	.string "Power that loves the world must\l"
	.string "sometimes leave it.$"

Marshduke_Indoor_Chatedral_EventScript_Sign_EnteiRaikouSuicune_Text_0:
# 69 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "THE LESSON OF THE RUNNERS:\n"
	.string "A second life is not a gift. It is an\l"
	.string "assignment.$"

Marshduke_Indoor_Chatedral_EventScript_Sign_MewMewtwo_Text_0:
# 77 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "THE LESSON OF THE MIRROR:\n"
	.string "The circumstances of one's birth are\l"
	.string "irrelevant. It is what you do with the\l"
	.string "gift of life that determines who you\l"
	.string "are.$"

Marshduke_Indoor_Chatedral_EventScript_Sign_GroundonKyogreRayquaza_Text_0:
# 85 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "THE LESSON OF THE DROWNED AND BURNING\n"
	.string "WORLD:\n"
	.string "When two truths war without limit, the\l"
	.string "answer comes from above them both.$"

Marshduke_Indoor_Chatedral_EventScript_Sign_EmptyShrine_Text_0:
# 93 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	.string "FIVE MEMORIES OF WHAT WAS. ONE SPACE\n"
	.string "FOR WHAT COULD BE. THE DIFFERENCE\l"
	.string "BETWEEN THEM IS US.$"
