Mistcity_Indoor_MushroomShop_MapScripts::
	.byte 0


Mistcity_Indoor_MushroomShop_MushroomGirl::
	lock
	faceplayer
	goto_if_unset FLAG_MUSHROOM_MISSION_STARTED, Mistcity_Indoor_MushroomShop_MushroomGirl_3
Mistcity_Indoor_MushroomShop_MushroomGirl_1:
	goto_if_set FLAG_MUSHROOM_MISSION_STARTED, Mistcity_Indoor_MushroomShop_MushroomGirl_7
	return

Mistcity_Indoor_MushroomShop_MushroomGirl_2:
	setflag FLAG_MUSHROOM_MISSION_STARTED
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end

Mistcity_Indoor_MushroomShop_MushroomGirl_3:
	goto_if_unset FLAG_MUSHROOM_MISSION_COMPLETED, Mistcity_Indoor_MushroomShop_MushroomGirl_2
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_1

Mistcity_Indoor_MushroomShop_MushroomGirl_6:
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_PARAS, Mistcity_Indoor_MushroomShop_MushroomGirl_11
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_PARASECT, Mistcity_Indoor_MushroomShop_MushroomGirl_11
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_SHROOMISH, Mistcity_Indoor_MushroomShop_MushroomGirl_11
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_BRELOOM, Mistcity_Indoor_MushroomShop_MushroomGirl_11
	goto_if_set FLAG_MUSHROOM_MISSION_STARTED, Mistcity_Indoor_MushroomShop_MushroomGirl_20
	return

Mistcity_Indoor_MushroomShop_MushroomGirl_7:
	goto_if_unset FLAG_MUSHROOM_MISSION_COMPLETED, Mistcity_Indoor_MushroomShop_MushroomGirl_6
	return

Mistcity_Indoor_MushroomShop_MushroomGirl_11:
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_2
	waitmessage
	call Mistcity_CheckParasInParty
	call Mistcity_CheckParasectInParty
	call Mistcity_CheckShroomishInParty
	call Mistcity_CheckBreloomInParty
	goto_if_set FLAG_MISTCITY_SHOW_MUSHROOM_PARAS, Mistcity_Indoor_MushroomShop_MushroomGirl_26
Mistcity_Indoor_MushroomShop_MushroomGirl_24:
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_7
	waitmessage
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_PARAS, Mistcity_Indoor_MushroomShop_MushroomGirl_33
Mistcity_Indoor_MushroomShop_MushroomGirl_32:
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_PARASECT, Mistcity_Indoor_MushroomShop_MushroomGirl_36
Mistcity_Indoor_MushroomShop_MushroomGirl_35:
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_SHROOMISH, Mistcity_Indoor_MushroomShop_MushroomGirl_39
Mistcity_Indoor_MushroomShop_MushroomGirl_38:
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_BRELOOM, Mistcity_Indoor_MushroomShop_MushroomGirl_42
Mistcity_Indoor_MushroomShop_MushroomGirl_41:
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_12
	waitmessage
	release
	end

Mistcity_Indoor_MushroomShop_MushroomGirl_19:
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_13
	waitmessage
	release
	end

Mistcity_Indoor_MushroomShop_MushroomGirl_20:
	goto_if_unset FLAG_MUSHROOM_MISSION_COMPLETED, Mistcity_Indoor_MushroomShop_MushroomGirl_19
	return

Mistcity_Indoor_MushroomShop_MushroomGirl_23:
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_3
	waitmessage
	setflag FLAG_MUSHROOM_MISSION_COMPLETED
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_BALM_MUSHROOM
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_4
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_BIG_MUSHROOM
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_5
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_TINY_MUSHROOM
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_6
	waitmessage
	release
	end

Mistcity_Indoor_MushroomShop_MushroomGirl_25:
	goto_if_set FLAG_MISTCITY_SHOW_MUSHROOM_SHROOMISH, Mistcity_Indoor_MushroomShop_MushroomGirl_29
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_24

