BikeShop_Jaouad_MapScripts::
	.byte 0


BikeShop_Jaouad_EventScript_Kasmi::
# 4 "data/maps/BikeShop_Jaouad/scripts.pory"
	lock
# 5 "data/maps/BikeShop_Jaouad/scripts.pory"
	faceplayer
# 6 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE, BikeShop_Jaouad_EventScript_Kasmi_2
BikeShop_Jaouad_EventScript_Kasmi_1:
# 9 "data/maps/BikeShop_Jaouad/scripts.pory"
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
# 10 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_Kasmi_Text_1, MSGBOX_DEFAULT
# 11 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_Kasmi_Text_2, MSGBOX_DEFAULT
# 12 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_Kasmi_Text_3, MSGBOX_DEFAULT
# 13 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_MainMenu
	return

BikeShop_Jaouad_EventScript_Kasmi_2:
# 7 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_ReturnGreeting
	goto BikeShop_Jaouad_EventScript_Kasmi_1


BikeShop_Jaouad_EventScript_ReturnGreeting::
# 17 "data/maps/BikeShop_Jaouad/scripts.pory"
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
# 18 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_ReturnGreeting_Text_0, MSGBOX_DEFAULT
# 19 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_MainMenu
	return


BikeShop_Jaouad_EventScript_MainMenu::
# 23 "data/maps/BikeShop_Jaouad/scripts.pory"
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
# 24 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_MainMenu_Text_0, MSGBOX_DEFAULT
# 25 "data/maps/BikeShop_Jaouad/scripts.pory"
	multichoice 0, 0, MULTI_KASMI_MENU, TRUE
# 26 "data/maps/BikeShop_Jaouad/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BikeShop_Jaouad_EventScript_MainMenu_2
BikeShop_Jaouad_EventScript_MainMenu_1:
# 29 "data/maps/BikeShop_Jaouad/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BikeShop_Jaouad_EventScript_MainMenu_5
BikeShop_Jaouad_EventScript_MainMenu_4:
# 32 "data/maps/BikeShop_Jaouad/scripts.pory"
	release
	end

BikeShop_Jaouad_EventScript_MainMenu_2:
# 27 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_TaxTips
	goto BikeShop_Jaouad_EventScript_MainMenu_1

BikeShop_Jaouad_EventScript_MainMenu_5:
# 30 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_BikeSection
	goto BikeShop_Jaouad_EventScript_MainMenu_4


BikeShop_Jaouad_EventScript_TaxTips::
# 37 "data/maps/BikeShop_Jaouad/scripts.pory"
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
# 38 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_TaxTips_Text_0, MSGBOX_DEFAULT
# 39 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_MainMenu
	return


BikeShop_Jaouad_EventScript_BikeSection::
# 43 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE, BikeShop_Jaouad_EventScript_BikeSection_2
BikeShop_Jaouad_EventScript_BikeSection_1:
# 46 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto_if_set FLAG_MACH_BIKE_READY, BikeShop_Jaouad_EventScript_BikeSection_5
BikeShop_Jaouad_EventScript_BikeSection_4:
# 49 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_AcroBikeOnly
	return

BikeShop_Jaouad_EventScript_BikeSection_2:
# 44 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_SwitchPrompt
	goto BikeShop_Jaouad_EventScript_BikeSection_1

BikeShop_Jaouad_EventScript_BikeSection_5:
# 47 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_BikeChoice
	goto BikeShop_Jaouad_EventScript_BikeSection_4


BikeShop_Jaouad_EventScript_AcroBikeOnly::
# 53 "data/maps/BikeShop_Jaouad/scripts.pory"
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
# 54 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_AcroBikeOnly_Text_0, MSGBOX_DEFAULT
# 55 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_GetAcroBike
	return


BikeShop_Jaouad_EventScript_BikeChoice::
# 59 "data/maps/BikeShop_Jaouad/scripts.pory"
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
# 60 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_BikeChoice_Text_0, MSGBOX_DEFAULT
# 61 "data/maps/BikeShop_Jaouad/scripts.pory"
	multichoice 21, 8, MULTI_BIKE, TRUE
# 62 "data/maps/BikeShop_Jaouad/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BikeShop_Jaouad_EventScript_BikeChoice_2
BikeShop_Jaouad_EventScript_BikeChoice_1:
# 65 "data/maps/BikeShop_Jaouad/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BikeShop_Jaouad_EventScript_BikeChoice_5
BikeShop_Jaouad_EventScript_BikeChoice_4:
# 68 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_MainMenu
	return

BikeShop_Jaouad_EventScript_BikeChoice_2:
# 63 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_GetMachBike
	goto BikeShop_Jaouad_EventScript_BikeChoice_1

