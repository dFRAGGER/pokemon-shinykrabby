Route05_MapScripts::
	.byte 0


Route05_Trainer_Randall::
# 8 "data/maps/Route05/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, Route05_Text_RandallIntro, Route05_Text_RandallDefeated
# 9 "data/maps/Route05/scripts.pory"
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, Route05_Trainer_Randall_2
# 12 "data/maps/Route05/scripts.pory"
	msgbox Route05_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
Route05_Trainer_Randall_1:
	end

Route05_Trainer_Randall_2:
# 10 "data/maps/Route05/scripts.pory"
	msgbox Route05_Text_RandallPostBattle_After, MSGBOX_AUTOCLOSE
	goto Route05_Trainer_Randall_1


Route05_Trainer_Parker::
# 34 "data/maps/Route05/scripts.pory"
	trainerbattle_single TRAINER_PARKER, Route05_Text_ParkerIntro, Route05_Text_ParkerDefeated
# 35 "data/maps/Route05/scripts.pory"
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, Route05_Trainer_Parker_2
# 38 "data/maps/Route05/scripts.pory"
	msgbox Route05_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
Route05_Trainer_Parker_1:
	end

Route05_Trainer_Parker_2:
# 36 "data/maps/Route05/scripts.pory"
	msgbox Route05_Text_ParkerPostBattle_After, MSGBOX_AUTOCLOSE
	goto Route05_Trainer_Parker_1


Route05_Trainer_George::
# 60 "data/maps/Route05/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, Route05_Text_GeorgeIntro, Route05_Text_GeorgeDefeated
# 61 "data/maps/Route05/scripts.pory"
	msgbox Route05_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
	end


Route05_Trainer_Berke::
# 78 "data/maps/Route05/scripts.pory"
	trainerbattle_single TRAINER_BERKE, Route05_Text_BerkeIntro, Route05_Text_BerkeDefeated
# 79 "data/maps/Route05/scripts.pory"
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, Route05_Trainer_Berke_2
# 82 "data/maps/Route05/scripts.pory"
	msgbox Route05_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
Route05_Trainer_Berke_1:
	end

Route05_Trainer_Berke_2:
# 80 "data/maps/Route05/scripts.pory"
	msgbox Route05_Text_BerkePostBattle_After, MSGBOX_AUTOCLOSE
	goto Route05_Trainer_Berke_1


Route05_Trainer_Braxton::
# 104 "data/maps/Route05/scripts.pory"
	trainerbattle_single TRAINER_BRAXTON, Route05_Text_BraxtonIntro, Route05_Text_BraxtonDefeated
# 105 "data/maps/Route05/scripts.pory"
	msgbox Route05_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
	end


Route05_Trainer_Vincent::
# 122 "data/maps/Route05/scripts.pory"
	trainerbattle_single TRAINER_VINCENT, Route05_Text_VincentIntro, Route05_Text_VincentDefeated
# 123 "data/maps/Route05/scripts.pory"
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, Route05_Trainer_Vincent_2
# 126 "data/maps/Route05/scripts.pory"
	msgbox Route05_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
Route05_Trainer_Vincent_1:
	end

Route05_Trainer_Vincent_2:
# 124 "data/maps/Route05/scripts.pory"
	msgbox Route05_Text_VincentPostBattle_After, MSGBOX_AUTOCLOSE
	goto Route05_Trainer_Vincent_1


Route05_Hiker_Convo::
# 152 "data/maps/Route05/scripts.pory"
	lock
# 153 "data/maps/Route05/scripts.pory"
	faceplayer
# 154 "data/maps/Route05/scripts.pory"
	goto_if_unset FLAG_ITEM_ROUTE05_NEVER_MELT_ICE, Route05_Hiker_Convo_2
# 162 "data/maps/Route05/scripts.pory"
	msgbox Route05_Hiker_Convo_Text_1, MSGBOX_AUTOCLOSE
# 163 "data/maps/Route05/scripts.pory"
	waitmessage
Route05_Hiker_Convo_1:
# 165 "data/maps/Route05/scripts.pory"
	release
	end

Route05_Hiker_Convo_2:
# 155 "data/maps/Route05/scripts.pory"
	msgbox Route05_Hiker_Convo_Text_0
# 156 "data/maps/Route05/scripts.pory"
	waitmessage
# 157 "data/maps/Route05/scripts.pory"
	giveitem ITEM_NEVER_MELT_ICE
# 158 "data/maps/Route05/scripts.pory"
	waitmessage
