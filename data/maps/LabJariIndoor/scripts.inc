LabJariIndoor_MapScripts::
	.byte 0


LabJariIndoor_Eventscript_Birds_Pokemon_Check::
	lockall
	faceplayer
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, LabJariIndoor_Eventscript_Birds_Pokemon_Check_2
LabJariIndoor_Eventscript_Birds_Pokemon_Check_1:
	goto_if_set FLAG_SHINY_KRABBY_ENCOUNTER, LabJariIndoor_Eventscript_Birds_Pokemon_Check_5
LabJariIndoor_Eventscript_Birds_Pokemon_Check_4:
	releaseall
	return

LabJariIndoor_Eventscript_Birds_Pokemon_Check_2:
	msgbox LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	goto LabJariIndoor_Eventscript_Birds_Pokemon_Check_1

LabJariIndoor_Eventscript_Birds_Pokemon_Check_5:
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
	msgbox LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_2
	goto LabJariIndoor_Eventscript_Birds_Pokemon_Check_4


LabJariIndoor_Eventscript_Magikarp::
	lock
	msgbox LabJariIndoor_Eventscript_Magikarp_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


LabJariIndoor_Eventscript_Barry_Birds::
	lock
	goto_if_unset FLAG_INTERN_BOXES_ASSIGNMENT, LabJariIndoor_Eventscript_Barry_Birds_1
	playse SE_PIN
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_16
	waitmovement
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_10, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, LabJariIndoor_Eventscript_Barry_Birds_Movement_15
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
	waitmovement
	release
	end

LabJariIndoor_Eventscript_Barry_Birds_1:
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	delay 10
	playse SE_PIN
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_0
	waitmovement
	delay 30
	playse SE_PIN
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_1
	waitmovement
	compare VAR_TEMP_0, 3
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_6
LabJariIndoor_Eventscript_Barry_Birds_4:
	compare VAR_TEMP_0, 4
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_11
LabJariIndoor_Eventscript_Barry_Birds_9:
	compare VAR_TEMP_0, 5
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_16
LabJariIndoor_Eventscript_Barry_Birds_14:
	compare VAR_TEMP_0, 6
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_21
LabJariIndoor_Eventscript_Barry_Birds_19:
	waitmovement
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_7
	playse SE_PIN
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_8
	waitmovement
	setspeaker LabJariIndoor_Eventscript_Barry_Birds_Text_1
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
	delay 40
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_7
	delay 40
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
	delay 40
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_7
	delay 40
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
	delay 60
	playse SE_PIN
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_10
	waitmovement
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_4
	release
	waitmessage
	playse SE_PIN
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_10
	waitmovement
	setspeaker LabJariIndoor_Eventscript_Barry_Birds_Text_1
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_5
	waitmessage
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_7
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_6
	waitmessage
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_7, MSGBOX_AUTOCLOSE
	waitmessage
	compare VAR_TEMP_0, 3
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_26
LabJariIndoor_Eventscript_Barry_Birds_24:
	compare VAR_TEMP_0, 4
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_31
LabJariIndoor_Eventscript_Barry_Birds_29:
	compare VAR_TEMP_0, 5
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_36
LabJariIndoor_Eventscript_Barry_Birds_34:
	compare VAR_TEMP_0, 6
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_41
LabJariIndoor_Eventscript_Barry_Birds_39:
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
	waitmovement
	delay 90
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
	waitmovement
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_8, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, LabJariIndoor_Eventscript_Barry_Birds_Movement_15
	waitmovement
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_9, MSGBOX_AUTOCLOSE
	waitmessage
	setflag FLAG_INTERN_BOXES_ASSIGNMENT
	fadedefaultbgm
	release
	end

LabJariIndoor_Eventscript_Barry_Birds_5:
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_2
	applymovement LOCALID_PLAYER, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
	goto LabJariIndoor_Eventscript_Barry_Birds_4

LabJariIndoor_Eventscript_Barry_Birds_6:
	compare VAR_TEMP_1, 14
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_5
	goto LabJariIndoor_Eventscript_Barry_Birds_4

