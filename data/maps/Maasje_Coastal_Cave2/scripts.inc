Maasje_Coastal_Cave2_MapScripts::
	.byte 0


Maasje_Coastal_Cave2_Hiker::
	lock
	faceplayer
	goto_if_unset FLAG_ITEM_COASTAL_CAVE2_QUICK_CLAW, Maasje_Coastal_Cave2_Hiker_2
	goto_if_unset FLAG_ITEM_TRADED_DOME_FOSSIL, Maasje_Coastal_Cave2_Hiker_5
	msgbox Maasje_Coastal_Cave2_Hiker_Text_7, MSGBOX_AUTOCLOSE
	waitmessage
Maasje_Coastal_Cave2_Hiker_1:
	release
	end

Maasje_Coastal_Cave2_Hiker_2:
	msgbox Maasje_Coastal_Cave2_Hiker_Text_0
	waitmessage
	giveitem ITEM_QUICK_CLAW
	waitmessage
	setflag FLAG_ITEM_COASTAL_CAVE2_QUICK_CLAW
	msgbox Maasje_Coastal_Cave2_Hiker_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	goto Maasje_Coastal_Cave2_Hiker_1

Maasje_Coastal_Cave2_Hiker_5:
	msgbox Maasje_Coastal_Cave2_Hiker_Text_2
	waitmessage
	checkitem ITEM_HELIX_FOSSIL
	compare VAR_RESULT, TRUE
	goto_if_eq Maasje_Coastal_Cave2_Hiker_8
	goto Maasje_Coastal_Cave2_Hiker_1

Maasje_Coastal_Cave2_Hiker_8:
	msgbox Maasje_Coastal_Cave2_Hiker_Text_3, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, TRUE
	goto_if_eq Maasje_Coastal_Cave2_Hiker_10
	msgbox Maasje_Coastal_Cave2_Hiker_Text_6, MSGBOX_AUTOCLOSE
	waitmessage
	goto Maasje_Coastal_Cave2_Hiker_1

Maasje_Coastal_Cave2_Hiker_10:
	removeitem ITEM_HELIX_FOSSIL
	msgbox Maasje_Coastal_Cave2_Hiker_Text_4
	waitmessage
	giveitem ITEM_DOME_FOSSIL
	msgbox Maasje_Coastal_Cave2_Hiker_Text_5
	setflag FLAG_ITEM_TRADED_DOME_FOSSIL
	goto Maasje_Coastal_Cave2_Hiker_1


Maasje_Coastal_Cave2_Hiker_Text_0:
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
	.string "Speaking of which, I'm down here looking\n"
	.string "for fossils.\p"
	.string "If you ever find one, come and find me.$"

Maasje_Coastal_Cave2_Hiker_Text_2:
	.string "Still hunting down here.\p"
	.string "You haven't come across any fossils,\n"
	.string "have you?$"

Maasje_Coastal_Cave2_Hiker_Text_3:
	.string "...\p"
	.string "Wow, that HELIX fossil looks amazing!\p"
	.string "Do you want to trade it for my DOME\n"
	.string "fossil?$"

Maasje_Coastal_Cave2_Hiker_Text_4:
	.string "{PLAYER} handed over the HELIX fossil.$"

Maasje_Coastal_Cave2_Hiker_Text_5:
	.string "Thank you. My collection is complete\n"
	.string "now!$"

Maasje_Coastal_Cave2_Hiker_Text_6:
	.string "Too bad. Come back if you ever change\n"
	.string "your mind.$"

Maasje_Coastal_Cave2_Hiker_Text_7:
	.string "Thanks for the trade. My collection is\n"
	.string "complete now!$"
