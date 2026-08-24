BikeShop_Jaouad_MapScripts::
	.byte 0


BikeShop_Jaouad_EventScript_Kasmi::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_BIKE, BikeShop_Jaouad_EventScript_Kasmi_2
BikeShop_Jaouad_EventScript_Kasmi_1:
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_Kasmi_Text_1, MSGBOX_DEFAULT
	msgbox BikeShop_Jaouad_EventScript_Kasmi_Text_2, MSGBOX_DEFAULT
	msgbox BikeShop_Jaouad_EventScript_Kasmi_Text_3, MSGBOX_DEFAULT
	goto BikeShop_Jaouad_EventScript_MainMenu
	return

BikeShop_Jaouad_EventScript_Kasmi_2:
	goto BikeShop_Jaouad_EventScript_ReturnGreeting
	goto BikeShop_Jaouad_EventScript_Kasmi_1


BikeShop_Jaouad_EventScript_ReturnGreeting::
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_ReturnGreeting_Text_0, MSGBOX_DEFAULT
	goto BikeShop_Jaouad_EventScript_MainMenu
	return


BikeShop_Jaouad_EventScript_MainMenu::
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_MainMenu_Text_0, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_KASMI_MENU, TRUE
	compare VAR_RESULT, 0
	goto_if_eq BikeShop_Jaouad_EventScript_MainMenu_2
BikeShop_Jaouad_EventScript_MainMenu_1:
	compare VAR_RESULT, 1
	goto_if_eq BikeShop_Jaouad_EventScript_MainMenu_5
BikeShop_Jaouad_EventScript_MainMenu_4:
	release
	end

BikeShop_Jaouad_EventScript_MainMenu_2:
	goto BikeShop_Jaouad_EventScript_TaxTips
	goto BikeShop_Jaouad_EventScript_MainMenu_1

BikeShop_Jaouad_EventScript_MainMenu_5:
	goto BikeShop_Jaouad_EventScript_BikeSection
	goto BikeShop_Jaouad_EventScript_MainMenu_4


BikeShop_Jaouad_EventScript_TaxTips::
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_TaxTips_Text_0, MSGBOX_DEFAULT
	goto BikeShop_Jaouad_EventScript_MainMenu
	return


BikeShop_Jaouad_EventScript_BikeSection::
	goto_if_set FLAG_RECEIVED_BIKE, BikeShop_Jaouad_EventScript_BikeSection_2
BikeShop_Jaouad_EventScript_BikeSection_1:
	goto_if_set FLAG_MACH_BIKE_READY, BikeShop_Jaouad_EventScript_BikeSection_5
BikeShop_Jaouad_EventScript_BikeSection_4:
	goto BikeShop_Jaouad_EventScript_AcroBikeOnly
	return

BikeShop_Jaouad_EventScript_BikeSection_2:
	goto BikeShop_Jaouad_EventScript_SwitchPrompt
	goto BikeShop_Jaouad_EventScript_BikeSection_1

BikeShop_Jaouad_EventScript_BikeSection_5:
	goto BikeShop_Jaouad_EventScript_BikeChoice
	goto BikeShop_Jaouad_EventScript_BikeSection_4


BikeShop_Jaouad_EventScript_AcroBikeOnly::
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_AcroBikeOnly_Text_0, MSGBOX_DEFAULT
	goto BikeShop_Jaouad_EventScript_GetAcroBike
	return


BikeShop_Jaouad_EventScript_BikeChoice::
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_BikeChoice_Text_0, MSGBOX_DEFAULT
	multichoice 21, 8, MULTI_BIKE, TRUE
	compare VAR_RESULT, 0
	goto_if_eq BikeShop_Jaouad_EventScript_BikeChoice_2
BikeShop_Jaouad_EventScript_BikeChoice_1:
	compare VAR_RESULT, 1
	goto_if_eq BikeShop_Jaouad_EventScript_BikeChoice_5
BikeShop_Jaouad_EventScript_BikeChoice_4:
	goto BikeShop_Jaouad_EventScript_MainMenu
	return

BikeShop_Jaouad_EventScript_BikeChoice_2:
	goto BikeShop_Jaouad_EventScript_GetMachBike
	goto BikeShop_Jaouad_EventScript_BikeChoice_1

BikeShop_Jaouad_EventScript_BikeChoice_5:
	goto BikeShop_Jaouad_EventScript_GetAcroBike
	goto BikeShop_Jaouad_EventScript_BikeChoice_4


BikeShop_Jaouad_EventScript_GetMachBike::
	msgbox BikeShop_Jaouad_EventScript_GetMachBike_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_MACH_BIKE
	compare VAR_RESULT, FALSE
	goto_if_eq BikeShop_Jaouad_EventScript_GetMachBike_2
