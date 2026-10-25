Marshduke_Indoor_Cathedral_Garden_Gatehouse_MapScripts::
	.byte 0


Marshduke_Indoor_Cathedral_Garden_Gatehouse_EventScript_GardenVisitor::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Cathedral_Garden_Gatehouse_EventScript_GardenVisitor_Text_0
	waitmessage
	release
	end


Marshduke_Indoor_Cathedral_Garden_Gatehouse_EventScript_GardenVisitor_Text_0:
	.string "Oh, are you heading into the botanical\n"
	.string "garden too?\p"
	.string "I come here every week. They used to\n"
	.string "grow plants from all over TESSERA in\l"
	.string "there, and even a few from overseas.\p"
	.string "But over the last couple of years,\n"
	.string "things have changed.\p"
	.string "I think it's because there are fewer\n"
	.string "pollinators around these days.\p"
	.string "The old gardener used a lot of\n"
	.string "pesticides, but the new one is trying a\l"
	.string "different approach.\p"
	.string "They're planting more native species,\n"
	.string "hoping to bring the pollinators back.\p"
	.string "I really hope it works out.$"
