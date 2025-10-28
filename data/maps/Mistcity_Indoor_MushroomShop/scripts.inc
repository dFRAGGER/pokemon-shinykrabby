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
# 13 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_set FLAG_MUSHROOM_MISSION_STARTED, Mistcity_Indoor_MushroomShop_MushroomGirl_7
	return

Mistcity_Indoor_MushroomShop_MushroomGirl_2:
# 8 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setflag FLAG_MUSHROOM_MISSION_STARTED
# 9 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0
# 10 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
	end

Mistcity_Indoor_MushroomShop_MushroomGirl_3:
# 7 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MUSHROOM_MISSION_COMPLETED, Mistcity_Indoor_MushroomShop_MushroomGirl_2
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_1

Mistcity_Indoor_MushroomShop_MushroomGirl_6:
# 14 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_PARAS, Mistcity_Indoor_MushroomShop_MushroomGirl_11
# 14 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_PARASECT, Mistcity_Indoor_MushroomShop_MushroomGirl_11
# 14 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_SHROOMISH, Mistcity_Indoor_MushroomShop_MushroomGirl_11
# 14 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_BRELOOM, Mistcity_Indoor_MushroomShop_MushroomGirl_11
# 79 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_set FLAG_MUSHROOM_MISSION_STARTED, Mistcity_Indoor_MushroomShop_MushroomGirl_20
	return

Mistcity_Indoor_MushroomShop_MushroomGirl_7:
# 13 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MUSHROOM_MISSION_COMPLETED, Mistcity_Indoor_MushroomShop_MushroomGirl_6
	return

Mistcity_Indoor_MushroomShop_MushroomGirl_11:
# 15 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_1
# 16 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
# 17 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 18 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	compare VAR_RESULT, SPECIES_PARAS
	goto_if_eq Mistcity_Indoor_MushroomShop_MushroomGirl_24
Mistcity_Indoor_MushroomShop_MushroomGirl_23:
# 22 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	compare VAR_RESULT, SPECIES_PARASECT
	goto_if_eq Mistcity_Indoor_MushroomShop_MushroomGirl_27
Mistcity_Indoor_MushroomShop_MushroomGirl_26:
# 26 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	compare VAR_RESULT, SPECIES_SHROOMISH
	goto_if_eq Mistcity_Indoor_MushroomShop_MushroomGirl_30
Mistcity_Indoor_MushroomShop_MushroomGirl_29:
# 30 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	compare VAR_RESULT, SPECIES_BRELOOM
	goto_if_eq Mistcity_Indoor_MushroomShop_MushroomGirl_33
Mistcity_Indoor_MushroomShop_MushroomGirl_32:
# 34 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_set FLAG_MISTCITY_SHOW_MUSHROOM_PARAS, Mistcity_Indoor_MushroomShop_MushroomGirl_38
Mistcity_Indoor_MushroomShop_MushroomGirl_36:
# 55 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_10
# 56 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
# 57 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_PARAS, Mistcity_Indoor_MushroomShop_MushroomGirl_45
Mistcity_Indoor_MushroomShop_MushroomGirl_44:
# 61 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_PARASECT, Mistcity_Indoor_MushroomShop_MushroomGirl_48
Mistcity_Indoor_MushroomShop_MushroomGirl_47:
# 65 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_SHROOMISH, Mistcity_Indoor_MushroomShop_MushroomGirl_51
Mistcity_Indoor_MushroomShop_MushroomGirl_50:
# 69 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MISTCITY_SHOW_MUSHROOM_BRELOOM, Mistcity_Indoor_MushroomShop_MushroomGirl_54
Mistcity_Indoor_MushroomShop_MushroomGirl_53:
# 73 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_15
# 74 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
# 75 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	release
	end

Mistcity_Indoor_MushroomShop_MushroomGirl_19:
# 80 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_16
# 81 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
# 82 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	release
	end

Mistcity_Indoor_MushroomShop_MushroomGirl_20:
# 79 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_unset FLAG_MUSHROOM_MISSION_COMPLETED, Mistcity_Indoor_MushroomShop_MushroomGirl_19
	return

Mistcity_Indoor_MushroomShop_MushroomGirl_24:
# 19 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setflag FLAG_MISTCITY_SHOW_MUSHROOM_PARAS
# 20 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_2
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_23

Mistcity_Indoor_MushroomShop_MushroomGirl_27:
# 23 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setflag FLAG_MISTCITY_SHOW_MUSHROOM_PARASECT
# 24 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_3
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_26

Mistcity_Indoor_MushroomShop_MushroomGirl_30:
# 27 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setflag FLAG_MISTCITY_SHOW_MUSHROOM_SHROOMISH
# 28 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_4
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_29

Mistcity_Indoor_MushroomShop_MushroomGirl_33:
# 31 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setflag FLAG_MISTCITY_SHOW_MUSHROOM_BRELOOM
# 32 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_5
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_32

