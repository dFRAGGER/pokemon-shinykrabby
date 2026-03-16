LabJariIndoorF0_MapScripts::
# 2 "data/maps/LabJariIndoorF0/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LabJariIndoorF0_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/LabJariIndoorF0/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LabJariIndoorF0_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LabJariIndoorF0_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_PROFESSOR_BIRDS_DISCOVERY
# 4 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_DISABLE_FOLLOWER_POKEMON
	return

LabJariIndoorF0_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/LabJariIndoorF0/scripts.pory"
	map_script_2 VAR_RECIEVED_STARTER_POKEMON, 0, LabJarinIndoorF0_Eventscript_Entrance
	.2byte 0


LabJarinIndoorF0_Eventscript_Entrance::
# 12 "data/maps/LabJariIndoorF0/scripts.pory"
	lock
# 13 "data/maps/LabJariIndoorF0/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 1
# 14 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJarinIndoorF0_Eventscript_Entrance_Text_0, MSGBOX_AUTOCLOSE
# 15 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 16 "data/maps/LabJariIndoorF0/scripts.pory"
	release
	return


ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection::
# 20 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 21 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_2
# 46 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_1:
# 48 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_2:
# 22 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 23 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_0, MSGBOX_YESNO
# 24 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_6
ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_5:
# 27 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_9
ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_8:
# 43 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_1

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_6:
# 25 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_5

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_9:
# 28 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 29 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 30 "data/maps/LabJariIndoorF0/scripts.pory"
	waitfanfare
# 31 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 32 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHARMANDER
# 33 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 9
# 34 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 35 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CHARMANDER
# 36 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 37 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_8

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_11:
# 38 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 39 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_8


ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection::
# 53 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 54 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_2
# 79 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_1:
# 81 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_2:
# 55 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 56 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_Text_0, MSGBOX_YESNO
# 57 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_6
ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_5:
# 60 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_9
ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_8:
# 76 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_1

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_6:
# 58 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_5

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_9:
# 61 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 62 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 63 "data/maps/LabJariIndoorF0/scripts.pory"
	waitfanfare
# 64 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 65 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_BULBASAUR
# 66 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 8
# 67 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 68 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_BULBASAUR
# 69 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 70 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_8

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_11:
# 71 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 72 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_8


ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection::
# 86 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 87 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_2
# 112 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_1:
# 114 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_2:
# 88 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 89 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_Text_0, MSGBOX_YESNO
# 90 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_6
ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_5:
# 93 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_9
ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_8:
# 109 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_1

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_6:
# 91 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_5

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_9:
# 94 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 95 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 96 "data/maps/LabJariIndoorF0/scripts.pory"
	waitfanfare
# 97 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 98 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_SQUIRTLE
# 99 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 7
# 100 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 101 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_SQUIRTLE
# 102 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 103 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_8

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_11:
# 104 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 105 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection::
# 120 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 121 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_2
# 146 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_1:
# 148 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_2:
# 122 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 123 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_Text_0, MSGBOX_YESNO
# 124 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_5:
# 127 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_8:
# 143 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_6:
# 125 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_9:
# 128 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 129 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 130 "data/maps/LabJariIndoorF0/scripts.pory"
	waitfanfare
# 131 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 132 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CYNDAQUIL
# 133 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 6
# 134 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 135 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CYNDAQUIL
# 136 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 137 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_11:
# 138 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 139 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection::
# 153 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 154 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_2
# 179 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_1:
# 181 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_2:
# 155 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 156 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_Text_0, MSGBOX_YESNO
# 157 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_5:
# 160 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_8:
# 176 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_6:
# 158 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_9:
# 161 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 162 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 163 "data/maps/LabJariIndoorF0/scripts.pory"
	waitfanfare
# 164 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 165 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHIKORITA
# 166 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 5
# 167 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 168 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CHIKORITA
# 169 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 170 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_11:
# 171 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 172 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection::
# 186 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 187 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_2
# 212 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_1:
# 214 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_2:
# 188 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 189 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_Text_0, MSGBOX_YESNO
# 190 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_5:
# 193 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_8:
# 209 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_6:
# 191 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_9:
# 194 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 195 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 196 "data/maps/LabJariIndoorF0/scripts.pory"
	waitfanfare
# 197 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 198 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_TOTODILE
# 199 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 4
# 200 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 201 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOTODILE
# 202 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 203 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_11:
# 204 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 205 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection::
# 219 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 220 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_2
# 245 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_1:
# 247 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_2:
# 221 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 222 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_Text_0, MSGBOX_YESNO
# 223 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_5:
# 226 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_8:
# 242 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_6:
# 224 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_9:
# 227 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 228 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 229 "data/maps/LabJariIndoorF0/scripts.pory"
	waitfanfare
