EastLionMountain_MapScripts::
	.byte 0


EastLionMountain_Trainer_Faculty_Albert::
	trainerbattle_single TRAINER_ALBERT_EAST_LION_SK, EastLionMountain_Text_AlbertIntro, EastLionMountain_Text_AlbertDefeated
	msgbox EastLionMountain_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
	end


EastLionMountain_Trainer_Faculty_Samuel::
	trainerbattle_single TRAINER_SAMUEL_EAST_LION_SK, EastLionMountain_Text_SamuelIntro, EastLionMountain_Text_SamuelDefeated
	msgbox EastLionMountain_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
	end


EastLionMountain_Trainer_Vito::
	trainerbattle_single TRAINER_VITO_EAST_LION_SK, EastLionMountain_Text_VitoIntro, EastLionMountain_Text_VitoDefeated
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
	.string "The drilling crews have left.\p"
	.string "But a sealed transport went down to\n"
	.string "the factory before they packed up.\p"
	.string "My grandfather told me a guardian slept\n"
	.string "in the old ice.\p"
	.string "I wish I knew whether it was still there.$"

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
	.string "'researchers' began drilling through\l"
	.string "the old ice.\p"
	.string "They say their mining permit covers it.\p"
	.string "Does it cover bringing the mountain\n"
	.string "down on us too?$"

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
	.string "Our permits say mineral extraction.\p"
	.string "They don't say you can wander into the\n"
	.string "sealed ice chambers.\p"
	.string "The freight has already gone down to\n"
	.string "the steelworks. You're interfering with\l"
	.string "the cleanup.$"

EastLionMountain_Text_SamuelIntro::
	.string "Another intruder?\p"
	.string "The Rector will not be pleased with\n"
	.string "these interruptions!$"

EastLionMountain_Text_SamuelDefeated::
	.string "Impossible! My calculations were\n"
	.string "perfect!$"

EastLionMountain_Text_SamuelPostBattle::
	.string "The oldest ice in this mountain never\n"
	.string "thawed. Something was resting inside it.\p"
	.string "We needed a containment frame, not an\n"
	.string "ore cart.\p"
	.string "That's all I'm authorized to tell you.$"

EastLionMountain_Text_VitoIntro::
	.string "Hey, you look like someone who can\n"
	.string "handle themselves!\p"
	.string "I've been too scared to go near that\n"
	.string "cave alone.\p"
	.string "Let me test your strength first!$"

EastLionMountain_Text_VitoDefeated::
	.string "Wow, you're the real deal!$"

EastLionMountain_Text_VitoPostBattle::
	.string "Those people in the suits have been\n"
	.string "drilling through ancient ice, day and\l"
	.string "night.\p"
	.string "The tremors get worse every time they\n"
	.string "start the machines.\p"
	.string "Yesterday a sealed load came down the\n"
	.string "trail. No loose stone. No ore dust.\p"
	.string "Why does a mining company need guards\n"
	.string "around a single piece of freight?$"

EastLionMountain_Text_VitoPostBattle_After::
	.string "Those brown-suited folks are gone!\p"
	.string "I finally worked up the nerve to walk\n"
	.string "past that cave entrance.\p"
	.string "Whatever went on in there... I'm just\n"
	.string "glad it's over.$"
