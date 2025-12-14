Route04_MapScripts::
	.byte 0


Route04_Sign_DarkCave::
# 4 "data/maps/Route04/scripts.pory"
	lock
# 5 "data/maps/Route04/scripts.pory"
	msgbox Route04_Sign_DarkCave_Text_0
# 6 "data/maps/Route04/scripts.pory"
	waitmessage
# 7 "data/maps/Route04/scripts.pory"
	release
	return


Route04_Sign_DarkCave_Text_0:
# 5 "data/maps/Route04/scripts.pory"
	.string "Bat Cave\n"
	.string "Caution: Heavy Bat Population.$"
