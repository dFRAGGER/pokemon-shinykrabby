Route06_UpanaCave_RiverRoom_B1F_MapScripts::
	.byte 0


UpanaCaveRiverRoom_Trainer_Wade::
# 4 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_WADE, UpanaCaveRiverRoom_Text_WadeIntro, UpanaCaveRiverRoom_Text_WadeDefeated
# 5 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	msgbox UpanaCaveRiverRoom_Text_WadePostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCaveRiverRoom_Trainer_Warren::
# 22 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_WARREN, UpanaCaveRiverRoom_Text_WarrenIntro, UpanaCaveRiverRoom_Text_WarrenDefeated
# 23 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	msgbox UpanaCaveRiverRoom_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCaveRiverRoom_Trainer_Corin::
# 40 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_CORIN, UpanaCaveRiverRoom_Text_CorinIntro, UpanaCaveRiverRoom_Text_CorinDefeated
# 41 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	msgbox UpanaCaveRiverRoom_Text_CorinPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCaveRiverRoom_Npc_Ranger::
# 58 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	lock
# 59 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	faceplayer
# 60 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	setspeaker UpanaCaveRiverRoom_Npc_Ranger_Text_0
# 61 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	msgbox UpanaCaveRiverRoom_Npc_Ranger_Text_1
# 62 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	waitmessage
# 63 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	msgbox UpanaCaveRiverRoom_Npc_Ranger_Text_2
# 64 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	waitmessage
# 65 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	msgbox UpanaCaveRiverRoom_Npc_Ranger_Text_3
# 66 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	waitmessage
# 67 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	msgbox UpanaCaveRiverRoom_Npc_Ranger_Text_4, MSGBOX_AUTOCLOSE
# 68 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	waitmessage
# 69 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	release
	end


UpanaCaveRiverRoom_Trainer_Elena::
# 74 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	trainerbattle_single TRAINER_LASS_ELENA, UpanaCaveRiverRoom_Text_ElenaIntro, UpanaCaveRiverRoom_Text_ElenaDefeated
# 75 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	msgbox UpanaCaveRiverRoom_Text_ElenaPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCaveRiverRoom_Inscription_1::
# 92 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	lock
# 93 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	msgbox UpanaCaveRiverRoom_Inscription_1_Text_0
# 94 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	waitmessage
# 95 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	release
	return


UpanaCaveRiverRoom_Inscription_2::
# 99 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	lock
# 100 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	msgbox UpanaCaveRiverRoom_Inscription_2_Text_0
# 101 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	waitmessage
# 102 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	release
	return


UpanaCaveRiverRoom_Inscription_3::
# 106 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	lock
# 107 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	msgbox UpanaCaveRiverRoom_Inscription_3_Text_0
# 108 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	waitmessage
# 109 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	release
	return


UpanaCaveRiverRoom_Npc_Ranger_Text_0:
# 60 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	.string "Ranger Sela$"

UpanaCaveRiverRoom_Npc_Ranger_Text_1:
# 61 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	.string "Three months stationed down here\n"
	.string "studying this river and its Wooper\l"
	.string "colony.\p"
	.string "They've adapted perfectly to the cold\n"
	.string "and dark. Completely cut off from the\l"
	.string "surface world.$"

UpanaCaveRiverRoom_Npc_Ranger_Text_2:
# 63 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	.string "Our water samples tell an interesting\n"
	.string "story.\p"
	.string "The flow rate and mineral composition\n"
	.string "suggest this river runs all the way to\l"
	.string "the ocean.\p"
	.string "And the source? We traced it north all\n"
	.string "the way to the Lion Mountains.\p"
	.string "Entirely underground.$"

UpanaCaveRiverRoom_Npc_Ranger_Text_3:
# 65 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
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

UpanaCaveRiverRoom_Npc_Ranger_Text_4:
# 67 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	.string "...I try not to think about that too\n"
	.string "hard when I'm taking samples down here\l"
	.string "alone at in the dark.$"

UpanaCaveRiverRoom_Inscription_1_Text_0:
# 93 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
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
# 100 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	.string "A carving, worn smooth with age.\p"
	.string "It shows a tall figure, standing on dry\n"
	.string "land.\p"
	.string "Behind it, a long winding line snakes\n"
	.string "across the stone stretching into the\l"
	.string "distance.\p"
	.string "The figure is turned back toward it, as\n"
	.string "if it cannot stray too far.$"

UpanaCaveRiverRoom_Inscription_3_Text_0:
# 107 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
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
# 9 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	.string "These Wooper have called this\n"
	.string "underground river home for\l"
	.string "generations! I'm here to protect them,\l"
	.string "battle first!$"

UpanaCaveRiverRoom_Text_WadeDefeated::
# 13 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	.string "The river flows on regardless...$"

UpanaCaveRiverRoom_Text_WadePostBattle::
# 17 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	.string "The Wooper here are perfectly calm. The\n"
	.string "river isolates them from the surface\l"
	.string "world.\p"
	.string "Pure peace down here.$"

UpanaCaveRiverRoom_Text_WarrenIntro::
# 27 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	.string "I'm documenting this cave's geology and\n"
	.string "its former inhabitants! A battle will\l"
	.string "clear my head, let's go!$"

UpanaCaveRiverRoom_Text_WarrenDefeated::
# 31 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	.string "Hypothesis: I need stronger Pokémon.$"

UpanaCaveRiverRoom_Text_WarrenPostBattle::
# 35 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	.string "The sediment layers here span\n"
	.string "thousands of years.\p"
	.string "The indigenous people who carved the\n"
	.string "upper chambers left tools in this very\l"
	.string "river.$"

UpanaCaveRiverRoom_Text_CorinIntro::
# 45 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	.string "The river here runs ice cold year-round.\n"
	.string "My Wooper love it! You look like a\l"
	.string "challenge!$"

UpanaCaveRiverRoom_Text_CorinDefeated::
# 49 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	.string "Swept away, like a leaf in the current...$"

UpanaCaveRiverRoom_Text_CorinPostBattle::
# 53 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	.string "The river originates deep in the\n"
	.string "mountain. Nobody has traced it to its\l"
	.string "source yet.\p"
	.string "One day I will.$"

UpanaCaveRiverRoom_Text_ElenaIntro::
# 79 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	.string "This Quagsire waddled up to me like we\n"
	.string "were already friends! We're ready to\l"
	.string "battle together!$"

UpanaCaveRiverRoom_Text_ElenaDefeated::
# 83 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	.string "Quagsire doesn't even look upset. Maybe\n"
	.string "I should be more like Quagsire.$"

UpanaCaveRiverRoom_Text_ElenaPostBattle::
# 87 "data/maps/Route06_UpanaCave_RiverRoom_B1F/scripts.pory"
	.string "The Wooper here eventually evolve into\n"
	.string "Quagsire once they know the whole\l"
	.string "river.\p"
	.string "This one knows every inch.$"
