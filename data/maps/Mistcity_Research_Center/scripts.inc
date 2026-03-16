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
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Hiker_2
Mistcity_Research_Center_Hiker_1:
# 22 "data/maps/Mistcity_Research_Center/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Hiker_5
Mistcity_Research_Center_Hiker_4:
# 26 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 27 "data/maps/Mistcity_Research_Center/scripts.pory"
	release
	return

Mistcity_Research_Center_Hiker_2:
# 20 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_Hiker_Text_0
	goto Mistcity_Research_Center_Hiker_1

Mistcity_Research_Center_Hiker_5:
# 24 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_Hiker_Text_1
	goto Mistcity_Research_Center_Hiker_4


Mistcity_Research_Center_Scientist::
# 31 "data/maps/Mistcity_Research_Center/scripts.pory"
	lock
# 32 "data/maps/Mistcity_Research_Center/scripts.pory"
	faceplayer
# 33 "data/maps/Mistcity_Research_Center/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Scientist_2
Mistcity_Research_Center_Scientist_1:
# 37 "data/maps/Mistcity_Research_Center/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Scientist_5
Mistcity_Research_Center_Scientist_4:
# 41 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 42 "data/maps/Mistcity_Research_Center/scripts.pory"
	release
	return

Mistcity_Research_Center_Scientist_2:
# 35 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_Scientist_Text_0
	goto Mistcity_Research_Center_Scientist_1

Mistcity_Research_Center_Scientist_5:
# 39 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_Scientist_Text_1
	goto Mistcity_Research_Center_Scientist_4


Mistcity_Research_Center_LittleGirl::
# 46 "data/maps/Mistcity_Research_Center/scripts.pory"
	lock
# 47 "data/maps/Mistcity_Research_Center/scripts.pory"
	faceplayer
# 48 "data/maps/Mistcity_Research_Center/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_LittleGirl_2
Mistcity_Research_Center_LittleGirl_1:
# 52 "data/maps/Mistcity_Research_Center/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_LittleGirl_5
Mistcity_Research_Center_LittleGirl_4:
# 56 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 57 "data/maps/Mistcity_Research_Center/scripts.pory"
	release
	return

Mistcity_Research_Center_LittleGirl_2:
# 50 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_LittleGirl_Text_0
	goto Mistcity_Research_Center_LittleGirl_1

Mistcity_Research_Center_LittleGirl_5:
# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_LittleGirl_Text_1
	goto Mistcity_Research_Center_LittleGirl_4


Mistcity_Research_Center_DadBugCatcher::
# 61 "data/maps/Mistcity_Research_Center/scripts.pory"
	lock
# 62 "data/maps/Mistcity_Research_Center/scripts.pory"
	faceplayer
# 63 "data/maps/Mistcity_Research_Center/scripts.pory"
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_DadBugCatcher_2
Mistcity_Research_Center_DadBugCatcher_1:
# 67 "data/maps/Mistcity_Research_Center/scripts.pory"
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_DadBugCatcher_5
Mistcity_Research_Center_DadBugCatcher_4:
# 71 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 72 "data/maps/Mistcity_Research_Center/scripts.pory"
	release
	return

Mistcity_Research_Center_DadBugCatcher_2:
# 65 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_DadBugCatcher_Text_0
	goto Mistcity_Research_Center_DadBugCatcher_1

Mistcity_Research_Center_DadBugCatcher_5:
# 69 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_DadBugCatcher_Text_1
	goto Mistcity_Research_Center_DadBugCatcher_4


Mistcity_Research_Center_Daan_RescueMission2::
# 76 "data/maps/Mistcity_Research_Center/scripts.pory"
	lock
# 77 "data/maps/Mistcity_Research_Center/scripts.pory"
	setflag FLAG_DAAN_NASH_TRUCK
# 78 "data/maps/Mistcity_Research_Center/scripts.pory"
	compare VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 0
	goto_if_eq Mistcity_Research_Center_Daan_RescueMission2_2
Mistcity_Research_Center_Daan_RescueMission2_1:
# 95 "data/maps/Mistcity_Research_Center/scripts.pory"
	compare VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 10
	goto_if_eq Mistcity_Research_Center_Daan_RescueMission2_4
	return

Mistcity_Research_Center_Daan_RescueMission2_2:
# 79 "data/maps/Mistcity_Research_Center/scripts.pory"
	setspeaker Mistcity_Research_Center_Daan_RescueMission2_Text_0
# 80 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_Daan_RescueMission2_Text_1, MSGBOX_AUTOCLOSE
# 81 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 82 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 13, Mistcity_Research_Center_Daan_RescueMission2_Movement_0
# 83 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 3, Mistcity_Research_Center_Daan_RescueMission2_Movement_1
# 84 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Daan_RescueMission2_Movement_2
# 85 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 86 "data/maps/Mistcity_Research_Center/scripts.pory"
	setspeaker Mistcity_Research_Center_Daan_RescueMission2_Text_0
# 87 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_Daan_RescueMission2_Text_2, MSGBOX_AUTOCLOSE
# 88 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 89 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Daan_RescueMission2_Movement_3
# 90 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 91 "data/maps/Mistcity_Research_Center/scripts.pory"
	fadescreen FADE_TO_BLACK
