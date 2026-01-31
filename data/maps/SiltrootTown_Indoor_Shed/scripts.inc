SiltrootTown_Indoor_Shed_MapScripts::
	.byte 0


SiltrootTown_Indoor_Shed_slowbro::
# 6 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	lockall
# 7 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	playmoncry SPECIES_SLOWBRO, CRY_MODE_ENCOUNTER
# 8 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_slowbro_Text_0, MSGBOX_AUTOCLOSE
# 9 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 10 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	fadescreen FADE_TO_BLACK
# 11 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	delay 60
# 12 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	warp MAP_SILTROOT_TOWN, 4
# 13 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitstate
# 14 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 15 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	releaseall
	end


Siltroottown_Indoor_Shed_Stash::
# 21 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	lock
# 22 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	setflag FLAG_SILTROOTTOWN_STASH_SACK
# 23 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	removeobject 1
# 24 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	giveitem ITEM_SOOT_SACK
# 25 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	release
	end


SiltrootTown_Indoor_Shed_slowbro_Text_0:
# 8 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "SLOOOWWWWW.... BRO$"
