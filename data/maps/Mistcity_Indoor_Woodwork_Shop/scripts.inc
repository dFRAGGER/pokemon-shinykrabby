Mistcity_Indoor_Woodwork_Shop_MapScripts::
	.byte 0


Mistcity_Indoor_Woodwork_Shop_Silas::
	lock
	faceplayer
	goto_if_unset FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Woodwork_Shop_Silas_2
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Woodwork_Shop_Silas_6
Mistcity_Indoor_Woodwork_Shop_Silas_4:
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Woodwork_Shop_Silas_11
Mistcity_Indoor_Woodwork_Shop_Silas_9:
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Woodwork_Shop_Silas_20
Mistcity_Indoor_Woodwork_Shop_Silas_17:
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Woodwork_Shop_Silas_28
	return

Mistcity_Indoor_Woodwork_Shop_Silas_2:
	setspeaker Mistcity_Indoor_Woodwork_Shop_Silas_Text_0
	msgbox Mistcity_Indoor_Woodwork_Shop_Silas_Text_1
	waitmessage
	release
	end

Mistcity_Indoor_Woodwork_Shop_Silas_5:
	setspeaker Mistcity_Indoor_Woodwork_Shop_Silas_Text_0
	msgbox Mistcity_Indoor_Woodwork_Shop_Silas_Text_2, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, YES
	goto_if_eq Mistcity_Indoor_Woodwork_Shop_Silas_14
	setspeaker Mistcity_Indoor_Woodwork_Shop_Silas_Text_0
	msgbox Mistcity_Indoor_Woodwork_Shop_Silas_Text_4
	waitmessage
	release
	end

Mistcity_Indoor_Woodwork_Shop_Silas_6:
	goto_if_unset FLAG_MOSSWOOD_MISSION_STARTED, Mistcity_Indoor_Woodwork_Shop_Silas_5
	goto Mistcity_Indoor_Woodwork_Shop_Silas_4

Mistcity_Indoor_Woodwork_Shop_Silas_10:
	setspeaker Mistcity_Indoor_Woodwork_Shop_Silas_Text_0
	msgbox Mistcity_Indoor_Woodwork_Shop_Silas_Text_5
	waitmessage
	release
	end

Mistcity_Indoor_Woodwork_Shop_Silas_11:
	goto_if_set FLAG_MOSSWOOD_MISSION_STARTED, Mistcity_Indoor_Woodwork_Shop_Silas_10
	goto Mistcity_Indoor_Woodwork_Shop_Silas_9

Mistcity_Indoor_Woodwork_Shop_Silas_14:
	setflag FLAG_MOSSWOOD_MISSION_STARTED
	setspeaker Mistcity_Indoor_Woodwork_Shop_Silas_Text_0
	msgbox Mistcity_Indoor_Woodwork_Shop_Silas_Text_3
	waitmessage
	release
	end

Mistcity_Indoor_Woodwork_Shop_Silas_18:
	setspeaker Mistcity_Indoor_Woodwork_Shop_Silas_Text_0
	msgbox Mistcity_Indoor_Woodwork_Shop_Silas_Text_6
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_ROOT_FOSSIL
	setflag FLAG_ITEM_ROOT_FOSSIL
	setspeaker Mistcity_Indoor_Woodwork_Shop_Silas_Text_0
	msgbox Mistcity_Indoor_Woodwork_Shop_Silas_Text_7
	waitmessage
	release
	end

Mistcity_Indoor_Woodwork_Shop_Silas_19:
	goto_if_set FLAG_MOSSWOOD_MISSION_COMPLETED, Mistcity_Indoor_Woodwork_Shop_Silas_23
	goto Mistcity_Indoor_Woodwork_Shop_Silas_17

Mistcity_Indoor_Woodwork_Shop_Silas_20:
	goto_if_set FLAG_MOSSWOOD_MISSION_STARTED, Mistcity_Indoor_Woodwork_Shop_Silas_19
	goto Mistcity_Indoor_Woodwork_Shop_Silas_17

Mistcity_Indoor_Woodwork_Shop_Silas_23:
	goto_if_unset FLAG_ITEM_ROOT_FOSSIL, Mistcity_Indoor_Woodwork_Shop_Silas_18
	goto Mistcity_Indoor_Woodwork_Shop_Silas_17

Mistcity_Indoor_Woodwork_Shop_Silas_26:
	setspeaker Mistcity_Indoor_Woodwork_Shop_Silas_Text_0
	msgbox Mistcity_Indoor_Woodwork_Shop_Silas_Text_8
	waitmessage
	release
	end

Mistcity_Indoor_Woodwork_Shop_Silas_27:
	goto_if_set FLAG_MOSSWOOD_MISSION_COMPLETED, Mistcity_Indoor_Woodwork_Shop_Silas_31
	return

Mistcity_Indoor_Woodwork_Shop_Silas_28:
	goto_if_set FLAG_MOSSWOOD_MISSION_STARTED, Mistcity_Indoor_Woodwork_Shop_Silas_27
	return

Mistcity_Indoor_Woodwork_Shop_Silas_31:
	goto_if_set FLAG_ITEM_ROOT_FOSSIL, Mistcity_Indoor_Woodwork_Shop_Silas_26
	return


