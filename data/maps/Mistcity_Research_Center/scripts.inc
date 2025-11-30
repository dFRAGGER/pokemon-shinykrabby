Mistcity_Research_Center_MapScripts::
# 1 "data/maps/Mistcity_Research_Center/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Mistcity_Research_Center_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 4 "data/maps/Mistcity_Research_Center/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Mistcity_Research_Center_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Mistcity_Research_Center_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 2 "data/maps/Mistcity_Research_Center/scripts.pory"
	call DeepCloudforest_Healspot_OnTransition
	return

Mistcity_Research_Center_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/Mistcity_Research_Center/scripts.pory"
	map_script_2 VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 7, Mistcity_Research_Center_ReturnRescueMissionDaan
	.2byte 0


Mistcity_Research_Center_Healspot_OnTransition::
# 11 "data/maps/Mistcity_Research_Center/scripts.pory"
	setrespawn HEAL_LOCATION_MIST_CITY
	end


Mistcity_Research_Center_Hiker::
# 16 "data/maps/Mistcity_Research_Center/scripts.pory"
	lock
# 17 "data/maps/Mistcity_Research_Center/scripts.pory"
	faceplayer
# 18 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_Hiker_Text_0
# 19 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 20 "data/maps/Mistcity_Research_Center/scripts.pory"
	release
	return


Mistcity_Research_Center_Scientist::
# 24 "data/maps/Mistcity_Research_Center/scripts.pory"
	lock
# 25 "data/maps/Mistcity_Research_Center/scripts.pory"
	faceplayer
# 26 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_Scientist_Text_0
# 27 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 28 "data/maps/Mistcity_Research_Center/scripts.pory"
	release
	return


Mistcity_Research_Center_LittleGirl::
# 32 "data/maps/Mistcity_Research_Center/scripts.pory"
	lock
# 33 "data/maps/Mistcity_Research_Center/scripts.pory"
	faceplayer
# 34 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_LittleGirl_Text_0
# 35 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 36 "data/maps/Mistcity_Research_Center/scripts.pory"
	release
	return


Mistcity_Research_Center_DadBugCatcher::
# 40 "data/maps/Mistcity_Research_Center/scripts.pory"
	lock
# 41 "data/maps/Mistcity_Research_Center/scripts.pory"
	faceplayer
# 42 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_DadBugCatcher_Text_0
# 43 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 44 "data/maps/Mistcity_Research_Center/scripts.pory"
	release
	return


Mistcity_Research_Center_Daan_RescueMission2::
# 48 "data/maps/Mistcity_Research_Center/scripts.pory"
	lock
# 49 "data/maps/Mistcity_Research_Center/scripts.pory"
	setflag FLAG_DAAN_NASH_TRUCK
# 50 "data/maps/Mistcity_Research_Center/scripts.pory"
	compare VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 0
	goto_if_eq Mistcity_Research_Center_Daan_RescueMission2_2
Mistcity_Research_Center_Daan_RescueMission2_1:
# 65 "data/maps/Mistcity_Research_Center/scripts.pory"
	compare VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 10
	goto_if_eq Mistcity_Research_Center_Daan_RescueMission2_4
	return

Mistcity_Research_Center_Daan_RescueMission2_2:
# 51 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_Daan_RescueMission2_Text_0, MSGBOX_AUTOCLOSE
# 52 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 53 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 13, Mistcity_Research_Center_Daan_RescueMission2_Movement_0
# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 3, Mistcity_Research_Center_Daan_RescueMission2_Movement_1
# 55 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Daan_RescueMission2_Movement_2
# 56 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 57 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_Daan_RescueMission2_Text_1, MSGBOX_AUTOCLOSE
# 58 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 59 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Daan_RescueMission2_Movement_3
# 60 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 61 "data/maps/Mistcity_Research_Center/scripts.pory"
	fadescreen FADE_TO_BLACK
# 62 "data/maps/Mistcity_Research_Center/scripts.pory"
	warpsilent MAP_INSIDE_OF_TRUCK, 1
# 63 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitstate
	goto Mistcity_Research_Center_Daan_RescueMission2_1

Mistcity_Research_Center_Daan_RescueMission2_4:
# 66 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_Daan_RescueMission2_Text_2, MSGBOX_YESNO
# 67 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 68 "data/maps/Mistcity_Research_Center/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Mistcity_Research_Center_Daan_RescueMission2_7
# 74 "data/maps/Mistcity_Research_Center/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Mistcity_Research_Center_Daan_RescueMission2_9
	return

Mistcity_Research_Center_Daan_RescueMission2_7:
# 69 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_Daan_RescueMission2_Text_3
# 70 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 71 "data/maps/Mistcity_Research_Center/scripts.pory"
	release
	end

