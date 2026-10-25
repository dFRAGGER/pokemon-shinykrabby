Marshduke_Indoor_Tower2_1F_MapScripts::
	.byte 0


Marshduke_Indoor_Tower2_1F_Steward::
	lock
	faceplayer
	checktrainerflag TRAINER_TOWER2_CLARA_SK
	goto_if 1, Marshduke_Indoor_Tower2_1F_Steward_2
	msgbox Marshduke_Indoor_Tower2_1F_Steward_Text_1, MSGBOX_AUTOCLOSE
Marshduke_Indoor_Tower2_1F_Steward_1:
	release
	end

Marshduke_Indoor_Tower2_1F_Steward_2:
	msgbox Marshduke_Indoor_Tower2_1F_Steward_Text_0, MSGBOX_AUTOCLOSE
	goto Marshduke_Indoor_Tower2_1F_Steward_1


Marshduke_Indoor_Tower2_1F_Pilgrim::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Tower2_1F_Pilgrim_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Marshduke_Indoor_Tower2_1F_Visitor::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Tower2_1F_Visitor_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Marshduke_Indoor_Tower2_1F_Steward_Text_0:
	.string "You beat Clara? Then you have to admit\n"
	.string "it. Ho-Oh beats Lugia, any day.$"

Marshduke_Indoor_Tower2_1F_Steward_Text_1:
	.string "Welcome to the Tower of the Rekindled!\p"
	.string "This tower is for Ho-Oh and the three\n"
	.string "Pokémon it brought back to life. Easily\l"
	.string "the most beautiful vision in the\l"
	.string "cathedral.\p"
	.string "The keepers are upstairs. You'll face\n"
	.string "three of them in a row, without a break\l"
	.string "to heal.\p"
	.string "So if your Pokémon need a rest, now's\n"
	.string "the time.$"

Marshduke_Indoor_Tower2_1F_Pilgrim_Text_0:
	.string "When Ho-Oh flies over the burning tower\n"
	.string "in the vision, the whole cathedral turns\l"
	.string "gold.\p"
	.string "I've cried every single time. My friends\n"
	.string "have stopped coming with me.$"

Marshduke_Indoor_Tower2_1F_Visitor_Text_0:
	.string "I lasted two rounds against the\n"
	.string "firebreather once.\p"
	.string "My eyebrows are still growing back.$"
