Route05_MapScripts::
	.byte 0


Route05_Trainer_Randall::
	trainerbattle_single TRAINER_RANDALL_ROUTE05_SK, Route05_Text_RandallIntro, Route05_Text_RandallDefeated
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, Route05_Trainer_Randall_2
	msgbox Route05_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
Route05_Trainer_Randall_1:
	end

Route05_Trainer_Randall_2:
	msgbox Route05_Text_RandallPostBattle_After, MSGBOX_AUTOCLOSE
	goto Route05_Trainer_Randall_1


Route05_Trainer_Parker::
	trainerbattle_single TRAINER_PARKER_ROUTE05_SK, Route05_Text_ParkerIntro, Route05_Text_ParkerDefeated
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, Route05_Trainer_Parker_2
	msgbox Route05_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
Route05_Trainer_Parker_1:
	end

Route05_Trainer_Parker_2:
	msgbox Route05_Text_ParkerPostBattle_After, MSGBOX_AUTOCLOSE
	goto Route05_Trainer_Parker_1


Route05_Trainer_George::
	trainerbattle_single TRAINER_GEORGE_ROUTE05_SK, Route05_Text_GeorgeIntro, Route05_Text_GeorgeDefeated
	msgbox Route05_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
	end


Route05_Trainer_Berke::
	trainerbattle_single TRAINER_BERKE_ROUTE05_SK, Route05_Text_BerkeIntro, Route05_Text_BerkeDefeated
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, Route05_Trainer_Berke_2
	msgbox Route05_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
Route05_Trainer_Berke_1:
	end

Route05_Trainer_Berke_2:
	msgbox Route05_Text_BerkePostBattle_After, MSGBOX_AUTOCLOSE
	goto Route05_Trainer_Berke_1


Route05_Trainer_Braxton::
	trainerbattle_single TRAINER_BRAXTON_ROUTE05_SK, Route05_Text_BraxtonIntro, Route05_Text_BraxtonDefeated
	msgbox Route05_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
	end


Route05_Trainer_Vincent::
	trainerbattle_single TRAINER_VINCENT_ROUTE05_SK, Route05_Text_VincentIntro, Route05_Text_VincentDefeated
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, Route05_Trainer_Vincent_2
	msgbox Route05_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
Route05_Trainer_Vincent_1:
	end

Route05_Trainer_Vincent_2:
	msgbox Route05_Text_VincentPostBattle_After, MSGBOX_AUTOCLOSE
	goto Route05_Trainer_Vincent_1


Route05_Hiker_Convo::
	lock
	faceplayer
	goto_if_unset FLAG_ITEM_ROUTE05_NEVER_MELT_ICE, Route05_Hiker_Convo_2
	msgbox Route05_Hiker_Convo_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
Route05_Hiker_Convo_1:
	release
	end

Route05_Hiker_Convo_2:
	msgbox Route05_Hiker_Convo_Text_0
	waitmessage
	giveitem ITEM_NEVER_MELT_ICE
	waitmessage
	setflag FLAG_ITEM_ROUTE05_NEVER_MELT_ICE
	goto Route05_Hiker_Convo_1


Route05_Woman_Convo::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, Route05_Woman_Convo_2
	msgbox Route05_Woman_Convo_Text_1, MSGBOX_AUTOCLOSE
Route05_Woman_Convo_1:
	release
	end

Route05_Woman_Convo_2:
	msgbox Route05_Woman_Convo_Text_0, MSGBOX_AUTOCLOSE
	goto Route05_Woman_Convo_1


Route05_Sign_WestLionMountain::
	lock
	msgbox Route05_Sign_WestLionMountain_Text_0, MSGBOX_AUTOCLOSE
	release
	return


Route05_Sign_Lionsarch::
	lock
	msgbox Route05_Sign_Lionsarch_Text_0, MSGBOX_AUTOCLOSE
	release
	return


Route05_Hiker_Convo_Text_0:
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
	.string "Huff... Huff... Still going...\p"
	.string "Watch those ice patches near West Lion\n"
	.string "Mountain.$"

Route05_Woman_Convo_Text_0:
	.string "I come here every year to watch the\n"
	.string "Swinub migrate through the snow.\p"
	.string "They're back to their normal routine!\p"
	.string "Rooting around happily like nothing\n"
	.string "ever happened.\p"
	.string "Animals always know when something is\n"
	.string "wrong.$"

Route05_Woman_Convo_Text_1:
	.string "I come here every year to watch the\n"
	.string "Swinub migrate through the snow.\p"
	.string "They're so adorable when they root\n"
	.string "around for food!\p"
	.string "But lately, they've been acting\n"
	.string "strange... more skittish than usual.$"