LabJariIndoor_Eventscript_Barry_Birds_10:
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_4
	goto LabJariIndoor_Eventscript_Barry_Birds_9

LabJariIndoor_Eventscript_Barry_Birds_11:
	compare VAR_TEMP_1, 13
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_10
	goto LabJariIndoor_Eventscript_Barry_Birds_9

LabJariIndoor_Eventscript_Barry_Birds_15:
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_5
	goto LabJariIndoor_Eventscript_Barry_Birds_14

LabJariIndoor_Eventscript_Barry_Birds_16:
	compare VAR_TEMP_1, 13
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_15
	goto LabJariIndoor_Eventscript_Barry_Birds_14

LabJariIndoor_Eventscript_Barry_Birds_20:
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_6
	applymovement LOCALID_PLAYER, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
	goto LabJariIndoor_Eventscript_Barry_Birds_19

LabJariIndoor_Eventscript_Barry_Birds_21:
	compare VAR_TEMP_1, 14
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_20
	goto LabJariIndoor_Eventscript_Barry_Birds_19

LabJariIndoor_Eventscript_Barry_Birds_25:
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_11
	goto LabJariIndoor_Eventscript_Barry_Birds_24

LabJariIndoor_Eventscript_Barry_Birds_26:
	compare VAR_TEMP_1, 14
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_25
	goto LabJariIndoor_Eventscript_Barry_Birds_24

LabJariIndoor_Eventscript_Barry_Birds_30:
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_12
	goto LabJariIndoor_Eventscript_Barry_Birds_29

LabJariIndoor_Eventscript_Barry_Birds_31:
	compare VAR_TEMP_1, 13
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_30
	goto LabJariIndoor_Eventscript_Barry_Birds_29

LabJariIndoor_Eventscript_Barry_Birds_35:
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_13
	goto LabJariIndoor_Eventscript_Barry_Birds_34

LabJariIndoor_Eventscript_Barry_Birds_36:
	compare VAR_TEMP_1, 13
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_35
	goto LabJariIndoor_Eventscript_Barry_Birds_34

LabJariIndoor_Eventscript_Barry_Birds_40:
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_14
	goto LabJariIndoor_Eventscript_Barry_Birds_39

LabJariIndoor_Eventscript_Barry_Birds_41:
	compare VAR_TEMP_1, 14
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_40
	goto LabJariIndoor_Eventscript_Barry_Birds_39


LabJariIndoor_Eventscript_Birds_Convo::
	lock
	playse SE_PIN
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_10
	waitmovement
	faceplayer
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
	msgbox LabJariIndoor_Eventscript_Birds_Convo_Text_0
	waitmessage
	playse SE_PIN
	applymovement 2, LabJariIndoor_Eventscript_Birds_Convo_Movement_0
	setspeaker LabJariIndoor_Eventscript_Barry_Birds_Text_1
	msgbox LabJariIndoor_Eventscript_Birds_Convo_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_PIN
	applymovement 3, LabJariIndoor_Eventscript_Birds_Convo_Movement_1
	waitmovement
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
	msgbox LabJariIndoor_Eventscript_Birds_Convo_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
	waitmovement
	delay 40
	faceplayer
	waitmovement
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
	msgbox LabJariIndoor_Eventscript_Birds_Convo_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
	waitmovement
	release
	return


LabJariIndoor_Eventscript_Barry_Convo::
	lock
	playse SE_PIN
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_10
	waitmovement
	faceplayer
	setspeaker LabJariIndoor_Eventscript_Barry_Birds_Text_1
	msgbox LabJariIndoor_Eventscript_Barry_Convo_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
	waitmovement
	release
	return


LabJariIndoor_Sign_1::
	lock
	msgbox LabJariIndoor_Sign_1_Text_0
	waitmessage
	release
	return


LabJariIndoor_Sign_2::
	lock
	msgbox LabJariIndoor_Sign_2_Text_0
	waitmessage
	release
	return


LabJariIndoor_Sign_3::
	lock
	msgbox LabJariIndoor_Sign_3_Text_0
	waitmessage
	release
	return


