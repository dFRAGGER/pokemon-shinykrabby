Maasje_MapScripts::
	.byte 0


Maasje_Sign_Welcome::
# 4 "data/maps/Maasje/scripts.pory"
	lock
# 5 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_Welcome_Text_0
# 6 "data/maps/Maasje/scripts.pory"
	waitmessage
# 7 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Sign_Jakub_Home::
# 11 "data/maps/Maasje/scripts.pory"
	lock
# 12 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_Jakub_Home_Text_0
# 13 "data/maps/Maasje/scripts.pory"
	waitmessage
# 14 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Sign_Gym::
# 18 "data/maps/Maasje/scripts.pory"
	lock
# 19 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_Gym_Text_0
# 20 "data/maps/Maasje/scripts.pory"
	waitmessage
# 21 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Sign_Hill::
# 25 "data/maps/Maasje/scripts.pory"
	lock
# 26 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_Hill_Text_0
# 27 "data/maps/Maasje/scripts.pory"
	waitmessage
# 28 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Sign_Beekeeper::
# 32 "data/maps/Maasje/scripts.pory"
	lock
# 33 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_Beekeeper_Text_0
# 34 "data/maps/Maasje/scripts.pory"
	waitmessage
# 35 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Sign_CrabHill::
# 39 "data/maps/Maasje/scripts.pory"
	lock
# 40 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_CrabHill_Text_0
# 41 "data/maps/Maasje/scripts.pory"
	waitmessage
# 42 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Sign_NextRoute::
# 46 "data/maps/Maasje/scripts.pory"
	lock
# 47 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_NextRoute_Text_0
# 48 "data/maps/Maasje/scripts.pory"
	waitmessage
# 49 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Krabby_Cry::
# 53 "data/maps/Maasje/scripts.pory"
	playmoncry SPECIES_KRABBY, CRY_MODE_NORMAL
	return


Maasje_Collect_Honey_BeeHives::
# 57 "data/maps/Maasje/scripts.pory"
	lock
# 58 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Collect_Honey_BeeHives_Text_0
# 59 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Sign_Welcome_Text_0:
# 5 "data/maps/Maasje/scripts.pory"
	.string "Welcome to Maasje!$"

Maasje_Sign_Jakub_Home_Text_0:
# 12 "data/maps/Maasje/scripts.pory"
	.string "Jakub's House$"

Maasje_Sign_Gym_Text_0:
# 19 "data/maps/Maasje/scripts.pory"
	.string "Maasje Gym:\n"
	.string "Where sand rules the world.$"

Maasje_Sign_Hill_Text_0:
# 26 "data/maps/Maasje/scripts.pory"
	.string "Uphill: PokeGym\n"
	.string "Downhill: The beach$"

Maasje_Sign_Beekeeper_Text_0:
# 33 "data/maps/Maasje/scripts.pory"
	.string "Beekeeper Geurts's House$"

Maasje_Sign_CrabHill_Text_0:
# 40 "data/maps/Maasje/scripts.pory"
	.string "Crab Hill:\n"
	.string "WARNING! EASY TO GET LOST! TAKE CARE!$"

Maasje_Sign_NextRoute_Text_0:
# 47 "data/maps/Maasje/scripts.pory"
	.string "The Cloud Forest:\n"
	.string "Enter on own risk, or with a guide.$"

Maasje_Collect_Honey_BeeHives_Text_0:
# 58 "data/maps/Maasje/scripts.pory"
	.string "You have collected honey from the\n"
	.string "beehive.$"
