ErpusCity_StartHouse_2F_MapScripts::
# 2 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ErpusCity_StartHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ErpusCity_StartHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	map_script_2 VAR_STARTHOUSE_ERP_CITY, 0, ErpCity_Starthouse1F_Mom_Calling
	.2byte 0


ErpCity_Starthouse1F_Mom_Calling::
# 8 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	lock
# 9 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	setvar VAR_STARTHOUSE_ERP_CITY, 1
# 10 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	playse SE_PIN
# 11 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Starthouse1F_Mom_Calling_Movement_0
# 12 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	waitmovement
# 13 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	setspeaker ErpCity_Starthouse1F_Mom_Calling_Text_0
# 14 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	msgbox ErpCity_Starthouse1F_Mom_Calling_Text_1
# 15 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	waitmessage
# 16 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	release
	end


ErpCity_Starthouse1F_Mom_Clock::
# 22 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	goto_if_unset FLAG_SET_WALL_CLOCK, ErpCity_Starthouse1F_Mom_Clock_1
	end

ErpCity_Starthouse1F_Mom_Clock_1:
# 23 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	lock
# 24 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	setspeaker ErpCity_Starthouse1F_Mom_Calling_Text_0
# 25 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	msgbox ErpCity_Starthouse1F_Mom_Clock_Text_0
# 26 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	waitmessage
# 27 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Starthouse1F_Mom_Clock_Movement_0
# 28 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	waitmovement
# 29 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	release
	end


# 11 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
ErpCity_Starthouse1F_Mom_Calling_Movement_0:
# 11 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	emote_exclamation_mark
	step_end

# 27 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
ErpCity_Starthouse1F_Mom_Clock_Movement_0:
# 27 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	walk_left
	step_end

ErpCity_Starthouse1F_Mom_Calling_Text_0:
# 13 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	.string "Mom$"

ErpCity_Starthouse1F_Mom_Calling_Text_1:
# 14 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	.string "HONEY!!\p"
	.string "WAKE UP!!\p"
	.string "YOU'RE LATE!!$"

ErpCity_Starthouse1F_Mom_Clock_Text_0:
# 25 "data/maps/ErpusCity_StartHouse_2F/scripts.pory"
	.string "OH, AND DON'T FORGET YOUR CLOCK!\p"
	.string "OTHERWISE YOU WILL BE LATE AGAIN\n"
	.string "TOMORROW!!$"
