Marshduke_Indoor_Tower4_3F_MapScripts::
	.byte 0


Marshduke_Indoor_Tower4_3F_Al::
	lock
	faceplayer
	goto_if_unset FLAG_ITEM_MARSHDUKE_TOWER4_REWARD, Marshduke_Indoor_Tower4_3F_Al_2
	msgbox Marshduke_Indoor_Tower4_3F_Al_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
Marshduke_Indoor_Tower4_3F_Al_1:
	release
	end

Marshduke_Indoor_Tower4_3F_Al_2:
	msgbox Marshduke_Indoor_Tower4_3F_Al_Text_0
	waitmessage
	giveitem ITEM_SOOTHE_BELL
	waitmessage
	setflag FLAG_ITEM_MARSHDUKE_TOWER4_REWARD
	goto Marshduke_Indoor_Tower4_3F_Al_1


Marshduke_Indoor_Tower4_3F_Edith::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Tower4_3F_Edith_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Marshduke_Indoor_Tower4_3F_Sign_Window::
	msgbox Marshduke_Indoor_Tower4_3F_Sign_Window_Text_0, MSGBOX_SIGN
	end


Marshduke_Indoor_Tower4_3F_Twins::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Tower4_3F_Twins_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Marshduke_Indoor_Tower4_3F_Tom::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Tower4_3F_Tom_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Marshduke_Indoor_Tower4_3F_Anna::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Tower4_3F_Anna_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Marshduke_Indoor_Tower4_3F_Al_Text_0:
	.string "There you are! Edith wanted to make you\n"
	.string "tea, but I told her you'd be busy.\p"
	.string "The other towers keep fighting about\n"
	.string "which vision is the most important.\p"
	.string "But every one of those legends had\n"
	.string "someone to care about. That's what our\l"
	.string "vision is about. So really, we win.\p"
	.string "Here, take this. Give it to a Pokémon\n"
	.string "you're close to.$"

Marshduke_Indoor_Tower4_3F_Al_Text_1:
	.string "We still walk along the dike every\n"
	.string "evening, just like when we were young.\p"
	.string "The Nidoran used to come out to say\n"
	.string "hello. They're a bit shy these days.$"

Marshduke_Indoor_Tower4_3F_Edith_Text_0:
	.string "Don't let Al tell you he's won fifty\n"
	.string "years of arguments.\p"
	.string "He's won about three. I let him have\n"
	.string "those.$"

Marshduke_Indoor_Tower4_3F_Sign_Window_Text_0:
	.string "You can see the dike running along the\n"
	.string "fields.\p"
	.string "Two Pidgey are sitting side by side on a\n"
	.string "fence.$"

Marshduke_Indoor_Tower4_3F_Twins_Text_0:
	.string "LIA: Latias is my favorite!\p"
	.string "ROSE: Latios is MY favorite!\p"
	.string "LIA: We've been arguing about this\n"
	.string "since we were five.$"

Marshduke_Indoor_Tower4_3F_Tom_Text_0:
	.string "Anna and I come here every Sunday to\n"
	.string "watch the vision.\p"
	.string "We always sit in the same spot. Third\n"
	.string "row, left side. Best view in the\l"
	.string "cathedral.$"

Marshduke_Indoor_Tower4_3F_Anna_Text_0:
	.string "Don't tell Tom, but I peeked at the\n"
	.string "Ho-Oh vision once.\p"
	.string "It was nice. Not as nice as ours, though.$"
