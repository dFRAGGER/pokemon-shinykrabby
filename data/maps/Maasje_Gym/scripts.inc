Maasje_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Maasje_Gym_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Maasje_Gym_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Maasje_Gym_Reset_Tide_State
	return


Maasje_Gym_Introduction::
	lock
	faceplayer
	goto_if_unset FLAG_ITEM_FRESH_WATER_GYM1, Maasje_Gym_Introduction_3
Maasje_Gym_Introduction_1:
	goto_if_set FLAG_ITEM_FRESH_WATER_GYM1, Maasje_Gym_Introduction_8
Maasje_Gym_Introduction_6:
	goto_if_set FLAG_ITEM_FRESH_WATER_GYM1, Maasje_Gym_Introduction_12
	return

Maasje_Gym_Introduction_2:
	setflag FLAG_ITEM_FRESH_WATER_GYM1
	msgbox Maasje_Gym_Introduction_Text_0
	waitmessage
	giveitem ITEM_FRESH_WATER
	waitmessage
	msgbox Maasje_Gym_Introduction_Text_1
	waitmessage
	release
	end

Maasje_Gym_Introduction_3:
	goto_if_unset FLAG_BADGE01_GET, Maasje_Gym_Introduction_2
	goto Maasje_Gym_Introduction_1

Maasje_Gym_Introduction_7:
	msgbox Maasje_Gym_Introduction_Text_2
	waitmessage
	release
	end

Maasje_Gym_Introduction_8:
	goto_if_unset FLAG_BADGE01_GET, Maasje_Gym_Introduction_7
	goto Maasje_Gym_Introduction_6

Maasje_Gym_Introduction_11:
	msgbox Maasje_Gym_Introduction_Text_3
	waitmessage
	release
	end

Maasje_Gym_Introduction_12:
	goto_if_set FLAG_BADGE01_GET, Maasje_Gym_Introduction_11
	return


Maasje_Gym_Leader_Pete_Longfellow::
	trainerbattle_single TRAINER_PETELONGFELLOW, Maasje_Gym_PeteLongfellow_Introtext, Maasje_Gym_PeteLongfellow_Defeattext, Maasje_Gym_PeteLongfellow_Defeated, NO_MUSIC
	release
	end


Maasje_Gym_PeteLongfellow_Defeated::
	setspeaker Maasje_Gym_PeteLongfellow_Defeated_Text_0
	msgbox Maasje_Gym_PeteLongfellow_Defeated_Text_1
	waitmessage
	call Maasje_Gym_Set_Gym_Trainers
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_BADGE01_GET
	setflag FLAG_DEFEATED_RUSTBORO_GYM
	setflag FLAG_FACULTY_SYMPATHIZERS_1
	setspeaker NULL
	msgbox Maasje_Gym_PeteLongfellow_Defeated_Text_2
	waitmessage
	setspeaker Maasje_Gym_PeteLongfellow_Defeated_Text_0
	msgbox Maasje_Gym_PeteLongfellow_Defeated_Text_3
	waitmessage
	giveitem ITEM_TM_WATER_PULSE
	waitmessage
	setspeaker Maasje_Gym_PeteLongfellow_Defeated_Text_0
	msgbox Maasje_Gym_PeteLongfellow_Defeated_Text_4, MSGBOX_AUTOCLOSE
	playse SE_CLICK
	fadescreen FADE_TO_BLACK
	setvar VAR_MAASJE_GYM_TIDE_STATE, 5
	call Maasje_Gym_Set_Tide_Metatiles
	special DrawWholeMapView
	delay 60
	playse SE_M_SURF
	delay 60
	fadescreen FADE_FROM_BLACK
	release
	end


Maasje_Gym_Set_Gym_Trainers::
	settrainerflag TRAINER_BRAM
	settrainerflag TRAINER_ROB
	settrainerflag TRAINER_ADDY
	settrainerflag TRAINER_MART
	return


Maasje_Gym_Reset_Tide_State::
	goto_if_set FLAG_BADGE01_GET, Maasje_Gym_Reset_Tide_State_2
	setvar VAR_MAASJE_GYM_TIDE_STATE, 0
Maasje_Gym_Reset_Tide_State_1:
	call Maasje_Gym_Set_Tide_Metatiles
	return

Maasje_Gym_Reset_Tide_State_2:
	setvar VAR_MAASJE_GYM_TIDE_STATE, 5
	goto Maasje_Gym_Reset_Tide_State_1


Maasje_Gym_Set_Tide_Metatiles::
	compare VAR_MAASJE_GYM_TIDE_STATE, 0
	goto_if_eq Maasje_Gym_Set_Tide_Metatiles_1
	compare VAR_MAASJE_GYM_TIDE_STATE, 1
	goto_if_eq Maasje_Gym_Set_Tide_Metatiles_2
	compare VAR_MAASJE_GYM_TIDE_STATE, 2
	goto_if_eq Maasje_Gym_Set_Tide_Metatiles_3
	compare VAR_MAASJE_GYM_TIDE_STATE, 3
	goto_if_eq Maasje_Gym_Set_Tide_Metatiles_4
	compare VAR_MAASJE_GYM_TIDE_STATE, 4
	goto_if_eq Maasje_Gym_Set_Tide_Metatiles_5
	compare VAR_MAASJE_GYM_TIDE_STATE, 5
	goto_if_eq Maasje_Gym_Set_Tide_Metatiles_6
	return

