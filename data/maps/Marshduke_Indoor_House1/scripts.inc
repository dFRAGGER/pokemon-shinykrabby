Marshduke_Indoor_House1_MapScripts::
	.byte 0


Marshduke_Indoor_House1_Receptionist::
	lock
	faceplayer
	msgbox Marshduke_Indoor_House1_Receptionist_Text_0
	waitmessage
	release
	end


Marshduke_Indoor_House1_Scribe::
	lock
	faceplayer
	msgbox Marshduke_Indoor_House1_Scribe_Text_0
	waitmessage
	release
	end


Marshduke_Indoor_House1_Girl::
	lock
	playse SE_PIN
	applymovement 3, Marshduke_Indoor_House1_Girl_Movement_0
	waitmovement
	msgbox Marshduke_Indoor_House1_Girl_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	playse SE_PIN
	applymovement 4, Marshduke_Indoor_House1_Girl_Movement_1
	waitmovement
	msgbox Marshduke_Indoor_House1_Girl_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 4, Marshduke_Indoor_House1_Girl_Movement_2
	waitmovement
	release
	end


Marshduke_Indoor_House1_Scholar::
	lock
	faceplayer
	msgbox Marshduke_Indoor_House1_Scholar_Text_0
	waitmessage
	release
	end


Marshduke_Indoor_House1_Kid::
	lock
	faceplayer
	msgbox Marshduke_Indoor_House1_Kid_Text_0
	waitmessage
	release
	end


Marshduke_Indoor_House1_Sign_LegendShelf::
	lock
	msgbox Marshduke_Indoor_House1_Sign_LegendShelf_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_House1_Sign_PilgrimDiaries::
	lock
	msgbox Marshduke_Indoor_House1_Sign_PilgrimDiaries_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_House1_Sign_NaturalHistoryCase::
	lock
	msgbox Marshduke_Indoor_House1_Sign_NaturalHistoryCase_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_House1_Sign_DeltaSurveyVolumes::
	lock
	msgbox Marshduke_Indoor_House1_Sign_DeltaSurveyVolumes_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_House1_Sign_WaterDamagedManuscript::
	lock
	msgbox Marshduke_Indoor_House1_Sign_WaterDamagedManuscript_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_House1_Sign_LedgerOfDonations::
	lock
	msgbox Marshduke_Indoor_House1_Sign_LedgerOfDonations_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_House1_Sign_ForeignLanguageShelf::
	lock
	msgbox Marshduke_Indoor_House1_Sign_ForeignLanguageShelf_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_House1_Sign_ChildrensShelf::
	lock
	msgbox Marshduke_Indoor_House1_Sign_ChildrensShelf_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_House1_Sign_EmptyShelf::
	lock
	msgbox Marshduke_Indoor_House1_Sign_EmptyShelf_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_House1_Sign_AnkleShelf::
	lock
	msgbox Marshduke_Indoor_House1_Sign_AnkleShelf_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_House1_Sign_ClosedShelf::
	lock
	goto_if_unset FLAG_MD_CLOSED_SHELF, Marshduke_Indoor_House1_Sign_ClosedShelf_2
	msgbox Marshduke_Indoor_House1_Sign_ClosedShelf_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Marshduke_Indoor_House1_Sign_ClosedShelf_5
	msgbox Marshduke_Indoor_House1_Sign_ClosedShelf_Text_2, MSGBOX_SIGN
	waitmessage
	setflag FLAG_MD_READ_ANCIENT_MANUSCRIPT
	release
	end

Marshduke_Indoor_House1_Sign_ClosedShelf_2:
	msgbox Marshduke_Indoor_House1_Sign_ClosedShelf_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end

Marshduke_Indoor_House1_Sign_ClosedShelf_5:
	release
	end


Marshduke_Indoor_House1_Girl_Movement_0:
	emote_exclamation_mark
	step_end

Marshduke_Indoor_House1_Girl_Movement_1:
	emote_question_mark
	face_left
	step_end

Marshduke_Indoor_House1_Girl_Movement_2:
	face_up
	step_end

Marshduke_Indoor_House1_Receptionist_Text_0:
	.string "Welcome to Marshduke's library! Books\n"
	.string "to your left, quiet to your right.\p"
	.string "If you find a MEOWTH in the poetry\n"
	.string "section, he lives here now and we've all\l"
	.string "made peace with it.$"