Mistcity_Indoor_MushroomShop_MushroomGirl_26:
	goto_if_set FLAG_MISTCITY_SHOW_MUSHROOM_PARASECT, Mistcity_Indoor_MushroomShop_MushroomGirl_25
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_24

Mistcity_Indoor_MushroomShop_MushroomGirl_29:
	goto_if_set FLAG_MISTCITY_SHOW_MUSHROOM_BRELOOM, Mistcity_Indoor_MushroomShop_MushroomGirl_23
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_24

Mistcity_Indoor_MushroomShop_MushroomGirl_33:
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_8
	waitmessage
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_32

Mistcity_Indoor_MushroomShop_MushroomGirl_36:
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_9
	waitmessage
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_35

Mistcity_Indoor_MushroomShop_MushroomGirl_39:
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_10
	waitmessage
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_38

Mistcity_Indoor_MushroomShop_MushroomGirl_42:
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_11
	waitmessage
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_41


Mistcity_CheckParasInParty::
	goto_if_set FLAG_MISTCITY_SHOW_MUSHROOM_PARAS, Mistcity_CheckParasInParty_2
	setvar VAR_0x8004, 0
Mistcity_CheckParasInParty_5:
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ne Mistcity_CheckParasInParty_6
	return

Mistcity_CheckParasInParty_2:
	return

Mistcity_CheckParasInParty_6:
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_PARAS
	goto_if_eq Mistcity_CheckParasInParty_9
	addvar VAR_0x8004, 1
	goto Mistcity_CheckParasInParty_5

Mistcity_CheckParasInParty_9:
	setflag FLAG_MISTCITY_SHOW_MUSHROOM_PARAS
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
	msgbox Mistcity_CheckParasInParty_Text_0
	return


Mistcity_CheckParasectInParty::
	goto_if_set FLAG_MISTCITY_SHOW_MUSHROOM_PARASECT, Mistcity_CheckParasectInParty_2
	setvar VAR_0x8004, 0
Mistcity_CheckParasectInParty_5:
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ne Mistcity_CheckParasectInParty_6
	return

Mistcity_CheckParasectInParty_2:
	return

Mistcity_CheckParasectInParty_6:
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_PARASECT
	goto_if_eq Mistcity_CheckParasectInParty_9
	addvar VAR_0x8004, 1
	goto Mistcity_CheckParasectInParty_5

Mistcity_CheckParasectInParty_9:
	setflag FLAG_MISTCITY_SHOW_MUSHROOM_PARASECT
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
	msgbox Mistcity_CheckParasectInParty_Text_0
	return


Mistcity_CheckShroomishInParty::
	goto_if_set FLAG_MISTCITY_SHOW_MUSHROOM_SHROOMISH, Mistcity_CheckShroomishInParty_2
	setvar VAR_0x8004, 0
Mistcity_CheckShroomishInParty_5:
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ne Mistcity_CheckShroomishInParty_6
	return

Mistcity_CheckShroomishInParty_2:
	return

Mistcity_CheckShroomishInParty_6:
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_SHROOMISH
	goto_if_eq Mistcity_CheckShroomishInParty_9
	addvar VAR_0x8004, 1
	goto Mistcity_CheckShroomishInParty_5

Mistcity_CheckShroomishInParty_9:
	setflag FLAG_MISTCITY_SHOW_MUSHROOM_SHROOMISH
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
	msgbox Mistcity_CheckShroomishInParty_Text_0
	return


Mistcity_CheckBreloomInParty::
	goto_if_set FLAG_MISTCITY_SHOW_MUSHROOM_BRELOOM, Mistcity_CheckBreloomInParty_2
	setvar VAR_0x8004, 0
Mistcity_CheckBreloomInParty_5:
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ne Mistcity_CheckBreloomInParty_6
	return

Mistcity_CheckBreloomInParty_2:
	return

