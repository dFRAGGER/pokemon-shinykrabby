Mistcity_Indoor_MushroomShop_MapScripts::
	.byte 0


Mistcity_Indoor_MushroomShop_MushroomGirl::
# 5 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	lock
# 6 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	faceplayer
# 7 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MUSHROOM_MISSION_STARTED, Mistcity_Indoor_MushroomShop_MushroomGirl_3
Mistcity_Indoor_MushroomShop_MushroomGirl_1:
# 15 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_set FLAG_MUSHROOM_MISSION_STARTED, Mistcity_Indoor_MushroomShop_MushroomGirl_7
	return

Mistcity_Indoor_MushroomShop_MushroomGirl_2:
# 8 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setflag FLAG_MUSHROOM_MISSION_STARTED
# 9 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
# 10 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_1, MSGBOX_AUTOCLOSE
# 11 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
# 12 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	release
	end

Mistcity_Indoor_MushroomShop_MushroomGirl_3:
# 7 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MUSHROOM_MISSION_COMPLETED, Mistcity_Indoor_MushroomShop_MushroomGirl_2
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_1

Mistcity_Indoor_MushroomShop_MushroomGirl_6:
# 16 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_PARAS, Mistcity_Indoor_MushroomShop_MushroomGirl_11
# 16 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_PARASECT, Mistcity_Indoor_MushroomShop_MushroomGirl_11
# 16 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_SHROOMISH, Mistcity_Indoor_MushroomShop_MushroomGirl_11
# 16 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_BRELOOM, Mistcity_Indoor_MushroomShop_MushroomGirl_11
# 96 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_set FLAG_MUSHROOM_MISSION_STARTED, Mistcity_Indoor_MushroomShop_MushroomGirl_20
	return

Mistcity_Indoor_MushroomShop_MushroomGirl_7:
# 15 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MUSHROOM_MISSION_COMPLETED, Mistcity_Indoor_MushroomShop_MushroomGirl_6
	return

Mistcity_Indoor_MushroomShop_MushroomGirl_11:
# 17 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
# 18 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_2
# 19 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
# 20 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 21 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	compare VAR_RESULT, SPECIES_PARAS
	goto_if_eq Mistcity_Indoor_MushroomShop_MushroomGirl_24
Mistcity_Indoor_MushroomShop_MushroomGirl_23:
# 26 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	compare VAR_RESULT, SPECIES_PARASECT
	goto_if_eq Mistcity_Indoor_MushroomShop_MushroomGirl_27
Mistcity_Indoor_MushroomShop_MushroomGirl_26:
# 31 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	compare VAR_RESULT, SPECIES_SHROOMISH
	goto_if_eq Mistcity_Indoor_MushroomShop_MushroomGirl_30
Mistcity_Indoor_MushroomShop_MushroomGirl_29:
# 36 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	compare VAR_RESULT, SPECIES_BRELOOM
	goto_if_eq Mistcity_Indoor_MushroomShop_MushroomGirl_33
Mistcity_Indoor_MushroomShop_MushroomGirl_32:
# 41 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_set FLAG_MISTCITY_SHOW_MUSHROOM_PARAS, Mistcity_Indoor_MushroomShop_MushroomGirl_38
Mistcity_Indoor_MushroomShop_MushroomGirl_36:
# 66 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
# 67 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_11
# 68 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
# 69 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_PARAS, Mistcity_Indoor_MushroomShop_MushroomGirl_45
Mistcity_Indoor_MushroomShop_MushroomGirl_44:
# 74 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_PARASECT, Mistcity_Indoor_MushroomShop_MushroomGirl_48
Mistcity_Indoor_MushroomShop_MushroomGirl_47:
# 79 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_SHROOMISH, Mistcity_Indoor_MushroomShop_MushroomGirl_51
Mistcity_Indoor_MushroomShop_MushroomGirl_50:
# 84 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_BRELOOM, Mistcity_Indoor_MushroomShop_MushroomGirl_54
Mistcity_Indoor_MushroomShop_MushroomGirl_53:
# 89 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
# 90 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_16
# 91 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
# 92 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	release
	end

Mistcity_Indoor_MushroomShop_MushroomGirl_19:
# 97 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
# 98 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_17
# 99 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
# 100 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	release
	end

Mistcity_Indoor_MushroomShop_MushroomGirl_20:
# 96 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MUSHROOM_MISSION_COMPLETED, Mistcity_Indoor_MushroomShop_MushroomGirl_19
	return

Mistcity_Indoor_MushroomShop_MushroomGirl_24:
# 22 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setflag FLAG_MISTCITY_SHOW_MUSHROOM_PARAS
# 23 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
# 24 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_3
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_23