Maasje_Gym_Set_Tide_Metatiles_1:
	setmetatile 5, 10, 0x1BE, TRUE
	setmetatile 5, 11, 0x170, TRUE
	setmetatile 5, 12, 0x1AD, TRUE
	setmetatile 6, 9, 0x1A4, FALSE
	setmetatile 6, 10, 0x1BF, FALSE
	setmetatile 6, 11, 0x1AD, FALSE
	setmetatile 6, 12, 0x19B, FALSE
	setmetatile 7, 9, 0x1BF, TRUE
	setmetatile 7, 10, 0x170, TRUE
	setmetatile 7, 11, 0x1AE, TRUE
	setmetatile 8, 19, 0x1A3, TRUE
	setmetatile 9, 19, 0x19E, FALSE
	setmetatile 10, 19, 0x19E, FALSE
	setmetatile 11, 19, 0x19C, TRUE
	setmetatile 12, 19, 0x1AF, TRUE
	setmetatile 8, 20, 0x1BD, TRUE
	setmetatile 9, 20, 0x1A3, TRUE
	setmetatile 10, 20, 0x19E, FALSE
	setmetatile 11, 20, 0x19E, FALSE
	setmetatile 12, 20, 0x19C, FALSE
	setmetatile 9, 10, 0x1BD, TRUE
	setmetatile 9, 11, 0x1AE, FALSE
	setmetatile 10, 10, 0x1BE, TRUE
	setmetatile 10, 11, 0x1AE, FALSE
	setmetatile 11, 8, 0x1AF, TRUE
	setmetatile 11, 9, 0x1B7, TRUE
	setmetatile 11, 10, 0x1BF, TRUE
	setmetatile 11, 11, 0x1AF, TRUE
	setmetatile 11, 12, 0x19C, FALSE
	setmetatile 11, 13, 0x19E, FALSE
	setmetatile 11, 14, 0x19E, FALSE
	setmetatile 11, 15, 0x1A3, TRUE
	setmetatile 11, 16, 0x1BD, TRUE
	setmetatile 12, 6, 0x1BE, TRUE
	setmetatile 12, 7, 0x170, TRUE
	setmetatile 12, 8, 0x170, TRUE
	setmetatile 12, 9, 0x170, TRUE
	setmetatile 12, 10, 0x170, TRUE
	setmetatile 12, 11, 0x170, TRUE
	setmetatile 12, 12, 0x1AF, TRUE
	setmetatile 12, 13, 0x19C, FALSE
	setmetatile 12, 14, 0x19E, FALSE
	setmetatile 12, 15, 0x19E, FALSE
	setmetatile 12, 16, 0x1BE, TRUE
	setmetatile 13, 6, 0x1BE, TRUE
	setmetatile 13, 7, 0x170, TRUE
	setmetatile 13, 8, 0x170, TRUE
	setmetatile 13, 9, 0x170, TRUE
	setmetatile 13, 10, 0x170, TRUE
	setmetatile 13, 11, 0x170, TRUE
	setmetatile 13, 12, 0x170, TRUE
	setmetatile 13, 13, 0x1AE, FALSE
	setmetatile 13, 14, 0x19E, FALSE
	setmetatile 13, 15, 0x19E, FALSE
	setmetatile 13, 16, 0x1A3, TRUE
	setmetatile 8, 4, 0x1AF, TRUE
	setmetatile 8, 5, 0x1B7, TRUE
	setmetatile 8, 6, 0x1BF, TRUE
	setmetatile 9, 4, 0x1B5, TRUE
	setmetatile 9, 5, 0x1BD, TRUE
	setmetatile 9, 6, 0x170, TRUE
	setmetatile 10, 5, 0x1BE, TRUE
	setmetatile 10, 6, 0x170, TRUE
	setmetatile 11, 5, 0x1A3, TRUE
	setmetatile 11, 6, 0x1BD, TRUE
	setmetatile 14, 6, 0x1BE, TRUE
	setmetatile 14, 7, 0x1AD, TRUE
	setmetatile 14, 8, 0x1B5, TRUE
	setmetatile 14, 9, 0x1BD, TRUE
	setmetatile 14, 10, 0x170, TRUE
	setmetatile 15, 9, 0x1BE, TRUE
	setmetatile 15, 10, 0x170, TRUE
	setmetatile 16, 7, 0x1AF, TRUE
	setmetatile 16, 8, 0x1B7, TRUE
	setmetatile 16, 9, 0x1BF, TRUE
	setmetatile 16, 10, 0x170, TRUE
	setmetatile 17, 7, 0x170, TRUE
	setmetatile 17, 8, 0x170, TRUE
	setmetatile 17, 9, 0x170, TRUE
	setmetatile 17, 10, 0x170, TRUE
	setmetatile 18, 7, 0x1AD, TRUE
	setmetatile 18, 8, 0x1B5, TRUE
	setmetatile 18, 9, 0x1BD, TRUE
	setmetatile 18, 11, 0x1AF, TRUE
	setmetatile 18, 12, 0x19C, FALSE
	setmetatile 19, 11, 0x1BD, FALSE
	setmetatile 19, 12, 0x1AF, TRUE
	setmetatile 19, 13, 0x19C, FALSE
	setmetatile 20, 11, 0x1A3, TRUE
	setmetatile 20, 12, 0x1BD, TRUE
	setmetatile 20, 13, 0x1AF, TRUE
	setmetatile 20, 14, 0x1AF, TRUE
	setmetatile 21, 12, 0x1BE, TRUE
	setmetatile 21, 13, 0x170, TRUE
	setmetatile 21, 14, 0x170, TRUE
	setmetatile 17, 19, 0x1BE, TRUE
	setmetatile 17, 20, 0x170, TRUE
	setmetatile 17, 21, 0x20D, TRUE
	setmetatile 18, 19, 0x1BE, TRUE
	setmetatile 18, 20, 0x170, TRUE
	setmetatile 18, 21, 0x1AE, FALSE
	setmetatile 19, 19, 0x1BF, TRUE
	setmetatile 19, 20, 0x170, TRUE
	setmetatile 19, 21, 0x1AE, FALSE
	return

