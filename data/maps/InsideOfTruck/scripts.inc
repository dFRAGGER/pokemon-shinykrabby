
InsideOfTruck_EventScript_SetIntroFlagsMale::
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	setdynamicwarp MAP_LITTLEROOT_TOWN, 3, 10
	releaseall
	end

InsideOfTruck_EventScript_MovingBox::
	msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo, MSGBOX_SIGN
	end

InsideOfTruck_Text_BoxPrintedWithMonLogo:
	.string "The box is printed with a POKéMON logo.\p"
	.string "It's a POKéMON brand for food and\n"
	.string "supply service.$"

InsideOfTruck_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, InsideOfTruck_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_RESUME, InsideOfTruck_MapScripts_MAP_SCRIPT_ON_RESUME
	map_script MAP_SCRIPT_ON_FRAME_TABLE, InsideOfTruck_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

InsideOfTruck_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Mistcity_InsideOfTruck_OnLoad
	return

InsideOfTruck_MapScripts_MAP_SCRIPT_ON_RESUME:
	call Mistcity_InsideOfTruck_OnResume
	return

InsideOfTruck_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 0, Miscity_InsideOfTruck_Daan_RescueMission
	map_script_2 VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 4, Mistcity_InsideOfTruck_Daan_ChaseFaculty
	map_script_2 VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 6, Mistcity_InsideOfTruck_Daan_Returndrive
	.2byte 0


Miscity_InsideOfTruck_Daan_RescueMission::
	lock
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 1
	applymovement LOCALID_PLAYER, Miscity_InsideOfTruck_Daan_RescueMission_Movement_0
	waitmovement
	setdynamicwarp MAP_DEEP_CLOUD_FOREST_FACULTY_GORGE, 22, 7
	call Mistcity_InsideOfTruck_OnDrive
	delay 60
	playse SE_TRUCK_DOOR
	special DrawWholeMapView
	delay 60
	callnative StartTruckDrivingScene
	setspeaker Miscity_InsideOfTruck_Daan_RescueMission_Text_0
	msgbox Miscity_InsideOfTruck_Daan_RescueMission_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	fadescreen FADE_TO_BLACK
	delay 120
	msgbox Miscity_InsideOfTruck_Daan_RescueMission_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	fadescreen FADE_FROM_BLACK
	setspeaker Miscity_InsideOfTruck_Daan_RescueMission_Text_0
	msgbox Miscity_InsideOfTruck_Daan_RescueMission_Text_3, MSGBOX_AUTOCLOSE
	callnative StartTruckSlowingDownScene
	delay 200
	callnative WaitForTruckToStop
	delay 60
	setspeaker Miscity_InsideOfTruck_Daan_RescueMission_Text_0
	msgbox Miscity_InsideOfTruck_Daan_RescueMission_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	setflag FLAG_DAVID_TRUCK
	setflag FLAG_FACULTY_GORGE_NASH2
	applymovement 4, Miscity_InsideOfTruck_Daan_RescueMission_Movement_1
	waitmovement
	removeobject 4
	waitmessage
	waitmessage
	release
	return


Mistcity_InsideOfTruck_OnLoad::
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	return


Mistcity_InsideOfTruck_OnDrive::
	setmetatile 4, 1, METATILE_InsideOfTruck_DoorClosedFloor_Top, FALSE
	setmetatile 4, 2, METATILE_InsideOfTruck_DoorClosedFloor_Mid, FALSE
	setmetatile 4, 3, METATILE_InsideOfTruck_DoorClosedFloor_Bottom, FALSE
	return


Mistcity_InsideOfTruck_OnOffLoad::
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	return


Mistcity_InsideOfTruck_OnResume::
	setstepcallback STEP_CB_TRUCK
	end


Mistcity_InsideOfTruck_Daan_ChaseFaculty::
	lock
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 5
	applymovement LOCALID_PLAYER, Miscity_InsideOfTruck_Daan_RescueMission_Movement_0
	waitmovement
	clearflag FLAG_DAAN_NASH_TRUCK
	addobject 5
	applymovement 5, Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_0
	waitmovement
	setdynamicwarp MAP_DEEP_CLOUDFOREST_FACULTY_ANCIENT_GROTTO, 28, 37
	call Mistcity_InsideOfTruck_OnDrive
	delay 60
	playse SE_TRUCK_DOOR
	special DrawWholeMapView
	delay 60
	callnative StartTruckDrivingScene
	setspeaker Miscity_InsideOfTruck_Daan_RescueMission_Text_0
	msgbox Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	delay 120
	setspeaker Miscity_InsideOfTruck_Daan_RescueMission_Text_0
	msgbox Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_1, MSGBOX_AUTOCLOSE
	callnative StartTruckSlowingDownScene
	delay 200
	callnative WaitForTruckToStop
	delay 60
	waitmessage
	setspeaker Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2
	msgbox Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	setflag FLAG_DAVID_TRUCK
	setflag FLAG_DAAN_NASH_TRUCK
	applymovement 5, Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_1
	waitmovement
	removeobject 5
	setspeaker Miscity_InsideOfTruck_Daan_RescueMission_Text_0
	msgbox Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 4, Miscity_InsideOfTruck_Daan_RescueMission_Movement_1
	waitmovement
	removeobject 4
	release
	return


