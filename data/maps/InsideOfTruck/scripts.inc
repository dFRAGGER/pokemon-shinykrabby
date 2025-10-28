# 1 "data/maps/InsideOfTruck/scripts.pory"

# 2 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlagsMale::
# 3 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 4 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 3, 10
# 5 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
# 6 "data/maps/InsideOfTruck/scripts.pory"
	end
# 7 "data/maps/InsideOfTruck/scripts.pory"

# 8 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_MovingBox::
# 9 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo, MSGBOX_SIGN
# 10 "data/maps/InsideOfTruck/scripts.pory"
	end
# 11 "data/maps/InsideOfTruck/scripts.pory"

# 12 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_Text_BoxPrintedWithMonLogo:
# 13 "data/maps/InsideOfTruck/scripts.pory"
	.string "The box is printed with a POKéMON logo.\p"
# 14 "data/maps/InsideOfTruck/scripts.pory"
	.string "It's a POKéMON brand moving and\n"
# 15 "data/maps/InsideOfTruck/scripts.pory"
	.string "delivery service.$"

InsideOfTruck_MapScripts::
# 18 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, InsideOfTruck_MapScripts_MAP_SCRIPT_ON_LOAD
# 19 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, InsideOfTruck_MapScripts_MAP_SCRIPT_ON_RESUME
# 20 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, InsideOfTruck_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

InsideOfTruck_MapScripts_MAP_SCRIPT_ON_LOAD:
# 18 "data/maps/InsideOfTruck/scripts.pory"
	call Mistcity_InsideOfTruck_OnLoad
	return

InsideOfTruck_MapScripts_MAP_SCRIPT_ON_RESUME:
# 19 "data/maps/InsideOfTruck/scripts.pory"
	call Mistcity_InsideOfTruck_OnResume
	return

InsideOfTruck_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 21 "data/maps/InsideOfTruck/scripts.pory"
	map_script_2 VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 0, Miscity_InsideOfTruck_Daan_RescueMission
	.2byte 0


Miscity_InsideOfTruck_Daan_RescueMission::
# 26 "data/maps/InsideOfTruck/scripts.pory"
	lock
# 27 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 1
# 28 "data/maps/InsideOfTruck/scripts.pory"
	applymovement LOCALID_PLAYER, Miscity_InsideOfTruck_Daan_RescueMission_Movement_0
# 29 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement
# 30 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_DEEP_CLOUD_FOREST_FACULTY_GORGE, 22, 7
# 31 "data/maps/InsideOfTruck/scripts.pory"
	call Mistcity_InsideOfTruck_OnDrive
# 32 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 33 "data/maps/InsideOfTruck/scripts.pory"
	playse SE_TRUCK_DOOR
# 34 "data/maps/InsideOfTruck/scripts.pory"
	special DrawWholeMapView
# 35 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 36 "data/maps/InsideOfTruck/scripts.pory"
	callnative StartTruckDrivingScene
# 37 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Miscity_InsideOfTruck_Daan_RescueMission_Text_0, MSGBOX_AUTOCLOSE
# 38 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 39 "data/maps/InsideOfTruck/scripts.pory"
	fadescreen FADE_TO_BLACK
# 40 "data/maps/InsideOfTruck/scripts.pory"
	delay 120
# 41 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Miscity_InsideOfTruck_Daan_RescueMission_Text_1, MSGBOX_AUTOCLOSE
# 42 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 43 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 44 "data/maps/InsideOfTruck/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 45 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Miscity_InsideOfTruck_Daan_RescueMission_Text_2, MSGBOX_AUTOCLOSE
# 46 "data/maps/InsideOfTruck/scripts.pory"
	callnative StartTruckSlowingDownScene
# 47 "data/maps/InsideOfTruck/scripts.pory"
	delay 200
# 48 "data/maps/InsideOfTruck/scripts.pory"
	callnative WaitForTruckToStop
# 49 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 50 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Miscity_InsideOfTruck_Daan_RescueMission_Text_3, MSGBOX_AUTOCLOSE
# 51 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 52 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DAVID_TRUCK
# 53 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_FACULTY_GORGE_NASH2
# 54 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 4, Miscity_InsideOfTruck_Daan_RescueMission_Movement_1
# 55 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement
# 56 "data/maps/InsideOfTruck/scripts.pory"
	removeobject 4
# 57 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 58 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 59 "data/maps/InsideOfTruck/scripts.pory"
	release
	return


Mistcity_InsideOfTruck_OnLoad::
# 64 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
# 65 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
# 66 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	return


Mistcity_InsideOfTruck_OnDrive::
# 71 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_DoorClosedFloor_Top, FALSE
# 72 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_DoorClosedFloor_Mid, FALSE
# 73 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_DoorClosedFloor_Bottom, FALSE
	return


Mistcity_InsideOfTruck_OnOffLoad::
# 78 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
# 79 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
# 80 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	return


Mistcity_InsideOfTruck_OnResume::
# 85 "data/maps/InsideOfTruck/scripts.pory"
	setstepcallback STEP_CB_TRUCK
	end


# 28 "data/maps/InsideOfTruck/scripts.pory"
Miscity_InsideOfTruck_Daan_RescueMission_Movement_0:
# 28 "data/maps/InsideOfTruck/scripts.pory"
	walk_left
# 28 "data/maps/InsideOfTruck/scripts.pory"
	walk_up
# 28 "data/maps/InsideOfTruck/scripts.pory"
	face_down
	step_end

# 54 "data/maps/InsideOfTruck/scripts.pory"
Miscity_InsideOfTruck_Daan_RescueMission_Movement_1:
# 54 "data/maps/InsideOfTruck/scripts.pory"
	walk_down
# 54 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 54 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 54 "data/maps/InsideOfTruck/scripts.pory"
	jump_right
	step_end

Miscity_InsideOfTruck_Daan_RescueMission_Text_0:
# 37 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}David{COLOR DARK_GRAY}: The gorge is deep in the forest,\n"
	.string "it might take a couple of hours.\p"
	.string "Take some rest.$"

Miscity_InsideOfTruck_Daan_RescueMission_Text_1:
# 41 "data/maps/InsideOfTruck/scripts.pory"
	.string "...A couple of hours later...$"

Miscity_InsideOfTruck_Daan_RescueMission_Text_2:
# 45 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}David{COLOR DARK_GRAY}: Ehummmm.... Hello... Wake up.\p"
	.string "I think we're here.$"

Miscity_InsideOfTruck_Daan_RescueMission_Text_3:
# 50 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}David{COLOR DARK_GRAY}: Allright, lets get out there, and\n"
	.string "keep those Beedrill of me!$"