Maasje_Gym_Set_Tide_Metatiles_2:
	setmetatile 5, 10, 0x1A3, TRUE
	setmetatile 5, 11, 0x1B5, TRUE
	setmetatile 5, 12, 0x1B5, TRUE
	setmetatile 6, 9, 0x19E, FALSE
	setmetatile 6, 10, 0x19E, FALSE
	setmetatile 6, 11, 0x19E, FALSE
	setmetatile 6, 12, 0x19E, FALSE
	setmetatile 7, 9, 0x1B7, TRUE
	setmetatile 7, 10, 0x1B7, TRUE
	setmetatile 7, 11, 0x19C, FALSE
	setmetatile 8, 19, 0x1BE, TRUE
	setmetatile 9, 19, 0x1BE, TRUE
	setmetatile 10, 19, 0x1BE, FALSE
	setmetatile 11, 19, 0x1BF, TRUE
	setmetatile 12, 19, 0x170, TRUE
	setmetatile 8, 20, 0x170, TRUE
	setmetatile 9, 20, 0x1AD, TRUE
	setmetatile 10, 20, 0x1AE, FALSE
	setmetatile 11, 20, 0x1AE, FALSE
	setmetatile 12, 20, 0x1AE, FALSE
	setmetatile 9, 10, 0x1BD, TRUE
	setmetatile 9, 11, 0x1AE, FALSE
	setmetatile 10, 10, 0x1BE, TRUE
	setmetatile 10, 11, 0x1AE, FALSE
	setmetatile 11, 8, 0x1AF, TRUE
	setmetatile 11, 9, 0x1B7, TRUE
	setmetatile 11, 10, 0x1BF, TRUE
	setmetatile 11, 11, 0x1AF, TRUE
	setmetatile 11, 12, 0x1B7, TRUE
	setmetatile 11, 13, 0x1B7, TRUE
	setmetatile 11, 14, 0x1B7, TRUE
	setmetatile 11, 15, 0x1BF, TRUE
	setmetatile 11, 16, 0x170, TRUE
	setmetatile 12, 6, 0x1BE, TRUE
	setmetatile 12, 7, 0x170, TRUE
	setmetatile 12, 8, 0x170, TRUE
	setmetatile 12, 9, 0x170, TRUE
	setmetatile 12, 10, 0x170, TRUE
	setmetatile 12, 11, 0x170, TRUE
	setmetatile 12, 12, 0x170, TRUE
	setmetatile 12, 13, 0x170, TRUE
	setmetatile 12, 14, 0x170, TRUE
	setmetatile 12, 15, 0x170, TRUE
	setmetatile 12, 16, 0x170, TRUE
	setmetatile 13, 6, 0x1BE, TRUE
	setmetatile 13, 7, 0x170, TRUE
	setmetatile 13, 8, 0x170, TRUE
	setmetatile 13, 9, 0x170, TRUE
	setmetatile 13, 10, 0x170, TRUE
	setmetatile 13, 11, 0x170, TRUE
	setmetatile 13, 12, 0x170, TRUE
	setmetatile 13, 13, 0x1AD, FALSE
	setmetatile 13, 14, 0x1B5, FALSE
	setmetatile 13, 15, 0x1B5, FALSE
	setmetatile 13, 16, 0x1B5, TRUE
	setmetatile 8, 4, 0x1AF, TRUE
	setmetatile 8, 5, 0x1B7, TRUE
	setmetatile 8, 6, 0x1B7, TRUE
	setmetatile 9, 4, 0x1B5, TRUE
	setmetatile 9, 5, 0x1BD, TRUE
	setmetatile 9, 6, 0x170, TRUE
	setmetatile 10, 5, 0x1BE, TRUE
	setmetatile 10, 6, 0x170, TRUE
	setmetatile 11, 5, 0x1A3, TRUE
	setmetatile 11, 6, 0x1BD, TRUE
	setmetatile 14, 6, 0x1BE, TRUE
	setmetatile 14, 7, 0x1AD, TRUE
	setmetatile 14, 8, 0x1B5, TRUE
	setmetatile 14, 9, 0x1BD, TRUE
	setmetatile 14, 10, 0x170, TRUE
	setmetatile 15, 9, 0x1BE, TRUE
	setmetatile 15, 10, 0x170, TRUE
	setmetatile 16, 7, 0x1AF, TRUE
	setmetatile 16, 8, 0x1B7, TRUE
	setmetatile 16, 9, 0x1BF, TRUE
	setmetatile 16, 10, 0x170, TRUE
	setmetatile 17, 7, 0x170, TRUE
	setmetatile 17, 8, 0x170, TRUE
	setmetatile 17, 9, 0x170, TRUE
	setmetatile 17, 10, 0x170, TRUE
	setmetatile 18, 7, 0x1AD, TRUE
	setmetatile 18, 8, 0x1B5, TRUE
	setmetatile 18, 9, 0x1BD, TRUE
	setmetatile 18, 11, 0x1AF, TRUE
	setmetatile 18, 12, 0x19C, FALSE
	setmetatile 19, 11, 0x1BD, FALSE
	setmetatile 19, 12, 0x1AF, TRUE
	setmetatile 19, 13, 0x19C, FALSE
	setmetatile 20, 11, 0x1A3, TRUE
	setmetatile 20, 12, 0x1BD, TRUE
	setmetatile 20, 13, 0x1AF, TRUE
	setmetatile 20, 14, 0x1AF, TRUE
	setmetatile 21, 12, 0x1BE, TRUE
	setmetatile 21, 13, 0x170, TRUE
	setmetatile 21, 14, 0x170, TRUE
	setmetatile 17, 19, 0x1BE, TRUE
	setmetatile 17, 20, 0x170, TRUE
	setmetatile 17, 21, 0x20D, TRUE
	setmetatile 18, 19, 0x1BE, TRUE
	setmetatile 18, 20, 0x170, TRUE
	setmetatile 18, 21, 0x1AE, FALSE
	setmetatile 19, 19, 0x1BF, TRUE
	setmetatile 19, 20, 0x170, TRUE
	setmetatile 19, 21, 0x1AE, FALSE
	return