LabJariIndoor_Sign_4::
	lock
	msgbox LabJariIndoor_Sign_4_Text_0
	waitmessage
	release
	return


LabJariIndoor_Sign_5::
	lock
	msgbox LabJariIndoor_Sign_5_Text_0
	waitmessage
	release
	return


LabJariIndoor_Sign_6::
	lock
	msgbox LabJariIndoor_Sign_6_Text_0
	waitmessage
	release
	return


LabJariIndoor_Sign_7::
	lock
	msgbox LabJariIndoor_Sign_7_Text_0
	waitmessage
	release
	return


LabJariIndoor_Sign_8::
	lock
	msgbox LabJariIndoor_Sign_8_Text_0
	waitmessage
	release
	return


LabJariIndoor_Sign_9::
	lock
	msgbox LabJariIndoor_Sign_9_Text_0
	waitmessage
	release
	return


LabJariIndoor_Sign_10::
	lock
	msgbox LabJariIndoor_Sign_10_Text_0
	waitmessage
	release
	return


LabJariIndoor_Sign_11::
	lock
	msgbox LabJariIndoor_Sign_11_Text_0
	waitmessage
	release
	return


LabJariIndoor_Sign_12::
	lock
	msgbox LabJariIndoor_Sign_12_Text_0
	waitmessage
	release
	return


LabJariIndoor_Sign_13::
	lock
	msgbox LabJariIndoor_Sign_13_Text_0
	waitmessage
	release
	return


LabJariIndoor_Sign_14::
	lock
	msgbox LabJariIndoor_Sign_14_Text_0
	waitmessage
	release
	return


LabJariIndoor_Sign_15::
	lock
	msgbox LabJariIndoor_Sign_14_Text_0
	waitmessage
	release
	return


LabJariIndoor_Sign_16::
	lock
	msgbox LabJariIndoor_Sign_16_Text_0
	waitmessage
	release
	return


LabJariIndoor_Sign_17::
	lock
	msgbox LabJariIndoor_Sign_17_Text_0
	waitmessage
	release
	return


LabJariIndoor_Sign_18::
	lock
	msgbox LabJariIndoor_Sign_18_Text_0
	waitmessage
	release
	return


LabJariIndoor_Sign_19::
	lock
	msgbox LabJariIndoor_Sign_19_Text_0
	waitmessage
	release
	return


LabJariIndoor_Eventscript_Barry_Birds_Movement_0:
	face_down
	emote_exclamation_mark
	step_end

LabJariIndoor_Eventscript_Barry_Birds_Movement_1:
	face_down
	emote_question_mark
	step_end

LabJariIndoor_Eventscript_Barry_Birds_Movement_2:
	walk_down
	walk_down
	step_end

LabJariIndoor_Eventscript_Barry_Birds_Movement_3:
	face_up
	step_end

LabJariIndoor_Eventscript_Barry_Birds_Movement_4:
	walk_right
	walk_down
	step_end

LabJariIndoor_Eventscript_Barry_Birds_Movement_5:
	walk_right
	walk_right
	walk_down
	step_end

LabJariIndoor_Eventscript_Barry_Birds_Movement_6:
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	step_end

LabJariIndoor_Eventscript_Barry_Birds_Movement_7:
	face_left
	step_end

LabJariIndoor_Eventscript_Barry_Birds_Movement_8:
	emote_question_mark
	step_end

LabJariIndoor_Eventscript_Barry_Birds_Movement_9:
	face_down
	step_end

LabJariIndoor_Eventscript_Barry_Birds_Movement_10:
	emote_exclamation_mark
	step_end

LabJariIndoor_Eventscript_Barry_Birds_Movement_11:
	walk_up
	walk_up
	step_end

LabJariIndoor_Eventscript_Barry_Birds_Movement_12:
	walk_up
	walk_left
	face_up
	step_end

LabJariIndoor_Eventscript_Barry_Birds_Movement_13:
	walk_up
	walk_left
	walk_left
	face_up
	step_end

LabJariIndoor_Eventscript_Barry_Birds_Movement_14:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	face_up
	step_end