Marshduke_Indoor_House1_Scribe_Text_0:
	.string "Wet ink, mind your sleeves!\p"
	.string "I'm copying out a copy of a copy of a\n"
	.string "copy.\p"
	.string "By now the hero's name has changed\n"
	.string "twice and the dragon's grown an extra\l"
	.string "head.\p"
	.string "He'll have three by the time my\n"
	.string "apprentice is done.$"

Marshduke_Indoor_House1_Girl_Text_0:
	.string "I want the one with the fish on the\n"
	.string "cover!$"

Marshduke_Indoor_House1_Girl_Text_1:
	.string "...There's fish on nine of them.\p"
	.string "...this is going to take a while...$"

Marshduke_Indoor_House1_Scholar_Text_0:
	.string "Ask me about the Brass Tower. Go on.\n"
	.string "Anything.\p"
	.string "I've been here since TUESDAY and\n"
	.string "nobody's asked me anything.$"

Marshduke_Indoor_House1_Kid_Text_0:
	.string "Shh! I'm 'studying' for my mom.\p"
	.string "Really I'm playing this new ROM hack\n"
	.string "called POKÉMON SHINY KRABBY.\p"
	.string "Don't tell her, okay?$"

Marshduke_Indoor_House1_Sign_LegendShelf_Text_0:
	.string "Nine accounts of one burning tower,\n"
	.string "shelved shoulder to shoulder.\p"
	.string "They have not resolved their\n"
	.string "differences.$"

Marshduke_Indoor_House1_Sign_PilgrimDiaries_Text_0:
	.string "Hundreds of little books.\p"
	.string "They all describe the same five\n"
	.string "memories, but they all differ slightly it\l"
	.string "seems.$"

Marshduke_Indoor_House1_Sign_NaturalHistoryCase_Text_0:
	.string "A pinned note: 'RE-CATALOGUED -\n"
	.string "EYEWITNESS. Previously: poetic\l"
	.string "exaggeration. - Casja.'\p"
	.string "The old label is crossed out twice.$"

Marshduke_Indoor_House1_Sign_DeltaSurveyVolumes_Text_0:
	.string "Charts of the delta over eight\n"
	.string "centuries.\p"
	.string "The channels wander all over the place.\p"
	.string "Every single one of them goes around a\n"
	.string "hill.$"

Marshduke_Indoor_House1_Sign_WaterDamagedManuscript_Text_0:
	.string "Half a page survives:\p"
	.string "'...and the water so crowded with fish\n"
	.string "that our boat went slowly, and we\l"
	.string "complained of it...'$"

Marshduke_Indoor_House1_Sign_LedgerOfDonations_Text_0:
	.string "Every book here came in somebody's\n"
	.string "coat.\p"
	.string "Entry one is a soup recipe, donated by\n"
	.string "accident.$"

Marshduke_Indoor_House1_Sign_ForeignLanguageShelf_Text_0:
	.string "Thirty different languages about the\n"
	.string "same subject.$"

Marshduke_Indoor_House1_Sign_ChildrensShelf_Text_0:
	.string "Very well-worn books.\p"
	.string "The tower burns in all of them, but most\n"
	.string "have HO OH in a different color.$"

Marshduke_Indoor_House1_Sign_EmptyShelf_Text_0:
	.string "A shelf half empty. The label reads:\n"
	.string "'FOR WHAT HASN'T BEEN WRITTEN YET'.$"

Marshduke_Indoor_House1_Sign_AnkleShelf_Text_0:
	.string "Gnaw marks everywhere. A librarian has\n"
	.string "taped up a note: 'WE KNOW. WE'RE\l"
	.string "WORKING ON IT. STOP LEAVING FOOD IN\l"
	.string "THE HISTORY SECTION.'$"

Marshduke_Indoor_House1_Sign_ClosedShelf_Text_0:
	.string "A locked case of the Order's oldest\n"
	.string "texts.\p"
	.string "There are gloves in the cabinet and a\n"
	.string "very serious sign about the gloves.$"

Marshduke_Indoor_House1_Sign_ClosedShelf_Text_1:
	.string "The locked case of the Order's oldest\n"
	.string "texts seems to have been left open and\l"
	.string "unattended.\p"
	.string "Read the ancient manuscript?$"

Marshduke_Indoor_House1_Sign_ClosedShelf_Text_2:
	.string "'Before the ice left, the wanderer sat,\n"
	.string "and the green light of the wood came to\l"
	.string "sit with it.'\p"
	.string "'They kept company - the rememberer\n"
	.string "and the traveler. The one who cannot\l"
	.string "leave the past, and the one who cannot\l"
	.string "stay in the present.'\p"
	.string "'What they spoke of, no text records,\n"
	.string "only oral history.'$"