BikeShop_Jaouad_EventScript_BikeChoice_5:
# 66 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_GetAcroBike
	goto BikeShop_Jaouad_EventScript_BikeChoice_4


BikeShop_Jaouad_EventScript_GetMachBike::
# 72 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_GetMachBike_Text_0, MSGBOX_DEFAULT
# 73 "data/maps/BikeShop_Jaouad/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 74 "data/maps/BikeShop_Jaouad/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BikeShop_Jaouad_EventScript_GetMachBike_2
BikeShop_Jaouad_EventScript_GetMachBike_1:
# 77 "data/maps/BikeShop_Jaouad/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 78 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_AfterGive
	return

BikeShop_Jaouad_EventScript_GetMachBike_2:
# 75 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto BikeShop_Jaouad_EventScript_GetMachBike_1


BikeShop_Jaouad_EventScript_GetAcroBike::
# 82 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_GetAcroBike_Text_0, MSGBOX_DEFAULT
# 83 "data/maps/BikeShop_Jaouad/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 84 "data/maps/BikeShop_Jaouad/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BikeShop_Jaouad_EventScript_GetAcroBike_2
BikeShop_Jaouad_EventScript_GetAcroBike_1:
# 87 "data/maps/BikeShop_Jaouad/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 88 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_AfterGive
	return

BikeShop_Jaouad_EventScript_GetAcroBike_2:
# 85 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto BikeShop_Jaouad_EventScript_GetAcroBike_1


BikeShop_Jaouad_EventScript_AfterGive::
# 92 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto_if_unset FLAG_MACH_BIKE_READY, BikeShop_Jaouad_EventScript_AfterGive_2
# 99 "data/maps/BikeShop_Jaouad/scripts.pory"
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
# 100 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_AfterGive_Text_1, MSGBOX_DEFAULT
# 101 "data/maps/BikeShop_Jaouad/scripts.pory"
	special SwapRegisteredBike
# 102 "data/maps/BikeShop_Jaouad/scripts.pory"
	release
	end

BikeShop_Jaouad_EventScript_AfterGive_2:
# 93 "data/maps/BikeShop_Jaouad/scripts.pory"
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
# 94 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_AfterGive_Text_0, MSGBOX_DEFAULT
# 95 "data/maps/BikeShop_Jaouad/scripts.pory"
	special SwapRegisteredBike
# 96 "data/maps/BikeShop_Jaouad/scripts.pory"
	release
	end


BikeShop_Jaouad_EventScript_SwitchPrompt::
# 107 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto_if_unset FLAG_MACH_BIKE_READY, BikeShop_Jaouad_EventScript_SwitchPrompt_2
# 113 "data/maps/BikeShop_Jaouad/scripts.pory"
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
# 114 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_SwitchPrompt_Text_1, MSGBOX_YESNO
# 115 "data/maps/BikeShop_Jaouad/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BikeShop_Jaouad_EventScript_SwitchPrompt_5
BikeShop_Jaouad_EventScript_SwitchPrompt_4:
# 118 "data/maps/BikeShop_Jaouad/scripts.pory"
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
# 119 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_SwitchPrompt_Text_2, MSGBOX_DEFAULT
# 120 "data/maps/BikeShop_Jaouad/scripts.pory"
	release
	end

BikeShop_Jaouad_EventScript_SwitchPrompt_2:
# 108 "data/maps/BikeShop_Jaouad/scripts.pory"
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
# 109 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_SwitchPrompt_Text_0, MSGBOX_DEFAULT
# 110 "data/maps/BikeShop_Jaouad/scripts.pory"
	release
	end

BikeShop_Jaouad_EventScript_SwitchPrompt_5:
# 116 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_SwitchBikes
	goto BikeShop_Jaouad_EventScript_SwitchPrompt_4


BikeShop_Jaouad_EventScript_SwitchBikes::
# 125 "data/maps/BikeShop_Jaouad/scripts.pory"
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
# 126 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_SwitchBikes_Text_0, MSGBOX_DEFAULT
# 127 "data/maps/BikeShop_Jaouad/scripts.pory"
	checkitem ITEM_ACRO_BIKE
# 128 "data/maps/BikeShop_Jaouad/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BikeShop_Jaouad_EventScript_SwitchBikes_2
BikeShop_Jaouad_EventScript_SwitchBikes_1:
# 131 "data/maps/BikeShop_Jaouad/scripts.pory"
	checkitem ITEM_MACH_BIKE
# 132 "data/maps/BikeShop_Jaouad/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BikeShop_Jaouad_EventScript_SwitchBikes_5
BikeShop_Jaouad_EventScript_SwitchBikes_4:
# 135 "data/maps/BikeShop_Jaouad/scripts.pory"
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
# 136 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_SwitchBikes_Text_1, MSGBOX_DEFAULT
# 137 "data/maps/BikeShop_Jaouad/scripts.pory"
	release
	end