LabJariIndoor_Eventscript_Barry_Birds_Movement_15:
	walk_up
	step_end

LabJariIndoor_Eventscript_Barry_Birds_Movement_16:
	emote_exclamation_mark
	face_down
	step_end

LabJariIndoor_Eventscript_Birds_Convo_Movement_0:
	face_right
	emote_question_mark
	step_end

LabJariIndoor_Eventscript_Birds_Convo_Movement_1:
	emote_exclamation_mark
	face_left
	step_end

LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0:
	.string "PROF. BIRDS$"

LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_1:
	.string "...Why are you still HERE? BETTER GET TO\n"
	.string "THAT SCRUB OF A FRIEND CALLED JACOB IN\l"
	.string "MASO TOWN!$"

LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_2:
	.string "...\p"
	.string "...\p"
	.string "ZERO DATA?!\p"
	.string "YOU SAW THE GOLDEN ANOMALY AND YOU\n"
	.string "HAVE ZERO DATA?!\p"
	.string "THIS IS WORSE THAN THE DAY I SOLD MY\n"
	.string "BITCOIN FOR A PIZZA!\p"
	.string "...wait...\p"
	.string "...you said it deflected the signal?\n"
	.string "That level of energy resistance...\p"
	.string "...It might imply that the mutation was\n"
	.string "triggered by...\p"
	.string "...no...\p"
	.string "...it can't be...\p"
	.string "ANYWAYS, IF YOU WANT TO TRULY BECOME A\n"
	.string "POKEMON RESEARCHER, SCAN THAT GOLDEN\l"
	.string "KRABBY FOR ME.\p"
	.string "NOW GET OUT! I NEED TO LISTEN TO\n"
	.string "SABRINA CARPENTER! USELESS INTERN!$"

LabJariIndoor_Eventscript_Magikarp_Text_0:
	.string "...splash...splash...$"

LabJariIndoor_Eventscript_Barry_Birds_Text_0:
	.string "SO WHO ARE YOU?\p"
	.string "...\p"
	.string "You want to become my new intern?\p"
	.string "WELL TOO LATE!!\p"
	.string "BARRY WAS HERE FIRST!!\p"
	.string "ISN'T THAT RIGHT BARRY?$"

LabJariIndoor_Eventscript_Barry_Birds_Text_1:
	.string "BARRY$"

LabJariIndoor_Eventscript_Barry_Birds_Text_2:
	.string "Uhmm...\n"
	.string "wait a second...\p"
	.string "I'm just...\n"
	.string "...an intern???\p"
	.string "But what about...\n"
	.string "...my salary?$"

LabJariIndoor_Eventscript_Barry_Birds_Text_3:
	.string "YES BARRY, YOU ARE MY INTERN\p"
	.string "...NO, I'M NOT PAYING YOU A FULL SALARY\p"
	.string "...NO, THE GOVERNMENT SUBSIDIES AREN'T\n"
	.string "ENOUGH!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_4:
	.string "....wait a second....\p"
	.string "...I just looked at the new subsidies\n"
	.string "and...\p"
	.string "OUR BUDGET STILL ALLOWS AN EXTRA\n"
	.string "INTERN!!\p"
	.string "YOU ARE HIRED!!\p"
	.string "...SALARY?? AT THE END OF THE MONTH\n"
	.string "OFCOURSE...\p"
	.string "MAYBE...\p"
	.string "WHO KNOWS!!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_5:
	.string "What the...$"

