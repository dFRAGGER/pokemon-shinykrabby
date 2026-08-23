CaveHallwayJari_MapScripts::
	.byte 0


CaveHallwayJari_Mapscripts1::
# 7 "data/maps/CaveHallwayJari/scripts.pory"
	lock
# 8 "data/maps/CaveHallwayJari/scripts.pory"
	msgbox CaveHallwayJari_Mapscripts1_Text_0
# 9 "data/maps/CaveHallwayJari/scripts.pory"
	waitmessage
# 10 "data/maps/CaveHallwayJari/scripts.pory"
	applymovement LOCALID_PLAYER, CaveHallwayJari_Mapscripts1_Movement_0
# 11 "data/maps/CaveHallwayJari/scripts.pory"
	waitmovement
# 12 "data/maps/CaveHallwayJari/scripts.pory"
	release
	return


CaveHallwayJari_Mapscripts2::
# 16 "data/maps/CaveHallwayJari/scripts.pory"
	lock
# 17 "data/maps/CaveHallwayJari/scripts.pory"
	setvar VAR_TEMP_0, 1
# 18 "data/maps/CaveHallwayJari/scripts.pory"
	msgbox CaveHallwayJari_Mapscripts2_Text_0
# 19 "data/maps/CaveHallwayJari/scripts.pory"
	waitmessage
# 20 "data/maps/CaveHallwayJari/scripts.pory"
	release
	return


CaveHallwayJari_Mapscript3::
# 24 "data/maps/CaveHallwayJari/scripts.pory"
	lock
# 25 "data/maps/CaveHallwayJari/scripts.pory"
	msgbox CaveHallwayJari_Mapscript3_Text_0
# 26 "data/maps/CaveHallwayJari/scripts.pory"
	waitmessage
# 27 "data/maps/CaveHallwayJari/scripts.pory"
	applymovement LOCALID_PLAYER, CaveHallwayJari_Mapscript3_Movement_0
# 28 "data/maps/CaveHallwayJari/scripts.pory"
	waitmovement
# 29 "data/maps/CaveHallwayJari/scripts.pory"
	release
	return


CaveHallwayJari_PlexServer::
# 33 "data/maps/CaveHallwayJari/scripts.pory"
	lock
# 34 "data/maps/CaveHallwayJari/scripts.pory"
	msgbox CaveHallwayJari_PlexServer_Text_0
# 35 "data/maps/CaveHallwayJari/scripts.pory"
	waitmessage
# 36 "data/maps/CaveHallwayJari/scripts.pory"
	release
	return


CaveHallway_Jari_LaptopScreen::
# 40 "data/maps/CaveHallwayJari/scripts.pory"
	lock
# 41 "data/maps/CaveHallwayJari/scripts.pory"
	msgbox CaveHallway_Jari_LaptopScreen_Text_0
# 42 "data/maps/CaveHallwayJari/scripts.pory"
	waitmessage
# 43 "data/maps/CaveHallwayJari/scripts.pory"
	release
	return


# 10 "data/maps/CaveHallwayJari/scripts.pory"
CaveHallwayJari_Mapscripts1_Movement_0:
# 10 "data/maps/CaveHallwayJari/scripts.pory"
	walk_up
	step_end

# 27 "data/maps/CaveHallwayJari/scripts.pory"
CaveHallwayJari_Mapscript3_Movement_0:
# 27 "data/maps/CaveHallwayJari/scripts.pory"
	walk_down
	step_end

CaveHallwayJari_Mapscripts1_Text_0:
# 8 "data/maps/CaveHallwayJari/scripts.pory"
	.string "There seems to be a light coming out of\n"
	.string "that staircase up there...\p"
	.string "Maybe the boxes are over there?$"

CaveHallwayJari_Mapscripts2_Text_0:
# 18 "data/maps/CaveHallwayJari/scripts.pory"
	.string "This place is so weird...\p"
	.string "What is all this stuff?$"

CaveHallwayJari_Mapscript3_Text_0:
# 25 "data/maps/CaveHallwayJari/scripts.pory"
	.string "Those boxes...\p"
	.string "If I return empty handed Professor\n"
	.string "Birds will scold me...$"

CaveHallwayJari_PlexServer_Text_0:
# 34 "data/maps/CaveHallwayJari/scripts.pory"
	.string "This seems to be giant computer server,\n"
	.string "on the screen it says:\p"
	.string "'PLEX SERVER RUNNING: BITCOIN MINING\n"
	.string "THROUGH STREAMING IN FULL FORCE'$"

CaveHallway_Jari_LaptopScreen_Text_0:
# 41 "data/maps/CaveHallwayJari/scripts.pory"
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
