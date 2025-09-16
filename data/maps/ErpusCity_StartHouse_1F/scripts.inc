ErpusCity_StartHouse_1F_MapScripts::
# 2 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ErpusCity_StartHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ErpusCity_StartHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	call ErpusCity_Heal_Location
	return


ErpusCity_Heal_Location::
# 8 "data/maps/ErpusCity_StartHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_ERP_CITY
	end

