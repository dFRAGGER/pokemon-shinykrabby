Route016_MapScripts::
	.byte 0


Route016_EventScript_BikeParkExitTrigger::
# 9 "data/maps/Route016/scripts.pory"
	lockall
# 10 "data/maps/Route016/scripts.pory"
	setvar VAR_TEMP_6, 0
# 11 "data/maps/Route016/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 12 "data/maps/Route016/scripts.pory"
	releaseall
	end


Route016_EventScript_BikeParkMountTrigger::
# 20 "data/maps/Route016/scripts.pory"
	lockall
# 21 "data/maps/Route016/scripts.pory"
	setvar VAR_TEMP_6, 0
# 22 "data/maps/Route016/scripts.pory"
	special ForcePlayerOntoBike
# 23 "data/maps/Route016/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 24 "data/maps/Route016/scripts.pory"
	releaseall
	end

