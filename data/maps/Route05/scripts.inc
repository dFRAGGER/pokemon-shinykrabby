Route05_MapScripts::
	.byte 0


Route05_Trainer_Randall::
# 8 "data/maps/Route05/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, Route05_Text_RandallIntro, Route05_Text_RandallDefeated
# 9 "data/maps/Route05/scripts.pory"
	msgbox Route05_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
	end


Route05_Trainer_Parker::
# 26 "data/maps/Route05/scripts.pory"
	trainerbattle_single TRAINER_PARKER, Route05_Text_ParkerIntro, Route05_Text_ParkerDefeated
# 27 "data/maps/Route05/scripts.pory"
	msgbox Route05_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
	end


Route05_Trainer_George::
# 44 "data/maps/Route05/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, Route05_Text_GeorgeIntro, Route05_Text_GeorgeDefeated
# 45 "data/maps/Route05/scripts.pory"
	msgbox Route05_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
	end


Route05_Trainer_Berke::
# 62 "data/maps/Route05/scripts.pory"
	trainerbattle_single TRAINER_BERKE, Route05_Text_BerkeIntro, Route05_Text_BerkeDefeated
# 63 "data/maps/Route05/scripts.pory"
	msgbox Route05_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
	end


Route05_Trainer_Braxton::
# 80 "data/maps/Route05/scripts.pory"
	trainerbattle_single TRAINER_BRAXTON, Route05_Text_BraxtonIntro, Route05_Text_BraxtonDefeated
# 81 "data/maps/Route05/scripts.pory"
	msgbox Route05_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
	end


Route05_Trainer_Vincent::
# 98 "data/maps/Route05/scripts.pory"
	trainerbattle_single TRAINER_VINCENT, Route05_Text_VincentIntro, Route05_Text_VincentDefeated
# 99 "data/maps/Route05/scripts.pory"
	msgbox Route05_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
	end


Route05_Hiker_Convo::
# 120 "data/maps/Route05/scripts.pory"
	lock
# 121 "data/maps/Route05/scripts.pory"
	faceplayer
# 122 "data/maps/Route05/scripts.pory"
	msgbox Route05_Hiker_Convo_Text_0, MSGBOX_AUTOCLOSE
# 123 "data/maps/Route05/scripts.pory"
	release
	end


Route05_Woman_Convo::
# 128 "data/maps/Route05/scripts.pory"
	lock
# 129 "data/maps/Route05/scripts.pory"
	faceplayer
# 130 "data/maps/Route05/scripts.pory"
	msgbox Route05_Woman_Convo_Text_0, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route05/scripts.pory"
	release
	end


Route05_Sign_WestLionMountain::
# 136 "data/maps/Route05/scripts.pory"
	lock
# 137 "data/maps/Route05/scripts.pory"
	msgbox Route05_Sign_WestLionMountain_Text_0, MSGBOX_AUTOCLOSE
# 138 "data/maps/Route05/scripts.pory"
	release
	return


Route05_Sign_Lionsarch::
# 142 "data/maps/Route05/scripts.pory"
	lock
# 143 "data/maps/Route05/scripts.pory"
	msgbox Route05_Sign_Lionsarch_Text_0, MSGBOX_AUTOCLOSE
# 144 "data/maps/Route05/scripts.pory"
	release
	return


Route05_Hiker_Convo_Text_0:
# 122 "data/maps/Route05/scripts.pory"
	.string "Huff... Huff... This mountain never gets\n"
	.string "any easier to climb!\p"
	.string "But the view of the Lion Mountains is\n"
	.string "always worth it.\p"
	.string "Just watch out for the ice patches\n"
	.string "near West Lion Mountain.$"

Route05_Woman_Convo_Text_0:
# 130 "data/maps/Route05/scripts.pory"
	.string "I come here every year to watch the\n"
	.string "Swinub migrate through the snow.\p"
	.string "They're so adorable when they root\n"
	.string "around for food!\p"
	.string "But lately, they've been acting\n"
	.string "strange... more skittish than usual.$"

Route05_Sign_WestLionMountain_Text_0:
# 137 "data/maps/Route05/scripts.pory"
	.string "West Lion Mountain\n"
	.string "Ahead$"

