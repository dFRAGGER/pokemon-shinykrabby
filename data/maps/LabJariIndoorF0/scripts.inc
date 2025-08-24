LabJariIndoorF0_MapScripts::
# 2 "data/maps/LabJariIndoorF0/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LabJariIndoorF0_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LabJariIndoorF0_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_PROFESSOR_BIRDS_DISCOVERY
# 4 "data/maps/LabJariIndoorF0/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 1
	return


ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection::
# 9 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 10 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_2
# 32 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_1:
# 34 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_2:
# 11 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 12 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_0, MSGBOX_YESNO
# 13 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_6
ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_5:
# 16 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_9
ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_8:
# 29 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_1

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_6:
# 14 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_5

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_9:
# 17 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 18 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 20 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHARMANDER
# 21 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 9
# 22 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 23 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CHARMANDER
# 24 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 25 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_8

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_11:
# 26 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_8


ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection::
# 39 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 40 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_2
# 63 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_1:
# 65 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_2:
# 41 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 42 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_Text_0, MSGBOX_YESNO
# 43 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_6
ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_5:
# 46 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_9
ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_8:
# 60 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_1

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_6:
# 44 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_5

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_9:
# 47 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 48 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 49 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 50 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_BULBASAUR
# 51 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 8
# 52 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 53 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_BULBASAUR
# 54 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 55 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_8

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_11:
# 56 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_8


ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection::
# 70 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 71 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_2
# 93 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_1:
# 95 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_2:
# 72 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 73 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_Text_0, MSGBOX_YESNO
# 74 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_6
ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_5:
# 77 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_9
ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_8:
# 90 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_1

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_6:
# 75 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_5

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_9:
# 78 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 79 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 80 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 81 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_SQUIRTLE
# 82 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 7
# 83 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 84 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_SQUIRTLE
# 85 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 86 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_8

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_11:
# 87 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection::
# 101 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 102 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_2
# 125 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_1:
# 127 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_2:
# 103 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 104 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_Text_0, MSGBOX_YESNO
# 105 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_5:
# 108 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_8:
# 122 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_6:
# 106 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_9:
# 109 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 110 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 111 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 112 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CYNDAQUIL
# 113 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 6
# 114 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 115 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CYNDAQUIL
# 116 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 117 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_11:
# 118 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection::
# 132 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 133 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_2
# 156 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_1:
# 158 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_2:
# 134 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 135 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_Text_0, MSGBOX_YESNO
# 136 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_5:
# 139 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_8:
# 153 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_6:
# 137 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_9:
# 140 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 141 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 142 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 143 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHIKORITA
# 144 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 5
# 145 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 146 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CHIKORITA
# 147 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 148 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_11:
# 149 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection::
# 163 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 164 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_2
# 187 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_1:
# 189 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_2:
# 165 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 166 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_Text_0, MSGBOX_YESNO
# 167 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_5:
# 170 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_8:
# 184 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_6:
# 168 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_9:
# 171 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 172 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 173 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 174 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_TOTODILE
# 175 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 4
# 176 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 177 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOTODILE
# 178 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 179 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_11:
# 180 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection::
# 194 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 195 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_2
# 218 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_1:
# 220 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_2:
# 196 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 197 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_Text_0, MSGBOX_YESNO
# 198 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_5:
# 201 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_8:
# 215 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_6:
# 199 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_9:
# 202 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 203 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 204 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 205 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_TORCHIC
# 206 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 3
# 207 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 208 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TORCHIC
# 209 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 210 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_11:
# 211 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection::
# 225 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 226 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_2
# 249 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_1:
# 251 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_2:
# 227 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 228 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_Text_0, MSGBOX_YESNO
# 229 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_5:
# 232 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_8:
# 246 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_6:
# 230 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_9:
# 233 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 234 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 235 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 236 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_TREECKO
# 237 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 2
# 238 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 239 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TREECKO
# 240 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 241 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_11:
# 242 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection::
# 256 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 257 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_2
# 279 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_1:
# 281 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_2:
# 258 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 259 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_Text_0, MSGBOX_YESNO
# 260 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_5:
# 263 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_8:
# 276 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_6:
# 261 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_9:
# 264 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 265 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 266 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 267 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_MUDKIP
# 268 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 1
# 269 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 270 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MUDKIP
# 271 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 272 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_11
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_8

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_11:
# 273 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_8


ErpusCity_ProfessorBirdsLab_Eventscript_Kanto_Sign::
# 286 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 287 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_Kanto_Sign_Text_0
# 288 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 289 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_Kanto_Sign_Text_1
# 290 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 291 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return


ErpusCity_ProfessorBirdsLab_Eventscript_Johto_Sign::
# 295 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 296 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_Kanto_Sign_Text_0
# 297 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 298 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_Johto_Sign_Text_0
# 299 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 300 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return


ErpusCity_ProfessorBirdsLab_Eventscript_Hoenn_Sign::
# 304 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 305 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_Kanto_Sign_Text_0
# 306 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 307 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_Hoenn_Sign_Text_0
# 308 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 309 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return


ErpusCity_ProfessorBirdsLab_Eventscript_TaylorSwift_Sign::
# 313 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 314 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_Kanto_Sign_Text_0
# 315 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 316 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_TaylorSwift_Sign_Text_0
# 317 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 318 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return


LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit::
# 322 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 323 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_CHOICE, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_2
# 342 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_3
# 343 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, stopplayer
# 344 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement 0
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_1:
# 347 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_2:
# 324 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_0
# 325 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 326 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_1
# 327 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 328 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_0
# 329 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement
# 330 "data/maps/LabJariIndoorF0/scripts.pory"
	clearflag FLAG_PROFESSOR_BIRDS_DISCOVERY
# 331 "data/maps/LabJariIndoorF0/scripts.pory"
	addobject 10
# 332 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement 10, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_1
# 333 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement
# 334 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_2
# 335 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_2
# 336 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 337 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_TO_BLACK
# 338 "data/maps/LabJariIndoorF0/scripts.pory"
	warpsilent MAP_ERP_CITY, 0
# 339 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_1


LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit::
# 351 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 352 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_CHOICE, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_2
# 371 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_3
# 372 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, stopplayer
# 373 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement 0
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_1:
# 375 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_2:
# 353 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_0
# 354 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 355 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_1
# 356 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 357 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_0
# 358 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement
# 359 "data/maps/LabJariIndoorF0/scripts.pory"
	clearflag FLAG_PROFESSOR_BIRDS_DISCOVERY
# 360 "data/maps/LabJariIndoorF0/scripts.pory"
	addobject 10
# 361 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement 10, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_Movement_0
# 362 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmovement
# 363 "data/maps/LabJariIndoorF0/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_Movement_1
# 364 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_2
# 365 "data/maps/LabJariIndoorF0/scripts.pory"
	waitmessage
# 366 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_TO_BLACK
# 367 "data/maps/LabJariIndoorF0/scripts.pory"
	warpsilent MAP_ERP_CITY, 0
# 368 "data/maps/LabJariIndoorF0/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_1


# 378 "data/maps/LabJariIndoorF0/scripts.pory"
stopplayer:
# 379 "data/maps/LabJariIndoorF0/scripts.pory"
	walk_down
	step_end

# 328 "data/maps/LabJariIndoorF0/scripts.pory"
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_0:
# 328 "data/maps/LabJariIndoorF0/scripts.pory"
	emote_exclamation_mark
	step_end

# 332 "data/maps/LabJariIndoorF0/scripts.pory"
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_1:
# 332 "data/maps/LabJariIndoorF0/scripts.pory"
	walk_fast_right
# 332 "data/maps/LabJariIndoorF0/scripts.pory"
	walk_fast_down
# 332 "data/maps/LabJariIndoorF0/scripts.pory"
	face_left
	step_end

# 334 "data/maps/LabJariIndoorF0/scripts.pory"
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Movement_2:
# 334 "data/maps/LabJariIndoorF0/scripts.pory"
	face_right
	step_end

# 361 "data/maps/LabJariIndoorF0/scripts.pory"
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_Movement_0:
# 361 "data/maps/LabJariIndoorF0/scripts.pory"
	walk_fast_down
# 361 "data/maps/LabJariIndoorF0/scripts.pory"
	face_right
	step_end

# 363 "data/maps/LabJariIndoorF0/scripts.pory"
LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_RightExit_Movement_1:
# 363 "data/maps/LabJariIndoorF0/scripts.pory"
	face_left
	step_end

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_0:
# 12 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Charmander, want to slide the pokeball\l"
	.string "in your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1:
# 14 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Lets see what is in the other pokeballs.$"

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2:
# 32 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Better leave quickly..$"

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_Text_0:
# 42 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Bulbasaur, want to slide the pokeball in\l"
	.string "your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_Text_0:
# 73 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Squirtle, want to slide the pokeball in\l"
	.string "your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_Text_0:
# 104 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Cyndaquil, want to slide the pokeball in\l"
	.string "your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_Text_0:
# 135 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Chikorita, want to slide the pokeball in\l"
	.string "your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_Text_0:
# 166 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain\n"
	.string "Totodile, want to slide the pokeball in\l"
	.string "your pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_Text_0:
# 197 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain Torchic,\n"
	.string "want to slide the pokeball in your\l"
	.string "pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_Text_0:
# 228 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain Treecko,\n"
	.string "want to slide the pokeball in your\l"
	.string "pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_Text_0:
# 259 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "This pokeball seems to contain Mudkip,\n"
	.string "want to slide the pokeball in your\l"
	.string "pocket?$"

ErpusCity_ProfessorBirdsLab_Eventscript_Kanto_Sign_Text_0:
# 287 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "There seems to be something written on\n"
	.string "this paper:$"

ErpusCity_ProfessorBirdsLab_Eventscript_Kanto_Sign_Text_1:
# 289 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "KANTOOOO!!?$"

ErpusCity_ProfessorBirdsLab_Eventscript_Johto_Sign_Text_0:
# 298 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "JOHTOO?!$"

ErpusCity_ProfessorBirdsLab_Eventscript_Hoenn_Sign_Text_0:
# 307 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "HOEENN??$"

ErpusCity_ProfessorBirdsLab_Eventscript_TaylorSwift_Sign_Text_0:
# 316 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "I LOVEEEEE TAYLOR SWIFT$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_0:
# 324 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "HEY..........$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_1:
# 326 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "WHAT ARE YOU DOING IN MY LAB??!$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_2:
# 335 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "GET THE FUCK OUT!!$"

LabJariIndoorF0_Eventscript_DiscoveryStealStarterPokemon_LeftExit_Text_3:
# 342 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Hmmmm, those pokeballs look shiny.\n"
	.string "Nobody will notice when I take one\l"
	.string "right?$"
