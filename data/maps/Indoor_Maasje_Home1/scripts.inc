Indoor_Maasje_Home1_MapScripts::
	.byte 0


Indoor_Maasje_Home1_Convo::
# 4 "data/maps/Indoor_Maasje_Home1/scripts.pory"
	lock
# 5 "data/maps/Indoor_Maasje_Home1/scripts.pory"
	faceplayer
# 6 "data/maps/Indoor_Maasje_Home1/scripts.pory"
	msgbox Indoor_Maasje_Home1_Convo_Text_0
# 7 "data/maps/Indoor_Maasje_Home1/scripts.pory"
	waitmessage
# 8 "data/maps/Indoor_Maasje_Home1/scripts.pory"
	release
	return


Indoor_Maasje_Home1_Kid::
# 12 "data/maps/Indoor_Maasje_Home1/scripts.pory"
	lock
# 13 "data/maps/Indoor_Maasje_Home1/scripts.pory"
	faceplayer
# 14 "data/maps/Indoor_Maasje_Home1/scripts.pory"
	msgbox Indoor_Maasje_Home1_Kid_Text_0
# 15 "data/maps/Indoor_Maasje_Home1/scripts.pory"
	waitmessage
# 16 "data/maps/Indoor_Maasje_Home1/scripts.pory"
	release
	return


Indoor_Maasje_Home1_Convo_Text_0:
# 6 "data/maps/Indoor_Maasje_Home1/scripts.pory"
	.string "{COLOR RED}Old woman: {COLOR DARK_GRAY}I might not look like it, but\n"
	.string "I used to sail the world.\p"
	.string "Crossing the seven seas I saw many\n"
	.string "different species of pokemon.\p"
	.string "One time, after a long time on sea, me\n"
	.string "and my crew came across an island which\l"
	.string "was covered in a thick fog.\p"
	.string "We only saw it for a brief moment, but\n"
	.string "I'm sure it was not a halucination.$"

Indoor_Maasje_Home1_Kid_Text_0:
# 14 "data/maps/Indoor_Maasje_Home1/scripts.pory"
	.string "{COLOR RED}Little child: {COLOR DARK_GRAY}Grandma is getting more\n"
	.string "forgetfull everyday.\p"
	.string "Although sometimes, she seems to have\n"
	.string "a clear moment.$"
