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
	.string "It's a POKéMON brand for food and\n"
# 15 "data/maps/InsideOfTruck/scripts.pory"
	.string "supply service.$"

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
	setspeaker Miscity_InsideOfTruck_Daan_RescueMission_Text_0
# 40 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Miscity_InsideOfTruck_Daan_RescueMission_Text_1, MSGBOX_AUTOCLOSE
# 41 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 42 "data/maps/InsideOfTruck/scripts.pory"
	fadescreen FADE_TO_BLACK
# 43 "data/maps/InsideOfTruck/scripts.pory"
	delay 120
# 44 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Miscity_InsideOfTruck_Daan_RescueMission_Text_2, MSGBOX_AUTOCLOSE
# 45 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 46 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 47 "data/maps/InsideOfTruck/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 48 "data/maps/InsideOfTruck/scripts.pory"
	setspeaker Miscity_InsideOfTruck_Daan_RescueMission_Text_0
# 49 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Miscity_InsideOfTruck_Daan_RescueMission_Text_3, MSGBOX_AUTOCLOSE
# 50 "data/maps/InsideOfTruck/scripts.pory"
	callnative StartTruckSlowingDownScene
# 51 "data/maps/InsideOfTruck/scripts.pory"
	delay 200
# 52 "data/maps/InsideOfTruck/scripts.pory"
	callnative WaitForTruckToStop
# 53 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 54 "data/maps/InsideOfTruck/scripts.pory"
	setspeaker Miscity_InsideOfTruck_Daan_RescueMission_Text_0
# 55 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Miscity_InsideOfTruck_Daan_RescueMission_Text_4, MSGBOX_AUTOCLOSE
# 56 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 57 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DAVID_TRUCK
# 58 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_FACULTY_GORGE_NASH2
# 59 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 4, Miscity_InsideOfTruck_Daan_RescueMission_Movement_1
# 60 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement
# 61 "data/maps/InsideOfTruck/scripts.pory"
	removeobject 4
# 62 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 63 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 64 "data/maps/InsideOfTruck/scripts.pory"
	release
	return


Mistcity_InsideOfTruck_OnLoad::
# 69 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
# 70 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
# 71 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	return


Mistcity_InsideOfTruck_OnDrive::
# 76 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_DoorClosedFloor_Top, FALSE
# 77 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_DoorClosedFloor_Mid, FALSE
# 78 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_DoorClosedFloor_Bottom, FALSE
	return


Mistcity_InsideOfTruck_OnOffLoad::
# 83 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
# 84 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
# 85 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	return


Mistcity_InsideOfTruck_OnResume::
# 90 "data/maps/InsideOfTruck/scripts.pory"
	setstepcallback STEP_CB_TRUCK
	end


Mistcity_InsideOfTruck_Daan_ChaseFaculty::
# 95 "data/maps/InsideOfTruck/scripts.pory"
	lock
# 96 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_MISTCITY_RESEARCH_CENTER_LOCATION, 5
# 97 "data/maps/InsideOfTruck/scripts.pory"
	applymovement LOCALID_PLAYER, Miscity_InsideOfTruck_Daan_RescueMission_Movement_0
# 98 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement
# 99 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_DAAN_NASH_TRUCK
# 100 "data/maps/InsideOfTruck/scripts.pory"
	addobject 5
# 101 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 5, Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_0
# 102 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement
# 103 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_DEEP_CLOUDFOREST_FACULTY_ANCIENT_GROTTO, 35, 16
# 104 "data/maps/InsideOfTruck/scripts.pory"
	call Mistcity_InsideOfTruck_OnDrive
# 105 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 106 "data/maps/InsideOfTruck/scripts.pory"
	playse SE_TRUCK_DOOR
# 107 "data/maps/InsideOfTruck/scripts.pory"
	special DrawWholeMapView
# 108 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 109 "data/maps/InsideOfTruck/scripts.pory"
	callnative StartTruckDrivingScene
# 110 "data/maps/InsideOfTruck/scripts.pory"
	setspeaker Miscity_InsideOfTruck_Daan_RescueMission_Text_0
# 111 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_0, MSGBOX_AUTOCLOSE
# 112 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 113 "data/maps/InsideOfTruck/scripts.pory"
	delay 120
# 114 "data/maps/InsideOfTruck/scripts.pory"
	setspeaker Miscity_InsideOfTruck_Daan_RescueMission_Text_0
# 115 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_1, MSGBOX_AUTOCLOSE
# 116 "data/maps/InsideOfTruck/scripts.pory"
	callnative StartTruckSlowingDownScene
# 117 "data/maps/InsideOfTruck/scripts.pory"
	delay 200
# 118 "data/maps/InsideOfTruck/scripts.pory"
	callnative WaitForTruckToStop
