SiltrootTown_Indoor_Ali_Apothecary_MapScripts::
# 2 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SiltrootTown_Indoor_Ali_Apothecary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SiltrootTown_Indoor_Ali_Apothecary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	map_script_2 VAR_SILTROOT_TOWN_STATE, 0, SiltrootTown_Indoor_Apothecary_Ali_Giel
	.2byte 0


SiltrootTown_Ali_Employer::
# 8 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 9 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	faceplayer
# 10 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Ali_Employer_Text_0
# 11 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 12 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	pokemart SiltrootTown_Mart_Items
# 13 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 14 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end


	.align 2
# 19 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Mart_Items:
# 20 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 21 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 22 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 23 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_NONE

SiltrootTown_RollingTable::
# 29 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 30 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	faceplayer
# 31 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto_if_unset FLAG_MET_ROLLING_TABLE_GUY, SiltrootTown_RollingTable_2
SiltrootTown_RollingTable_1:
# 36 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	special Special_HasGroundMaterial
# 37 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SiltrootTown_RollingTable_5
# 43 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_RollingTable_Text_2, MSGBOX_AUTOCLOSE
# 44 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 48 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	special Special_OpenCaseForRolling
# 49 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitstate
# 50 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	compare VAR_RESULT, 0xFFFF
	goto_if_eq SiltrootTown_RollingTable_8
# 56 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_RollingTable_Text_4, MSGBOX_AUTOCLOSE
# 57 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 58 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	multichoice 0, 0, MULTI_HERB_PREP, FALSE
# 59 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq SiltrootTown_RollingTable_11
# 65 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	copyvar VAR_0x8001, VAR_RESULT
# 67 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	special Special_PrepareHerbTreat
# 68 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	compare VAR_0x8001, 0
	goto_if_eq SiltrootTown_RollingTable_14
# 72 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	compare VAR_0x8001, 1
	goto_if_eq SiltrootTown_RollingTable_15
# 77 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_RollingTable_Text_7, MSGBOX_AUTOCLOSE
# 78 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
SiltrootTown_RollingTable_13:
# 80 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end

SiltrootTown_RollingTable_2:
# 32 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setflag FLAG_MET_ROLLING_TABLE_GUY
# 33 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_RollingTable_Text_0, MSGBOX_AUTOCLOSE
# 34 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
	goto SiltrootTown_RollingTable_1

SiltrootTown_RollingTable_5:
# 38 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_RollingTable_Text_1, MSGBOX_AUTOCLOSE
# 39 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 40 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end

SiltrootTown_RollingTable_8:
# 51 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_RollingTable_Text_3, MSGBOX_AUTOCLOSE
# 52 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 53 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end

SiltrootTown_RollingTable_11:
# 60 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_RollingTable_Text_3, MSGBOX_AUTOCLOSE
# 61 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 62 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end

SiltrootTown_RollingTable_14:
# 69 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_RollingTable_Text_5, MSGBOX_AUTOCLOSE
# 70 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
	goto SiltrootTown_RollingTable_13

SiltrootTown_RollingTable_15:
# 73 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_RollingTable_Text_6, MSGBOX_AUTOCLOSE
# 74 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
	goto SiltrootTown_RollingTable_13


SiltrootTown_Elder_Dialogue::
# 85 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 86 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	faceplayer
# 87 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Elder_Dialogue_Text_0, MSGBOX_AUTOCLOSE
# 88 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 89 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end


SiltrootTown_Woman_Dialogue::
# 94 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 95 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	faceplayer
# 96 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Woman_Dialogue_Text_0, MSGBOX_AUTOCLOSE
# 97 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 98 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end


SiltrootTown_Screen_Dialogue::
# 103 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 104 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	faceplayer
# 105 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Screen_Dialogue_Text_0, MSGBOX_AUTOCLOSE
# 106 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 107 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end


SiltrootTown_Plant_Dialogue::
# 112 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 113 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	faceplayer
# 114 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Plant_Dialogue_Text_0, MSGBOX_AUTOCLOSE
# 115 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 116 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end


