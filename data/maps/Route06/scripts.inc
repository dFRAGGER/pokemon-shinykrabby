Route06_MapScripts::
	.byte 0


Route06_Sign_EndofBeta::
	lock
	msgbox Route06_Sign_EndofBeta_Text_0
	waitmessage
	release
	return


Route06_Sign_EndofBeta_Text_0:
	.string "This is the end of the beta test.\p"
	.string "Thank you for playing!\p"
	.string "Please report any bugs you find to the\n"
	.string "developer.$"
