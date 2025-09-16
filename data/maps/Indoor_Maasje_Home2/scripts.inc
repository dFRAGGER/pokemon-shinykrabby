Indoor_Maasje_Home2_MapScripts::
	.byte 0


Indoor_Maasje_Home2_Sailor::
# 4 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	lock
# 5 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	faceplayer
# 6 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, Indoor_Maasje_Home2_Sailor_2
# 16 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	msgbox Indoor_Maasje_Home2_Sailor_Text_2
# 17 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	waitmessage
Indoor_Maasje_Home2_Sailor_1:
# 19 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	release
	return

Indoor_Maasje_Home2_Sailor_2:
# 7 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	msgbox Indoor_Maasje_Home2_Sailor_Text_0
# 8 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	waitmessage
# 9 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	giveitem ITEM_OLD_ROD
# 10 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	waitmessage
# 11 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	msgbox Indoor_Maasje_Home2_Sailor_Text_1
# 12 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	waitmessage
# 13 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
	goto Indoor_Maasje_Home2_Sailor_1


Indoor_Maasje_Home2_WomanSailor::
# 24 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	lock
# 25 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	faceplayer
# 26 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	msgbox Indoor_Maasje_Home2_WomanSailor_Text_0
# 27 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	waitmessage
# 28 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	release
	return


Indoor_Maasje_Home2_Sailor_Text_0:
# 7 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	.string "I learned the ways of the sea from my\n"
	.string "mother.\p"
	.string "She loves telling stories of all her\n"
	.string "journeys, but sometimes the stories are\l"
	.string "too crazy to be true.\p"
	.string "Nowadays she just sit at home\n"
	.string "reminiscing about the past.\p"
	.string "Here you can have this:$"

Indoor_Maasje_Home2_Sailor_Text_1:
# 11 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	.string "This rod used to be hers, but she\n"
	.string "doesn't use it anymore.\p"
	.string "Maybe you can catch some fish with it.$"

Indoor_Maasje_Home2_Sailor_Text_2:
# 16 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	.string "Well?\p"
	.string "Did you already catch any fish?$"

Indoor_Maasje_Home2_WomanSailor_Text_0:
# 26 "data/maps/Indoor_Maasje_Home2/scripts.pory"
	.string "My son worries about his grandmother a\n"
	.string "lot.\p"
	.string "That is why he is always by her side.$"
