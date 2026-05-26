WestLionMountain_MapScripts::
	.byte 0


WestLionMountain_Trainer_Leroy::
# 8 "data/maps/WestLionMountain/scripts.pory"
	trainerbattle_single TRAINER_LEROY, WestLionMountain_Text_LeroyIntro, WestLionMountain_Text_LeroyDefeated
# 9 "data/maps/WestLionMountain/scripts.pory"
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, WestLionMountain_Trainer_Leroy_2
# 12 "data/maps/WestLionMountain/scripts.pory"
	msgbox WestLionMountain_Text_LeroyPostBattle, MSGBOX_AUTOCLOSE
WestLionMountain_Trainer_Leroy_1:
	end

WestLionMountain_Trainer_Leroy_2:
# 10 "data/maps/WestLionMountain/scripts.pory"
	msgbox WestLionMountain_Text_LeroyPostBattle_After, MSGBOX_AUTOCLOSE
	goto WestLionMountain_Trainer_Leroy_1


WestLionMountain_Trainer_Wilton::
# 34 "data/maps/WestLionMountain/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, WestLionMountain_Text_WiltonIntro, WestLionMountain_Text_WiltonDefeated
# 35 "data/maps/WestLionMountain/scripts.pory"
	msgbox WestLionMountain_Text_WiltonPostBattle, MSGBOX_AUTOCLOSE
	end


WestLionMountain_Trainer_Edgar::
# 52 "data/maps/WestLionMountain/scripts.pory"
	trainerbattle_single TRAINER_EDGAR, WestLionMountain_Text_EdgarIntro, WestLionMountain_Text_EdgarDefeated
# 53 "data/maps/WestLionMountain/scripts.pory"
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, WestLionMountain_Trainer_Edgar_2
# 56 "data/maps/WestLionMountain/scripts.pory"
	msgbox WestLionMountain_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
WestLionMountain_Trainer_Edgar_1:
	end

WestLionMountain_Trainer_Edgar_2:
# 54 "data/maps/WestLionMountain/scripts.pory"
	msgbox WestLionMountain_Text_EdgarPostBattle_After, MSGBOX_AUTOCLOSE
	goto WestLionMountain_Trainer_Edgar_1


WestLionMountain_Climber_Convo::
# 82 "data/maps/WestLionMountain/scripts.pory"
	lock
# 83 "data/maps/WestLionMountain/scripts.pory"
	faceplayer
# 84 "data/maps/WestLionMountain/scripts.pory"
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, WestLionMountain_Climber_Convo_2
# 87 "data/maps/WestLionMountain/scripts.pory"
	msgbox WestLionMountain_Climber_Convo_Text_1, MSGBOX_AUTOCLOSE
WestLionMountain_Climber_Convo_1:
# 89 "data/maps/WestLionMountain/scripts.pory"
	release
	end

WestLionMountain_Climber_Convo_2:
# 85 "data/maps/WestLionMountain/scripts.pory"
	msgbox WestLionMountain_Climber_Convo_Text_0, MSGBOX_AUTOCLOSE
	goto WestLionMountain_Climber_Convo_1


WestLionMountain_Hiker_Convo::
# 94 "data/maps/WestLionMountain/scripts.pory"
	lock
# 95 "data/maps/WestLionMountain/scripts.pory"
	faceplayer
# 96 "data/maps/WestLionMountain/scripts.pory"
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, WestLionMountain_Hiker_Convo_2
# 99 "data/maps/WestLionMountain/scripts.pory"
	msgbox WestLionMountain_Hiker_Convo_Text_1, MSGBOX_AUTOCLOSE
WestLionMountain_Hiker_Convo_1:
# 101 "data/maps/WestLionMountain/scripts.pory"
	release
	end

WestLionMountain_Hiker_Convo_2:
# 97 "data/maps/WestLionMountain/scripts.pory"
	msgbox WestLionMountain_Hiker_Convo_Text_0, MSGBOX_AUTOCLOSE
	goto WestLionMountain_Hiker_Convo_1


WestLionMountain_Sign_EastMountain::
# 106 "data/maps/WestLionMountain/scripts.pory"
	lock
# 107 "data/maps/WestLionMountain/scripts.pory"
	msgbox WestLionMountain_Sign_EastMountain_Text_0, MSGBOX_AUTOCLOSE
# 108 "data/maps/WestLionMountain/scripts.pory"
	release
	return


WestLionMountain_Climber_Convo_Text_0:
# 85 "data/maps/WestLionMountain/scripts.pory"
	.string "Twenty years on these peaks and I've\n"
	.string "seen a lot come and go.\p"
	.string "Those brown-suited folks arrived like\n"
	.string "they owned the place...\p"
	.string "and left just as suddenly.\p"
	.string "The mountain outlasts them all.$"

