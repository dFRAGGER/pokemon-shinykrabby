Marshduke_Indoor_ResearchCenter_2F_MapScripts::
	.byte 0


Marshduke_Indoor_ResearchCenter_2F_NPC_DividedResearcher::
	lock
	faceplayer
	msgbox Marshduke_Indoor_ResearchCenter_2F_NPC_DividedResearcher_Text_0
	release
	end


Marshduke_Indoor_ResearchCenter_2F_NPC_DividedMonk::
	lock
	faceplayer
	msgbox Marshduke_Indoor_ResearchCenter_2F_NPC_DividedMonk_Text_0
	release
	end


Marshduke_Indoor_ResearchCenter_2F_NPC_TwoHeartsResearcher::
	lock
	faceplayer
	msgbox Marshduke_Indoor_ResearchCenter_2F_NPC_TwoHeartsResearcher_Text_0
	release
	end


Marshduke_Indoor_ResearchCenter_2F_NPC_TwoHeartsMonk::
	lock
	faceplayer
	msgbox Marshduke_Indoor_ResearchCenter_2F_NPC_TwoHeartsMonk_Text_0
	release
	end


Marshduke_Indoor_ResearchCenter_2F_NPC_SixthResearcher::
	lock
	faceplayer
	msgbox Marshduke_Indoor_ResearchCenter_2F_NPC_SixthResearcher_Text_0
	release
	end


Marshduke_Indoor_ResearchCenter_2F_NPC_SixthMonk::
	lock
	faceplayer
	msgbox Marshduke_Indoor_ResearchCenter_2F_NPC_SixthMonk_Text_0
	release
	end


Marshduke_Indoor_ResearchCenter_2F_NPC_TranceCoordinator::
	lock
	faceplayer
	msgbox Marshduke_Indoor_ResearchCenter_2F_NPC_TranceCoordinator_Text_0
	release
	end


Marshduke_Indoor_ResearchCenter_2F_NPC_RecordingAssistant::
	lock
	faceplayer
	goto_if_set FLAG_MARSHDUKE_CATHEDRAL_TOUR, Marshduke_Indoor_ResearchCenter_2F_NPC_RecordingAssistant_2
	msgbox Marshduke_Indoor_ResearchCenter_2F_NPC_RecordingAssistant_Text_1
Marshduke_Indoor_ResearchCenter_2F_NPC_RecordingAssistant_1:
	release
	end

Marshduke_Indoor_ResearchCenter_2F_NPC_RecordingAssistant_2:
	msgbox Marshduke_Indoor_ResearchCenter_2F_NPC_RecordingAssistant_Text_0
	goto Marshduke_Indoor_ResearchCenter_2F_NPC_RecordingAssistant_1


Marshduke_Indoor_ResearchCenter_2F_NPC_DividedResearcher_Text_0:
	.string "My team studies the Divided World\n"
	.string "vision.\p"
	.string "Tell me, when you watch it, do you really\n"
	.string "feel the heat and the rain?\p"
	.string "Or is Alakazam just making you think\n"
	.string "you do?\p"
	.string "When our volunteers say they're\n"
	.string "sweating, the thermometer still says\l"
	.string "it's room temperature.$"

Marshduke_Indoor_ResearchCenter_2F_NPC_DividedMonk_Text_0:
	.string "A fire in a memory can't burn paper. But\n"
	.string "watching it still makes you sweat!\p"
	.string "So where does the memory stop and your\n"
	.string "body start? I used to know... Then we\l"
	.string "bought the thermometer.$"

Marshduke_Indoor_ResearchCenter_2F_NPC_TwoHeartsResearcher_Text_0:
	.string "My team studies the Two Hearts vision.\n"
	.string "Two people watch the same moment and\l"
	.string "describe it totally differently!\p"
	.string "So I cut all the water out of the\n"
	.string "pictures. Much easier to grade!$"

Marshduke_Indoor_ResearchCenter_2F_NPC_TwoHeartsMonk_Text_0:
	.string "If two people feel the same thing, did\n"
	.string "they really share the same moment?\p"
	.string "We just tested it at lunch.\p"
	.string "Everyone agreed the food was terrible,\n"
	.string "but nobody could agree why.$"

Marshduke_Indoor_ResearchCenter_2F_NPC_SixthResearcher_Text_0:
	.string "The sixth altar keeps changing on us!\n"
	.string "We never get the same picture twice.\p"
	.string "Is it remembering something that hasn't\n"
	.string "happened yet? Or are our brains just\l"
	.string "filling in the blanks?$"

Marshduke_Indoor_ResearchCenter_2F_NPC_SixthMonk_Text_0:
	.string "Maybe the space is empty on purpose. A\n"
	.string "question nobody has answered yet.\p"
	.string "My partner says it's just missing data.\n"
	.string "So we take turns watching it, in case\l"
	.string "one of us is right.$"

Marshduke_Indoor_ResearchCenter_2F_NPC_TranceCoordinator_Text_0:
	.string "We also want to know how the\n"
	.string "Rememberer stays Mega Evolved.\p"
	.string "No Mega Stone, no trainer, and it has\n"
	.string "never taken a break!\p"
	.string "As far as I know...\p"
	.string "Maybe the visions will tell us why?\p"
	.string "But first I need six teams to agree on\n"
	.string "what an explanation even is.\p"
	.string "Wish me luck...$"

Marshduke_Indoor_ResearchCenter_2F_NPC_RecordingAssistant_Text_0:
	.string "You saw the fish too? Phew! I thought\n"
	.string "I'd just counted wrong.\p"
	.string "I'm keeping every recording, uncut.\n"
	.string "Someday, someone might want to look at\l"
	.string "the edges again.$"

Marshduke_Indoor_ResearchCenter_2F_NPC_RecordingAssistant_Text_1:
	.string "My job is to write down everything the\n"
	.string "teams ignore. Fish, plants, birds in the\l"
	.string "corners of the recordings...\p"
	.string "My 'background' folder is HUGE now.$"
