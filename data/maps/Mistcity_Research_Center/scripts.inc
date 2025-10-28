Mistcity_Research_Center_MapScripts::
	.byte 0


Mistcity_Research_Center_Daan_RescueMission2::
# 4 "data/maps/Mistcity_Research_Center/scripts.pory"
	lock
# 5 "data/maps/Mistcity_Research_Center/scripts.pory"
	compare VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 0
	goto_if_eq Mistcity_Research_Center_Daan_RescueMission2_1
	return

Mistcity_Research_Center_Daan_RescueMission2_1:
# 6 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_Daan_RescueMission2_Text_0, MSGBOX_AUTOCLOSE
# 7 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 8 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 13, Mistcity_Research_Center_Daan_RescueMission2_Movement_0
# 9 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 3, Mistcity_Research_Center_Daan_RescueMission2_Movement_1
# 10 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Daan_RescueMission2_Movement_2
# 11 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 12 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_Daan_RescueMission2_Text_1, MSGBOX_AUTOCLOSE
# 13 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 14 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Daan_RescueMission2_Movement_3
# 15 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 16 "data/maps/Mistcity_Research_Center/scripts.pory"
	fadescreen FADE_TO_BLACK
# 17 "data/maps/Mistcity_Research_Center/scripts.pory"
	warpsilent MAP_INSIDE_OF_TRUCK, 1
# 18 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitstate
	return


# 8 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_Daan_RescueMission2_Movement_0:
# 8 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 8 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 8 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 8 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 8 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 8 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_down
	step_end

# 9 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_Daan_RescueMission2_Movement_1:
# 9 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 9 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 9 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 9 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 9 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 9 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 9 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 9 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 9 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 9 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 9 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 9 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 9 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 9 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 9 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_down
	step_end

# 10 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_Daan_RescueMission2_Movement_2:
# 10 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 10 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 10 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 10 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 10 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 10 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 10 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 10 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 10 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 10 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 10 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 10 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 10 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 10 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
	step_end

# 14 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_Daan_RescueMission2_Movement_3:
# 14 "data/maps/Mistcity_Research_Center/scripts.pory"
	jump_left
	step_end

Mistcity_Research_Center_Daan_RescueMission2_Text_0:
# 6 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "There you are.\p"
	.string "No time to waste.\p"
	.string "David is already in the back of the\n"
	.string "truck.\p"
	.string "Lets go!$"

Mistcity_Research_Center_Daan_RescueMission2_Text_1:
# 12 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "Allright. Let's load you up!$"
