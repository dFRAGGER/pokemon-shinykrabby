Marshduke_Indoor_Tower1_1F_MapScripts::
	.byte 0


Marshduke_Indoor_Tower1_1F_Steward::
	lock
	faceplayer
	checktrainerflag TRAINER_TOWER1_EDWIN_SK
	goto_if 1, Marshduke_Indoor_Tower1_1F_Steward_2
	msgbox Marshduke_Indoor_Tower1_1F_Steward_Text_1, MSGBOX_AUTOCLOSE
Marshduke_Indoor_Tower1_1F_Steward_1:
	release
	end

Marshduke_Indoor_Tower1_1F_Steward_2:
	msgbox Marshduke_Indoor_Tower1_1F_Steward_Text_0, MSGBOX_AUTOCLOSE
	goto Marshduke_Indoor_Tower1_1F_Steward_1


Marshduke_Indoor_Tower1_1F_Pilgrim::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Tower1_1F_Pilgrim_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Marshduke_Indoor_Tower1_1F_Visitor::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Tower1_1F_Visitor_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Marshduke_Indoor_Tower1_1F_Steward_Text_0:
	.string "You beat all three keepers? Wow. Edwin\n"
	.string "doesn't lose very often.\p"
	.string "Did he show you the view? He shows\n"
	.string "everyone the view.$"

Marshduke_Indoor_Tower1_1F_Steward_Text_1:
	.string "Welcome to the Tower of the Balanced\n"
	.string "Sky!\p"
	.string "The Order built a tower for four of the\n"
	.string "Rememberer's visions. This one is for\l"
	.string "Lugia. The best one, if you ask me.\p"
	.string "The keepers are upstairs. You'll face\n"
	.string "three of them in a row, without a break\l"
	.string "to heal.\p"
	.string "So if your Pokémon need a rest, now's\n"
	.string "the time.$"

Marshduke_Indoor_Tower1_1F_Pilgrim_Text_0:
	.string "Have you seen the Lugia vision? It's\n"
	.string "the best one. It's not even close.\p"
	.string "The moment Lugia spreads its wings and\n"
	.string "the storm just stops... I get\l"
	.string "goosebumps every time.$"

Marshduke_Indoor_Tower1_1F_Visitor_Text_0:
	.string "I made it past the first keeper once.\n"
	.string "His Pidgeotto blew my hat right off the\l"
	.string "tower.\p"
	.string "The second one? Let's not talk about\n"
	.string "the second one.$"
