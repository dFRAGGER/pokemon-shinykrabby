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
	msgbox BikeShop_Jaouad_EventScript_Kasmi_Text_0, MSGBOX_DEFAULT
# 10 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_Kasmi_Text_1, MSGBOX_DEFAULT
# 11 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_Kasmi_Text_2, MSGBOX_DEFAULT
# 12 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_MainMenu
	return

BikeShop_Jaouad_EventScript_Kasmi_2:
# 7 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_ReturnGreeting
	goto BikeShop_Jaouad_EventScript_Kasmi_1


BikeShop_Jaouad_EventScript_ReturnGreeting::
# 16 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_ReturnGreeting_Text_0, MSGBOX_DEFAULT
# 17 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_MainMenu
	return


BikeShop_Jaouad_EventScript_MainMenu::
# 21 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_MainMenu_Text_0, MSGBOX_DEFAULT
# 22 "data/maps/BikeShop_Jaouad/scripts.pory"
	multichoice 0, 0, MULTI_KASMI_MENU, TRUE
# 23 "data/maps/BikeShop_Jaouad/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BikeShop_Jaouad_EventScript_MainMenu_2
BikeShop_Jaouad_EventScript_MainMenu_1:
# 26 "data/maps/BikeShop_Jaouad/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BikeShop_Jaouad_EventScript_MainMenu_5
BikeShop_Jaouad_EventScript_MainMenu_4:
# 29 "data/maps/BikeShop_Jaouad/scripts.pory"
	release
	end

BikeShop_Jaouad_EventScript_MainMenu_2:
# 24 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_TaxTips
	goto BikeShop_Jaouad_EventScript_MainMenu_1

BikeShop_Jaouad_EventScript_MainMenu_5:
# 27 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_BikeSection
	goto BikeShop_Jaouad_EventScript_MainMenu_4


BikeShop_Jaouad_EventScript_TaxTips::
# 34 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_TaxTips_Text_0, MSGBOX_DEFAULT
# 35 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_MainMenu
	return


BikeShop_Jaouad_EventScript_BikeSection::
# 39 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE, BikeShop_Jaouad_EventScript_BikeSection_2
BikeShop_Jaouad_EventScript_BikeSection_1:
# 42 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto_if_set FLAG_MACH_BIKE_READY, BikeShop_Jaouad_EventScript_BikeSection_5
BikeShop_Jaouad_EventScript_BikeSection_4:
# 45 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_AcroBikeOnly
	return

BikeShop_Jaouad_EventScript_BikeSection_2:
# 40 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_SwitchPrompt
	goto BikeShop_Jaouad_EventScript_BikeSection_1

BikeShop_Jaouad_EventScript_BikeSection_5:
# 43 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_BikeChoice
	goto BikeShop_Jaouad_EventScript_BikeSection_4


BikeShop_Jaouad_EventScript_AcroBikeOnly::
# 49 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_AcroBikeOnly_Text_0, MSGBOX_DEFAULT
# 50 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_GetAcroBike
	return


BikeShop_Jaouad_EventScript_BikeChoice::
# 54 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_BikeChoice_Text_0, MSGBOX_DEFAULT
# 55 "data/maps/BikeShop_Jaouad/scripts.pory"
	multichoice 21, 8, MULTI_BIKE, TRUE
# 56 "data/maps/BikeShop_Jaouad/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BikeShop_Jaouad_EventScript_BikeChoice_2
BikeShop_Jaouad_EventScript_BikeChoice_1:
# 59 "data/maps/BikeShop_Jaouad/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BikeShop_Jaouad_EventScript_BikeChoice_5
BikeShop_Jaouad_EventScript_BikeChoice_4:
# 62 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_MainMenu
	return

BikeShop_Jaouad_EventScript_BikeChoice_2:
# 57 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_GetMachBike
	goto BikeShop_Jaouad_EventScript_BikeChoice_1

BikeShop_Jaouad_EventScript_BikeChoice_5:
# 60 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_GetAcroBike
	goto BikeShop_Jaouad_EventScript_BikeChoice_4


