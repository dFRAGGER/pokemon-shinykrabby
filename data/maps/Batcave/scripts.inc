Batcave_MapScripts::
	.byte 0


Batcave_rockfall_Contracter::
# 4 "data/maps/Batcave/scripts.pory"
	lock
# 5 "data/maps/Batcave/scripts.pory"
	faceplayer
# 6 "data/maps/Batcave/scripts.pory"
	msgbox Batcave_rockfall_Contracter_Text_0
# 7 "data/maps/Batcave/scripts.pory"
	waitmessage
# 8 "data/maps/Batcave/scripts.pory"
	release
	end


Batcave_rockfall_Machoke::
# 13 "data/maps/Batcave/scripts.pory"
	lock
# 14 "data/maps/Batcave/scripts.pory"
	faceplayer
# 15 "data/maps/Batcave/scripts.pory"
	playmoncry SPECIES_MACHOKE, CRY_MODE_ENCOUNTER
# 16 "data/maps/Batcave/scripts.pory"
	msgbox Batcave_rockfall_Machoke_Text_0, MSGBOX_AUTOCLOSE
# 17 "data/maps/Batcave/scripts.pory"
	waitmessage
# 18 "data/maps/Batcave/scripts.pory"
	release
	end


Batcave_rockfall_Contracter_Text_0:
# 6 "data/maps/Batcave/scripts.pory"
	.string "Man... I really should have brought a\n"
	.string "Pokémon that knows Flash.\p"
	.string "Watch your step, kid! My Machoke is\n"
	.string "tossing boulders around in the dark.\p"
	.string "This rockslide came out of nowhere, and\n"
	.string "it is pretty much impossible to see what\l"
	.string "we are doing down here.\p"
	.string "It is going to take another couple of\n"
	.string "hours to clear the debris.\p"
	.string "Come back in a bit if you are trying to\n"
	.string "get to Siltroot Town.$"

Batcave_rockfall_Machoke_Text_0:
# 16 "data/maps/Batcave/scripts.pory"
	.string "MA.. CHOKE!\n"
	.string "MACHOKE!$"
