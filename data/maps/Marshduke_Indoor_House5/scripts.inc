Marshduke_Indoor_House5_MapScripts::
	.byte 0


Marshduke_Indoor_House5_MrsVisser::
	lock
	faceplayer
	goto_if_set FLAG_DELTA_COUNT_COMPLETED, Marshduke_Indoor_House5_MrsVisser_2
	goto_if_set FLAG_MARSHDUKE_CATHEDRAL_TOUR, Marshduke_Indoor_House5_MrsVisser_3
	msgbox Marshduke_Indoor_House5_MrsVisser_Text_2, MSGBOX_AUTOCLOSE
Marshduke_Indoor_House5_MrsVisser_1:
	release
	end

Marshduke_Indoor_House5_MrsVisser_2:
	msgbox Marshduke_Indoor_House5_MrsVisser_Text_0, MSGBOX_AUTOCLOSE
	goto Marshduke_Indoor_House5_MrsVisser_1

Marshduke_Indoor_House5_MrsVisser_3:
	msgbox Marshduke_Indoor_House5_MrsVisser_Text_1, MSGBOX_AUTOCLOSE
	goto Marshduke_Indoor_House5_MrsVisser_1


Marshduke_Indoor_House5_Sign_OldLogbook::
	msgbox Marshduke_Indoor_House5_Sign_OldLogbook_Text_0, MSGBOX_SIGN
	end


Marshduke_Indoor_House5_MrsVisser_Text_0:
	.string "My granddaughter came down with your\n"
	.string "report and read my oldest logbook for\l"
	.string "an hour.\p"
	.string "She didn't say a word. Then she asked me\n"
	.string "what the reeds used to look like.\p"
	.string "That's how it starts, you know. Someone\n"
	.string "has to remember, so the rest of us can\l"
	.string "want it back.$"

Marshduke_Indoor_House5_MrsVisser_Text_1:
	.string "You've been on Ms. STONE's tour. I can\n"
	.string "see it on your face.\p"
	.string "Waters too full of fish to see through...\n"
	.string "She told you that, did she?\p"
	.string "Sixty years it took her to notice...\p"
	.string "I could have shown her in an afternoon.\n"
	.string "It's all written down, right here.\p"
	.string "My granddaughter does the counts now.\n"
	.string "She's upstairs.\p"
	.string "Go say hello. She could use a second\n"
	.string "pair of eyes.$"

Marshduke_Indoor_House5_MrsVisser_Text_2:
	.string "The book in front of me is an old log\n"
	.string "book.\p"
	.string "I counted the delta's Pokémon for the\n"
	.string "research centre next door. Every\l"
	.string "spring, every autumn.\p"
	.string "I recently stopped counting, nobody\n"
	.string "seemed to care.\p"
	.string "I think they're counting dreams over\n"
	.string "there now.$"

Marshduke_Indoor_House5_Sign_OldLogbook_Text_0:
	.string "A logbook with a cracked leather cover.\n"
	.string "The first page, in neat handwriting:\p"
	.string "'PSYDUCK: the reeds yellow with them.\n"
	.string "Stopped counting at three hundred.'\p"
	.string "'YANMA: clouds of them over the water.\n"
	.string "Too many to count.'\p"
	.string "'SURSKIT: on every pool, every puddle.'$"
