Marshduke_Indoor_Tower1_3F_MapScripts::
	.byte 0


Marshduke_Indoor_Tower1_3F_SkyKeeper::
	lock
	faceplayer
	goto_if_unset FLAG_ITEM_MARSHDUKE_TOWER1_REWARD, Marshduke_Indoor_Tower1_3F_SkyKeeper_2
	msgbox Marshduke_Indoor_Tower1_3F_SkyKeeper_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
Marshduke_Indoor_Tower1_3F_SkyKeeper_1:
	release
	end

Marshduke_Indoor_Tower1_3F_SkyKeeper_2:
	msgbox Marshduke_Indoor_Tower1_3F_SkyKeeper_Text_0
	waitmessage
	giveitem ITEM_TM_ROOST
	waitmessage
	setflag FLAG_ITEM_MARSHDUKE_TOWER1_REWARD
	goto Marshduke_Indoor_Tower1_3F_SkyKeeper_1


Marshduke_Indoor_Tower1_3F_Sign_Window::
	msgbox Marshduke_Indoor_Tower1_3F_Sign_Window_Text_0, MSGBOX_SIGN
	end


Marshduke_Indoor_Tower1_3F_Robin::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Tower1_3F_Robin_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Marshduke_Indoor_Tower1_3F_Owen::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Tower1_3F_Owen_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Marshduke_Indoor_Tower1_3F_SkyKeeper_Text_0:
	.string "Ah, there you are. Not many pilgrims\n"
	.string "make it up here.\p"
	.string "Some people say the Two Hearts vision\n"
	.string "is the most important one. Or the\l"
	.string "Groudon one.\p"
	.string "They're wrong, of course. Lugia doesn't\n"
	.string "fight anybody. It just brings the sky\l"
	.string "back into balance. That's real strength.\p"
	.string "Here, you've earned this. Even the\n"
	.string "strongest flyer needs to land and rest\l"
	.string "sometimes.$"

Marshduke_Indoor_Tower1_3F_SkyKeeper_Text_1:
	.string "I come up here every morning to look at\n"
	.string "the sky. It's a lot quieter than in the\l"
	.string "vision.\p"
	.string "But Lugia is still out there somewhere.\n"
	.string "I'm sure of it.$"

Marshduke_Indoor_Tower1_3F_Sign_Window_Text_0:
	.string "You can see the whole city from up here.\p"
	.string "A Pidgey is sitting on the rooftop\n"
	.string "across the street.$"

Marshduke_Indoor_Tower1_3F_Robin_Text_0:
	.string "You won! My Pidgeotto is still sulking\n"
	.string "about it.\p"
	.string "Hey, which vision do you like best? It's\n"
	.string "Lugia, right? Say it's Lugia.$"

Marshduke_Indoor_Tower1_3F_Owen_Text_0:
	.string "I watched the Lugia vision again this\n"
	.string "morning. That makes forty-three.\p"
	.string "There are so many birds flying behind\n"
	.string "Lugia in that vision. I've never managed\l"
	.string "to count them all.$"
