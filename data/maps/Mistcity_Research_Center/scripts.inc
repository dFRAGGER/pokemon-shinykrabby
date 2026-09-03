Mistcity_Research_Center_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Mistcity_Research_Center_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Mistcity_Research_Center_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Mistcity_Research_Center_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call DeepCloudforest_Healspot_OnTransition
	return

Mistcity_Research_Center_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 7, Mistcity_Research_Center_ReturnRescueMissionDaan
	.2byte 0


Mistcity_Research_Center_Healspot_OnTransition::
	setrespawn HEAL_LOCATION_MIST_CITY
	end


Mistcity_Research_Center_Hiker::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Hiker_2
Mistcity_Research_Center_Hiker_1:
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Hiker_5
Mistcity_Research_Center_Hiker_4:
	waitmessage
	release
	return

Mistcity_Research_Center_Hiker_2:
	msgbox Mistcity_Research_Center_Hiker_Text_0
	goto Mistcity_Research_Center_Hiker_1

Mistcity_Research_Center_Hiker_5:
	msgbox Mistcity_Research_Center_Hiker_Text_1
	goto Mistcity_Research_Center_Hiker_4


Mistcity_Research_Center_Scientist::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Scientist_2
Mistcity_Research_Center_Scientist_1:
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Scientist_5
Mistcity_Research_Center_Scientist_4:
	waitmessage
	release
	return

Mistcity_Research_Center_Scientist_2:
	msgbox Mistcity_Research_Center_Scientist_Text_0
	goto Mistcity_Research_Center_Scientist_1

Mistcity_Research_Center_Scientist_5:
	msgbox Mistcity_Research_Center_Scientist_Text_1
	goto Mistcity_Research_Center_Scientist_4


Mistcity_Research_Center_Ranger_Laptop::
	lock
	faceplayer
	setspeaker Mistcity_Research_Center_Ranger_Laptop_Text_0
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Ranger_Laptop_2
	msgbox Mistcity_Research_Center_Ranger_Laptop_Text_2
Mistcity_Research_Center_Ranger_Laptop_1:
	waitmessage
	applymovement 4, Mistcity_Research_Center_Ranger_Laptop_Movement_0
	waitmovement
	release
	return

Mistcity_Research_Center_Ranger_Laptop_2:
	msgbox Mistcity_Research_Center_Ranger_Laptop_Text_1
	goto Mistcity_Research_Center_Ranger_Laptop_1


Mistcity_Research_Center_Ranger_VigorothGuide::
	lock
	setspeaker Mistcity_Research_Center_Ranger_Laptop_Text_0
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Ranger_VigorothGuide_2
	msgbox Mistcity_Research_Center_Ranger_VigorothGuide_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	faceplayer
	msgbox Mistcity_Research_Center_Ranger_VigorothGuide_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 4, Mistcity_Research_Center_Ranger_VigorothGuide_Movement_0
	waitmovement
Mistcity_Research_Center_Ranger_VigorothGuide_1:
	release
	return

Mistcity_Research_Center_Ranger_VigorothGuide_2:
	msgbox Mistcity_Research_Center_Ranger_VigorothGuide_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	faceplayer
	msgbox Mistcity_Research_Center_Ranger_VigorothGuide_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 4, Mistcity_Research_Center_Ranger_VigorothGuide_Movement_0
	waitmovement
	goto Mistcity_Research_Center_Ranger_VigorothGuide_1


Mistcity_Research_Center_Ranger_LoadingOverlook::
	lock
	faceplayer
	setspeaker Mistcity_Research_Center_Ranger_Laptop_Text_0
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Ranger_LoadingOverlook_2
	msgbox Mistcity_Research_Center_Ranger_LoadingOverlook_Text_1
Mistcity_Research_Center_Ranger_LoadingOverlook_1:
	waitmessage
	applymovement 12, Mistcity_Research_Center_Ranger_VigorothGuide_Movement_0
	waitmovement
	release
	return

Mistcity_Research_Center_Ranger_LoadingOverlook_2:
	msgbox Mistcity_Research_Center_Ranger_LoadingOverlook_Text_0
	goto Mistcity_Research_Center_Ranger_LoadingOverlook_1


Mistcity_Research_Center_Scientist_Server::
	lock
	faceplayer
	setspeaker Mistcity_Research_Center_Scientist_Server_Text_0
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Scientist_Server_2
	msgbox Mistcity_Research_Center_Scientist_Server_Text_2