# 119 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 120 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 121 "data/maps/InsideOfTruck/scripts.pory"
	setspeaker Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2
# 122 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_3, MSGBOX_AUTOCLOSE
# 123 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 124 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DAVID_TRUCK
# 125 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DAAN_NASH_TRUCK
# 126 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 5, Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_1
# 127 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement
# 128 "data/maps/InsideOfTruck/scripts.pory"
	removeobject 5
# 129 "data/maps/InsideOfTruck/scripts.pory"
	setspeaker Miscity_InsideOfTruck_Daan_RescueMission_Text_0
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
	applymovement 5, Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_0
# 147 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement
# 148 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_MISTCITY_RESEARCH_CENTER, 15, 9
# 149 "data/maps/InsideOfTruck/scripts.pory"
	call Mistcity_InsideOfTruck_OnDrive
# 150 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 151 "data/maps/InsideOfTruck/scripts.pory"
	playse SE_TRUCK_DOOR
# 152 "data/maps/InsideOfTruck/scripts.pory"
	special DrawWholeMapView
# 153 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 154 "data/maps/InsideOfTruck/scripts.pory"
	callnative StartTruckDrivingScene
# 155 "data/maps/InsideOfTruck/scripts.pory"
	setspeaker Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2
# 156 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_0, MSGBOX_AUTOCLOSE
# 157 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 158 "data/maps/InsideOfTruck/scripts.pory"
	delay 40
# 159 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 4, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_0
# 160 "data/maps/InsideOfTruck/scripts.pory"
	setspeaker Miscity_InsideOfTruck_Daan_RescueMission_Text_0
# 161 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_1, MSGBOX_AUTOCLOSE
# 162 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 163 "data/maps/InsideOfTruck/scripts.pory"
	delay 40
# 164 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 5, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_1
# 165 "data/maps/InsideOfTruck/scripts.pory"
	setspeaker Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2
# 166 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_2, MSGBOX_AUTOCLOSE
# 167 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 168 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 169 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 4, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_1
# 170 "data/maps/InsideOfTruck/scripts.pory"
	setspeaker Miscity_InsideOfTruck_Daan_RescueMission_Text_0
# 171 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_3, MSGBOX_AUTOCLOSE
# 172 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 173 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 5, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_1
# 174 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 4, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_2
# 175 "data/maps/InsideOfTruck/scripts.pory"
	setspeaker Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2
# 176 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_4, MSGBOX_AUTOCLOSE
# 177 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 178 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 179 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 5, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_3
# 180 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 4, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_4
# 181 "data/maps/InsideOfTruck/scripts.pory"
	setspeaker Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2
# 182 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_5, MSGBOX_AUTOCLOSE
# 183 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 184 "data/maps/InsideOfTruck/scripts.pory"
	playse SE_PIN
# 185 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 5, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_5
# 186 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 4, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_6
# 187 "data/maps/InsideOfTruck/scripts.pory"
	setspeaker Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2
# 188 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_6, MSGBOX_AUTOCLOSE
# 189 "data/maps/InsideOfTruck/scripts.pory"
	delay 120
# 190 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 5, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_7
# 191 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 4, Mistcity_InsideOfTruck_Daan_Returndrive_Movement_8
# 192 "data/maps/InsideOfTruck/scripts.pory"
	setspeaker Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2
# 193 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_7, MSGBOX_AUTOCLOSE
# 194 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 195 "data/maps/InsideOfTruck/scripts.pory"
	delay 40
# 196 "data/maps/InsideOfTruck/scripts.pory"
	setspeaker Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2
# 197 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_8, MSGBOX_AUTOCLOSE
# 198 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 199 "data/maps/InsideOfTruck/scripts.pory"
	delay 40
# 200 "data/maps/InsideOfTruck/scripts.pory"
	setspeaker Miscity_InsideOfTruck_Daan_RescueMission_Text_0
# 201 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_9, MSGBOX_AUTOCLOSE
# 202 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 203 "data/maps/InsideOfTruck/scripts.pory"
	delay 120
# 204 "data/maps/InsideOfTruck/scripts.pory"
	setspeaker Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2
# 205 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Mistcity_InsideOfTruck_Daan_Returndrive_Text_10, MSGBOX_AUTOCLOSE
# 206 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 207 "data/maps/InsideOfTruck/scripts.pory"
	callnative StartTruckSlowingDownScene
# 208 "data/maps/InsideOfTruck/scripts.pory"
	delay 200
# 209 "data/maps/InsideOfTruck/scripts.pory"
	callnative WaitForTruckToStop
# 210 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 211 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DAVID_TRUCK
# 212 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DAAN_NASH_TRUCK
# 213 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_NASH_ENTRANCE_RESEARCH_CENTER2
# 214 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_NASH_ENTRANCE_RESEARCH_CENTER1
# 215 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 5, Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_1
# 216 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement
# 217 "data/maps/InsideOfTruck/scripts.pory"
	removeobject 5