SiltrootTown_Indoor_Apothecary_Ali_Giel::
# 121 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 122 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setvar VAR_SILTROOT_TOWN_STATE, 1
# 123 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	playse SE_PIN
# 124 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_0
# 125 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 126 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 127 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_1, MSGBOX_AUTOCLOSE
# 128 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 129 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_1
# 130 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 131 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 132 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
# 133 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_3, MSGBOX_AUTOCLOSE
# 134 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 135 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3
# 136 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 137 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 138 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_4, MSGBOX_AUTOCLOSE
# 139 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 140 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 141 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 5, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_4
# 142 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 143 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	playse SE_PIN
# 144 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 145 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 146 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_5, MSGBOX_AUTOCLOSE
# 147 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 148 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 149 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 150 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 5, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_5
# 151 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 152 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 153 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 5, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6
# 154 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 155 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 156 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
# 157 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_6, MSGBOX_AUTOCLOSE
# 158 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 159 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 5, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_7
# 160 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 161 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 162 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
# 163 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_7
# 164 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 165 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3
# 166 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 167 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_8
# 168 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 169 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 170 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_9, MSGBOX_AUTOCLOSE
# 171 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 172 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 173 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	playse SE_POKENAV_CALL
# 174 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 175 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	playse SE_POKENAV_CALL
# 176 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 177 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 178 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_8
# 179 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
# 180 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_10, MSGBOX_AUTOCLOSE
# 181 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 182 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_9
# 183 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3
# 184 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_10
# 185 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 186 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
# 187 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_11, MSGBOX_AUTOCLOSE
# 188 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 189 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_11
# 190 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 191 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setflag FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1
# 192 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	removeobject 1
# 193 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	removeobject 5
# 194 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 120
# 195 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6
# 196 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 197 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 198 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_12, MSGBOX_AUTOCLOSE
# 199 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 200 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6
# 201 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 202 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end


Siltroottown_Indoor_Apothecary_Ali::
# 207 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 208 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	faceplayer
# 209 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto_if_unset FLAG_SILTROOTTOWN_STASH_SACK, Siltroottown_Indoor_Apothecary_Ali_11
Siltroottown_Indoor_Apothecary_Ali_9:
# 214 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto_if_set FLAG_SILTROOTTOWN_STASH_SACK, Siltroottown_Indoor_Apothecary_Ali_8
Siltroottown_Indoor_Apothecary_Ali_6:
# 252 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto_if_set FLAG_SILTROOTTOWN_STASH_SACK, Siltroottown_Indoor_Apothecary_Ali_5
Siltroottown_Indoor_Apothecary_Ali_1:
# 257 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end

Siltroottown_Indoor_Apothecary_Ali_2:
# 210 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 211 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_0, MSGBOX_AUTOCLOSE
# 212 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
	goto Siltroottown_Indoor_Apothecary_Ali_1

Siltroottown_Indoor_Apothecary_Ali_3:
# 215 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	checkitem ITEM_POKEBLOCK_CASE
# 216 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Siltroottown_Indoor_Apothecary_Ali_14
# 222 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 223 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_2, MSGBOX_AUTOCLOSE
# 224 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 225 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 226 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 227 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 40
# 228 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6
# 229 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 230 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 40
# 231 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, Siltroottown_Indoor_Apothecary_Ali_Movement_0
# 232 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 233 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 40
# 234 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3
# 235 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 236 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 40
# 237 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, Siltroottown_Indoor_Apothecary_Ali_Movement_1
# 238 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 239 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_3, MSGBOX_AUTOCLOSE
# 240 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 241 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 40
# 242 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 243 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_4, MSGBOX_AUTOCLOSE
# 244 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 245 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	giveitem ITEM_POKEBLOCK_CASE
# 246 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 247 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_5, MSGBOX_AUTOCLOSE
# 248 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
	goto Siltroottown_Indoor_Apothecary_Ali_1

Siltroottown_Indoor_Apothecary_Ali_4:
# 253 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 254 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_6
# 255 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
	goto Siltroottown_Indoor_Apothecary_Ali_1

Siltroottown_Indoor_Apothecary_Ali_5:
# 252 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto_if_set FLAG_HIDE_SCOTT_AFTER_CONVO, Siltroottown_Indoor_Apothecary_Ali_4
	goto Siltroottown_Indoor_Apothecary_Ali_1

Siltroottown_Indoor_Apothecary_Ali_8:
# 214 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto_if_unset FLAG_HIDE_SCOTT_AFTER_CONVO, Siltroottown_Indoor_Apothecary_Ali_3
	goto Siltroottown_Indoor_Apothecary_Ali_6

