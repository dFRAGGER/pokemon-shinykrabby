EastLionMountain_MapScripts::
	.byte 0


EastLionMountain_Trainer_Faculty_Albert::
	trainerbattle_single TRAINER_ALBERT, EastLionMountain_Text_AlbertIntro, EastLionMountain_Text_AlbertDefeated
	msgbox EastLionMountain_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
	end


EastLionMountain_Trainer_Faculty_Samuel::
	trainerbattle_single TRAINER_SAMUEL, EastLionMountain_Text_SamuelIntro, EastLionMountain_Text_SamuelDefeated
	msgbox EastLionMountain_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
	end


EastLionMountain_Trainer_Vito::
	trainerbattle_single TRAINER_VITO, EastLionMountain_Text_VitoIntro, EastLionMountain_Text_VitoDefeated
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, EastLionMountain_Trainer_Vito_2
	msgbox EastLionMountain_Text_VitoPostBattle, MSGBOX_AUTOCLOSE
EastLionMountain_Trainer_Vito_1:
	end

EastLionMountain_Trainer_Vito_2:
	msgbox EastLionMountain_Text_VitoPostBattle_After, MSGBOX_AUTOCLOSE
	goto EastLionMountain_Trainer_Vito_1


EastLionMountain_Worried_Hiker_Convo::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, EastLionMountain_Worried_Hiker_Convo_2
	msgbox EastLionMountain_Worried_Hiker_Convo_Text_1, MSGBOX_AUTOCLOSE
EastLionMountain_Worried_Hiker_Convo_1:
	release
	end

EastLionMountain_Worried_Hiker_Convo_2:
	msgbox EastLionMountain_Worried_Hiker_Convo_Text_0, MSGBOX_AUTOCLOSE
	goto EastLionMountain_Worried_Hiker_Convo_1


EastLionMountain_Scared_Woman_Convo::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, EastLionMountain_Scared_Woman_Convo_2
	msgbox EastLionMountain_Scared_Woman_Convo_Text_1, MSGBOX_AUTOCLOSE
EastLionMountain_Scared_Woman_Convo_1:
	release
	end

EastLionMountain_Scared_Woman_Convo_2:
	msgbox EastLionMountain_Scared_Woman_Convo_Text_0, MSGBOX_AUTOCLOSE
	goto EastLionMountain_Scared_Woman_Convo_1


EastLionMountain_Sign_MiningCave::
	lock
	msgbox EastLionMountain_Sign_MiningCave_Text_0, MSGBOX_AUTOCLOSE
	release
	return


EastLionMountain_Worried_Hiker_Convo_Text_0:
	.string "Those suited folks left empty-handed,\n"
	.string "it seems.\p"
	.string "Whatever they were searching for in\n"
	.string "these mountains...\p"
	.string "the mountain kept its secrets.\p"
	.string "My grandfather would be relieved to\n"
	.string "hear it.$"

EastLionMountain_Worried_Hiker_Convo_Text_1:
	.string "I've lived near these mountains my\n"
	.string "whole life.\p"
	.string "My grandfather told me stories about\n"
	.string "Regigigas creating guardians here.\p"
	.string "It shaped them from the mountain's\n"
	.string "stone, ice, and volcanic iron...\p"
	.string "If those suited folks really found a\n"
	.string "way to control those ancient beings...$"

EastLionMountain_Scared_Woman_Convo_Text_0:
	.string "The tremors stopped!\p"
	.string "Not a single one since those\n"
	.string "researchers packed up and left.\p"
	.string "I actually slept through the night for\n"
	.string "the first time in weeks.\p"
	.string "Thank you, whoever you are!$"

EastLionMountain_Scared_Woman_Convo_Text_1:
	.string "My house down in the valley has been\n"
	.string "shaking every few hours!\p"
	.string "The tremors started when those\n"
	.string "'researchers' showed up.\p"
	.string "They say they're studying the\n"
	.string "'birthplace of the Golems'...\p"
	.string "Please, if you're going in there, make\n"
	.string "them stop!$"

EastLionMountain_Sign_MiningCave_Text_0:
	.string "Faculty Excavation Site\n"
	.string "Authorized Personnel Only\n"
	.string "...This sign looks recently installed.$"

EastLionMountain_Text_AlbertIntro::
	.string "Halt! This area is restricted by order\n"
	.string "of the Faculty!\p"
	.string "Our excavation here is of the utmost\n"
	.string "importance!$"

EastLionMountain_Text_AlbertDefeated::
	.string "You... You have no idea what forces\n"
	.string "you're interfering with!$"

EastLionMountain_Text_AlbertPostBattle::
	.string "Fine, you've beaten me, but it won't\n"
	.string "matter.\p"
	.string "These mountains hold a secret older\n"
	.string "than civilization itself.\p"
	.string "Regigigas, the Colossal Pokemon,\n"
	.string "created its servants here!\p"
	.string "The metals we need to control those\n"
	.string "ancient Golems are nearly ours!$"

EastLionMountain_Text_SamuelIntro::
	.string "Another intruder?\p"
	.string "The Rector will not be pleased with\n"
	.string "these interruptions!$"

EastLionMountain_Text_SamuelDefeated::
	.string "Impossible! My calculations were\n"
	.string "perfect!$"

EastLionMountain_Text_SamuelPostBattle::
	.string "You don't understand what's at stake!\p"
	.string "The Lion Mountains contain hard rock,\n"
	.string "eternal ice, and hidden magma...\p"
	.string "The same primordial materials Regigigas\n"
	.string "used to forge its Golems!\p"
	.string "With the right apparatus, we can bend\n"
	.string "Regirock, Regice, and Registeel to our\l"
	.string "will!$"

EastLionMountain_Text_VitoIntro::
	.string "Hey, you look like someone who can\n"
	.string "handle themselves!\p"
	.string "I've been too scared to go near that\n"
	.string "cave alone.\p"
	.string "Let me test your strength first!$"

EastLionMountain_Text_VitoDefeated::
	.string "Wow, you're the real deal!$"

EastLionMountain_Text_VitoPostBattle::
	.string "Those people in the suits... they've\n"
	.string "been drilling day and night.\p"
	.string "The tremors are getting worse.\p"
	.string "I overheard them talking about\n"
	.string "'Regigigas' and 'controlling the\l"
	.string "Golems'...\p"
	.string "Something about this mountain being\n"
	.string "where the Golems were created long ago.$"

EastLionMountain_Text_VitoPostBattle_After::
	.string "Those brown-suited folks are gone!\p"
	.string "I finally worked up the nerve to walk\n"
	.string "past that cave entrance.\p"
	.string "Whatever went on in there... I'm just\n"
	.string "glad it's over.$"
