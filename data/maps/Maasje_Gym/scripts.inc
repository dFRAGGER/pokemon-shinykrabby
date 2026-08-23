Maasje_Gym_MapScripts::
# 2 "data/maps/Maasje_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Maasje_Gym_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Maasje_Gym_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Maasje_Gym/scripts.pory"
	call Maasje_Gym_Reset_Tide_State
	return


Maasje_Gym_Introduction::
# 8 "data/maps/Maasje_Gym/scripts.pory"
	lock
# 9 "data/maps/Maasje_Gym/scripts.pory"
	faceplayer
# 10 "data/maps/Maasje_Gym/scripts.pory"
	goto_if_unset FLAG_ITEM_FRESH_WATER_GYM1, Maasje_Gym_Introduction_3
Maasje_Gym_Introduction_1:
# 21 "data/maps/Maasje_Gym/scripts.pory"
	goto_if_set FLAG_ITEM_FRESH_WATER_GYM1, Maasje_Gym_Introduction_8
Maasje_Gym_Introduction_6:
# 27 "data/maps/Maasje_Gym/scripts.pory"
	goto_if_set FLAG_ITEM_FRESH_WATER_GYM1, Maasje_Gym_Introduction_12
	return

Maasje_Gym_Introduction_2:
# 11 "data/maps/Maasje_Gym/scripts.pory"
	setflag FLAG_ITEM_FRESH_WATER_GYM1
# 12 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Introduction_Text_0
# 13 "data/maps/Maasje_Gym/scripts.pory"
	waitmessage
# 14 "data/maps/Maasje_Gym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 15 "data/maps/Maasje_Gym/scripts.pory"
	waitmessage
# 16 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Introduction_Text_1
# 17 "data/maps/Maasje_Gym/scripts.pory"
	waitmessage
# 18 "data/maps/Maasje_Gym/scripts.pory"
	release
	end

Maasje_Gym_Introduction_3:
# 10 "data/maps/Maasje_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, Maasje_Gym_Introduction_2
	goto Maasje_Gym_Introduction_1

Maasje_Gym_Introduction_7:
# 22 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Introduction_Text_2
# 23 "data/maps/Maasje_Gym/scripts.pory"
	waitmessage
# 24 "data/maps/Maasje_Gym/scripts.pory"
	release
	end

Maasje_Gym_Introduction_8:
# 21 "data/maps/Maasje_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, Maasje_Gym_Introduction_7
	goto Maasje_Gym_Introduction_6

Maasje_Gym_Introduction_11:
# 28 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Introduction_Text_3
# 29 "data/maps/Maasje_Gym/scripts.pory"
	waitmessage
# 30 "data/maps/Maasje_Gym/scripts.pory"
	release
	end

Maasje_Gym_Introduction_12:
# 27 "data/maps/Maasje_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Maasje_Gym_Introduction_11
	return


Maasje_Gym_Leader_Pete_Longfellow::
# 35 "data/maps/Maasje_Gym/scripts.pory"
	trainerbattle_single TRAINER_PETELONGFELLOW, Maasje_Gym_PeteLongfellow_Introtext, Maasje_Gym_PeteLongfellow_Defeattext, Maasje_Gym_PeteLongfellow_Defeated, NO_MUSIC
# 36 "data/maps/Maasje_Gym/scripts.pory"
	release
	end


Maasje_Gym_PeteLongfellow_Defeated::
# 41 "data/maps/Maasje_Gym/scripts.pory"
	setspeaker Maasje_Gym_PeteLongfellow_Defeated_Text_0
# 42 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_PeteLongfellow_Defeated_Text_1
# 43 "data/maps/Maasje_Gym/scripts.pory"
	waitmessage
# 44 "data/maps/Maasje_Gym/scripts.pory"
	call Maasje_Gym_Set_Gym_Trainers
# 45 "data/maps/Maasje_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 46 "data/maps/Maasje_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 47 "data/maps/Maasje_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 48 "data/maps/Maasje_Gym/scripts.pory"
	setflag FLAG_FACULTY_SYMPATHIZERS_1
# 49 "data/maps/Maasje_Gym/scripts.pory"
	setspeaker NULL
# 50 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_PeteLongfellow_Defeated_Text_2
# 51 "data/maps/Maasje_Gym/scripts.pory"
	waitmessage
# 52 "data/maps/Maasje_Gym/scripts.pory"
	setspeaker Maasje_Gym_PeteLongfellow_Defeated_Text_0
# 53 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_PeteLongfellow_Defeated_Text_3
# 54 "data/maps/Maasje_Gym/scripts.pory"
	waitmessage
# 55 "data/maps/Maasje_Gym/scripts.pory"
	giveitem ITEM_TM_WATER_PULSE
# 56 "data/maps/Maasje_Gym/scripts.pory"
	waitmessage
# 57 "data/maps/Maasje_Gym/scripts.pory"
	setspeaker Maasje_Gym_PeteLongfellow_Defeated_Text_0
# 58 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_PeteLongfellow_Defeated_Text_4, MSGBOX_AUTOCLOSE
# 59 "data/maps/Maasje_Gym/scripts.pory"
	playse SE_CLICK
# 60 "data/maps/Maasje_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 61 "data/maps/Maasje_Gym/scripts.pory"
	setvar VAR_MAASJE_GYM_TIDE_STATE, 5
# 62 "data/maps/Maasje_Gym/scripts.pory"
	call Maasje_Gym_Set_Tide_Metatiles
# 63 "data/maps/Maasje_Gym/scripts.pory"
	special DrawWholeMapView
# 64 "data/maps/Maasje_Gym/scripts.pory"
	delay 60
# 65 "data/maps/Maasje_Gym/scripts.pory"
	playse SE_M_SURF
# 66 "data/maps/Maasje_Gym/scripts.pory"
	delay 60
# 67 "data/maps/Maasje_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 68 "data/maps/Maasje_Gym/scripts.pory"
	release
	end


Maasje_Gym_Set_Gym_Trainers::
# 81 "data/maps/Maasje_Gym/scripts.pory"
	settrainerflag TRAINER_BRAM
# 82 "data/maps/Maasje_Gym/scripts.pory"
	settrainerflag TRAINER_ROB
# 83 "data/maps/Maasje_Gym/scripts.pory"
	settrainerflag TRAINER_ADDY
# 84 "data/maps/Maasje_Gym/scripts.pory"
	settrainerflag TRAINER_MART
	return


Maasje_Gym_Reset_Tide_State::
# 91 "data/maps/Maasje_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Maasje_Gym_Reset_Tide_State_2
# 95 "data/maps/Maasje_Gym/scripts.pory"
	setvar VAR_MAASJE_GYM_TIDE_STATE, 0