Maasje_Gym_Set_Tide_Metatiles_3:
	setmetatile 5, 10, 0x1A3, TRUE
	setmetatile 5, 11, 0x1B5, TRUE
	setmetatile 5, 12, 0x1B5, TRUE
	setmetatile 6, 9, 0x19E, FALSE
	setmetatile 6, 10, 0x19E, FALSE
	setmetatile 6, 11, 0x19E, FALSE
	setmetatile 6, 12, 0x19E, FALSE
	setmetatile 7, 9, 0x1B7, TRUE
	setmetatile 7, 10, 0x1B7, TRUE
	setmetatile 7, 11, 0x19C, FALSE
	setmetatile 8, 19, 0x1BE, TRUE
	setmetatile 9, 19, 0x1BE, TRUE
	setmetatile 10, 19, 0x1BE, FALSE
	setmetatile 11, 19, 0x1BF, TRUE
	setmetatile 12, 19, 0x170, TRUE
	setmetatile 8, 20, 0x170, TRUE
	setmetatile 9, 20, 0x1AD, TRUE
	setmetatile 10, 20, 0x1AE, FALSE
	setmetatile 11, 20, 0x1AE, FALSE
	setmetatile 12, 20, 0x1AE, FALSE
	setmetatile 9, 10, 0x1BD, TRUE
	setmetatile 9, 11, 0x1AE, FALSE
	setmetatile 10, 10, 0x1BE, TRUE
	setmetatile 10, 11, 0x1AE, FALSE
	setmetatile 11, 8, 0x1AF, TRUE
	setmetatile 11, 9, 0x1B7, TRUE
	setmetatile 11, 10, 0x1BF, TRUE
	setmetatile 11, 11, 0x1AF, TRUE
	setmetatile 11, 12, 0x1B7, FALSE
	setmetatile 11, 13, 0x19C, FALSE
	setmetatile 11, 14, 0x19E, FALSE
	setmetatile 11, 15, 0x1BE, TRUE
	setmetatile 11, 16, 0x170, TRUE
	setmetatile 12, 6, 0x1BE, TRUE
	setmetatile 12, 7, 0x170, TRUE
	setmetatile 12, 8, 0x170, TRUE
	setmetatile 12, 9, 0x170, TRUE
	setmetatile 12, 10, 0x170, TRUE
	setmetatile 12, 11, 0x170, TRUE
	setmetatile 12, 12, 0x170, TRUE
	setmetatile 12, 13, 0x1AE, FALSE
	setmetatile 12, 14, 0x19E, FALSE
	setmetatile 12, 15, 0x1BE, TRUE
	setmetatile 12, 16, 0x170, TRUE
	setmetatile 13, 6, 0x1BE, TRUE
	setmetatile 13, 7, 0x170, TRUE
	setmetatile 13, 8, 0x170, TRUE
	setmetatile 13, 9, 0x170, TRUE
	setmetatile 13, 10, 0x170, TRUE
	setmetatile 13, 11, 0x170, TRUE
	setmetatile 13, 12, 0x170, TRUE
	setmetatile 13, 13, 0x1AE, FALSE
	setmetatile 13, 14, 0x19E, FALSE
	setmetatile 13, 15, 0x1A3, FALSE
	setmetatile 13, 16, 0x1B5, TRUE
	setmetatile 8, 4, 0x1AF, TRUE
	setmetatile 8, 5, 0x1B7, TRUE
	setmetatile 8, 6, 0x1B7, TRUE
	setmetatile 9, 4, 0x1B5, TRUE
	setmetatile 9, 5, 0x1BD, TRUE
	setmetatile 9, 6, 0x170, TRUE
	setmetatile 10, 5, 0x1BE, TRUE
	setmetatile 10, 6, 0x170, TRUE
	setmetatile 11, 5, 0x1A3, TRUE
	setmetatile 11, 6, 0x1BD, TRUE
	setmetatile 14, 6, 0x1BE, TRUE
	setmetatile 14, 7, 0x1AD, TRUE
	setmetatile 14, 8, 0x1B5, TRUE
	setmetatile 14, 9, 0x1BD, TRUE
	setmetatile 14, 10, 0x170, TRUE
	setmetatile 15, 9, 0x1BE, TRUE
	setmetatile 15, 10, 0x170, TRUE
	setmetatile 16, 7, 0x1AF, TRUE
	setmetatile 16, 8, 0x1B7, TRUE
	setmetatile 16, 9, 0x1BF, TRUE
	setmetatile 16, 10, 0x170, TRUE
	setmetatile 17, 7, 0x170, TRUE
	setmetatile 17, 8, 0x170, TRUE
	setmetatile 17, 9, 0x170, TRUE
	setmetatile 17, 10, 0x170, TRUE
	setmetatile 18, 7, 0x1AD, TRUE
	setmetatile 18, 8, 0x1B5, TRUE
	setmetatile 18, 9, 0x1BD, TRUE
	setmetatile 18, 11, 0x1AF, TRUE
	setmetatile 18, 12, 0x19C, FALSE
	setmetatile 19, 11, 0x1BD, FALSE
	setmetatile 19, 12, 0x1AF, TRUE
	setmetatile 19, 13, 0x19C, FALSE
	setmetatile 20, 11, 0x1A3, TRUE
	setmetatile 20, 12, 0x1BD, TRUE
	setmetatile 20, 13, 0x1AF, TRUE
	setmetatile 20, 14, 0x1B7, TRUE
	setmetatile 21, 12, 0x1BE, TRUE
	setmetatile 21, 13, 0x170, TRUE
	setmetatile 21, 14, 0x170, TRUE
	setmetatile 17, 19, 0x1BE, TRUE
	setmetatile 17, 20, 0x170, TRUE
	setmetatile 17, 21, 0x20D, TRUE
	setmetatile 18, 19, 0x1BE, TRUE
	setmetatile 18, 20, 0x170, TRUE
	setmetatile 18, 21, 0x1AE, FALSE
	setmetatile 19, 19, 0x1BF, TRUE
	setmetatile 19, 20, 0x170, TRUE
	setmetatile 19, 21, 0x1AE, FALSE
	return

