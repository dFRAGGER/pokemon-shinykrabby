EastLionMountain_Faculty_Mining_Cave_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EastLionMountain_Faculty_Mining_Cave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EastLionMountain_Faculty_Mining_Cave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_MINING_CAVE_STATE, 1, MiningCave_WakeUp
	.2byte 0


MiningCave_WakeUp::
	lock
	setvar VAR_MINING_CAVE_STATE, 2
	delay 60
	msgbox MiningCave_WakeUp_Text_0, MSGBOX_DEFAULT
	msgbox MiningCave_WakeUp_Text_1, MSGBOX_DEFAULT
	msgbox MiningCave_WakeUp_Text_2, MSGBOX_DEFAULT
	msgbox MiningCave_WakeUp_Text_3, MSGBOX_DEFAULT
	waitmessage
	release
	end


MiningCave_WakeUp_Text_0:
	.string "...Ugh.$"

MiningCave_WakeUp_Text_1:
	.string "Where am I...\p"
	.string "Everything's pitch black.\p"
	.string "My head is pounding.$"

MiningCave_WakeUp_Text_2:
	.string "...Wait.\p"
	.string "The crevice. BARRY pushed me in.$"

MiningCave_WakeUp_Text_3:
	.string "He's heading to Lionsarch...\p"
	.string "the Steel Factory.\p"
	.string "I have to get out of here.$"
