ErpusCity_StartHouse_1F_MapScripts::
# 2 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ErpusCity_StartHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ErpusCity_StartHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ErpusCity_StartHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	call ErpusCity_Heal_Location
	return

ErpusCity_StartHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	map_script_2 VAR_STARTHOUSE_ERP_CITY_1F, 0, ErpusCity_Starthouse_1F_IntroSpeechCheck
	.2byte 0


ErpusCity_Heal_Location::
# 11 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_ERP_CITY
	end


ErpusCity_Starthouse_1F_IntroSpeechCheck::
# 16 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setvar VAR_STARTHOUSE_ERP_CITY_1F, 1
# 17 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	goto_if_unset FLAG_INTRO_SPEECH_MOM_FINISHED, ErpusCity_Starthouse_1F_IntroSpeechCheck_2
ErpusCity_Starthouse_1F_IntroSpeechCheck_1:
	end

ErpusCity_Starthouse_1F_IntroSpeechCheck_2:
# 18 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	call Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech
	goto ErpusCity_Starthouse_1F_IntroSpeechCheck_1


Erpuscity_Starthouse_1F_WoodStatue::
# 24 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	lock
# 25 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_WoodStatue_Text_0, MSGBOX_AUTOCLOSE
# 26 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	release
	return


Erpuscity_Starthouse_1F_LittleSister::
# 30 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	lock
# 31 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setspeaker Erpuscity_Starthouse_1F_LittleSister_Text_0
# 32 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_LittleSister_Text_1, MSGBOX_AUTOCLOSE
# 33 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 34 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	release
	return


Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech::
# 38 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	lock
# 39 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_0
# 40 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_1, MSGBOX_AUTOCLOSE
# 41 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 42 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	delay 40
# 43 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	playse SE_PIN
# 44 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	applymovement 1, Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Movement_0
# 45 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmovement
# 46 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Movement_1
# 47 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_0
# 48 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_2, MSGBOX_AUTOCLOSE
# 49 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 50 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	playse SE_PIN
# 51 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Movement_2
# 52 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmovement
# 53 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	delay 120
# 54 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_0
# 55 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_3
# 56 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Movement_3
# 57 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmovement
# 58 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setflag FLAG_INTRO_SPEECH_MOM_FINISHED
# 59 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setflag FLAG_HIDE_INTERN_BIRDS_LAB
# 60 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE03_CLIFFSIDE_WATCHER
# 61 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	release
	end


Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech::
# 66 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	lock
# 67 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	faceplayer
# 68 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	goto_if_unset FLAG_SYS_NATIONAL_DEX, Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_2
# 74 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_0
# 75 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_1
# 76 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 77 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_0
# 78 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_2, MSGBOX_YESNO
# 79 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 80 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_5
# 97 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_0
# 98 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_5
# 99 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 100 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	release
	end

Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_1:
# 105 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	release
	return

Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_2:
# 69 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_0
# 70 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_0
# 71 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
	goto Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_1

Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_5:
# 81 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_0
# 82 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_3, MSGBOX_AUTOCLOSE
# 83 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 84 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 85 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	playse MUS_HEAL
# 86 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitse
# 87 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	special HealPlayerParty
# 88 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	delay 40
# 89 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 90 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_0
# 91 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_4, MSGBOX_AUTOCLOSE
# 92 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	waitmessage
# 93 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	release
	end


# 44 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Movement_0:
# 44 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 46 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Movement_1:
# 46 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
# 46 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
# 46 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_down
# 46 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
# 46 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
# 46 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_left
	step_end

# 51 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Movement_2:
# 51 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	emote_question_mark
	step_end

# 56 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Movement_3:
# 56 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	walk_right
	step_end

Erpuscity_Starthouse_1F_WoodStatue_Text_0:
# 25 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "It's a beautifull wooden sculpture.\n"
	.string "On the bottom it says:\p"
	.string "'Created by SILAS, Woodworker from\n"
	.string "MIST CITY'$"

Erpuscity_Starthouse_1F_LittleSister_Text_0:
# 31 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "SISTER$"

Erpuscity_Starthouse_1F_LittleSister_Text_1:
# 32 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "MOM got me a new stuffed Pokémon!\p"
	.string "It's huge isn't it?$"

Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_0:
# 39 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "MOM$"

Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_1:
# 40 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "Well, look who's finally awake!$"

Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_2:
# 48 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
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

Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_3:
# 55 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "Don't complain...\p"
	.string "This is going to be a wonderful learning\n"
	.string "experience, but only if you actually\l"
	.string "show up!\p"
	.string "Now GO!\n"
	.string "Don't keep him waiting another second!\p"
	.string "Your dad would be proud!$"

Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_0:
# 70 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "{PLAYER} I won't say it again, come on,\n"
	.string "the lab will be fun for you!$"

Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_1:
# 75 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "So, you are going on an adventure?\p"
	.string "I knew you had it in you, dad would have\n"
	.string "been proud!\p"
	.string "Let me know if you ever need rest!$"

Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_2:
# 78 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "Do you need rest right now?$"

Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_3:
# 82 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "Let me take care of you.$"

Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_4:
# 91 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "There you go! Good luck on your\n"
	.string "adventure!$"

Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_5:
# 98 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	.string "You can come back any time you want!$"