BikeShop_Jaouad_EventScript_GetMachBike::
# 66 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_GetMachBike_Text_0, MSGBOX_DEFAULT
# 67 "data/maps/BikeShop_Jaouad/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 68 "data/maps/BikeShop_Jaouad/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BikeShop_Jaouad_EventScript_GetMachBike_2
BikeShop_Jaouad_EventScript_GetMachBike_1:
# 71 "data/maps/BikeShop_Jaouad/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 72 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_AfterGive
	return

BikeShop_Jaouad_EventScript_GetMachBike_2:
# 69 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto BikeShop_Jaouad_EventScript_GetMachBike_1


BikeShop_Jaouad_EventScript_GetAcroBike::
# 76 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_GetAcroBike_Text_0, MSGBOX_DEFAULT
# 77 "data/maps/BikeShop_Jaouad/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 78 "data/maps/BikeShop_Jaouad/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BikeShop_Jaouad_EventScript_GetAcroBike_2
BikeShop_Jaouad_EventScript_GetAcroBike_1:
# 81 "data/maps/BikeShop_Jaouad/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 82 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_AfterGive
	return

BikeShop_Jaouad_EventScript_GetAcroBike_2:
# 79 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto BikeShop_Jaouad_EventScript_GetAcroBike_1


BikeShop_Jaouad_EventScript_AfterGive::
# 86 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto_if_unset FLAG_MACH_BIKE_READY, BikeShop_Jaouad_EventScript_AfterGive_2
# 92 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_AfterGive_Text_1, MSGBOX_DEFAULT
# 93 "data/maps/BikeShop_Jaouad/scripts.pory"
	special SwapRegisteredBike
# 94 "data/maps/BikeShop_Jaouad/scripts.pory"
	release
	end

BikeShop_Jaouad_EventScript_AfterGive_2:
# 87 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_AfterGive_Text_0, MSGBOX_DEFAULT
# 88 "data/maps/BikeShop_Jaouad/scripts.pory"
	special SwapRegisteredBike
# 89 "data/maps/BikeShop_Jaouad/scripts.pory"
	release
	end


BikeShop_Jaouad_EventScript_SwitchPrompt::
# 99 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto_if_unset FLAG_MACH_BIKE_READY, BikeShop_Jaouad_EventScript_SwitchPrompt_2
# 104 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_SwitchPrompt_Text_1, MSGBOX_YESNO
# 105 "data/maps/BikeShop_Jaouad/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BikeShop_Jaouad_EventScript_SwitchPrompt_5
BikeShop_Jaouad_EventScript_SwitchPrompt_4:
# 108 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_SwitchPrompt_Text_2, MSGBOX_DEFAULT
# 109 "data/maps/BikeShop_Jaouad/scripts.pory"
	release
	end

BikeShop_Jaouad_EventScript_SwitchPrompt_2:
# 100 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_SwitchPrompt_Text_0, MSGBOX_DEFAULT
# 101 "data/maps/BikeShop_Jaouad/scripts.pory"
	release
	end

BikeShop_Jaouad_EventScript_SwitchPrompt_5:
# 106 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_SwitchBikes
	goto BikeShop_Jaouad_EventScript_SwitchPrompt_4


BikeShop_Jaouad_EventScript_SwitchBikes::
# 114 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_SwitchBikes_Text_0, MSGBOX_DEFAULT
# 115 "data/maps/BikeShop_Jaouad/scripts.pory"
	checkitem ITEM_ACRO_BIKE
# 116 "data/maps/BikeShop_Jaouad/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BikeShop_Jaouad_EventScript_SwitchBikes_2
BikeShop_Jaouad_EventScript_SwitchBikes_1:
# 119 "data/maps/BikeShop_Jaouad/scripts.pory"
	checkitem ITEM_MACH_BIKE
# 120 "data/maps/BikeShop_Jaouad/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BikeShop_Jaouad_EventScript_SwitchBikes_5
BikeShop_Jaouad_EventScript_SwitchBikes_4:
# 123 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_SwitchBikes_Text_1, MSGBOX_DEFAULT
# 124 "data/maps/BikeShop_Jaouad/scripts.pory"
	release
	end