Mistcity_Research_Center_Scientist_Server_1:
	waitmessage
	applymovement 10, Mistcity_Research_Center_Ranger_Laptop_Movement_0
	waitmovement
	release
	return

Mistcity_Research_Center_Scientist_Server_2:
	msgbox Mistcity_Research_Center_Scientist_Server_Text_1
	goto Mistcity_Research_Center_Scientist_Server_1


Mistcity_Research_Center_LittleGirl::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_LittleGirl_2
Mistcity_Research_Center_LittleGirl_1:
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_LittleGirl_5
Mistcity_Research_Center_LittleGirl_4:
	waitmessage
	release
	return

Mistcity_Research_Center_LittleGirl_2:
	msgbox Mistcity_Research_Center_LittleGirl_Text_0
	goto Mistcity_Research_Center_LittleGirl_1

Mistcity_Research_Center_LittleGirl_5:
	msgbox Mistcity_Research_Center_LittleGirl_Text_1
	goto Mistcity_Research_Center_LittleGirl_4


Mistcity_Research_Center_DadBugCatcher::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_DadBugCatcher_2
Mistcity_Research_Center_DadBugCatcher_1:
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_DadBugCatcher_5
Mistcity_Research_Center_DadBugCatcher_4:
	waitmessage
	release
	return

Mistcity_Research_Center_DadBugCatcher_2:
	msgbox Mistcity_Research_Center_DadBugCatcher_Text_0
	goto Mistcity_Research_Center_DadBugCatcher_1

Mistcity_Research_Center_DadBugCatcher_5:
	msgbox Mistcity_Research_Center_DadBugCatcher_Text_1
	goto Mistcity_Research_Center_DadBugCatcher_4


Mistcity_Research_Center_Daan_RescueMission2::
	lock
	faceplayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	setflag FLAG_DAAN_NASH_TRUCK
	compare VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 0
	goto_if_eq Mistcity_Research_Center_Daan_RescueMission2_2
Mistcity_Research_Center_Daan_RescueMission2_1:
	compare VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 10
	goto_if_eq Mistcity_Research_Center_Daan_RescueMission2_4
	return

Mistcity_Research_Center_Daan_RescueMission2_2:
	setspeaker Mistcity_Research_Center_Daan_RescueMission2_Text_0
	msgbox Mistcity_Research_Center_Daan_RescueMission2_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	compare VAR_TEMP_0, 12
	goto_if_eq Mistcity_Research_Center_Daan_RescueMission2_7
	applymovement 11, Mistcity_Research_Center_Daan_RescueMission2_Movement_0
	applymovement 3, Mistcity_Research_Center_Daan_RescueMission2_Movement_1
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Daan_RescueMission2_Movement_3
Mistcity_Research_Center_Daan_RescueMission2_6:
	waitmovement
	setspeaker Mistcity_Research_Center_Daan_RescueMission2_Text_0
	msgbox Mistcity_Research_Center_Daan_RescueMission2_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Daan_RescueMission2_Movement_4
	waitmovement
	fadescreen FADE_TO_BLACK
	warpsilent MAP_INSIDE_OF_TRUCK, 1
	waitstate
	goto Mistcity_Research_Center_Daan_RescueMission2_1

Mistcity_Research_Center_Daan_RescueMission2_4:
	setspeaker Mistcity_Research_Center_Daan_RescueMission2_Text_0
	msgbox Mistcity_Research_Center_Daan_RescueMission2_Text_3, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, YES
	goto_if_eq Mistcity_Research_Center_Daan_RescueMission2_11
	compare VAR_RESULT, NO
	goto_if_eq Mistcity_Research_Center_Daan_RescueMission2_13
	return

Mistcity_Research_Center_Daan_RescueMission2_7:
	applymovement 11, Mistcity_Research_Center_Daan_RescueMission2_Movement_0
	applymovement 3, Mistcity_Research_Center_Daan_RescueMission2_Movement_1
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Daan_RescueMission2_Movement_2
	goto Mistcity_Research_Center_Daan_RescueMission2_6

Mistcity_Research_Center_Daan_RescueMission2_11:
	setspeaker Mistcity_Research_Center_Daan_RescueMission2_Text_0
	msgbox Mistcity_Research_Center_Daan_RescueMission2_Text_4
	waitmessage
	release
	end