Mistcity_Indoor_MushroomShop_MushroomGirl_35:
# 35 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_6
# 36 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
# 37 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	setflag FLAG_MUSHROOM_MISSION_COMPLETED
# 38 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 39 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	giveitem ITEM_BALM_MUSHROOM
# 40 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_7
# 41 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
# 42 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 43 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	giveitem ITEM_BIG_MUSHROOM
# 44 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_8
# 45 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
# 46 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 47 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	giveitem ITEM_TINY_MUSHROOM
# 48 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_9
# 49 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
# 50 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	release
	end

Mistcity_Indoor_MushroomShop_MushroomGirl_37:
# 34 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_set FLAG_MISTCITY_SHOW_MUSHROOM_SHROOMISH, Mistcity_Indoor_MushroomShop_MushroomGirl_41
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_36

Mistcity_Indoor_MushroomShop_MushroomGirl_38:
# 34 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_set FLAG_MISTCITY_SHOW_MUSHROOM_PARASECT, Mistcity_Indoor_MushroomShop_MushroomGirl_37
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_36

Mistcity_Indoor_MushroomShop_MushroomGirl_41:
# 34 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	goto_if_set FLAG_MISTCITY_SHOW_MUSHROOM_BRELOOM, Mistcity_Indoor_MushroomShop_MushroomGirl_35
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_36

Mistcity_Indoor_MushroomShop_MushroomGirl_45:
# 58 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_11
# 59 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_44

Mistcity_Indoor_MushroomShop_MushroomGirl_48:
# 62 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_12
# 63 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_47

Mistcity_Indoor_MushroomShop_MushroomGirl_51:
# 66 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_13
# 67 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_50

Mistcity_Indoor_MushroomShop_MushroomGirl_54:
# 70 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	msgbox Mistcity_Indoor_MushroomShop_MushroomGirl_Text_14
# 71 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	waitmessage
	goto Mistcity_Indoor_MushroomShop_MushroomGirl_53


Mistcity_Indoor_MushroomShop_MushroomGirl_Text_0:
# 9 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
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

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_1:
# 15 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "{COLOR GREEN}Leaf{COLOR DARK_GRAY}: Well!!\p"
	.string "Have you found any new mushroom\n"
	.string "Pokemon?$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_2:
# 20 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "Ooh, a Paras with tochukaso spores!\p"
	.string "A classic symbiotic relationship!\n"
	.string "Fascinating!$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_3:
# 24 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "YES! The fungus has taken full control\n"
	.string "of the host!\p"
	.string "Look at those wonderfully vacant eyes!\n"
	.string "This Parasect is perfect!$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_4:
# 28 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "A Shroomish! I love how its spores can\n"
	.string "paralyze a foe! So efficient!\p"
	.string "Have you found any more interesting\n"
	.string "shroom species?$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_5:
# 32 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "Breloom, the apex predator of the\n"
	.string "mushroom world!\p"
	.string "Its toxic spores are a masterpiece of\n"
	.string "natural engineering!$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_6:
# 35 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "YOU DID IT! YOU DID IT!\p"
	.string "My Fungus Index is complete!\p"
	.string "I'm the happiest mycologist in the\n"
	.string "world!\p"
	.string "Here, I grew this for you! It's extra\n"
	.string "potent!$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_7:
# 40 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "Wait! Wait!\p"
	.string "I have more!$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_8:
# 44 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "No.. No! I'm not done!$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_9:
# 48 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "There you go!\p"
	.string "Pssttt....\p"
	.string "If you ever need some shrooms to trip\n"
	.string "out...\p"
	.string "I'm here for ya...$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_10:
# 55 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "For my Fungus Index to be complete I'm\n"
	.string "still missing:$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_11:
# 58 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "A Paras. Which burrows to suck tree\n"
	.string "roots and who's mushrooms on its back\l"
	.string "grow by drawing nutrients from the bug\l"
	.string "host.$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_12:
# 62 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "A Parasect. A host-parasite pair in\n"
	.string "which the parasite mushroom has taken\l"
	.string "over the host bug.$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_13:
# 66 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "A Shroomish. By day a Shroomish remains\n"
	.string "still in the forest shade. It releases\l"
	.string "toxic powder from its head.$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_14:
# 70 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "A Breloom. It loves warm and humid\n"
	.string "climates and scatters spores from\l"
	.string "holes in the cap on its head.$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_15:
# 73 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "Good luck finding those!\p"
	.string "I have a small reward for you if you\n"
	.string "manage to help me complete my Fungus\l"
	.string "Index.$"

Mistcity_Indoor_MushroomShop_MushroomGirl_Text_16:
# 80 "data/maps/Mistcity_Indoor_MushroomShop/scripts.pory"
	.string "{COLOR GREEN}Leaf{COLOR DARK_GRAY}: Thank you so much for helping me\n"
	.string "complete my Fungus Index!\p"
	.string "Are you enjoying those mushrooms I\n"
	.string "gave you?$"