# 159 "data/maps/Route05/scripts.pory"
	setflag FLAG_ITEM_ROUTE05_NEVER_MELT_ICE
	goto Route05_Hiker_Convo_1


Route05_Woman_Convo::
# 170 "data/maps/Route05/scripts.pory"
	lock
# 171 "data/maps/Route05/scripts.pory"
	faceplayer
# 172 "data/maps/Route05/scripts.pory"
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, Route05_Woman_Convo_2
# 175 "data/maps/Route05/scripts.pory"
	msgbox Route05_Woman_Convo_Text_1, MSGBOX_AUTOCLOSE
Route05_Woman_Convo_1:
# 177 "data/maps/Route05/scripts.pory"
	release
	end

Route05_Woman_Convo_2:
# 173 "data/maps/Route05/scripts.pory"
	msgbox Route05_Woman_Convo_Text_0, MSGBOX_AUTOCLOSE
	goto Route05_Woman_Convo_1


Route05_Sign_WestLionMountain::
# 182 "data/maps/Route05/scripts.pory"
	lock
# 183 "data/maps/Route05/scripts.pory"
	msgbox Route05_Sign_WestLionMountain_Text_0, MSGBOX_AUTOCLOSE
# 184 "data/maps/Route05/scripts.pory"
	release
	return


Route05_Sign_Lionsarch::
# 188 "data/maps/Route05/scripts.pory"
	lock
# 189 "data/maps/Route05/scripts.pory"
	msgbox Route05_Sign_Lionsarch_Text_0, MSGBOX_AUTOCLOSE
# 190 "data/maps/Route05/scripts.pory"
	release
	return


Route05_Hiker_Convo_Text_0:
# 155 "data/maps/Route05/scripts.pory"
	.string "Huff... Huff... This mountain never gets\n"
	.string "any easier to climb!\p"
	.string "The ice patches near West Lion\n"
	.string "Mountain are brutal this time of year.\p"
	.string "Found this chunk frozen into the rock\n"
	.string "face up there, never melts, even in\l"
	.string "summer.\p"
	.string "No use to me with these heavy boots.\p"
	.string "Here, it'll do more for a Pokémon than it\n"
	.string "ever will for my ankles.$"

Route05_Hiker_Convo_Text_1:
# 162 "data/maps/Route05/scripts.pory"
	.string "Huff... Huff... Still going...\p"
	.string "Watch those ice patches near West Lion\n"
	.string "Mountain.$"

Route05_Woman_Convo_Text_0:
# 173 "data/maps/Route05/scripts.pory"
	.string "I come here every year to watch the\n"
	.string "Swinub migrate through the snow.\p"
	.string "They're back to their normal routine!\p"
	.string "Rooting around happily like nothing\n"
	.string "ever happened.\p"
	.string "Animals always know when something is\n"
	.string "wrong.$"

Route05_Woman_Convo_Text_1:
# 175 "data/maps/Route05/scripts.pory"
	.string "I come here every year to watch the\n"
	.string "Swinub migrate through the snow.\p"
	.string "They're so adorable when they root\n"
	.string "around for food!\p"
	.string "But lately, they've been acting\n"
	.string "strange... more skittish than usual.$"

Route05_Sign_WestLionMountain_Text_0:
# 183 "data/maps/Route05/scripts.pory"
	.string "West Lion Mountain\n"
	.string "Ahead$"

Route05_Sign_Lionsarch_Text_0:
# 189 "data/maps/Route05/scripts.pory"
	.string "Lionsarch City\n"
	.string "South$"

Route05_Text_RandallIntro::
# 17 "data/maps/Route05/scripts.pory"
	.string "The cold mountain air really wakes up my\n"
	.string "Pokemon!\p"
	.string "They're more energetic than ever up\n"
	.string "here!$"

Route05_Text_RandallDefeated::
# 21 "data/maps/Route05/scripts.pory"
	.string "Brr... Maybe they're TOO cold now...$"

Route05_Text_RandallPostBattle::
# 25 "data/maps/Route05/scripts.pory"
	.string "If you're heading up the mountain, be\n"
	.string "careful.\p"
	.string "I've heard strange rumbling sounds\n"
	.string "coming from the peaks lately.$"

Route05_Text_RandallPostBattle_After::
# 29 "data/maps/Route05/scripts.pory"
	.string "The mountains have gone quiet again.\p"
	.string "Whatever was making that rumbling up\n"
	.string "there has stopped.\p"
	.string "The air feels different now. Calmer\n"
	.string "somehow.$"

