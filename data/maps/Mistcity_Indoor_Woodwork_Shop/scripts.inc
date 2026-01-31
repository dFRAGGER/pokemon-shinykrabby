Mistcity_Indoor_Woodwork_Shop_MapScripts::
	.byte 0


Mistcity_Indoor_Woodwork_Shop_Silas::
# 4 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	lock
# 5 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	faceplayer
# 6 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	goto_if_unset FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Woodwork_Shop_Silas_2
# 13 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Woodwork_Shop_Silas_6
Mistcity_Indoor_Woodwork_Shop_Silas_4:
# 33 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Woodwork_Shop_Silas_11
Mistcity_Indoor_Woodwork_Shop_Silas_9:
# 40 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Woodwork_Shop_Silas_20
Mistcity_Indoor_Woodwork_Shop_Silas_17:
# 53 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Woodwork_Shop_Silas_28
	return

Mistcity_Indoor_Woodwork_Shop_Silas_2:
# 7 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	setspeaker Mistcity_Indoor_Woodwork_Shop_Silas_Text_0
# 8 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	msgbox Mistcity_Indoor_Woodwork_Shop_Silas_Text_1
# 9 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	waitmessage
# 10 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	release
	end

Mistcity_Indoor_Woodwork_Shop_Silas_5:
# 14 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	setspeaker Mistcity_Indoor_Woodwork_Shop_Silas_Text_0
# 15 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	msgbox Mistcity_Indoor_Woodwork_Shop_Silas_Text_2, MSGBOX_YESNO
# 16 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	waitmessage
# 17 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Mistcity_Indoor_Woodwork_Shop_Silas_14
# 26 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	setspeaker Mistcity_Indoor_Woodwork_Shop_Silas_Text_0
# 27 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	msgbox Mistcity_Indoor_Woodwork_Shop_Silas_Text_4
# 28 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	waitmessage
# 29 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	release
	end

Mistcity_Indoor_Woodwork_Shop_Silas_6:
# 13 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	goto_if_unset FLAG_MOSSWOOD_MISSION_STARTED, Mistcity_Indoor_Woodwork_Shop_Silas_5
	goto Mistcity_Indoor_Woodwork_Shop_Silas_4

Mistcity_Indoor_Woodwork_Shop_Silas_10:
# 34 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	setspeaker Mistcity_Indoor_Woodwork_Shop_Silas_Text_0
# 35 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	msgbox Mistcity_Indoor_Woodwork_Shop_Silas_Text_5
# 36 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	waitmessage
# 37 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	release
	end

Mistcity_Indoor_Woodwork_Shop_Silas_11:
# 33 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	goto_if_set FLAG_MOSSWOOD_MISSION_STARTED, Mistcity_Indoor_Woodwork_Shop_Silas_10
	goto Mistcity_Indoor_Woodwork_Shop_Silas_9

Mistcity_Indoor_Woodwork_Shop_Silas_14:
# 18 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	setflag FLAG_MOSSWOOD_MISSION_STARTED
# 19 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	setspeaker Mistcity_Indoor_Woodwork_Shop_Silas_Text_0
# 20 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	msgbox Mistcity_Indoor_Woodwork_Shop_Silas_Text_3
# 21 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	waitmessage
# 22 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	release
	end

Mistcity_Indoor_Woodwork_Shop_Silas_18:
# 41 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	setspeaker Mistcity_Indoor_Woodwork_Shop_Silas_Text_0
# 42 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	msgbox Mistcity_Indoor_Woodwork_Shop_Silas_Text_6
# 43 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	waitmessage
# 44 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 45 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
# 46 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	setflag FLAG_ITEM_ROOT_FOSSIL
# 47 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	setspeaker Mistcity_Indoor_Woodwork_Shop_Silas_Text_0
# 48 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	msgbox Mistcity_Indoor_Woodwork_Shop_Silas_Text_7
# 49 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	waitmessage
# 50 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	release
	end

Mistcity_Indoor_Woodwork_Shop_Silas_19:
# 40 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	goto_if_set FLAG_MOSSWOOD_MISSION_COMPLETED, Mistcity_Indoor_Woodwork_Shop_Silas_23
	goto Mistcity_Indoor_Woodwork_Shop_Silas_17

Mistcity_Indoor_Woodwork_Shop_Silas_20:
# 40 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	goto_if_set FLAG_MOSSWOOD_MISSION_STARTED, Mistcity_Indoor_Woodwork_Shop_Silas_19
	goto Mistcity_Indoor_Woodwork_Shop_Silas_17

Mistcity_Indoor_Woodwork_Shop_Silas_23:
# 40 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	goto_if_unset FLAG_ITEM_ROOT_FOSSIL, Mistcity_Indoor_Woodwork_Shop_Silas_18
	goto Mistcity_Indoor_Woodwork_Shop_Silas_17

