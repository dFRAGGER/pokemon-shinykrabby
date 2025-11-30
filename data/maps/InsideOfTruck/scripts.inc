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
# 22 "data/maps/InsideOfTruck/scripts.pory"
	map_script_2 VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 4, Mistcity_InsideOfTruck_Daan_ChaseFaculty
# 23 "data/maps/InsideOfTruck/scripts.pory"
	map_script_2 VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 6, Mistcity_InsideOfTruck_Daan_Returndrive
	.2byte 0


Miscity_InsideOfTruck_Daan_RescueMission::
# 28 "data/maps/InsideOfTruck/scripts.pory"
	lock
# 29 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 1
# 30 "data/maps/InsideOfTruck/scripts.pory"
	applymovement LOCALID_PLAYER, Miscity_InsideOfTruck_Daan_RescueMission_Movement_0
# 31 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement
# 32 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_DEEP_CLOUD_FOREST_FACULTY_GORGE, 22, 7
# 33 "data/maps/InsideOfTruck/scripts.pory"
	call Mistcity_InsideOfTruck_OnDrive
# 34 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 35 "data/maps/InsideOfTruck/scripts.pory"
	playse SE_TRUCK_DOOR
# 36 "data/maps/InsideOfTruck/scripts.pory"
	special DrawWholeMapView
# 37 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 38 "data/maps/InsideOfTruck/scripts.pory"
	callnative StartTruckDrivingScene
# 39 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Miscity_InsideOfTruck_Daan_RescueMission_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 41 "data/maps/InsideOfTruck/scripts.pory"
	fadescreen FADE_TO_BLACK
# 42 "data/maps/InsideOfTruck/scripts.pory"
	delay 120
# 43 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Miscity_InsideOfTruck_Daan_RescueMission_Text_1, MSGBOX_AUTOCLOSE
# 44 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 45 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 46 "data/maps/InsideOfTruck/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 47 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Miscity_InsideOfTruck_Daan_RescueMission_Text_2, MSGBOX_AUTOCLOSE
# 48 "data/maps/InsideOfTruck/scripts.pory"
	callnative StartTruckSlowingDownScene
# 49 "data/maps/InsideOfTruck/scripts.pory"
	delay 200
# 50 "data/maps/InsideOfTruck/scripts.pory"
	callnative WaitForTruckToStop
# 51 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 52 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Miscity_InsideOfTruck_Daan_RescueMission_Text_3, MSGBOX_AUTOCLOSE
# 53 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 54 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DAVID_TRUCK
# 55 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_FACULTY_GORGE_NASH2
# 56 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 4, Miscity_InsideOfTruck_Daan_RescueMission_Movement_1
# 57 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement
# 58 "data/maps/InsideOfTruck/scripts.pory"
	removeobject 4
# 59 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 60 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 61 "data/maps/InsideOfTruck/scripts.pory"
	release
	return


Mistcity_InsideOfTruck_OnLoad::
# 66 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
# 67 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
# 68 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	return


Mistcity_InsideOfTruck_OnDrive::
# 73 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_DoorClosedFloor_Top, FALSE
# 74 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_DoorClosedFloor_Mid, FALSE
# 75 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_DoorClosedFloor_Bottom, FALSE
	return


Mistcity_InsideOfTruck_OnOffLoad::
# 80 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
# 81 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
# 82 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	return


Mistcity_InsideOfTruck_OnResume::
# 87 "data/maps/InsideOfTruck/scripts.pory"
	setstepcallback STEP_CB_TRUCK
	end


Mistcity_InsideOfTruck_Daan_ChaseFaculty::
# 92 "data/maps/InsideOfTruck/scripts.pory"
	lock
# 93 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 5
# 94 "data/maps/InsideOfTruck/scripts.pory"
	applymovement LOCALID_PLAYER, Miscity_InsideOfTruck_Daan_RescueMission_Movement_0
