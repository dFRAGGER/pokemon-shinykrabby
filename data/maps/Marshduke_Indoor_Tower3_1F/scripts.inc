Marshduke_Indoor_Tower3_1F_MapScripts::
	.byte 0


Marshduke_Indoor_Tower3_1F_Steward::
	lock
	faceplayer
	checktrainerflag TRAINER_TOWER3_ARTHUR_SK
	goto_if 1, Marshduke_Indoor_Tower3_1F_Steward_2
	msgbox Marshduke_Indoor_Tower3_1F_Steward_Text_1, MSGBOX_AUTOCLOSE
Marshduke_Indoor_Tower3_1F_Steward_1:
	release
	end

Marshduke_Indoor_Tower3_1F_Steward_2:
	msgbox Marshduke_Indoor_Tower3_1F_Steward_Text_0, MSGBOX_AUTOCLOSE
	goto Marshduke_Indoor_Tower3_1F_Steward_1


Marshduke_Indoor_Tower3_1F_Pilgrim::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Tower3_1F_Pilgrim_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Marshduke_Indoor_Tower3_1F_Visitor::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Tower3_1F_Visitor_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Marshduke_Indoor_Tower3_1F_Steward_Text_0:
	.string "You beat Arthur? Then you've earned\n"
	.string "the right to say it. Three legends beat\l"
	.string "one bird!$"

Marshduke_Indoor_Tower3_1F_Steward_Text_1:
	.string "Welcome to the Tower of the Divided\n"
	.string "World!\p"
	.string "This tower is for Groudon, Kyogre and\n"
	.string "Rayquaza. Three legends in one vision.\l"
	.string "No other tower can say that.\p"
	.string "The keepers are upstairs. You'll face\n"
	.string "three of them in a row, without a break\l"
	.string "to heal.\p"
	.string "So if your Pokémon need a rest, now's\n"
	.string "the time.$"

Marshduke_Indoor_Tower3_1F_Pilgrim_Text_0:
	.string "Ms. Stone says Rayquaza brought\n"
	.string "balance. Brother Andre says it just won\l"
	.string "the fight.\p"
	.string "Honestly, I don't care who's right.\n"
	.string "Rayquaza coming down out of the clouds\l"
	.string "is the coolest thing I've ever seen.$"

Marshduke_Indoor_Tower3_1F_Visitor_Text_0:
	.string "I used to bring my fishing rod up here,\n"
	.string "just in case Kyogre showed up.\p"
	.string "It never did. I still bring the rod,\n"
	.string "though.$"
