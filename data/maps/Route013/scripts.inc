Route013_MapScripts::
	.byte 0


Route013_Trainer_Sanne::
	trainerbattle_single TRAINER_DELTA_SANNE_SK, Route013_Trainer_Sanne_Intro, Route013_Trainer_Sanne_Defeat
	msgbox Route013_Trainer_Sanne_After, MSGBOX_AUTOCLOSE
	end


Route013_NPC_HerdWarden::
	lock
	faceplayer
	msgbox Route013_NPC_HerdWarden_Text_0
	release
	end


Route013_NPC_DryLanding::
	lock
	faceplayer
	msgbox Route013_NPC_DryLanding_Text_0
	release
	end


Route013_NPC_WindSketcher::
	lock
	faceplayer
	msgbox Route013_NPC_WindSketcher_Text_0
	release
	end


Route013_NPC_GaugeReader::
	lock
	faceplayer
	msgbox Route013_NPC_GaugeReader_Text_0
	release
	end


Route013_NPC_CathedralVisitor::
	lock
	faceplayer
	msgbox Route013_NPC_CathedralVisitor_Text_0
	release
	end


Route013_NPC_PatientChild::
	lock
	faceplayer
	msgbox Route013_NPC_PatientChild_Text_0
	release
	end


Route013_NPC_HerdWarden_Text_0:
	.string "The gaps between the trees are\n"
	.string "crossing places. Watch for movement\l"
	.string "before you walk through.\p"
	.string "We leave those gaps open. Wild Pokemon\n"
	.string "don't use our signposts.$"

Route013_NPC_DryLanding_Text_0:
	.string "That old landing served a ferry once.\n"
	.string "Now the water runs well away from it.\p"
	.string "My grandson thinks we built a pier in a\n"
	.string "field for a joke. We weren't THAT bored.$"

Route013_NPC_WindSketcher_Text_0:
	.string "I paint the same view every month.\n"
	.string "People complain the river is in the\l"
	.string "wrong place.\p"
	.string "I tell them to complain to the river. So\n"
	.string "far nobody has.$"

Route013_NPC_GaugeReader_Text_0:
	.string "A water mark records one height on one\n"
	.string "day.\p"
	.string "Put several years together and you\n"
	.string "have something to discuss. Put one on a\l"
	.string "poster and you have something to argue\l"
	.string "about.$"

Route013_NPC_CathedralVisitor_Text_0:
	.string "The cathedral was my reason for coming.\n"
	.string "I didn't expect to spend an hour\l"
	.string "watching the lake on the way.\p"
	.string "I'm already late. I think it was worth it.$"

Route013_NPC_PatientChild_Text_0:
	.string "I saw a brown shape near the trees! I\n"
	.string "waited and waited.\p"
	.string "It was a stump. Then something walked\n"
	.string "out from behind the stump! Waiting\l"
	.string "worked eventually.$"

Route013_Trainer_Sanne_Intro::
	.string "Think you can keep up with STANTLER?$"

Route013_Trainer_Sanne_Defeat::
	.string "You certainly can!$"

Route013_Trainer_Sanne_After::
	.string "A herd came through here last spring\n"
	.string "with little ones in tow. I hope they use\l"
	.string "this crossing again.$"
