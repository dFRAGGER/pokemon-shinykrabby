Marshduk_Indoor_Mart_MapScripts::
	.byte 0


Marshduk_Indoor_Mart_Employee::
# 4 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	lock
# 5 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	pokemart Marshduk_Indoor_Mart_Items
# 9 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 10 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	release
	end


	.align 2
# 14 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
Marshduk_Indoor_Mart_Items:
# 15 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 16 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 17 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 18 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 19 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 20 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 21 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 22 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
	.2byte ITEM_NONE

Marshduk_Indoor_Mart_Woman::
# 26 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	lock
# 27 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	faceplayer
# 28 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	msgbox Marshduk_Indoor_Mart_Woman_Text_0
# 29 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	waitmessage
# 30 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	release
	end


Marshduk_Indoor_Mart_Woman_Text_0:
# 28 "data/maps/Marshduk_Indoor_Mart/scripts.pory"
	.string "Out of stock again...\p"
	.string "REPELs and rope are the essentials for\n"
	.string "crossing the mud-infested delta and\l"
	.string "scaring away the URSARING.$"