Mistcity_Indoor_Woodwork_Shop_Silas_26:
# 54 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	setspeaker Mistcity_Indoor_Woodwork_Shop_Silas_Text_0
# 55 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	msgbox Mistcity_Indoor_Woodwork_Shop_Silas_Text_8
# 56 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	waitmessage
# 57 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	release
	end

Mistcity_Indoor_Woodwork_Shop_Silas_27:
# 53 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	goto_if_set FLAG_MOSSWOOD_MISSION_COMPLETED, Mistcity_Indoor_Woodwork_Shop_Silas_31
	return

Mistcity_Indoor_Woodwork_Shop_Silas_28:
# 53 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	goto_if_set FLAG_MOSSWOOD_MISSION_STARTED, Mistcity_Indoor_Woodwork_Shop_Silas_27
	return

Mistcity_Indoor_Woodwork_Shop_Silas_31:
# 53 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	goto_if_set FLAG_ITEM_ROOT_FOSSIL, Mistcity_Indoor_Woodwork_Shop_Silas_26
	return


Mistcity_Indoor_Woodwork_Shop_daughter::
# 64 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	lock
# 65 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	faceplayer
# 66 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	goto_if_unset FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Woodwork_Shop_daughter_2
# 70 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	msgbox Mistcity_Indoor_Woodwork_Shop_daughter_Text_1
Mistcity_Indoor_Woodwork_Shop_daughter_1:
# 72 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	waitmessage
# 73 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	release
	end

Mistcity_Indoor_Woodwork_Shop_daughter_2:
# 67 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	msgbox Mistcity_Indoor_Woodwork_Shop_daughter_Text_0
	goto Mistcity_Indoor_Woodwork_Shop_daughter_1


Mistcity_Indoor_Woodwork_Shop_Silas_Text_0:
# 7 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	.string "Silas$"

Mistcity_Indoor_Woodwork_Shop_Silas_Text_1:
# 8 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	.string "Hello there.\p"
	.string "Welcome to my workshop.\p"
	.string "Or what's left of it.\p"
	.string "I'm {COLOR GREEN}Silas{COLOR DARK_GRAY}.\p"
	.string "I make my living carving figures from\n"
	.string "the fallen branches in the Whisperwood\l"
	.string "Grove.\p"
	.string "But...\p"
	.string "The Faculty has blocked the path.\p"
	.string "They call the ancient trees 'safety\n"
	.string "hazards.'\p"
	.string "Now, I can't get the materials I need.\p"
	.string "I don't know what I'm going to do...$"

Mistcity_Indoor_Woodwork_Shop_Silas_Text_2:
# 15 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	.string "Wait, it's you!\p"
	.string "I heard what you did!\p"
	.string "You stood up to them!\p"
	.string "The path to the grove... is it really\n"
	.string "open again?\p"
	.string "Oh, thank you! Thank you!\p"
	.string "You're strong... and kind.\p"
	.string "I don't suppose you could help me with\n"
	.string "one more thing?\p"
	.string "I need a special material for a very\n"
	.string "important commission.\p"
	.string "It's a type of wood called 'Mosswood,'\n"
	.string "and it only grows on the oldest trees in\l"
	.string "the deepest part of the grove.\p"
	.string "Could you find a piece for me?$"

Mistcity_Indoor_Woodwork_Shop_Silas_Text_3:
# 20 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	.string "You are even kinder than I thought!\p"
	.string "Please be carefull in the forest, you\n"
	.string "never know what you might encounter.$"

Mistcity_Indoor_Woodwork_Shop_Silas_Text_4:
# 27 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	.string "I get it, you are a busy young man.\p"
	.string "Let me know if you ever change your\n"
	.string "mind!$"

Mistcity_Indoor_Woodwork_Shop_Silas_Text_5:
# 35 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	.string "The grove is beautiful, isn't it? Please\n"
	.string "be careful looking for that Mosswood.\l"
	.string "The oldest trees are sacred.$"

Mistcity_Indoor_Woodwork_Shop_Silas_Text_6:
# 42 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	.string "You found it!\p"
	.string "This is incredible! The grain, the\n"
	.string "colour... it's perfect!\p"
	.string "I can finally complete my work. I am\n"
	.string "forever in your debt.\p"
	.string "Please, take this.$"

Mistcity_Indoor_Woodwork_Shop_Silas_Text_7:
# 48 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	.string "I found them embedded in a large root\n"
	.string "system years ago.\p"
	.string "A true carver wastes nothing of the\n"
	.string "forest's gifts!$"

Mistcity_Indoor_Woodwork_Shop_Silas_Text_8:
# 55 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	.string "Thank you so much for everything you\n"
	.string "did for me, my shop is thriving again!$"

Mistcity_Indoor_Woodwork_Shop_daughter_Text_0:
# 67 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	.string "Grandpa can't make the little wooden\n"
	.string "Teddiursas anymore... It makes me sad.$"

Mistcity_Indoor_Woodwork_Shop_daughter_Text_1:
# 70 "data/maps/Mistcity_Indoor_Woodwork_Shop/scripts.pory"
	.string "Grandpa is happily carving wood again!$"
