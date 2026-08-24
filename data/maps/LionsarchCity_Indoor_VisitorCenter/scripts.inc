LionsarchCity_Indoor_VisitorCenter_MapScripts::
	.byte 0


VisitorCenter_Receptionist::
	lockall
	faceplayer
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, VisitorCenter_Receptionist_2
	msgbox VisitorCenter_Receptionist_Text_1
	waitmessage
	releaseall
	return

VisitorCenter_Receptionist_2:
	msgbox VisitorCenter_Receptionist_Text_0
	waitmessage
	releaseall
	end


VisitorCenter_MountainGuide::
	lockall
	faceplayer
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, VisitorCenter_MountainGuide_2
	msgbox VisitorCenter_MountainGuide_Text_1
	releaseall
	return

VisitorCenter_MountainGuide_2:
	msgbox VisitorCenter_MountainGuide_Text_0
	waitmessage
	releaseall
	end


VisitorCenter_Ranger::
	lockall
	faceplayer
	goto_if_set FLAG_ITEM_LIONSARCH_VISITOR_CENTER_FULL_HEAL, VisitorCenter_Ranger_2
	msgbox VisitorCenter_Ranger_Text_2
	waitmessage
	giveitem ITEM_FULL_HEAL
	setflag FLAG_ITEM_LIONSARCH_VISITOR_CENTER_FULL_HEAL
	msgbox VisitorCenter_Ranger_Text_3
	waitmessage
	releaseall
	return

VisitorCenter_Ranger_2:
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, VisitorCenter_Ranger_5
	msgbox VisitorCenter_Ranger_Text_1
	waitmessage
	releaseall
	end

VisitorCenter_Ranger_5:
	msgbox VisitorCenter_Ranger_Text_0
	waitmessage
	releaseall
	end


VisitorCenter_Hiker::
	lockall
	faceplayer
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, VisitorCenter_Hiker_2
	msgbox VisitorCenter_Hiker_Text_1
	releaseall
	return

VisitorCenter_Hiker_2:
	msgbox VisitorCenter_Hiker_Text_0
	waitmessage
	releaseall
	end


VisitorCenter_Tourist::
	lockall
	faceplayer
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, VisitorCenter_Tourist_2
	msgbox VisitorCenter_Tourist_Text_1
	releaseall
	return

VisitorCenter_Tourist_2:
	msgbox VisitorCenter_Tourist_Text_0
	waitmessage
	releaseall
	end


VisitorCenter_MapBoard::
	lockall
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, VisitorCenter_MapBoard_2
	msgbox VisitorCenter_MapBoard_Text_1
	releaseall
	return

VisitorCenter_MapBoard_2:
	msgbox VisitorCenter_MapBoard_Text_0
	waitmessage
	releaseall
	end


VisitorCenter_WarningSign::
	lockall
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, VisitorCenter_WarningSign_2
	msgbox VisitorCenter_WarningSign_Text_1
	releaseall
	return

VisitorCenter_WarningSign_2:
	msgbox VisitorCenter_WarningSign_Text_0
	waitmessage
	releaseall
	end


VisitorCenter_BrochureRack::
	lockall
	msgbox VisitorCenter_BrochureRack_Text_0
	releaseall
	return


VisitorCenter_DonationBox::
	lockall
	msgbox VisitorCenter_DonationBox_Text_0
	releaseall
	return


VisitorCenter_Receptionist_Text_0:
	.string "Welcome to the Twin Lions Visitor\n"
	.string "Center!\p"
	.string "The Faculty has cleared out of the\n"
	.string "mountains.\p"
	.string "Things have been a lot quieter up there\n"
	.string "since you dealt with them.\p"
	.string "Feel free to explore, the trails are\n"
	.string "open again!$"

VisitorCenter_Receptionist_Text_1:
	.string "Welcome to the Twin Lions Visitor\n"
	.string "Center!\p"
	.string "We provide information and supplies for\n"
	.string "travelers heading north to the Lion\l"
	.string "Mountains.\p"
	.string "How can I help you today?$"

VisitorCenter_MountainGuide_Text_0:
	.string "The Lion Mountains are named after the\n"
	.string "twin peaks that resemble two lions\l"
	.string "facing each other.\p"
	.string "Now that the Faculty's drilling has\n"
	.string "stopped, the trails are peaceful again.\p"
	.string "The wildlife is already starting to\n"
	.string "settle down. It's a good time to head up\l"
	.string "there!$"

VisitorCenter_MountainGuide_Text_1:
	.string "The Lion Mountains are named after the\n"
	.string "twin peaks that resemble two lions\l"
	.string "facing each other.\p"
	.string "The northern route is challenging but\n"
	.string "offers incredible views.\p"
	.string "Make sure you're prepared, the weather\n"
	.string "can change quickly up there!$"

