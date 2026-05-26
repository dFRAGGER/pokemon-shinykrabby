LabJariIndoorStorage_MapScripts::
	.byte 0


LabJariIndoorStorage_Eventscript_Intern_Cave::
# 5 "data/maps/LabJariIndoorStorage/scripts.pory"
	lockall
# 6 "data/maps/LabJariIndoorStorage/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq LabJariIndoorStorage_Eventscript_Intern_Cave_2
# 14 "data/maps/LabJariIndoorStorage/scripts.pory"
	msgbox LabJariIndoorStorage_Eventscript_Intern_Cave_Text_1
LabJariIndoorStorage_Eventscript_Intern_Cave_1:
# 16 "data/maps/LabJariIndoorStorage/scripts.pory"
	releaseall
	return

LabJariIndoorStorage_Eventscript_Intern_Cave_2:
# 7 "data/maps/LabJariIndoorStorage/scripts.pory"
	playse SE_PIN
# 8 "data/maps/LabJariIndoorStorage/scripts.pory"
	applymovement 1, LabJariIndoorStorage_Eventscript_Intern_Cave_Movement_0
# 9 "data/maps/LabJariIndoorStorage/scripts.pory"
	waitmovement
# 10 "data/maps/LabJariIndoorStorage/scripts.pory"
	msgbox LabJariIndoorStorage_Eventscript_Intern_Cave_Text_0
# 11 "data/maps/LabJariIndoorStorage/scripts.pory"
	waitmessage
# 12 "data/maps/LabJariIndoorStorage/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto LabJariIndoorStorage_Eventscript_Intern_Cave_1


LabJariIndoorStorage_Eventscript_BoxesAssignment::
# 20 "data/maps/LabJariIndoorStorage/scripts.pory"
	lock
# 21 "data/maps/LabJariIndoorStorage/scripts.pory"
	msgbox LabJariIndoorStorage_Eventscript_BoxesAssignment_Text_0
# 22 "data/maps/LabJariIndoorStorage/scripts.pory"
	waitmessage
# 23 "data/maps/LabJariIndoorStorage/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoorStorage_Eventscript_BoxesAssignment_Movement_0
# 24 "data/maps/LabJariIndoorStorage/scripts.pory"
	waitmovement
# 25 "data/maps/LabJariIndoorStorage/scripts.pory"
	release
	return


LabJariIndoorStorage_Sign_1::
# 29 "data/maps/LabJariIndoorStorage/scripts.pory"
	lock
# 30 "data/maps/LabJariIndoorStorage/scripts.pory"
	msgbox LabJariIndoorStorage_Sign_1_Text_0
# 31 "data/maps/LabJariIndoorStorage/scripts.pory"
	waitmessage
# 32 "data/maps/LabJariIndoorStorage/scripts.pory"
	release
	return


LabJariIndoorStorage_Sign_2::
# 36 "data/maps/LabJariIndoorStorage/scripts.pory"
	lock
# 37 "data/maps/LabJariIndoorStorage/scripts.pory"
	msgbox LabJariIndoorStorage_Sign_2_Text_0
# 38 "data/maps/LabJariIndoorStorage/scripts.pory"
	waitmessage
# 39 "data/maps/LabJariIndoorStorage/scripts.pory"
	release
	return


LabJariIndoorStorage_Sign_3::
# 43 "data/maps/LabJariIndoorStorage/scripts.pory"
	lock
# 44 "data/maps/LabJariIndoorStorage/scripts.pory"
	msgbox LabJariIndoorStorage_Sign_3_Text_0
# 45 "data/maps/LabJariIndoorStorage/scripts.pory"
	waitmessage
# 46 "data/maps/LabJariIndoorStorage/scripts.pory"
	release
	return


LabJariIndoorStorage_Sign_4::
# 50 "data/maps/LabJariIndoorStorage/scripts.pory"
	lock
# 51 "data/maps/LabJariIndoorStorage/scripts.pory"
	msgbox LabJariIndoorStorage_Sign_4_Text_0
# 52 "data/maps/LabJariIndoorStorage/scripts.pory"
	waitmessage
# 53 "data/maps/LabJariIndoorStorage/scripts.pory"
	release
	return


LabJariIndoorStorage_Sign_5::
# 57 "data/maps/LabJariIndoorStorage/scripts.pory"
	lock
