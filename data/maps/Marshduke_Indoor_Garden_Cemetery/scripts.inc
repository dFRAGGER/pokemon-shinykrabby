Marshduke_Indoor_Garden_Cemetery_MapScripts::
	.byte 0


Marshduke_Indoor_Garden_Cemetery_Trainer_Selma::
	trainerbattle_single TRAINER_DELTA_SELMA_SK, Marshduke_Indoor_Garden_Cemetery_Trainer_Selma_Intro, Marshduke_Indoor_Garden_Cemetery_Trainer_Selma_Defeat
	msgbox Marshduke_Indoor_Garden_Cemetery_Trainer_Selma_After, MSGBOX_AUTOCLOSE
	end


Marshduke_Indoor_Garden_Cemetery_Trainer_Mara::
	trainerbattle_single TRAINER_DELTA_MARA_SK, Marshduke_Indoor_Garden_Cemetery_Trainer_Mara_Intro, Marshduke_Indoor_Garden_Cemetery_Trainer_Mara_Defeat
	msgbox Marshduke_Indoor_Garden_Cemetery_Trainer_Mara_After, MSGBOX_AUTOCLOSE
	end


Marshduke_Indoor_Garden_Cemetery_NPC_PlantKeeper::
	lock
	faceplayer
	goto_if_set FLAG_MARSHDUKE_CATHEDRAL_TOUR, Marshduke_Indoor_Garden_Cemetery_NPC_PlantKeeper_2
	msgbox Marshduke_Indoor_Garden_Cemetery_NPC_PlantKeeper_Text_1
Marshduke_Indoor_Garden_Cemetery_NPC_PlantKeeper_1:
	release
	end

Marshduke_Indoor_Garden_Cemetery_NPC_PlantKeeper_2:
	msgbox Marshduke_Indoor_Garden_Cemetery_NPC_PlantKeeper_Text_0
	goto Marshduke_Indoor_Garden_Cemetery_NPC_PlantKeeper_1


Marshduke_Indoor_Garden_Cemetery_NPC_BouquetVisitor::
	lock
	faceplayer
	msgbox Marshduke_Indoor_Garden_Cemetery_NPC_BouquetVisitor_Text_0
	release
	end


Marshduke_Indoor_Garden_Cemetery_NPC_PlantKeeper_Text_0:
	.string "Back again? I remembered another one. A\n"
	.string "blue flower, no bigger than your\l"
	.string "thumbnail, beside the old ditch.\p"
	.string "People keep asking me about the grand\n"
	.string "visions. I'd be pleased just to find\l"
	.string "that little flower again.$"

Marshduke_Indoor_Garden_Cemetery_NPC_PlantKeeper_Text_1:
	.string "Oh, stand still. There's a little fern\n"
	.string "beside your shoe.\p"
	.string "I used to see those all along the river.\n"
	.string "And a white flower that shut before\l"
	.string "rain. Haven't seen that one in years.\p"
	.string "Names on the stones? You'll have to\n"
	.string "lean closer. My eyes mostly find the\l"
	.string "leaves these days.$"

Marshduke_Indoor_Garden_Cemetery_NPC_BouquetVisitor_Text_0:
	.string "I bring the flowers my partner liked.\n"
	.string "The plant keeper tells me their names\l"
	.string "every visit.\p"
	.string "Sometimes I already know. I let him tell\n"
	.string "me anyway.$"

Marshduke_Indoor_Garden_Cemetery_Trainer_Selma_Intro::
	.string "Will you keep my GASTLY company?$"

Marshduke_Indoor_Garden_Cemetery_Trainer_Selma_Defeat::
	.string "That cheered us up!$"

Marshduke_Indoor_Garden_Cemetery_Trainer_Selma_After::
	.string "GASTLY scares off most visitors before\n"
	.string "I can introduce myself. I'm glad you\l"
	.string "stayed.$"

Marshduke_Indoor_Garden_Cemetery_Trainer_Mara_Intro::
	.string "We can battle if you're careful around\n"
	.string "the flowers!$"

Marshduke_Indoor_Garden_Cemetery_Trainer_Mara_Defeat::
	.string "You nearly flattened my bouquet!$"

Marshduke_Indoor_Garden_Cemetery_Trainer_Mara_After::
	.string "MURKROW keeps pinching ribbon off the\n"
	.string "bouquets. If you see any in its beak,\l"
	.string "that's mine to put back.$"