Maasje_Gym_Set_Tide_Metatiles_4:
	setmetatile 5, 10, 0x1BE, TRUE
	setmetatile 5, 11, 0x170, TRUE
	setmetatile 5, 12, 0x1AD, TRUE
	setmetatile 6, 9, 0x1A4, TRUE
	setmetatile 6, 10, 0x1BF, TRUE
	setmetatile 6, 11, 0x1AD, TRUE
	setmetatile 6, 12, 0x19B, TRUE
	setmetatile 7, 9, 0x1BF, TRUE
	setmetatile 7, 10, 0x170, TRUE
	setmetatile 7, 11, 0x1AE, FALSE
	setmetatile 8, 19, 0x1A3, TRUE
	setmetatile 9, 19, 0x19E, FALSE
	setmetatile 10, 19, 0x19E, FALSE
	setmetatile 11, 19, 0x19C, TRUE
	setmetatile 12, 19, 0x1AF, TRUE
	setmetatile 8, 20, 0x1BD, TRUE
	setmetatile 9, 20, 0x1A3, TRUE
	setmetatile 10, 20, 0x19E, FALSE
	setmetatile 11, 20, 0x19E, FALSE
	setmetatile 12, 20, 0x19C, FALSE
	setmetatile 9, 10, 0x1BD, TRUE
	setmetatile 9, 11, 0x1AE, FALSE
	setmetatile 10, 10, 0x1BE, TRUE
	setmetatile 10, 11, 0x1AE, FALSE
	setmetatile 11, 8, 0x1AF, TRUE
	setmetatile 11, 9, 0x1B7, TRUE
	setmetatile 11, 10, 0x1BF, TRUE
	setmetatile 11, 11, 0x1AF, TRUE
	setmetatile 11, 12, 0x1B7, TRUE
	setmetatile 11, 13, 0x1B7, TRUE
	setmetatile 11, 14, 0x1B7, TRUE
	setmetatile 11, 15, 0x1BF, TRUE
	setmetatile 11, 16, 0x170, TRUE
	setmetatile 12, 6, 0x1BE, TRUE
	setmetatile 12, 7, 0x170, TRUE
	setmetatile 12, 8, 0x170, TRUE
	setmetatile 12, 9, 0x170, TRUE
	setmetatile 12, 10, 0x170, TRUE
	setmetatile 12, 11, 0x170, TRUE
	setmetatile 12, 12, 0x170, TRUE
	setmetatile 12, 13, 0x170, TRUE
	setmetatile 12, 14, 0x170, TRUE
	setmetatile 12, 15, 0x170, TRUE
	setmetatile 12, 16, 0x170, TRUE
	setmetatile 13, 6, 0x1BE, TRUE
	setmetatile 13, 7, 0x170, TRUE
	setmetatile 13, 8, 0x170, TRUE
	setmetatile 13, 9, 0x170, TRUE
	setmetatile 13, 10, 0x170, TRUE
	setmetatile 13, 11, 0x170, TRUE
	setmetatile 13, 12, 0x170, TRUE
	setmetatile 13, 13, 0x1AD, TRUE
	setmetatile 13, 14, 0x1B5, TRUE
	setmetatile 13, 15, 0x1B5, TRUE
	setmetatile 13, 16, 0x1B5, TRUE
	setmetatile 8, 4, 0x1AF, TRUE
	setmetatile 8, 5, 0x1B7, TRUE
	setmetatile 8, 6, 0x1B7, TRUE
	setmetatile 9, 4, 0x1B5, TRUE
	setmetatile 9, 5, 0x1BD, TRUE
	setmetatile 9, 6, 0x170, TRUE
	setmetatile 10, 5, 0x1BE, TRUE
	setmetatile 10, 6, 0x170, TRUE
	setmetatile 11, 5, 0x1A3, TRUE
	setmetatile 11, 6, 0x1BD, TRUE
	setmetatile 14, 6, 0x1BE, TRUE
	setmetatile 14, 7, 0x1AD, TRUE
	setmetatile 14, 8, 0x1B5, TRUE
	setmetatile 14, 9, 0x1BD, TRUE
	setmetatile 14, 10, 0x170, TRUE
	setmetatile 15, 9, 0x1BE, TRUE
	setmetatile 15, 10, 0x170, TRUE
	setmetatile 16, 7, 0x1AF, TRUE
	setmetatile 16, 8, 0x1B7, TRUE
	setmetatile 16, 9, 0x1BF, TRUE
	setmetatile 16, 10, 0x170, TRUE
	setmetatile 17, 7, 0x170, TRUE
	setmetatile 17, 8, 0x170, TRUE
	setmetatile 17, 9, 0x170, TRUE
	setmetatile 17, 10, 0x170, TRUE
	setmetatile 18, 7, 0x1AD, TRUE
	setmetatile 18, 8, 0x1B5, TRUE
	setmetatile 18, 9, 0x1BD, TRUE
	setmetatile 18, 11, 0x1AE, FALSE
	setmetatile 18, 12, 0x19E, FALSE
	setmetatile 19, 11, 0x19B, FALSE
	setmetatile 19, 12, 0x19E, FALSE
	setmetatile 19, 13, 0x19E, FALSE
	setmetatile 20, 11, 0x19E, FALSE
	setmetatile 20, 12, 0x19E, FALSE
	setmetatile 20, 13, 0x19E, FALSE
	setmetatile 20, 14, 0x1A4, TRUE
	setmetatile 21, 12, 0x1A4, TRUE
	setmetatile 21, 13, 0x1B7, TRUE
	setmetatile 21, 14, 0x1BF, TRUE
	setmetatile 17, 19, 0x1A3, TRUE
	setmetatile 17, 20, 0x1B5, TRUE
	setmetatile 17, 21, 0x22E, TRUE
	setmetatile 18, 19, 0x19E, FALSE
	setmetatile 18, 20, 0x19E, FALSE
	setmetatile 18, 21, 0x19E, FALSE
	setmetatile 19, 19, 0x1B7, TRUE
	setmetatile 19, 20, 0x1B7, TRUE
	setmetatile 19, 21, 0x19C, FALSE
	return

Maasje_Gym_Set_Tide_Metatiles_5:
	setmetatile 5, 10, 0x1A3, TRUE
	setmetatile 5, 11, 0x1B5, TRUE
	setmetatile 5, 12, 0x1B5, TRUE
	setmetatile 6, 9, 0x19E, FALSE
	setmetatile 6, 10, 0x19E, FALSE
	setmetatile 6, 11, 0x19E, FALSE
	setmetatile 6, 12, 0x19E, FALSE
	setmetatile 7, 9, 0x1B7, TRUE
	setmetatile 7, 10, 0x1B7, TRUE
	setmetatile 7, 11, 0x19C, FALSE
	setmetatile 8, 19, 0x1BE, TRUE
	setmetatile 9, 19, 0x1BE, TRUE
	setmetatile 10, 19, 0x1BE, FALSE
	setmetatile 11, 19, 0x1BF, TRUE
	setmetatile 12, 19, 0x170, TRUE
	setmetatile 8, 20, 0x170, TRUE
	setmetatile 9, 20, 0x1AD, TRUE
	setmetatile 10, 20, 0x1AE, FALSE
	setmetatile 11, 20, 0x1AE, FALSE
	setmetatile 12, 20, 0x1AE, FALSE
	setmetatile 9, 10, 0x1B5, TRUE
	setmetatile 9, 11, 0x19B, FALSE
	setmetatile 10, 10, 0x19E, FALSE
	setmetatile 10, 11, 0x19E, FALSE
	setmetatile 11, 8, 0x1AE, FALSE
	setmetatile 11, 9, 0x19E, FALSE
	setmetatile 11, 10, 0x19E, FALSE
	setmetatile 11, 11, 0x1A4, TRUE
	setmetatile 11, 12, 0x1B7, TRUE
	setmetatile 11, 13, 0x1B7, TRUE
	setmetatile 11, 14, 0x1B7, TRUE
	setmetatile 11, 15, 0x1BF, TRUE
	setmetatile 11, 16, 0x170, TRUE
	setmetatile 12, 6, 0x1BE, TRUE
	setmetatile 12, 7, 0x170, TRUE
	setmetatile 12, 8, 0x1AE, FALSE
	setmetatile 12, 9, 0x19E, FALSE
	setmetatile 12, 10, 0x19E, FALSE
	setmetatile 12, 11, 0x1BE, TRUE
	setmetatile 12, 12, 0x170, TRUE
	setmetatile 12, 13, 0x170, TRUE
	setmetatile 12, 14, 0x170, TRUE
	setmetatile 12, 15, 0x170, TRUE
	setmetatile 12, 16, 0x170, TRUE
	setmetatile 13, 6, 0x1BE, TRUE
	setmetatile 13, 7, 0x170, TRUE
	setmetatile 13, 8, 0x1AE, FALSE
	setmetatile 13, 9, 0x19E, FALSE
	setmetatile 13, 10, 0x1A4, TRUE
	setmetatile 13, 11, 0x1BF, TRUE
	setmetatile 13, 12, 0x170, TRUE
	setmetatile 13, 13, 0x1AD, TRUE
	setmetatile 13, 14, 0x1B5, TRUE
	setmetatile 13, 15, 0x1B5, TRUE
	setmetatile 13, 16, 0x1B5, TRUE
	setmetatile 8, 4, 0x1AE, FALSE
	setmetatile 8, 5, 0x19E, FALSE
	setmetatile 8, 6, 0x1A4, TRUE
	setmetatile 9, 4, 0x19B, FALSE
	setmetatile 9, 5, 0x19E, FALSE
	setmetatile 9, 6, 0x1BE, TRUE
	setmetatile 10, 5, 0x19E, FALSE
	setmetatile 10, 6, 0x1BE, TRUE
	setmetatile 11, 5, 0x19E, FALSE
	setmetatile 11, 6, 0x1BE, TRUE
	setmetatile 14, 6, 0x1BE, TRUE
	setmetatile 14, 7, 0x1AD, TRUE
	setmetatile 14, 8, 0x19B, FALSE
	setmetatile 14, 9, 0x19E, FALSE
	setmetatile 14, 10, 0x1BE, TRUE
	setmetatile 15, 9, 0x19E, FALSE
	setmetatile 15, 10, 0x1BE, TRUE
	setmetatile 16, 7, 0x1AE, FALSE
	setmetatile 16, 8, 0x19E, FALSE
	setmetatile 16, 9, 0x19E, FALSE
	setmetatile 16, 10, 0x1BE, TRUE
	setmetatile 17, 7, 0x1AE, FALSE
	setmetatile 17, 8, 0x19E, FALSE
	setmetatile 17, 9, 0x1A4, TRUE
	setmetatile 17, 10, 0x1BF, TRUE
	setmetatile 18, 7, 0x1AE, FALSE
	setmetatile 18, 8, 0x19E, FALSE
	setmetatile 18, 9, 0x1BE, TRUE
	setmetatile 18, 11, 0x1AF, TRUE
	setmetatile 18, 12, 0x19C, FALSE
	setmetatile 19, 11, 0x1BD, FALSE
	setmetatile 19, 12, 0x1AF, TRUE
	setmetatile 19, 13, 0x19C, FALSE
	setmetatile 20, 11, 0x1A3, TRUE
	setmetatile 20, 12, 0x1BD, TRUE
	setmetatile 20, 13, 0x1AF, TRUE
	setmetatile 20, 14, 0x1B7, TRUE
	setmetatile 21, 12, 0x1BE, TRUE
	setmetatile 21, 13, 0x170, TRUE
	setmetatile 21, 14, 0x170, TRUE
	setmetatile 17, 19, 0x1BE, TRUE
	setmetatile 17, 20, 0x170, TRUE
	setmetatile 17, 21, 0x20D, TRUE
	setmetatile 18, 19, 0x1BE, TRUE
	setmetatile 18, 20, 0x170, TRUE
	setmetatile 18, 21, 0x1AE, FALSE
	setmetatile 19, 19, 0x1BF, TRUE
	setmetatile 19, 20, 0x170, TRUE
	setmetatile 19, 21, 0x1AE, FALSE
	return