Siltroottown_Indoor_Apothecary_Ali_11:
# 209 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto_if_unset FLAG_HIDE_SCOTT_AFTER_CONVO, Siltroottown_Indoor_Apothecary_Ali_2
	goto Siltroottown_Indoor_Apothecary_Ali_9

Siltroottown_Indoor_Apothecary_Ali_14:
# 217 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 218 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_1, MSGBOX_AUTOCLOSE
# 219 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
	goto Siltroottown_Indoor_Apothecary_Ali_1


SiltrootTown_PriceBoard::
# 263 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 264 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_PriceBoard_Text_0, MSGBOX_AUTOCLOSE
# 265 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 266 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end


SiltrootTown_HerbGuide::
# 272 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 273 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	faceplayer
# 274 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_HerbGuide_Text_0, MSGBOX_YESNO
# 275 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SiltrootTown_HerbGuide_2
# 281 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_HerbGuide_Menu:
# 282 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	multichoice 0, 0, MULTI_HERB_GUIDE, FALSE
# 283 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SiltrootTown_HerbGuide_5
SiltrootTown_HerbGuide_4:
# 288 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SiltrootTown_HerbGuide_8
SiltrootTown_HerbGuide_7:
# 293 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq SiltrootTown_HerbGuide_11
SiltrootTown_HerbGuide_10:
# 298 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq SiltrootTown_HerbGuide_14
SiltrootTown_HerbGuide_13:
# 304 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_HerbGuide_Text_6, MSGBOX_AUTOCLOSE
# 305 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 306 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end

SiltrootTown_HerbGuide_2:
# 276 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_HerbGuide_Text_1, MSGBOX_AUTOCLOSE
# 277 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 278 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end

SiltrootTown_HerbGuide_5:
# 284 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_HerbGuide_Text_2, MSGBOX_AUTOCLOSE
# 285 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 286 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto SiltrootTown_HerbGuide_Menu
	goto SiltrootTown_HerbGuide_4

SiltrootTown_HerbGuide_8:
# 289 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_HerbGuide_Text_3, MSGBOX_AUTOCLOSE
# 290 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 291 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto SiltrootTown_HerbGuide_Menu
	goto SiltrootTown_HerbGuide_7

SiltrootTown_HerbGuide_11:
# 294 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_HerbGuide_Text_4, MSGBOX_AUTOCLOSE
# 295 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 296 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto SiltrootTown_HerbGuide_Menu
	goto SiltrootTown_HerbGuide_10

SiltrootTown_HerbGuide_14:
# 299 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_HerbGuide_Text_5, MSGBOX_AUTOCLOSE
# 300 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 301 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto SiltrootTown_HerbGuide_Menu
	goto SiltrootTown_HerbGuide_13


# 124 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_0:
# 124 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	emote_question_mark
# 124 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_down
	step_end

# 129 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_1:
# 129 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_left
# 129 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_down
	step_end

# 131 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2:
# 131 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_left
	step_end

# 135 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3:
# 135 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_down
	step_end

# 141 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_4:
# 141 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 141 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 141 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 141 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 141 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 141 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_right
# 141 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_right
# 141 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_right
# 141 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_down
# 141 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	emote_question_mark
	step_end

# 150 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_5:
# 150 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
# 150 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_right
	step_end

# 153 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6:
# 153 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_up
	step_end

# 159 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_7:
# 159 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 159 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_left
# 159 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_left
# 159 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_left
# 159 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
# 159 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
# 159 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
# 159 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
# 159 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
	step_end

# 178 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_8:
# 178 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	emote_question_mark
	step_end

# 182 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_9:
# 182 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_down
# 182 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_down
# 182 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_down
# 182 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_right
	step_end

# 184 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_10:
# 184 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_right
# 184 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_left
	step_end

# 189 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_11:
# 189 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_down
	step_end

# 231 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
Siltroottown_Indoor_Apothecary_Ali_Movement_0:
# 231 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_right
	step_end

# 237 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
Siltroottown_Indoor_Apothecary_Ali_Movement_1:
# 237 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_player
	step_end

SiltrootTown_Ali_Employer_Text_0:
# 10 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Hi there. A new batch just arrived.\n"
	.string "How can I help?$"