Maasje_Gym_Reset_Tide_State_1:
# 97 "data/maps/Maasje_Gym/scripts.pory"
	call Maasje_Gym_Set_Tide_Metatiles
	return

Maasje_Gym_Reset_Tide_State_2:
# 92 "data/maps/Maasje_Gym/scripts.pory"
	setvar VAR_MAASJE_GYM_TIDE_STATE, 5
	goto Maasje_Gym_Reset_Tide_State_1


Maasje_Gym_Set_Tide_Metatiles::
# 101 "data/maps/Maasje_Gym/scripts.pory"
	compare VAR_MAASJE_GYM_TIDE_STATE, 0
	goto_if_eq Maasje_Gym_Set_Tide_Metatiles_1
# 209 "data/maps/Maasje_Gym/scripts.pory"
	compare VAR_MAASJE_GYM_TIDE_STATE, 1
	goto_if_eq Maasje_Gym_Set_Tide_Metatiles_2
# 315 "data/maps/Maasje_Gym/scripts.pory"
	compare VAR_MAASJE_GYM_TIDE_STATE, 2
	goto_if_eq Maasje_Gym_Set_Tide_Metatiles_3
# 421 "data/maps/Maasje_Gym/scripts.pory"
	compare VAR_MAASJE_GYM_TIDE_STATE, 3
	goto_if_eq Maasje_Gym_Set_Tide_Metatiles_4
# 527 "data/maps/Maasje_Gym/scripts.pory"
	compare VAR_MAASJE_GYM_TIDE_STATE, 4
	goto_if_eq Maasje_Gym_Set_Tide_Metatiles_5
# 633 "data/maps/Maasje_Gym/scripts.pory"
	compare VAR_MAASJE_GYM_TIDE_STATE, 5
	goto_if_eq Maasje_Gym_Set_Tide_Metatiles_6
	return

Maasje_Gym_Set_Tide_Metatiles_1:
# 102 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 5, 10, 0x1BE, TRUE
# 103 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 5, 11, 0x170, TRUE
# 104 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 5, 12, 0x1AD, TRUE
# 105 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 9, 0x1A4, FALSE
# 106 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 10, 0x1BF, FALSE
# 107 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 11, 0x1AD, FALSE
# 108 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 12, 0x19B, FALSE
# 109 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 7, 9, 0x1BF, TRUE
# 110 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 7, 10, 0x170, TRUE
# 111 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 7, 11, 0x1AE, TRUE
# 112 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 19, 0x1A3, TRUE
# 113 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 19, 0x19E, FALSE
# 114 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 19, 0x19E, FALSE
# 115 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 19, 0x19C, TRUE
# 116 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 19, 0x1AF, TRUE
# 117 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 20, 0x1BD, TRUE
# 118 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 20, 0x1A3, TRUE
# 119 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 20, 0x19E, FALSE
# 120 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 20, 0x19E, FALSE
# 121 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 20, 0x19C, FALSE
# 122 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 10, 0x1BD, TRUE
# 123 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 11, 0x1AE, FALSE
# 124 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 10, 0x1BE, TRUE
# 125 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 11, 0x1AE, FALSE
# 126 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 8, 0x1AF, TRUE
# 127 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 9, 0x1B7, TRUE
# 128 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 10, 0x1BF, TRUE
# 129 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 11, 0x1AF, TRUE
# 130 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 12, 0x19C, FALSE
# 131 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 13, 0x19E, FALSE
# 132 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 14, 0x19E, FALSE
# 133 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 15, 0x1A3, TRUE
# 134 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 16, 0x1BD, TRUE
# 135 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 6, 0x1BE, TRUE
# 136 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 7, 0x170, TRUE
# 137 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 8, 0x170, TRUE
# 138 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 9, 0x170, TRUE
# 139 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 10, 0x170, TRUE
# 140 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 11, 0x170, TRUE
# 141 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 12, 0x1AF, TRUE
# 142 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 13, 0x19C, FALSE
# 143 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 14, 0x19E, FALSE
# 144 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 15, 0x19E, FALSE
# 145 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 16, 0x1BE, TRUE
# 146 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 6, 0x1BE, TRUE
# 147 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 7, 0x170, TRUE
# 148 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 8, 0x170, TRUE
# 149 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 9, 0x170, TRUE
# 150 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 10, 0x170, TRUE
# 151 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 11, 0x170, TRUE
# 152 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 12, 0x170, TRUE
# 153 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 13, 0x1AE, FALSE
# 154 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 14, 0x19E, FALSE
# 155 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 15, 0x19E, FALSE
# 156 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 16, 0x1A3, TRUE
# 157 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 4, 0x1AF, TRUE
# 158 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 5, 0x1B7, TRUE
# 159 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 6, 0x1BF, TRUE
# 160 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 4, 0x1B5, TRUE
# 161 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 5, 0x1BD, TRUE
# 162 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 6, 0x170, TRUE
# 163 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 5, 0x1BE, TRUE
# 164 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 6, 0x170, TRUE
# 165 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 5, 0x1A3, TRUE
# 166 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 6, 0x1BD, TRUE
# 167 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 6, 0x1BE, TRUE
# 168 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 7, 0x1AD, TRUE
# 169 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 8, 0x1B5, TRUE
# 170 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 9, 0x1BD, TRUE
# 171 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 10, 0x170, TRUE
# 172 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 15, 9, 0x1BE, TRUE
# 173 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 15, 10, 0x170, TRUE
# 174 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 7, 0x1AF, TRUE
# 175 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 8, 0x1B7, TRUE
# 176 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 9, 0x1BF, TRUE
# 177 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 10, 0x170, TRUE
# 178 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 7, 0x170, TRUE
# 179 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 8, 0x170, TRUE
# 180 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 9, 0x170, TRUE
# 181 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 10, 0x170, TRUE
# 182 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 7, 0x1AD, TRUE
# 183 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 8, 0x1B5, TRUE
# 184 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 9, 0x1BD, TRUE
# 185 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 11, 0x1AF, TRUE
# 186 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 12, 0x19C, FALSE
# 187 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 11, 0x1BD, FALSE
# 188 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 12, 0x1AF, TRUE
# 189 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 13, 0x19C, FALSE
# 190 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 11, 0x1A3, TRUE
# 191 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 12, 0x1BD, TRUE
# 192 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 13, 0x1AF, TRUE
# 193 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 14, 0x1AF, TRUE
# 194 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 21, 12, 0x1BE, TRUE
# 195 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 21, 13, 0x170, TRUE
# 196 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 21, 14, 0x170, TRUE
# 197 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 19, 0x1BE, TRUE
# 198 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 20, 0x170, TRUE
# 199 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 21, 0x20D, TRUE
# 200 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 19, 0x1BE, TRUE
# 201 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 20, 0x170, TRUE
# 202 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 21, 0x1AE, FALSE
# 203 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 19, 0x1BF, TRUE
# 204 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 20, 0x170, TRUE
# 205 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 21, 0x1AE, FALSE
	return