BikeShop_Jaouad_EventScript_SwitchBikes_2:
# 117 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_SwitchAcroForMach
	goto BikeShop_Jaouad_EventScript_SwitchBikes_1

BikeShop_Jaouad_EventScript_SwitchBikes_5:
# 121 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_SwitchMachForAcro
	goto BikeShop_Jaouad_EventScript_SwitchBikes_4


BikeShop_Jaouad_EventScript_SwitchAcroForMach::
# 129 "data/maps/BikeShop_Jaouad/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 130 "data/maps/BikeShop_Jaouad/scripts.pory"
	removeitem ITEM_ACRO_BIKE
# 131 "data/maps/BikeShop_Jaouad/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 132 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_SwitchAcroForMach_Text_0, MSGBOX_DEFAULT
# 133 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_AfterSwap
	return


BikeShop_Jaouad_EventScript_SwitchMachForAcro::
# 137 "data/maps/BikeShop_Jaouad/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 138 "data/maps/BikeShop_Jaouad/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 139 "data/maps/BikeShop_Jaouad/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 140 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_SwitchMachForAcro_Text_0, MSGBOX_DEFAULT
# 141 "data/maps/BikeShop_Jaouad/scripts.pory"
	goto BikeShop_Jaouad_EventScript_AfterSwap
	return


BikeShop_Jaouad_EventScript_AfterSwap::
# 145 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_AfterGive_Text_1, MSGBOX_DEFAULT
# 146 "data/maps/BikeShop_Jaouad/scripts.pory"
	special SwapRegisteredBike
# 147 "data/maps/BikeShop_Jaouad/scripts.pory"
	release
	end


BikeShop_Jaouad_EventScript_Customer::
# 152 "data/maps/BikeShop_Jaouad/scripts.pory"
	lock
# 153 "data/maps/BikeShop_Jaouad/scripts.pory"
	faceplayer
# 154 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_Customer_Text_0, MSGBOX_DEFAULT
# 155 "data/maps/BikeShop_Jaouad/scripts.pory"
	release
	end


BikeShop_Jaouad_EventScript_MartEmployee::
# 160 "data/maps/BikeShop_Jaouad/scripts.pory"
	lockall
# 161 "data/maps/BikeShop_Jaouad/scripts.pory"
	faceplayer
# 162 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox BikeShop_Jaouad_EventScript_MartEmployee_Text_0
# 163 "data/maps/BikeShop_Jaouad/scripts.pory"
	waitmessage
# 164 "data/maps/BikeShop_Jaouad/scripts.pory"
	pokemart BikeShop_Jaouad_Mart_Sodas
# 165 "data/maps/BikeShop_Jaouad/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 166 "data/maps/BikeShop_Jaouad/scripts.pory"
	releaseall
	return


	.align 2
# 169 "data/maps/BikeShop_Jaouad/scripts.pory"
BikeShop_Jaouad_Mart_Sodas:
# 170 "data/maps/BikeShop_Jaouad/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 171 "data/maps/BikeShop_Jaouad/scripts.pory"
	.2byte ITEM_SODA_POP
# 172 "data/maps/BikeShop_Jaouad/scripts.pory"
	.2byte ITEM_LEMONADE
	.2byte ITEM_NONE

BikeShop_Jaouad_EventScript_Kasmi_Text_0:
# 9 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Oh! A customer! Come in, come in!\p"
	.string "The name is Kasmi. Mr. Kasmi. My real\n"
	.string "surname has four vowels in a row.\p"
	.string "Nobody can say it right.\p"
	.string "So. Kasmi it is.$"

BikeShop_Jaouad_EventScript_Kasmi_Text_1:
# 10 "data/maps/BikeShop_Jaouad/scripts.pory"
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

