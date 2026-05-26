SiltrootTown_Indoor_Healer_MapScripts::
	.byte 0


SiltrootTown_Indoor_2F_Sailor::
# 4 "data/maps/SiltrootTown_Indoor_Healer/scripts.pory"
	lock
# 5 "data/maps/SiltrootTown_Indoor_Healer/scripts.pory"
	faceplayer
# 6 "data/maps/SiltrootTown_Indoor_Healer/scripts.pory"
	msgbox SiltrootTown_Indoor_2F_Sailor_Text_0, MSGBOX_AUTOCLOSE
# 7 "data/maps/SiltrootTown_Indoor_Healer/scripts.pory"
	waitmessage
# 8 "data/maps/SiltrootTown_Indoor_Healer/scripts.pory"
	release
	end


SiltrootTown_Indoor_2F_Nurse::
# 13 "data/maps/SiltrootTown_Indoor_Healer/scripts.pory"
	lock
# 14 "data/maps/SiltrootTown_Indoor_Healer/scripts.pory"
	faceplayer
# 15 "data/maps/SiltrootTown_Indoor_Healer/scripts.pory"
	msgbox SiltrootTown_Indoor_2F_Nurse_Text_0, MSGBOX_AUTOCLOSE
# 16 "data/maps/SiltrootTown_Indoor_Healer/scripts.pory"
	waitmessage
# 17 "data/maps/SiltrootTown_Indoor_Healer/scripts.pory"
	release
	end


SiltrootTown_Indoor_2F_Sailor_Text_0:
# 6 "data/maps/SiltrootTown_Indoor_Healer/scripts.pory"
	.string "Ten years ago, you couldn't find a\n"
	.string "single empty bed here because the\l"
	.string "fishing was so good.\p"
	.string "Now, with the ecosystem collapsing, the\n"
	.string "silence in this dormitory is louder than\l"
	.string "the storms outside.$"

SiltrootTown_Indoor_2F_Nurse_Text_0:
# 15 "data/maps/SiltrootTown_Indoor_Healer/scripts.pory"
	.string "I ensure these sheets are crisp and\n"
	.string "fresh every single day, no matter what.\p"
	.string "It is getting harder to keep this floor\n"
	.string "open, though... the funding just isn't\l"
	.string "what it used to be.$"
