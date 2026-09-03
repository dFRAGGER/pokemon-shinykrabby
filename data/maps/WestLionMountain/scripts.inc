WestLionMountain_MapScripts::
	.byte 0


WestLionMountain_Trainer_Leroy::
	trainerbattle_single TRAINER_LEROY_WEST_LION_SK, WestLionMountain_Text_LeroyIntro, WestLionMountain_Text_LeroyDefeated
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, WestLionMountain_Trainer_Leroy_2
	msgbox WestLionMountain_Text_LeroyPostBattle, MSGBOX_AUTOCLOSE
WestLionMountain_Trainer_Leroy_1:
	end

WestLionMountain_Trainer_Leroy_2:
	msgbox WestLionMountain_Text_LeroyPostBattle_After, MSGBOX_AUTOCLOSE
	goto WestLionMountain_Trainer_Leroy_1


WestLionMountain_Trainer_Wilton::
	trainerbattle_single TRAINER_WILTON_WEST_LION_SK, WestLionMountain_Text_WiltonIntro, WestLionMountain_Text_WiltonDefeated
	msgbox WestLionMountain_Text_WiltonPostBattle, MSGBOX_AUTOCLOSE
	end


WestLionMountain_Trainer_Edgar::
	trainerbattle_single TRAINER_EDGAR_WEST_LION_SK, WestLionMountain_Text_EdgarIntro, WestLionMountain_Text_EdgarDefeated
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, WestLionMountain_Trainer_Edgar_2
	msgbox WestLionMountain_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
WestLionMountain_Trainer_Edgar_1:
	end

WestLionMountain_Trainer_Edgar_2:
	msgbox WestLionMountain_Text_EdgarPostBattle_After, MSGBOX_AUTOCLOSE
	goto WestLionMountain_Trainer_Edgar_1


WestLionMountain_Climber_Convo::
	lock
	faceplayer
	goto_if_unset FLAG_ITEM_WESTLION_TM_CALM_MIND, WestLionMountain_Climber_Convo_2
	goto_if_unset FLAG_HIDE_FACULTY_AT_WESTLION_MINE, WestLionMountain_Climber_Convo_8
	msgbox WestLionMountain_Climber_Convo_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
WestLionMountain_Climber_Convo_1:
	release
	end

WestLionMountain_Climber_Convo_2:
	goto_if_unset FLAG_HIDE_FACULTY_AT_WESTLION_MINE, WestLionMountain_Climber_Convo_5
	msgbox WestLionMountain_Climber_Convo_Text_1
	waitmessage
	giveitem ITEM_TM_CALM_MIND
	waitmessage
	setflag FLAG_ITEM_WESTLION_TM_CALM_MIND
	goto WestLionMountain_Climber_Convo_1

WestLionMountain_Climber_Convo_5:
	msgbox WestLionMountain_Climber_Convo_Text_0
	waitmessage
	giveitem ITEM_TM_CALM_MIND
	waitmessage
	setflag FLAG_ITEM_WESTLION_TM_CALM_MIND
	goto WestLionMountain_Climber_Convo_1

WestLionMountain_Climber_Convo_8:
	msgbox WestLionMountain_Climber_Convo_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	goto WestLionMountain_Climber_Convo_1


WestLionMountain_Hiker_Convo::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, WestLionMountain_Hiker_Convo_2
	msgbox WestLionMountain_Hiker_Convo_Text_1, MSGBOX_AUTOCLOSE
WestLionMountain_Hiker_Convo_1:
	release
	end

WestLionMountain_Hiker_Convo_2:
	msgbox WestLionMountain_Hiker_Convo_Text_0, MSGBOX_AUTOCLOSE
	goto WestLionMountain_Hiker_Convo_1


WestLionMountain_Sign_EastMountain::
	lock
	msgbox WestLionMountain_Sign_EastMountain_Text_0, MSGBOX_AUTOCLOSE
	release
	return


WestLionMountain_Climber_Convo_Text_0:
	.string "I've been climbing these mountains for\n"
	.string "twenty years.\p"
	.string "The rocks have been shifting lately,\n"
	.string "more than I've ever seen.\p"
	.string "It's like the mountain itself is...\n"
	.string "unsettled.\p"
	.string "Here, take this before you head further\n"
	.string "up.\p"
	.string "Calm Mind. Up here, panic gets you\n"
	.string "killed.\p"
	.string "You quiet the noise, and suddenly you\n"
	.string "see the path.\p"
	.string "Same thing in battle.$"

