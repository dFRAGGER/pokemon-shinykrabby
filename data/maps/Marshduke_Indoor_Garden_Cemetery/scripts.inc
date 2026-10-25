Marshduke_Indoor_Garden_Cemetery_MapScripts::
	.byte 0


Marshduke_Indoor_Garden_Cemetery_Trainer_Selma::
	trainerbattle_single TRAINER_DELTA_SELMA_SK, Marshduke_Indoor_Garden_Cemetery_Trainer_Selma_Intro, Marshduke_Indoor_Garden_Cemetery_Trainer_Selma_Defeat
	msgbox Marshduke_Indoor_Garden_Cemetery_Trainer_Selma_After, MSGBOX_AUTOCLOSE
	end


Marshduke_Indoor_Garden_Cemetery_Trainer_Mara::
	trainerbattle_single TRAINER_DELTA_MARA_SK, Marshduke_Indoor_Garden_Cemetery_Trainer_Mara_Intro, Marshduke_Indoor_Garden_Cemetery_Trainer_Mara_Defeat
	msgbox Marshduke_Indoor_Garden_Cemetery_Trainer_Mara_After, MSGBOX_AUTOCLOSE
	end


Marshduke_Indoor_Garden_Cemetery_NPC_BouquetVisitor::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Garden_Cemetery_NPC_BouquetVisitor_Text_0
	release
	end


Marshduke_Indoor_Garden_NPC_StoneCaretaker::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Garden_NPC_StoneCaretaker_Text_0
	release
	end


Marshduke_Indoor_Garden_Cemetery_Sign_Grave01::
	lock
	msgbox Marshduke_Indoor_Garden_Cemetery_Sign_Grave01_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_Garden_Cemetery_Sign_Grave02::
	lock
	msgbox Marshduke_Indoor_Garden_Cemetery_Sign_Grave02_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_Garden_Cemetery_Sign_Grave03::
	lock
	msgbox Marshduke_Indoor_Garden_Cemetery_Sign_Grave03_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_Garden_Cemetery_Sign_Grave04::
	lock
	msgbox Marshduke_Indoor_Garden_Cemetery_Sign_Grave04_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_Garden_Cemetery_Sign_Grave05::
	lock
	msgbox Marshduke_Indoor_Garden_Cemetery_Sign_Grave05_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_Garden_Cemetery_Sign_Grave06::
	lock
	msgbox Marshduke_Indoor_Garden_Cemetery_Sign_Grave06_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_Garden_Cemetery_Sign_Grave07::
	lock
	msgbox Marshduke_Indoor_Garden_Cemetery_Sign_Grave07_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_Garden_Cemetery_Sign_Grave08::
	lock
	msgbox Marshduke_Indoor_Garden_Cemetery_Sign_Grave08_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_Garden_Cemetery_Sign_Grave09::
	lock
	msgbox Marshduke_Indoor_Garden_Cemetery_Sign_Grave09_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_Garden_Cemetery_Sign_Grave10::
	lock
	msgbox Marshduke_Indoor_Garden_Cemetery_Sign_Grave10_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_Garden_Cemetery_Sign_Grave11::
	lock
	msgbox Marshduke_Indoor_Garden_Cemetery_Sign_Grave11_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_Garden_Cemetery_Sign_Grave12::
	lock
	msgbox Marshduke_Indoor_Garden_Cemetery_Sign_Grave12_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_Garden_Cemetery_Sign_Grave13::
	lock
	msgbox Marshduke_Indoor_Garden_Cemetery_Sign_Grave13_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_Garden_Cemetery_Sign_Grave14::
	lock
	msgbox Marshduke_Indoor_Garden_Cemetery_Sign_Grave14_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_Garden_Cemetery_Sign_Grave15::
	lock
	msgbox Marshduke_Indoor_Garden_Cemetery_Sign_Grave15_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_Garden_Cemetery_Sign_Tomb::
	lock
	msgbox Marshduke_Indoor_Garden_Cemetery_Sign_Tomb_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_Garden_Cemetery_Sign_TombDoor::
	lock
	msgbox Marshduke_Indoor_Garden_Cemetery_Sign_TombDoor_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_Garden_Cemetery_NPC_BouquetVisitor_Text_0:
	.string "I bring the flowers my partner liked.\n"
	.string "The plant keeper tells me their names\l"
	.string "every visit.\p"
	.string "Sometimes I already know. I let him tell\n"
	.string "me anyway.$"

Marshduke_Indoor_Garden_NPC_StoneCaretaker_Text_0:
	.string "This cemetery is greener than the usual\n"
	.string "cemeteries.\p"
	.string "The little plants between the stones\n"
	.string "are not cut down by the gardener.\p"
	.string "Tidy doesn't have to mean nothing is\n"
	.string "allowed to grow.$"