# 218 "data/maps/InsideOfTruck/scripts.pory"
	applymovement 4, Miscity_InsideOfTruck_Daan_RescueMission_Movement_1
# 219 "data/maps/InsideOfTruck/scripts.pory"
	waitmovement
# 220 "data/maps/InsideOfTruck/scripts.pory"
	removeobject 4
# 221 "data/maps/InsideOfTruck/scripts.pory"
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

# 59 "data/maps/InsideOfTruck/scripts.pory"
Miscity_InsideOfTruck_Daan_RescueMission_Movement_1:
# 59 "data/maps/InsideOfTruck/scripts.pory"
	walk_down
# 59 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 59 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 59 "data/maps/InsideOfTruck/scripts.pory"
	jump_right
	step_end

# 101 "data/maps/InsideOfTruck/scripts.pory"
Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_0:
# 101 "data/maps/InsideOfTruck/scripts.pory"
	jump_left
	step_end

# 126 "data/maps/InsideOfTruck/scripts.pory"
Mistcity_InsideOfTruck_Daan_ChaseFaculty_Movement_1:
# 126 "data/maps/InsideOfTruck/scripts.pory"
	jump_right
	step_end

# 159 "data/maps/InsideOfTruck/scripts.pory"
Mistcity_InsideOfTruck_Daan_Returndrive_Movement_0:
# 159 "data/maps/InsideOfTruck/scripts.pory"
	walk_down
# 159 "data/maps/InsideOfTruck/scripts.pory"
	face_right
	step_end

# 164 "data/maps/InsideOfTruck/scripts.pory"
Mistcity_InsideOfTruck_Daan_Returndrive_Movement_1:
# 164 "data/maps/InsideOfTruck/scripts.pory"
	walk_left
	step_end

# 174 "data/maps/InsideOfTruck/scripts.pory"
Mistcity_InsideOfTruck_Daan_Returndrive_Movement_2:
# 174 "data/maps/InsideOfTruck/scripts.pory"
	face_right
	step_end

# 179 "data/maps/InsideOfTruck/scripts.pory"
Mistcity_InsideOfTruck_Daan_Returndrive_Movement_3:
# 179 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 179 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 179 "data/maps/InsideOfTruck/scripts.pory"
	face_left
	step_end

# 180 "data/maps/InsideOfTruck/scripts.pory"
Mistcity_InsideOfTruck_Daan_Returndrive_Movement_4:
# 180 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
	step_end

# 185 "data/maps/InsideOfTruck/scripts.pory"
Mistcity_InsideOfTruck_Daan_Returndrive_Movement_5:
# 185 "data/maps/InsideOfTruck/scripts.pory"
	emote_exclamation_mark
# 185 "data/maps/InsideOfTruck/scripts.pory"
	walk_left
# 185 "data/maps/InsideOfTruck/scripts.pory"
	face_up
	step_end

# 186 "data/maps/InsideOfTruck/scripts.pory"
Mistcity_InsideOfTruck_Daan_Returndrive_Movement_6:
# 186 "data/maps/InsideOfTruck/scripts.pory"
	walk_up
# 186 "data/maps/InsideOfTruck/scripts.pory"
	face_right
# 186 "data/maps/InsideOfTruck/scripts.pory"
	emote_exclamation_mark
	step_end

# 190 "data/maps/InsideOfTruck/scripts.pory"
Mistcity_InsideOfTruck_Daan_Returndrive_Movement_7:
# 190 "data/maps/InsideOfTruck/scripts.pory"
	walk_right
# 190 "data/maps/InsideOfTruck/scripts.pory"
	face_left
	step_end

# 191 "data/maps/InsideOfTruck/scripts.pory"
Mistcity_InsideOfTruck_Daan_Returndrive_Movement_8:
# 191 "data/maps/InsideOfTruck/scripts.pory"
	face_down
	step_end

Miscity_InsideOfTruck_Daan_RescueMission_Text_0:
# 39 "data/maps/InsideOfTruck/scripts.pory"
	.string "David$"

Miscity_InsideOfTruck_Daan_RescueMission_Text_1:
# 40 "data/maps/InsideOfTruck/scripts.pory"
	.string "The gorge is deep in the forest, it\n"
	.string "might take a couple of hours.\p"
	.string "Take some rest.$"

Miscity_InsideOfTruck_Daan_RescueMission_Text_2:
# 44 "data/maps/InsideOfTruck/scripts.pory"
	.string "...A couple of hours later...$"

