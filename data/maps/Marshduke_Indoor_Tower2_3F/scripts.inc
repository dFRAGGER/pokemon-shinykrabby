Marshduke_Indoor_Tower2_3F_MapScripts::
	.byte 0


Marshduke_Indoor_Tower2_3F_Clara::
	lock
	faceplayer
	goto_if_unset FLAG_ITEM_MARSHDUKE_TOWER2_REWARD, Marshduke_Indoor_Tower2_3F_Clara_2
	msgbox Marshduke_Indoor_Tower2_3F_Clara_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
Marshduke_Indoor_Tower2_3F_Clara_1:
	release
	end

Marshduke_Indoor_Tower2_3F_Clara_2:
	msgbox Marshduke_Indoor_Tower2_3F_Clara_Text_0
	waitmessage
	giveitem ITEM_TM_WILL_O_WISP
	waitmessage
	setflag FLAG_ITEM_MARSHDUKE_TOWER2_REWARD
	goto Marshduke_Indoor_Tower2_3F_Clara_1


Marshduke_Indoor_Tower2_3F_Sign_Window::
	msgbox Marshduke_Indoor_Tower2_3F_Sign_Window_Text_0, MSGBOX_SIGN
	end


Marshduke_Indoor_Tower2_3F_Oscar::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Tower2_3F_Oscar_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Marshduke_Indoor_Tower2_3F_Gordon::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Tower2_3F_Gordon_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Marshduke_Indoor_Tower2_3F_Clara_Text_0:
	.string "You made it! Not many get past Gordon.\n"
	.string "He's annoyingly well prepared.\p"
	.string "The Lugia people say their vision is\n"
	.string "about balance. Ours is about getting a\l"
	.string "second chance, and doing something\l"
	.string "with it.\p"
	.string "That's why the Rekindled is the most\n"
	.string "important memory. Don't tell Edwin I\l"
	.string "said that.\p"
	.string "Here, take this. Use it wisely.$"

Marshduke_Indoor_Tower2_3F_Clara_Text_1:
	.string "In the vision, Suicune runs across the\n"
	.string "river and you can see straight down to\l"
	.string "the bottom.\p"
	.string "Every time, I want to jump in after it.$"

Marshduke_Indoor_Tower2_3F_Sign_Window_Text_0:
	.string "You can see the river winding through\n"
	.string "the city.\p"
	.string "The water is a muddy brown today.$"

Marshduke_Indoor_Tower2_3F_Oscar_Text_0:
	.string "You won! That was awesome!\p"
	.string "I'm going to watch the Entei part of the\n"
	.string "vision again tonight. You should come!\l"
	.string "...Oh, wait. Keepers only. Sorry.$"

Marshduke_Indoor_Tower2_3F_Gordon_Text_0:
	.string "I keep a notebook on every vision. The\n"
	.string "Rekindled one has the most pages,\l"
	.string "obviously.\p"
	.string "The Two Hearts people tried to borrow\n"
	.string "it once. I said no.$"