Mistcity_Indoor_Woodwork_Shop_daughter::
	lock
	faceplayer
	goto_if_unset FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Woodwork_Shop_daughter_2
	msgbox Mistcity_Indoor_Woodwork_Shop_daughter_Text_1
Mistcity_Indoor_Woodwork_Shop_daughter_1:
	waitmessage
	release
	end

Mistcity_Indoor_Woodwork_Shop_daughter_2:
	msgbox Mistcity_Indoor_Woodwork_Shop_daughter_Text_0
	goto Mistcity_Indoor_Woodwork_Shop_daughter_1


Mistycity_WoodShop_StatueTeddiursa::
	lock
	msgbox Mistycity_WoodShop_StatueTeddiursa_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


Mistcity_WoodShop_StatueTwo::
	lock
	msgbox Mistcity_WoodShop_StatueTwo_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


Mistcity_WoodShop_StatueThree::
	lock
	msgbox Mistcity_WoodShop_StatueThree_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


Mistcity_WoodShop_StatueFour::
	lock
	msgbox Mistcity_WoodShop_StatueFour_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


Mistcity_Indoor_Woodwork_Shop_Silas_Text_0:
	.string "SILAS$"

Mistcity_Indoor_Woodwork_Shop_Silas_Text_1:
	.string "Hello there.\p"
	.string "Welcome to my workshop.\p"
	.string "Or what's left of it.\p"
	.string "I'm {COLOR GREEN}Silas{COLOR DARK_GRAY}.\p"
	.string "I make my living carving figures from\n"
	.string "the fallen branches in the deepest part\l"
	.string "of the forest.\p"
	.string "But...\p"
	.string "The Faculty has blocked all paths.\p"
	.string "They call the ancient trees 'safety\n"
	.string "hazards.'\p"
	.string "Now, I can't get the materials I need.\p"
	.string "I don't know what I'm going to do...$"

Mistcity_Indoor_Woodwork_Shop_Silas_Text_2:
	.string "Wait, it's you!\p"
	.string "I heard what you did!\p"
	.string "You stood up to them!\p"
	.string "The path to the deepest parts of the\n"
	.string "forest... is it really open again?\p"
	.string "Oh, thank you! Thank you!\p"
	.string "You're strong... and kind.\p"
	.string "I don't suppose you could help me with\n"
	.string "one more thing?\p"
	.string "I need a special material for a very\n"
	.string "important commission.\p"
	.string "It's a type of wood called 'Mosswood,'\n"
	.string "and it only grows on the oldest trees in\l"
	.string "the deepest part of the forest.\p"
	.string "Could you find a piece for me?$"

Mistcity_Indoor_Woodwork_Shop_Silas_Text_3:
	.string "You are even kinder than I thought!\p"
	.string "Please be carefull in the forest, you\n"
	.string "never know what you might encounter.$"

Mistcity_Indoor_Woodwork_Shop_Silas_Text_4:
	.string "I get it, you are a busy young man.\p"
	.string "Let me know if you ever change your\n"
	.string "mind!$"

Mistcity_Indoor_Woodwork_Shop_Silas_Text_5:
	.string "The Cloud Forest is beautiful, isn't it?\n"
	.string "Please be careful looking for that\l"
	.string "Mosswood. The oldest trees are sacred.$"

Mistcity_Indoor_Woodwork_Shop_Silas_Text_6:
	.string "You found it!\p"
	.string "This is incredible! The grain, the\n"
	.string "colour... it's perfect!\p"
	.string "I can finally complete my work. I am\n"
	.string "forever in your debt.\p"
	.string "Please, take this.$"

Mistcity_Indoor_Woodwork_Shop_Silas_Text_7:
	.string "I found them embedded in a large root\n"
	.string "system years ago.\p"
	.string "A true carver wastes nothing of the\n"
	.string "forest's gifts!$"

Mistcity_Indoor_Woodwork_Shop_Silas_Text_8:
	.string "Thank you so much for everything you\n"
	.string "did for me, my shop is thriving again!$"

Mistcity_Indoor_Woodwork_Shop_daughter_Text_0:
	.string "Grandpa can't make more of the little\n"
	.string "wooden Teddiursas anymore... It makes\l"
	.string "me sad.$"

Mistcity_Indoor_Woodwork_Shop_daughter_Text_1:
	.string "Grandpa is happily carving wood again!$"

Mistycity_WoodShop_StatueTeddiursa_Text_0:
	.string "A carving of TEDDIURSA, small enough to\n"
	.string "hold in one hand.\p"
	.string "The grain of the wood follows the curve\n"
	.string "of its belly perfectly.\p"
	.string "The craftsman knew this one well.$"

Mistcity_WoodShop_StatueTwo_Text_0:
	.string "A carving of SUDOWOODO, arms\n"
	.string "outstretched.\p"
	.string "There is something quietly funny about\n"
	.string "carving a POKéMON that pretends to be\l"
	.string "a tree out of an actual tree.$"

Mistcity_WoodShop_StatueThree_Text_0:
	.string "A carving of CELEBI, wings half-open.\p"
	.string "The wood is older than the others.\p"
	.string "Whoever made this one took their time.$"

Mistcity_WoodShop_StatueFour_Text_0:
	.string "A carving of something small, rounded,\n"
	.string "with a long tail.\p"
	.string "There is no label.\p"
	.string "It doesn't quite look like any POKéMON\n"
	.string "you recognise.\p"
	.string "And yet it feels familiar.$"