# 230 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 231 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_TORCHIC
# 232 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 3
# 233 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 234 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TORCHIC
# 235 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 236 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_11:
# 237 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 238 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection::
# 252 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 253 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_2
# 278 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_1:
# 280 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_2:
# 254 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 255 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_Text_0, MSGBOX_YESNO
# 256 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_5:
# 259 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_8:
# 275 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_6:
# 257 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_9:
# 260 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 261 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 262 "data/maps/LabJariIndoorF0/scripts.pory"
	waitfanfare
# 263 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 264 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_TREECKO
# 265 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 2
# 266 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 267 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TREECKO
# 268 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 269 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_11:
# 270 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 271 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection::
# 285 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 286 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_2
# 311 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_1:
# 313 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_2:
# 287 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 288 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_Text_0, MSGBOX_YESNO
# 289 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_5:
# 292 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_8:
# 308 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_6:
# 290 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_9:
# 293 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 294 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 295 "data/maps/LabJariIndoorF0/scripts.pory"
	waitfanfare
# 296 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 297 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_MUDKIP
# 298 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 1
# 299 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 300 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MUDKIP
# 301 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 302 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_11:
# 303 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 304 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_8


ErpusCity_ProfessorBirdsLab_Eventscript_Kanto_Sign::
# 318 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 319 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_Kanto_Sign_Text_0
# 320 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 321 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return


ErpusCity_ProfessorBirdsLab_Eventscript_Johto_Sign::
# 325 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 326 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_Johto_Sign_Text_0
# 327 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 328 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return


ErpusCity_ProfessorBirdsLab_Eventscript_Hoenn_Sign::
# 332 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 333 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_Hoenn_Sign_Text_0
# 334 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 335 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return


ErpusCity_ProfessorBirdsLab_Eventscript_TaylorSwift_Sign::
# 339 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 340 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_TaylorSwift_Sign_Text_0
# 341 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 342 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return


LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit::
# 346 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 347 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_CHOICE, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_2
# 372 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_5
# 373 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, stopplayer
# 374 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement 0
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_1:
# 377 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_2:
# 348 "data/maps/LabJariIndoorF0/scripts.pory"
	playse SE_PIN
# 349 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_0
# 350 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement
# 351 "data/maps/LabJariIndoorF0/scripts.pory"
	setspeaker LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_0
# 352 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_1
# 353 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 354 "data/maps/LabJariIndoorF0/scripts.pory"
	setspeaker LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_0
# 355 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_2
# 356 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 357 "data/maps/LabJariIndoorF0/scripts.pory"
	clearflag FLAG_PROFESSOR_BIRDS_DISCOVERY
# 358 "data/maps/LabJariIndoorF0/scripts.pory"
	clearflag FLAG_DISABLE_FOLLOWER_POKEMON
# 359 "data/maps/LabJariIndoorF0/scripts.pory"
	addobject 10
# 360 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement 10, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_1
# 361 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement
# 362 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_2
# 363 "data/maps/LabJariIndoorF0/scripts.pory"
	setspeaker LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_3
# 364 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_4
# 365 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 366 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_TO_BLACK
# 367 "data/maps/LabJariIndoorF0/scripts.pory"
	warpsilent MAP_ERP_CITY, 0
# 368 "data/maps/LabJariIndoorF0/scripts.pory"
	waitstate
# 369 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_1


LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit::
# 381 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 382 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_CHOICE, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_2
# 407 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_5
# 408 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, stopplayer
# 409 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement 0
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_1:
# 411 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_2:
# 383 "data/maps/LabJariIndoorF0/scripts.pory"
	playse SE_PIN
# 384 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_0
# 385 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement
# 386 "data/maps/LabJariIndoorF0/scripts.pory"
	setspeaker LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_0
# 387 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_1
# 388 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 389 "data/maps/LabJariIndoorF0/scripts.pory"
	setspeaker LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_0
# 390 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_2
# 391 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 392 "data/maps/LabJariIndoorF0/scripts.pory"
	clearflag FLAG_PROFESSOR_BIRDS_DISCOVERY
# 393 "data/maps/LabJariIndoorF0/scripts.pory"
	clearflag FLAG_DISABLE_FOLLOWER_POKEMON
# 394 "data/maps/LabJariIndoorF0/scripts.pory"
	addobject 10
# 395 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement 10, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_Movement_0
# 396 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement
# 397 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_Movement_1
# 398 "data/maps/LabJariIndoorF0/scripts.pory"
	setspeaker LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_3
