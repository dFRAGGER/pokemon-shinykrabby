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


LabJariIndoorStorage_Sign_1::
# 36 "data/maps/LabJariIndoorStorage/scripts.pory"
	lock
# 37 "data/maps/LabJariIndoorStorage/scripts.pory"
	msgbox LabJariIndoorStorage_Sign_1_Text_0
# 38 "data/maps/LabJariIndoorStorage/scripts.pory"
	waitmessage
# 39 "data/maps/LabJariIndoorStorage/scripts.pory"
	release
	return


LabJariIndoorStorage_Sign_2::
# 43 "data/maps/LabJariIndoorStorage/scripts.pory"
	lock
# 44 "data/maps/LabJariIndoorStorage/scripts.pory"
	msgbox LabJariIndoorStorage_Sign_2_Text_0
# 45 "data/maps/LabJariIndoorStorage/scripts.pory"
	waitmessage
# 46 "data/maps/LabJariIndoorStorage/scripts.pory"
	release
	return


LabJariIndoorStorage_Sign_3::
# 50 "data/maps/LabJariIndoorStorage/scripts.pory"
	lock
# 51 "data/maps/LabJariIndoorStorage/scripts.pory"
	msgbox LabJariIndoorStorage_Sign_3_Text_0
# 52 "data/maps/LabJariIndoorStorage/scripts.pory"
	waitmessage
# 53 "data/maps/LabJariIndoorStorage/scripts.pory"
	release
	return


LabJariIndoorStorage_Sign_4::
# 57 "data/maps/LabJariIndoorStorage/scripts.pory"
	lock
# 58 "data/maps/LabJariIndoorStorage/scripts.pory"
	msgbox LabJariIndoorStorage_Sign_4_Text_0
# 59 "data/maps/LabJariIndoorStorage/scripts.pory"
	waitmessage
# 60 "data/maps/LabJariIndoorStorage/scripts.pory"
	release
	return


LabJariIndoorStorage_Sign_5::
# 64 "data/maps/LabJariIndoorStorage/scripts.pory"
	lock
# 65 "data/maps/LabJariIndoorStorage/scripts.pory"
	msgbox LabJariIndoorStorage_Sign_5_Text_0
# 66 "data/maps/LabJariIndoorStorage/scripts.pory"
	waitmessage
# 67 "data/maps/LabJariIndoorStorage/scripts.pory"
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
	.string "{COLOR RED}Young intern: {COLOR DARK_GRAY}Uhm... I'm just an intern...\n"
	.string "just putting up this big poster of this\l"
	.string "beautifull rock formation.... A hole in\l"
	.string "the wall??? Not sure what you are\l"
	.string "talking about? Nothing to see here...$"

LabJariIndoorStorage_Eventscript_Intern_Cave_Text_1:
# 21 "data/maps/LabJariIndoorStorage/scripts.pory"
	.string "{COLOR RED}Young intern: {COLOR DARK_GRAY}Like I said, nothing to\n"
	.string "see here..... just a regular rock wall...\l"
	.string "with a few dents here and there...$"

LabJariIndoorStorage_Eventscript_BoxesAssignment_Text_0:
# 28 "data/maps/LabJariIndoorStorage/scripts.pory"
	.string "Hmm.... those boxes should be here\n"
	.string "somewhere...\p"
	.string "Better not return empty handed...$"

LabJariIndoorStorage_Sign_1_Text_0:
# 37 "data/maps/LabJariIndoorStorage/scripts.pory"
	.string "These appear to be notes detailing a\n"
	.string "major construction project for an\l"
	.string "underground facility beneath a\l"
	.string "mountain.$"

LabJariIndoorStorage_Sign_2_Text_0:
# 44 "data/maps/LabJariIndoorStorage/scripts.pory"
	.string "A server whose cooling fans are\n"
	.string "spinning rapidly.$"

LabJariIndoorStorage_Sign_3_Text_0:
# 51 "data/maps/LabJariIndoorStorage/scripts.pory"
	.string "This coffee is so old it appears to have\n"
	.string "polymerized into a solid mass.$"

LabJariIndoorStorage_Sign_4_Text_0:
# 58 "data/maps/LabJariIndoorStorage/scripts.pory"
	.string "--FACILITY SERVER: DEBUG LOG--\p"
	.string "PROJECT OMEGA: CURRENT STATUS: PHASE\n"
	.string "3 CONSTRUCTION.\n"
	.string "LOCATION: SUBTERRANEAN, MOUNT BASE\l"
	.string "COMPLEX.\p"
	.string "GEOLOGIC REPORT: DRILLING OPERATIONS\n"
	.string "proceeding close to SAFE TOLERANCES.\l"
	.string "We have excavated the full footprint\l"
	.string "for the Rare Starter Pokemon Facility\l"
	.string "and the Advanced Research Wing.\p"
	.string "CORE DIRECTIVE: Maintain absolute\n"
	.string "SIGNAL SILENCE. The government must\l"
	.string "not be aware of the scope of this\l"
	.string "project.\p"
	.string "SYSTEM ALERT: POWER CONSUMPTION for\n"
	.string "SUB-LEVEL 5 COOLING is CRITICAL.\l"
	.string "Authorized CPU MINING seems to drain\l"
	.string "the power in AUXILIARY LABS.\p"
	.string "--PRESS A TO VIEW SCHEMATICS--$"

LabJariIndoorStorage_Sign_5_Text_0:
# 65 "data/maps/LabJariIndoorStorage/scripts.pory"
	.string "Shelves with books about underground\n"
	.string "construction.$"