Mistcity_Indoor_MushroomShop_MushroomGirl_27:
# 27 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setflag FLAG_MISTCITY_SHOW_MUSHROOM_PARASECT
# 28 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
# 29 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_4
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_26

Mistcity_Indoor_MushroomShop_MushroomGirl_30:
# 32 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setflag FLAG_MISTCITY_SHOW_MUSHROOM_SHROOMISH
# 33 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
# 34 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_5
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_29

Mistcity_Indoor_MushroomShop_MushroomGirl_33:
# 37 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setflag FLAG_MISTCITY_SHOW_MUSHROOM_BRELOOM
# 38 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
# 39 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_6
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_32

Mistcity_Indoor_MushroomShop_MushroomGirl_35:
# 42 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
# 43 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_7
# 44 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
# 45 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setflag FLAG_MUSHROOM_MISSION_COMPLETED
# 46 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 47 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	giveitem ITEM_BALM_MUSHROOM
# 48 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
# 49 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_8
# 50 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
# 51 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 52 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	giveitem ITEM_BIG_MUSHROOM
# 53 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
# 54 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_9
# 55 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
# 56 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 57 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	giveitem ITEM_TINY_MUSHROOM
# 58 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
# 59 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_10
# 60 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
# 61 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	release
	end

Mistcity_Indoor_MushroomShop_MushroomGirl_37:
# 41 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_set FLAG_MISTCITY_SHOW_MUSHROOM_SHROOMISH, Mistcity_Indoor_MushroomShop_MushroomGirl_41
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_36

Mistcity_Indoor_MushroomShop_MushroomGirl_38:
# 41 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_set FLAG_MISTCITY_SHOW_MUSHROOM_PARASECT, Mistcity_Indoor_MushroomShop_MushroomGirl_37
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_36

Mistcity_Indoor_MushroomShop_MushroomGirl_41:
# 41 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_set FLAG_MISTCITY_SHOW_MUSHROOM_BRELOOM, Mistcity_Indoor_MushroomShop_MushroomGirl_35
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_36

Mistcity_Indoor_MushroomShop_MushroomGirl_45:
# 70 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
# 71 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_12
# 72 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_44

Mistcity_Indoor_MushroomShop_MushroomGirl_48:
# 75 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
# 76 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_13
# 77 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_47

Mistcity_Indoor_MushroomShop_MushroomGirl_51:
# 80 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
# 81 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_14
# 82 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_50

Mistcity_Indoor_MushroomShop_MushroomGirl_54:
# 85 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setspeaker Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
# 86 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_15
# 87 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_53


Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0:
# 9 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "Leaf$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_1:
# 10 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
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
# 18 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "Well!!\p"
	.string "Have you found any new mushroom\n"
	.string "Pokemon?$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_3:
# 24 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "Ooh, a Paras with tochukaso spores!\p"
	.string "A classic symbiotic relationship!\n"
	.string "Fascinating!$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_4:
# 29 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "YES! The fungus has taken full control\n"
	.string "of the host!\p"
	.string "Look at those wonderfully vacant eyes!\n"
	.string "This Parasect is perfect!$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_5:
# 34 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "A Shroomish! I love how its spores can\n"
	.string "paralyze a foe! So efficient!\p"
	.string "Have you found any more interesting\n"
	.string "shroom species?$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_6:
# 39 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "Breloom, the apex predator of the\n"
	.string "mushroom world!\p"
	.string "Its toxic spores are a masterpiece of\n"
	.string "natural engineering!$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_7:
# 43 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "YOU DID IT! YOU DID IT!\p"
	.string "My Fungus Index is complete!\p"
	.string "I'm the happiest mycologist in the\n"
	.string "world!\p"
	.string "Here, I grew this for you! It's extra\n"
	.string "potent!$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_8:
# 49 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "Wait! Wait!\p"
	.string "I have more!$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_9:
# 54 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "No.. No! I'm not done!$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_10:
# 59 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "There you go!\p"
	.string "Pssttt....\p"
	.string "If you ever need some shrooms to trip\n"
	.string "out...\p"
	.string "I'm here for ya...$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_11:
# 67 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "For my Fungus Index to be complete I'm\n"
	.string "still missing:$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_12:
# 71 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "A Paras.$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_13:
# 76 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "A Parasect.$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_14:
# 81 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "A Shroomish.$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_15:
# 86 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "A Breloom.$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_16:
# 90 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "Good luck finding those!\p"
	.string "I have a small reward for you if you\n"
	.string "manage to help me complete my Fungus\l"
	.string "Index.$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_17:
# 98 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "Thank you so much for helping me\n"
	.string "complete my Fungus Index!\p"
	.string "Are you enjoying those mushrooms I\n"
	.string "gave you?$"