SiltrootTown_RollingTable_Text_0:
# 33 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Hey. Name's Rudo.\p"
	.string "I've been rolling longer than Ali's been\n"
	.string "stargazing.\p"
	.string "Used to work the underground prep\n"
	.string "circuit in Lionsarch before he brought\l"
	.string "me in.\p"
	.string "Now I handle all the prep here - Joints,\n"
	.string "Blunts, Bowls.\p"
	.string "You bring me the grind, I'll turn it into\n"
	.string "something your Pokémon won't forget.$"

SiltrootTown_RollingTable_Text_1:
# 38 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "No grind, no roll.\p"
	.string "Find someone with a Grinder, grind your\n"
	.string "buds, then come back.$"

SiltrootTown_RollingTable_Text_2:
# 43 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Nice. Pick which grind you want to roll.$"

SiltrootTown_RollingTable_Text_3:
# 51 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "No worries. Come back when you're ready.$"

SiltrootTown_RollingTable_Text_4:
# 56 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Alright. What prep do you want?$"

SiltrootTown_RollingTable_Text_5:
# 69 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "There you go - rolled it into a Joint.\p"
	.string "Nice and even. Use it with your Pokemon\n"
	.string "and they'll feel it.$"

SiltrootTown_RollingTable_Text_6:
# 73 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Blunt's done.\p"
	.string "Two dominant strains packed tight. Hits\n"
	.string "harder than a Joint.\p"
	.string "Use it with your Pokemon.$"

SiltrootTown_RollingTable_Text_7:
# 77 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Bowl's packed.\p"
	.string "Pure concentrated top strain - nothing\n"
	.string "balanced about it.\p"
	.string "Use it with your Pokemon.$"

SiltrootTown_Elder_Dialogue_Text_0:
# 87 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "My doctor prescribed me all sorts of\n"
	.string "pills for my stiff hip... but Ali's\l"
	.string "'special brownies' are the only thing\l"
	.string "that work.\p"
	.string "I feel twenty years younger... and very,\n"
	.string "very hungry.\p"
	.string "Do you have any cookies, dear?$"

SiltrootTown_Woman_Dialogue_Text_0:
# 96 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "I don't even smoke.\p"
	.string "I just come here to sit in the fog.\p"
	.string "It is the only place in town where\n"
	.string "nobody asks me to do anything.\p"
	.string "It's like a sanctuary... a very smelly\n"
	.string "sanctuary.$"

SiltrootTown_Screen_Dialogue_Text_0:
# 105 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Eight hundred for a gram of OG Kush?!\p"
	.string "Inflation is hitting us hard.\p"
	.string "I might have to settle for the Lemon\n"
	.string "Haze mix this week.\p"
	.string "It's weaker, but it leaves enough money\n"
	.string "for snacks.$"

SiltrootTown_Plant_Dialogue_Text_0:
# 114 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Look at the leaves on this one.\p"
	.string "They call it 'Indica'.\p"
	.string "Ali says if you stare at it long enough,\n"
	.string "you can see the cosmos.\p"
	.string "I have been staring for ten minutes and\n"
	.string "I only see a very fuzzy caterpie.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0:
# 126 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Ali$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_1:
# 127 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Whoa... enter the event horizon, my\n"
	.string "friend.\p"
	.string "You have pulled into my gravity well.\p"
	.string "You look like you are carrying a lot of\n"
	.string "mass on your shoulders.\p"
	.string "We have the finest herbs here... grown\n"
	.string "with hydroponics that rival NASA specs.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2:
# 132 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Giel$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_3:
# 133 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "cough... COUGH!\p"
	.string "Don't let him start on the space stuff,\n"
	.string "kid.\p"
	.string "He stares at the sky all night.\p"
	.string "It's just lights in the dark, Ali.\p"
	.string "cough...\p"
	.string "Like an Artic Monkey concert but\n"
	.string "further away.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_4:
# 138 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Wait... the vibrations are shifting.\p"
	.string "Daan sent you?\p"
	.string "Whoa. That guy is intense.\p"
	.string "Always shouting about 'Mother Nature'...\p"
	.string "He thinks too small.\p"
	.string "I'm thinking about the bigger picture.\n"
	.string "The cosmos. The singularity.\p"
	.string "Talking about singularity... Slowbro,\n"
	.string "bring me a sample of that OG Kush.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_5:
