Route01_Forest_MapScripts::
	.byte 0


Route01_Forest_Sign::
	lock
	msgbox Route01_Forest_Sign_Text_0, MSGBOX_AUTOCLOSE
	release
	return


Route01_Forest_Sign_Text_0:
	.string "WARNING!\n"
	.string "Dangerous Pokémon with horns spotted\l"
	.string "here recently.$"