VisitorCenter_Ranger_Text_0:
	.string "You actually stopped the Faculty\n"
	.string "operation.\p"
	.string "I filed three reports about those\n"
	.string "permits and got nothing back.\p"
	.string "Whatever you did up there, thank you.\p"
	.string "The mountains are ours again.$"

VisitorCenter_Ranger_Text_1:
	.string "I'm a ranger stationed in the mountains.\p"
	.string "We've noticed increased activity from\n"
	.string "the Faculty lately.\p"
	.string "They claim to have mining permits, but\n"
	.string "something feels... off.\p"
	.string "Please be careful if you head up there.$"

VisitorCenter_Ranger_Text_2:
	.string "I'm a ranger stationed in the mountains.\p"
	.string "We've noticed increased activity from\n"
	.string "the Faculty lately.\p"
	.string "They claim to have mining permits, but\n"
	.string "something feels... off.\p"
	.string "Here, take this before you head up.$"

VisitorCenter_Ranger_Text_3:
	.string "Stay safe out there, and report\n"
	.string "anything suspicious.$"

VisitorCenter_Hiker_Text_0:
	.string "I've hiked these mountains for twenty\n"
	.string "years.\p"
	.string "The difference already... the Ursaring\n"
	.string "have calmed right down.\p"
	.string "When the drilling stopped, it was like\n"
	.string "the whole mountain exhaled.\p"
	.string "First decent hike I've had in months.$"

VisitorCenter_Hiker_Text_1:
	.string "I've hiked these mountains for twenty\n"
	.string "years.\p"
	.string "The Faculty's drilling has disturbed the\n"
	.string "local Pokémon.\p"
	.string "Ursaring have been more aggressive\n"
	.string "than usual.\p"
	.string "Stay on the marked trails!$"

VisitorCenter_Tourist_Text_0:
	.string "I came all the way from Marshduke City\n"
	.string "to see the Twin Lions!\p"
	.string "I heard the Faculty was causing trouble\n"
	.string "up here, but it looks like that's sorted\l"
	.string "now.\p"
	.string "The eastern cliff route is absolutely\n"
	.string "stunning.\p"
	.string "So worth the trip!$"

VisitorCenter_Tourist_Text_1:
	.string "I came all the way from Marshduke City\n"
	.string "to see the Twin Lions!\p"
	.string "Also the view from the eastern cliff\n"
	.string "route is supposed to be spectacular.\p"
	.string "I'm so excited!$"

VisitorCenter_MapBoard_Text_0:
	.string "A large map of the Lion Mountains\n"
	.string "region:\p"
	.string ", Northern Route:\n"
	.string "Steep terrain, requires proper footware\p"
	.string ", Eastern Cliff Route:\n"
	.string "Longer path to Marshduke City\p"
	.string ", Wildlife Warning:\n"
	.string "Ursaring, Donphan, Golem common\p"
	.string ", Faculty Mining Zone:\n"
	.string "OPERATION CEASED$"

VisitorCenter_MapBoard_Text_1:
	.string "A large map of the Lion Mountains\n"
	.string "region:\p"
	.string ", Northern Route:\n"
	.string "Steep terrain, requires proper footware\p"
	.string ", Eastern Cliff Route:\n"
	.string "Longer path to Marshduke City\p"
	.string ", Wildlife Warning:\n"
	.string "Ursaring, Donphan, Golem common\p"
	.string ", Faculty Mining Zone:\n"
	.string "RESTRICTED ACCESS$"

VisitorCenter_WarningSign_Text_0:
	.string "MOUNTAIN SAFETY WARNING:\p"
	.string ", Bring plenty of Potions\n"
	.string "and Revives\p"
	.string ", Watch for falling rocks\n"
	.string ", Avoid old Faculty mining zones\p"
	.string ", Emergency shelters on map\p"
	.string ", Faculty operation cleared.\n"
	.string "Trails now fully open.$"

VisitorCenter_WarningSign_Text_1:
	.string "MOUNTAIN SAFETY WARNING:\p"
	.string ", Bring plenty of Potions\n"
	.string "and Revives\p"
	.string ", Watch for falling rocks\n"
	.string ", Avoid Faculty mining zones\p"
	.string ", Emergency shelters on map\p"
	.string ", Report suspicious activity\n"
	.string "to rangers$"

VisitorCenter_BrochureRack_Text_0:
	.string "Brochures about the Lion Mountains:\p"
	.string ", 'Twin Lions: A Natural Wonder'\n"
	.string ", 'Mountain Pokémon of the North'\p"
	.string ", 'Hiking Safety Guide'\n"
	.string ", 'History of Lionsarch City'$"

VisitorCenter_DonationBox_Text_0:
	.string "A donation box for mountain trail\n"
	.string "maintenance.\p"
	.string "There's a note:\p"
	.string "'Help us keep the trails safe\n"
	.string "and clean!\p"
	.string "All donations go to ranger programs\n"
	.string "and wildlife protection.'$"
