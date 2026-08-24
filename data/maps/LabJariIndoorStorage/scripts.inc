LabJariIndoorStorage_MapScripts::
	.byte 0


LabJariIndoorStorage_Eventscript_Intern_Cave::
	lockall
	compare VAR_TEMP_0, 0
	goto_if_eq LabJariIndoorStorage_Eventscript_Intern_Cave_2
	msgbox LabJariIndoorStorage_Eventscript_Intern_Cave_Text_1
LabJariIndoorStorage_Eventscript_Intern_Cave_1:
	releaseall
	return

LabJariIndoorStorage_Eventscript_Intern_Cave_2:
	playse SE_PIN
	applymovement 1, LabJariIndoorStorage_Eventscript_Intern_Cave_Movement_0
	waitmovement
	msgbox LabJariIndoorStorage_Eventscript_Intern_Cave_Text_0
	waitmessage
	setvar VAR_TEMP_0, 1
	goto LabJariIndoorStorage_Eventscript_Intern_Cave_1


LabJariIndoorStorage_Eventscript_BoxesAssignment::
	lock
	msgbox LabJariIndoorStorage_Eventscript_BoxesAssignment_Text_0
	waitmessage
	applymovement LOCALID_PLAYER, LabJariIndoorStorage_Eventscript_BoxesAssignment_Movement_0
	waitmovement
	release
	return


LabJariIndoorStorage_Sign_1::
	lock
	msgbox LabJariIndoorStorage_Sign_1_Text_0
	waitmessage
	release
	return


LabJariIndoorStorage_Sign_2::
	lock
	msgbox LabJariIndoorStorage_Sign_2_Text_0
	waitmessage
	release
	return


LabJariIndoorStorage_Sign_3::
	lock
	msgbox LabJariIndoorStorage_Sign_3_Text_0
	waitmessage
	release
	return


LabJariIndoorStorage_Sign_4::
	lock
	msgbox LabJariIndoorStorage_Sign_4_Text_0
	waitmessage
	release
	return


LabJariIndoorStorage_Sign_5::
	lock
	msgbox LabJariIndoorStorage_Sign_5_Text_0
	waitmessage
	release
	return


LabJariIndoorStorage_Eventscript_Intern_Cave_Movement_0:
	reveal_trainer
	emote_exclamation_mark
	jump_in_place_down
	step_end

LabJariIndoorStorage_Eventscript_BoxesAssignment_Movement_0:
	walk_up
	step_end

LabJariIndoorStorage_Eventscript_Intern_Cave_Text_0:
	.string "Uhm...\p"
	.string "I'm just an intern...\p"
	.string "...just putting up this big poster of\n"
	.string "this beautifull rock formation....\p"
	.string "A hole in the wall???\p"
	.string "Not sure what you are talking about?\p"
	.string "Nothing to see here...$"

LabJariIndoorStorage_Eventscript_Intern_Cave_Text_1:
	.string "Like I said, nothing to see here.....\p"
	.string "...just a regular rock wall...\p"
	.string "...with a few dents here and there...$"

LabJariIndoorStorage_Eventscript_BoxesAssignment_Text_0:
	.string "Hmm.... those boxes should be here\n"
	.string "somewhere...\p"
	.string "Better not return empty handed...$"

LabJariIndoorStorage_Sign_1_Text_0:
	.string "These appear to be notes detailing a\n"
	.string "major construction project for an\l"
	.string "underground facility beneath a\l"
	.string "mountain.$"

LabJariIndoorStorage_Sign_2_Text_0:
	.string "A server whose cooling fans are\n"
	.string "spinning rapidly.$"

LabJariIndoorStorage_Sign_3_Text_0:
	.string "This coffee is so old it appears to have\n"
	.string "polymerized into a solid mass.$"

LabJariIndoorStorage_Sign_4_Text_0:
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
	.string "Shelves with books about underground\n"
	.string "construction.$"