Miscity_InsideOfTruck_Daan_RescueMission_Text_3:
# 49 "data/maps/InsideOfTruck/scripts.pory"
	.string "Ehummmm.... Hello... Wake up.\p"
	.string "I think we're here.$"

Miscity_InsideOfTruck_Daan_RescueMission_Text_4:
# 55 "data/maps/InsideOfTruck/scripts.pory"
	.string "Allright, lets get out there, and keep\n"
	.string "those Beedrill of me!$"

Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_0:
# 111 "data/maps/InsideOfTruck/scripts.pory"
	.string "They can't be that far away...\p"
	.string "The signal seems to be coming from the\n"
	.string "Ancient Grotto.$"

Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_1:
# 115 "data/maps/InsideOfTruck/scripts.pory"
	.string "BEEP.... BEEP....\p"
	.string "I think this is it!\p"
	.string "NASH!\n"
	.string "STOP THE CAR!$"

Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_2:
# 121 "data/maps/InsideOfTruck/scripts.pory"
	.string "Daan$"

Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_3:
# 122 "data/maps/InsideOfTruck/scripts.pory"
	.string "Let's go!\n"
	.string "Stay behind me!$"

Mistcity_InsideOfTruck_Daan_ChaseFaculty_Text_4:
# 130 "data/maps/InsideOfTruck/scripts.pory"
	.string "Well... what are you waiting for?$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_0:
# 156 "data/maps/InsideOfTruck/scripts.pory"
	.string "I can't believe it.\n"
	.string "They just... took it.\p"
	.string "Ripped a part of the forest's soul right\n"
	.string "out of the ground and fled.\p"
	.string "That 'Silent Guardian'... it was meant to\n"
	.string "sleep forever.$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_1:
# 161 "data/maps/InsideOfTruck/scripts.pory"
	.string "The energy signature was off the\n"
	.string "charts.\p"
	.string "All my research on ancient Pokémon\n"
	.string "points to one name...\p"
	.string "They have Registeel.$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_2:
# 166 "data/maps/InsideOfTruck/scripts.pory"
	.string "And they were willing to tear down an\n"
	.string "entire ecosystem just to find it.\p"
	.string "This changes everything.\p"
	.string "This isn't just a group of fanatics; it's\n"
	.string "a well-funded, highly organized\l"
	.string "operation.$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_3:
# 171 "data/maps/InsideOfTruck/scripts.pory"
	.string "I... I should have been faster.\p"
	.string "If I'd tracked the signal sooner, maybe\n"
	.string "we could have...$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_4:
# 176 "data/maps/InsideOfTruck/scripts.pory"
	.string "Don't.\p"
	.string "You did everything you could.\p"
	.string "This is on them, not us.\p"
	.string "We'll get it back.$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_5:
# 182 "data/maps/InsideOfTruck/scripts.pory"
	.string "Hmmmm.....\p"
	.string "It's not the first time someone's come\n"
	.string "searching for secrets in this forest,\l"
	.string "though.\p"
	.string "A few years back, it was that eccentric\n"
	.string "Professor. Birds.\p"
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
# 188 "data/maps/InsideOfTruck/scripts.pory"
	.string "WHAT?!\p"
	.string "YOU KNOW PROFESSOR BIRDS?\p"
	.string "How do you know him?\p"
	.string "...\p"
	.string "You are his intern?\p"
	.string "...\p"
	.string "...jeeezus...$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_7:
# 193 "data/maps/InsideOfTruck/scripts.pory"
	.string "We should talk about that another\n"
	.string "time...\p"
	.string "Right now, we fight back.\p"
	.string "Their rot goes deep... it's even taken\n"
	.string "root in our own town.\p"
	.string "Eleanor and Marcus, two faculty\n"
	.string "sympathizers who recently moved into\l"
	.string "town...\p"
	.string "Maybe we should give a little knock on\n"
	.string "their door.$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_8:
# 197 "data/maps/InsideOfTruck/scripts.pory"
	.string "Also, we've been getting strange\n"
	.string "reports from the rangers stationed up\l"
	.string "north, on the Lions Mountains.\p"
	.string "Recently a 'private corporation' bought\n"
	.string "up all the mining rights and the local\l"
	.string "steel plant.\p"
	.string "Sounds suspiciously familiar, doesn't\n"
	.string "it?$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_9:
# 201 "data/maps/InsideOfTruck/scripts.pory"
	.string "He's right.\p"
	.string "The reports are concerning.\p"
	.string "Apparently the ground is shaking from\n"
	.string "all the drilling and pokemon are acting\l"
	.string "erratically.\p"
	.string "They have Registeel already, what are\n"
	.string "they looking for?$"

Mistcity_InsideOfTruck_Daan_Returndrive_Text_10:
# 205 "data/maps/InsideOfTruck/scripts.pory"
	.string "We're here.$"
