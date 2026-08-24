MarshDukeCity_MapScripts::
	.byte 0


Marshduke_Library_Sign::
	lock
	msgbox Marshduke_Library_Sign_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Library_Sign_Text_0:
	.string "- Marshduke Library -\n"
	.string "WE WRITE TO REMEMBER FOR OURSELVES.$"