Maasje_Gym_Set_Tide_Metatiles_6:
	setmetatile 5, 10, 0x1BE, TRUE
	setmetatile 5, 11, 0x170, TRUE
	setmetatile 5, 12, 0x1AD, TRUE
	setmetatile 6, 9, 0x1A4, TRUE
	setmetatile 6, 10, 0x1BF, TRUE
	setmetatile 6, 11, 0x1AD, TRUE
	setmetatile 6, 12, 0x19B, FALSE
	setmetatile 7, 9, 0x1BF, TRUE
	setmetatile 7, 10, 0x170, TRUE
	setmetatile 7, 11, 0x1AE, FALSE
	setmetatile 8, 19, 0x1A3, TRUE
	setmetatile 9, 19, 0x19E, FALSE
	setmetatile 10, 19, 0x19E, FALSE
	setmetatile 11, 19, 0x19C, TRUE
	setmetatile 12, 19, 0x1AF, TRUE
	setmetatile 8, 20, 0x1BD, TRUE
	setmetatile 9, 20, 0x1A3, TRUE
	setmetatile 10, 20, 0x19E, FALSE
	setmetatile 11, 20, 0x19E, FALSE
	setmetatile 12, 20, 0x19C, FALSE
	setmetatile 9, 10, 0x1BD, TRUE
	setmetatile 9, 11, 0x1AE, FALSE
	setmetatile 10, 10, 0x1BE, TRUE
	setmetatile 10, 11, 0x1AE, FALSE
	setmetatile 11, 8, 0x1AE, FALSE
	setmetatile 11, 9, 0x19E, FALSE
	setmetatile 11, 10, 0x1A3, TRUE
	setmetatile 11, 11, 0x19B, FALSE
	setmetatile 11, 12, 0x19E, FALSE
	setmetatile 11, 13, 0x19E, FALSE
	setmetatile 11, 14, 0x19E, FALSE
	setmetatile 11, 15, 0x1A3, TRUE
	setmetatile 11, 16, 0x1BD, TRUE
	setmetatile 12, 6, 0x1A3, TRUE
	setmetatile 12, 7, 0x1B5, TRUE
	setmetatile 12, 8, 0x19B, FALSE
	setmetatile 12, 9, 0x19E, FALSE
	setmetatile 12, 10, 0x19E, FALSE
	setmetatile 12, 11, 0x19E, FALSE
	setmetatile 12, 12, 0x19E, FALSE
	setmetatile 12, 13, 0x19E, FALSE
	setmetatile 12, 14, 0x19E, FALSE
	setmetatile 12, 15, 0x19E, FALSE
	setmetatile 12, 16, 0x1BE, TRUE
	setmetatile 13, 6, 0x19E, FALSE
	setmetatile 13, 7, 0x19E, FALSE
	setmetatile 13, 8, 0x19E, FALSE
	setmetatile 13, 9, 0x19E, FALSE
	setmetatile 13, 10, 0x1A4, TRUE
	setmetatile 13, 11, 0x1B7, TRUE
	setmetatile 13, 12, 0x1B7, TRUE
	setmetatile 13, 13, 0x19C, FALSE
	setmetatile 13, 14, 0x19E, FALSE
	setmetatile 13, 15, 0x19E, FALSE
	setmetatile 13, 16, 0x1A3, TRUE
	setmetatile 8, 4, 0x1AF, TRUE
	setmetatile 8, 5, 0x1B7, TRUE
	setmetatile 8, 6, 0x1B7, TRUE
	setmetatile 9, 4, 0x1B5, TRUE
	setmetatile 9, 5, 0x1BD, TRUE
	setmetatile 9, 6, 0x170, TRUE
	setmetatile 10, 5, 0x1BE, TRUE
	setmetatile 10, 6, 0x170, TRUE
	setmetatile 11, 5, 0x1A3, TRUE
	setmetatile 11, 6, 0x1BD, TRUE
	setmetatile 14, 6, 0x1A4, TRUE
	setmetatile 14, 7, 0x19C, FALSE
	setmetatile 14, 8, 0x19E, FALSE
	setmetatile 14, 9, 0x1A4, TRUE
	setmetatile 14, 10, 0x1BF, TRUE
	setmetatile 15, 9, 0x1BE, TRUE
	setmetatile 15, 10, 0x170, TRUE
	setmetatile 16, 7, 0x1AF, TRUE
	setmetatile 16, 8, 0x1B7, TRUE
	setmetatile 16, 9, 0x1BF, TRUE
	setmetatile 16, 10, 0x170, TRUE
	setmetatile 17, 7, 0x170, TRUE
	setmetatile 17, 8, 0x170, TRUE
	setmetatile 17, 9, 0x170, TRUE
	setmetatile 17, 10, 0x170, TRUE
	setmetatile 18, 7, 0x1AD, TRUE
	setmetatile 18, 8, 0x1B5, TRUE
	setmetatile 18, 9, 0x1BD, TRUE
	setmetatile 18, 11, 0x1AF, TRUE
	setmetatile 18, 12, 0x19C, FALSE
	setmetatile 19, 11, 0x1BD, FALSE
	setmetatile 19, 12, 0x1AF, TRUE
	setmetatile 19, 13, 0x19C, FALSE
	setmetatile 20, 11, 0x1A3, TRUE
	setmetatile 20, 12, 0x1BD, TRUE
	setmetatile 20, 13, 0x1AF, TRUE
	setmetatile 20, 14, 0x1B7, TRUE
	setmetatile 21, 12, 0x1BE, TRUE
	setmetatile 21, 13, 0x170, TRUE
	setmetatile 21, 14, 0x170, TRUE
	setmetatile 17, 19, 0x1BE, TRUE
	setmetatile 17, 20, 0x170, TRUE
	setmetatile 17, 21, 0x20D, TRUE
	setmetatile 18, 19, 0x1BE, TRUE
	setmetatile 18, 20, 0x170, TRUE
	setmetatile 18, 21, 0x1AE, FALSE
	setmetatile 19, 19, 0x1BF, TRUE
	setmetatile 19, 20, 0x170, TRUE
	setmetatile 19, 21, 0x1AE, FALSE
	return


