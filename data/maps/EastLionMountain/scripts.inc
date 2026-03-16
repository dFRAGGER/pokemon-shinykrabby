EastLionMountain_MapScripts::
	.byte 0


EastLionMountain_Trainer_Faculty_Albert::
# 10 "data/maps/EastLionMountain/scripts.pory"
	trainerbattle_single TRAINER_ALBERT, EastLionMountain_Text_AlbertIntro, EastLionMountain_Text_AlbertDefeated
# 11 "data/maps/EastLionMountain/scripts.pory"
	msgbox EastLionMountain_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
	end


EastLionMountain_Trainer_Faculty_Samuel::
# 29 "data/maps/EastLionMountain/scripts.pory"
	trainerbattle_single TRAINER_SAMUEL, EastLionMountain_Text_SamuelIntro, EastLionMountain_Text_SamuelDefeated
# 30 "data/maps/EastLionMountain/scripts.pory"
	msgbox EastLionMountain_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
	end


EastLionMountain_Trainer_Vito::
# 48 "data/maps/EastLionMountain/scripts.pory"
	trainerbattle_single TRAINER_VITO, EastLionMountain_Text_VitoIntro, EastLionMountain_Text_VitoDefeated
# 49 "data/maps/EastLionMountain/scripts.pory"
	msgbox EastLionMountain_Text_VitoPostBattle, MSGBOX_AUTOCLOSE
	end


EastLionMountain_Worried_Hiker_Convo::
# 70 "data/maps/EastLionMountain/scripts.pory"
	lock
# 71 "data/maps/EastLionMountain/scripts.pory"
	faceplayer
# 72 "data/maps/EastLionMountain/scripts.pory"
	msgbox EastLionMountain_Worried_Hiker_Convo_Text_0, MSGBOX_AUTOCLOSE
# 73 "data/maps/EastLionMountain/scripts.pory"
	release
	end


EastLionMountain_Scared_Woman_Convo::
# 78 "data/maps/EastLionMountain/scripts.pory"
	lock
# 79 "data/maps/EastLionMountain/scripts.pory"
	faceplayer
# 80 "data/maps/EastLionMountain/scripts.pory"
	msgbox EastLionMountain_Scared_Woman_Convo_Text_0, MSGBOX_AUTOCLOSE
# 81 "data/maps/EastLionMountain/scripts.pory"
	release
	end


EastLionMountain_Sign_MiningCave::
# 86 "data/maps/EastLionMountain/scripts.pory"
	lock
# 87 "data/maps/EastLionMountain/scripts.pory"
	msgbox EastLionMountain_Sign_MiningCave_Text_0, MSGBOX_AUTOCLOSE
# 88 "data/maps/EastLionMountain/scripts.pory"
	release
	return


EastLionMountain_Worried_Hiker_Convo_Text_0:
# 72 "data/maps/EastLionMountain/scripts.pory"
	.string "I've lived near these mountains my\n"
	.string "whole life.\p"
	.string "My grandfather told me stories about\n"
	.string "Regigigas creating guardians here.\p"
	.string "It shaped them from the mountain's\n"
	.string "stone, ice, and volcanic iron...\p"
	.string "If those suited folks really found a\n"
	.string "way to control those ancient beings...$"

EastLionMountain_Scared_Woman_Convo_Text_0:
# 80 "data/maps/EastLionMountain/scripts.pory"
	.string "My house down in the valley has been\n"
	.string "shaking every few hours!\p"
	.string "The tremors started when those\n"
	.string "'researchers' showed up.\p"
	.string "They say they're studying the\n"
	.string "'birthplace of the Golems'...\p"
	.string "Please, if you're going in there, make\n"
	.string "them stop!$"

EastLionMountain_Sign_MiningCave_Text_0:
# 87 "data/maps/EastLionMountain/scripts.pory"
	.string "Faculty Excavation Site\n"
	.string "Authorized Personnel Only\n"
	.string "...This sign looks recently installed.$"

EastLionMountain_Text_AlbertIntro::
# 15 "data/maps/EastLionMountain/scripts.pory"
	.string "Halt! This area is restricted by order\n"
	.string "of the Faculty!\p"
	.string "Our excavation here is of the utmost\n"
	.string "importance!$"

EastLionMountain_Text_AlbertDefeated::
# 19 "data/maps/EastLionMountain/scripts.pory"
	.string "You... You have no idea what forces\n"
	.string "you're interfering with!$"

EastLionMountain_Text_AlbertPostBattle::
# 23 "data/maps/EastLionMountain/scripts.pory"
	.string "Fine, you've beaten me, but it won't\n"
	.string "matter.\p"
	.string "These mountains hold a secret older\n"
	.string "than civilization itself.\p"
	.string "Regigigas, the Colossal Pokemon,\n"
	.string "created its servants here!\p"
	.string "The metals we need to control those\n"
	.string "ancient Golems are nearly ours!$"

EastLionMountain_Text_SamuelIntro::
# 34 "data/maps/EastLionMountain/scripts.pory"
	.string "Another intruder?\p"
	.string "The Rector will not be pleased with\n"
	.string "these interruptions!$"

EastLionMountain_Text_SamuelDefeated::
# 38 "data/maps/EastLionMountain/scripts.pory"
	.string "Impossible! My calculations were\n"
	.string "perfect!$"

EastLionMountain_Text_SamuelPostBattle::
# 42 "data/maps/EastLionMountain/scripts.pory"
	.string "You don't understand what's at stake!\p"
	.string "The Lion Mountains contain hard rock,\n"
	.string "eternal ice, and hidden magma...\p"
	.string "The same primordial materials Regigigas\n"
	.string "used to forge its Golems!\p"
	.string "With the right apparatus, we can bend\n"
	.string "Regirock, Regice, and Registeel to our\l"
	.string "will!$"

EastLionMountain_Text_VitoIntro::
# 53 "data/maps/EastLionMountain/scripts.pory"
	.string "Hey, you look like someone who can\n"
	.string "handle themselves!\p"
	.string "I've been too scared to go near that\n"
	.string "cave alone.\p"
	.string "Let me test your strength first!$"

EastLionMountain_Text_VitoDefeated::
# 57 "data/maps/EastLionMountain/scripts.pory"
	.string "Wow, you're the real deal!$"

EastLionMountain_Text_VitoPostBattle::
# 61 "data/maps/EastLionMountain/scripts.pory"
	.string "Those people in the suits... they've\n"
	.string "been drilling day and night.\p"
	.string "The tremors are getting worse.\p"
	.string "I overheard them talking about\n"
	.string "'Regigigas' and 'controlling the\l"
	.string "Golems'...\p"
	.string "Something about this mountain being\n"
	.string "where the Golems were created long ago.$"
