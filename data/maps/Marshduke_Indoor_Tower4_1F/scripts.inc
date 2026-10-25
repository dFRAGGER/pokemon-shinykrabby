Marshduke_Indoor_Tower4_1F_MapScripts::
	.byte 0


Marshduke_Indoor_Tower4_1F_Steward::
	lock
	faceplayer
	checktrainerflag TRAINER_TOWER4_AL_EDITH_SK
	goto_if 1, Marshduke_Indoor_Tower4_1F_Steward_2
	msgbox Marshduke_Indoor_Tower4_1F_Steward_Text_1, MSGBOX_AUTOCLOSE
Marshduke_Indoor_Tower4_1F_Steward_1:
	release
	end

Marshduke_Indoor_Tower4_1F_Steward_2:
	msgbox Marshduke_Indoor_Tower4_1F_Steward_Text_0, MSGBOX_AUTOCLOSE
	goto Marshduke_Indoor_Tower4_1F_Steward_1


Marshduke_Indoor_Tower4_1F_Pilgrim::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Tower4_1F_Pilgrim_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Marshduke_Indoor_Tower4_1F_Visitor::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Tower4_1F_Visitor_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Marshduke_Indoor_Tower4_1F_Steward_Text_0:
	.string "You beat Al and Edith? Incredible.\n"
	.string "They've been undefeated since spring!$"

Marshduke_Indoor_Tower4_1F_Steward_Text_1:
	.string "Welcome to the Tower of the Two Hearts!\p"
	.string "This tower is for Latios and Latias. The\n"
	.string "other visions are about power. Ours is\l"
	.string "about love, and that's what matters\l"
	.string "most.\p"
	.string "The keepers upstairs always battle in\n"
	.string "pairs, so every battle is two against\l"
	.string "two.\p"
	.string "Bring at least two Pokémon that can\n"
	.string "still fight.\p"
	.string "You'll face three pairs in a row, without\n"
	.string "a break to heal.\p"
	.string "So if your Pokémon need a rest, now's\n"
	.string "the time.$"

Marshduke_Indoor_Tower4_1F_Pilgrim_Text_0:
	.string "In the vision, Latias waits for Latios\n"
	.string "at the edge of the sea. I always hold my\l"
	.string "breath at that part.\p"
	.string "The other towers can keep their storms\n"
	.string "and fire. Give me a love story.$"

Marshduke_Indoor_Tower4_1F_Visitor_Text_0:
	.string "My wife and I tried the challenge\n"
	.string "together. We lost to the twins.\p"
	.string "We're still arguing about whose fault it\n"
	.string "was. It was hers.$"
