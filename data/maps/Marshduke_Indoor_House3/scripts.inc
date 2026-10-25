Marshduke_Indoor_House3_MapScripts::
	.byte 0


Marshduke_Indoor_House3_Psychic::
	lock
	faceplayer
	goto_if_unset FLAG_ITEM_MARSHDUKE_HOUSE3_TM_HIDDEN_POWER, Marshduke_Indoor_House3_Psychic_2
	msgbox Marshduke_Indoor_House3_Psychic_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
Marshduke_Indoor_House3_Psychic_1:
	release
	end

Marshduke_Indoor_House3_Psychic_2:
	msgbox Marshduke_Indoor_House3_Psychic_Text_0
	waitmessage
	giveitem ITEM_TM_HIDDEN_POWER
	waitmessage
	setflag FLAG_ITEM_MARSHDUKE_HOUSE3_TM_HIDDEN_POWER
	goto Marshduke_Indoor_House3_Psychic_1


Marshduke_Indoor_House3_PsychicChild::
	lock
	faceplayer
	msgbox Marshduke_Indoor_House3_PsychicChild_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Marshduke_Indoor_House3_Psychic_Text_0:
	.string "Ah. I felt you coming up the street.\p"
	.string "I've spent the last twenty years\n"
	.string "studying psychic powers.\p"
	.string "I'm convinced everyone has a little\n"
	.string "psychic ability in them, whether they\l"
	.string "know it or not.\p"
	.string "Pokémon are no different. Each one\n"
	.string "carries a hidden power it never shows.\p"
	.string "Its type is written somewhere deep\n"
	.string "inside, where even its trainer can't see.\p"
	.string "Here. Let your Pokémon find out for\n"
	.string "themselves.$"

Marshduke_Indoor_House3_Psychic_Text_1:
	.string "Hidden Power never looks the same\n"
	.string "twice. Every Pokémon has something of\l"
	.string "its own.\p"
	.string "...My son, for example, is very good at\n"
	.string "hiding his thoughts from me.\p"
	.string "I'm told that's normal.$"

Marshduke_Indoor_House3_PsychicChild_Text_0:
	.string "Shh! I'm thinking about nothing.\p"
	.string "Dad can read minds, so I hide my\n"
	.string "thoughts behind a really big picture of\l"
	.string "a Snorlax.\p"
	.string "It works every time!\p"
	.string "...I think it works.$"