# 399 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_4
# 400 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 401 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_TO_BLACK
# 402 "data/maps/LabJariIndoorF0/scripts.pory"
	warpsilent MAP_ERP_CITY, 0
# 403 "data/maps/LabJariIndoorF0/scripts.pory"
	waitstate
# 404 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_1


# 414 "data/maps/LabJariIndoorF0/scripts.pory"
stopplayer:
# 415 "data/maps/LabJariIndoorF0/scripts.pory"
	walk_down
	step_end

# 349 "data/maps/LabJariIndoorF0/scripts.pory"
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_0:
# 349 "data/maps/LabJariIndoorF0/scripts.pory"
	emote_exclamation_mark
	step_end

# 360 "data/maps/LabJariIndoorF0/scripts.pory"
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_1:
# 360 "data/maps/LabJariIndoorF0/scripts.pory"
	walk_fast_right
# 360 "data/maps/LabJariIndoorF0/scripts.pory"
	walk_fast_down
# 360 "data/maps/LabJariIndoorF0/scripts.pory"
	face_left
	step_end

# 362 "data/maps/LabJariIndoorF0/scripts.pory"
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_2:
# 362 "data/maps/LabJariIndoorF0/scripts.pory"
	face_right
	step_end

# 395 "data/maps/LabJariIndoorF0/scripts.pory"
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_Movement_0:
# 395 "data/maps/LabJariIndoorF0/scripts.pory"
	walk_fast_down
# 395 "data/maps/LabJariIndoorF0/scripts.pory"
	face_right
	step_end

# 397 "data/maps/LabJariIndoorF0/scripts.pory"
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_Movement_1:
# 397 "data/maps/LabJariIndoorF0/scripts.pory"
	face_left
	step_end

LabJarinIndoorF0_Eventscript_Entrance_Text_0:
# 14 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "HOLY MOLY!!\p"
	.string "Look at all those Pokeballs!\p"
	.string "What would be in them?$"

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_0:
# 23 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Charmander, want to slide the pokeball\l"
	.string "in your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1:
# 25 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Lets see what is in the other pokeballs.$"

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2:
# 46 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Better leave quickly..$"

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_Text_0:
# 56 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Bulbasaur, want to slide the pokeball in\l"
	.string "your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_Text_0:
# 89 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Squirtle, want to slide the pokeball in\l"
	.string "your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_Text_0:
# 123 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Cyndaquil, want to slide the pokeball in\l"
	.string "your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_Text_0:
# 156 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Chikorita, want to slide the pokeball in\l"
	.string "your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_Text_0:
# 189 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Totodile, want to slide the pokeball in\l"
	.string "your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_Text_0:
# 222 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain Torchic,\n"
	.string "want to slide the pokeball in your\l"
	.string "pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_Text_0:
# 255 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain Treecko,\n"
	.string "want to slide the pokeball in your\l"
	.string "pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_Text_0:
# 288 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain Mudkip,\n"
	.string "want to slide the pokeball in your\l"
	.string "pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscript_Kanto_Sign_Text_0:
# 319 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "An almost illegible note is scrawled on\n"
	.string "the paper:\p"
	.string "KANTOOOO!!?$"

ErpusCity_ProfessorBirdsLab_Eventscript_Johto_Sign_Text_0:
# 326 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "An almost illegible note is scrawled on\n"
	.string "the paper:\p"
	.string "JOHTOO?!$"

ErpusCity_ProfessorBirdsLab_Eventscript_Hoenn_Sign_Text_0:
# 333 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "An almost illegible note is scrawled on\n"
	.string "the paper:\p"
	.string "HOEENN??$"

ErpusCity_ProfessorBirdsLab_Eventscript_TaylorSwift_Sign_Text_0:
# 340 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "An almost illegible note is scrawled on\n"
	.string "the paper:\p"
	.string "I LOVEEEEE TAYLOR SWIFT$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_0:
# 351 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "?????$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_1:
# 352 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "HEY..........$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_2:
# 355 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "WHAT ARE YOU DOING HERE??!!$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_3:
# 363 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Prof. Birds$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_4:
# 364 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "I TOLD YOU TO GET SOME BOXES!!\p"
	.string "NOT WANDER AROUND IN MY SECRET LA.. I\n"
	.string "MEAN STORAGE ROOM!!\p"
	.string "GET THE FUCK OUT!!$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_5:
# 372 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Hmmmm, those pokeballs look shiny...\p"
	.string "Nobody will notice when I take one\n"
	.string "right?$"
