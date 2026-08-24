CaveHallwayJari_MapScripts::
	.byte 0


CaveHallwayJari_Mapscripts1::
	lock
	msgbox CaveHallwayJari_Mapscripts1_Text_0
	waitmessage
	applymovement LOCALID_PLAYER, CaveHallwayJari_Mapscripts1_Movement_0
	waitmovement
	release
	return


CaveHallwayJari_Mapscripts2::
	lock
	setvar VAR_TEMP_0, 1
	msgbox CaveHallwayJari_Mapscripts2_Text_0
	waitmessage
	release
	return


CaveHallwayJari_Mapscript3::
	lock
	msgbox CaveHallwayJari_Mapscript3_Text_0
	waitmessage
	applymovement LOCALID_PLAYER, CaveHallwayJari_Mapscript3_Movement_0
	waitmovement
	release
	return


CaveHallwayJari_PlexServer::
	lock
	msgbox CaveHallwayJari_PlexServer_Text_0
	waitmessage
	release
	return


CaveHallway_Jari_LaptopScreen::
	lock
	msgbox CaveHallway_Jari_LaptopScreen_Text_0
	waitmessage
	release
	return


CaveHallwayJari_Mapscripts1_Movement_0:
	walk_up
	step_end

CaveHallwayJari_Mapscript3_Movement_0:
	walk_down
	step_end

CaveHallwayJari_Mapscripts1_Text_0:
	.string "There seems to be a light coming out of\n"
	.string "that staircase up there...\p"
	.string "Maybe the boxes are over there?$"

CaveHallwayJari_Mapscripts2_Text_0:
	.string "This place is so weird...\p"
	.string "What is all this stuff?$"

CaveHallwayJari_Mapscript3_Text_0:
	.string "Those boxes...\p"
	.string "If I return empty handed Professor\n"
	.string "Birds will scold me...$"

CaveHallwayJari_PlexServer_Text_0:
	.string "This seems to be giant computer server,\n"
	.string "on the screen it says:\p"
	.string "'PLEX SERVER RUNNING: BITCOIN MINING\n"
	.string "THROUGH STREAMING IN FULL FORCE'$"

CaveHallway_Jari_LaptopScreen_Text_0:
	.string "The screen shows a rotating\n"
	.string "double-helix DNA.\p"
	.string "A text window is open on the side:\p"
	.string "LOG ENTRY 734.\n"
	.string "RESEARCHER: J. BIRDS.\p"
	.string "PROJECT: ANCESTOR\p"
	.string "'The regional genomic data is still too\n"
	.string "fragmented.'\p"
	.string "'Every sample analyzed shows incredible\n"
	.string "diversity, but the point of\l"
	.string "convergence... the 'source code'...\l"
	.string "remains elusive.'\p"
	.string "'It's like trying to rebuild a tree by\n"
	.string "looking at a million different leaves.'\p"
	.string "'All evidence continues to point to a\n"
	.string "theoretical progenitor, Genesis\l"
	.string "Specimen.'\p"
	.string "'Its genetic signature is everywhere,\n"
	.string "yet nowhere at once. An echo in every\l"
	.string "strand of DNA I analyze.'\p"
	.string "'Direct observation is impossible.\n"
	.string "Triangulation is the only path forward.'\p"
	.string "'The new field scanner prototype is\n"
	.string "ready, I just need an agent to deploy\l"
	.string "it... someone mobile, persistent, and\l"
	.string "unaware of the true scope of this\l"
	.string "project.'\p"
	.string "'The final calculations depend on it.'$"
