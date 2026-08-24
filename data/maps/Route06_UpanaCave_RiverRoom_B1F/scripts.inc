Route06_UpanaCave_RiverRoom_B1F_MapScripts::
	.byte 0


UpanaCaveRiverRoom_Trainer_Wade::
	trainerbattle_single TRAINER_HIKER_WADE, UpanaCaveRiverRoom_Text_WadeIntro, UpanaCaveRiverRoom_Text_WadeDefeated
	msgbox UpanaCaveRiverRoom_Text_WadePostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCaveRiverRoom_Trainer_Warren::
	trainerbattle_single TRAINER_SCIENTIST_WARREN, UpanaCaveRiverRoom_Text_WarrenIntro, UpanaCaveRiverRoom_Text_WarrenDefeated
	msgbox UpanaCaveRiverRoom_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCaveRiverRoom_Trainer_Corin::
	trainerbattle_single TRAINER_HIKER_CORIN, UpanaCaveRiverRoom_Text_CorinIntro, UpanaCaveRiverRoom_Text_CorinDefeated
	msgbox UpanaCaveRiverRoom_Text_CorinPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCaveRiverRoom_Npc_Ranger::
	lock
	faceplayer
	msgbox UpanaCaveRiverRoom_Npc_Ranger_Text_0
	waitmessage
	msgbox UpanaCaveRiverRoom_Npc_Ranger_Text_1
	waitmessage
	msgbox UpanaCaveRiverRoom_Npc_Ranger_Text_2
	waitmessage
	msgbox UpanaCaveRiverRoom_Npc_Ranger_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


UpanaCaveRiverRoom_Trainer_Elena::
	trainerbattle_single TRAINER_LASS_ELENA, UpanaCaveRiverRoom_Text_ElenaIntro, UpanaCaveRiverRoom_Text_ElenaDefeated
	msgbox UpanaCaveRiverRoom_Text_ElenaPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCaveRiverRoom_Inscription_1::
	lock
	msgbox UpanaCaveRiverRoom_Inscription_1_Text_0
	waitmessage
	release
	return


UpanaCaveRiverRoom_Inscription_2::
	lock
	msgbox UpanaCaveRiverRoom_Inscription_2_Text_0
	waitmessage
	release
	return


UpanaCaveRiverRoom_Inscription_3::
	lock
	msgbox UpanaCaveRiverRoom_Inscription_3_Text_0
	waitmessage
	release
	return


UpanaCaveRiverRoom_Npc_Ranger_Text_0:
	.string "Three months stationed down here\n"
	.string "studying this river and its Wooper\l"
	.string "colony.\p"
	.string "They've adapted perfectly to the cold\n"
	.string "and dark. Completely cut off from the\l"
	.string "surface world.$"

UpanaCaveRiverRoom_Npc_Ranger_Text_1:
	.string "Our water samples tell an interesting\n"
	.string "story.\p"
	.string "The flow rate and mineral composition\n"
	.string "suggest this river runs all the way to\l"
	.string "the ocean.\p"
	.string "And the source? We traced it north all\n"
	.string "the way to the Lion Mountains.\p"
	.string "Entirely underground.$"

UpanaCaveRiverRoom_Npc_Ranger_Text_2:
	.string "The ancient people who once lived in\n"
	.string "these caves called this river the Vein\l"
	.string "of the Earth.\p"
	.string "Their oral legends speak of a guardian.\n"
	.string "A protector of the underground river.\p"
	.string "An ancient Pokémon that has never once\n"
	.string "closed its eyes.\p"
	.string "It watches the water from the\n"
	.string "mountains to the sea. Always present.\l"
	.string "Never sleeping.$"

UpanaCaveRiverRoom_Npc_Ranger_Text_3:
	.string "...I try not to think about that too\n"
	.string "hard when I'm taking samples down here\l"
	.string "alone at in the dark.$"

UpanaCaveRiverRoom_Inscription_1_Text_0:
	.string "A relief is carved into the cave wall.\p"
	.string "It depicts a tall, upright figure\n"
	.string "standing in the middle of a flowing\l"
	.string "river.\p"
	.string "Its arms are raised, not in greeting,\n"
	.string "but in a way that suggests great\l"
	.string "curved blades where hands should be.\p"
	.string "Small figures kneel at the water's edge\n"
	.string "around it.$"

UpanaCaveRiverRoom_Inscription_2_Text_0:
	.string "A carving, worn smooth with age.\p"
	.string "It shows a tall figure, standing on dry\n"
	.string "land.\p"
	.string "Behind it, a long winding line snakes\n"
	.string "across the stone stretching into the\l"
	.string "distance.\p"
	.string "The figure is turned back toward it, as\n"
	.string "if it cannot stray too far.$"

UpanaCaveRiverRoom_Inscription_3_Text_0:
	.string "The deep carving in the stone.\p"
	.string "It seems to show the river.\p"
	.string "Cut into the water itself is a single\n"
	.string "open eye.\p"
	.string "It is the largest shape in the entire\n"
	.string "image.\p"
	.string "The craftsmanship here is different,\n"
	.string "more careful.\p"
	.string "Whoever carved this took their time.$"

UpanaCaveRiverRoom_Text_WadeIntro::
	.string "These Wooper have called this\n"
	.string "underground river home for\l"
	.string "generations! I'm here to protect them,\l"
	.string "battle first!$"

UpanaCaveRiverRoom_Text_WadeDefeated::
	.string "The river flows on regardless...$"

UpanaCaveRiverRoom_Text_WadePostBattle::
	.string "The Wooper here are perfectly calm. The\n"
	.string "river isolates them from the surface\l"
	.string "world.\p"
	.string "Pure peace down here.$"

UpanaCaveRiverRoom_Text_WarrenIntro::
	.string "I'm documenting this cave's geology and\n"
	.string "its former inhabitants! A battle will\l"
	.string "clear my head, let's go!$"

UpanaCaveRiverRoom_Text_WarrenDefeated::
	.string "Hypothesis: I need stronger Pokémon.$"

UpanaCaveRiverRoom_Text_WarrenPostBattle::
	.string "The sediment layers here span\n"
	.string "thousands of years.\p"
	.string "The indigenous people who carved the\n"
	.string "upper chambers left tools in this very\l"
	.string "river.$"

UpanaCaveRiverRoom_Text_CorinIntro::
	.string "The river here runs ice cold year-round.\n"
	.string "My Wooper love it! You look like a\l"
	.string "challenge!$"

UpanaCaveRiverRoom_Text_CorinDefeated::
	.string "Swept away, like a leaf in the current...$"

UpanaCaveRiverRoom_Text_CorinPostBattle::
	.string "The river originates deep in the\n"
	.string "mountain. Nobody has traced it to its\l"
	.string "source yet.\p"
	.string "One day I will.$"

UpanaCaveRiverRoom_Text_ElenaIntro::
	.string "This Quagsire waddled up to me like we\n"
	.string "were already friends! We're ready to\l"
	.string "battle together!$"

UpanaCaveRiverRoom_Text_ElenaDefeated::
	.string "Quagsire doesn't even look upset. Maybe\n"
	.string "I should be more like Quagsire.$"

UpanaCaveRiverRoom_Text_ElenaPostBattle::
	.string "The Wooper here eventually evolve into\n"
	.string "Quagsire once they know the whole\l"
	.string "river.\p"
	.string "This one knows every inch.$"
