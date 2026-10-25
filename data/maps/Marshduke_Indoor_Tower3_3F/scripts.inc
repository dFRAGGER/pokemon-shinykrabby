Marshduke_Indoor_Tower3_3F_MapScripts::
	.byte 0


Marshduke_Indoor_Tower3_3F_Arthur::
	lock
	faceplayer
	goto_if_unset FLAG_ITEM_MARSHDUKE_TOWER3_REWARD, Marshduke_Indoor_Tower3_3F_Arthur_2
	msgbox Marshduke_Indoor_Tower3_3F_Arthur_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
Marshduke_Indoor_Tower3_3F_Arthur_1:
	release
	end

Marshduke_Indoor_Tower3_3F_Arthur_2:
	msgbox Marshduke_Indoor_Tower3_3F_Arthur_Text_0
	waitmessage
	giveitem ITEM_TM_DRAGON_PULSE
	waitmessage
	setflag FLAG_ITEM_MARSHDUKE_TOWER3_REWARD
	goto Marshduke_Indoor_Tower3_3F_Arthur_1


Marshduke_Indoor_Tower3_3F_Sign_Window::
	msgbox Marshduke_Indoor_Tower3_3F_Sign_Window_Text_0, MSGBOX_SIGN
	end


Marshduke_Indoor_Tower3_3F_Harold::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Tower3_3F_Harold_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Marshduke_Indoor_Tower3_3F_Finn::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Tower3_3F_Finn_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Marshduke_Indoor_Tower3_3F_Arthur_Text_0:
	.string "You made it! Harold owes me lunch. He\n"
	.string "bet you'd lose to Finn.\p"
	.string "The Lugia tower calms the sky. The\n"
	.string "Ho-Oh tower brings things back to life.\l"
	.string "Fine.\p"
	.string "But our vision has three legends at\n"
	.string "once. Three! It's not even a contest.\p"
	.string "Here, take this. It's the closest you'll\n"
	.string "get to Rayquaza's roar.$"

Marshduke_Indoor_Tower3_3F_Arthur_Text_1:
	.string "When the land and sea crash together in\n"
	.string "the vision, the whole beach is covered\l"
	.string "in Krabby running for cover.\p"
	.string "I laugh every time. Poor little things.$"

Marshduke_Indoor_Tower3_3F_Sign_Window_Text_0:
	.string "You can see where the delta meets the\n"
	.string "sea.\p"
	.string "A single Krabby is scuttling along the\n"
	.string "beach.$"

Marshduke_Indoor_Tower3_3F_Harold_Text_0:
	.string "Good battle! My Phanpy wants a rematch,\n"
	.string "but it's napping.\p"
	.string "Did you know Groudon's footprint in the\n"
	.string "vision is bigger than this whole tower?\l"
	.string "I measured it. Sort of.$"

Marshduke_Indoor_Tower3_3F_Finn_Text_0:
	.string "Kyogre. Best. Legend. That's all I've got\n"
	.string "to say.\p"
	.string "...Okay, Rayquaza is pretty cool too.\n"
	.string "Don't tell Arthur.$"