Route05_Sign_WestLionMountain_Text_0:
	.string "West Lion Mountain\n"
	.string "Ahead$"

Route05_Sign_Lionsarch_Text_0:
	.string "Lionsarch City\n"
	.string "South$"

Route05_Text_RandallIntro::
	.string "The cold mountain air really wakes up my\n"
	.string "Pokemon!\p"
	.string "They're more energetic than ever up\n"
	.string "here!$"

Route05_Text_RandallDefeated::
	.string "Brr... Maybe they're TOO cold now...$"

Route05_Text_RandallPostBattle::
	.string "If you're heading up the mountain, be\n"
	.string "careful.\p"
	.string "I've heard strange rumbling sounds\n"
	.string "coming from the peaks lately.$"

Route05_Text_RandallPostBattle_After::
	.string "The mountains have gone quiet again.\p"
	.string "Whatever was making that rumbling up\n"
	.string "there has stopped.\p"
	.string "The air feels different now. Calmer\n"
	.string "somehow.$"

Route05_Text_ParkerIntro::
	.string "I train in these mountains every\n"
	.string "winter!\p"
	.string "The harsh conditions make my Pokemon\n"
	.string "stronger!$"

Route05_Text_ParkerDefeated::
	.string "I guess I still have more training to\n"
	.string "do...$"

Route05_Text_ParkerPostBattle::
	.string "There's a group of strange people in\n"
	.string "suits heading up towards East Lion\l"
	.string "Mountain.\p"
	.string "They looked like they were carrying\n"
	.string "mining equipment.$"

Route05_Text_ParkerPostBattle_After::
	.string "Remember those suited people I\n"
	.string "mentioned heading up the mountain?\p"
	.string "Saw them coming back down with barely\n"
	.string "any gear.\p"
	.string "Looked like they left in a hurry too.$"

Route05_Text_GeorgeIntro::
	.string "Ha! You think you can handle the cold?\p"
	.string "Let me show you what real mountain\n"
	.string "trainers are made of!$"

Route05_Text_GeorgeDefeated::
	.string "You've got fire in your spirit, I'll give\n"
	.string "you that!$"

Route05_Text_GeorgePostBattle::
	.string "Watch your step on the ice patches\n"
	.string "ahead.\p"
	.string "The path gets treacherous as you climb\n"
	.string "higher.$"

Route05_Text_BerkeIntro::
	.string "I've been hiking these mountains since\n"
	.string "I was a kid!\p"
	.string "No one knows these paths better than\n"
	.string "me!$"

Route05_Text_BerkeDefeated::
	.string "Well, I may know the paths, but you know\n"
	.string "how to battle!$"

Route05_Text_BerkePostBattle::
	.string "The earthquakes have been getting\n"
	.string "worse lately.\p"
	.string "Some folks say it's natural, but I think\n"
	.string "something's causing them.$"

Route05_Text_BerkePostBattle_After::
	.string "The earthquakes stopped completely.\p"
	.string "Turns out I was right - something WAS\n"
	.string "causing them.\p"
	.string "Still don't know exactly what, but\n"
	.string "they're gone now.\p"
	.string "That's good enough for me.$"

Route05_Text_BraxtonIntro::
	.string "The mountain spirits guide my Pokemon!\p"
	.string "They won't let us lose to an outsider!$"

Route05_Text_BraxtonDefeated::
	.string "The spirits... they've abandoned me...$"

Route05_Text_BraxtonPostBattle::
	.string "Legend says ancient Pokemon once\n"
	.string "slumbered beneath these mountains.\p"
	.string "Pokemon made of rock, ice, and steel...\n"
	.string "The Golems of old.$"

Route05_Text_VincentIntro::
	.string "I'm searching for rare Ice-type\n"
	.string "Pokemon!\p"
	.string "But first, let me test your skills!$"

Route05_Text_VincentDefeated::
	.string "You're stronger than the Pokemon I've\n"
	.string "been searching for!$"

Route05_Text_VincentPostBattle::
	.string "Have you seen the cave entrance on\n"
	.string "East Lion Mountain?\p"
	.string "Some official-looking people blocked it\n"
	.string "off recently.\p"
	.string "They said it was for 'geological\n"
	.string "research' or something.$"

Route05_Text_VincentPostBattle_After::
	.string "That blockade on East Lion Mountain is\n"
	.string "gone.\p"
	.string "The people who put it up just vanished\n"
	.string "overnight.\p"
	.string "I finally got a proper look at that cave\n"
	.string "entrance.\p"
	.string "It goes really deep...$"
