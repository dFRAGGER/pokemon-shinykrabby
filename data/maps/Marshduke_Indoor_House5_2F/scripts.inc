Marshduke_Indoor_House5_2F_MapScripts::
	.byte 0


Marshduke_Indoor_House5_2F_Merel::
	lock
	faceplayer
	goto_if_set FLAG_DELTA_COUNT_COMPLETED, Marshduke_Indoor_House5_2F_Merel_2
	goto_if_unset FLAG_MARSHDUKE_CATHEDRAL_TOUR, Marshduke_Indoor_House5_2F_Merel_5
	goto_if_unset FLAG_DELTA_COUNT_STARTED, Marshduke_Indoor_House5_2F_Merel_8
	msgbox Marshduke_Indoor_House5_2F_Merel_Text_3
Marshduke_Indoor_House5_2F_Merel_7:
	getseenmon SPECIES_PSYDUCK
	compare VAR_RESULT, FALSE
	goto_if_eq Marshduke_Indoor_House5_2F_Merel_12
	msgbox Marshduke_Indoor_House5_2F_Merel_Text_5
	waitmessage
	playse SE_PIN
	applymovement 1, Marshduke_Indoor_House5_2F_Merel_Movement_0
	waitmovement
	msgbox Marshduke_Indoor_House5_2F_Merel_Text_6
	giveitem ITEM_HEART_SCALE, 2
	setflag FLAG_DELTA_COUNT_COMPLETED
	msgbox Marshduke_Indoor_House5_2F_Merel_Text_7, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 1, Marshduke_Indoor_House5_2F_Merel_Movement_1
	waitmessage
	release
	end

Marshduke_Indoor_House5_2F_Merel_2:
	msgbox Marshduke_Indoor_House5_2F_Merel_Text_0, MSGBOX_AUTOCLOSE
	release
	end

Marshduke_Indoor_House5_2F_Merel_5:
	msgbox Marshduke_Indoor_House5_2F_Merel_Text_1, MSGBOX_AUTOCLOSE
	release
	end

Marshduke_Indoor_House5_2F_Merel_8:
	msgbox Marshduke_Indoor_House5_2F_Merel_Text_2
	setflag FLAG_DELTA_COUNT_STARTED
	goto Marshduke_Indoor_House5_2F_Merel_7

Marshduke_Indoor_House5_2F_Merel_12:
	msgbox Marshduke_Indoor_House5_2F_Merel_Text_4, MSGBOX_AUTOCLOSE
	release
	end


Marshduke_Indoor_House5_2F_Sign_Notebook::
	msgbox Marshduke_Indoor_House5_2F_Sign_Notebook_Text_0, MSGBOX_SIGN
	end


Marshduke_Indoor_House5_2F_Merel_Movement_0:
	emote_exclamation_mark
	step_end

Marshduke_Indoor_House5_2F_Merel_Movement_1:
	face_left
	step_end

Marshduke_Indoor_House5_2F_Merel_Text_0:
	.string "I started a new page today.\p"
	.string "At the top I copied what Grandma saw,\n"
	.string "so I never forget what we're counting\l"
	.string "towards.$"

Marshduke_Indoor_House5_2F_Merel_Text_1:
	.string "Oh, hi! I'm ILONA. I count the delta's\n"
	.string "Pokémon, just like my grandma used to.\p"
	.string "And guess what? This is a really good\n"
	.string "year!\p"
	.string "Fourteen Psyduck in the reeds along\n"
	.string "the river. Last year it was only eleven!\p"
	.string "Grandma just shakes her head when I\n"
	.string "tell her. I don't get why.$"

Marshduke_Indoor_House5_2F_Merel_Text_2:
	.string "Oh, hi! I'm ILONA. I count the delta's\n"
	.string "Pokémon, just like my grandma used to.\p"
	.string "Fourteen Psyduck this spring! A really\n"
	.string "good year.\p"
	.string "But Grandma says I need a second pair\n"
	.string "of eyes. Someone who isn't from here.\p"
	.string "Have you seen any Psyduck out there?\n"
	.string "Let me have a look at your Pokédex!$"

Marshduke_Indoor_House5_2F_Merel_Text_3:
	.string "Did you spot a Psyduck yet? Let me see\n"
	.string "your Pokédex!$"

Marshduke_Indoor_House5_2F_Merel_Text_4:
	.string "No Psyduck yet...\p"
	.string "They swim in the waters along Route 013\n"
	.string "and Route 014. Come back once you've\l"
	.string "seen one!$"

Marshduke_Indoor_House5_2F_Merel_Text_5:
	.string "There it is! One more Psyduck for the\n"
	.string "log.\p"
	.string "Grandma gave me her very first logbook\n"
	.string "to study. I never actually read it...\l"
	.string "Let's compare!\p"
	.string "'Psyduck: the waters looked yellow with\n"
	.string "them. Stopped counting at three\l"
	.string "hundred.'\p"
	.string "...\p"
	.string "$"

Marshduke_Indoor_House5_2F_Merel_Text_6:
	.string "Three hundred??\p"
	.string "And I was so happy with fourteen.\p"
	.string "I thought this was a good year...\p"
	.string "I suppose I just never knew what a good\n"
	.string "year looked like.\p"
	.string "Thank you. I think I needed someone\n"
	.string "from outside the delta to see it with\l"
	.string "me.\p"
	.string "Here, these wash up in the reeds\n"
	.string "sometimes. The old man who helps\l"
	.string "Pokémon remember their moves loves\l"
	.string "them.$"

Marshduke_Indoor_House5_2F_Merel_Text_7:
	.string "I'm going to keep counting.$"

Marshduke_Indoor_House5_2F_Sign_Notebook_Text_0:
	.string "A bright notebook with stickers on the\n"
	.string "cover.\p"
	.string "'PSYDUCK: 14. A good year!' A little\n"
	.string "smiley face is drawn next to it.$"
