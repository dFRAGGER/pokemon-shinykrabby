Maasje_Mart_MapScripts::
	.byte 0


Maasje_Mart_Employer::
# 6 "data/maps/Maasje_Mart/scripts.pory"
	lock
# 7 "data/maps/Maasje_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/Maasje_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/Maasje_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/Maasje_Mart/scripts.pory"
	pokemart Maasje_Mart_Items
# 11 "data/maps/Maasje_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/Maasje_Mart/scripts.pory"
	release
	end


	.align 2
# 17 "data/maps/Maasje_Mart/scripts.pory"
Maasje_Mart_Items:
# 18 "data/maps/Maasje_Mart/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/Maasje_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 20 "data/maps/Maasje_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 21 "data/maps/Maasje_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 22 "data/maps/Maasje_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

Maasje_Mart_Fat_Man::
# 26 "data/maps/Maasje_Mart/scripts.pory"
	lock
# 27 "data/maps/Maasje_Mart/scripts.pory"
	faceplayer
# 28 "data/maps/Maasje_Mart/scripts.pory"
	msgbox Maasje_Mart_Fat_Man_Text_0
# 29 "data/maps/Maasje_Mart/scripts.pory"
	waitmessage
# 30 "data/maps/Maasje_Mart/scripts.pory"
	release
	end


Maasje_Mart_Bug_Catcher::
# 35 "data/maps/Maasje_Mart/scripts.pory"
	lock
# 36 "data/maps/Maasje_Mart/scripts.pory"
	faceplayer
# 37 "data/maps/Maasje_Mart/scripts.pory"
	msgbox Maasje_Mart_Bug_Catcher_Text_0
# 38 "data/maps/Maasje_Mart/scripts.pory"
	waitmessage
# 39 "data/maps/Maasje_Mart/scripts.pory"
	release
	end


Maasje_Mart_Fat_Man_Text_0:
# 28 "data/maps/Maasje_Mart/scripts.pory"
	.string "I'm looking for pink cookies, but I can't\n"
	.string "find them anywhere.$"

Maasje_Mart_Bug_Catcher_Text_0:
# 37 "data/maps/Maasje_Mart/scripts.pory"
	.string "I was attacked by two Bee Pokemons, I\n"
	.string "needed some antidote.\p"
	.string "I have never seen those here before,\n"
	.string "but apparently they belong together.\p"
	.string "My dad says they are called Volbeat and\n"
	.string "Illumise.$"
