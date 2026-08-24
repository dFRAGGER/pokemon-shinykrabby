CaveCorridor_MapScripts::
	.byte 0


CaveCorridor_Eventscript::
	lock
	msgbox CaveCorridor_Eventscript_Text_0
	waitmessage
	applymovement LOCALID_PLAYER, CaveCorridor_Eventscript_Movement_0
	waitmovement
	release
	return


CaveCorridor_Eventscript_Movement_0:
	walk_up
	step_end

CaveCorridor_Eventscript_Text_0:
	.string "What the hell is this place...\p"
	.string "Where are those boxes...\n"
	.string "They should be here somewhere...$"
