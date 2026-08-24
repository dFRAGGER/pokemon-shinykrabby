Mistcity_Mart_MapScripts::
	.byte 0


Mistcity_Mart_Employer::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Mistcity_Mart_Items
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
Mistcity_Mart_Items:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_NONE

Mistcity_Mart_Ranger::
	lock
	faceplayer
	msgbox Mistcity_Mart_Ranger_Text_0
	waitmessage
	release
	return


Mistcity_Mart_Hiker::
	lock
	faceplayer
	msgbox Mistcity_Mart_Hiker_Text_0
	waitmessage
	release
	return


Mistcity_Mart_Ranger_Text_0:
	.string "I always double-check my supply of\n"
	.string "Antidotes before a shift, because the\l"
	.string "Spinarak in these woods don't mess\l"
	.string "around.$"

Mistcity_Mart_Hiker_Text_0:
	.string "I'm trying to find a backpack that is\n"
	.string "actually waterproof, because the humid\l"
	.string "air here manages to soak through\l"
	.string "everything I own.$"