# 146 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Slowbro, abort launch.\p"
	.string "Our guest is grounded.\p"
	.string "More for us, right?\p"
	.string "I need the focus anyway.\p"
	.string "My Master's thesis on supermassive\n"
	.string "black holes isn't going to write itself.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_6:
# 157 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Thanks Slowbro. These herbs will do me\n"
	.string "good.\p"
	.string "cough... COUGH!$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_7:
# 163 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "So you need a ride to Lion's Arch?\p"
	.string "That cold ass harbor up north?\p"
	.string "Why would anyone want to go there?\p"
	.string "There's no good music scene, apart from\n"
	.string "a disco club in a random basement.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_8:
# 167 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "It is a long trip across the wild ocean.\p"
	.string "You need my neighbor, Scott.\p"
	.string "He... moves inventory for me.\p"
	.string "This business funds my, uh... 'hardware\n"
	.string "acquisitions'.\p"
	.string "Rocket fuel isn't cheap, you know?\p"
	.string "I mean... high-quality fertilizer. Yeah.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_9:
# 170 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "I believe in Karma. Celestial mechanics.\p"
	.string "I help you, you help me.\p"
	.string "I have a client in Lion's Arch.\p"
	.string "A DJ... cool guy.\p"
	.string "He helps fund my 'Project Star-Shot'.\p"
	.string "I mean, he buys a lot of product.\p"
	.string "I have a stash stacked in an old shed\n"
	.string "deep in the southern mangroves.\p"
	.string "Go get the package, bring it to Scott,\n"
	.string "and tell him it is for the 'Ice Cold' run.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_10:
# 180 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "...\p"
	.string "Wait... that's my phone?\p"
	.string "Oh for the love of...\p"
	.string "It's her.\p"
	.string "She probably crashed her car again or\n"
	.string "needs 'emotional support'.\p"
	.string "I can't deal with this drama right now,\n"
	.string "but I have to take this.\p"
	.string "...COUGH!\p"
	.string "See you around, kid. Don't let the\n"
	.string "system grind you down.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_11:
# 187 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Oh... if you are ever visit Hezik Town,\n"
	.string "let me know.\p"
	.string "Maybe you can visit one of my history\n"
	.string "lectures, girls love that shit.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_12:
# 198 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "He loves that woman, even if the\n"
	.string "thermodynamics of their relationship\l"
	.string "are unstable.\p"
	.string "Alright, good vibes only.\p"
	.string "Go to the southern mangroves, grab the\n"
	.string "stash, find Scott.\p"
	.string "And watch the sky... big things are\n"
	.string "coming.$"

Siltroottown_Indoor_Apothecary_Ali_Text_0:
# 211 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Follow coastline south, there you'll\n"
	.string "find a passage to a small shed.\p"
	.string "Feel free to take any samples if you'd\n"
	.string "like.\p"
	.string "The strains that are in that shed are\n"
	.string "some of the strongest I got hehe.$"

Siltroottown_Indoor_Apothecary_Ali_Text_1:
# 218 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "You've got my Stash Case.\p"
	.string "Now go find Scott - he is right next\n"
	.string "door.\p"
	.string "Show it to him and tell him it's for the\n"
	.string "'Ice Cold' run.$"

Siltroottown_Indoor_Apothecary_Ali_Text_2:
# 223 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Ah, the satellite returns to base.\p"
	.string "You smell like swamp water... and\n"
	.string "success.\p"
	.string "Those Slowbros in the shed are hard\n"
	.string "workers, but their processing speed is\l"
	.string "a bit low, right?\p"
	.string "You got the package? Stellar.\p"
	.string "My client in Lion's Arch is going to be\n"
	.string "very happy.\p"
	.string "This funds the next phase of the... uh,\n"
	.string "'hydro-garden project'.$"

Siltroottown_Indoor_Apothecary_Ali_Text_3:
# 239 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Okay, listen closely.\p"
	.string "Go to the house at the very end of the\n"
	.string "mudflat, right next to mine.\p"
	.string "That is where Scott lives.\p"
	.string "He is a bit... weird.\p"
	.string "And he wears these experimental\n"
	.string "goggles all the time.\p"
	.string "Do not ask him about them.\p"
	.string "Just show him the package and tell him\n"
	.string "you need an 'Ice Cold' run.\p"
	.string "Good luck kiddo.$"

