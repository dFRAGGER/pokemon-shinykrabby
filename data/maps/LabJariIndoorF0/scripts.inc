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
# 15 "data/maps/LabJariIndoorF0/scripts.pory"
	lock
# 16 "data/maps/LabJariIndoorF0/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 1
# 17 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJarinIndoorF0_Eventscript_Entrance_Text_0, MSGBOX_AUTOCLOSE
# 18 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 19 "data/maps/LabJariIndoorF0/scripts.pory"
	release
	return


ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection::
# 23 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 24 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_2
# 49 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_1:
# 51 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_2:
# 25 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 26 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_0, MSGBOX_YESNO
# 27 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_6
ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_5:
# 30 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_9
ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_8:
# 46 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_1

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_6:
# 28 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_5

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_9:
# 31 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 32 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 33 "data/maps/LabJariIndoorF0/scripts.pory"
	waitfanfare
# 34 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 35 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHARMANDER
# 36 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 9
# 37 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 38 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CHARMANDER
# 39 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 40 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_8

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_11:
# 41 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 42 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_8


ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection::
# 56 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 57 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_2
# 82 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_1:
# 84 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_2:
# 58 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 59 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_Text_0, MSGBOX_YESNO
# 60 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_6
ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_5:
# 63 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_9
ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_8:
# 79 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_1

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_6:
# 61 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_5

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_9:
# 64 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 65 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 66 "data/maps/LabJariIndoorF0/scripts.pory"
	waitfanfare
# 67 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 68 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_BULBASAUR
# 69 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 8
# 70 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 71 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_BULBASAUR
# 72 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 73 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_8

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_11:
# 74 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 75 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_8


ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection::
# 89 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 90 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_2
# 115 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_1:
# 117 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_2:
# 91 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 92 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_Text_0, MSGBOX_YESNO
# 93 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_6
ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_5:
# 96 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_9
ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_8:
# 112 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_1

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_6:
# 94 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_5

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_9:
# 97 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 98 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 99 "data/maps/LabJariIndoorF0/scripts.pory"
	waitfanfare
# 100 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 101 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_SQUIRTLE
# 102 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 7
# 103 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 104 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_SQUIRTLE
# 105 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 106 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_8

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_11:
# 107 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 108 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection::
# 123 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 124 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_2
# 149 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_1:
# 151 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_2:
# 125 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 126 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_Text_0, MSGBOX_YESNO
# 127 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_5:
# 130 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_8:
# 146 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_6:
# 128 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_9:
# 131 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 132 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 133 "data/maps/LabJariIndoorF0/scripts.pory"
	waitfanfare
# 134 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 135 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CYNDAQUIL
# 136 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 6
# 137 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 138 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CYNDAQUIL
# 139 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 140 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_11:
# 141 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 142 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection::
# 156 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 157 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_2
# 182 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_1:
# 184 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_2:
# 158 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 159 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_Text_0, MSGBOX_YESNO
# 160 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_5:
# 163 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_8:
# 179 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_6:
# 161 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_9:
# 164 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 165 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 166 "data/maps/LabJariIndoorF0/scripts.pory"
	waitfanfare
# 167 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 168 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHIKORITA
# 169 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 5
# 170 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 171 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CHIKORITA
# 172 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 173 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_11:
# 174 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 175 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection::
# 189 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 190 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_2
# 215 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_1:
# 217 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_2:
# 191 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 192 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_Text_0, MSGBOX_YESNO
# 193 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_5:
# 196 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_8:
# 212 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_6:
# 194 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_9:
# 197 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 198 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 199 "data/maps/LabJariIndoorF0/scripts.pory"
	waitfanfare
# 200 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 201 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_TOTODILE
# 202 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 4
# 203 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 204 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOTODILE
# 205 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 206 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_11:
# 207 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 208 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection::
# 222 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 223 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_2
# 248 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_1:
# 250 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_2:
# 224 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 225 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_Text_0, MSGBOX_YESNO
# 226 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_5:
# 229 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_8:
# 245 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_6:
# 227 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_9:
# 230 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 231 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 232 "data/maps/LabJariIndoorF0/scripts.pory"
	waitfanfare
# 233 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 234 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_TORCHIC
# 235 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 3
# 236 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 237 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TORCHIC
# 238 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 239 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_11:
# 240 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 241 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection::
# 255 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 256 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_2
# 281 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_1:
# 283 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_2:
# 257 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 258 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_Text_0, MSGBOX_YESNO
# 259 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_5:
# 262 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_8:
# 278 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_6:
# 260 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_9:
# 263 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 264 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 265 "data/maps/LabJariIndoorF0/scripts.pory"
	waitfanfare