Route05_Sign_Lionsarch_Text_0:
# 143 "data/maps/Route05/scripts.pory"
	.string "Lionsarch City\n"
	.string "South$"

Route05_Text_RandallIntro::
# 13 "data/maps/Route05/scripts.pory"
	.string "The cold mountain air really wakes up my\n"
	.string "Pokemon!\p"
	.string "They're more energetic than ever up\n"
	.string "here!$"

Route05_Text_RandallDefeated::
# 17 "data/maps/Route05/scripts.pory"
	.string "Brr... Maybe they're TOO cold now...$"

Route05_Text_RandallPostBattle::
# 21 "data/maps/Route05/scripts.pory"
	.string "If you're heading up the mountain, be\n"
	.string "careful.\p"
	.string "I've heard strange rumbling sounds\n"
	.string "coming from the peaks lately.$"

Route05_Text_ParkerIntro::
# 31 "data/maps/Route05/scripts.pory"
	.string "I train in these mountains every\n"
	.string "winter!\p"
	.string "The harsh conditions make my Pokemon\n"
	.string "stronger!$"

Route05_Text_ParkerDefeated::
# 35 "data/maps/Route05/scripts.pory"
	.string "I guess I still have more training to\n"
	.string "do...$"

Route05_Text_ParkerPostBattle::
# 39 "data/maps/Route05/scripts.pory"
	.string "There's a group of strange people in\n"
	.string "suits heading up towards East Lion\l"
	.string "Mountain.\p"
	.string "They looked like they were carrying\n"
	.string "mining equipment.$"

Route05_Text_GeorgeIntro::
# 49 "data/maps/Route05/scripts.pory"
	.string "Ha! You think you can handle the cold?\p"
	.string "Let me show you what real mountain\n"
	.string "trainers are made of!$"

Route05_Text_GeorgeDefeated::
# 53 "data/maps/Route05/scripts.pory"
	.string "You've got fire in your spirit, I'll give\n"
	.string "you that!$"

Route05_Text_GeorgePostBattle::
# 57 "data/maps/Route05/scripts.pory"
	.string "Watch your step on the ice patches\n"
	.string "ahead.\p"
	.string "The path gets treacherous as you climb\n"
	.string "higher.$"

Route05_Text_BerkeIntro::
# 67 "data/maps/Route05/scripts.pory"
	.string "I've been hiking these mountains since\n"
	.string "I was a kid!\p"
	.string "No one knows these paths better than\n"
	.string "me!$"

Route05_Text_BerkeDefeated::
# 71 "data/maps/Route05/scripts.pory"
	.string "Well, I may know the paths, but you know\n"
	.string "how to battle!$"

Route05_Text_BerkePostBattle::
# 75 "data/maps/Route05/scripts.pory"
	.string "The earthquakes have been getting\n"
	.string "worse lately.\p"
	.string "Some folks say it's natural, but I think\n"
	.string "something's causing them.$"

Route05_Text_BraxtonIntro::
# 85 "data/maps/Route05/scripts.pory"
	.string "The mountain spirits guide my Pokemon!\p"
	.string "They won't let us lose to an outsider!$"

Route05_Text_BraxtonDefeated::
# 89 "data/maps/Route05/scripts.pory"
	.string "The spirits... they've abandoned me...$"

Route05_Text_BraxtonPostBattle::
# 93 "data/maps/Route05/scripts.pory"
	.string "Legend says ancient Pokemon once\n"
	.string "slumbered beneath these mountains.\p"
	.string "Pokemon made of rock, ice, and steel...\n"
	.string "The Golems of old.$"

Route05_Text_VincentIntro::
# 103 "data/maps/Route05/scripts.pory"
	.string "I'm searching for rare Ice-type\n"
	.string "Pokemon!\p"
	.string "But first, let me test your skills!$"

Route05_Text_VincentDefeated::
# 107 "data/maps/Route05/scripts.pory"
	.string "You're stronger than the Pokemon I've\n"
	.string "been searching for!$"

Route05_Text_VincentPostBattle::
# 111 "data/maps/Route05/scripts.pory"
	.string "Have you seen the cave entrance on\n"
	.string "East Lion Mountain?\p"
	.string "Some official-looking people blocked it\n"
	.string "off recently.\p"
	.string "They said it was for 'geological\n"
	.string "research' or something.$"