BikeShop_Jaouad_EventScript_GetMachBike_1:
	setflag FLAG_RECEIVED_BIKE
	goto BikeShop_Jaouad_EventScript_AfterGive
	return

BikeShop_Jaouad_EventScript_GetMachBike_2:
	goto Common_EventScript_ShowBagIsFull
	goto BikeShop_Jaouad_EventScript_GetMachBike_1


BikeShop_Jaouad_EventScript_GetAcroBike::
	msgbox BikeShop_Jaouad_EventScript_GetAcroBike_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_ACRO_BIKE
	compare VAR_RESULT, FALSE
	goto_if_eq BikeShop_Jaouad_EventScript_GetAcroBike_2
BikeShop_Jaouad_EventScript_GetAcroBike_1:
	setflag FLAG_RECEIVED_BIKE
	goto BikeShop_Jaouad_EventScript_AfterGive
	return

BikeShop_Jaouad_EventScript_GetAcroBike_2:
	goto Common_EventScript_ShowBagIsFull
	goto BikeShop_Jaouad_EventScript_GetAcroBike_1


BikeShop_Jaouad_EventScript_AfterGive::
	goto_if_unset FLAG_MACH_BIKE_READY, BikeShop_Jaouad_EventScript_AfterGive_2
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_AfterGive_Text_1, MSGBOX_DEFAULT
	special SwapRegisteredBike
	release
	end

BikeShop_Jaouad_EventScript_AfterGive_2:
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_AfterGive_Text_0, MSGBOX_DEFAULT
	special SwapRegisteredBike
	release
	end


BikeShop_Jaouad_EventScript_SwitchPrompt::
	goto_if_unset FLAG_MACH_BIKE_READY, BikeShop_Jaouad_EventScript_SwitchPrompt_2
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_SwitchPrompt_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq BikeShop_Jaouad_EventScript_SwitchPrompt_5
BikeShop_Jaouad_EventScript_SwitchPrompt_4:
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_SwitchPrompt_Text_2, MSGBOX_DEFAULT
	release
	end

BikeShop_Jaouad_EventScript_SwitchPrompt_2:
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_SwitchPrompt_Text_0, MSGBOX_DEFAULT
	release
	end

BikeShop_Jaouad_EventScript_SwitchPrompt_5:
	goto BikeShop_Jaouad_EventScript_SwitchBikes
	goto BikeShop_Jaouad_EventScript_SwitchPrompt_4


BikeShop_Jaouad_EventScript_SwitchBikes::
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_SwitchBikes_Text_0, MSGBOX_DEFAULT
	checkitem ITEM_ACRO_BIKE
	compare VAR_RESULT, TRUE
	goto_if_eq BikeShop_Jaouad_EventScript_SwitchBikes_2
BikeShop_Jaouad_EventScript_SwitchBikes_1:
	checkitem ITEM_MACH_BIKE
	compare VAR_RESULT, TRUE
	goto_if_eq BikeShop_Jaouad_EventScript_SwitchBikes_5
BikeShop_Jaouad_EventScript_SwitchBikes_4:
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_SwitchBikes_Text_1, MSGBOX_DEFAULT
	release
	end

BikeShop_Jaouad_EventScript_SwitchBikes_2:
	goto BikeShop_Jaouad_EventScript_SwitchAcroForMach
	goto BikeShop_Jaouad_EventScript_SwitchBikes_1

BikeShop_Jaouad_EventScript_SwitchBikes_5:
	goto BikeShop_Jaouad_EventScript_SwitchMachForAcro
	goto BikeShop_Jaouad_EventScript_SwitchBikes_4


BikeShop_Jaouad_EventScript_SwitchAcroForMach::
	incrementgamestat GAME_STAT_TRADED_BIKES
	removeitem ITEM_ACRO_BIKE
	giveitem ITEM_MACH_BIKE
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_SwitchAcroForMach_Text_0, MSGBOX_DEFAULT
	goto BikeShop_Jaouad_EventScript_AfterSwap
	return


BikeShop_Jaouad_EventScript_SwitchMachForAcro::
	incrementgamestat GAME_STAT_TRADED_BIKES
	removeitem ITEM_MACH_BIKE
	giveitem ITEM_ACRO_BIKE
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_SwitchMachForAcro_Text_0, MSGBOX_DEFAULT
	goto BikeShop_Jaouad_EventScript_AfterSwap
	return


BikeShop_Jaouad_EventScript_AfterSwap::
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_AfterGive_Text_1, MSGBOX_DEFAULT
	special SwapRegisteredBike
	release
	end


BikeShop_Jaouad_EventScript_Customer::
	lock
	faceplayer
	msgbox BikeShop_Jaouad_EventScript_Customer_Text_0, MSGBOX_DEFAULT
	release
	end