# 266 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 267 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_TREECKO
# 268 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 2
# 269 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 270 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TREECKO
# 271 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 272 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_11:
# 273 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 274 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection::
# 288 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 289 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_2
# 314 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_1:
# 316 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_2:
# 290 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 291 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_Text_0, MSGBOX_YESNO
# 292 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_5:
# 295 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_8:
# 311 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_6:
# 293 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_9:
# 296 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 297 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 298 "data/maps/LabJariIndoorF0/scripts.pory"
	waitfanfare
# 299 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 300 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_MUDKIP
# 301 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 1
# 302 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 303 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MUDKIP
# 304 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 305 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_11:
# 306 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 307 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_8


ErpusCity_ProfessorBirdsLab_Eventscript_Kanto_Sign::
# 321 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 322 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_Kanto_Sign_Text_0
# 323 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 324 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return


ErpusCity_ProfessorBirdsLab_Eventscript_Johto_Sign::
# 328 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 329 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_Johto_Sign_Text_0
# 330 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 331 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return


ErpusCity_ProfessorBirdsLab_Eventscript_Hoenn_Sign::
# 335 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 336 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_Hoenn_Sign_Text_0
# 337 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 338 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return


ErpusCity_ProfessorBirdsLab_Eventscript_TaylorSwift_Sign::
# 342 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 343 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_TaylorSwift_Sign_Text_0
# 344 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 345 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return


LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit::
# 349 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 350 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_CHOICE, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_2
# 376 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_5
# 377 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, stopplayer
# 378 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement 0
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_1:
# 381 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_2:
# 351 "data/maps/LabJariIndoorF0/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 352 "data/maps/LabJariIndoorF0/scripts.pory"
	playse SE_PIN
# 353 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_0
# 354 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement
# 355 "data/maps/LabJariIndoorF0/scripts.pory"
	setspeaker LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_0
# 356 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_1
# 357 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 358 "data/maps/LabJariIndoorF0/scripts.pory"
	setspeaker LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_0
# 359 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_2
# 360 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 361 "data/maps/LabJariIndoorF0/scripts.pory"
	clearflag FLAG_PROFESSOR_BIRDS_DISCOVERY
# 362 "data/maps/LabJariIndoorF0/scripts.pory"
	clearflag FLAG_DISABLE_FOLLOWER_POKEMON
# 363 "data/maps/LabJariIndoorF0/scripts.pory"
	addobject 10
# 364 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement 10, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_1
# 365 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement
# 366 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_2
# 367 "data/maps/LabJariIndoorF0/scripts.pory"
	setspeaker LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_3
# 368 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_4
# 369 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 370 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_TO_BLACK
# 371 "data/maps/LabJariIndoorF0/scripts.pory"
	warpsilent MAP_ERP_CITY, 0
# 372 "data/maps/LabJariIndoorF0/scripts.pory"
	waitstate
# 373 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_1


LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit::
# 385 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 386 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_CHOICE, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_2
# 412 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_5
# 413 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, stopplayer
# 414 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement 0
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_1:
# 416 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_2:
# 387 "data/maps/LabJariIndoorF0/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 388 "data/maps/LabJariIndoorF0/scripts.pory"
	playse SE_PIN
# 389 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_0
# 390 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement
# 391 "data/maps/LabJariIndoorF0/scripts.pory"
	setspeaker LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_0
# 392 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_1
# 393 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 394 "data/maps/LabJariIndoorF0/scripts.pory"
	setspeaker LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_0
# 395 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_2
# 396 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 397 "data/maps/LabJariIndoorF0/scripts.pory"
	clearflag FLAG_PROFESSOR_BIRDS_DISCOVERY
# 398 "data/maps/LabJariIndoorF0/scripts.pory"
	clearflag FLAG_DISABLE_FOLLOWER_POKEMON
# 399 "data/maps/LabJariIndoorF0/scripts.pory"
	addobject 10
# 400 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement 10, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_Movement_0
# 401 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement
# 402 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_Movement_1
# 403 "data/maps/LabJariIndoorF0/scripts.pory"
	setspeaker LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_3
