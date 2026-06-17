Maasje_Coastal_Cave2_MapScripts::
	.byte 0


Maasje_Coastal_Cave2_Hiker::
# 4 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	lock
# 5 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	faceplayer
# 6 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	goto_if_unset FLAG_ITEM_COASTAL_CAVE2_QUICK_CLAW, Maasje_Coastal_Cave2_Hiker_2
# 16 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	goto_if_unset FLAG_ITEM_TRADED_DOME_FOSSIL, Maasje_Coastal_Cave2_Hiker_5
# 38 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	msgbox Maasje_Coastal_Cave2_Hiker_Text_7, MSGBOX_AUTOCLOSE
# 39 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	waitmessage
Maasje_Coastal_Cave2_Hiker_1:
# 42 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	release
	end

Maasje_Coastal_Cave2_Hiker_2:
# 7 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	msgbox Maasje_Coastal_Cave2_Hiker_Text_0
# 8 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	waitmessage
# 9 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 10 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	waitmessage
# 11 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	setflag FLAG_ITEM_COASTAL_CAVE2_QUICK_CLAW
# 12 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	msgbox Maasje_Coastal_Cave2_Hiker_Text_1, MSGBOX_AUTOCLOSE
# 13 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	waitmessage
	goto Maasje_Coastal_Cave2_Hiker_1

Maasje_Coastal_Cave2_Hiker_5:
# 17 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	msgbox Maasje_Coastal_Cave2_Hiker_Text_2
# 18 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	waitmessage
# 19 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	checkitem ITEM_HELIX_FOSSIL
# 20 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Maasje_Coastal_Cave2_Hiker_8
	goto Maasje_Coastal_Cave2_Hiker_1

Maasje_Coastal_Cave2_Hiker_8:
# 21 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	msgbox Maasje_Coastal_Cave2_Hiker_Text_3, MSGBOX_YESNO
# 22 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	waitmessage
# 23 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Maasje_Coastal_Cave2_Hiker_10
# 32 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	msgbox Maasje_Coastal_Cave2_Hiker_Text_6, MSGBOX_AUTOCLOSE
# 33 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	waitmessage
	goto Maasje_Coastal_Cave2_Hiker_1

Maasje_Coastal_Cave2_Hiker_10:
# 24 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	removeitem ITEM_HELIX_FOSSIL
# 25 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	msgbox Maasje_Coastal_Cave2_Hiker_Text_4
# 26 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	waitmessage
# 27 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	giveitem ITEM_DOME_FOSSIL
# 28 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	msgbox Maasje_Coastal_Cave2_Hiker_Text_5
# 29 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	setflag FLAG_ITEM_TRADED_DOME_FOSSIL
	goto Maasje_Coastal_Cave2_Hiker_1


Maasje_Coastal_Cave2_Hiker_Text_0:
# 7 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	.string "The tide pushes all kinds of things into\n"
	.string "these caves.\p"
	.string "Found this wedged between two rocks\n"
	.string "near the back wall.\p"
	.string "Sharp. Curved. Some kind of claw.\p"
	.string "Could be from a sea creature. Something\n"
	.string "large.\p"
	.string "I'm a fossil hunter, not a biologist -\n"
	.string "here, you take it.$"

Maasje_Coastal_Cave2_Hiker_Text_1:
# 12 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	.string "Speaking of which, I'm down here looking\n"
	.string "for fossils.\p"
	.string "If you ever find one, come and find me.$"

Maasje_Coastal_Cave2_Hiker_Text_2:
# 17 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	.string "Still hunting down here.\p"
	.string "You haven't come across any fossils,\n"
	.string "have you?$"

Maasje_Coastal_Cave2_Hiker_Text_3:
# 21 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	.string "...\p"
	.string "Wow, that HELIX fossil looks amazing!\p"
	.string "Do you want to trade it for my DOME\n"
	.string "fossil?$"

Maasje_Coastal_Cave2_Hiker_Text_4:
# 25 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	.string "{PLAYER} handed over the HELIX\n"
	.string "fossil.$"

Maasje_Coastal_Cave2_Hiker_Text_5:
# 28 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	.string "Thank you. My collection is complete\n"
	.string "now!$"

Maasje_Coastal_Cave2_Hiker_Text_6:
# 32 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	.string "Too bad. Come back if you ever change\n"
	.string "your mind.$"

Maasje_Coastal_Cave2_Hiker_Text_7:
# 38 "data/maps/Maasje_Coastal_Cave2/scripts.pory"
	.string "Thanks for the trade. My collection is\n"
	.string "complete now!$"