Maasje_Gym_Pillar_SetState_1::
	lock
	goto_if_set FLAG_BADGE01_GET, Maasje_Gym_Pillar_SetState_1_2
	compare VAR_MAASJE_GYM_TIDE_STATE, 1
	goto_if_eq Maasje_Gym_Pillar_SetState_1_5
	playse SE_CLICK
	fadescreen FADE_TO_BLACK
	setvar VAR_MAASJE_GYM_TIDE_STATE, 1
	call Maasje_Gym_Set_Tide_Metatiles
	special DrawWholeMapView
	delay 60
	playse SE_M_SURF
	delay 60
	fadescreen FADE_FROM_BLACK
	release
	end

Maasje_Gym_Pillar_SetState_1_2:
	msgbox Maasje_Gym_Pillar_SetState_1_Text_0, MSGBOX_AUTOCLOSE
	release
	end

Maasje_Gym_Pillar_SetState_1_5:
	msgbox Maasje_Gym_Pillar_SetState_1_Text_1, MSGBOX_AUTOCLOSE
	release
	end


Maasje_Gym_Pillar_SetState_2::
	lock
	goto_if_set FLAG_BADGE01_GET, Maasje_Gym_Pillar_SetState_2_2
	compare VAR_MAASJE_GYM_TIDE_STATE, 2
	goto_if_eq Maasje_Gym_Pillar_SetState_2_5
	playse SE_CLICK
	fadescreen FADE_TO_BLACK
	setvar VAR_MAASJE_GYM_TIDE_STATE, 2
	call Maasje_Gym_Set_Tide_Metatiles
	special DrawWholeMapView
	delay 60
	playse SE_M_SURF
	delay 60
	fadescreen FADE_FROM_BLACK
	release
	end

Maasje_Gym_Pillar_SetState_2_2:
	msgbox Maasje_Gym_Pillar_SetState_1_Text_0, MSGBOX_AUTOCLOSE
	release
	end

Maasje_Gym_Pillar_SetState_2_5:
	msgbox Maasje_Gym_Pillar_SetState_1_Text_1, MSGBOX_AUTOCLOSE
	release
	end


Maasje_Gym_Pillar_SetState_3::
	lock
	goto_if_set FLAG_BADGE01_GET, Maasje_Gym_Pillar_SetState_3_2
	compare VAR_MAASJE_GYM_TIDE_STATE, 3
	goto_if_eq Maasje_Gym_Pillar_SetState_3_5
	playse SE_CLICK
	fadescreen FADE_TO_BLACK
	setvar VAR_MAASJE_GYM_TIDE_STATE, 3
	call Maasje_Gym_Set_Tide_Metatiles
	special DrawWholeMapView
	delay 60
	playse SE_M_SURF
	delay 60
	fadescreen FADE_FROM_BLACK
	release
	end

Maasje_Gym_Pillar_SetState_3_2:
	msgbox Maasje_Gym_Pillar_SetState_1_Text_0, MSGBOX_AUTOCLOSE
	release
	end

Maasje_Gym_Pillar_SetState_3_5:
	msgbox Maasje_Gym_Pillar_SetState_1_Text_1, MSGBOX_AUTOCLOSE
	release
	end


Maasje_Gym_Pillar_SetState_4::
	lock
	goto_if_set FLAG_BADGE01_GET, Maasje_Gym_Pillar_SetState_4_2
	compare VAR_MAASJE_GYM_TIDE_STATE, 4
	goto_if_eq Maasje_Gym_Pillar_SetState_4_5
	playse SE_CLICK
	fadescreen FADE_TO_BLACK
	setvar VAR_MAASJE_GYM_TIDE_STATE, 4
	call Maasje_Gym_Set_Tide_Metatiles
	special DrawWholeMapView
	delay 60
	playse SE_M_SURF
	delay 60
	fadescreen FADE_FROM_BLACK
	release
	end

Maasje_Gym_Pillar_SetState_4_2:
	msgbox Maasje_Gym_Pillar_SetState_1_Text_0, MSGBOX_AUTOCLOSE
	release
	end

Maasje_Gym_Pillar_SetState_4_5:
	msgbox Maasje_Gym_Pillar_SetState_1_Text_1, MSGBOX_AUTOCLOSE
	release
	end


Maasje_Gym_Eventscript_Bram::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_BRAM, TRAINER_BRAM, Maasje_Gym_Introtext_Trainer_Bram, Maasje_Gym_Losetext_Trainer_Bram, NULL, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	msgbox Maasje_Gym_Eventscript_Bram_Text_0, MSGBOX_AUTOCLOSE
	end


