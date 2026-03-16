EastLionMountain_Faculty_Mining_Cave_MapScripts::
	.byte 0


MiningCave_Trainer_Faculty_Owen::
# 9 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	trainerbattle_single TRAINER_OWEN, MiningCave_Text_OwenIntro, MiningCave_Text_OwenDefeated
# 10 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	msgbox MiningCave_Text_OwenPostBattle, MSGBOX_AUTOCLOSE
	end


MiningCave_Trainer_Faculty_Warren::
# 27 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	trainerbattle_single TRAINER_WARREN, MiningCave_Text_WarrenIntro, MiningCave_Text_WarrenDefeated
# 28 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	msgbox MiningCave_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
	end


MiningCave_Worker1_Convo::
# 50 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	lock
# 51 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	faceplayer
# 52 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	msgbox MiningCave_Worker1_Convo_Text_0, MSGBOX_AUTOCLOSE
# 53 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	release
	end


MiningCave_Worker2_Convo::
# 58 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	lock
# 59 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	faceplayer
# 60 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	msgbox MiningCave_Worker2_Convo_Text_0, MSGBOX_AUTOCLOSE
# 61 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	release
	end


MiningCave_Scientist_Convo::
# 66 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	lock
# 67 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	faceplayer
# 68 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	msgbox MiningCave_Scientist_Convo_Text_0, MSGBOX_AUTOCLOSE
# 69 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	release
	end


MiningCave_Sign_Danger::
# 74 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	lock
# 75 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	msgbox MiningCave_Sign_Danger_Text_0, MSGBOX_AUTOCLOSE
# 76 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	release
	return


MiningCave_Worker1_Convo_Text_0:
# 52 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	.string "Keep those sample containers sealed!\p"
	.string "The Administrator wants this ore\n"
	.string "analyzed before shipping to the Steel\l"
	.string "Factory.\p"
	.string "According to legend, Regigigas shaped\n"
	.string "Regirock from these very boulders!$"

MiningCave_Worker2_Convo_Text_0:
# 60 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	.string "Fascinating... The mineral composition\n"
	.string "here is unlike anything documented.\p"
	.string "It resonates at the exact frequency as\n"
	.string "the Golem relics we've studied.\p"
	.string "Regigigas must have chosen this\n"
	.string "location specifically for its unique\l"
	.string "geology!$"

MiningCave_Scientist_Convo_Text_0:
# 68 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	.string "The ancient texts were right!\p"
	.string "Regigigas, the Colossal Pokemon,\n"
	.string "created its servants here eons ago.\p"
	.string "Regirock from the mountain's stone,\n"
	.string "Regice from never-melt ice, Registeel\l"
	.string "from volcanic iron...\p"
	.string "By synthesizing these same materials\n"
	.string "into control devices, we'll bend the\l"
	.string "Golems to our will!$"

MiningCave_Sign_Danger_Text_0:
# 75 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	.string "DANGER: Active Mining Zone\n"
	.string "Hard hats required\n"
	.string "Beware of falling rocks and tremors$"

MiningCave_Text_OwenIntro::
# 14 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	.string "You made it past the guards outside?\p"
	.string "No matter. You won't get any further!\p"
	.string "These sacred grounds belong to the\n"
	.string "Faculty now!$"

MiningCave_Text_OwenDefeated::
# 18 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	.string "The mountain... it trembles with ancient\n"
	.string "power...$"

MiningCave_Text_OwenPostBattle::
# 22 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	.string "Do you know what lies beneath these\n"
	.string "peaks?\p"
	.string "Long ago, Regigigas itself walked these\n"
	.string "mountains.\p"
	.string "It gathered boulders, ice, and molten\n"
	.string "iron from deep within...\p"
	.string "And shaped them into the legendary\n"
	.string "Golems!\p"
	.string "With the right materials, we can forge\n"
	.string "devices to control its creations!$"

MiningCave_Text_WarrenIntro::
# 32 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	.string "Intruder detected!\p"
	.string "I've been trained to deal with\n"
	.string "troublemakers like you!$"

MiningCave_Text_WarrenDefeated::
# 36 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	.string "M-My calculations didn't account for\n"
	.string "your strength!$"

MiningCave_Text_WarrenPostBattle::
# 40 "data/maps/EastLionMountain_Faculty_Mining_Cave/scripts.pory"
	.string "The Lion Mountains are unique, you see.\p"
	.string "Hard rock, eternal ice, and magma all\n"
	.string "exist here in close proximity.\p"
	.string "The same primordial materials Regigigas\n"
	.string "used to craft its servants!\p"
	.string "Once we extract enough ore, our control\n"
	.string "apparatus will be complete!$"
