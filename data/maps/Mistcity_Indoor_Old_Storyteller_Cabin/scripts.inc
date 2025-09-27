Mistcity_Indoor_Old_Storyteller_Cabin_MapScripts::
	.byte 0


Mistcity_Indoor_Old_Storyteller_Elara::
# 4 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	lock
# 5 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	faceplayer
# 6 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	goto_if_unset FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Old_Storyteller_Elara_2
# 12 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Old_Storyteller_Elara_6
Mistcity_Indoor_Old_Storyteller_Elara_4:
# 24 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Old_Storyteller_Elara_10
	return

Mistcity_Indoor_Old_Storyteller_Elara_2:
# 7 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	msgbox Mistcity_Indoor_Old_Storyteller_Elara_Text_0
# 8 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	waitmessage
# 9 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	release
	end

Mistcity_Indoor_Old_Storyteller_Elara_5:
# 13 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	msgbox Mistcity_Indoor_Old_Storyteller_Elara_Text_1
# 14 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	waitmessage
# 15 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 16 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	giveitem ITEM_TM23
# 17 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	msgbox Mistcity_Indoor_Old_Storyteller_Elara_Text_2
# 18 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	waitmessage
# 19 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	setflag FLAG_ITEM_TM23_IRON_TAIL
# 20 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	release
	end

Mistcity_Indoor_Old_Storyteller_Elara_6:
# 12 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	goto_if_unset FLAG_ITEM_TM23_IRON_TAIL, Mistcity_Indoor_Old_Storyteller_Elara_5
	goto Mistcity_Indoor_Old_Storyteller_Elara_4

Mistcity_Indoor_Old_Storyteller_Elara_9:
# 25 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	msgbox Mistcity_Indoor_Old_Storyteller_Elara_Text_3
# 26 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	waitmessage
# 27 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	release
	end

Mistcity_Indoor_Old_Storyteller_Elara_10:
# 24 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	goto_if_set FLAG_ITEM_TM23_IRON_TAIL, Mistcity_Indoor_Old_Storyteller_Elara_9
	return


Mistcity_Indoor_Old_Storyteller_Elara_Text_0:
# 7 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	.string "Come in, come in, child. Don't mind the\n"
	.string "old books.\p"
	.string "My name is {COLOR GREEN}Elara{COLOR DARK_GRAY}.\p"
	.string "My family has watched over this forest\n"
	.string "for more generations than I can count.\p"
	.string "Lately, something is wrong, I can feel it\n"
	.string "in my old bones.\p"
	.string "These new people, The Faculty... they\n"
	.string "move without respect.\p"
	.string "They see the trees, but they do not see\n"
	.string "the forest.\p"
	.string "They do not know the legends.\p"
	.string "They do not know of the Silent Guardian\n"
	.string "that sleeps beneath our feet.\p"
	.string "An ancient being of steel, said to\n"
	.string "awaken only when the forest's chaotic\l"
	.string "harmony is threatened...\p"
	.string "That brave young man, Dan, he\n"
	.string "understands.\p"
	.string "He feels the forest's heartbeat. I pray\n"
	.string "you have a similar spirit.$"

Mistcity_Indoor_Old_Storyteller_Elara_Text_1:
# 13 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	.string "{COLOR GREEN}Elara{COLOR DARK_GRAY}: You! You are the one who stood\n"
	.string "with Daan!\p"
	.string "I knew there was a kind heart in you.\p"
	.string "The forest breathes a sigh of relief,\n"
	.string "and so do I.\p"
	.string "Thank you.\p"
	.string "You have proven yourself a true friend\n"
	.string "of the forest.\p"
	.string "The legend of the Silent Guardian is not\n"
	.string "just a story, you see.\p"
	.string "Here, have this:$"

Mistcity_Indoor_Old_Storyteller_Elara_Text_2:
# 17 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	.string "My ancestors found this long ago, deep\n"
	.string "within a grove.\p"
	.string "They said it hummed with the Guardian's\n"
	.string "energy.\p"
	.string "I want you to have it.\p"
	.string "May it protect you as you have\n"
	.string "protected us.$"

Mistcity_Indoor_Old_Storyteller_Elara_Text_3:
# 25 "data/maps/Mistcity_Indoor_Old_Storyteller_Cabin/scripts.pory"
	.string "{COLOR GREEN}Elara{COLOR DARK_GRAY}: Thanks for restoring the balance\n"
	.string "of the forest.\p"
	.string "Remember...\p"
	.string "Legends are not always just stories.$"