LabJariIndoor_Eventscript_Barry_Birds_Text_6:
	.string "DON'T COMPLAIN BARRY!!\p"
	.string "SHUT U....I MEAN WE WILL TALK ABOUT THIS\n"
	.string "LATER!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_7:
	.string "And you are... {PLAYER}??\p"
	.string "...and {PLAYER} is interested in\n"
	.string "Pokémon??\p"
	.string "WELL, GET IN LINE! HAHAHA.\p"
	.string "MY NAME IS PROFESSOR BIRDS!\p"
	.string "I RESEARCH POKEMON FOR A LIVING!!\p"
	.string "Besides that, I also develop secret\n"
	.string "technol... SENSORS FOR PIG FARMS.\p"
	.string "...so you want to become a POKEMON\n"
	.string "RESEARCHER?\p"
	.string "...HAHAHAH, YOU!!?\n"
	.string "A POKEMON RESEARCHER???\p"
	.string "WELL WELL.\p"
	.string "Your first task as an INTERN is to GET\n"
	.string "SOME BOXES OUT OF MY STORAGE ROOM.\p"
	.string "Everybody who wants to become a\n"
	.string "POKEMON RESEARCHER has to start\l"
	.string "SOMEWHERE!!\p"
	.string "HAHAHAHAH!!\p"
	.string "I warn you, do not sniff around in my\n"
	.string "storage room...\p"
	.string "...OR I'LL FIRE YOU IMMEDIATELY!\p"
	.string "HAHAHHAHA... HAHAH... HAHA... HA... haha...$"

LabJariIndoor_Eventscript_Barry_Birds_Text_8:
	.string "THE BOXES ARE IN THE BACK YOU IDIO...\n"
	.string "lovely little intern!!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_9:
	.string "WELL, WHERE WERE WE BARRY??$"

LabJariIndoor_Eventscript_Barry_Birds_Text_10:
	.string "WHERE DO YOU THINK YOU ARE GOING,\n"
	.string "{PLAYER}?\p"
	.string "GET TO THE BACK AND GET THOSE BOXES\n"
	.string "HERE!!$"

LabJariIndoor_Eventscript_Birds_Convo_Text_0:
	.string "DON'T BOTHER US, I'M EXPLAINING TO\n"
	.string "BARRY HOW IMPORTANT DNA SAMPL... pig\l"
	.string "sensors are!!$"

LabJariIndoor_Eventscript_Birds_Convo_Text_1:
	.string "...ehummm...\p"
	.string "...my name is Wou...$"

LabJariIndoor_Eventscript_Birds_Convo_Text_2:
	.string "JUST FOCUS ON THE BOOKS BARRY!$"

LabJariIndoor_Eventscript_Birds_Convo_Text_3:
	.string "NOW GET THOSE BOXES OUT OF THE STORAGE\n"
	.string "ROOM!!$"

LabJariIndoor_Eventscript_Barry_Convo_Text_0:
	.string "Don't disturb me... I'm learning a lot\n"
	.string "about...\p"
	.string "pig sensors...$"

LabJariIndoor_Sign_1_Text_0:
	.string "--COMPUTER TERMINAL: FILE LOG--\p"
	.string "DIRECTORY:\n"
	.string "OLDFILES/UNCATEGORIZED/VIDEOS/\n"
	.string "FILE NAME: 'HOW-TO-POTATO-CANNON.MP4'\p"
	.string "SIZE: MASSIVE.\n"
	.string "DATE CREATED: 08/17/2005\p"
	.string "SYSTEM NOTE: VIDEO ARCHIVED.\n"
	.string "Content appears to involve the\l"
	.string "dangerous CONSTRUCTION of a\l"
	.string "PROJECTILE DEVICE using TUBER parts.\p"
	.string "WARNING: DO NOT OPEN.\n"
	.string "PROFESSOR'S ORDERS.\p"
	.string "DANGER LEVEL: MEDIUM.\n"
	.string "(POTATO DAMAGE ONLY)\p"
	.string "--PRESS A TO EXIT--$"

LabJariIndoor_Sign_2_Text_0:
	.string "This appears to be a DNA sequencer\n"
	.string "machine.$"

LabJariIndoor_Sign_3_Text_0:
	.string "Loads of books about bitcoin.$"

LabJariIndoor_Sign_4_Text_0:
	.string "This shelf is stacked with copies of\n"
	.string "Taylor Swift's autobiography.$"

LabJariIndoor_Sign_5_Text_0:
	.string "An unopened box bearing the label:\n"
	.string "'SMAC'$"

LabJariIndoor_Sign_6_Text_0:
	.string "A stack of opened, empty egg cartons.$"

LabJariIndoor_Sign_7_Text_0:
	.string "Books about the history of bitcoin.$"