Mistcity_Research_Center_Daan_RescueMission2_9:
# 75 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_Daan_RescueMission2_Text_4, MSGBOX_AUTOCLOSE
# 76 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 77 "data/maps/Mistcity_Research_Center/scripts.pory"
	release
	end


Mistcity_Research_Center_ReturnRescueMissionDaan::
# 85 "data/maps/Mistcity_Research_Center/scripts.pory"
	lock
# 86 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_0
# 87 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 88 "data/maps/Mistcity_Research_Center/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 10
# 89 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 90 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_1
# 91 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 92 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_0, MSGBOX_AUTOCLOSE
# 93 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 94 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_2
# 95 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 96 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_3
# 97 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 98 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_4
# 99 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 100 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_5
# 101 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 102 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_1, MSGBOX_AUTOCLOSE
# 103 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 104 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_6
# 105 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_3
# 106 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 107 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 108 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_2, MSGBOX_AUTOCLOSE
# 109 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 110 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 111 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_7
# 112 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_2
# 113 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_3, MSGBOX_AUTOCLOSE
# 114 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 115 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 116 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_4, MSGBOX_AUTOCLOSE
# 117 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 118 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_8
# 119 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 120 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_9
# 121 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 122 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 16, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_10
# 123 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 124 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 125 "data/maps/Mistcity_Research_Center/scripts.pory"
	setflag FLAG_NASH_ENTRANCE_RESEARCH_CENTER1
# 126 "data/maps/Mistcity_Research_Center/scripts.pory"
	setflag FLAG_HELPED_DAN_BEAT_FACULTY
# 127 "data/maps/Mistcity_Research_Center/scripts.pory"
	clearflag FLAG_NASH_ENTRANCE_RESEARCH_CENTER2
# 128 "data/maps/Mistcity_Research_Center/scripts.pory"
	release
	return


# 53 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_Daan_RescueMission2_Movement_0:
# 53 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 53 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 53 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 53 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 53 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 53 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_down
	step_end

# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_Daan_RescueMission2_Movement_1:
# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_down
	step_end

# 55 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_Daan_RescueMission2_Movement_2:
# 55 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 55 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 55 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 55 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 55 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 55 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 55 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 55 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 55 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 55 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 55 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 55 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 55 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 55 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
	step_end

# 59 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_Daan_RescueMission2_Movement_3:
# 59 "data/maps/Mistcity_Research_Center/scripts.pory"
	jump_left
	step_end

# 86 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_0:
# 86 "data/maps/Mistcity_Research_Center/scripts.pory"
	jump_right
	step_end

# 90 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_1:
# 90 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
# 90 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
# 90 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 90 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 90 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 90 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 90 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
	step_end

# 94 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_2:
# 94 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_left
	step_end

# 96 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_3:
# 96 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_down
	step_end

# 98 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_4:
# 98 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_up
	step_end

# 100 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_5:
# 100 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_right
	step_end

# 104 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_6:
# 104 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
	step_end

# 111 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_7:
# 111 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 111 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_right
	step_end

# 118 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_8:
# 118 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
# 118 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 118 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 118 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 118 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 118 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 118 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
	step_end

# 120 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_9:
# 120 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
# 120 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 120 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 120 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 120 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
	step_end

# 122 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_10:
# 122 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
# 122 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
# 122 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
	step_end

Mistcity_Research_Center_Hiker_Text_0:
# 18 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "I've hiked those trails for twenty\n"
	.string "years, but the heavy tread marks I saw\l"
	.string "deep in the mud today were definitely\l"
	.string "not made by any Pokémon.$"

Mistcity_Research_Center_Scientist_Text_0:
# 26 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "The humidity levels in sector four\n"
	.string "dropped drastically today, almost as if\l"
	.string "something massive was sucking the\l"
	.string "moisture right out of the air to cool a\l"
	.string "machine.$"

Mistcity_Research_Center_LittleGirl_Text_0:
# 34 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "The nice ranger gave me a ride in the big\n"
	.string "truck because the Beedrills were\l"
	.string "chasing us way faster than they\l"
	.string "usually do!$"

Mistcity_Research_Center_DadBugCatcher_Text_0:
# 42 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "We just wanted to look for Heracross,\n"
	.string "but the whole forest felt... angry; I'm\l"
	.string "just glad we got back on the last truck\l"
	.string "safely.$"

Mistcity_Research_Center_Daan_RescueMission2_Text_0:
# 51 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: There you are.\p"
	.string "No time to waste.\p"
	.string "David is already in the back of the\n"
	.string "truck.\p"
	.string "Lets go!$"

Mistcity_Research_Center_Daan_RescueMission2_Text_1:
# 57 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "Allright. Let's load you up!$"

