LionsarchCity_Indoor_VisitorCenter_MapScripts::
	.byte 0


VisitorCenter_Receptionist::
# 6 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	lockall
# 7 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	faceplayer
# 8 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	msgbox VisitorCenter_Receptionist_Text_0
# 9 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	waitmessage
# 10 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	releaseall
	return


VisitorCenter_MountainGuide::
# 14 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	lockall
# 15 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	faceplayer
# 16 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	msgbox VisitorCenter_MountainGuide_Text_0
# 17 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	releaseall
	return


VisitorCenter_Ranger::
# 21 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	lockall
# 22 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	faceplayer
# 23 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	msgbox VisitorCenter_Ranger_Text_0
# 24 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	releaseall
	return


VisitorCenter_Hiker::
# 28 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	lockall
# 29 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	faceplayer
# 30 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	msgbox VisitorCenter_Hiker_Text_0
# 31 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	releaseall
	return


VisitorCenter_Tourist::
# 35 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	lockall
# 36 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	faceplayer
# 37 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	msgbox VisitorCenter_Tourist_Text_0
# 38 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	releaseall
	return


VisitorCenter_MapBoard::
# 42 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	lockall
# 43 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	msgbox VisitorCenter_MapBoard_Text_0
# 44 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	releaseall
	return


VisitorCenter_WarningSign::
# 48 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	lockall
# 49 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	msgbox VisitorCenter_WarningSign_Text_0
# 50 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	releaseall
	return


VisitorCenter_BrochureRack::
# 54 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	lockall
# 55 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	msgbox VisitorCenter_BrochureRack_Text_0
# 56 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	releaseall
	return


VisitorCenter_DonationBox::
# 60 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	lockall
# 61 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	msgbox VisitorCenter_DonationBox_Text_0
# 62 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	releaseall
	return


VisitorCenter_Receptionist_Text_0:
# 8 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	.string "Welcome to the Twin Lions Visitor\n"
	.string "Center!\p"
	.string "We provide information and supplies for\n"
	.string "travelers heading north to the Lion\l"
	.string "Mountains.\p"
	.string "How can I help you today?$"

VisitorCenter_MountainGuide_Text_0:
# 16 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	.string "The Lion Mountains are named after the\n"
	.string "twin peaks that resemble two lions\l"
	.string "facing each other.\p"
	.string "The northern route is challenging but\n"
	.string "offers incredible views.\p"
	.string "Make sure you're prepared - the weather\n"
	.string "can change quickly up there!$"

VisitorCenter_Ranger_Text_0:
# 23 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	.string "I'm a ranger stationed in the mountains.\p"
	.string "We've noticed increased activity from\n"
	.string "the Faculty lately.\p"
	.string "They claim to have mining permits, but\n"
	.string "something feels... off.\p"
	.string "Please be careful if you head up there.$"

VisitorCenter_Hiker_Text_0:
# 30 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	.string "I've hiked these mountains for twenty\n"
	.string "years.\p"
	.string "The Faculty's drilling has disturbed the\n"
	.string "local Pokémon.\p"
	.string "Ursaring have been more aggressive\n"
	.string "than usual.\p"
	.string "Stay on the marked trails!$"

VisitorCenter_Tourist_Text_0:
# 37 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	.string "I came all the way from Marshduke City\n"
	.string "to see the Twin Lions!\p"
	.string "Also the view from the eastern cliff\n"
	.string "route is supposed to be spectacular.\p"
	.string "I'm so excited!$"

VisitorCenter_MapBoard_Text_0:
# 43 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	.string "A large map of the Lion Mountains\n"
	.string "region:\p"
	.string "- Northern Route:\n"
	.string "Steep terrain, requires proper footware\p"
	.string "- Eastern Cliff Route:\n"
	.string "Longer path to Marshduke City\p"
	.string "- Wildlife Warning:\n"
	.string "Ursaring, Donphan, Golem common\p"
	.string "- Faculty Mining Zone:\n"
	.string "RESTRICTED ACCESS$"

VisitorCenter_WarningSign_Text_0:
# 49 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	.string "MOUNTAIN SAFETY WARNING:\p"
	.string "- Bring plenty of Potions\n"
	.string "and Revives\p"
	.string "- Watch for falling rocks\n"
	.string "- Avoid Faculty mining zones\p"
	.string "- Emergency shelters on map\p"
	.string "- Report suspicious activity\n"
	.string "to rangers$"

VisitorCenter_BrochureRack_Text_0:
# 55 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	.string "Brochures about the Lion Mountains:\p"
	.string "- 'Twin Lions: A Natural Wonder'\n"
	.string "- 'Mountain Pokémon of the North'\p"
	.string "- 'Hiking Safety Guide'\n"
	.string "- 'History of Lionsarch City'$"

VisitorCenter_DonationBox_Text_0:
# 61 "data/maps/LionsarchCity_Indoor_VisitorCenter/scripts.pory"
	.string "A donation box for mountain trail\n"
	.string "maintenance.\p"
	.string "There's a note:\p"
	.string "'Help us keep the trails safe\n"
	.string "and clean!\p"
	.string "All donations go to ranger programs\n"
	.string "and wildlife protection.'$"