Mistcity_Research_Center_Daan_RescueMission2_13:
	setspeaker Mistcity_Research_Center_Daan_RescueMission2_Text_0
	msgbox Mistcity_Research_Center_Daan_RescueMission2_Text_5, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Mistcity_Research_Center_ReturnRescueMissionDaan::
	lock
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_0
	waitmovement
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 10
	delay 40
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_1
	waitmovement
	setspeaker Mistcity_Research_Center_Daan_RescueMission2_Text_0
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 13, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_2
	delay 40
	applymovement 13, Mistcity_Research_Center_Ranger_VigorothGuide_Movement_0
	delay 40
	applymovement 13, Mistcity_Research_Center_Ranger_Laptop_Movement_0
	delay 40
	applymovement 13, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_3
	delay 40
	setspeaker Mistcity_Research_Center_Daan_RescueMission2_Text_0
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 13, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_4
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Ranger_VigorothGuide_Movement_0
	waitmovement
	delay 40
	setspeaker Mistcity_Research_Center_Daan_RescueMission2_Text_0
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	delay 40
	applymovement 13, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_5
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_2
	setspeaker Mistcity_Research_Center_Daan_RescueMission2_Text_0
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	delay 40
	setspeaker Mistcity_Research_Center_Daan_RescueMission2_Text_0
	msgbox Mistcity_Research_Center_ReturnRescueMissionDaan_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	setflag FLAG_NASH_ENTRANCE_RESEARCH_CENTER1
	setflag FLAG_HELPED_DAN_BEAT_FACULTY
	clearflag FLAG_NASH_ENTRANCE_RESEARCH_CENTER2
	release
	return


Mistcity_Research_Center_Ranger_Laptop_Movement_0:
	face_up
	step_end

Mistcity_Research_Center_Ranger_VigorothGuide_Movement_0:
	face_down
	step_end

Mistcity_Research_Center_Daan_RescueMission2_Movement_0:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	face_down
	step_end

Mistcity_Research_Center_Daan_RescueMission2_Movement_1:
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	face_down
	step_end

Mistcity_Research_Center_Daan_RescueMission2_Movement_2:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

Mistcity_Research_Center_Daan_RescueMission2_Movement_3:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

Mistcity_Research_Center_Daan_RescueMission2_Movement_4:
	jump_left
	step_end

Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_0:
	jump_right
	step_end

Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_1:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_2:
	face_left
	step_end

Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_3:
	face_right
	step_end

Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_4:
	walk_down
	step_end

Mistcity_Research_Center_ReturnRescueMissionDaan_Movement_5:
	walk_up
	face_right
	step_end

Mistcity_Research_Center_Hiker_Text_0:
	.string "The Rangers gave the all-clear signal.\p"
	.string "I'm going to head back out there.\p"
	.string "I need to see for myself what kind of\n"
	.string "machine could leave tracks that deep in\l"
	.string "the mud.$"

Mistcity_Research_Center_Hiker_Text_1:
	.string "I've hiked those trails for twenty\n"
	.string "years, but the heavy tread marks I saw\l"
	.string "deep in the mud today were definitely\l"
	.string "not made by any Pokémon.$"

Mistcity_Research_Center_Scientist_Text_0:
	.string "Moisture levels are stabilizing rapidly.\p"
	.string "Whatever was draining the hydro-energy\n"
	.string "from the air has been shut down.\p"
	.string "The forest is literally taking a deep\n"
	.string "breath again.$"

Mistcity_Research_Center_Scientist_Text_1:
	.string "The humidity levels in sector four\n"
	.string "dropped drastically today, almost as if\l"
	.string "something massive was sucking the\l"
	.string "moisture right out of the air to cool a\l"
	.string "machine.$"

Mistcity_Research_Center_Ranger_Laptop_Text_0:
	.string "RANGER$"

Mistcity_Research_Center_Ranger_Laptop_Text_1:
	.string "I'm logging all the equipment that came\n"
	.string "back from the rescue.\p"
	.string "Now that DAAN is safe, Vigoroth can\n"
	.string "take its time loading the remaining\l"
	.string "cargo.$"

Mistcity_Research_Center_Ranger_Laptop_Text_2:
	.string "I'm updating the cargo manifest while\n"
	.string "Vigoroth brings over the crates.\p"
	.string "With DAAN missing, every rescue truck\n"
	.string "has to leave fully supplied.$"

Mistcity_Research_Center_Ranger_VigorothGuide_Text_0:
	.string "Steady, Vigoroth!\p"
	.string "Put that crate in the truck, then we're\n"
	.string "done.$"

Mistcity_Research_Center_Ranger_VigorothGuide_Text_1:
	.string "Now that DAAN is safe, we can finally\n"
	.string "restock at a normal pace.$"