# 404 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_4
# 405 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 406 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_TO_BLACK
# 407 "data/maps/LabJariIndoorF0/scripts.pory"
	warpsilent MAP_ERP_CITY, 0
# 408 "data/maps/LabJariIndoorF0/scripts.pory"
	waitstate
# 409 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_1


# 419 "data/maps/LabJariIndoorF0/scripts.pory"
stopplayer:
# 420 "data/maps/LabJariIndoorF0/scripts.pory"
	walk_down
	step_end

# 353 "data/maps/LabJariIndoorF0/scripts.pory"
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_0:
# 353 "data/maps/LabJariIndoorF0/scripts.pory"
	emote_exclamation_mark
	step_end

# 364 "data/maps/LabJariIndoorF0/scripts.pory"
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_1:
# 364 "data/maps/LabJariIndoorF0/scripts.pory"
	walk_fast_right
# 364 "data/maps/LabJariIndoorF0/scripts.pory"
	walk_fast_down
# 364 "data/maps/LabJariIndoorF0/scripts.pory"
	face_left
	step_end

# 366 "data/maps/LabJariIndoorF0/scripts.pory"
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_2:
# 366 "data/maps/LabJariIndoorF0/scripts.pory"
	face_right
	step_end

# 400 "data/maps/LabJariIndoorF0/scripts.pory"
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_Movement_0:
# 400 "data/maps/LabJariIndoorF0/scripts.pory"
	walk_fast_down
# 400 "data/maps/LabJariIndoorF0/scripts.pory"
	face_right
	step_end

# 402 "data/maps/LabJariIndoorF0/scripts.pory"
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_Movement_1:
# 402 "data/maps/LabJariIndoorF0/scripts.pory"
	face_left
	step_end

LabJarinIndoorF0_Eventscript_Entrance_Text_0:
# 17 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "HOLY MOLY!!\p"
	.string "Look at all those Pokeballs!\p"
	.string "What would be in them?$"

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_0:
# 26 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Charmander, want to slide the pokeball\l"
	.string "in your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1:
# 28 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Lets see what is in the other pokeballs.$"

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2:
# 49 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Better leave quickly..$"

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_Text_0:
# 59 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Bulbasaur, want to slide the pokeball in\l"
	.string "your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_Text_0:
# 92 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Squirtle, want to slide the pokeball in\l"
	.string "your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_Text_0:
# 126 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Cyndaquil, want to slide the pokeball in\l"
	.string "your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_Text_0:
# 159 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Chikorita, want to slide the pokeball in\l"
	.string "your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_Text_0:
# 192 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Totodile, want to slide the pokeball in\l"
	.string "your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_Text_0:
# 225 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain Torchic,\n"
	.string "want to slide the pokeball in your\l"
	.string "pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_Text_0:
# 258 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain Treecko,\n"
	.string "want to slide the pokeball in your\l"
	.string "pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_Text_0:
# 291 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain Mudkip,\n"
	.string "want to slide the pokeball in your\l"
	.string "pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscript_Kanto_Sign_Text_0:
# 322 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "An almost illegible note is scrawled on\n"
	.string "the paper:\p"
	.string "KANTOOOO!!?$"

ErpusCity_ProfessorBirdsLab_Eventscript_Johto_Sign_Text_0:
# 329 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "An almost illegible note is scrawled on\n"
	.string "the paper:\p"
	.string "JOHTOO?!$"

ErpusCity_ProfessorBirdsLab_Eventscript_Hoenn_Sign_Text_0:
# 336 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "An almost illegible note is scrawled on\n"
	.string "the paper:\p"
	.string "HOENN??$"

ErpusCity_ProfessorBirdsLab_Eventscript_TaylorSwift_Sign_Text_0:
# 343 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "An almost illegible note is scrawled on\n"
	.string "the paper:\p"
	.string "I LOVEEEEE TAYLOR SWIFT$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_0:
# 355 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "?????$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_1:
# 356 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "HEY..........$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_2:
# 359 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "WHAT ARE YOU DOING HERE??!!$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_3:
# 367 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "PROF. BIRDS$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_4:
# 368 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "I TOLD YOU TO GET SOME BOXES!!\p"
	.string "NOT WANDER AROUND IN MY SECRET LA.. I\n"
	.string "MEAN STORAGE ROOM!!\p"
	.string "GET THE FUCK OUT!!$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_5:
# 376 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Hmmmm, those pokeballs look shiny...\p"
	.string "Nobody will notice when I take one\n"
	.string "right?$"