# 58 "data/maps/LabJariIndoorStorage/scripts.pory"
	msgbox LabJariIndoorStorage_Sign_5_Text_0
# 59 "data/maps/LabJariIndoorStorage/scripts.pory"
	waitmessage
# 60 "data/maps/LabJariIndoorStorage/scripts.pory"
	release
	return


# 8 "data/maps/LabJariIndoorStorage/scripts.pory"
LabJariIndoorStorage_Eventscript_Intern_Cave_Movement_0:
# 8 "data/maps/LabJariIndoorStorage/scripts.pory"
	reveal_trainer
# 8 "data/maps/LabJariIndoorStorage/scripts.pory"
	emote_exclamation_mark
# 8 "data/maps/LabJariIndoorStorage/scripts.pory"
	jump_in_place_down
	step_end

# 23 "data/maps/LabJariIndoorStorage/scripts.pory"
LabJariIndoorStorage_Eventscript_BoxesAssignment_Movement_0:
# 23 "data/maps/LabJariIndoorStorage/scripts.pory"
	walk_up
	step_end

LabJariIndoorStorage_Eventscript_Intern_Cave_Text_0:
# 10 "data/maps/LabJariIndoorStorage/scripts.pory"
	.string "Uhm...\p"
	.string "I'm just an intern...\p"
	.string "...just putting up this big poster of\n"
	.string "this beautifull rock formation....\p"
	.string "A hole in the wall???\p"
	.string "Not sure what you are talking about?\p"
	.string "Nothing to see here...$"

LabJariIndoorStorage_Eventscript_Intern_Cave_Text_1:
# 14 "data/maps/LabJariIndoorStorage/scripts.pory"
	.string "Like I said, nothing to see here.....\p"
	.string "...just a regular rock wall...\p"
	.string "...with a few dents here and there...$"

LabJariIndoorStorage_Eventscript_BoxesAssignment_Text_0:
# 21 "data/maps/LabJariIndoorStorage/scripts.pory"
	.string "Hmm.... those boxes should be here\n"
	.string "somewhere...\p"
	.string "Better not return empty handed...$"

LabJariIndoorStorage_Sign_1_Text_0:
# 30 "data/maps/LabJariIndoorStorage/scripts.pory"
	.string "These appear to be notes detailing a\n"
	.string "major construction project for an\l"
	.string "underground facility beneath a\l"
	.string "mountain.$"

LabJariIndoorStorage_Sign_2_Text_0:
# 37 "data/maps/LabJariIndoorStorage/scripts.pory"
	.string "A server whose cooling fans are\n"
	.string "spinning rapidly.$"

LabJariIndoorStorage_Sign_3_Text_0:
# 44 "data/maps/LabJariIndoorStorage/scripts.pory"
	.string "This coffee is so old it appears to have\n"
	.string "polymerized into a solid mass.$"

LabJariIndoorStorage_Sign_4_Text_0:
# 51 "data/maps/LabJariIndoorStorage/scripts.pory"
	.string "--FACILITY SERVER: DEBUG LOG--\p"
	.string "PROJECT OMEGA:\n"
	.string "CURRENT STATUS: PHASE 3 CONSTRUCTION.\p"
	.string "LOCATION:\n"
	.string "SUBTERRANEAN, MOUNT BASE COMPLEX.\p"
	.string "GEOLOGIC REPORT:\n"
	.string "DRILLING OPERATIONS proceeding close\l"
	.string "to SAFE TOLERANCES. We have excavated\l"
	.string "the full footprint for the Rare Starter\l"
	.string "Pokemon Facility and the Advanced\l"
	.string "Research Wing.\p"
	.string "CORE DIRECTIVE:\n"
	.string "Maintain absolute SIGNAL SILENCE. The\l"
	.string "government must not be aware of the\l"
	.string "scope of this project.\p"
	.string "SYSTEM ALERT:\n"
	.string "POWER CONSUMPTION for SUB-LEVEL 5\l"
	.string "COOLING is CRITICAL. Authorized CPU\l"
	.string "MINING seems to drain the power in\l"
	.string "AUXILIARY LABS.\p"
	.string "--PRESS A TO VIEW SCHEMATICS--$"

LabJariIndoorStorage_Sign_5_Text_0:
# 58 "data/maps/LabJariIndoorStorage/scripts.pory"
	.string "Shelves with books about underground\n"
	.string "construction.$"
