Route04_CenterCave_MapScripts::
	.byte 0


Route04_CenterCave_Geologist::
# 4 "data/maps/Route04_CenterCave/scripts.pory"
	lock
# 5 "data/maps/Route04_CenterCave/scripts.pory"
	faceplayer
# 6 "data/maps/Route04_CenterCave/scripts.pory"
	msgbox Route04_CenterCave_Geologist_Text_0, MSGBOX_AUTOCLOSE
# 7 "data/maps/Route04_CenterCave/scripts.pory"
	waitmessage
# 8 "data/maps/Route04_CenterCave/scripts.pory"
	release
	end


Route04_CenterCave_Geologist_Text_0:
# 6 "data/maps/Route04_CenterCave/scripts.pory"
	.string "The dark blue shade of this water\n"
	.string "indicates a massive vertical drop right\l"
	.string "here.\p"
	.string "I wouldn't try swimming without heavy\n"
	.string "equipment unless you have a death wish.$"
