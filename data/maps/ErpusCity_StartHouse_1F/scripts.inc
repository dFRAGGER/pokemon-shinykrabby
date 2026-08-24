ErpusCity_StartHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ErpusCity_StartHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ErpusCity_StartHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ErpusCity_StartHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call ErpusCity_Heal_Location
	return

ErpusCity_StartHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_STARTHOUSE_ERP_CITY_1F, 0, ErpusCity_Starthouse_1F_IntroSpeechCheck
	.2byte 0


ErpusCity_Heal_Location::
	setrespawn HEAL_LOCATION_ERP_CITY
	end


ErpusCity_Starthouse_1F_IntroSpeechCheck::
	setvar VAR_STARTHOUSE_ERP_CITY_1F, 1
	goto_if_unset FLAG_INTRO_SPEECH_MOM_FINISHED, ErpusCity_Starthouse_1F_IntroSpeechCheck_2
ErpusCity_Starthouse_1F_IntroSpeechCheck_1:
	end

ErpusCity_Starthouse_1F_IntroSpeechCheck_2:
	call Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech
	goto ErpusCity_Starthouse_1F_IntroSpeechCheck_1


Erpuscity_Starthouse_1F_WoodStatue::
	lock
	msgbox Erpuscity_Starthouse_1F_WoodStatue_Text_0, MSGBOX_AUTOCLOSE
	release
	return


Erpuscity_Starthouse_1F_LittleSister::
	lock
	setspeaker Erpuscity_Starthouse_1F_LittleSister_Text_0
	msgbox Erpuscity_Starthouse_1F_LittleSister_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech::
	lock
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_0
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	delay 40
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Movement_0
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_0
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_PIN
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Movement_1
	waitmovement
	delay 120
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_0
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_3
	applymovement LOCALID_PLAYER, Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Movement_2
	waitmovement
	setflag FLAG_INTRO_SPEECH_MOM_FINISHED
	setflag FLAG_HIDE_INTERN_BIRDS_LAB
	setflag FLAG_HIDE_ROUTE03_CLIFFSIDE_WATCHER
	release
	end


Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech::
	lock
	faceplayer
	goto_if_unset FLAG_SYS_NATIONAL_DEX, Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_2
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_0
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_1
	waitmessage
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_0
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_2, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, YES
	goto_if_eq Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_5
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_0
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_5
	waitmessage
	release
	end

Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_1:
	release
	return

Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_2:
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_0
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_0
	waitmessage
	goto Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_1

Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_5:
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_0
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	fadescreen FADE_TO_BLACK
	playse MUS_HEAL
	waitse
	special HealPlayerParty
	delay 40
	fadescreen FADE_FROM_BLACK
	setspeaker Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_0
	msgbox Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Movement_0:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Movement_1:
	emote_question_mark
	step_end

Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Movement_2:
	walk_right
	step_end

Erpuscity_Starthouse_1F_WoodStatue_Text_0:
	.string "It's a beautifull wooden sculpture.\n"
	.string "On the bottom it says:\p"
	.string "'Created by SILAS, Woodworker from\n"
	.string "MIST CITY'$"

Erpuscity_Starthouse_1F_LittleSister_Text_0:
	.string "SISTER$"

Erpuscity_Starthouse_1F_LittleSister_Text_1:
	.string "MOM got me a new stuffed Pokémon!\p"
	.string "It's huge isn't it?$"

Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_0:
	.string "MOM$"

Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_1:
	.string "Well, look who's finally awake!$"

Erpuscity_Starthouse_1F_Eventscripts_MOMIntrospeech_Text_2:
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
	.string "Don't complain...\p"
	.string "This is going to be a wonderful learning\n"
	.string "experience, but only if you actually\l"
	.string "show up!\p"
	.string "Now GO!\n"
	.string "Don't keep him waiting another second!\p"
	.string "Your dad would be proud!$"

Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_0:
	.string "{PLAYER} I won't say it again, come on,\n"
	.string "the lab will be fun for you!$"

Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_1:
	.string "So, you are going on an adventure?\p"
	.string "I knew you had it in you, dad would have\n"
	.string "been proud!\p"
	.string "Let me know if you ever need rest!$"

Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_2:
	.string "Do you need rest right now?$"

Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_3:
	.string "Let me take care of you.$"

Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_4:
	.string "There you go! Good luck on your\n"
	.string "adventure!$"

Erpuscity_Starthouse_1F_Eventscripts_MOMafterspeech_Text_5:
	.string "You can come back any time you want!$"
