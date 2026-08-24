Indoor_Maasje_Home1_MapScripts::
	.byte 0


Indoor_Maasje_Home1_Convo::
	lock
	faceplayer
	msgbox Indoor_Maasje_Home1_Convo_Text_0
	waitmessage
	release
	return


Indoor_Maasje_Home1_Kid::
	lock
	faceplayer
	msgbox Indoor_Maasje_Home1_Kid_Text_0
	waitmessage
	release
	return


Indoor_Maasje_Home1_Convo_Text_0:
	.string "I might not look like it, but I used to\n"
	.string "sail the world.\p"
	.string "Crossing the seven seas I saw many\n"
	.string "different species of pokemon.\p"
	.string "One time, after a long time on sea, me\n"
	.string "and my crew came across an island which\l"
	.string "was covered in a thick fog.\p"
	.string "We only saw it for a brief moment, but\n"
	.string "I'm sure it was not a halucination.$"

Indoor_Maasje_Home1_Kid_Text_0:
	.string "Grandma is getting more forgetfull\n"
	.string "everyday.\p"
	.string "Although sometimes, she seems to have\n"
	.string "a clear moment.$"