Route05_Text_ParkerIntro::
# 43 "data/maps/Route05/scripts.pory"
	.string "I train in these mountains every\n"
	.string "winter!\p"
	.string "The harsh conditions make my Pokemon\n"
	.string "stronger!$"

Route05_Text_ParkerDefeated::
# 47 "data/maps/Route05/scripts.pory"
	.string "I guess I still have more training to\n"
	.string "do...$"

Route05_Text_ParkerPostBattle::
# 51 "data/maps/Route05/scripts.pory"
	.string "There's a group of strange people in\n"
	.string "suits heading up towards East Lion\l"
	.string "Mountain.\p"
	.string "They looked like they were carrying\n"
	.string "mining equipment.$"

Route05_Text_ParkerPostBattle_After::
# 55 "data/maps/Route05/scripts.pory"
	.string "Remember those suited people I\n"
	.string "mentioned heading up the mountain?\p"
	.string "Saw them coming back down with barely\n"
	.string "any gear.\p"
	.string "Looked like they left in a hurry too.$"

Route05_Text_GeorgeIntro::
# 65 "data/maps/Route05/scripts.pory"
	.string "Ha! You think you can handle the cold?\p"
	.string "Let me show you what real mountain\n"
	.string "trainers are made of!$"

Route05_Text_GeorgeDefeated::
# 69 "data/maps/Route05/scripts.pory"
	.string "You've got fire in your spirit, I'll give\n"
	.string "you that!$"

Route05_Text_GeorgePostBattle::
# 73 "data/maps/Route05/scripts.pory"
	.string "Watch your step on the ice patches\n"
	.string "ahead.\p"
	.string "The path gets treacherous as you climb\n"
	.string "higher.$"

Route05_Text_BerkeIntro::
# 87 "data/maps/Route05/scripts.pory"
	.string "I've been hiking these mountains since\n"
	.string "I was a kid!\p"
	.string "No one knows these paths better than\n"
	.string "me!$"

Route05_Text_BerkeDefeated::
# 91 "data/maps/Route05/scripts.pory"
	.string "Well, I may know the paths, but you know\n"
	.string "how to battle!$"

Route05_Text_BerkePostBattle::
# 95 "data/maps/Route05/scripts.pory"
	.string "The earthquakes have been getting\n"
	.string "worse lately.\p"
	.string "Some folks say it's natural, but I think\n"
	.string "something's causing them.$"

Route05_Text_BerkePostBattle_After::
# 99 "data/maps/Route05/scripts.pory"
	.string "The earthquakes stopped completely.\p"
	.string "Turns out I was right - something WAS\n"
	.string "causing them.\p"
	.string "Still don't know exactly what, but\n"
	.string "they're gone now.\p"
	.string "That's good enough for me.$"

Route05_Text_BraxtonIntro::
# 109 "data/maps/Route05/scripts.pory"
	.string "The mountain spirits guide my Pokemon!\p"
	.string "They won't let us lose to an outsider!$"

Route05_Text_BraxtonDefeated::
# 113 "data/maps/Route05/scripts.pory"
	.string "The spirits... they've abandoned me...$"

Route05_Text_BraxtonPostBattle::
# 117 "data/maps/Route05/scripts.pory"
	.string "Legend says ancient Pokemon once\n"
	.string "slumbered beneath these mountains.\p"
	.string "Pokemon made of rock, ice, and steel...\n"
	.string "The Golems of old.$"

Route05_Text_VincentIntro::
# 131 "data/maps/Route05/scripts.pory"
	.string "I'm searching for rare Ice-type\n"
	.string "Pokemon!\p"
	.string "But first, let me test your skills!$"

Route05_Text_VincentDefeated::
# 135 "data/maps/Route05/scripts.pory"
	.string "You're stronger than the Pokemon I've\n"
	.string "been searching for!$"

Route05_Text_VincentPostBattle::
# 139 "data/maps/Route05/scripts.pory"
	.string "Have you seen the cave entrance on\n"
	.string "East Lion Mountain?\p"
	.string "Some official-looking people blocked it\n"
	.string "off recently.\p"
	.string "They said it was for 'geological\n"
	.string "research' or something.$"

Route05_Text_VincentPostBattle_After::
# 143 "data/maps/Route05/scripts.pory"
	.string "That blockade on East Lion Mountain is\n"
	.string "gone.\p"
	.string "The people who put it up just vanished\n"
	.string "overnight.\p"
	.string "I finally got a proper look at that cave\n"
	.string "entrance.\p"
	.string "It goes really deep...$"