WestLionMountain_Climber_Convo_Text_1:
# 87 "data/maps/WestLionMountain/scripts.pory"
	.string "I've been climbing these mountains for\n"
	.string "twenty years.\p"
	.string "The rocks have been shifting lately,\n"
	.string "more than I've ever seen.\p"
	.string "It's like the mountain itself is...\n"
	.string "unsettled.$"

WestLionMountain_Hiker_Convo_Text_0:
# 97 "data/maps/WestLionMountain/scripts.pory"
	.string "Have you noticed how quiet it's been up\n"
	.string "here lately?\p"
	.string "No more tremors since those people in\n"
	.string "brown suits disappeared.\p"
	.string "The Rangers closed their investigation\n"
	.string "too.\p"
	.string "Whatever was going on down there, it's\n"
	.string "over.$"

WestLionMountain_Hiker_Convo_Text_1:
# 99 "data/maps/WestLionMountain/scripts.pory"
	.string "Did you feel that tremor just now?\p"
	.string "They've been happening more and more\n"
	.string "frequently.\p"
	.string "The Pokemon Rangers are investigating,\n"
	.string "but they haven't found anything yet.$"

WestLionMountain_Sign_EastMountain_Text_0:
# 107 "data/maps/WestLionMountain/scripts.pory"
	.string "East Lion Mountain\n"
	.string "East$"

WestLionMountain_Text_LeroyIntro::
# 17 "data/maps/WestLionMountain/scripts.pory"
	.string "I've conquered every peak in this\n"
	.string "mountain range!\p"
	.string "You're just another obstacle on my path\n"
	.string "to greatness!$"

WestLionMountain_Text_LeroyDefeated::
# 21 "data/maps/WestLionMountain/scripts.pory"
	.string "Maybe I should stick to climbing\n"
	.string "mountains instead of battling...$"

WestLionMountain_Text_LeroyPostBattle::
# 25 "data/maps/WestLionMountain/scripts.pory"
	.string "The tremors started about a week ago.\p"
	.string "At first I thought it was just\n"
	.string "avalanches, but the pattern is too\l"
	.string "regular.\p"
	.string "Something's digging deep underground.$"

WestLionMountain_Text_LeroyPostBattle_After::
# 29 "data/maps/WestLionMountain/scripts.pory"
	.string "The mountain's all mine again!\p"
	.string "Those suited people had roped off half\n"
	.string "the eastern trails.\p"
	.string "Now that they're gone I can finally get\n"
	.string "back to conquering every peak!$"

WestLionMountain_Text_WiltonIntro::
# 39 "data/maps/WestLionMountain/scripts.pory"
	.string "These mountains are home to my family\n"
	.string "for generations!\p"
	.string "I won't let some stranger wander\n"
	.string "through without a proper challenge!$"

WestLionMountain_Text_WiltonDefeated::
# 43 "data/maps/WestLionMountain/scripts.pory"
	.string "You've proven yourself worthy of these\n"
	.string "peaks...$"

WestLionMountain_Text_WiltonPostBattle::
# 47 "data/maps/WestLionMountain/scripts.pory"
	.string "My grandfather used to tell stories\n"
	.string "about ancient guardians sleeping in\l"
	.string "these mountains.\p"
	.string "Pokemon of immense power, sealed away\n"
	.string "long ago.\p"
	.string "I always thought they were just\n"
	.string "legends...$"

WestLionMountain_Text_EdgarIntro::
# 61 "data/maps/WestLionMountain/scripts.pory"
	.string "You look lost, traveler!\p"
	.string "Let me show you the power of a true\n"
	.string "mountain dweller!$"

WestLionMountain_Text_EdgarDefeated::
# 65 "data/maps/WestLionMountain/scripts.pory"
	.string "I've underestimated you... city folk\n"
	.string "aren't as weak as I thought.$"

WestLionMountain_Text_EdgarPostBattle::
# 69 "data/maps/WestLionMountain/scripts.pory"
	.string "If you're heading east, you might run\n"
	.string "into some trouble.\p"
	.string "Saw some fancy-dressed folks setting\n"
	.string "up camp near a cave entrance.\p"
	.string "They didn't look like regular hikers or\n"
	.string "researchers to me.$"

WestLionMountain_Text_EdgarPostBattle_After::
# 73 "data/maps/WestLionMountain/scripts.pory"
	.string "Saw those fancy people loading up their\n"
	.string "gear and heading south.\p"
	.string "Didn't say a word to anyone, just\n"
	.string "packed up and left.\p"
	.string "Fine by me. They never belonged up here\n"
	.string "anyway.$"
