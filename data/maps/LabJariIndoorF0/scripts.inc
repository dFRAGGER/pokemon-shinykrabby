LabJariIndoorF0_MapScripts::
	.byte 0


ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection::
# 6 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 7 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_2
# 27 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_1:
# 29 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_2:
# 8 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 9 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_0, MSGBOX_YESNO
# 10 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_6
ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_5:
# 13 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_9
ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_8:
# 24 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_1

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_6:
# 11 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_5

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_9:
# 14 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 15 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 16 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 17 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHARMANDER
# 18 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 9
# 19 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 20 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CHARMANDER
# 21 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 22 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_8


ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection::
# 34 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 35 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_2
# 56 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_1:
# 58 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_2:
# 36 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 37 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_Text_0, MSGBOX_YESNO
# 38 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_6
ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_5:
# 41 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_9
ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_8:
# 53 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_1

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_6:
# 39 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_5

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_9:
# 42 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 43 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 44 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 45 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_BULBASAUR
# 46 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 8
# 47 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 48 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_BULBASAUR
# 49 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 50 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_8


ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection::
# 63 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 64 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_2
# 85 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_1:
# 87 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_2:
# 65 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 66 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_Text_0, MSGBOX_YESNO
# 67 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_6
ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_5:
# 70 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_9
ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_8:
# 82 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_1

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_6:
# 68 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_5

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_9:
# 71 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 72 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 73 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 74 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_SQUIRTLE
# 75 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 7
# 76 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 77 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_SQUIRTLE
# 78 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 79 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection::
# 93 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 94 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_2
# 115 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_1:
# 117 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_2:
# 95 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 96 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_Text_0, MSGBOX_YESNO
# 97 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_5:
# 100 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_8:
# 112 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_6:
# 98 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_9:
# 101 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 102 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 103 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 104 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CYNDAQUIL
# 105 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 6
# 106 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 107 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CYNDAQUIL
# 108 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 109 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection::
# 122 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 123 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_2
# 144 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_1:
# 146 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_2:
# 124 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 125 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_Text_0, MSGBOX_YESNO
# 126 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_5:
# 129 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_8:
# 141 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_6:
# 127 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_9:
# 130 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 131 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 132 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 133 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHIKORITA
# 134 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 5
# 135 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 136 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CHIKORITA
# 137 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 138 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection::
# 151 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 152 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_2
# 173 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_1:
# 175 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_2:
# 153 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 154 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_Text_0, MSGBOX_YESNO
# 155 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_5:
# 158 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_8:
# 170 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_6:
# 156 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_9:
# 159 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 160 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 161 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 162 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_TOTODILE
# 163 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 4
# 164 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 165 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOTODILE
# 166 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 167 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection::
# 180 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 181 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_2
# 202 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_1:
# 204 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_2:
# 182 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 183 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_Text_0, MSGBOX_YESNO
# 184 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_5:
# 187 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_8:
# 199 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_6:
# 185 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_9:
# 188 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 189 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 190 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 191 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_TORCHIC
# 192 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 3
# 193 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 194 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TORCHIC
# 195 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 196 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection::
# 209 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 210 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_2
# 231 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_1:
# 233 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_2:
# 211 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 212 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_Text_0, MSGBOX_YESNO
# 213 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_5:
# 216 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_8:
# 228 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_6:
# 214 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_9:
# 217 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 218 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 219 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 220 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_TREECKO
# 221 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 2
# 222 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 223 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TREECKO
# 224 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 225 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_8


ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection::
# 238 "data/maps/LabJariIndoorF0/scripts.pory"
	lockall
# 239 "data/maps/LabJariIndoorF0/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_CHOICE, ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_2
# 260 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2
ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_1:
# 262 "data/maps/LabJariIndoorF0/scripts.pory"
	releaseall
	return

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_2:
# 240 "data/maps/LabJariIndoorF0/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 241 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_Text_0, MSGBOX_YESNO
# 242 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_6
ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_5:
# 245 "data/maps/LabJariIndoorF0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_9
ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_8:
# 257 "data/maps/LabJariIndoorF0/scripts.pory"
	hidemonpic
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_1

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_6:
# 243 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_5

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_9:
# 246 "data/maps/LabJariIndoorF0/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 247 "data/maps/LabJariIndoorF0/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 248 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 249 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_MUDKIP
# 250 "data/maps/LabJariIndoorF0/scripts.pory"
	removeobject 1
# 251 "data/maps/LabJariIndoorF0/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_CHOICE
# 252 "data/maps/LabJariIndoorF0/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MUDKIP
# 253 "data/maps/LabJariIndoorF0/scripts.pory"
	msgbox gText_UnusedNicknameReceivedPokemon, MSGBOX_YESNO
# 254 "data/maps/LabJariIndoorF0/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_8


ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_0:
# 9 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Do you want to select Charmander?$"

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_1:
# 11 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Lets see what is in the other pokeballs.$"

ErpusCity_ProfessorBirdsLab_Eventscript_CharmanderSelection_Text_2:
# 27 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Better leave quickly..$"

ErpusCity_ProfessorBirdsLab_Eventscript_BulbasaurSelection_Text_0:
# 37 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Do you want to select Bulbasaur?$"

ErpusCity_ProfessorBirdsLab_Eventscript_SquirtleSelection_Text_0:
# 66 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Do you want to select Squirtle?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_CyndaquilSelection_Text_0:
# 96 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Do you want to select Cyndaquil?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_ChikoritaSelection_Text_0:
# 125 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Do you want to select Chikorita?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_TotodileSelection_Text_0:
# 154 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Do you want to select Totodile?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_TorchicSelection_Text_0:
# 183 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Do you want to select Torchic?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_TreeckoSelection_Text_0:
# 212 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Do you want to select Treecko?$"

ErpusCity_ProfessorBirdsLab_Eventscrip_MudkipSelection_Text_0:
# 241 "data/maps/LabJariIndoorF0/scripts.pory"
	.string "Do you want to select Mudkip?$"