# 92 "data/maps/Mistcity_Research_Center/scripts.pory"
	warpsilent MAP_INSIDE_OF_TRUCK, 1
# 93 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitstate
	goto Mistcity_Research_Center_Daan_RescueMission2_1

Mistcity_Research_Center_Daan_RescueMission2_4:
# 96 "data/maps/Mistcity_Research_Center/scripts.pory"
	setspeaker Mistcity_Research_Center_Daan_RescueMission2_Text_0
# 97 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_Daan_RescueMission2_Text_3, MSGBOX_YESNO
# 98 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 99 "data/maps/Mistcity_Research_Center/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Mistcity_Research_Center_Daan_RescueMission2_7
# 106 "data/maps/Mistcity_Research_Center/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Mistcity_Research_Center_Daan_RescueMission2_9
	return

Mistcity_Research_Center_Daan_RescueMission2_7:
# 100 "data/maps/Mistcity_Research_Center/scripts.pory"
	setspeaker Mistcity_Research_Center_Daan_RescueMission2_Text_0
# 101 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_Daan_RescueMission2_Text_4
# 102 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 103 "data/maps/Mistcity_Research_Center/scripts.pory"
	release
	end

Mistcity_Research_Center_Daan_RescueMission2_9:
# 107 "data/maps/Mistcity_Research_Center/scripts.pory"
	setspeaker Mistcity_Research_Center_Daan_RescueMission2_Text_0
# 108 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_Daan_RescueMission2_Text_5, MSGBOX_AUTOCLOSE
# 109 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 110 "data/maps/Mistcity_Research_Center/scripts.pory"
	release
	end


Mistcity_Research_Center_ReturnRescueMissionDaan::
# 118 "data/maps/Mistcity_Research_Center/scripts.pory"
	lock
# 119 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_0
# 120 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 121 "data/maps/Mistcity_Research_Center/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 10
# 122 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 123 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_1
# 124 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 125 "data/maps/Mistcity_Research_Center/scripts.pory"
	setspeaker Mistcity_Research_Center_Daan_RescueMission2_Text_0
# 126 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_0, MSGBOX_AUTOCLOSE
# 127 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 128 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_2
# 129 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 130 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_3
# 131 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 132 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_4
# 133 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 134 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_5
# 135 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 136 "data/maps/Mistcity_Research_Center/scripts.pory"
	setspeaker Mistcity_Research_Center_Daan_RescueMission2_Text_0
# 137 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_1, MSGBOX_AUTOCLOSE
# 138 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 139 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_6
# 140 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_3
# 141 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 142 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 143 "data/maps/Mistcity_Research_Center/scripts.pory"
	setspeaker Mistcity_Research_Center_Daan_RescueMission2_Text_0
# 144 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_2, MSGBOX_AUTOCLOSE
# 145 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 146 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 147 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_7
# 148 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_2
# 149 "data/maps/Mistcity_Research_Center/scripts.pory"
	setspeaker Mistcity_Research_Center_Daan_RescueMission2_Text_0
# 150 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_3, MSGBOX_AUTOCLOSE
# 151 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 152 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 153 "data/maps/Mistcity_Research_Center/scripts.pory"
	setspeaker Mistcity_Research_Center_Daan_RescueMission2_Text_0
# 154 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_4, MSGBOX_AUTOCLOSE
# 155 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 156 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_8
# 157 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 158 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_9
# 159 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 160 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 16, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_10
# 161 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 162 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 163 "data/maps/Mistcity_Research_Center/scripts.pory"
	setflag FLAG_NASH_ENTRANCE_RESEARCH_CENTER1
# 164 "data/maps/Mistcity_Research_Center/scripts.pory"
	setflag FLAG_HELPED_DAN_BEAT_FACULTY
# 165 "data/maps/Mistcity_Research_Center/scripts.pory"
	clearflag FLAG_NASH_ENTRANCE_RESEARCH_CENTER2
# 166 "data/maps/Mistcity_Research_Center/scripts.pory"
	release
	return


# 82 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_Daan_RescueMission2_Movement_0:
# 82 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 82 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 82 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 82 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 82 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 82 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_down
	step_end

# 83 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_Daan_RescueMission2_Movement_1:
# 83 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 83 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 83 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 83 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 83 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 83 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 83 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 83 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 83 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 83 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 83 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 83 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 83 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 83 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 83 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_down
	step_end

# 84 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_Daan_RescueMission2_Movement_2:
# 84 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 84 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 84 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 84 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 84 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 84 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 84 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 84 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 84 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 84 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 84 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 84 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 84 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 84 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
	step_end

# 89 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_Daan_RescueMission2_Movement_3:
# 89 "data/maps/Mistcity_Research_Center/scripts.pory"
	jump_left
	step_end

# 119 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_0:
# 119 "data/maps/Mistcity_Research_Center/scripts.pory"
	jump_right
	step_end

# 123 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_1:
# 123 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
# 123 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
# 123 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 123 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 123 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 123 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 123 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
	step_end

