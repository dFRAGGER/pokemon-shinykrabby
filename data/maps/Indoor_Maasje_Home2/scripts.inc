Indoor_Maasje_Home2_MapScripts::
	.byte 0


Indoor_Maasje_Home2_Sailor::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_OLD_ROD, Indoor_Maasje_Home2_Sailor_2
	msgbox Indoor_Maasje_Home2_Sailor_Text_2
	waitmessage
Indoor_Maasje_Home2_Sailor_1:
	release
	return

Indoor_Maasje_Home2_Sailor_2:
	msgbox Indoor_Maasje_Home2_Sailor_Text_0
	waitmessage
	giveitem ITEM_OLD_ROD
	waitmessage
	msgbox Indoor_Maasje_Home2_Sailor_Text_1
	waitmessage
	setflag FLAG_RECEIVED_OLD_ROD
	goto Indoor_Maasje_Home2_Sailor_1


Indoor_Maasje_Home2_WomanSailor::
	lock
	faceplayer
	msgbox Indoor_Maasje_Home2_WomanSailor_Text_0
	waitmessage
	release
	return


Indoor_Maasje_Home2_Sailor_Text_0:
	.string "I learned the ways of the sea from my\n"
	.string "mother.\p"
	.string "She loves telling stories of all her\n"
	.string "journeys, but sometimes the stories are\l"
	.string "too crazy to be true.\p"
	.string "Nowadays she just sit at home\n"
	.string "reminiscing about the past.\p"
	.string "Here you can have this:$"

Indoor_Maasje_Home2_Sailor_Text_1:
	.string "This rod used to be hers, but she\n"
	.string "doesn't use it anymore.\p"
	.string "Maybe you can catch some fish with it.$"

Indoor_Maasje_Home2_Sailor_Text_2:
	.string "Well?\p"
	.string "Did you catch any fish already?$"

Indoor_Maasje_Home2_WomanSailor_Text_0:
	.string "My son worries about his grandmother a\n"
	.string "lot.\p"
	.string "That is why he is always by her side.$"