Mistcity_InsideOfTruck_Daan_Returndrive::
	lock
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 7
	applymovement LOCALID_PLAYER, Miscity_InsideOfTruck_Daan_RescueMission_Movement_0
	waitmovement
	clearflag FLAG_DAAN_NASH_TRUCK
	addobject 5
	applymovement 5, Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_0
	waitmovement
	setdynamicwarp MAP_MISTCITY_RESEARCH_CENTER, 15, 9
	call Mistcity_InsideOfTruck_OnDrive
	delay 60
	playse SE_TRUCK_DOOR
	special DrawWholeMapView
	delay 60
	callnative StartTruckDrivingScene
	setspeaker Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	delay 40
	applymovement 4, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_0
	setspeaker Miscity_InsideOfTruck_Daan_RescueMission_Text_0
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	delay 40
	applymovement 5, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_1
	setspeaker Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	applymovement 4, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_1
	setspeaker Miscity_InsideOfTruck_Daan_RescueMission_Text_0
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 5, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_1
	applymovement 4, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_2
	setspeaker Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	applymovement 5, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_3
	applymovement 4, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_4
	setspeaker Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_5, MSGBOX_AUTOCLOSE
	waitmessage
	delay 40
	playse SE_PIN
	applymovement 5, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_5
	applymovement 4, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_6
	setspeaker Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_6, MSGBOX_AUTOCLOSE
	delay 120
	applymovement 5, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_7
	applymovement 4, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_8
	setspeaker Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_7, MSGBOX_AUTOCLOSE
	waitmessage
	delay 40
	setspeaker Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_8, MSGBOX_AUTOCLOSE
	waitmessage
	delay 40
	applymovement 4, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_0
	setspeaker Miscity_InsideOfTruck_Daan_RescueMission_Text_0
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_9, MSGBOX_AUTOCLOSE
	waitmessage
	delay 120
	setspeaker Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_10, MSGBOX_AUTOCLOSE
	waitmessage
	callnative StartTruckSlowingDownScene
	delay 200
	callnative WaitForTruckToStop
	delay 60
	setflag FLAG_DAVID_TRUCK
	setflag FLAG_DAAN_NASH_TRUCK
	setflag FLAG_NASH_ENTRANCE_RESEARCH_CENTER2
	clearflag FLAG_NASH_ENTRANCE_RESEARCH_CENTER1
	applymovement 5, Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_1
	waitmovement
	removeobject 5
	applymovement 4, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_9
	waitmovement
	removeobject 4
	release
	return


Miscity_InsideOfTruck_Daan_RescueMission_Movement_0:
	walk_left
	walk_up
	face_down
	step_end

Miscity_InsideOfTruck_Daan_RescueMission_Movement_1:
	walk_down
	walk_right
	walk_right
	jump_right
	step_end

Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_0:
	jump_left
	step_end

Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_1:
	jump_right
	step_end

Mistcity_InsideOfTruck_Daan_Returndrive_Movement_0:
	walk_down
	face_right
	step_end

Mistcity_InsideOfTruck_Daan_Returndrive_Movement_1:
	walk_left
	step_end

Mistcity_InsideOfTruck_Daan_Returndrive_Movement_2:
	face_right
	step_end

Mistcity_InsideOfTruck_Daan_Returndrive_Movement_3:
	walk_right
	walk_right
	face_left
	step_end

Mistcity_InsideOfTruck_Daan_Returndrive_Movement_4:
	walk_right
	step_end

Mistcity_InsideOfTruck_Daan_Returndrive_Movement_5:
	emote_exclamation_mark
	walk_left
	face_up
	step_end

Mistcity_InsideOfTruck_Daan_Returndrive_Movement_6:
	face_up
	emote_exclamation_mark
	step_end

Mistcity_InsideOfTruck_Daan_Returndrive_Movement_7:
	walk_right
	face_left
	step_end