BikeShop_Jaouad_EventScript_SwitchBikes_2:
# 129 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_SwitchAcroForMach
	goto BikeShop_Jaouad_EventScript_SwitchBikes_1

BikeShop_Jaouad_EventScript_SwitchBikes_5:
# 133 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_SwitchMachForAcro
	goto BikeShop_Jaouad_EventScript_SwitchBikes_4


BikeShop_Jaouad_EventScript_SwitchAcroForMach::
# 142 "data/maps/BikeShop_Jaouad/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 143 "data/maps/BikeShop_Jaouad/scripts.pory"
	removeitem ITEM_ACRO_BIKE
# 144 "data/maps/BikeShop_Jaouad/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 145 "data/maps/BikeShop_Jaouad/scripts.pory"
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
# 146 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_SwitchAcroForMach_Text_0, MSGBOX_DEFAULT
# 147 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_AfterSwap
	return


BikeShop_Jaouad_EventScript_SwitchMachForAcro::
# 151 "data/maps/BikeShop_Jaouad/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 152 "data/maps/BikeShop_Jaouad/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 153 "data/maps/BikeShop_Jaouad/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 154 "data/maps/BikeShop_Jaouad/scripts.pory"
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
# 155 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_SwitchMachForAcro_Text_0, MSGBOX_DEFAULT
# 156 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_AfterSwap
	return


BikeShop_Jaouad_EventScript_AfterSwap::
# 160 "data/maps/BikeShop_Jaouad/scripts.pory"
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
# 161 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_AfterGive_Text_1, MSGBOX_DEFAULT
# 162 "data/maps/BikeShop_Jaouad/scripts.pory"
	special SwapRegisteredBike
# 163 "data/maps/BikeShop_Jaouad/scripts.pory"
	release
	end


BikeShop_Jaouad_EventScript_Customer::
# 168 "data/maps/BikeShop_Jaouad/scripts.pory"
	lock
# 169 "data/maps/BikeShop_Jaouad/scripts.pory"
	faceplayer
# 170 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_Customer_Text_0, MSGBOX_DEFAULT
# 171 "data/maps/BikeShop_Jaouad/scripts.pory"
	release
	end


BikeShop_Jaouad_EventScript_MartEmployee::
# 176 "data/maps/BikeShop_Jaouad/scripts.pory"
	lockall
# 177 "data/maps/BikeShop_Jaouad/scripts.pory"
	faceplayer
# 178 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_MartEmployee_Text_0
# 179 "data/maps/BikeShop_Jaouad/scripts.pory"
	waitmessage
# 180 "data/maps/BikeShop_Jaouad/scripts.pory"
	pokemart BikeShop_Jaouad_Mart_Sodas
# 181 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 182 "data/maps/BikeShop_Jaouad/scripts.pory"
	releaseall
	return


	.align 2
# 185 "data/maps/BikeShop_Jaouad/scripts.pory"
BikeShop_Jaouad_Mart_Sodas:
# 186 "data/maps/BikeShop_Jaouad/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 187 "data/maps/BikeShop_Jaouad/scripts.pory"
	.2byte ITEM_SODA_POP
# 188 "data/maps/BikeShop_Jaouad/scripts.pory"
	.2byte ITEM_LEMONADE
	.2byte ITEM_NONE

BikeShop_Jaouad_EventScript_Kasmi_Text_0:
# 9 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "MR. KASMI$"

BikeShop_Jaouad_EventScript_Kasmi_Text_1:
# 10 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Oh! A customer! Come in, come in!\p"
	.string "The name is Kasmi. Mr. Kasmi. My real\n"
	.string "surname has four vowels in a row.\p"
	.string "Nobody can say it right.\p"
	.string "So. Kasmi it is.$"

BikeShop_Jaouad_EventScript_Kasmi_Text_2:
# 11 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Before all this? I was a transfer\n"
	.string "pricing specialist. Corporate tax\l"
	.string "structures, intercompany deals, profit\l"
	.string "shifting across borders.\p"
	.string "I was good at it. Very good. But I did it\n"
	.string "for myself, not for them.\p"
	.string "Let's just say I left with more than I\n"
	.string "arrived with.\p"
	.string "Legally.\p"
	.string "Mostly...\p"
	.string "One day I looked at the numbers and\n"
	.string "thought: enough. I bought a motorcycle\l"
	.string "and left.$"

BikeShop_Jaouad_EventScript_Kasmi_Text_3:
# 12 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "War zones. Remote lands. Eventually I\n"
	.string "found these vast temperate steppes...\p"
	.string "Just grass and sky, horizon to horizon.\n"
	.string "Completely alone.\p"
	.string "Then love called me home. You know the\n"
	.string "deal.\p"
	.string "Now I fix these things. Simple machines.\n"
	.string "But they get the job done.$"