Mistcity_CheckBreloomInParty_6:
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_BRELOOM
	goto_if_eq Mistcity_CheckBreloomInParty_9
	addvar VAR_0x8004, 1
	goto Mistcity_CheckBreloomInParty_5

Mistcity_CheckBreloomInParty_9:
	setflag FLAG_MISTCITY_SHOW_MUSHROOM_BRELOOM
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
	msgbox Mistcity_CheckBreloomInParty_Text_0
	return


Mushroom_Vileplume::
	lock
	faceplayer
	playmoncry SPECIES_VILEPLUME, CRY_MODE_NORMAL
	msgbox Mushroom_Vileplume_Text_0
	waitmessage
	release
	return


Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0:
	.string "LEAF$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_1:
	.string "HEY! WELCOME!\p"
	.string "Watch your step, a new batch of\n"
	.string "mushrooms just arrived from the\l"
	.string "forest!\p"
	.string "I'm {COLOR GREEN}Leaf{COLOR DARK_GRAY}! I'm a mycologist!\p"
	.string "That means I LOVE MUSHROOMS!\n"
	.string "And this forest is a PARADISE!\p"
	.string "Say, you're a trainer, right?!\p"
	.string "You could help me with my research!\p"
	.string "I'm making a Fungus Index!\p"
	.string "Could you show me some Pokémon that\n"
	.string "have fungi on them?\p"
	.string "I'm looking for a Paras, a Parasect, a\n"
	.string "Shroomish, and a Breloom!\p"
	.string "Pleeeease?$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_2:
	.string "Well!!\p"
	.string "Have you found any new mushroom\n"
	.string "Pokemon?$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_3:
	.string "YOU DID IT! YOU DID IT!\p"
	.string "My Fungus Index is complete!\p"
	.string "I'm the happiest mycologist in the\n"
	.string "world!\p"
	.string "Here, I grew this for you! It's extra\n"
	.string "potent!$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_4:
	.string "Wait! Wait!\p"
	.string "I have more!$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_5:
	.string "No.. No! I'm not done!$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_6:
	.string "There you go!\p"
	.string "Pssttt....\p"
	.string "If you ever need some shrooms to trip\n"
	.string "out...\p"
	.string "I'm here for ya...$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_7:
	.string "For my Fungus Index to be complete I'm\n"
	.string "still missing:$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_8:
	.string "A Paras.$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_9:
	.string "A Parasect.$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_10:
	.string "A Shroomish.$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_11:
	.string "A Breloom.$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_12:
	.string "Good luck finding those!\p"
	.string "I have a small reward for you if you\n"
	.string "manage to help me complete my Fungus\l"
	.string "Index.$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_13:
	.string "Thank you so much for helping me\n"
	.string "complete my Fungus Index!\p"
	.string "Are you enjoying those mushrooms I\n"
	.string "gave you?$"

Mistcity_CheckParasInParty_Text_0:
	.string "Ooh, a Paras with tochukaso spores!\p"
	.string "A classic symbiotic relationship!\n"
	.string "Fascinating!$"

Mistcity_CheckParasectInParty_Text_0:
	.string "YES! The fungus has taken full control\n"
	.string "of the host!\p"
	.string "Look at those wonderfully vacant eyes!\n"
	.string "This Parasect is perfect!$"

Mistcity_CheckShroomishInParty_Text_0:
	.string "A Shroomish! I love how its spores can\n"
	.string "paralyze a foe! So efficient!\p"
	.string "Have you found any more interesting\n"
	.string "shroom species?$"

Mistcity_CheckBreloomInParty_Text_0:
	.string "Breloom, the apex predator of the\n"
	.string "mushroom world!\p"
	.string "Its toxic spores are a masterpiece of\n"
	.string "natural engineering!$"

Mushroom_Vileplume_Text_0:
	.string "Vileeee...\p"
	.string "PLUMEEEEE!$"