Maasje_Gym_Eventscript_Rob::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_ROB, TRAINER_ROB, Maasje_Gym_Introtext_Trainer_Rob, Maasje_Gym_Losetext_Trainer_Rob, NULL, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	msgbox Maasje_Gym_Eventscript_Rob_Text_0, MSGBOX_AUTOCLOSE
	end


Maasje_Gym_Basement_Eventscript_Addy::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_ADDY, TRAINER_ADDY, Maasje_Gym_Introtext_Trainer_Addy, Maasje_Gym_Losetext_Trainer_Addy, NULL, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	msgbox Maasje_Gym_Basement_Eventscript_Addy_Text_0, MSGBOX_AUTOCLOSE
	end


Maasje_Gym_Basement_Eventscript_Mart::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_MART, TRAINER_MART, Maasje_Gym_Introtext_Trainer_Mart, Maasje_Gym_Losetext_Trainer_Mart, NULL, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	msgbox Maasje_Gym_Basement_Eventscript_Mart_Text_0, MSGBOX_AUTOCLOSE
	end


Maasje_Gym_Introduction_Text_0:
	.string "Hi, welcome to the MOSA Pokemon Gym.\p"
	.string "The gym leader and trainers use\n"
	.string "pokemon seen during tide shifts,\l"
	.string "whatever that means...\p"
	.string "Grass pokemon seem to have an edge,\n"
	.string "while electric pokemon are not\l"
	.string "recommended.\p"
	.string "The gym leader is called Pete\n"
	.string "Longfellow, he used to be a geography\l"
	.string "teacher.\p"
	.string "He has been training pokemon for a long\n"
	.string "time but he can be stubborn and\l"
	.string "emotional.\p"
	.string "Stay cool and calm and you should be\n"
	.string "good.\p"
	.string "Also have this:$"

Maasje_Gym_Introduction_Text_1:
	.string "Good luck!!$"

Maasje_Gym_Introduction_Text_2:
	.string "Hi, welcome to the MOSA Pokemon Gym.\p"
	.string "The gym leader and trainers use\n"
	.string "pokemon seen during tide shifts,\l"
	.string "whatever that means...\p"
	.string "Grass pokemon seem to have an edge,\n"
	.string "while electric pokemon are not\l"
	.string "recommended.\p"
	.string "The gym leader is called Pete\n"
	.string "Longfellow, he used to be a geography\l"
	.string "teacher.\p"
	.string "He has been training pokemon for a long\n"
	.string "time but he can be stubborn and\l"
	.string "emotional.\p"
	.string "Stay cool and calm and you should be\n"
	.string "good.$"

Maasje_Gym_Introduction_Text_3:
	.string "Congrats on getting your badge!\p"
	.string "Pete looked a little sour about it, but\n"
	.string "he's still down there waiting for the\l"
	.string "next challenger.$"

Maasje_Gym_PeteLongfellow_Defeated_Text_0:
	.string "PETE$"

Maasje_Gym_PeteLongfellow_Defeated_Text_1:
	.string "In geography we call this longshore\n"
	.string "drift, the tide always reshapes the\l"
	.string "shore in the end.\p"
	.string "Timing the tides takes patience,\n"
	.string "nothing else beats it.\p"
	.string "Here, take this:$"

Maasje_Gym_PeteLongfellow_Defeated_Text_2:
	.string "You received the TIDE BADGE!$"

Maasje_Gym_PeteLongfellow_Defeated_Text_3:
	.string "That badge lets any pokemon up to level\n"
	.string "30 obey you, no matter whose it was\l"
	.string "originally.\p"
	.string "Also, you'll be able to use the move Cut\n"
	.string "outside of battle now.\p"
	.string "For future battles, this might help:$"

Maasje_Gym_PeteLongfellow_Defeated_Text_4:
	.string "That's TM Water Pulse.\p"
	.string "It sends out an ultrasonic wave that\n"
	.string "may leave the foe confused.\p"
	.string "Come back at full moon sometime, it will\n"
	.string "make my Pokemon even stronger.$"

Maasje_Gym_Pillar_SetState_1_Text_0:
	.string "The tide has settled here.\p"
	.string "There's nothing left to adjust.$"

Maasje_Gym_Pillar_SetState_1_Text_1:
	.string "The tide is already at this level.$"

Maasje_Gym_Eventscript_Bram_Text_0:
	.string "Give it a few years and I'll be reading\n"
	.string "the tides better than anyone else in\l"
	.string "MOSA.$"

Maasje_Gym_Eventscript_Rob_Text_0:
	.string "You never know what the low tide will\n"
	.string "uncover. That's what keeps this gym\l"
	.string "interesting.$"

Maasje_Gym_Basement_Eventscript_Addy_Text_0:
	.string "Doesn't matter if the water's high or\n"
	.string "low, the tide pools always bounce back.\l"
	.string "So do I.$"

Maasje_Gym_Basement_Eventscript_Mart_Text_0:
	.string "The tide comes in, the tide goes out.\n"
	.string "Rushing in never wins that fight.$"

Maasje_Gym_PeteLongfellow_Introtext::
	.string "Well, well.\p"
	.string "You challenged the tides and timed well.\p"
	.string "Let me learn you something about tidal\n"
	.string "forces and the glorious power of\l"
	.string "erosion!!$"

Maasje_Gym_PeteLongfellow_Defeattext::
	.string "I might be getting to old for this.\p"
	.string "Maybe my skills have finally lost the\n"
	.string "battle against the high water.$"

Maasje_Gym_Introtext_Trainer_Bram::
	.string "I'm still the rookie lookout here. But my\n"
	.string "WINGULL and I never miss the tide\l"
	.string "coming in!!$"

Maasje_Gym_Losetext_Trainer_Bram::
	.string "Guess I still have a lot to learn about\n"
	.string "riding the waves.$"

Maasje_Gym_Introtext_Trainer_Rob::
	.string "When the water pulls back, all sorts of\n"
	.string "things wash up. My SHELDER are the best\l"
	.string "divers around!!$"

Maasje_Gym_Losetext_Trainer_Rob::
	.string "Looks like the tide swept my shells\n"
	.string "right out from under me.$"

Maasje_Gym_Introtext_Trainer_Addy::
	.string "I tend the tide pools down here. My\n"
	.string "CORSOLA thrives no matter which way\l"
	.string "the tide turns!!$"

Maasje_Gym_Losetext_Trainer_Addy::
	.string "Guess the reef couldn't shield me from\n"
	.string "that one.$"

Maasje_Gym_Introtext_Trainer_Mart::
	.string "My SHUCKLE just clings to the rocks and\n"
	.string "waits out even the highest tide!!$"

Maasje_Gym_Losetext_Trainer_Mart::
	.string "Guess patience alone doesn't win every\n"
	.string "battle.$"