Siltroottown_Indoor_Apothecary_Ali_Text_4:
# 243 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Oh - one more thing.\p"
	.string "Take this.$"

Siltroottown_Indoor_Apothecary_Ali_Text_5:
# 247 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "That is my personal Stash Case.\p"
	.string "There is only one like it in the world.\p"
	.string "Scott will recognize it.\p"
	.string "We go way back, him and me.\p"
	.string "Many nights under the stars, that case,\n"
	.string "his goggles, and my telescope.\p"
	.string "Just show it to him and he will know you\n"
	.string "are from me.\p"
	.string "And hey - you can also use it to store\n"
	.string "your grind from a Grinder.\l"
	.string "Bring it back here and my Rolling Table\l"
	.string "guy will roll it into a Joint, Blunt, or\l"
	.string "Bowl for your Pokémon.\p"
	.string "Keeps them sharp. Trust the process.$"

Siltroottown_Indoor_Apothecary_Ali_Text_6:
# 254 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "So you've met scott?\p"
	.string "He's a little bit of weirdo, I know, but\n"
	.string "he gets the job done.\p"
	.string "Good luck on your trip across the\n"
	.string "ocean, it's gonna be a wild one!\p"
	.string "Let me know when you have delivered the\n"
	.string "stash.\p"
	.string "See you around.$"

SiltrootTown_PriceBoard_Text_0:
# 264 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "A large screen displays today's\n"
	.string "available strains.\p"
	.string "Silver Haze ............. ¥300\l"
	.string "Northern Lights ...... ¥400\l"
	.string "Lemon Haze .............. ¥600\l"
	.string "OG Kush ................... ¥800\p"
	.string "'From the cosmos to your Pokémon.\l"
	.string "Ali's Apothecary - Grown beyond the\l"
	.string "stars.'$"

SiltrootTown_HerbGuide_Text_0:
# 274 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Hey, first time at an Apothecary?\p"
	.string "Want me to explain how the dark web of\n"
	.string "'herbs' works?$"

SiltrootTown_HerbGuide_Text_1:
# 276 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "No worries. Come find me if you have\n"
	.string "questions.$"

SiltrootTown_HerbGuide_Text_2:
# 284 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "The Grinder is where it all starts.\p"
	.string "You put a strain - a bud - into the\n"
	.string "Grinder and it spins it down into a\l"
	.string "grind.\p"
	.string "That grind goes into your Stash Case.\p"
	.string "You can carry multiple grinds at once.\p"
	.string "One slot per grind.$"

SiltrootTown_HerbGuide_Text_3:
# 289 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Each grind takes on the name of the\n"
	.string "strongest effect in the strain.\p"
	.string "Strains can give 5 different effects.\p"
	.string "Some strains give an energetic effect\n"
	.string "while others boost creativity.\p"
	.string "There are also strains that help you\n"
	.string "Relax or Focus.\p"
	.string "Lastly there are some strains that\n"
	.string "Uplift you when you feel down.\p"
	.string "If the strain is balanced across all\n"
	.string "flavors, the grind and final prep get a\l"
	.string "Premium name.$"

SiltrootTown_HerbGuide_Text_4:
# 294 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "The Rolling Table in this shop is run by\n"
	.string "Rudo.\p"
	.string "Bring him your grind and he'll roll it\n"
	.string "into something your Pokémon can use.\p"
	.string "You pick which grind from your Stash\n"
	.string "Case, then pick the prep type.\p"
	.string "Feed the result to your Pokémon to\n"
	.string "boost their stats.$"

SiltrootTown_HerbGuide_Text_5:
# 299 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Three ways to prep your grind for\n"
	.string "consumption.\p"
	.string "A Joint is smooth and balanced - all\n"
	.string "flavors carry through evenly.\p"
	.string "A Blunt is double-packed - the two\n"
	.string "strongest flavors hit harder than a\l"
	.string "Joint.\p"
	.string "A Bowl is pure top strain - maximum\n"
	.string "effect on one stat, nothing else.\p"
	.string "The 'Feel' number on the item tells you\n"
	.string "how potent it is.\p"
	.string "Higher Feel, stronger effect.$"

SiltrootTown_HerbGuide_Text_6:
# 304 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Alright. You know where to find me.$"
