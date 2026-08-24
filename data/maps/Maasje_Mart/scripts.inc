Maasje_Mart_MapScripts::
	.byte 0


Maasje_Mart_Employer::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Maasje_Mart_Items
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
