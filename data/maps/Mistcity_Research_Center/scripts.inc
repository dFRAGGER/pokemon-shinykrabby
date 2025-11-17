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


Mistcity_Research_Center_Daan_RescueMission2::
# 16 "data/maps/Mistcity_Research_Center/scripts.pory"
	lock
# 17 "data/maps/Mistcity_Research_Center/scripts.pory"
	setflag FLAG_DAAN_NASH_TRUCK
# 18 "data/maps/Mistcity_Research_Center/scripts.pory"
	compare VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 0
	goto_if_eq Mistcity_Research_Center_Daan_RescueMission2_1
	return

Mistcity_Research_Center_Daan_RescueMission2_1:
# 19 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_Daan_RescueMission2_Text_0, MSGBOX_AUTOCLOSE
# 20 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 21 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 13, Mistcity_Research_Center_Daan_RescueMission2_Movement_0
# 22 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 3, Mistcity_Research_Center_Daan_RescueMission2_Movement_1
# 23 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Daan_RescueMission2_Movement_2
# 24 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 25 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_Daan_RescueMission2_Text_1, MSGBOX_AUTOCLOSE
# 26 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 27 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Daan_RescueMission2_Movement_3
# 28 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 29 "data/maps/Mistcity_Research_Center/scripts.pory"
	fadescreen FADE_TO_BLACK
# 30 "data/maps/Mistcity_Research_Center/scripts.pory"
	warpsilent MAP_INSIDE_OF_TRUCK, 1
# 31 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitstate
	return


Mistcity_Research_Center_ReturnRescueMissionDaan::
# 37 "data/maps/Mistcity_Research_Center/scripts.pory"
	lock
# 38 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_0
# 39 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 40 "data/maps/Mistcity_Research_Center/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 10
# 41 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 42 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_1
# 43 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 44 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_0, MSGBOX_AUTOCLOSE
# 45 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 46 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_2
# 47 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 48 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_3
# 49 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 50 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_4
# 51 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 52 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_5
# 53 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_1, MSGBOX_AUTOCLOSE
# 55 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 56 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_6
# 57 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_3
# 58 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 59 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 60 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_2, MSGBOX_AUTOCLOSE
# 61 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 62 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 63 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_7
# 64 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_2
# 65 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_3, MSGBOX_AUTOCLOSE
# 66 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 67 "data/maps/Mistcity_Research_Center/scripts.pory"
	delay 40
# 68 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_4, MSGBOX_AUTOCLOSE
# 69 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 70 "data/maps/Mistcity_Research_Center/scripts.pory"
	giveitem ITEM_HM05
# 71 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 72 "data/maps/Mistcity_Research_Center/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 73 "data/maps/Mistcity_Research_Center/scripts.pory"
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_5, MSGBOX_AUTOCLOSE
# 74 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmessage
# 75 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_8
# 76 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 77 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 15, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_9
# 78 "data/maps/Mistcity_Research_Center/scripts.pory"
	applymovement 16, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_10
# 79 "data/maps/Mistcity_Research_Center/scripts.pory"
	waitmovement
# 80 "data/maps/Mistcity_Research_Center/scripts.pory"
	setflag FLAG_NASH_ENTRANCE_RESEARCH_CENTER1
# 81 "data/maps/Mistcity_Research_Center/scripts.pory"
	clearflag FLAG_NASH_ENTRANCE_RESEARCH_CENTER2
# 82 "data/maps/Mistcity_Research_Center/scripts.pory"
	release
	return


# 21 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_Daan_RescueMission2_Movement_0:
# 21 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 21 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 21 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 21 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 21 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 21 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_down
	step_end

# 22 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_Daan_RescueMission2_Movement_1:
# 22 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 22 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 22 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 22 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 22 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 22 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 22 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 22 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 22 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 22 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 22 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 22 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 22 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 22 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 22 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_down
	step_end

# 23 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_Daan_RescueMission2_Movement_2:
# 23 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 23 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 23 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 23 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 23 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 23 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 23 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 23 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 23 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 23 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 23 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 23 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_right
# 23 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 23 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
	step_end

# 27 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_Daan_RescueMission2_Movement_3:
# 27 "data/maps/Mistcity_Research_Center/scripts.pory"
	jump_left
	step_end

# 38 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_0:
# 38 "data/maps/Mistcity_Research_Center/scripts.pory"
	jump_right
	step_end

# 42 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_1:
# 42 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
# 42 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
# 42 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 42 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 42 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 42 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 42 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
	step_end

# 46 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_2:
# 46 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_left
	step_end

# 48 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_3:
# 48 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_down
	step_end

# 50 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_4:
# 50 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_up
	step_end

# 52 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_5:
# 52 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_right
	step_end

# 56 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_6:
# 56 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
	step_end

# 63 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_7:
# 63 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_up
# 63 "data/maps/Mistcity_Research_Center/scripts.pory"
	face_right
	step_end

# 75 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_8:
# 75 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
# 75 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 75 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 75 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 75 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 75 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 75 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
	step_end

# 77 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_9:
# 77 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
# 77 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 77 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 77 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 77 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
# 77 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
	step_end

# 78 "data/maps/Mistcity_Research_Center/scripts.pory"
Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_10:
# 78 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
# 78 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_down
# 78 "data/maps/Mistcity_Research_Center/scripts.pory"
	walk_left
	step_end

Mistcity_Research_Center_Daan_RescueMission2_Text_0:
# 19 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: There you are.\p"
	.string "No time to waste.\p"
	.string "David is already in the back of the\n"
	.string "truck.\p"
	.string "Lets go!$"

Mistcity_Research_Center_Daan_RescueMission2_Text_1:
# 25 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "Allright. Let's load you up!$"

Mistcity_Research_Center_ReturnRescueMissionDaan_Text_0:
# 44 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: Whew.\n"
	.string "Glad to be back, but that was intense.\p"
	.string "Registeel... I still can't believe they\n"
	.string "pulled it off.$"

Mistcity_Research_Center_ReturnRescueMissionDaan_Text_1:
# 54 "data/maps/Mistcity_Research_Center/scripts.pory"
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
# 60 "data/maps/Mistcity_Research_Center/scripts.pory"
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
# 65 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: Anyway, you've got a clear path\n"
	.string "for now.\p"
	.string "I'd check in on Daan at that\n"
	.string "sympathizer house first, make sure he\l"
	.string "doesn't do something he'll regret.\p"
	.string "After that, you should probably tackle\n"
	.string "the Gym.$"

Mistcity_Research_Center_ReturnRescueMissionDaan_Text_4:
# 68 "data/maps/Mistcity_Research_Center/scripts.pory"
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
	.string "Here, you'll need this.$"

Mistcity_Research_Center_ReturnRescueMissionDaan_Text_5:
# 73 "data/maps/Mistcity_Research_Center/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: It's the HM for Flash.\p"
	.string "It'll help you see, but trust me, the\n"
	.string "Pokémon in there are more than\l"
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