# 95 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement
# 96 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_DAAN_NASH_TRUCK
# 97 "data/maps/InsideOfTruck/scripts.pory"
	addobject 5
# 98 "data/maps/InsideOfTruck/scripts.pory"
	addobject 6
# 99 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 6, Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_0
# 100 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 5, Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_0
# 101 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement
# 102 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_DEEP_CLOUDFOREST_FACULTY_ANCIENT_GROTTO, 35, 16
# 103 "data/maps/InsideOfTruck/scripts.pory"
	call Mistcity_InsideOfTruck_OnDrive
# 104 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 105 "data/maps/InsideOfTruck/scripts.pory"
	playse SE_TRUCK_DOOR
# 106 "data/maps/InsideOfTruck/scripts.pory"
	special DrawWholeMapView
# 107 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 108 "data/maps/InsideOfTruck/scripts.pory"
	callnative StartTruckDrivingScene
# 109 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_0, MSGBOX_AUTOCLOSE
# 110 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 111 "data/maps/InsideOfTruck/scripts.pory"
	delay 120
# 112 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_1, MSGBOX_AUTOCLOSE
# 113 "data/maps/InsideOfTruck/scripts.pory"
	callnative StartTruckSlowingDownScene
# 114 "data/maps/InsideOfTruck/scripts.pory"
	delay 200
# 115 "data/maps/InsideOfTruck/scripts.pory"
	callnative WaitForTruckToStop
# 116 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 117 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 118 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2, MSGBOX_AUTOCLOSE
# 119 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 120 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DAVID_TRUCK
# 121 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DAAN_NASH_TRUCK
# 122 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 6, Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_1
# 123 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement
# 124 "data/maps/InsideOfTruck/scripts.pory"
	removeobject 6
# 125 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_3, MSGBOX_AUTOCLOSE
# 126 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 127 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 5, Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_1
# 128 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement
# 129 "data/maps/InsideOfTruck/scripts.pory"
	removeobject 5
# 130 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_4, MSGBOX_AUTOCLOSE
# 131 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 132 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 4, Miscity_InsideOfTruck_Daan_RescueMission_Movement_1
# 133 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement
# 134 "data/maps/InsideOfTruck/scripts.pory"
	removeobject 4
# 135 "data/maps/InsideOfTruck/scripts.pory"
	release
	return


Mistcity_InsideOfTruck_Daan_Returndrive::
# 140 "data/maps/InsideOfTruck/scripts.pory"
	lock
# 141 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 7
# 142 "data/maps/InsideOfTruck/scripts.pory"
	applymovement LOCALID_PLAYER, Miscity_InsideOfTruck_Daan_RescueMission_Movement_0
# 143 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement
# 144 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_DAAN_NASH_TRUCK
# 145 "data/maps/InsideOfTruck/scripts.pory"
	addobject 5
# 146 "data/maps/InsideOfTruck/scripts.pory"
	addobject 6
# 147 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 6, Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_0
# 148 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 5, Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_0
# 149 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement
# 150 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_MISTCITY_RESEARCH_CENTER, 15, 9
# 151 "data/maps/InsideOfTruck/scripts.pory"
	call Mistcity_InsideOfTruck_OnDrive
# 152 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 153 "data/maps/InsideOfTruck/scripts.pory"
	playse SE_TRUCK_DOOR
# 154 "data/maps/InsideOfTruck/scripts.pory"
	special DrawWholeMapView
# 155 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 156 "data/maps/InsideOfTruck/scripts.pory"
	callnative StartTruckDrivingScene
# 157 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_0, MSGBOX_AUTOCLOSE
# 158 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 159 "data/maps/InsideOfTruck/scripts.pory"
	delay 40
# 160 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_1, MSGBOX_AUTOCLOSE
# 161 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 162 "data/maps/InsideOfTruck/scripts.pory"
	delay 40
