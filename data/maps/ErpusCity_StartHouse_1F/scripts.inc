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


Erpuscity_Starthouse_1F_WoodStatue::
# 14 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	lock
# 15 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_WoodStatue_Text_0, MSGBOX_AUTOCLOSE
# 16 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	release
	return


Erpuscity_Starthouse_1F_LittleSister::
# 20 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	lock
# 21 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setspeaker Erpuscity_Starthouse_1F_LittleSister_Text_0
# 22 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_LittleSister_Text_1, MSGBOX_AUTOCLOSE
# 23 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 24 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	release
	return


Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech::
# 28 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	lock
# 29 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	goto_if_unset FLAG_INTRO_SPEECH_MOM_FINISHED, Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_1
# 61 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	playse SE_PIN
# 62 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_1
# 63 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmovement
# 64 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_0
# 65 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_3, MSGBOX_AUTOCLOSE
# 66 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 67 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_7
# 68 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmovement
# 69 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	release
	end

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_1:
# 30 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 31 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_0
# 32 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	playse SE_PIN
# 33 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	applymovement 1, Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_1
# 34 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmovement
# 35 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	compare VAR_TEMP_0, 7
	goto_if_eq Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_6
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_4:
# 38 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_eq Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_11
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_9:
# 41 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_16
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_14:
# 44 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_0
# 45 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_1, MSGBOX_AUTOCLOSE
# 46 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 47 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	playse SE_PIN
# 48 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_5
# 49 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmovement
# 50 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	delay 120
# 51 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_0
# 52 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_2
# 53 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_6
# 54 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmovement
# 55 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setflag FLAG_INTRO_SPEECH_MOM_FINISHED
# 56 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setflag FLAG_HIDE_INTERN_BIRDS_LAB
# 57 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	release
	end

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_5:
# 36 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_2
	goto Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_4

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_6:
# 35 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_5
	goto Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_4

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_10:
# 39 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_3
	goto Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_9

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_11:
# 38 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_10
	goto Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_9

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_15:
# 42 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_4
	goto Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_14

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_16:
# 41 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_15
	goto Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_14


Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech::
# 76 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	lock
# 77 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	faceplayer
# 78 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	goto_if_unset FLAG_SYS_NATIONAL_DEX, Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_2
# 84 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_0
# 85 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_0
# 86 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 87 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_0
# 88 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_1, MSGBOX_YESNO
# 89 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 90 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_5
# 105 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_0
# 106 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_4
# 107 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_1:
# 111 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	release
	return

Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_2:
# 79 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_0
# 80 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_3
# 81 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
	goto Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_1

Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_5:
# 91 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_0
# 92 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_2, MSGBOX_AUTOCLOSE
# 93 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 94 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 95 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	playse MUS_HEAL
# 96 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitse
# 97 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	special HealPlayerParty
# 98 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	delay 40
# 99 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 100 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_0
# 101 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_3, MSGBOX_AUTOCLOSE
# 102 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
	goto Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_1


# 31 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_0:
# 31 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	face_down
	step_end

# 33 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_1:
# 33 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 36 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_2:
# 36 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
# 36 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
# 36 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
# 36 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
# 36 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
	step_end

# 39 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_3:
# 39 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
# 39 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
# 39 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
# 39 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
# 39 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
	step_end

# 42 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_4:
# 42 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
# 42 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
# 42 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
# 42 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
# 42 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
# 42 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
# 42 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
	step_end

# 48 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_5:
# 48 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	emote_question_mark
	step_end

# 53 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_6:
# 53 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_right
	step_end

# 67 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Movement_7:
# 67 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
	step_end

Erpuscity_Starthouse_1F_WoodStatue_Text_0:
# 15 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "It's a beautifull wooden sculpture.\n"
	.string "On the bottom it says:\p"
	.string "'Created by Silas, Woodworker from\n"
	.string "Mistcity'$"

Erpuscity_Starthouse_1F_LittleSister_Text_0:
# 21 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "Sister$"

Erpuscity_Starthouse_1F_LittleSister_Text_1:
# 22 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "Hi there big brother, how do you like my\n"
	.string "new stuffed Pokémon?\p"
	.string "It's huge isn't it?$"

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_0:
# 44 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "Mom$"

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_1:
# 45 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "Well, look who's finally awake!\p"
	.string "Do you have any idea what time it is?!\p"
	.string "Professor Birds just called and was\n"
	.string "fuming over the phone...\p"
	.string "He started ranting about another\n"
	.string "rejected grant, and how 'unreliable'\l"
	.string "today's youth are.\p"
	.string "He even threatened to give your\n"
	.string "internship to the next kid who walks\l"
	.string "into the lab!\p"
	.string "You'd better get moving.\n"
	.string "He's waiting for you!$"

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_2:
# 52 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "Don't complain...\p"
	.string "Here, shove this bagel in your mouth and\n"
	.string "get going!\p"
	.string "This is going to be a wonderful learning\n"
	.string "experience, but only if you actually\l"
	.string "show up!\p"
	.string "Now GO!\n"
	.string "Don't keep him waiting another second!\p"
	.string "Your dad would be proud!$"

Erpuscity_Starthouse_1F_Eventscripts_MomIntrospeech_Text_3:
# 65 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "{PLAYER} I won't say it again, come on,\n"
	.string "the lab will be fun for you!$"

Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_0:
# 85 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "So, you are going on an adventure?\p"
	.string "I knew you had it in you, dad would have\n"
	.string "been proud!\p"
	.string "Let me know if you ever need rest!$"

Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_1:
# 88 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "Do you need rest right now?$"

Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_2:
# 92 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "Let me take care of you.$"

Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_3:
# 101 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "There you go! Good luck on your\n"
	.string "adventure!$"

Erpuscity_Starthouse_1F_Eventscripts_Momafterspeech_Text_4:
# 106 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "You can come back any time you want!$"
