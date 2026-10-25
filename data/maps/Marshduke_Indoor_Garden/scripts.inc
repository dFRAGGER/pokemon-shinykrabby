Marshduke_Indoor_Garden_MapScripts::
	.byte 0


Marshduke_Indoor_Garden_Trainer_Cas::
	trainerbattle_single TRAINER_DELTA_CAS_SK, Marshduke_Indoor_Garden_Trainer_Cas_Intro, Marshduke_Indoor_Garden_Trainer_Cas_Defeat
	msgbox Marshduke_Indoor_Garden_Trainer_Cas_After, MSGBOX_AUTOCLOSE
	end


Marshduke_Indoor_Garden_Trainer_Bert::
	trainerbattle_single TRAINER_DELTA_BERT_SK, Marshduke_Indoor_Garden_Trainer_Bert_Intro, Marshduke_Indoor_Garden_Trainer_Bert_Defeat
	msgbox Marshduke_Indoor_Garden_Trainer_Bert_After, MSGBOX_AUTOCLOSE
	end


Marshduke_Indoor_Garden_Trainer_Noor::
	trainerbattle_single TRAINER_DELTA_NOOR_SK, Marshduke_Indoor_Garden_Trainer_Noor_Intro, Marshduke_Indoor_Garden_Trainer_Noor_Defeat
	msgbox Marshduke_Indoor_Garden_Trainer_Noor_After, MSGBOX_AUTOCLOSE
	end


Marshduke_Indoor_Garden_Trainer_Ivo::
	trainerbattle_single TRAINER_DELTA_IVO_SK, Marshduke_Indoor_Garden_Trainer_Ivo_Intro, Marshduke_Indoor_Garden_Trainer_Ivo_Defeat
	msgbox Marshduke_Indoor_Garden_Trainer_Ivo_After, MSGBOX_AUTOCLOSE
	end


Marshduke_Indoor_Garden_NPC_DollChild::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Garden_NPC_DollChild_Text_0
	release
	end


Marshduke_Indoor_Garden_NPC_QuietVisitor::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Garden_NPC_QuietVisitor_Text_0
	release
	end


Marshduke_Indoor_Garden_Sign_GardenerHouse::
	lock
	msgbox Marshduke_Indoor_Garden_Sign_GardenerHouse_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_Garden_Sign_Cemetery::
	lock
	msgbox Marshduke_Indoor_Garden_Sign_Cemetery_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_Garden_NPC_DollChild_Text_0:
	.string "The doll is for Grandma's CLEFAIRY.\p"
	.string "I know it can't play with it. I still\n"
	.string "thought it should have one.$"

Marshduke_Indoor_Garden_NPC_QuietVisitor_Text_0:
	.string "The city sounds different here. Water,\n"
	.string "leaves, a distant bell.\p"
	.string "I came to remember someone. It's a good\n"
	.string "place to sit for a while.$"

Marshduke_Indoor_Garden_Sign_GardenerHouse_Text_0:
	.string "- Gardener's House -$"

Marshduke_Indoor_Garden_Sign_Cemetery_Text_0:
	.string "- Marshduke Cemetery -$"

Marshduke_Indoor_Garden_Trainer_Cas_Intro::
	.string "Try battling without saying a word!$"

Marshduke_Indoor_Garden_Trainer_Cas_Defeat::
	.string "Oops, I shouted!$"

Marshduke_Indoor_Garden_Trainer_Cas_After::
	.string "NATU won't stop staring at you. Please\n"
	.string "don't stare back or we'll be here all day.$"

Marshduke_Indoor_Garden_Trainer_Bert_Intro::
	.string "Have you got time for an old trainer?$"

Marshduke_Indoor_Garden_Trainer_Bert_Defeat::
	.string "You've got a fine team!$"

Marshduke_Indoor_Garden_Trainer_Bert_After::
	.string "IVYSAUR used to fit inside my coat. It\n"
	.string "still tries to sit on my lap.$"

Marshduke_Indoor_Garden_Trainer_Noor_Intro::
	.string "Let's see if my studying paid off!$"

Marshduke_Indoor_Garden_Trainer_Noor_Defeat::
	.string "I need more practice!$"

Marshduke_Indoor_Garden_Trainer_Noor_After::
	.string "I can watch MEGA Alakazam for hours,\n"
	.string "but my own KADABRA won't sit still for\l"
	.string "five minutes.$"

Marshduke_Indoor_Garden_Trainer_Ivo_Intro::
	.string "One last battle before we head home?$"

Marshduke_Indoor_Garden_Trainer_Ivo_Defeat::
	.string "You caught us off guard!$"

Marshduke_Indoor_Garden_Trainer_Ivo_After::
	.string "GOLBAT gets restless indoors, so we\n"
	.string "come here most evenings. The caretaker\l"
	.string "knows us by now.$"