# 163 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_2, MSGBOX_AUTOCLOSE
# 164 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 165 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 166 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_3, MSGBOX_AUTOCLOSE
# 167 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 168 "data/maps/InsideOfTruck/scripts.pory"
	delay 120
# 169 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_4, MSGBOX_AUTOCLOSE
# 170 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 171 "data/maps/InsideOfTruck/scripts.pory"
	delay 40
# 172 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_5, MSGBOX_AUTOCLOSE
# 173 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 174 "data/maps/InsideOfTruck/scripts.pory"
	delay 40
# 175 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_6, MSGBOX_AUTOCLOSE
# 176 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 177 "data/maps/InsideOfTruck/scripts.pory"
	delay 120
# 178 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_7, MSGBOX_AUTOCLOSE
# 179 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 180 "data/maps/InsideOfTruck/scripts.pory"
	delay 120
# 181 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_8, MSGBOX_AUTOCLOSE
# 182 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 183 "data/maps/InsideOfTruck/scripts.pory"
	callnative StartTruckSlowingDownScene
# 184 "data/maps/InsideOfTruck/scripts.pory"
	delay 200
# 185 "data/maps/InsideOfTruck/scripts.pory"
	callnative WaitForTruckToStop
# 186 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 187 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DAVID_TRUCK
# 188 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DAAN_NASH_TRUCK
# 189 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_NASH_ENTRANCE_RESEARCH_CENTER2
# 190 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_NASH_ENTRANCE_RESEARCH_CENTER1
# 191 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 6, Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_1
# 192 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 5, Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_1
# 193 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement
# 194 "data/maps/InsideOfTruck/scripts.pory"
	removeobject 6
# 195 "data/maps/InsideOfTruck/scripts.pory"
	removeobject 5
# 196 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 4, Miscity_InsideOfTruck_Daan_RescueMission_Movement_1
# 197 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement
# 198 "data/maps/InsideOfTruck/scripts.pory"
	removeobject 4
# 199 "data/maps/InsideOfTruck/scripts.pory"
	release
	return


# 30 "data/maps/InsideOfTruck/scripts.pory"
Miscity_InsideOfTruck_Daan_RescueMission_Movement_0:
# 30 "data/maps/InsideOfTruck/scripts.pory"
	walk_left
# 30 "data/maps/InsideOfTruck/scripts.pory"
	walk_up
# 30 "data/maps/InsideOfTruck/scripts.pory"
	face_down
	step_end

# 56 "data/maps/InsideOfTruck/scripts.pory"
Miscity_InsideOfTruck_Daan_RescueMission_Movement_1:
# 56 "data/maps/InsideOfTruck/scripts.pory"
	walk_down
# 56 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 56 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 56 "data/maps/InsideOfTruck/scripts.pory"
	jump_right
	step_end

# 99 "data/maps/InsideOfTruck/scripts.pory"
Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_0:
# 99 "data/maps/InsideOfTruck/scripts.pory"
	jump_left
	step_end

# 122 "data/maps/InsideOfTruck/scripts.pory"
Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_1:
# 122 "data/maps/InsideOfTruck/scripts.pory"
	jump_right
	step_end

Miscity_InsideOfTruck_Daan_RescueMission_Text_0:
# 39 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}David{COLOR DARK_GRAY}: The gorge is deep in the forest,\n"
	.string "it might take a couple of hours.\p"
	.string "Take some rest.$"

Miscity_InsideOfTruck_Daan_RescueMission_Text_1:
# 43 "data/maps/InsideOfTruck/scripts.pory"
	.string "...A couple of hours later...$"

Miscity_InsideOfTruck_Daan_RescueMission_Text_2:
# 47 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}David{COLOR DARK_GRAY}: Ehummmm.... Hello... Wake up.\p"
	.string "I think we're here.$"

