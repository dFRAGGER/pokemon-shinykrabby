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
# 43 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_1:
# 45 "data/maps/LabJariIndoorF0/scripts.pory"
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
# 40 "data/maps/LabJariIndoorF0/scripts.pory"
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
	setflag FLAG_SYS_POKEMON_GET
# 31 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHARMANDER
# 32 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 9
# 33 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 34 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CHARMANDER
# 35 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 36 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_8

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_11:
# 37 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_8


ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection::
# 50 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 51 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_2
# 74 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_1:
# 76 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_2:
# 52 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 53 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_Text_0, MSGBOX_YESNO
# 54 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_6
ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_5:
# 57 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_9
ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_8:
# 71 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_1

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_6:
# 55 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_5

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_9:
# 58 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 59 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 60 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 61 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_BULBASAUR
# 62 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 8
# 63 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 64 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_BULBASAUR
# 65 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 66 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_8

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_11:
# 67 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_8


ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection::
# 81 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 82 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_2
# 104 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_1:
# 106 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_2:
# 83 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 84 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_Text_0, MSGBOX_YESNO
# 85 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_6
ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_5:
# 88 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_9
ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_8:
# 101 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_1

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_6:
# 86 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_5

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_9:
# 89 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 90 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 91 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 92 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_SQUIRTLE
# 93 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 7
# 94 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 95 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_SQUIRTLE
# 96 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 97 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_8

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_11:
# 98 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection::
# 112 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 113 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_2
# 136 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_1:
# 138 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_2:
# 114 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 115 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_Text_0, MSGBOX_YESNO
# 116 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_5:
# 119 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_8:
# 133 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_6:
# 117 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_9:
# 120 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 121 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 122 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 123 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CYNDAQUIL
# 124 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 6
# 125 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 126 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CYNDAQUIL
# 127 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 128 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_11:
# 129 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection::
# 143 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 144 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_2
# 167 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_1:
# 169 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_2:
# 145 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 146 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_Text_0, MSGBOX_YESNO
# 147 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_5:
# 150 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_8:
# 164 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_6:
# 148 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_9:
# 151 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 152 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 153 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 154 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHIKORITA
# 155 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 5
# 156 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 157 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CHIKORITA
# 158 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 159 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_11:
# 160 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection::
# 174 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 175 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_2
# 198 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_1:
# 200 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_2:
# 176 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 177 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_Text_0, MSGBOX_YESNO
# 178 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_5:
# 181 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_8:
# 195 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_6:
# 179 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_9:
# 182 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 183 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 184 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 185 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_TOTODILE
# 186 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 4
# 187 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 188 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOTODILE
# 189 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 190 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_11:
# 191 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection::
# 205 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 206 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_2
# 229 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_1:
# 231 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_2:
# 207 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 208 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_Text_0, MSGBOX_YESNO
# 209 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_5:
# 212 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_8:
# 226 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_6:
# 210 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_9:
# 213 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 214 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 215 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 216 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_TORCHIC
# 217 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 3
# 218 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 219 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TORCHIC
# 220 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 221 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_11:
# 222 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection::
# 236 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 237 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_2
# 260 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_1:
# 262 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_2:
# 238 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 239 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_Text_0, MSGBOX_YESNO
# 240 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_5:
# 243 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_8:
# 257 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_6:
# 241 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_9:
# 244 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 245 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 246 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 247 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_TREECKO
# 248 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 2
# 249 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 250 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TREECKO
# 251 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 252 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_11:
# 253 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection::
# 267 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 268 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_2
# 290 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_1:
# 292 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_2:
# 269 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 270 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_Text_0, MSGBOX_YESNO
# 271 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_5:
# 274 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_8:
# 287 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_6:
# 272 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_9:
# 275 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 276 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 277 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 278 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_MUDKIP
# 279 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 1
# 280 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 281 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MUDKIP
# 282 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 283 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_11:
# 284 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_8


ErpusCity_ProfessorBirdsLab_Eventscript_Kanto_Sign::
# 297 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 298 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_Kanto_Sign_Text_0
# 299 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 300 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return


ErpusCity_ProfessorBirdsLab_Eventscript_Johto_Sign::
# 304 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 305 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_Johto_Sign_Text_0
# 306 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 307 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return


ErpusCity_ProfessorBirdsLab_Eventscript_Hoenn_Sign::
# 311 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 312 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_Hoenn_Sign_Text_0
# 313 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 314 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return


ErpusCity_ProfessorBirdsLab_Eventscript_TaylorSwift_Sign::
# 318 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 319 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_TaylorSwift_Sign_Text_0
# 320 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 321 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return


LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit::
# 325 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 326 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_CHOICE, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_2
# 351 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_5
# 352 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, stopplayer
# 353 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement 0
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_1:
# 356 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_2:
# 327 "data/maps/LabJariIndoorF0/scripts.pory"
	playse SE_PIN
# 328 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_0
# 329 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement
# 330 "data/maps/LabJariIndoorF0/scripts.pory"
	setspeaker LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_0
# 331 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_1
# 332 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 333 "data/maps/LabJariIndoorF0/scripts.pory"
	setspeaker LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_0
# 334 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_2
# 335 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 336 "data/maps/LabJariIndoorF0/scripts.pory"
	clearflag FLAG_PROFESSOR_BIRDS_DISCOVERY
# 337 "data/maps/LabJariIndoorF0/scripts.pory"
	clearflag FLAG_DISABLE_FOLLOWER_POKEMON
# 338 "data/maps/LabJariIndoorF0/scripts.pory"
	addobject 10
