Route016_MapScripts::
	.byte 0


Route016_EventScript_BikeParkExitTrigger::
	lockall
	setvar VAR_TEMP_6, 0
	clearflag FLAG_SYS_CYCLING_ROAD
	releaseall
	end


Route016_EventScript_BikeParkMountTrigger::
	lockall
	setvar VAR_TEMP_6, 0
	special ForcePlayerOntoBike
	setflag FLAG_SYS_CYCLING_ROAD
	releaseall
	end

