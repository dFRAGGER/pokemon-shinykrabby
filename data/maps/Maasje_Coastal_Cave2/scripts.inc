Maasje_Coastal_Cave2_MapScripts::
	.byte 0


Maasje_Coastal_Cave2_Hiker::
# 4 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	lock
# 5 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	faceplayer
# 6 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	goto_if_unset FLAG_ITEM_TRADED_DOME_FOSSIL, Maasje_Coastal_Cave2_Hiker_2
# 32 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	msgbox Maasje_Coastal_Cave2_Hiker_Text_5
Maasje_Coastal_Cave2_Hiker_1:
# 34 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	release
	end

Maasje_Coastal_Cave2_Hiker_2:
# 7 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	msgbox Maasje_Coastal_Cave2_Hiker_Text_0
# 8 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	waitmessage
# 9 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	checkitem ITEM_HELIX_FOSSIL
# 10 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Maasje_Coastal_Cave2_Hiker_5
# 26 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	waitmessage
# 27 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	release
	end

Maasje_Coastal_Cave2_Hiker_5:
# 11 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	msgbox Maasje_Coastal_Cave2_Hiker_Text_1, MSGBOX_YESNO
# 12 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	waitmessage
# 13 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Maasje_Coastal_Cave2_Hiker_8
# 22 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	msgbox Maasje_Coastal_Cave2_Hiker_Text_4
	goto Maasje_Coastal_Cave2_Hiker_1

Maasje_Coastal_Cave2_Hiker_8:
# 14 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	removeitem ITEM_HELIX_FOSSIL
# 15 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	msgbox Maasje_Coastal_Cave2_Hiker_Text_2
# 16 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	waitmessage
# 17 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	giveitem ITEM_DOME_FOSSIL
# 18 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	msgbox Maasje_Coastal_Cave2_Hiker_Text_3
# 19 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	setflag FLAG_ITEM_TRADED_DOME_FOSSIL
	goto Maasje_Coastal_Cave2_Hiker_1


Maasje_Coastal_Cave2_Hiker_Text_0:
# 7 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	.string "I'm looking for fossils, if you happen to\n"
	.string "find one please tell me!$"

Maasje_Coastal_Cave2_Hiker_Text_1:
# 11 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	.string "...\p"
	.string "Wow that HELIX fossil looks amazing!\p"
	.string "Do you want to trade it for my DOME\n"
	.string "fossil?$"

Maasje_Coastal_Cave2_Hiker_Text_2:
# 15 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	.string "{PLAYER} handed over the HELIX\n"
	.string "fossil.$"

Maasje_Coastal_Cave2_Hiker_Text_3:
# 18 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	.string "Thank you, my collection is complete\n"
	.string "now!$"

Maasje_Coastal_Cave2_Hiker_Text_4:
# 22 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	.string "Too bad, come back when you ever\n"
	.string "change your mind!$"

Maasje_Coastal_Cave2_Hiker_Text_5:
# 32 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	.string "Thanks for trading, my collection is\n"
	.string "complete now!$"
