Maasje_Gym_Basement_MapScripts::
# 2 "data/maps/Maasje_Gym_Basement/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Maasje_Gym_Basement_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Maasje_Gym_Basement_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Maasje_Gym_Basement/scripts.pory"
	call Maasje_Gym_Basement_Check_Buried
	return


Maasje_Gym_Basement_Check_Buried::
# 8 "data/maps/Maasje_Gym_Basement/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_BURIED
# 9 "data/maps/Maasje_Gym_Basement/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_BURIED
	return

