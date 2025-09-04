LabJariIndoor_MapScripts::
# 2 "data/maps/LabJariIndoor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LabJariIndoor_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LabJariIndoor_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_RECIEVED_STARTER_POKEMON, 2
	goto_if_eq LabJariIndoor_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 6 "data/maps/LabJariIndoor/scripts.pory"
	setflag FLAG_HIDE_INTERN_BIRDS_LAB
	return

LabJariIndoor_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/LabJariIndoor/scripts.pory"
	clearflag FLAG_HIDE_INTERN_BIRDS_LAB
	return


LabJariIndoor_Eventscript_Birds_Pokemon_Check::
# 12 "data/maps/LabJariIndoor/scripts.pory"
	lockall
# 13 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 14 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 15 "data/maps/LabJariIndoor/scripts.pory"
	releaseall
	return


LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0:
# 13 "data/maps/LabJariIndoor/scripts.pory"
	.string "...WHY ARE YOU STILL HERE? BETTER GET\n"
	.string "TO THAT SCRUB OF A FRIEND CALLED JAKUB\l"
	.string "IN THE NEXT TOWN! HE PROBABLY KNOWS\l"
	.string "HOW TO CATCH SOME POKEMON!$"