BikeShop_Jaouad_EventScript_MartEmployee::
	lockall
	faceplayer
	msgbox BikeShop_Jaouad_EventScript_MartEmployee_Text_0
	waitmessage
	pokemart BikeShop_Jaouad_Mart_Sodas
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	releaseall
	return


	.align 2
BikeShop_Jaouad_Mart_Sodas:
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_NONE

BikeShop_Jaouad_EventScript_Kasmi_Text_0:
	.string "MR. KASMI$"

BikeShop_Jaouad_EventScript_Kasmi_Text_1:
	.string "Oh! A customer! Come in, come in!\p"
	.string "The name is Kasmi. Mr. Kasmi. My real\n"
	.string "surname has four vowels in a row.\p"
	.string "Nobody can say it right.\p"
	.string "So. Kasmi it is.$"

BikeShop_Jaouad_EventScript_Kasmi_Text_2:
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
	.string "War zones. Remote lands. Eventually I\n"
	.string "found these vast temperate steppes...\p"
	.string "Just grass and sky, horizon to horizon.\n"
	.string "Completely alone.\p"
	.string "Then love called me home. You know the\n"
	.string "deal.\p"
	.string "Now I fix these things. Simple machines.\n"
	.string "But they get the job done.$"

BikeShop_Jaouad_EventScript_ReturnGreeting_Text_0:
	.string "Back again? I was just thinking about a\n"
	.string "mountain pass I once crossed.\p"
	.string "Fixed a cracked frame with a strip of\n"
	.string "steel and two bolts ordered from three\l"
	.string "countries.\p"
	.string "Anyway.$"

BikeShop_Jaouad_EventScript_MainMenu_Text_0:
	.string "So. What can I do for you?$"

BikeShop_Jaouad_EventScript_TaxTips_Text_0:
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
	.string "Truth is, I've only got the ACRO BIKE\n"
	.string "ready to go.\p"
	.string "The MACH BIKE's still in pieces on my\n"
	.string "bench. Give me your number, I'll call you\l"
	.string "the second it's fixed.\p"
	.string "Until then, take the ACRO BIKE. Hops,\n"
	.string "tricks, tight spots. I do alright for\l"
	.string "myself.$"

BikeShop_Jaouad_EventScript_BikeChoice_Text_0:
	.string "I've got two kinds: the MACH BIKE and\n"
	.string "the ACRO BIKE.\p"
	.string "MACH BIKE is pure speed. Great for\n"
	.string "steep sandy slopes.\p"
	.string "ACRO BIKE is more technical. Hops,\n"
	.string "tricks, tight spots.\p"
	.string "Take one. I do alright for myself.\p"
	.string "Which one will it be?$"

BikeShop_Jaouad_EventScript_GetMachBike_Text_0:
	.string "{PLAYER} chose the MACH BIKE.$"

BikeShop_Jaouad_EventScript_GetAcroBike_Text_0:
	.string "{PLAYER} chose the ACRO BIKE.$"

BikeShop_Jaouad_EventScript_AfterGive_Text_0:
	.string "I've got your number. Once the MACH\n"
	.string "BIKE's fixed, I'll call you and you can\l"
	.string "come swap it out.$"

BikeShop_Jaouad_EventScript_AfterGive_Text_1:
	.string "Come back any time you want the other\n"
	.string "one. I'll swap it out for you.$"

BikeShop_Jaouad_EventScript_SwitchPrompt_Text_0:
	.string "Still working on the MACH BIKE. Don't\n"
	.string "worry, I've got your number.\p"
	.string "I'll call you the second it's ready.$"

BikeShop_Jaouad_EventScript_SwitchPrompt_Text_1:
	.string "Want to switch BIKES?$"

BikeShop_Jaouad_EventScript_SwitchPrompt_Text_2:
	.string "Good choice. It'll serve you well.$"

BikeShop_Jaouad_EventScript_SwitchBikes_Text_0:
	.string "Sure. Hand it over.$"

BikeShop_Jaouad_EventScript_SwitchBikes_Text_1:
	.string "Your BIKE is in PC storage? Hmm.\p"
	.string "Take it out first. Then we can swap.$"

BikeShop_Jaouad_EventScript_SwitchAcroForMach_Text_0:
	.string "{PLAYER} swapped the ACRO BIKE for a\n"
	.string "MACH BIKE.$"

BikeShop_Jaouad_EventScript_SwitchMachForAcro_Text_0:
	.string "{PLAYER} swapped the MACH BIKE for an\n"
	.string "ACRO BIKE.$"

BikeShop_Jaouad_EventScript_Customer_Text_0:
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
	.string "Long ride? I've got cold drinks.\p"
	.string "Fresh water, soda, lemonade, pick your\n"
	.string "poison.$"
