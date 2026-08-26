ErpusCity_StartHouse_2F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ErpusCity_StartHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ErpusCity_StartHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_STARTHOUSE_ERP_CITY, 0, ErpCity_Starthouse1F_Mom_Calling
	.2byte 0


ErpCity_Starthouse1F_Mom_Calling::
	lock
	setvar VAR_STARTHOUSE_ERP_CITY, 1
	playse SE_PIN
	applymovement LOCALID_PLAYER, ErpCity_Starthouse1F_Mom_Calling_Movement_0
	waitmovement
	setspeaker ErpCity_Starthouse1F_Mom_Calling_Text_0
	msgbox ErpCity_Starthouse1F_Mom_Calling_Text_1
	waitmessage
	call Start_FLAGS_Reset
	release
	end


Start_FLAGS_Reset::
	setflag FLAG_HIDE_SCOTT_OUTSIDE_BOAT
	return


ErpCity_Starthouse1F_Mom_Clock::
	goto_if_unset FLAG_SET_WALL_CLOCK, ErpCity_Starthouse1F_Mom_Clock_1
	end

ErpCity_Starthouse1F_Mom_Clock_1:
	lock
	setspeaker ErpCity_Starthouse1F_Mom_Calling_Text_0
	msgbox ErpCity_Starthouse1F_Mom_Clock_Text_0
	waitmessage
	applymovement LOCALID_PLAYER, ErpCity_Starthouse1F_Mom_Clock_Movement_0
	waitmovement
	release
	end


ErpusCity_StartHouse_2F_EventScript_PC::
	lockall
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
	special BedroomPC
	waitstate
	releaseall
	end


ErpusCity_StartHouse_2F_EventScript_TurnOffPlayerPC::
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
	playse SE_PC_OFF
	special DoPCTurnOffEffect
	releaseall
	end


ErpCity_Starthouse1F_Mom_Calling_Movement_0:
	emote_exclamation_mark
	step_end

ErpCity_Starthouse1F_Mom_Clock_Movement_0:
	walk_left
	step_end

ErpCity_Starthouse1F_Mom_Calling_Text_0:
	.string "MOM$"

ErpCity_Starthouse1F_Mom_Calling_Text_1:
	.string "HONEY!!\p"
	.string "WAKE UP!!\p"
	.string "YOU'RE LATE!!$"

ErpCity_Starthouse1F_Mom_Clock_Text_0:
	.string "OH, AND DON'T FORGET YOUR CLOCK!\p"
	.string "OTHERWISE YOU WILL BE LATE AGAIN\n"
	.string "TOMORROW!!$"
