Route04_CenterCave_MapScripts::
	.byte 0


Route04_CenterCave_Geologist::
	lock
	faceplayer
	msgbox Route04_CenterCave_Geologist_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Route04_CenterCave_Geologist_Text_0:
	.string "The dark blue shade of this water\n"
	.string "indicates a massive vertical drop right\l"
	.string "here.\p"
	.string "I wouldn't try swimming without heavy\n"
	.string "equipment unless you have a death wish.$"