Maasje_Gym_Set_Tide_Metatiles_2:
# 210 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 5, 10, 0x1A3, TRUE
# 211 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 5, 11, 0x1B5, TRUE
# 212 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 5, 12, 0x1B5, TRUE
# 213 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 9, 0x19E, FALSE
# 214 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 10, 0x19E, FALSE
# 215 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 11, 0x19E, FALSE
# 216 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 12, 0x19E, FALSE
# 217 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 7, 9, 0x1B7, TRUE
# 218 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 7, 10, 0x1B7, TRUE
# 219 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 7, 11, 0x19C, FALSE
# 220 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 19, 0x1BE, TRUE
# 221 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 19, 0x1BE, TRUE
# 222 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 19, 0x1BE, FALSE
# 223 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 19, 0x1BF, TRUE
# 224 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 19, 0x170, TRUE
# 225 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 20, 0x170, TRUE
# 226 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 20, 0x1AD, TRUE
# 227 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 20, 0x1AE, FALSE
# 228 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 20, 0x1AE, FALSE
# 229 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 20, 0x1AE, FALSE
# 230 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 10, 0x1BD, TRUE
# 231 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 11, 0x1AE, FALSE
# 232 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 10, 0x1BE, TRUE
# 233 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 11, 0x1AE, FALSE
# 234 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 8, 0x1AF, TRUE
# 235 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 9, 0x1B7, TRUE
# 236 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 10, 0x1BF, TRUE
# 237 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 11, 0x1AF, TRUE
# 238 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 12, 0x1B7, TRUE
# 239 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 13, 0x1B7, TRUE
# 240 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 14, 0x1B7, TRUE
# 241 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 15, 0x1BF, TRUE
# 242 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 16, 0x170, TRUE
# 243 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 6, 0x1BE, TRUE
# 244 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 7, 0x170, TRUE
# 245 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 8, 0x170, TRUE
# 246 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 9, 0x170, TRUE
# 247 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 10, 0x170, TRUE
# 248 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 11, 0x170, TRUE
# 249 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 12, 0x170, TRUE
# 250 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 13, 0x170, TRUE
# 251 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 14, 0x170, TRUE
# 252 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 15, 0x170, TRUE
# 253 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 16, 0x170, TRUE
# 254 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 6, 0x1BE, TRUE
# 255 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 7, 0x170, TRUE
# 256 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 8, 0x170, TRUE
# 257 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 9, 0x170, TRUE
# 258 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 10, 0x170, TRUE
# 259 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 11, 0x170, TRUE
# 260 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 12, 0x170, TRUE
# 261 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 13, 0x1AD, FALSE
# 262 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 14, 0x1B5, FALSE
# 263 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 15, 0x1B5, FALSE
# 264 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 16, 0x1B5, TRUE
# 265 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 4, 0x1AF, TRUE
# 266 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 5, 0x1B7, TRUE
# 267 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 6, 0x1B7, TRUE
# 268 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 4, 0x1B5, TRUE
# 269 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 5, 0x1BD, TRUE
# 270 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 6, 0x170, TRUE
# 271 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 5, 0x1BE, TRUE
# 272 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 6, 0x170, TRUE
# 273 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 5, 0x1A3, TRUE
# 274 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 6, 0x1BD, TRUE
# 275 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 6, 0x1BE, TRUE
# 276 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 7, 0x1AD, TRUE
# 277 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 8, 0x1B5, TRUE
# 278 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 9, 0x1BD, TRUE
# 279 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 10, 0x170, TRUE
# 280 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 15, 9, 0x1BE, TRUE
# 281 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 15, 10, 0x170, TRUE
# 282 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 7, 0x1AF, TRUE
# 283 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 8, 0x1B7, TRUE
# 284 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 9, 0x1BF, TRUE
# 285 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 10, 0x170, TRUE
# 286 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 7, 0x170, TRUE
# 287 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 8, 0x170, TRUE
# 288 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 9, 0x170, TRUE
# 289 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 10, 0x170, TRUE
# 290 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 7, 0x1AD, TRUE
# 291 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 8, 0x1B5, TRUE
# 292 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 9, 0x1BD, TRUE
# 293 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 11, 0x1AF, TRUE
# 294 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 12, 0x19C, FALSE
# 295 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 11, 0x1BD, FALSE
# 296 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 12, 0x1AF, TRUE
# 297 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 13, 0x19C, FALSE
# 298 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 11, 0x1A3, TRUE
# 299 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 12, 0x1BD, TRUE
# 300 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 13, 0x1AF, TRUE
# 301 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 14, 0x1AF, TRUE
# 302 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 21, 12, 0x1BE, TRUE
# 303 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 21, 13, 0x170, TRUE
# 304 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 21, 14, 0x170, TRUE
# 305 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 19, 0x1BE, TRUE
# 306 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 20, 0x170, TRUE
# 307 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 21, 0x20D, TRUE
# 308 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 19, 0x1BE, TRUE
# 309 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 20, 0x170, TRUE
# 310 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 21, 0x1AE, FALSE
# 311 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 19, 0x1BF, TRUE
# 312 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 20, 0x170, TRUE
# 313 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 21, 0x1AE, FALSE
	return