# 128 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_2:
# 128 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_left
	step_end

# 130 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_3:
# 130 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_down
	step_end

# 132 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_4:
# 132 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_up
	step_end

# 134 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_5:
# 134 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_right
	step_end

# 139 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_6:
# 139 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
	step_end

# 147 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_7:
# 147 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 147 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_right
	step_end

# 156 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_8:
# 156 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
# 156 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 156 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 156 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 156 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 156 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 156 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
	step_end

# 158 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_9:
# 158 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
# 158 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 158 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 158 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 158 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
	step_end

# 160 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_10:
# 160 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
# 160 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
# 160 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
	step_end

Mistcity_Research_Center_Hiker_Text_0:
# 20 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "The Rangers gave the all-clear signal.\p"
	.string "I'm going to head back out there.\p"
	.string "I need to see for myself what kind of\n"
	.string "machine could leave tracks that deep in\l"
	.string "the mud.$"

Mistcity_Research_Center_Hiker_Text_1:
# 24 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "I've hiked those trails for twenty\n"
	.string "years, but the heavy tread marks I saw\l"
	.string "deep in the mud today were definitely\l"
	.string "not made by any Pokémon.$"

Mistcity_Research_Center_Scientist_Text_0:
# 35 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "Moisture levels are stabilizing rapidly.\p"
	.string "Whatever was draining the hydro-energy\n"
	.string "from the air has been shut down.\p"
	.string "The forest is literally taking a deep\n"
	.string "breath again.$"

Mistcity_Research_Center_Scientist_Text_1:
# 39 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "The humidity levels in sector four\n"
	.string "dropped drastically today, almost as if\l"
	.string "something massive was sucking the\l"
	.string "moisture right out of the air to cool a\l"
	.string "machine.$"

Mistcity_Research_Center_LittleGirl_Text_0:
# 50 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "Is it safe now?\p"
	.string "My daddy says the angry noise is gone.\p"
	.string "Maybe the Beedrills will be nice to us\n"
	.string "next time!$"

Mistcity_Research_Center_LittleGirl_Text_1:
# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "The nice ranger gave me a ride in the big\n"
	.string "truck because the Beedrills were\l"
	.string "chasing us way faster than they\l"
	.string "usually do!$"

Mistcity_Research_Center_DadBugCatcher_Text_0:
# 65 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "Thank goodness that's over.\p"
	.string "We're going to wait here a bit longer\n"
	.string "just to be safe, but the tension in the\l"
	.string "air is gone.\p"
	.string "Maybe we'll actually find that\n"
	.string "Heracross tomorrow.$"

Mistcity_Research_Center_DadBugCatcher_Text_1:
# 69 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "We just wanted to look for Heracross,\n"
	.string "but the whole forest felt... angry; I'm\l"
	.string "just glad we got back on the last truck\l"
	.string "safely.$"

Mistcity_Research_Center_Daan_RescueMission2_Text_0:
# 79 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "Nash$"

Mistcity_Research_Center_Daan_RescueMission2_Text_1:
# 80 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "There you are.\p"
	.string "No time to waste.\p"
	.string "David is already in the back of the\n"
	.string "truck.\p"
	.string "Lets go!$"

Mistcity_Research_Center_Daan_RescueMission2_Text_2:
# 87 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "Allright. Let's load you up!$"

Mistcity_Research_Center_Daan_RescueMission2_Text_3:
# 97 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "Hi {PLAYER}, good to see you again.\p"
	.string "Do you want to explore the Deep Cloud\n"
	.string "Forest?$"

Mistcity_Research_Center_Daan_RescueMission2_Text_4:
# 101 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "We currently don't have any drivers\n"
	.string "available, all the rangers are very busy.\p"
	.string "If you come back tomorrow I might have\n"
	.string "a place for you somewhere in the back\l"
	.string "of a truck.$"

Mistcity_Research_Center_Daan_RescueMission2_Text_5:
# 108 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "No worries! Feel free to come back\n"
	.string "whenever you want, you did so much for\l"
	.string "this forest already!$"

Mistcity_Research_Center_ReturnRescueMissionDaan_Text_0:
# 126 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "Whew.\n"
	.string "Glad to be back, but that was intense.\p"
	.string "Registeel... I still can't believe they\n"
	.string "pulled it off.$"

Mistcity_Research_Center_ReturnRescueMissionDaan_Text_1:
# 137 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "I think Daan and David are already gone.\p"
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
# 144 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "And then the weirdest part.\p"
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
# 150 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "Anyway, you've got a clear path for now.\p"
	.string "I'd check in on Daan at that\n"
	.string "sympathizer house first, make sure he\l"
	.string "doesn't do something he'll regret.\p"
	.string "After that, you should probably tackle\n"
	.string "the Gym.$"

Mistcity_Research_Center_ReturnRescueMissionDaan_Text_4:
# 154 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "Oh, right! The Gym.\p"
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
	.string "Good luck, {PLAYER}.\p"
	.string "Find me at the station if you learn\n"
	.string "anything new, or if you want to explore\l"
	.string "the forest again.$"