WestLionMountain_Climber_Convo_Text_1:
	.string "Twenty years on these peaks and I've\n"
	.string "seen a lot come and go.\p"
	.string "Those brown-suited folks arrived like\n"
	.string "they owned the place...\p"
	.string "and left just as suddenly.\p"
	.string "The mountain outlasts them all.\p"
	.string "Calm Mind. You've earned it.$"

WestLionMountain_Climber_Convo_Text_2:
	.string "The rocks have been shifting lately.\p"
	.string "Stay on the marked paths and watch\n"
	.string "your footing.$"

WestLionMountain_Climber_Convo_Text_3:
	.string "Twenty years on these peaks and I've\n"
	.string "seen a lot come and go.\p"
	.string "The mountain outlasts them all.$"

WestLionMountain_Hiker_Convo_Text_0:
	.string "Have you noticed how quiet it's been up\n"
	.string "here lately?\p"
	.string "No more tremors since those people in\n"
	.string "brown suits disappeared.\p"
	.string "The Rangers closed their investigation\n"
	.string "too.\p"
	.string "Whatever was going on down there, it's\n"
	.string "over.$"

WestLionMountain_Hiker_Convo_Text_1:
	.string "Did you feel that tremor just now?\p"
	.string "They've been happening more and more\n"
	.string "frequently.\p"
	.string "The Pokemon Rangers are investigating,\n"
	.string "but they haven't found anything yet.$"

WestLionMountain_Sign_EastMountain_Text_0:
	.string "East Lion Mountain\n"
	.string "East$"

WestLionMountain_Text_LeroyIntro::
	.string "I've conquered every peak in this\n"
	.string "mountain range!\p"
	.string "You're just another obstacle on my path\n"
	.string "to greatness!$"

WestLionMountain_Text_LeroyDefeated::
	.string "Maybe I should stick to climbing\n"
	.string "mountains instead of battling...$"

WestLionMountain_Text_LeroyPostBattle::
	.string "The tremors started about a week ago.\p"
	.string "At first I thought it was just\n"
	.string "avalanches, but the pattern is too\l"
	.string "regular.\p"
	.string "Something's digging deep underground.$"

WestLionMountain_Text_LeroyPostBattle_After::
	.string "The mountain's all mine again!\p"
	.string "Those suited people had roped off half\n"
	.string "the eastern trails.\p"
	.string "Now that they're gone I can finally get\n"
	.string "back to conquering every peak!$"

WestLionMountain_Text_WiltonIntro::
	.string "These mountains are home to my family\n"
	.string "for generations!\p"
	.string "I won't let some stranger wander\n"
	.string "through without a proper challenge!$"

WestLionMountain_Text_WiltonDefeated::
	.string "You've proven yourself worthy of these\n"
	.string "peaks...$"

WestLionMountain_Text_WiltonPostBattle::
	.string "My grandfather used to tell stories\n"
	.string "about ancient guardians sleeping in\l"
	.string "these mountains.\p"
	.string "Pokemon of immense power, sealed away\n"
	.string "long ago.\p"
	.string "I always thought they were just\n"
	.string "legends...$"

WestLionMountain_Text_EdgarIntro::
	.string "You look lost, traveler!\p"
	.string "Let me show you the power of a true\n"
	.string "mountain dweller!$"

WestLionMountain_Text_EdgarDefeated::
	.string "I've underestimated you... city folk\n"
	.string "aren't as weak as I thought.$"

WestLionMountain_Text_EdgarPostBattle::
	.string "If you're heading east, you might run\n"
	.string "into some trouble.\p"
	.string "Saw some fancy-dressed folks setting\n"
	.string "up camp near a cave entrance.\p"
	.string "They didn't look like regular hikers or\n"
	.string "researchers to me.$"

WestLionMountain_Text_EdgarPostBattle_After::
	.string "Saw those fancy people loading up their\n"
	.string "gear and heading south.\p"
	.string "Didn't say a word to anyone, just\n"
	.string "packed up and left.\p"
	.string "Fine by me. They never belonged up here\n"
	.string "anyway.$"