Maasje_Gym_Set_Tide_Metatiles_3:
# 316 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 5, 10, 0x1A3, TRUE
# 317 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 5, 11, 0x1B5, TRUE
# 318 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 5, 12, 0x1B5, TRUE
# 319 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 9, 0x19E, FALSE
# 320 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 10, 0x19E, FALSE
# 321 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 11, 0x19E, FALSE
# 322 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 12, 0x19E, FALSE
# 323 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 7, 9, 0x1B7, TRUE
# 324 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 7, 10, 0x1B7, TRUE
# 325 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 7, 11, 0x19C, FALSE
# 326 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 19, 0x1BE, TRUE
# 327 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 19, 0x1BE, TRUE
# 328 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 19, 0x1BE, FALSE
# 329 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 19, 0x1BF, TRUE
# 330 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 19, 0x170, TRUE
# 331 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 20, 0x170, TRUE
# 332 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 20, 0x1AD, TRUE
# 333 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 20, 0x1AE, FALSE
# 334 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 20, 0x1AE, FALSE
# 335 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 20, 0x1AE, FALSE
# 336 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 10, 0x1BD, TRUE
# 337 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 11, 0x1AE, FALSE
# 338 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 10, 0x1BE, TRUE
# 339 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 11, 0x1AE, FALSE
# 340 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 8, 0x1AF, TRUE
# 341 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 9, 0x1B7, TRUE
# 342 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 10, 0x1BF, TRUE
# 343 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 11, 0x1AF, TRUE
# 344 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 12, 0x1B7, FALSE
# 345 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 13, 0x19C, FALSE
# 346 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 14, 0x19E, FALSE
# 347 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 15, 0x1BE, TRUE
# 348 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 16, 0x170, TRUE
# 349 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 6, 0x1BE, TRUE
# 350 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 7, 0x170, TRUE
# 351 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 8, 0x170, TRUE
# 352 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 9, 0x170, TRUE
# 353 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 10, 0x170, TRUE
# 354 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 11, 0x170, TRUE
# 355 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 12, 0x170, TRUE
# 356 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 13, 0x1AE, FALSE
# 357 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 14, 0x19E, FALSE
# 358 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 15, 0x1BE, TRUE
# 359 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 16, 0x170, TRUE
# 360 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 6, 0x1BE, TRUE
# 361 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 7, 0x170, TRUE
# 362 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 8, 0x170, TRUE
# 363 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 9, 0x170, TRUE
# 364 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 10, 0x170, TRUE
# 365 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 11, 0x170, TRUE
# 366 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 12, 0x170, TRUE
# 367 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 13, 0x1AE, FALSE
# 368 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 14, 0x19E, FALSE
# 369 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 15, 0x1A3, FALSE
# 370 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 16, 0x1B5, TRUE
# 371 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 4, 0x1AF, TRUE
# 372 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 5, 0x1B7, TRUE
# 373 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 6, 0x1B7, TRUE
# 374 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 4, 0x1B5, TRUE
# 375 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 5, 0x1BD, TRUE
# 376 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 6, 0x170, TRUE
# 377 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 5, 0x1BE, TRUE
# 378 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 6, 0x170, TRUE
# 379 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 5, 0x1A3, TRUE
# 380 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 6, 0x1BD, TRUE
# 381 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 6, 0x1BE, TRUE
# 382 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 7, 0x1AD, TRUE
# 383 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 8, 0x1B5, TRUE
# 384 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 9, 0x1BD, TRUE
# 385 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 10, 0x170, TRUE
# 386 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 15, 9, 0x1BE, TRUE
# 387 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 15, 10, 0x170, TRUE
# 388 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 7, 0x1AF, TRUE
# 389 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 8, 0x1B7, TRUE
# 390 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 9, 0x1BF, TRUE
# 391 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 10, 0x170, TRUE
# 392 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 7, 0x170, TRUE
# 393 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 8, 0x170, TRUE
# 394 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 9, 0x170, TRUE
# 395 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 10, 0x170, TRUE
# 396 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 7, 0x1AD, TRUE
# 397 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 8, 0x1B5, TRUE
# 398 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 9, 0x1BD, TRUE
# 399 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 11, 0x1AF, TRUE
# 400 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 12, 0x19C, FALSE
# 401 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 11, 0x1BD, FALSE
# 402 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 12, 0x1AF, TRUE
# 403 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 13, 0x19C, FALSE
# 404 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 11, 0x1A3, TRUE
# 405 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 12, 0x1BD, TRUE
# 406 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 13, 0x1AF, TRUE
# 407 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 14, 0x1B7, TRUE
# 408 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 21, 12, 0x1BE, TRUE
# 409 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 21, 13, 0x170, TRUE
# 410 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 21, 14, 0x170, TRUE
# 411 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 19, 0x1BE, TRUE
# 412 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 20, 0x170, TRUE
# 413 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 21, 0x20D, TRUE
# 414 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 19, 0x1BE, TRUE
# 415 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 20, 0x170, TRUE
# 416 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 21, 0x1AE, FALSE
# 417 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 19, 0x1BF, TRUE
# 418 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 20, 0x170, TRUE
# 419 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 21, 0x1AE, FALSE
	return

Maasje_Gym_Set_Tide_Metatiles_4:
# 422 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 5, 10, 0x1BE, TRUE
# 423 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 5, 11, 0x170, TRUE
# 424 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 5, 12, 0x1AD, TRUE
# 425 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 9, 0x1A4, TRUE
# 426 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 10, 0x1BF, TRUE
# 427 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 11, 0x1AD, TRUE
# 428 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 12, 0x19B, TRUE
# 429 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 7, 9, 0x1BF, TRUE
# 430 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 7, 10, 0x170, TRUE
# 431 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 7, 11, 0x1AE, FALSE
# 432 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 19, 0x1A3, TRUE
# 433 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 19, 0x19E, FALSE
# 434 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 19, 0x19E, FALSE
# 435 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 19, 0x19C, TRUE
# 436 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 19, 0x1AF, TRUE
# 437 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 20, 0x1BD, TRUE
# 438 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 20, 0x1A3, TRUE
# 439 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 20, 0x19E, FALSE
# 440 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 20, 0x19E, FALSE
# 441 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 20, 0x19C, FALSE
# 442 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 10, 0x1BD, TRUE
# 443 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 11, 0x1AE, FALSE
# 444 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 10, 0x1BE, TRUE
# 445 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 11, 0x1AE, FALSE
# 446 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 8, 0x1AF, TRUE
# 447 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 9, 0x1B7, TRUE
# 448 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 10, 0x1BF, TRUE
# 449 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 11, 0x1AF, TRUE
# 450 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 12, 0x1B7, TRUE
# 451 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 13, 0x1B7, TRUE
# 452 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 14, 0x1B7, TRUE
# 453 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 15, 0x1BF, TRUE
# 454 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 16, 0x170, TRUE
# 455 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 6, 0x1BE, TRUE
# 456 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 7, 0x170, TRUE
# 457 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 8, 0x170, TRUE
# 458 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 9, 0x170, TRUE
# 459 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 10, 0x170, TRUE
# 460 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 11, 0x170, TRUE
# 461 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 12, 0x170, TRUE
# 462 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 13, 0x170, TRUE
# 463 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 14, 0x170, TRUE
# 464 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 15, 0x170, TRUE
# 465 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 16, 0x170, TRUE
# 466 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 6, 0x1BE, TRUE
# 467 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 7, 0x170, TRUE
# 468 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 8, 0x170, TRUE
# 469 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 9, 0x170, TRUE
# 470 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 10, 0x170, TRUE
# 471 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 11, 0x170, TRUE
# 472 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 12, 0x170, TRUE
# 473 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 13, 0x1AD, TRUE
# 474 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 14, 0x1B5, TRUE
# 475 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 15, 0x1B5, TRUE
# 476 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 16, 0x1B5, TRUE
# 477 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 4, 0x1AF, TRUE
# 478 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 5, 0x1B7, TRUE
# 479 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 6, 0x1B7, TRUE
# 480 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 4, 0x1B5, TRUE
# 481 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 5, 0x1BD, TRUE
# 482 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 6, 0x170, TRUE
# 483 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 5, 0x1BE, TRUE
# 484 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 6, 0x170, TRUE
# 485 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 5, 0x1A3, TRUE
# 486 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 6, 0x1BD, TRUE
# 487 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 6, 0x1BE, TRUE
# 488 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 7, 0x1AD, TRUE
# 489 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 8, 0x1B5, TRUE
# 490 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 9, 0x1BD, TRUE
# 491 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 10, 0x170, TRUE
# 492 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 15, 9, 0x1BE, TRUE
# 493 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 15, 10, 0x170, TRUE
# 494 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 7, 0x1AF, TRUE
# 495 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 8, 0x1B7, TRUE
# 496 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 9, 0x1BF, TRUE
# 497 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 10, 0x170, TRUE
# 498 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 7, 0x170, TRUE
# 499 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 8, 0x170, TRUE
# 500 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 9, 0x170, TRUE
# 501 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 10, 0x170, TRUE
# 502 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 7, 0x1AD, TRUE
# 503 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 8, 0x1B5, TRUE
# 504 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 9, 0x1BD, TRUE
# 505 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 11, 0x1AE, FALSE
# 506 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 12, 0x19E, FALSE
# 507 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 11, 0x19B, FALSE
# 508 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 12, 0x19E, FALSE
# 509 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 13, 0x19E, FALSE
# 510 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 11, 0x19E, FALSE
# 511 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 12, 0x19E, FALSE
# 512 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 13, 0x19E, FALSE
# 513 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 14, 0x1A4, TRUE
# 514 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 21, 12, 0x1A4, TRUE
# 515 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 21, 13, 0x1B7, TRUE
# 516 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 21, 14, 0x1BF, TRUE
# 517 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 19, 0x1A3, TRUE
# 518 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 20, 0x1B5, TRUE
# 519 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 21, 0x22E, TRUE
# 520 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 19, 0x19E, FALSE
# 521 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 20, 0x19E, FALSE
# 522 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 21, 0x19E, FALSE
# 523 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 19, 0x1B7, TRUE
# 524 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 20, 0x1B7, TRUE
# 525 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 21, 0x19C, FALSE
	return

