EastLionMountain_Faculty_Mining_Cave_MapScripts::
# 2 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EastLionMountain_Faculty_Mining_Cave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EastLionMountain_Faculty_Mining_Cave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	map_script_2 VAR_MINING_CAVE_STATE, 1, MiningCave_WakeUp
	.2byte 0


MiningCave_WakeUp::
# 8 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	lock
# 9 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	setvar VAR_MINING_CAVE_STATE, 2
# 10 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	delay 60
# 11 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	msgbox MiningCave_WakeUp_Text_0, MSGBOX_DEFAULT
# 12 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	msgbox MiningCave_WakeUp_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	msgbox MiningCave_WakeUp_Text_2, MSGBOX_DEFAULT
# 14 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	msgbox MiningCave_WakeUp_Text_3, MSGBOX_DEFAULT
# 15 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	waitmessage
# 16 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	release
	end


MiningCave_WakeUp_Text_0:
# 11 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	.string "...Ugh.$"

MiningCave_WakeUp_Text_1:
# 12 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	.string "Where am I...\p"
	.string "Everything's pitch black.\p"
	.string "My head is pounding.$"

MiningCave_WakeUp_Text_2:
# 13 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	.string "...Wait.\p"
	.string "The crevice. Barry pushed me in.$"

MiningCave_WakeUp_Text_3:
# 14 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	.string "He's heading to Lionsarch...\p"
	.string "the Steel Factory.\p"
	.string "I have to get out of here.$"
