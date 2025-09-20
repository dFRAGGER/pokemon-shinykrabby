LabJariIndoorStorage_MapScripts::
# 2 "data/maps/LabJariIndoorStorage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LabJariIndoorStorage_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LabJariIndoorStorage_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LabJariIndoorStorage/scripts.pory"
	compare VAR_RECIEVED_STARTER_POKEMON, 2
	goto_if_eq LabJariIndoorStorage_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 6 "data/maps/LabJariIndoorStorage/scripts.pory"
	setflag FLAG_HIDE_INTERN_BIRDS_LAB
	return

LabJariIndoorStorage_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/LabJariIndoorStorage/scripts.pory"
	clearflag FLAG_HIDE_INTERN_BIRDS_LAB
	return


LabJariIndoorStorage_Eventscript_Intern_Cave::
# 12 "data/maps/LabJariIndoorStorage/scripts.pory"
	lockall
# 13 "data/maps/LabJariIndoorStorage/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq LabJariIndoorStorage_Eventscript_Intern_Cave_2
# 21 "data/maps/LabJariIndoorStorage/scripts.pory"
	msgbox LabJariIndoorStorage_Eventscript_Intern_Cave_Text_1
LabJariIndoorStorage_Eventscript_Intern_Cave_1:
# 23 "data/maps/LabJariIndoorStorage/scripts.pory"
	releaseall
	return

LabJariIndoorStorage_Eventscript_Intern_Cave_2:
# 14 "data/maps/LabJariIndoorStorage/scripts.pory"
	playse SE_PIN
# 15 "data/maps/LabJariIndoorStorage/scripts.pory"
	applymovement 1, LabJariIndoorStorage_Eventscript_Intern_Cave_Movement_0
# 16 "data/maps/LabJariIndoorStorage/scripts.pory"
	waitmovement
# 17 "data/maps/LabJariIndoorStorage/scripts.pory"
	msgbox LabJariIndoorStorage_Eventscript_Intern_Cave_Text_0
# 18 "data/maps/LabJariIndoorStorage/scripts.pory"
	waitmessage
# 19 "data/maps/LabJariIndoorStorage/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto LabJariIndoorStorage_Eventscript_Intern_Cave_1


LabJariIndoorStorage_Eventscript_BoxesAssignment::
# 27 "data/maps/LabJariIndoorStorage/scripts.pory"
	lock
# 28 "data/maps/LabJariIndoorStorage/scripts.pory"
	msgbox LabJariIndoorStorage_Eventscript_BoxesAssignment_Text_0
# 29 "data/maps/LabJariIndoorStorage/scripts.pory"
	waitmessage
# 30 "data/maps/LabJariIndoorStorage/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoorStorage_Eventscript_BoxesAssignment_Movement_0
# 31 "data/maps/LabJariIndoorStorage/scripts.pory"
	waitmovement
# 32 "data/maps/LabJariIndoorStorage/scripts.pory"
	release
	return


# 15 "data/maps/LabJariIndoorStorage/scripts.pory"
LabJariIndoorStorage_Eventscript_Intern_Cave_Movement_0:
# 15 "data/maps/LabJariIndoorStorage/scripts.pory"
	reveal_trainer
# 15 "data/maps/LabJariIndoorStorage/scripts.pory"
	emote_exclamation_mark
# 15 "data/maps/LabJariIndoorStorage/scripts.pory"
	jump_in_place_down
	step_end

# 30 "data/maps/LabJariIndoorStorage/scripts.pory"
LabJariIndoorStorage_Eventscript_BoxesAssignment_Movement_0:
# 30 "data/maps/LabJariIndoorStorage/scripts.pory"
	walk_up
	step_end

LabJariIndoorStorage_Eventscript_Intern_Cave_Text_0:
# 17 "data/maps/LabJariIndoorStorage/scripts.pory"
	.string "Uhm... I'm just an intern... just putting\n"
	.string "up this big poster of this beautifull\l"
	.string "rock formation.... A hole in the wall???\l"
	.string "Not sure what you are talking about?\l"
	.string "Nothing to see here...$"

LabJariIndoorStorage_Eventscript_Intern_Cave_Text_1:
# 21 "data/maps/LabJariIndoorStorage/scripts.pory"
	.string "Like I said, nothing to see here..... just\n"
	.string "a regular rock wall... with a few dents\l"
	.string "here and there...$"

LabJariIndoorStorage_Eventscript_BoxesAssignment_Text_0:
# 28 "data/maps/LabJariIndoorStorage/scripts.pory"
	.string "Hmm.... those boxes should be here\n"
	.string "somewhere...\p"
	.string "Better not return empty handed...$"