Mistcity_Research_Center_Ranger_VigorothGuide_Text_2:
	.string "Easy, Vigoroth!\p"
	.string "Load that crate into the truck.$"

Mistcity_Research_Center_Ranger_VigorothGuide_Text_3:
	.string "We're sending supplies after DAAN, so we\n"
	.string "can't afford any delays.$"

Mistcity_Research_Center_Ranger_LoadingOverlook_Text_0:
	.string "The loading floor is running smoothly\n"
	.string "again.\p"
	.string "Seeing DAAN return safely was worth\n"
	.string "every frantic minute I spent watching\l"
	.string "over this place.$"

Mistcity_Research_Center_Ranger_LoadingOverlook_Text_1:
	.string "I can see the entire loading floor from\n"
	.string "up here.\p"
	.string "I'm checking every truck before it\n"
	.string "leaves; one missing crate could put\l"
	.string "DAAN's rescue team at risk.$"

Mistcity_Research_Center_Scientist_Server_Text_0:
	.string "SCIENTIST$"

Mistcity_Research_Center_Scientist_Server_Text_1:
	.string "The server has a clean connection to\n"
	.string "the forest again.\p"
	.string "I've archived the data from DAAN's\n"
	.string "rescue; whatever caused the\l"
	.string "interference is gone.$"

Mistcity_Research_Center_Scientist_Server_Text_2:
	.string "The server is filtering ranger\n"
	.string "telemetry from deep in the forest.\p"
	.string "DAAN's signal keeps disappearing\n"
	.string "beneath a wall of interference.$"

Mistcity_Research_Center_LittleGirl_Text_0:
	.string "Is it safe now?\p"
	.string "My daddy says the angry noise is gone.\p"
	.string "Maybe the Beedrills will be nice to us\n"
	.string "next time!$"

Mistcity_Research_Center_LittleGirl_Text_1:
	.string "The nice ranger gave me a ride in the big\n"
	.string "truck because the Beedrills were\l"
	.string "chasing us way faster than they\l"
	.string "usually do!$"

Mistcity_Research_Center_DadBugCatcher_Text_0:
	.string "Thank goodness that's over.\p"
	.string "We're going to wait here a bit longer\n"
	.string "just to be safe, but the tension in the\l"
	.string "air is gone.\p"
	.string "Maybe we'll actually find that\n"
	.string "Heracross tomorrow.$"

Mistcity_Research_Center_DadBugCatcher_Text_1:
	.string "We just wanted to look for Heracross,\n"
	.string "but the whole forest felt... angry; I'm\l"
	.string "just glad we got back on the last truck\l"
	.string "safely.$"

Mistcity_Research_Center_Daan_RescueMission2_Text_0:
	.string "NASH$"

Mistcity_Research_Center_Daan_RescueMission2_Text_1:
	.string "There you are.\p"
	.string "No time to waste.\p"
	.string "David is already in the back of the\n"
	.string "truck.\p"
	.string "Lets go!$"

Mistcity_Research_Center_Daan_RescueMission2_Text_2:
	.string "Allright. Let's load you up!$"

Mistcity_Research_Center_Daan_RescueMission2_Text_3:
	.string "Hi {PLAYER}, good to see you again.\p"
	.string "Do you want to explore the Deep Cloud\n"
	.string "Forest?$"

Mistcity_Research_Center_Daan_RescueMission2_Text_4:
	.string "We currently don't have any drivers\n"
	.string "available, all the rangers are very busy.\p"
	.string "If you come back tomorrow I might have\n"
	.string "a place for you somewhere in the back\l"
	.string "of a truck.$"

Mistcity_Research_Center_Daan_RescueMission2_Text_5:
	.string "No worries! Feel free to come back\n"
	.string "whenever you want, you did so much for\l"
	.string "this forest already!$"

Mistcity_Research_Center_ReturnRescueMissionDaan_Text_0:
	.string "Whew.\n"
	.string "Glad to be back, but that was intense.\p"
	.string "Registeel... I still can't believe they\n"
	.string "pulled it off.$"

Mistcity_Research_Center_ReturnRescueMissionDaan_Text_1:
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
	.string "Anyway, you've got a clear path for now.\p"
	.string "I'd check in on Daan at that\n"
	.string "sympathizer house first, make sure he\l"
	.string "doesn't do something he'll regret.\p"
	.string "After that, you should probably tackle\n"
	.string "the Gym.$"

Mistcity_Research_Center_ReturnRescueMissionDaan_Text_4:
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