BikeShop_Jaouad_EventScript_Kasmi_Text_2:
# 11 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "War zones. Remote lands. Eventually I\n"
	.string "found these vast temperate steppes...\p"
	.string "Just grass and sky, horizon to horizon.\n"
	.string "Completely alone.\p"
	.string "Then love called me home. You know the\n"
	.string "deal.\p"
	.string "Now I fix these things. Simple machines.\n"
	.string "But they get the job done.$"

BikeShop_Jaouad_EventScript_ReturnGreeting_Text_0:
# 16 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Back again? I was just thinking about a\n"
	.string "mountain pass I once crossed.\p"
	.string "Fixed a cracked frame with a strip of\n"
	.string "steel and two bolts ordered from three\l"
	.string "countries.\p"
	.string "Anyway.$"

BikeShop_Jaouad_EventScript_MainMenu_Text_0:
# 21 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "So. What can I do for you?$"

BikeShop_Jaouad_EventScript_TaxTips_Text_0:
# 34 "data/maps/BikeShop_Jaouad/scripts.pory"
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
# 49 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Truth is, I've only got the ACRO BIKE\n"
	.string "ready to go.\p"
	.string "The MACH BIKE's still in pieces on my\n"
	.string "bench. Give me your number, I'll call you\l"
	.string "the second it's fixed.\p"
	.string "Until then, take the ACRO BIKE. Hops,\n"
	.string "tricks, tight spots. I do alright for\l"
	.string "myself.$"

BikeShop_Jaouad_EventScript_BikeChoice_Text_0:
# 54 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "I've got two kinds: the MACH BIKE and\n"
	.string "the ACRO BIKE.\p"
	.string "MACH BIKE is pure speed. Great for\n"
	.string "steep sandy slopes.\p"
	.string "ACRO BIKE is more technical. Hops,\n"
	.string "tricks, tight spots.\p"
	.string "Take one. I do alright for myself.\p"
	.string "Which one will it be?$"

BikeShop_Jaouad_EventScript_GetMachBike_Text_0:
# 66 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "{PLAYER} chose the MACH BIKE.$"

BikeShop_Jaouad_EventScript_GetAcroBike_Text_0:
# 76 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "{PLAYER} chose the ACRO BIKE.$"

BikeShop_Jaouad_EventScript_AfterGive_Text_0:
# 87 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "I've got your number. Once the MACH\n"
	.string "BIKE's fixed, I'll call you and you can\l"
	.string "come swap it out.$"

BikeShop_Jaouad_EventScript_AfterGive_Text_1:
# 92 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Come back any time you want the other\n"
	.string "one. I'll swap it out for you.$"

BikeShop_Jaouad_EventScript_SwitchPrompt_Text_0:
# 100 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Still working on the MACH BIKE. Don't\n"
	.string "worry, I've got your number.\p"
	.string "I'll call you the second it's ready.$"

BikeShop_Jaouad_EventScript_SwitchPrompt_Text_1:
# 104 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Want to switch BIKES?$"

BikeShop_Jaouad_EventScript_SwitchPrompt_Text_2:
# 108 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Good choice. It'll serve you well.$"

BikeShop_Jaouad_EventScript_SwitchBikes_Text_0:
# 114 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Sure. Hand it over.$"

BikeShop_Jaouad_EventScript_SwitchBikes_Text_1:
# 123 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Your BIKE is in PC storage? Hmm.\p"
	.string "Take it out first. Then we can swap.$"

BikeShop_Jaouad_EventScript_SwitchAcroForMach_Text_0:
# 132 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "{PLAYER} swapped the ACRO BIKE for a\n"
	.string "MACH BIKE.$"

BikeShop_Jaouad_EventScript_SwitchMachForAcro_Text_0:
# 140 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "{PLAYER} swapped the MACH BIKE for\n"
	.string "an ACRO BIKE.$"

BikeShop_Jaouad_EventScript_Customer_Text_0:
# 154 "data/maps/BikeShop_Jaouad/scripts.pory"
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
# 162 "data/maps/BikeShop_Jaouad/scripts.pory"
	.string "Long ride? I've got cold drinks.\p"
	.string "Fresh water, soda, lemonade, pick your\n"
	.string "poison.$"