Mistcity_Research_Center_Daan_RescueMission2_Text_2:
# 66 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: Hi {PLAYER}, good to see you\n"
	.string "again.\p"
	.string "Do you want to explore the Deep Cloud\n"
	.string "Forest?$"

Mistcity_Research_Center_Daan_RescueMission2_Text_3:
# 69 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "We currently don't have any drivers\n"
	.string "available, all the rangers are very busy.\p"
	.string "If you come back tomorrow I might have\n"
	.string "a place for you somewhere in the back\l"
	.string "of a truck.$"

Mistcity_Research_Center_Daan_RescueMission2_Text_4:
# 75 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "No worries! Feel free to come back\n"
	.string "whenever you want, you did so much for\l"
	.string "this forest already!$"

Mistcity_Research_Center_ReturnRescueMissionDaan_Text_0:
# 92 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: Whew.\n"
	.string "Glad to be back, but that was intense.\p"
	.string "Registeel... I still can't believe they\n"
	.string "pulled it off.$"

Mistcity_Research_Center_ReturnRescueMissionDaan_Text_1:
# 102 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: I think Daan and David are\n"
	.string "already gone.\p"
	.string "Soon as the truck stopped, Daan bolted.\p"
	.string "He was... furious. He's heading for that\n"
	.string "Faculty sympathizer's house, the one\l"
	.string "next to the gym.\p"
	.string "He wants to confront them, find out\n"
	.string "what they knew about the Registeel\l"
	.string "operation.\p"
	.string "I can't say I blame him, but he was\n"
	.string "seeing red.$"

Mistcity_Research_Center_ReturnRescueMissionDaan_Text_2:
# 108 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: And then the weirdest part.\p"
	.string "Daan said something to David... just\n"
	.string "mumbled it.\p"
	.string "I couldn't make it out.\n"
	.string "But the kid... he just lit up.\p"
	.string "The biggest smile I've ever seen on him.\p"
	.string "Then he took off sprinting towards the\n"
	.string "Gym, of all places.\p"
	.string "After what we just saw?\n"
	.string "A smile?\p"
	.string "Baffles me.\p"
	.string "Maybe he's going to the gym archives\n"
	.string "there to research the 'Silent\l"
	.string "Guardian'?\p"
	.string "I don't know, but my head's spinning....$"

Mistcity_Research_Center_ReturnRescueMissionDaan_Text_3:
# 113 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: Anyway, you've got a clear path\n"
	.string "for now.\p"
	.string "I'd check in on Daan at that\n"
	.string "sympathizer house first, make sure he\l"
	.string "doesn't do something he'll regret.\p"
	.string "After that, you should probably tackle\n"
	.string "the Gym.$"

Mistcity_Research_Center_ReturnRescueMissionDaan_Text_4:
# 116 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: Oh, right! The Gym.\p"
	.string "It's... unique.\p"
	.string "Daan is actually the official Gym\n"
	.string "Leader here, but with all this Faculty\l"
	.string "business, he's had a few of his best\l"
	.string "ranger trainees on rotation to test\l"
	.string "challengers.\p"
	.string "He designed it to replicate the forest\n"
	.string "at night.\p"
	.string "It's almost pitch black in there.\p"
	.string "He always says you don't really know\n"
	.string "the cloud forest until you've seen the\l"
	.string "ecosystem that comes alive after dark.\p"
	.string "It's a real challenge, but you'll be\n"
	.string "facing a gauntlet of nocturnal\l"
	.string "Pokémon... think Noctowl, Ariados, maybe\l"
	.string "even a Mightyena.\p"
	.string "The Pokémon in there are more than\n"
	.string "comfortable in the dark.\p"
	.string "It'll be a good test of your skills\n"
	.string "before you head out again.\p"
	.string "After you've handled things here, your\n"
	.string "next step should be Siltroot Town.\p"
	.string "It's an old, rural town deep in the\n"
	.string "mangrove swamps to the west.\p"
	.string "It's a bit... rustic, from what I hear,\n"
	.string "but it's the only place you'll find a\l"
	.string "boat.\p"
	.string "Our long-range reports show The\n"
	.string "Faculty's main transport ship headed\l"
	.string "north, towards the Lion Mountains.\p"
	.string "You'll never make it there on foot. But\n"
	.string "in Siltroot, you might find a skipper\l"
	.string "willing to take you to the port city of\l"
	.string "Lionsarch.\p"
	.string "It's the only real access point to\n"
	.string "those two frozen peaks.\p"
	.string "Good luck, {PLAYER}.\p"
	.string "Find me at the station if you learn\n"
	.string "anything new, or if you want to explore\l"
	.string "the forest again.$"
