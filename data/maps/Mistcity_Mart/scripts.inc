Mistcity_Mart_MapScripts::
	.byte 0


Mistcity_Mart_Employer::
# 4 "data/maps/Mistcity_Mart/scripts.pory"
	lock
# 5 "data/maps/Mistcity_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/Mistcity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/Mistcity_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/Mistcity_Mart/scripts.pory"
	pokemart Mistcity_Mart_Items
# 9 "data/maps/Mistcity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 10 "data/maps/Mistcity_Mart/scripts.pory"
	release
	end


	.align 2
# 15 "data/maps/Mistcity_Mart/scripts.pory"
Mistcity_Mart_Items:
# 16 "data/maps/Mistcity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 17 "data/maps/Mistcity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 18 "data/maps/Mistcity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/Mistcity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 20 "data/maps/Mistcity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 21 "data/maps/Mistcity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 22 "data/maps/Mistcity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 23 "data/maps/Mistcity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 24 "data/maps/Mistcity_Mart/scripts.pory"
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_NONE

Mistcity_Mart_Ranger::
# 28 "data/maps/Mistcity_Mart/scripts.pory"
	lock
# 29 "data/maps/Mistcity_Mart/scripts.pory"
	faceplayer
# 30 "data/maps/Mistcity_Mart/scripts.pory"
	msgbox Mistcity_Mart_Ranger_Text_0
# 31 "data/maps/Mistcity_Mart/scripts.pory"
	waitmessage
# 32 "data/maps/Mistcity_Mart/scripts.pory"
	release
	return


Mistcity_Mart_Hiker::
# 36 "data/maps/Mistcity_Mart/scripts.pory"
	lock
# 37 "data/maps/Mistcity_Mart/scripts.pory"
	faceplayer
# 38 "data/maps/Mistcity_Mart/scripts.pory"
	msgbox Mistcity_Mart_Hiker_Text_0
# 39 "data/maps/Mistcity_Mart/scripts.pory"
	waitmessage
# 40 "data/maps/Mistcity_Mart/scripts.pory"
	release
	return


Mistcity_Mart_Ranger_Text_0:
# 30 "data/maps/Mistcity_Mart/scripts.pory"
	.string "I always double-check my supply of\n"
	.string "Antidotes before a shift, because the\l"
	.string "Spinarak in these woods don't mess\l"
	.string "around.$"

Mistcity_Mart_Hiker_Text_0:
# 38 "data/maps/Mistcity_Mart/scripts.pory"
	.string "I'm trying to find a backpack that is\n"
	.string "actually waterproof, because the mist\l"
	.string "here manages to soak through\l"
	.string "everything I own.$"