Maasje_Gym_Set_Tide_Metatiles_5:
# 528 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 5, 10, 0x1A3, TRUE
# 529 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 5, 11, 0x1B5, TRUE
# 530 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 5, 12, 0x1B5, TRUE
# 531 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 9, 0x19E, FALSE
# 532 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 10, 0x19E, FALSE
# 533 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 11, 0x19E, FALSE
# 534 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 12, 0x19E, FALSE
# 535 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 7, 9, 0x1B7, TRUE
# 536 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 7, 10, 0x1B7, TRUE
# 537 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 7, 11, 0x19C, FALSE
# 538 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 19, 0x1BE, TRUE
# 539 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 19, 0x1BE, TRUE
# 540 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 19, 0x1BE, FALSE
# 541 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 19, 0x1BF, TRUE
# 542 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 19, 0x170, TRUE
# 543 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 20, 0x170, TRUE
# 544 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 20, 0x1AD, TRUE
# 545 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 20, 0x1AE, FALSE
# 546 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 20, 0x1AE, FALSE
# 547 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 20, 0x1AE, FALSE
# 548 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 10, 0x1B5, TRUE
# 549 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 11, 0x19B, FALSE
# 550 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 10, 0x19E, FALSE
# 551 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 11, 0x19E, FALSE
# 552 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 8, 0x1AE, FALSE
# 553 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 9, 0x19E, FALSE
# 554 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 10, 0x19E, FALSE
# 555 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 11, 0x1A4, TRUE
# 556 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 12, 0x1B7, TRUE
# 557 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 13, 0x1B7, TRUE
# 558 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 14, 0x1B7, TRUE
# 559 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 15, 0x1BF, TRUE
# 560 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 16, 0x170, TRUE
# 561 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 6, 0x1BE, TRUE
# 562 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 7, 0x170, TRUE
# 563 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 8, 0x1AE, FALSE
# 564 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 9, 0x19E, FALSE
# 565 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 10, 0x19E, FALSE
# 566 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 11, 0x1BE, TRUE
# 567 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 12, 0x170, TRUE
# 568 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 13, 0x170, TRUE
# 569 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 14, 0x170, TRUE
# 570 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 15, 0x170, TRUE
# 571 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 16, 0x170, TRUE
# 572 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 6, 0x1BE, TRUE
# 573 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 7, 0x170, TRUE
# 574 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 8, 0x1AE, FALSE
# 575 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 9, 0x19E, FALSE
# 576 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 10, 0x1A4, TRUE
# 577 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 11, 0x1BF, TRUE
# 578 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 12, 0x170, TRUE
# 579 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 13, 0x1AD, TRUE
# 580 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 14, 0x1B5, TRUE
# 581 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 15, 0x1B5, TRUE
# 582 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 16, 0x1B5, TRUE
# 583 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 4, 0x1AE, FALSE
# 584 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 5, 0x19E, FALSE
# 585 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 6, 0x1A4, TRUE
# 586 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 4, 0x19B, FALSE
# 587 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 5, 0x19E, FALSE
# 588 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 6, 0x1BE, TRUE
# 589 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 5, 0x19E, FALSE
# 590 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 6, 0x1BE, TRUE
# 591 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 5, 0x19E, FALSE
# 592 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 6, 0x1BE, TRUE
# 593 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 6, 0x1BE, TRUE
# 594 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 7, 0x1AD, TRUE
# 595 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 8, 0x19B, FALSE
# 596 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 9, 0x19E, FALSE
# 597 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 10, 0x1BE, TRUE
# 598 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 15, 9, 0x19E, FALSE
# 599 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 15, 10, 0x1BE, TRUE
# 600 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 7, 0x1AE, FALSE
# 601 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 8, 0x19E, FALSE
# 602 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 9, 0x19E, FALSE
# 603 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 10, 0x1BE, TRUE
# 604 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 7, 0x1AE, FALSE
# 605 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 8, 0x19E, FALSE
# 606 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 9, 0x1A4, TRUE
# 607 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 10, 0x1BF, TRUE
# 608 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 7, 0x1AE, FALSE
# 609 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 8, 0x19E, FALSE
# 610 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 9, 0x1BE, TRUE
# 611 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 11, 0x1AF, TRUE
# 612 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 12, 0x19C, FALSE
# 613 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 11, 0x1BD, FALSE
# 614 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 12, 0x1AF, TRUE
# 615 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 13, 0x19C, FALSE
# 616 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 11, 0x1A3, TRUE
# 617 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 12, 0x1BD, TRUE
# 618 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 13, 0x1AF, TRUE
# 619 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 14, 0x1B7, TRUE
# 620 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 21, 12, 0x1BE, TRUE
# 621 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 21, 13, 0x170, TRUE
# 622 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 21, 14, 0x170, TRUE
# 623 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 19, 0x1BE, TRUE
# 624 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 20, 0x170, TRUE
# 625 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 21, 0x20D, TRUE
# 626 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 19, 0x1BE, TRUE
# 627 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 20, 0x170, TRUE
# 628 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 21, 0x1AE, FALSE
# 629 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 19, 0x1BF, TRUE
# 630 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 20, 0x170, TRUE
# 631 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 21, 0x1AE, FALSE
	return

