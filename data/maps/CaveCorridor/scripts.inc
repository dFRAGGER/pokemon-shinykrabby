CaveCorridor_MapScripts::
	.byte 0


CaveCorridor_Eventscript::
# 6 "data/maps/CaveCorridor/scripts.pory"
	lock
# 7 "data/maps/CaveCorridor/scripts.pory"
	msgbox CaveCorridor_Eventscript_Text_0
# 8 "data/maps/CaveCorridor/scripts.pory"
	waitmessage
# 9 "data/maps/CaveCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, CaveCorridor_Eventscript_Movement_0
# 10 "data/maps/CaveCorridor/scripts.pory"
	waitmovement
# 11 "data/maps/CaveCorridor/scripts.pory"
	release
	return


# 9 "data/maps/CaveCorridor/scripts.pory"
CaveCorridor_Eventscript_Movement_0:
# 9 "data/maps/CaveCorridor/scripts.pory"
	walk_up
	step_end

CaveCorridor_Eventscript_Text_0:
# 7 "data/maps/CaveCorridor/scripts.pory"
	.string "What the hell is this place...\p"
	.string "Where are those boxes...\n"
	.string "They should be here somewhere...$"
