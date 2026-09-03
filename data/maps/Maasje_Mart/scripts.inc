Maasje_Mart_MapScripts::
	.byte 0


Maasje_Mart_Employer::
	lock
	faceplayer
	goto_if_unset FLAG_MINTS_DISABLED, Maasje_Mart_Employer_3
Maasje_Mart_Employer_1:
	message gText_HowMayIServeYou
	waitmessage
	pokemart Maasje_Mart_Items
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

Maasje_Mart_Employer_2:
	msgbox Maasje_Mart_Employer_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Maasje_Mart_Employer_6
	goto Maasje_Mart_Employer_1

Maasje_Mart_Employer_3:
	goto_if_set FLAG_BADGE03_GET, Maasje_Mart_Employer_2
	goto Maasje_Mart_Employer_1

Maasje_Mart_Employer_6:
	pokemart Maasje_Mart_Mints
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
Maasje_Mart_Items:
	.2byte ITEM_POTION
	.2byte ITEM_POKE_BALL
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

	.align 2
Maasje_Mart_Mints:
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_ADAMANT_MINT
	.2byte ITEM_BOLD_MINT
	.2byte ITEM_BRAVE_MINT
	.2byte ITEM_CALM_MINT
	.2byte ITEM_CAREFUL_MINT
	.2byte ITEM_GENTLE_MINT
	.2byte ITEM_HASTY_MINT
	.2byte ITEM_IMPISH_MINT
	.2byte ITEM_JOLLY_MINT
	.2byte ITEM_LAX_MINT
	.2byte ITEM_LONELY_MINT
	.2byte ITEM_MILD_MINT
	.2byte ITEM_MODEST_MINT
	.2byte ITEM_NAIVE_MINT
	.2byte ITEM_NAUGHTY_MINT
	.2byte ITEM_QUIET_MINT
	.2byte ITEM_RASH_MINT
	.2byte ITEM_RELAXED_MINT
	.2byte ITEM_SASSY_MINT
	.2byte ITEM_TIMID_MINT
	.2byte ITEM_MIRROR_HERB
	.2byte ITEM_NONE

Maasje_Mart_Fat_Man::
	lock
	faceplayer
	msgbox Maasje_Mart_Fat_Man_Text_0
	waitmessage
	release
	end


Maasje_Mart_Bug_Catcher::
	lock
	faceplayer
	msgbox Maasje_Mart_Bug_Catcher_Text_0
	waitmessage
	release
	end


Maasje_Mart_Employer_Text_0:
	.string "Would you like to browse our NATURE\n"
	.string "MINTS?\p"
	.string "Choose NO for regular supplies.$"

Maasje_Mart_Fat_Man_Text_0:
	.string "I'm looking for pink cookies, but I can't\n"
	.string "find them anywhere.$"

Maasje_Mart_Bug_Catcher_Text_0:
	.string "I was attacked by two bee-like Pokémon\n"
	.string "and needed some antidote.\p"
	.string "I've never seen that kind around here\n"
	.string "before, but apparently they travel\l"
	.string "together.\p"
	.string "My dad says they're called Volbeat and\n"
	.string "Illumise.$"
