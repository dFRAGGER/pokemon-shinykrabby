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


BatCave_Trainer_Jeffry::
# 23 "data/maps/Batcave/scripts.pory"
	trainerbattle_single TRAINER_JEFFRY, BatCave_Text_JeffryIntro, BatCave_Text_JeffryDefeated
# 24 "data/maps/Batcave/scripts.pory"
	msgbox BatCave_Text_JeffryPostBattle, MSGBOX_AUTOCLOSE
	end


BatCave_Trainer_Wilfred::
# 41 "data/maps/Batcave/scripts.pory"
	trainerbattle_single TRAINER_WILFRED, BatCave_Text_WilfredIntro, BatCave_Text_WilfredDefeated
# 42 "data/maps/Batcave/scripts.pory"
	msgbox BatCave_Text_WilfredPostBattle, MSGBOX_AUTOCLOSE
	end


Batcave_Scientist_Convo::
# 59 "data/maps/Batcave/scripts.pory"
	lock
# 60 "data/maps/Batcave/scripts.pory"
	faceplayer
# 61 "data/maps/Batcave/scripts.pory"
	msgbox Batcave_Scientist_Convo_Text_0
# 62 "data/maps/Batcave/scripts.pory"
	waitmessage
# 63 "data/maps/Batcave/scripts.pory"
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

Batcave_Scientist_Convo_Text_0:
# 61 "data/maps/Batcave/scripts.pory"
	.string "Remarkable... without any light source,\n"
	.string "these Dunsparce navigate solely by\l"
	.string "sensing subtle air currents.\p"
	.string "Please keep your flashlight down, you\n"
	.string "are ruining my control variables!$"

BatCave_Text_JeffryIntro::
# 28 "data/maps/Batcave/scripts.pory"
	.string "Quiet! You will scare away the cave\n"
	.string "fish.$"

BatCave_Text_JeffryDefeated::
# 32 "data/maps/Batcave/scripts.pory"
	.string "You made such a splash I lost my\n"
	.string "concentration.$"

BatCave_Text_JeffryPostBattle::
# 36 "data/maps/Batcave/scripts.pory"
	.string "Fishing in the dark is an art form. You\n"
	.string "have to feel the water, not just see it.$"

BatCave_Text_WilfredIntro::
# 46 "data/maps/Batcave/scripts.pory"
	.string "My Onix loves the dark. It makes his\n"
	.string "rocky hide shine!$"

BatCave_Text_WilfredDefeated::
# 50 "data/maps/Batcave/scripts.pory"
	.string "My defenses crumbled just like loose\n"
	.string "gravel.$"

BatCave_Text_WilfredPostBattle::
# 54 "data/maps/Batcave/scripts.pory"
	.string "Hiking in caves is efficient. No need to\n"
	.string "worry about the weather when you have\l"
	.string "a roof of stone.$"