Maasje_Gym_Set_Tide_Metatiles_6:
# 634 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 5, 10, 0x1BE, TRUE
# 635 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 5, 11, 0x170, TRUE
# 636 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 5, 12, 0x1AD, TRUE
# 637 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 9, 0x1A4, TRUE
# 638 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 10, 0x1BF, TRUE
# 639 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 11, 0x1AD, TRUE
# 640 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 6, 12, 0x19B, FALSE
# 641 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 7, 9, 0x1BF, TRUE
# 642 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 7, 10, 0x170, TRUE
# 643 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 7, 11, 0x1AE, FALSE
# 644 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 19, 0x1A3, TRUE
# 645 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 19, 0x19E, FALSE
# 646 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 19, 0x19E, FALSE
# 647 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 19, 0x19C, TRUE
# 648 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 19, 0x1AF, TRUE
# 649 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 20, 0x1BD, TRUE
# 650 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 20, 0x1A3, TRUE
# 651 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 20, 0x19E, FALSE
# 652 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 20, 0x19E, FALSE
# 653 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 20, 0x19C, FALSE
# 654 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 10, 0x1BD, TRUE
# 655 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 11, 0x1AE, FALSE
# 656 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 10, 0x1BE, TRUE
# 657 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 11, 0x1AE, FALSE
# 658 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 8, 0x1AE, FALSE
# 659 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 9, 0x19E, FALSE
# 660 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 10, 0x1A3, TRUE
# 661 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 11, 0x19B, FALSE
# 662 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 12, 0x19E, FALSE
# 663 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 13, 0x19E, FALSE
# 664 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 14, 0x19E, FALSE
# 665 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 15, 0x1A3, TRUE
# 666 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 16, 0x1BD, TRUE
# 667 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 6, 0x1A3, TRUE
# 668 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 7, 0x1B5, TRUE
# 669 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 8, 0x19B, FALSE
# 670 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 9, 0x19E, FALSE
# 671 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 10, 0x19E, FALSE
# 672 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 11, 0x19E, FALSE
# 673 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 12, 0x19E, FALSE
# 674 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 13, 0x19E, FALSE
# 675 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 14, 0x19E, FALSE
# 676 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 15, 0x19E, FALSE
# 677 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 12, 16, 0x1BE, TRUE
# 678 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 6, 0x19E, FALSE
# 679 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 7, 0x19E, FALSE
# 680 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 8, 0x19E, FALSE
# 681 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 9, 0x19E, FALSE
# 682 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 10, 0x1A4, TRUE
# 683 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 11, 0x1B7, TRUE
# 684 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 12, 0x1B7, TRUE
# 685 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 13, 0x19C, FALSE
# 686 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 14, 0x19E, FALSE
# 687 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 15, 0x19E, FALSE
# 688 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 13, 16, 0x1A3, TRUE
# 689 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 4, 0x1AF, TRUE
# 690 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 5, 0x1B7, TRUE
# 691 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 8, 6, 0x1B7, TRUE
# 692 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 4, 0x1B5, TRUE
# 693 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 5, 0x1BD, TRUE
# 694 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 9, 6, 0x170, TRUE
# 695 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 5, 0x1BE, TRUE
# 696 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 10, 6, 0x170, TRUE
# 697 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 5, 0x1A3, TRUE
# 698 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 11, 6, 0x1BD, TRUE
# 699 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 6, 0x1A4, TRUE
# 700 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 7, 0x19C, FALSE
# 701 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 8, 0x19E, FALSE
# 702 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 9, 0x1A4, TRUE
# 703 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 14, 10, 0x1BF, TRUE
# 704 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 15, 9, 0x1BE, TRUE
# 705 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 15, 10, 0x170, TRUE
# 706 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 7, 0x1AF, TRUE
# 707 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 8, 0x1B7, TRUE
# 708 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 9, 0x1BF, TRUE
# 709 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 16, 10, 0x170, TRUE
# 710 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 7, 0x170, TRUE
# 711 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 8, 0x170, TRUE
# 712 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 9, 0x170, TRUE
# 713 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 10, 0x170, TRUE
# 714 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 7, 0x1AD, TRUE
# 715 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 8, 0x1B5, TRUE
# 716 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 9, 0x1BD, TRUE
# 717 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 11, 0x1AF, TRUE
# 718 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 12, 0x19C, FALSE
# 719 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 11, 0x1BD, FALSE
# 720 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 12, 0x1AF, TRUE
# 721 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 13, 0x19C, FALSE
# 722 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 11, 0x1A3, TRUE
# 723 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 12, 0x1BD, TRUE
# 724 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 13, 0x1AF, TRUE
# 725 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 20, 14, 0x1B7, TRUE
# 726 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 21, 12, 0x1BE, TRUE
# 727 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 21, 13, 0x170, TRUE
# 728 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 21, 14, 0x170, TRUE
# 729 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 19, 0x1BE, TRUE
# 730 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 20, 0x170, TRUE
# 731 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 17, 21, 0x20D, TRUE
# 732 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 19, 0x1BE, TRUE
# 733 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 20, 0x170, TRUE
# 734 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 18, 21, 0x1AE, FALSE
# 735 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 19, 0x1BF, TRUE
# 736 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 20, 0x170, TRUE
# 737 "data/maps/Maasje_Gym/scripts.pory"
	setmetatile 19, 21, 0x1AE, FALSE
	return


Maasje_Gym_Pillar_SetState_1::
# 742 "data/maps/Maasje_Gym/scripts.pory"
	lock
# 743 "data/maps/Maasje_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Maasje_Gym_Pillar_SetState_1_2
# 748 "data/maps/Maasje_Gym/scripts.pory"
	compare VAR_MAASJE_GYM_TIDE_STATE, 1
	goto_if_eq Maasje_Gym_Pillar_SetState_1_5
# 753 "data/maps/Maasje_Gym/scripts.pory"
	playse SE_CLICK
# 754 "data/maps/Maasje_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 755 "data/maps/Maasje_Gym/scripts.pory"
	setvar VAR_MAASJE_GYM_TIDE_STATE, 1
# 756 "data/maps/Maasje_Gym/scripts.pory"
	call Maasje_Gym_Set_Tide_Metatiles
# 757 "data/maps/Maasje_Gym/scripts.pory"
	special DrawWholeMapView
# 758 "data/maps/Maasje_Gym/scripts.pory"
	delay 60