Miscity_InsideOfTruck_Daan_RescueMission_Text_3:
# 52 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}David{COLOR DARK_GRAY}: Allright, lets get out there, and\n"
	.string "keep those Beedrill of me!$"

Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_0:
# 109 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}David{COLOR DARK_GRAY}: They can't be that far away...\p"
	.string "The signal seems to be coming from the\n"
	.string "Ancient Grotto.$"

Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_1:
# 112 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}David{COLOR DARK_GRAY}: BEEP.... BEEP....\p"
	.string "I think this is it!$"

Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2:
# 118 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: Let's go!\n"
	.string "Stay behind me!$"

Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_3:
# 125 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: Don't be afraid.\n"
	.string "We got this!$"

Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_4:
# 130 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}David{COLOR DARK_GRAY}: Well... what are you waiting for?$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_0:
# 157 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: I can't believe it.\n"
	.string "They just... took it.\p"
	.string "Ripped a part of the forest's soul right\n"
	.string "out of the ground and flew away.\p"
	.string "That 'Silent Guardian'... it was meant to\n"
	.string "sleep forever.$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_1:
# 160 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}David{COLOR DARK_GRAY}: The energy signature was off\n"
	.string "the charts.\p"
	.string "All my research on ancient Pokémon\n"
	.string "points to one name...\p"
	.string "They have Registeel.$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_2:
# 163 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: And they were willing to tear down\n"
	.string "an entire ecosystem just to find it.\p"
	.string "This changes everything.\p"
	.string "This isn't just a group of fanatics; it's\n"
	.string "a well-funded, highly organized\l"
	.string "operation.$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_3:
# 166 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: It's not the first time someone's\n"
	.string "come searching for secrets in this\l"
	.string "forest, though.\p"
	.string "A few years back, it was that eccentric\n"
	.string "Professor. Birds.\p"
	.string "He was out here for months with all\n"
	.string "sorts of weird scanners.\p"
	.string "Said he was mapping 'geothermal pig\n"
	.string "habitats' or some other nonsense.\p"
	.string "He was just as secretive as The\n"
	.string "Faculty, but his energy... it felt\l"
	.string "different.\p"
	.string "More curious than malicious.\p"
	.string "I wonder what he was really looking\n"
	.string "for...$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_4:
# 169 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: But that's a mystery for another\n"
	.string "time.\p"
	.string "Right now, we fight back.\p"
	.string "Their rot goes deep... it's even taken\n"
	.string "root in our own town.\p"
	.string "Eleanor and Marcus, two faculty\n"
	.string "sympathizers who recently moved into\l"
	.string "town...\p"
	.string "Maybe we should give a little knock on\n"
	.string "their door.$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_5:
# 172 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Nash{COLOR DARK_GRAY}: Daan's right.\p"
	.string "We need to push back here and figure\n"
	.string "out their next move.\p"
	.string "We've been getting strange reports\n"
	.string "from the rangers stationed up north, on\l"
	.string "the Lions Mountains.\p"
	.string "Recently a 'private corporation' bought\n"
	.string "up all the mining rights and has\l"
	.string "restricted access to the area.\p"
	.string "Sounds suspiciously familiar, doesn't\n"
	.string "it?$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_6:
# 175 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}David{COLOR DARK_GRAY}: He's right.\p"
	.string "My long-range scanner has been picking\n"
	.string "up faint energy pulses from those\l"
	.string "mountains.\p"
	.string "They're similar to the frequency they\n"
	.string "used here, but... colder.\p"
	.string "If they have Registeel, I'm worried\n"
	.string "they're searching for its counterparts.$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_7:
# 178 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}David{COLOR DARK_GRAY}: But even the Regis... the old\n"
	.string "texts call them 'golems.' Keys.\p"
	.string "They're just a tool to control\n"
	.string "something more fundamental.\p"
	.string "Something The Faculty fears more than\n"
	.string "anything.\p"
	.string "The source of all the genetic diversity\n"
	.string "they call 'chaos'...\p"
	.string "If they're gathering the keys, it means\n"
	.string "they're planning to find the lock.$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_8:
# 181 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}Daan{COLOR DARK_GRAY}: We're here.$"
