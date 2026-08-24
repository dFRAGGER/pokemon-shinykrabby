Mistcity_Indoor_Old_Storyteller_Cabin_MapScripts::
	.byte 0


Mistcity_Indoor_Old_Storyteller_Elara::
	lock
	faceplayer
	goto_if_unset FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Old_Storyteller_Elara_2
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Old_Storyteller_Elara_6
Mistcity_Indoor_Old_Storyteller_Elara_4:
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Old_Storyteller_Elara_10
	return

Mistcity_Indoor_Old_Storyteller_Elara_2:
	setspeaker Mistcity_Indoor_Old_Storyteller_Elara_Text_0
	msgbox Mistcity_Indoor_Old_Storyteller_Elara_Text_1
	waitmessage
	release
	end

Mistcity_Indoor_Old_Storyteller_Elara_5:
	setspeaker Mistcity_Indoor_Old_Storyteller_Elara_Text_0
	msgbox Mistcity_Indoor_Old_Storyteller_Elara_Text_2
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_TM23
	setspeaker Mistcity_Indoor_Old_Storyteller_Elara_Text_0
	msgbox Mistcity_Indoor_Old_Storyteller_Elara_Text_3
	waitmessage
	setflag FLAG_ITEM_TM23_IRON_TAIL
	release
	end

Mistcity_Indoor_Old_Storyteller_Elara_6:
	goto_if_unset FLAG_ITEM_TM23_IRON_TAIL, Mistcity_Indoor_Old_Storyteller_Elara_5
	goto Mistcity_Indoor_Old_Storyteller_Elara_4

Mistcity_Indoor_Old_Storyteller_Elara_9:
	setspeaker Mistcity_Indoor_Old_Storyteller_Elara_Text_0
	msgbox Mistcity_Indoor_Old_Storyteller_Elara_Text_4
	waitmessage
	release
	end

Mistcity_Indoor_Old_Storyteller_Elara_10:
	goto_if_set FLAG_ITEM_TM23_IRON_TAIL, Mistcity_Indoor_Old_Storyteller_Elara_9
	return


Mistcity_Indoor_Old_Storyteller_Elara_Text_0:
	.string "ELARA$"

Mistcity_Indoor_Old_Storyteller_Elara_Text_1:
	.string "Come in, come in, child. Don't mind the\n"
	.string "old books.\p"
	.string "My name is {COLOR GREEN}ELARA{COLOR DARK_GRAY}.\p"
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
	.string "That brave young man, DAAN, he\n"
	.string "understands.\p"
	.string "He feels the forest's heartbeat. I pray\n"
	.string "you have a similar spirit.$"

Mistcity_Indoor_Old_Storyteller_Elara_Text_2:
	.string "You! You are the one who stood with\n"
	.string "DAAN!\p"
	.string "I knew there was a kind heart in you.\p"
	.string "The forest breathes a sigh of relief,\n"
	.string "and so do I.\p"
	.string "Thank you.\p"
	.string "You have proven yourself a true friend\n"
	.string "of the forest.\p"
	.string "The legend of the Silent Guardian is not\n"
	.string "just a story, you see.\p"
	.string "Here, have this:$"

Mistcity_Indoor_Old_Storyteller_Elara_Text_3:
	.string "My ancestors found this long ago, deep\n"
	.string "within a grove.\p"
	.string "They said it hummed with the Guardian's\n"
	.string "energy.\p"
	.string "I want you to have it.\p"
	.string "May it protect you as you have\n"
	.string "protected us.$"

Mistcity_Indoor_Old_Storyteller_Elara_Text_4:
	.string "Thanks for restoring the balance of\n"
	.string "the forest.\p"
	.string "Remember...\p"
	.string "Legends are not always just stories.$"