# 759 "data/maps/Maasje_Gym/scripts.pory"
	playse SE_M_SURF
# 760 "data/maps/Maasje_Gym/scripts.pory"
	delay 60
# 761 "data/maps/Maasje_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 762 "data/maps/Maasje_Gym/scripts.pory"
	release
	end

Maasje_Gym_Pillar_SetState_1_2:
# 744 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Pillar_SetState_1_Text_0, MSGBOX_AUTOCLOSE
# 745 "data/maps/Maasje_Gym/scripts.pory"
	release
	end

Maasje_Gym_Pillar_SetState_1_5:
# 749 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Pillar_SetState_1_Text_1, MSGBOX_AUTOCLOSE
# 750 "data/maps/Maasje_Gym/scripts.pory"
	release
	end


Maasje_Gym_Pillar_SetState_2::
# 767 "data/maps/Maasje_Gym/scripts.pory"
	lock
# 768 "data/maps/Maasje_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Maasje_Gym_Pillar_SetState_2_2
# 773 "data/maps/Maasje_Gym/scripts.pory"
	compare VAR_MAASJE_GYM_TIDE_STATE, 2
	goto_if_eq Maasje_Gym_Pillar_SetState_2_5
# 778 "data/maps/Maasje_Gym/scripts.pory"
	playse SE_CLICK
# 779 "data/maps/Maasje_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 780 "data/maps/Maasje_Gym/scripts.pory"
	setvar VAR_MAASJE_GYM_TIDE_STATE, 2
# 781 "data/maps/Maasje_Gym/scripts.pory"
	call Maasje_Gym_Set_Tide_Metatiles
# 782 "data/maps/Maasje_Gym/scripts.pory"
	special DrawWholeMapView
# 783 "data/maps/Maasje_Gym/scripts.pory"
	delay 60
# 784 "data/maps/Maasje_Gym/scripts.pory"
	playse SE_M_SURF
# 785 "data/maps/Maasje_Gym/scripts.pory"
	delay 60
# 786 "data/maps/Maasje_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 787 "data/maps/Maasje_Gym/scripts.pory"
	release
	end

Maasje_Gym_Pillar_SetState_2_2:
# 769 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Pillar_SetState_1_Text_0, MSGBOX_AUTOCLOSE
# 770 "data/maps/Maasje_Gym/scripts.pory"
	release
	end

Maasje_Gym_Pillar_SetState_2_5:
# 774 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Pillar_SetState_1_Text_1, MSGBOX_AUTOCLOSE
# 775 "data/maps/Maasje_Gym/scripts.pory"
	release
	end


Maasje_Gym_Pillar_SetState_3::
# 792 "data/maps/Maasje_Gym/scripts.pory"
	lock
# 793 "data/maps/Maasje_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Maasje_Gym_Pillar_SetState_3_2
# 798 "data/maps/Maasje_Gym/scripts.pory"
	compare VAR_MAASJE_GYM_TIDE_STATE, 3
	goto_if_eq Maasje_Gym_Pillar_SetState_3_5
# 803 "data/maps/Maasje_Gym/scripts.pory"
	playse SE_CLICK
# 804 "data/maps/Maasje_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 805 "data/maps/Maasje_Gym/scripts.pory"
	setvar VAR_MAASJE_GYM_TIDE_STATE, 3
# 806 "data/maps/Maasje_Gym/scripts.pory"
	call Maasje_Gym_Set_Tide_Metatiles
# 807 "data/maps/Maasje_Gym/scripts.pory"
	special DrawWholeMapView
# 808 "data/maps/Maasje_Gym/scripts.pory"
	delay 60
# 809 "data/maps/Maasje_Gym/scripts.pory"
	playse SE_M_SURF
# 810 "data/maps/Maasje_Gym/scripts.pory"
	delay 60
# 811 "data/maps/Maasje_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 812 "data/maps/Maasje_Gym/scripts.pory"
	release
	end

Maasje_Gym_Pillar_SetState_3_2:
# 794 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Pillar_SetState_1_Text_0, MSGBOX_AUTOCLOSE
# 795 "data/maps/Maasje_Gym/scripts.pory"
	release
	end

Maasje_Gym_Pillar_SetState_3_5:
# 799 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Pillar_SetState_1_Text_1, MSGBOX_AUTOCLOSE
# 800 "data/maps/Maasje_Gym/scripts.pory"
	release
	end


Maasje_Gym_Pillar_SetState_4::
# 817 "data/maps/Maasje_Gym/scripts.pory"
	lock
# 818 "data/maps/Maasje_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Maasje_Gym_Pillar_SetState_4_2
# 823 "data/maps/Maasje_Gym/scripts.pory"
	compare VAR_MAASJE_GYM_TIDE_STATE, 4
	goto_if_eq Maasje_Gym_Pillar_SetState_4_5
# 828 "data/maps/Maasje_Gym/scripts.pory"
	playse SE_CLICK
# 829 "data/maps/Maasje_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 830 "data/maps/Maasje_Gym/scripts.pory"
	setvar VAR_MAASJE_GYM_TIDE_STATE, 4
# 831 "data/maps/Maasje_Gym/scripts.pory"
	call Maasje_Gym_Set_Tide_Metatiles
# 832 "data/maps/Maasje_Gym/scripts.pory"
	special DrawWholeMapView
# 833 "data/maps/Maasje_Gym/scripts.pory"
	delay 60
# 834 "data/maps/Maasje_Gym/scripts.pory"
	playse SE_M_SURF
# 835 "data/maps/Maasje_Gym/scripts.pory"
	delay 60
# 836 "data/maps/Maasje_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 837 "data/maps/Maasje_Gym/scripts.pory"
	release
	end

Maasje_Gym_Pillar_SetState_4_2:
# 819 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Pillar_SetState_1_Text_0, MSGBOX_AUTOCLOSE
# 820 "data/maps/Maasje_Gym/scripts.pory"
	release
	end

Maasje_Gym_Pillar_SetState_4_5:
# 824 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Pillar_SetState_1_Text_1, MSGBOX_AUTOCLOSE
# 825 "data/maps/Maasje_Gym/scripts.pory"
	release
	end


Maasje_Gym_Eventscript_Bram::
# 842 "data/maps/Maasje_Gym/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_BRAM, TRAINER_BRAM, Maasje_Gym_Introtext_Trainer_Bram, Maasje_Gym_Losetext_Trainer_Bram, NULL, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 843 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Eventscript_Bram_Text_0, MSGBOX_AUTOCLOSE
	end


Maasje_Gym_Eventscript_Rob::
# 856 "data/maps/Maasje_Gym/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_ROB, TRAINER_ROB, Maasje_Gym_Introtext_Trainer_Rob, Maasje_Gym_Losetext_Trainer_Rob, NULL, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 857 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Eventscript_Rob_Text_0, MSGBOX_AUTOCLOSE
	end


