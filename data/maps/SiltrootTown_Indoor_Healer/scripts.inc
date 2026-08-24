SiltrootTown_Indoor_Healer_MapScripts::
	.byte 0


SiltrootTown_Indoor_2F_Sailor::
	lock
	faceplayer
	msgbox SiltrootTown_Indoor_2F_Sailor_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


SiltrootTown_Indoor_2F_Nurse::
	lock
	faceplayer
	msgbox SiltrootTown_Indoor_2F_Nurse_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


SiltrootTown_Indoor_2F_Sailor_Text_0:
	.string "Ten years ago, you couldn't find a\n"
	.string "single empty bed here because the\l"
	.string "fishing was so good.\p"
	.string "Now, with the ecosystem collapsing, the\n"
	.string "silence in this dormitory is louder than\l"
	.string "the storms outside.$"

SiltrootTown_Indoor_2F_Nurse_Text_0:
	.string "I ensure these sheets are crisp and\n"
	.string "fresh every single day, no matter what.\p"
	.string "It is getting harder to keep this floor\n"
	.string "open, though... the funding just isn't\l"
	.string "what it used to be.$"