LabJariIndoor_Sign_8_Text_0:
	.string "A sheet of paper covered with\n"
	.string "unintelligible scribbling.$"

LabJariIndoor_Sign_9_Text_0:
	.string "--MINING LOG: SECURE ACCESS--\p"
	.string "STATUS:\n"
	.string "BITCOIN MINING IN FULL OPERATION.\p"
	.string "GIGA-HASH RATE:\n"
	.string "0.000000000001 BTC/sec.\p"
	.string "SYSTEM MESSAGE:\n"
	.string "'PROJECT ETERNAL HODL'\p"
	.string "Estimated time to recover 2011 Wallet\n"
	.string "Balance: 8500 YEARS.\p"
	.string "--PRESS A TO CLOSE WINDOW--$"

LabJariIndoor_Sign_10_Text_0:
	.string "--FINANCE TERMINAL: LOGGED IN--\p"
	.string "SUBSIDY LOG:\n"
	.string "FUNDING STREAM DISRUPTED.\p"
	.string "CAUSE:\n"
	.string "GRANTS EXPIRED..\p"
	.string "PAYMENT MODULE:\n"
	.string "INTERN STIPENDS currently designated\l"
	.string "PENDING.\p"
	.string "NOTE:\n"
	.string "ALLOCATION DELAYED until RESOURCE\l"
	.string "RE-AQUISITION.\p"
	.string "EXPECTED WAIT TIME:\n"
	.string "--ERROR: VALUE UNKNOWN--\p"
	.string "SYSTEM:\n"
	.string "INSUFFICIENT FUNDS.\p"
	.string "--PRESS A TO HOLD OF ANY PAYMENT TO\n"
	.string "INTERNS.--$"

LabJariIndoor_Sign_11_Text_0:
	.string "The plant is clearly struggling, it looks\n"
	.string "as though it hasn't had any water in\l"
	.string "weeks.$"

LabJariIndoor_Sign_12_Text_0:
	.string "This server is making strange beeping\n"
	.string "noises.$"

LabJariIndoor_Sign_13_Text_0:
	.string "--PROJECT CHRONOS: LATEST DATA LOG--\p"
	.string "SUBJECT:\n"
	.string "PROFESSOR'S INNATE TIME DISPLACEMENT\p"
	.string "OBSERVATION:\n"
	.string "100% CONFIRMED that the Professor\l"
	.string "always arrives at least 3 HOURS LATE\l"
	.string "for meetings.\p"
	.string "HYPOTHESIS:\n"
	.string "The Professor's body mass is creating a\l"
	.string "localized TEMPORAL DISTORTION FIELD, a\l"
	.string "micro-DIALGA-EFFECT, that actively\l"
	.string "shifts his personal timeline.\p"
	.string "SYSTEM WARNING:\n"
	.string "Current calculations predict that if\l"
	.string "this trend continues, the Professor\l"
	.string "will eventually be living A DECADE IN\l"
	.string "THE PAST. Do not rely on him to revive\l"
	.string "your FOSSILS.\p"
	.string "NOTE:\n"
	.string "PLEASE ADJUST ALL CLOCKS IN THE LAB BY\l"
	.string "-180 MINUTES.\p"
	.string "--PRESS A TO COMPLY.--$"

LabJariIndoor_Sign_14_Text_0:
	.string "A box overflowing with unsuccessful\n"
	.string "government subsidy requests.$"

LabJariIndoor_Sign_16_Text_0:
	.string "An antique, leather-bound book with\n"
	.string "the title:\p"
	.string "The Source Code:\n"
	.string "Hidden truths about Pokémon origins.$"

LabJariIndoor_Sign_17_Text_0:
	.string "A shelf containing books on pig\n"
	.string "biosensors and their application in\l"
	.string "intensive agriculture.$"

LabJariIndoor_Sign_18_Text_0:
	.string "These appear to be field notes\n"
	.string "detailing a journey through a forest.\l"
	.string "That's strange.$"

LabJariIndoor_Sign_19_Text_0:
	.string "An unopened box labeled with 'GPU\n"
	.string "cards'.$"