Maasje_Gym_Basement_Eventscript_Addy::
# 870 "data/maps/Maasje_Gym/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_ADDY, TRAINER_ADDY, Maasje_Gym_Introtext_Trainer_Addy, Maasje_Gym_Losetext_Trainer_Addy, NULL, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 871 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Basement_Eventscript_Addy_Text_0, MSGBOX_AUTOCLOSE
	end


Maasje_Gym_Basement_Eventscript_Mart::
# 884 "data/maps/Maasje_Gym/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_MART, TRAINER_MART, Maasje_Gym_Introtext_Trainer_Mart, Maasje_Gym_Losetext_Trainer_Mart, NULL, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 885 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Basement_Eventscript_Mart_Text_0, MSGBOX_AUTOCLOSE
	end


Maasje_Gym_Introduction_Text_0:
# 12 "data/maps/Maasje_Gym/scripts.pory"
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
# 16 "data/maps/Maasje_Gym/scripts.pory"
	.string "Good luck!!$"

Maasje_Gym_Introduction_Text_2:
# 22 "data/maps/Maasje_Gym/scripts.pory"
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
# 28 "data/maps/Maasje_Gym/scripts.pory"
	.string "Congrats on getting your badge!\p"
	.string "Pete looked a little sour about it, but\n"
	.string "he's still down there waiting for the\l"
	.string "next challenger.$"

Maasje_Gym_PeteLongfellow_Defeated_Text_0:
# 41 "data/maps/Maasje_Gym/scripts.pory"
	.string "PETE$"

Maasje_Gym_PeteLongfellow_Defeated_Text_1:
# 42 "data/maps/Maasje_Gym/scripts.pory"
	.string "In geography we call this longshore\n"
	.string "drift, the tide always reshapes the\l"
	.string "shore in the end.\p"
	.string "Timing the tides takes patience,\n"
	.string "nothing else beats it.\p"
	.string "Here, take this:$"

Maasje_Gym_PeteLongfellow_Defeated_Text_2:
# 50 "data/maps/Maasje_Gym/scripts.pory"
	.string "You received the TIDE BADGE!$"

Maasje_Gym_PeteLongfellow_Defeated_Text_3:
# 53 "data/maps/Maasje_Gym/scripts.pory"
	.string "That badge lets any pokemon up to level\n"
	.string "30 obey you, no matter whose it was\l"
	.string "originally.\p"
	.string "Also, you'll be able to use the move Cut\n"
	.string "outside of battle now.\p"
	.string "For future battles, this might help:$"

Maasje_Gym_PeteLongfellow_Defeated_Text_4:
# 58 "data/maps/Maasje_Gym/scripts.pory"
	.string "That's TM Water Pulse.\p"
	.string "It sends out an ultrasonic wave that\n"
	.string "may leave the foe confused.\p"
	.string "Come back at full moon sometime, it will\n"
	.string "make my Pokemon even stronger.$"

Maasje_Gym_Pillar_SetState_1_Text_0:
# 744 "data/maps/Maasje_Gym/scripts.pory"
	.string "The tide has settled here.\p"
	.string "There's nothing left to adjust.$"

Maasje_Gym_Pillar_SetState_1_Text_1:
# 749 "data/maps/Maasje_Gym/scripts.pory"
	.string "The tide is already at this level.$"

Maasje_Gym_Eventscript_Bram_Text_0:
# 843 "data/maps/Maasje_Gym/scripts.pory"
	.string "Give it a few years and I'll be reading\n"
	.string "the tides better than anyone else in\l"
	.string "MOSA.$"

Maasje_Gym_Eventscript_Rob_Text_0:
# 857 "data/maps/Maasje_Gym/scripts.pory"
	.string "You never know what the low tide will\n"
	.string "uncover. That's what keeps this gym\l"
	.string "interesting.$"

Maasje_Gym_Basement_Eventscript_Addy_Text_0:
# 871 "data/maps/Maasje_Gym/scripts.pory"
	.string "Doesn't matter if the water's high or\n"
	.string "low, the tide pools always bounce back.\l"
	.string "So do I.$"

Maasje_Gym_Basement_Eventscript_Mart_Text_0:
# 885 "data/maps/Maasje_Gym/scripts.pory"
	.string "The tide comes in, the tide goes out.\n"
	.string "Rushing in never wins that fight.$"

Maasje_Gym_PeteLongfellow_Introtext::
# 72 "data/maps/Maasje_Gym/scripts.pory"
	.string "Well, well.\p"
	.string "You challenged the tides and timed well.\p"
	.string "Let me learn you something about tidal\n"
	.string "forces and the glorious power of\l"
	.string "erosion!!$"

Maasje_Gym_PeteLongfellow_Defeattext::
# 76 "data/maps/Maasje_Gym/scripts.pory"
	.string "I might be getting to old for this.\p"
	.string "Maybe my skills have finally lost the\n"
	.string "battle against the high water.$"

Maasje_Gym_Introtext_Trainer_Bram::
# 847 "data/maps/Maasje_Gym/scripts.pory"
	.string "I'm still the rookie lookout here. But my\n"
	.string "WINGULL and I never miss the tide\l"
	.string "coming in!!$"

Maasje_Gym_Losetext_Trainer_Bram::
# 851 "data/maps/Maasje_Gym/scripts.pory"
	.string "Guess I still have a lot to learn about\n"
	.string "riding the waves.$"

Maasje_Gym_Introtext_Trainer_Rob::
# 861 "data/maps/Maasje_Gym/scripts.pory"
	.string "When the water pulls back, all sorts of\n"
	.string "things wash up. My SHELDER are the best\l"
	.string "divers around!!$"

Maasje_Gym_Losetext_Trainer_Rob::
# 865 "data/maps/Maasje_Gym/scripts.pory"
	.string "Looks like the tide swept my shells\n"
	.string "right out from under me.$"

Maasje_Gym_Introtext_Trainer_Addy::
# 875 "data/maps/Maasje_Gym/scripts.pory"
	.string "I tend the tide pools down here. My\n"
	.string "CORSOLA thrives no matter which way\l"
	.string "the tide turns!!$"

Maasje_Gym_Losetext_Trainer_Addy::
# 879 "data/maps/Maasje_Gym/scripts.pory"
	.string "Guess the reef couldn't shield me from\n"
	.string "that one.$"

Maasje_Gym_Introtext_Trainer_Mart::
# 889 "data/maps/Maasje_Gym/scripts.pory"
	.string "My SHUCKLE just clings to the rocks and\n"
	.string "waits out even the highest tide!!$"

Maasje_Gym_Losetext_Trainer_Mart::
# 893 "data/maps/Maasje_Gym/scripts.pory"
	.string "Guess patience alone doesn't win every\n"
	.string "battle.$"
