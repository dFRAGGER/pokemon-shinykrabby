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
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, EastLionMountain_Trainer_Vito_2
# 52 "data/maps/EastLionMountain/scripts.pory"
	msgbox EastLionMountain_Text_VitoPostBattle, MSGBOX_AUTOCLOSE
EastLionMountain_Trainer_Vito_1:
	end

EastLionMountain_Trainer_Vito_2:
# 50 "data/maps/EastLionMountain/scripts.pory"
	msgbox EastLionMountain_Text_VitoPostBattle_After, MSGBOX_AUTOCLOSE
	goto EastLionMountain_Trainer_Vito_1


EastLionMountain_Worried_Hiker_Convo::
# 78 "data/maps/EastLionMountain/scripts.pory"
	lock
# 79 "data/maps/EastLionMountain/scripts.pory"
	faceplayer
# 80 "data/maps/EastLionMountain/scripts.pory"
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, EastLionMountain_Worried_Hiker_Convo_2
# 83 "data/maps/EastLionMountain/scripts.pory"
	msgbox EastLionMountain_Worried_Hiker_Convo_Text_1, MSGBOX_AUTOCLOSE
EastLionMountain_Worried_Hiker_Convo_1:
# 85 "data/maps/EastLionMountain/scripts.pory"
	release
	end

EastLionMountain_Worried_Hiker_Convo_2:
# 81 "data/maps/EastLionMountain/scripts.pory"
	msgbox EastLionMountain_Worried_Hiker_Convo_Text_0, MSGBOX_AUTOCLOSE
	goto EastLionMountain_Worried_Hiker_Convo_1


EastLionMountain_Scared_Woman_Convo::
# 90 "data/maps/EastLionMountain/scripts.pory"
	lock
# 91 "data/maps/EastLionMountain/scripts.pory"
	faceplayer
# 92 "data/maps/EastLionMountain/scripts.pory"
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, EastLionMountain_Scared_Woman_Convo_2
# 95 "data/maps/EastLionMountain/scripts.pory"
	msgbox EastLionMountain_Scared_Woman_Convo_Text_1, MSGBOX_AUTOCLOSE
EastLionMountain_Scared_Woman_Convo_1:
# 97 "data/maps/EastLionMountain/scripts.pory"
	release
	end

EastLionMountain_Scared_Woman_Convo_2:
# 93 "data/maps/EastLionMountain/scripts.pory"
	msgbox EastLionMountain_Scared_Woman_Convo_Text_0, MSGBOX_AUTOCLOSE
	goto EastLionMountain_Scared_Woman_Convo_1


EastLionMountain_Sign_MiningCave::
# 102 "data/maps/EastLionMountain/scripts.pory"
	lock
# 103 "data/maps/EastLionMountain/scripts.pory"
	msgbox EastLionMountain_Sign_MiningCave_Text_0, MSGBOX_AUTOCLOSE
# 104 "data/maps/EastLionMountain/scripts.pory"
	release
	return


EastLionMountain_Worried_Hiker_Convo_Text_0:
# 81 "data/maps/EastLionMountain/scripts.pory"
	.string "Those suited folks left empty-handed,\n"
	.string "it seems.\p"
	.string "Whatever they were searching for in\n"
	.string "these mountains...\p"
	.string "the mountain kept its secrets.\p"
	.string "My grandfather would be relieved to\n"
	.string "hear it.$"

EastLionMountain_Worried_Hiker_Convo_Text_1:
# 83 "data/maps/EastLionMountain/scripts.pory"
	.string "I've lived near these mountains my\n"
	.string "whole life.\p"
	.string "My grandfather told me stories about\n"
	.string "Regigigas creating guardians here.\p"
	.string "It shaped them from the mountain's\n"
	.string "stone, ice, and volcanic iron...\p"
	.string "If those suited folks really found a\n"
	.string "way to control those ancient beings...$"

EastLionMountain_Scared_Woman_Convo_Text_0:
# 93 "data/maps/EastLionMountain/scripts.pory"
	.string "The tremors stopped!\p"
	.string "Not a single one since those\n"
	.string "researchers packed up and left.\p"
	.string "I actually slept through the night for\n"
	.string "the first time in weeks.\p"
	.string "Thank you, whoever you are!$"

EastLionMountain_Scared_Woman_Convo_Text_1:
# 95 "data/maps/EastLionMountain/scripts.pory"
	.string "My house down in the valley has been\n"
	.string "shaking every few hours!\p"
	.string "The tremors started when those\n"
	.string "'researchers' showed up.\p"
	.string "They say they're studying the\n"
	.string "'birthplace of the Golems'...\p"
	.string "Please, if you're going in there, make\n"
	.string "them stop!$"

EastLionMountain_Sign_MiningCave_Text_0:
# 103 "data/maps/EastLionMountain/scripts.pory"
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
# 57 "data/maps/EastLionMountain/scripts.pory"
	.string "Hey, you look like someone who can\n"
	.string "handle themselves!\p"
	.string "I've been too scared to go near that\n"
	.string "cave alone.\p"
	.string "Let me test your strength first!$"

EastLionMountain_Text_VitoDefeated::
# 61 "data/maps/EastLionMountain/scripts.pory"
	.string "Wow, you're the real deal!$"

EastLionMountain_Text_VitoPostBattle::
# 65 "data/maps/EastLionMountain/scripts.pory"
	.string "Those people in the suits... they've\n"
	.string "been drilling day and night.\p"
	.string "The tremors are getting worse.\p"
	.string "I overheard them talking about\n"
	.string "'Regigigas' and 'controlling the\l"
	.string "Golems'...\p"
	.string "Something about this mountain being\n"
	.string "where the Golems were created long ago.$"

EastLionMountain_Text_VitoPostBattle_After::
# 69 "data/maps/EastLionMountain/scripts.pory"
	.string "Those brown-suited folks are gone!\p"
	.string "I finally worked up the nerve to walk\n"
	.string "past that cave entrance.\p"
	.string "Whatever went on in there... I'm just\n"
	.string "glad it's over.$"
