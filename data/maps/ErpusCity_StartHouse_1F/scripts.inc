ErpusCity_StartHouse_1F_MapScripts::
# 2 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ErpusCity_StartHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ErpusCity_StartHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	call ErpusCity_Heal_Location
	return


ErpusCity_Heal_Location::
# 9 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_ERP_CITY
	end


Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech::
# 14 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	lock
# 15 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	goto_if_unset FLAG_INTRO_SPEECH_MOM_FINISHED, Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_1
# 47 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	playse SE_PIN
# 48 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_5
# 49 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmovement
# 50 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_5, MSGBOX_AUTOCLOSE
# 51 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 52 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_6
# 53 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmovement
# 54 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	release
	end

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_1:
# 16 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 17 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_0
# 18 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmovement
# 19 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	compare VAR_TEMP_0, 7
	goto_if_eq Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_6
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_4:
# 22 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_eq Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_11
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_9:
# 25 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_16
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_14:
# 28 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_0, MSGBOX_AUTOCLOSE
# 29 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 30 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_1, MSGBOX_AUTOCLOSE
# 31 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 32 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	delay 60
# 33 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_2, MSGBOX_AUTOCLOSE
# 34 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 35 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	delay 60
# 36 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_3, MSGBOX_AUTOCLOSE
# 37 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 38 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	delay 40
# 39 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_4
# 40 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_4
# 41 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmovement
# 42 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setflag FLAG_INTRO_SPEECH_MOM_FINISHED
# 43 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	release
	end

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_5:
# 20 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_1
	goto Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_4

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_6:
# 19 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_5
	goto Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_4

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_10:
# 23 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_2
	goto Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_9

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_11:
# 22 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_10
	goto Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_9

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_15:
# 26 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_3
	goto Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_14

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_16:
# 25 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_15
	goto Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_14


Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech::
# 61 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	lock
# 62 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	faceplayer
# 63 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	goto_if_unset FLAG_SYS_NATIONAL_DEX, Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_2
# 68 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_1
# 69 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 70 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_2, MSGBOX_YESNO
# 71 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 72 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_5
# 85 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_5
# 86 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_1:
# 90 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	release
	return

Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_2:
# 64 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_0
# 65 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
	goto Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_1

Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_5:
# 73 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_3, MSGBOX_AUTOCLOSE
# 74 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 75 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 76 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	playse MUS_HEAL
# 77 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitse
# 78 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	special HealPlayerParty
# 79 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	delay 40
# 80 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 81 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_4, MSGBOX_AUTOCLOSE
# 82 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
	goto Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_1


# 17 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_0:
# 17 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	face_down
	step_end

# 20 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_1:
# 20 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
# 20 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
# 20 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
# 20 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
# 20 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
	step_end

# 23 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_2:
# 23 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
# 23 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
# 23 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
# 23 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
# 23 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
	step_end

# 26 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_3:
# 26 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
# 26 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
# 26 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
# 26 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
# 26 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
# 26 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
# 26 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
	step_end

# 40 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_4:
# 40 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_right
	step_end

# 48 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_5:
# 48 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 52 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_6:
# 52 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
	step_end

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_0:
# 28 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom: {COLOR DARK_GRAY}There you are! Finally awake.\p"
	.string "Getting up so early for the move must\n"
	.string "have completely exhausted you.\p"
	.string "You've slept through the whole morning.\p"
	.string "$"

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_1:
# 30 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "Here, I've got some breakfast for you.\n"
	.string "That should fix you right up!$"

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_2:
# 33 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "See? You already have some color back\n"
	.string "in your face.\p"
	.string "While you were resting, we unpacked\n"
	.string "almost everything, and the movers are\l"
	.string "just finishing up.\p"
	.string "Don't worry about the last few boxes;\n"
	.string "we're nearly finished.\p"
	.string "I think it's the perfect time for you to\n"
	.string "get out and explore our new hometown!\p"
	.string "Actually, I have an idea for your first\n"
	.string "destination.\p"
	.string "I heard the local professor is looking\n"
	.string "for an intern for his lab, which is just\l"
	.string "north of here.\p"
	.string "It would be a great way to get some\n"
	.string "experience under your belt before\l"
	.string "university next year.\p"
	.string "I met our neighbors this morning, and\n"
	.string "they told me their son, Barry, just\l"
	.string "started working there.\p"
	.string "Maybe you should walk over and check it\n"
	.string "out.$"

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_3:
# 36 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "Come on, don't look so sad.\p"
	.string "It's gonna be a fun experience, and you\n"
	.string "can't sit at home all summer playing on\l"
	.string "your gamecube!$"

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_4:
# 39 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "On you go!$"

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_5:
# 50 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom: {COLOR DARK_GRAY}{PLAYER} I won't say it again,\n"
	.string "come on, the lab will be fun for you!$"

Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_0:
# 64 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom: {COLOR DARK_GRAY}Well, what are you waiting for my\n"
	.string "boy.\p"
	.string "I'll see you at dinner!$"

Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_1:
# 68 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom: {COLOR DARK_GRAY}So, you are going on an adventure?\p"
	.string "I knew you had it in you, dad would have\n"
	.string "been proud!\p"
	.string "Let me know if you ever need rest!$"

Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_2:
# 70 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "Do you need rest right now?$"

Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_3:
# 73 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "Let me take care of you.$"

Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_4:
# 81 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "There you go! Good luck on your\n"
	.string "adventure!$"

Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_5:
# 85 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "You can come back any time you want!$"