BikeShop_Jaouad_EventScript_ReturnGreeting_Text_0:
# 18 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Back again? I was just thinking about a\n"
	.string "mountain pass I once crossed.\p"
	.string "Fixed a cracked frame with a strip of\n"
	.string "steel and two bolts ordered from three\l"
	.string "countries.\p"
	.string "Anyway.$"

BikeShop_Jaouad_EventScript_MainMenu_Text_0:
# 24 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "So. What can I do for you?$"

BikeShop_Jaouad_EventScript_TaxTips_Text_0:
# 38 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "You want to know my secrets? Fine.\n"
	.string "Listen carefully.\p"
	.string "First: everything is a business\n"
	.string "expense. This shop. My tools. My home.\l"
	.string "All of it.\p"
	.string "Second: register a holding company\n"
	.string "somewhere with no tax treaty. Name it\l"
	.string "something boring.\p"
	.string "Third: pay yourself just below the\n"
	.string "income threshold. The rest stays in the\l"
	.string "company.\p"
	.string "The tax code was written by people. And\n"
	.string "people leave gaps.\p"
	.string "I found mine a long time ago. I do\n"
	.string "alright for myself.$"

BikeShop_Jaouad_EventScript_AcroBikeOnly_Text_0:
# 54 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Truth is, I've only got the ACRO BIKE\n"
	.string "ready to go.\p"
	.string "The MACH BIKE's still in pieces on my\n"
	.string "bench. Give me your number, I'll call you\l"
	.string "the second it's fixed.\p"
	.string "Until then, take the ACRO BIKE. Hops,\n"
	.string "tricks, tight spots. I do alright for\l"
	.string "myself.$"

BikeShop_Jaouad_EventScript_BikeChoice_Text_0:
# 60 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "I've got two kinds: the MACH BIKE and\n"
	.string "the ACRO BIKE.\p"
	.string "MACH BIKE is pure speed. Great for\n"
	.string "steep sandy slopes.\p"
	.string "ACRO BIKE is more technical. Hops,\n"
	.string "tricks, tight spots.\p"
	.string "Take one. I do alright for myself.\p"
	.string "Which one will it be?$"

BikeShop_Jaouad_EventScript_GetMachBike_Text_0:
# 72 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "{PLAYER} chose the MACH BIKE.$"

BikeShop_Jaouad_EventScript_GetAcroBike_Text_0:
# 82 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "{PLAYER} chose the ACRO BIKE.$"

BikeShop_Jaouad_EventScript_AfterGive_Text_0:
# 94 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "I've got your number. Once the MACH\n"
	.string "BIKE's fixed, I'll call you and you can\l"
	.string "come swap it out.$"

BikeShop_Jaouad_EventScript_AfterGive_Text_1:
# 100 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Come back any time you want the other\n"
	.string "one. I'll swap it out for you.$"

BikeShop_Jaouad_EventScript_SwitchPrompt_Text_0:
# 109 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Still working on the MACH BIKE. Don't\n"
	.string "worry, I've got your number.\p"
	.string "I'll call you the second it's ready.$"

BikeShop_Jaouad_EventScript_SwitchPrompt_Text_1:
# 114 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Want to switch BIKES?$"

BikeShop_Jaouad_EventScript_SwitchPrompt_Text_2:
# 119 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Good choice. It'll serve you well.$"

BikeShop_Jaouad_EventScript_SwitchBikes_Text_0:
# 126 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Sure. Hand it over.$"

BikeShop_Jaouad_EventScript_SwitchBikes_Text_1:
# 136 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Your BIKE is in PC storage? Hmm.\p"
	.string "Take it out first. Then we can swap.$"

BikeShop_Jaouad_EventScript_SwitchAcroForMach_Text_0:
# 146 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "{PLAYER} swapped the ACRO BIKE for a\n"
	.string "MACH BIKE.$"

BikeShop_Jaouad_EventScript_SwitchMachForAcro_Text_0:
# 155 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "{PLAYER} swapped the MACH BIKE for\n"
	.string "an ACRO BIKE.$"

BikeShop_Jaouad_EventScript_Customer_Text_0:
# 170 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Did you see that ridge out there?\p"
	.string "Apparently there's an incredible\n"
	.string "downhill run.\p"
	.string "But you can't get on it without a bike.\p"
	.string "I walked all the way up here on foot like\n"
	.string "an idiot.\p"
	.string "Mr. Kasmi is the one to talk to about\n"
	.string "bikes.\p"
	.string "He's just over there.$"

BikeShop_Jaouad_EventScript_MartEmployee_Text_0:
# 178 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Long ride? I've got cold drinks.\p"
	.string "Fresh water, soda, lemonade, pick your\n"
	.string "poison.$"
