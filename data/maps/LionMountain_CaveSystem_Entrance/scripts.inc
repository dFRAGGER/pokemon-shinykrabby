LionMountain_CaveSystem_Entrance_MapScripts::
	.byte 0


LionMountain_CaveSystem_Entrance_Hiker_Convo::
# 4 "data/maps/LionMountain_CaveSystem_Entrance/scripts.pory"
	lock
# 5 "data/maps/LionMountain_CaveSystem_Entrance/scripts.pory"
	faceplayer
# 6 "data/maps/LionMountain_CaveSystem_Entrance/scripts.pory"
	msgbox LionMountain_CaveSystem_Entrance_Hiker_Convo_Text_0, MSGBOX_AUTOCLOSE
# 7 "data/maps/LionMountain_CaveSystem_Entrance/scripts.pory"
	release
	end


LionMountain_CaveSystem_Entrance_Hiker_Convo_Text_0:
# 6 "data/maps/LionMountain_CaveSystem_Entrance/scripts.pory"
	.string "I've hiked caves all across the Terassa\n"
	.string "region, but this place... it's different.\p"
	.string "The air itself feels ancient.\p"
	.string "You can sense it in the walls, the\n"
	.string "silence, the cold.$"