# 339 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement 10, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_1
# 340 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement
# 341 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_2
# 342 "data/maps/LabJariIndoorF0/scripts.pory"
	setspeaker LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_3
# 343 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_4
# 344 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 345 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_TO_BLACK
# 346 "data/maps/LabJariIndoorF0/scripts.pory"
	warpsilent MAP_ERP_CITY, 0
# 347 "data/maps/LabJariIndoorF0/scripts.pory"
	waitstate
# 348 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_1


LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit::
# 360 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 361 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_CHOICE, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_2
# 386 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_5
# 387 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, stopplayer
# 388 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement 0
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_1:
# 390 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_2:
# 362 "data/maps/LabJariIndoorF0/scripts.pory"
	playse SE_PIN
# 363 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_0
# 364 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement
# 365 "data/maps/LabJariIndoorF0/scripts.pory"
	setspeaker LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_0
# 366 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_1
# 367 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 368 "data/maps/LabJariIndoorF0/scripts.pory"
	setspeaker LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_0
# 369 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_2
# 370 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 371 "data/maps/LabJariIndoorF0/scripts.pory"
	clearflag FLAG_PROFESSOR_BIRDS_DISCOVERY
# 372 "data/maps/LabJariIndoorF0/scripts.pory"
	clearflag FLAG_DISABLE_FOLLOWER_POKEMON
# 373 "data/maps/LabJariIndoorF0/scripts.pory"
	addobject 10
# 374 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement 10, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_Movement_0
# 375 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement
# 376 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_Movement_1
# 377 "data/maps/LabJariIndoorF0/scripts.pory"
	setspeaker LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_3
# 378 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_4
# 379 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 380 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_TO_BLACK
# 381 "data/maps/LabJariIndoorF0/scripts.pory"
	warpsilent MAP_ERP_CITY, 0
# 382 "data/maps/LabJariIndoorF0/scripts.pory"
	waitstate
# 383 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_1


# 393 "data/maps/LabJariIndoorF0/scripts.pory"
stopplayer:
# 394 "data/maps/LabJariIndoorF0/scripts.pory"
	walk_down
	step_end

# 328 "data/maps/LabJariIndoorF0/scripts.pory"
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_0:
# 328 "data/maps/LabJariIndoorF0/scripts.pory"
	emote_exclamation_mark
	step_end

# 339 "data/maps/LabJariIndoorF0/scripts.pory"
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_1:
# 339 "data/maps/LabJariIndoorF0/scripts.pory"
	walk_fast_right
# 339 "data/maps/LabJariIndoorF0/scripts.pory"
	walk_fast_down
# 339 "data/maps/LabJariIndoorF0/scripts.pory"
	face_left
	step_end

# 341 "data/maps/LabJariIndoorF0/scripts.pory"
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_2:
# 341 "data/maps/LabJariIndoorF0/scripts.pory"
	face_right
	step_end

# 374 "data/maps/LabJariIndoorF0/scripts.pory"
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_Movement_0:
# 374 "data/maps/LabJariIndoorF0/scripts.pory"
	walk_fast_down
# 374 "data/maps/LabJariIndoorF0/scripts.pory"
	face_right
	step_end

# 376 "data/maps/LabJariIndoorF0/scripts.pory"
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_Movement_1:
# 376 "data/maps/LabJariIndoorF0/scripts.pory"
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
# 43 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Better leave quickly..$"

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_Text_0:
# 53 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Bulbasaur, want to slide the pokeball in\l"
	.string "your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_Text_0:
# 84 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Squirtle, want to slide the pokeball in\l"
	.string "your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_Text_0:
# 115 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Cyndaquil, want to slide the pokeball in\l"
	.string "your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_Text_0:
# 146 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Chikorita, want to slide the pokeball in\l"
	.string "your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_Text_0:
# 177 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Totodile, want to slide the pokeball in\l"
	.string "your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_Text_0:
# 208 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain Torchic,\n"
	.string "want to slide the pokeball in your\l"
	.string "pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_Text_0:
# 239 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain Treecko,\n"
	.string "want to slide the pokeball in your\l"
	.string "pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_Text_0:
# 270 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain Mudkip,\n"
	.string "want to slide the pokeball in your\l"
	.string "pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscript_Kanto_Sign_Text_0:
# 298 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "An almost illegible note is scrawled on\n"
	.string "the paper:\p"
	.string "KANTOOOO!!?$"

ErpusCity_ProfessorBirdsLab_Eventscript_Johto_Sign_Text_0:
# 305 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "An almost illegible note is scrawled on\n"
	.string "the paper:\p"
	.string "JOHTOO?!$"

ErpusCity_ProfessorBirdsLab_Eventscript_Hoenn_Sign_Text_0:
# 312 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "An almost illegible note is scrawled on\n"
	.string "the paper:\p"
	.string "HOEENN??$"

ErpusCity_ProfessorBirdsLab_Eventscript_TaylorSwift_Sign_Text_0:
# 319 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "An almost illegible note is scrawled on\n"
	.string "the paper:\p"
	.string "I LOVEEEEE TAYLOR SWIFT$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_0:
# 330 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "?????$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_1:
# 331 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "HEY..........$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_2:
# 334 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "WHAT ARE YOU DOING HERE??!!$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_3:
# 342 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Prof. Birds$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_4:
# 343 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "I TOLD YOU TO GET SOME BOXES!!\p"
	.string "NOT WANDER AROUND IN MY SECRET LA.. I\n"
	.string "MEAN STORAGE ROOM!!\p"
	.string "GET THE FUCK OUT!!$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_5:
# 351 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Hmmmm, those pokeballs look shiny...\p"
	.string "Nobody will notice when I take one\n"
	.string "right?$"