Mistcity_InsideOfTruck_Daan_Returndrive_Movement_8:
	walk_up
	face_down
	step_end

Mistcity_InsideOfTruck_Daan_Returndrive_Movement_9:
	walk_right
	walk_right
	jump_right
	step_end

Miscity_InsideOfTruck_Daan_RescueMission_Text_0:
	.string "DAVID$"

Miscity_InsideOfTruck_Daan_RescueMission_Text_1:
	.string "The gorge is deep in the forest, it\n"
	.string "might take a couple of hours.\p"
	.string "Take some rest.$"

Miscity_InsideOfTruck_Daan_RescueMission_Text_2:
	.string "...A couple of hours later...$"

Miscity_InsideOfTruck_Daan_RescueMission_Text_3:
	.string "Ehummmm.... Hello... Wake up.\p"
	.string "I think we're here.$"

Miscity_InsideOfTruck_Daan_RescueMission_Text_4:
	.string "Allright, lets get out there, and keep\n"
	.string "those Beedrill of me!$"

Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_0:
	.string "They are still at the ancient meteorite\n"
	.string "I think.\p"
	.string "The signal is increasing the closer we\n"
	.string "get...$"

Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_1:
	.string "BEEP.... BEEP....\p"
	.string "We're here!\p"
	.string "NASH!\n"
	.string "STOP THE CAR!$"

Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2:
	.string "DAAN$"

Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_3:
	.string "Let's go!\n"
	.string "Stay behind me!$"

Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_4:
	.string "Well... what are you waiting for?$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_0:
	.string "I can't believe it.\n"
	.string "They just... took it.\p"
	.string "Destroyed the ancient meteorite,\n"
	.string "ripped it right out of its resting place.\p"
	.string "That 'Silent Guardian'... it was meant to\n"
	.string "sleep forever.$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_1:
	.string "The energy signature was off the\n"
	.string "charts.\p"
	.string "Maybe the old legends were real after\n"
	.string "all...\p"
	.string "How were they able to capture an\n"
	.string "ancient golem?$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_2:
	.string "Worse, they were willing to tear down an\n"
	.string "entire ecosystem just to find it.\p"
	.string "I don't think these are just a group of\n"
	.string "fanatics, they seem to be a\l"
	.string "well-funded, highly organized\l"
	.string "operation.$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_3:
	.string "I... I should have been faster.\p"
	.string "If I'd tracked the signal sooner, maybe\n"
	.string "we could have...$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_4:
	.string "Don't.\p"
	.string "You did everything you could.\p"
	.string "This is on them, not us.$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_5:
	.string "Hmmmm.....\p"
	.string "It's not the first time someone's come\n"
	.string "searching for secrets in this forest,\l"
	.string "though.\p"
	.string "A few years back, it was that eccentric\n"
	.string "PROFESSOR. BIRDS.\p"
	.string "He was out here for months with all\n"
	.string "sorts of weird scanners.\p"
	.string "Said he was mapping 'geothermal pig\n"
	.string "habitats.'\p"
	.string "...Geothermal. Pig. Habitats.\p"
	.string "In a forest.\p"
	.string "Where there are no pigs.\p"
	.string "He was just as secretive as The\n"
	.string "Faculty, but his energy felt different.\p"
	.string "More curious than malicious.\p"
	.string "I wonder what he was really looking\n"
	.string "for...$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_6:
	.string "...\p"
	.string "...\p"
	.string "WHAT?!\p"
	.string "YOU KNOW PROFESSOR BIRDS?\p"
	.string "How do you know him?\p"
	.string "...\p"
	.string "You are his intern?\p"
	.string "...\p"
	.string "...jeeezus...$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_7:
	.string "We should talk about that another\n"
	.string "time...\p"
	.string "Right now, we have to fight back.\p"
	.string "Their rot goes deep... it's even taken\n"
	.string "root in our own town.\p"
	.string "ELEANOR and MARCUS, two Faculty\n"
	.string "sympathizers who recently moved into\l"
	.string "town...\p"
	.string "Maybe we should give a little knock on\n"
	.string "their door.$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_8:
	.string "...There are also reports coming in from\n"
	.string "the north.\p"
	.string "I don't want to say too much before\n"
	.string "I've had a chance to look into it.\p"
	.string "But if they're moving again... we can't\n"
	.string "afford to be slow.$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_9:
	.string "I'll keep watching the signals.\p"
	.string "If The Faculty is active in this forest\n"
	.string "again, we'll know.$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_10:
	.string "We're here.$"
