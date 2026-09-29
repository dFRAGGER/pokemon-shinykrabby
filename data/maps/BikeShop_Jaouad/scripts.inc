BikeShop_Jaouad_MapScripts::
	.byte 0


BikeShop_Jaouad_EventScript_Kasmi::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_BIKE, BikeShop_Jaouad_EventScript_Kasmi_2
BikeShop_Jaouad_EventScript_Kasmi_1:
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_Kasmi_Text_1, MSGBOX_DEFAULT
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
	goto BikeShop_Jaouad_EventScript_GetBike
	return

BikeShop_Jaouad_EventScript_BikeSection_2:
	goto BikeShop_Jaouad_EventScript_CheckBike
	goto BikeShop_Jaouad_EventScript_BikeSection_1


BikeShop_Jaouad_EventScript_GetBike::
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_GetBike_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_BICYCLE
	compare VAR_RESULT, FALSE
	goto_if_eq BikeShop_Jaouad_EventScript_GetBike_2
BikeShop_Jaouad_EventScript_GetBike_1:
	setflag FLAG_RECEIVED_BIKE
	goto BikeShop_Jaouad_EventScript_AfterGive
	return

BikeShop_Jaouad_EventScript_GetBike_2:
	goto Common_EventScript_ShowBagIsFull
	goto BikeShop_Jaouad_EventScript_GetBike_1


BikeShop_Jaouad_EventScript_AfterGive::
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_AfterGive_Text_0, MSGBOX_DEFAULT
	release
	end


BikeShop_Jaouad_EventScript_CheckBike::
	checkitem ITEM_BICYCLE
	compare VAR_RESULT, TRUE
	goto_if_eq BikeShop_Jaouad_EventScript_CheckBike_2
BikeShop_Jaouad_EventScript_CheckBike_1:
	checkitem ITEM_MACH_BIKE
	compare VAR_RESULT, TRUE
	goto_if_eq BikeShop_Jaouad_EventScript_CheckBike_5
BikeShop_Jaouad_EventScript_CheckBike_4:
	checkitem ITEM_ACRO_BIKE
	compare VAR_RESULT, TRUE
	goto_if_eq BikeShop_Jaouad_EventScript_CheckBike_8
BikeShop_Jaouad_EventScript_CheckBike_7:
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_CheckBike_Text_0, MSGBOX_DEFAULT
	release
	end

BikeShop_Jaouad_EventScript_CheckBike_2:
	goto BikeShop_Jaouad_EventScript_BikeInstructions
	goto BikeShop_Jaouad_EventScript_CheckBike_1

BikeShop_Jaouad_EventScript_CheckBike_5:
	goto BikeShop_Jaouad_EventScript_ConvertMachBike
	goto BikeShop_Jaouad_EventScript_CheckBike_4

BikeShop_Jaouad_EventScript_CheckBike_8:
	goto BikeShop_Jaouad_EventScript_ConvertAcroBike
	goto BikeShop_Jaouad_EventScript_CheckBike_7


BikeShop_Jaouad_EventScript_ConvertMachBike::
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_ConvertMachBike_Text_0, MSGBOX_DEFAULT
	removeitem ITEM_MACH_BIKE
	giveitem ITEM_BICYCLE
	goto BikeShop_Jaouad_EventScript_AfterConversion
	return


BikeShop_Jaouad_EventScript_ConvertAcroBike::
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_ConvertMachBike_Text_0, MSGBOX_DEFAULT
	removeitem ITEM_ACRO_BIKE
	giveitem ITEM_BICYCLE
	goto BikeShop_Jaouad_EventScript_AfterConversion
	return


BikeShop_Jaouad_EventScript_AfterConversion::
	special ConvertRegisteredBikeToBicycle
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_AfterConversion_Text_0, MSGBOX_DEFAULT
	goto BikeShop_Jaouad_EventScript_BikeInstructions
	return


BikeShop_Jaouad_EventScript_BikeInstructions::
	setspeaker BikeShop_Jaouad_EventScript_Kasmi_Text_0
	msgbox BikeShop_Jaouad_EventScript_BikeInstructions_Text_0, MSGBOX_DEFAULT
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
	.string "So. Kasmi it is.\p"
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
	.string "and left.\p"
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

BikeShop_Jaouad_EventScript_GetBike_Text_0:
	.string "Trying to get onto the BIKE ROUTE, are\n"
	.string "you?\p"
	.string "They won't let anyone through without\n"
	.string "proper wheels. Sensible people, for\l"
	.string "once.\p"
	.string "Good timing. I've rebuilt a model with\n"
	.string "two setups.\p"
	.string "It can handle hops and tight obstacles,\n"
	.string "but it can build serious speed too.\p"
	.string "What it still needs is a field test.\p"
	.string "In transfer pricing, you learn never to\n"
	.string "give anything away.\p"
	.string "You simply move its value somewhere\n"
	.string "more useful.\p"
	.string "I record the BIKE as promotional\n"
	.string "equipment, and you as my field tester.\p"
	.string "You get wheels. I get test data, free\n"
	.string "publicity, and a beautifully empty line\l"
	.string "in my inventory.\p"
	.string "Much tidier than hiding money.\p"
	.string "So, {PLAYER}: ride it hard, tell everyone\n"
	.string "Mr. Kasmi built it, and bring back any\l"
	.string "pieces that fall off.\p"
	.string "Deal?\p"
	.string "Good. I've already filed the paperwork.$"

BikeShop_Jaouad_EventScript_AfterGive_Text_0:
	.string "There. A perfectly legitimate\n"
	.string "sponsorship.\p"
	.string "Press R while you're standing still to\n"
	.string "change its setup.\p"
	.string "Use the quick setup for jumps and\n"
	.string "tricks, or switch over when you need\l"
	.string "pure speed.$"

BikeShop_Jaouad_EventScript_CheckBike_Text_0:
	.string "Your BIKE is in PC storage? Hmm.\p"
	.string "Take it out first and I'll give it a look.$"

BikeShop_Jaouad_EventScript_ConvertMachBike_Text_0:
	.string "That's one of my old single-setup\n"
	.string "models. Let me upgrade it so you can\l"
	.string "switch riding styles whenever you like.$"

BikeShop_Jaouad_EventScript_AfterConversion_Text_0:
	.string "There. One frame, both setups. Much\n"
	.string "cleaner.$"

BikeShop_Jaouad_EventScript_BikeInstructions_Text_0:
	.string "Press R while you're standing still to\n"
	.string "switch setups.\p"
	.string "One is built for jumps and tricks. The\n"
	.string "other is built for speed.$"

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
