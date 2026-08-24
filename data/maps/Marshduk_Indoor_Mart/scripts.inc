Marshduk_Indoor_Mart_MapScripts::
	.byte 0


Marshduk_Indoor_Mart_Employee::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Marshduk_Indoor_Mart_Items
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
Marshduk_Indoor_Mart_Items:
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_X_SPEED
	.2byte ITEM_NONE

Marshduk_Indoor_Mart_Woman::
	lock
	faceplayer
	msgbox Marshduk_Indoor_Mart_Woman_Text_0
	waitmessage
	release
	end


Marshduk_Indoor_Mart_Woman_Text_0:
	.string "Out of stock again...\p"
	.string "REPELs and rope are the essentials for\n"
	.string "crossing the mud-infested delta and\l"
	.string "scaring away the URSARING.$"
