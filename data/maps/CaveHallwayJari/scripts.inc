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
	msgbox CaveHallwayJari_Mapscripts2_Text_0
# 18 "data/maps/CaveHallwayJari/scripts.pory"
	waitmessage
# 19 "data/maps/CaveHallwayJari/scripts.pory"
	applymovement LOCALID_PLAYER, CaveHallwayJari_Mapscripts2_Movement_0
# 20 "data/maps/CaveHallwayJari/scripts.pory"
	waitmovement
# 21 "data/maps/CaveHallwayJari/scripts.pory"
	release
	return


CaveHallwayJari_PlexServer::
# 25 "data/maps/CaveHallwayJari/scripts.pory"
	lock
# 26 "data/maps/CaveHallwayJari/scripts.pory"
	msgbox CaveHallwayJari_PlexServer_Text_0
# 27 "data/maps/CaveHallwayJari/scripts.pory"
	waitmessage
# 28 "data/maps/CaveHallwayJari/scripts.pory"
	release
	return


CaveHallway_Jari_LaptopScreen::
# 32 "data/maps/CaveHallwayJari/scripts.pory"
	lock
# 33 "data/maps/CaveHallwayJari/scripts.pory"
	msgbox CaveHallway_Jari_LaptopScreen_Text_0
# 34 "data/maps/CaveHallwayJari/scripts.pory"
	waitmessage
# 35 "data/maps/CaveHallwayJari/scripts.pory"
	release
	return


# 10 "data/maps/CaveHallwayJari/scripts.pory"
CaveHallwayJari_Mapscripts1_Movement_0:
# 10 "data/maps/CaveHallwayJari/scripts.pory"
	walk_up
	step_end

# 19 "data/maps/CaveHallwayJari/scripts.pory"
CaveHallwayJari_Mapscripts2_Movement_0:
# 19 "data/maps/CaveHallwayJari/scripts.pory"
	walk_down
	step_end

CaveHallwayJari_Mapscripts1_Text_0:
# 8 "data/maps/CaveHallwayJari/scripts.pory"
	.string "There seems to be a light coming out of\n"
	.string "that staircase up there...\p"
	.string "Maybe the boxes are over there?$"

CaveHallwayJari_Mapscripts2_Text_0:
# 17 "data/maps/CaveHallwayJari/scripts.pory"
	.string "This place is so weird...\p"
	.string "What is all this stuff?$"

CaveHallwayJari_PlexServer_Text_0:
# 26 "data/maps/CaveHallwayJari/scripts.pory"
	.string "This seems to be giant computer server,\n"
	.string "on the screen it says:\p"
	.string "'PLEX SERVER RUNNING: BITCOIN MINING\n"
	.string "THROUGH STREAMING IN FULL FORCE'$"

CaveHallway_Jari_LaptopScreen_Text_0:
# 33 "data/maps/CaveHallwayJari/scripts.pory"
	.string "The screen shows a rotating\n"
	.string "double-helix DNA.\p"
	.string "A text window is open on the side:\p"
	.string "LOG ENTRY 734.\n"
	.string "RESEARCHER: J. BIRDS.\p"
	.string "PROJECT: ANCESTOR\p"
	.string "'The regional genomic data is still too\n"
	.string "fragmented. Every sample analyzed\l"
	.string "shows incredible diversity, but the\l"
	.string "point of convergence... the 'source\l"
	.string "code'... remains elusive. It's like trying\l"
	.string "to rebuild a tree by looking at a million\l"
	.string "different leaves.'\p"
	.string "'All evidence continues to point to the\n"
	.string "theoretical progenitor:\n"
	.string "Genesis Specimen M.\p"
	.string "Its genetic signature is everywhere,\n"
	.string "yet nowhere at once. An echo in every\l"
	.string "strand of DNA I analyze.'\p"
	.string "'Direct observation is impossible.\n"
	.string "Triangulation is the only path forward.\l"
	.string "The new field scanner prototype is\l"
	.string "ready. I just need an agent to deploy\l"
	.string "it... someone mobile, persistent, and\l"
	.string "unaware of the true scope of this\l"
	.string "project. The final calculations depend\l"
	.string "on it.'$"
