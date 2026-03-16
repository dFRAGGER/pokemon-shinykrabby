WestLionMountain_MapScripts::
	.byte 0


WestLionMountain_Trainer_Leroy::
# 8 "data/maps/WestLionMountain/scripts.pory"
	trainerbattle_single TRAINER_LEROY, WestLionMountain_Text_LeroyIntro, WestLionMountain_Text_LeroyDefeated
# 9 "data/maps/WestLionMountain/scripts.pory"
	msgbox WestLionMountain_Text_LeroyPostBattle, MSGBOX_AUTOCLOSE
	end


WestLionMountain_Trainer_Wilton::
# 26 "data/maps/WestLionMountain/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, WestLionMountain_Text_WiltonIntro, WestLionMountain_Text_WiltonDefeated
# 27 "data/maps/WestLionMountain/scripts.pory"
	msgbox WestLionMountain_Text_WiltonPostBattle, MSGBOX_AUTOCLOSE
	end


WestLionMountain_Trainer_Edgar::
# 44 "data/maps/WestLionMountain/scripts.pory"
	trainerbattle_single TRAINER_EDGAR, WestLionMountain_Text_EdgarIntro, WestLionMountain_Text_EdgarDefeated
# 45 "data/maps/WestLionMountain/scripts.pory"
	msgbox WestLionMountain_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
	end


WestLionMountain_Climber_Convo::
# 66 "data/maps/WestLionMountain/scripts.pory"
	lock
# 67 "data/maps/WestLionMountain/scripts.pory"
	faceplayer
# 68 "data/maps/WestLionMountain/scripts.pory"
	msgbox WestLionMountain_Climber_Convo_Text_0, MSGBOX_AUTOCLOSE
# 69 "data/maps/WestLionMountain/scripts.pory"
	release
	end


WestLionMountain_Hiker_Convo::
# 74 "data/maps/WestLionMountain/scripts.pory"
	lock
# 75 "data/maps/WestLionMountain/scripts.pory"
	faceplayer
# 76 "data/maps/WestLionMountain/scripts.pory"
	msgbox WestLionMountain_Hiker_Convo_Text_0, MSGBOX_AUTOCLOSE
# 77 "data/maps/WestLionMountain/scripts.pory"
	release
	end


WestLionMountain_Sign_EastMountain::
# 82 "data/maps/WestLionMountain/scripts.pory"
	lock
# 83 "data/maps/WestLionMountain/scripts.pory"
	msgbox WestLionMountain_Sign_EastMountain_Text_0, MSGBOX_AUTOCLOSE
# 84 "data/maps/WestLionMountain/scripts.pory"
	release
	return


WestLionMountain_Climber_Convo_Text_0:
# 68 "data/maps/WestLionMountain/scripts.pory"
	.string "I've been climbing these mountains for\n"
	.string "twenty years.\p"
	.string "The rocks have been shifting lately,\n"
	.string "more than I've ever seen.\p"
	.string "It's like the mountain itself is...\n"
	.string "unsettled.$"

WestLionMountain_Hiker_Convo_Text_0:
# 76 "data/maps/WestLionMountain/scripts.pory"
	.string "Did you feel that tremor just now?\p"
	.string "They've been happening more and more\n"
	.string "frequently.\p"
	.string "The Pokemon Rangers are investigating,\n"
	.string "but they haven't found anything yet.$"

WestLionMountain_Sign_EastMountain_Text_0:
# 83 "data/maps/WestLionMountain/scripts.pory"
	.string "East Lion Mountain\n"
	.string "East$"

WestLionMountain_Text_LeroyIntro::
# 13 "data/maps/WestLionMountain/scripts.pory"
	.string "I've conquered every peak in this\n"
	.string "mountain range!\p"
	.string "You're just another obstacle on my path\n"
	.string "to greatness!$"

WestLionMountain_Text_LeroyDefeated::
# 17 "data/maps/WestLionMountain/scripts.pory"
	.string "Maybe I should stick to climbing\n"
	.string "mountains instead of battling...$"

WestLionMountain_Text_LeroyPostBattle::
# 21 "data/maps/WestLionMountain/scripts.pory"
	.string "The tremors started about a week ago.\p"
	.string "At first I thought it was just\n"
	.string "avalanches, but the pattern is too\l"
	.string "regular.\p"
	.string "Something's digging deep underground.$"

WestLionMountain_Text_WiltonIntro::
# 31 "data/maps/WestLionMountain/scripts.pory"
	.string "These mountains are home to my family\n"
	.string "for generations!\p"
	.string "I won't let some stranger wander\n"
	.string "through without a proper challenge!$"

WestLionMountain_Text_WiltonDefeated::
# 35 "data/maps/WestLionMountain/scripts.pory"
	.string "You've proven yourself worthy of these\n"
	.string "peaks...$"

WestLionMountain_Text_WiltonPostBattle::
# 39 "data/maps/WestLionMountain/scripts.pory"
	.string "My grandfather used to tell stories\n"
	.string "about ancient guardians sleeping in\l"
	.string "these mountains.\p"
	.string "Pokemon of immense power, sealed away\n"
	.string "long ago.\p"
	.string "I always thought they were just\n"
	.string "legends...$"

WestLionMountain_Text_EdgarIntro::
# 49 "data/maps/WestLionMountain/scripts.pory"
	.string "You look lost, traveler!\p"
	.string "Let me show you the power of a true\n"
	.string "mountain dweller!$"

WestLionMountain_Text_EdgarDefeated::
# 53 "data/maps/WestLionMountain/scripts.pory"
	.string "I've underestimated you... city folk\n"
	.string "aren't as weak as I thought.$"

WestLionMountain_Text_EdgarPostBattle::
# 57 "data/maps/WestLionMountain/scripts.pory"
	.string "If you're heading east, you might run\n"
	.string "into some trouble.\p"
	.string "Saw some fancy-dressed folks setting\n"
	.string "up camp near a cave entrance.\p"
	.string "They didn't look like regular hikers or\n"
	.string "researchers to me.$"
