Route06_MapScripts::
	.byte 0


Route06_Sign_EndofBeta::
# 4 "data/maps/Route06/scripts.pory"
	lock
# 5 "data/maps/Route06/scripts.pory"
	msgbox Route06_Sign_EndofBeta_Text_0
# 6 "data/maps/Route06/scripts.pory"
	waitmessage
# 7 "data/maps/Route06/scripts.pory"
	release
	return


Route06_Sign_EndofBeta_Text_0:
# 5 "data/maps/Route06/scripts.pory"
	.string "This is the end of the beta test.\p"
	.string "Thank you for playing!\p"
	.string "Please report any bugs you find to the\n"
	.string "developer.$"