Marshduke_Indoor_Garden_Cemetery_Sign_Grave01_Text_0:
	.string "HERE LIES GRANDPA WALT.\n"
	.string "HE CAUGHT THE BIG ONE. EVENTUALLY.$"

Marshduke_Indoor_Garden_Cemetery_Sign_Grave02_Text_0:
	.string "IN LOVING MEMORY OF ROSE BAXTER.\n"
	.string "MOTHER, BAKER, BEST PIE IN THE DELTA.$"

Marshduke_Indoor_Garden_Cemetery_Sign_Grave03_Text_0:
	.string "SIR FLUFFINGTON\n"
	.string "BELOVED FURRET. ALWAYS FOUND THE WAY\l"
	.string "HOME.$"

Marshduke_Indoor_Garden_Cemetery_Sign_Grave04_Text_0:
	.string "HENRY WALLACE\n"
	.string "HE SAID IT WAS ONLY A SMALL STORM.$"

Marshduke_Indoor_Garden_Cemetery_Sign_Grave05_Text_0:
	.string "A grave covered in moss. The name has\n"
	.string "worn away completely.\p"
	.string "Someone has left a fresh flower on it\n"
	.string "anyway.$"

Marshduke_Indoor_Garden_Cemetery_Sign_Grave06_Text_0:
	.string "MARGARET AND JOE\n"
	.string "TOGETHER AGAIN.$"

Marshduke_Indoor_Garden_Cemetery_Sign_Grave07_Text_0:
	.string "HERE LIES MAYOR DAWSON.\n"
	.string "HE PROMISED US A NEW BRIDGE. WE'RE\l"
	.string "STILL WAITING.$"

Marshduke_Indoor_Garden_Cemetery_Sign_Grave08_Text_0:
	.string "TINY\n"
	.string "A SKITTY WHO WAS NOT TINY AT ALL.$"

Marshduke_Indoor_Garden_Cemetery_Sign_Grave09_Text_0:
	.string "CAPTAIN ELIAS FOSTER\n"
	.string "THE SEA KEPT HIS SHIP. WE KEPT HIS\l"
	.string "NAME.$"

Marshduke_Indoor_Garden_Cemetery_Sign_Grave10_Text_0:
	.string "LOTTIE, AGE 7\n"
	.string "SHE LOVED THE MARILL IN THE CANAL.$"

Marshduke_Indoor_Garden_Cemetery_Sign_Grave11_Text_0:
	.string "A plain stone with only a date carved\n"
	.string "into it.\p"
	.string "A tiny Poké Ball is engraved\n"
	.string "underneath.$"

Marshduke_Indoor_Garden_Cemetery_Sign_Grave12_Text_0:
	.string "DR. ANTON LUZAC\n"
	.string "FOUNDER OF THE INSTITUTE. HE WANTED TO\l"
	.string "KNOW.$"

Marshduke_Indoor_Garden_Cemetery_Sign_Grave13_Text_0:
	.string "BROTHER PETER\n"
	.string "HE SWEPT THESE PATHS FOR FORTY YEARS.$"

Marshduke_Indoor_Garden_Cemetery_Sign_Grave14_Text_0:
	.string "GERALD\n"
	.string "THE MOST AVERAGE FISHERMAN IN\l"
	.string "MARSHDUKE.$"

Marshduke_Indoor_Garden_Cemetery_Sign_Grave15_Text_0:
	.string "THE YOUNG FAMILY\n"
	.string "SIX GENERATIONS, ONE WINDOW, THE SAME\l"
	.string "RIVER VIEW.$"

Marshduke_Indoor_Garden_Cemetery_Sign_Tomb_Text_0:
	.string "An old stone sign. The text is worn\n"
	.string "away, unreadable.$"

Marshduke_Indoor_Garden_Cemetery_Sign_TombDoor_Text_0:
	.string "Locked. I don't think I should open it.$"

Marshduke_Indoor_Garden_Cemetery_Trainer_Selma_Intro::
	.string "Will you keep my GASTLY company?$"

Marshduke_Indoor_Garden_Cemetery_Trainer_Selma_Defeat::
	.string "That cheered us up!$"

Marshduke_Indoor_Garden_Cemetery_Trainer_Selma_After::
	.string "GASTLY scares off most visitors before\n"
	.string "I can introduce myself. I'm glad you\l"
	.string "stayed.$"

Marshduke_Indoor_Garden_Cemetery_Trainer_Mara_Intro::
	.string "We can battle if you're careful around\n"
	.string "the flowers!$"

Marshduke_Indoor_Garden_Cemetery_Trainer_Mara_Defeat::
	.string "You nearly flattened my bouquet!$"

Marshduke_Indoor_Garden_Cemetery_Trainer_Mara_After::
	.string "MURKROW keeps pinching ribbon off the\n"
	.string "bouquets. If you see any in its beak,\l"
	.string "that's mine to put back.$"
