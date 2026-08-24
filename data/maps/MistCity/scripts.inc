MistCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MistCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MistCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_MIST_CITY
	return


Mistcity_AipomGuy::
	lock
	faceplayer
	msgbox Mistcity_AipomGuy_Text_0
	waitmessage
	release
	return


Mistcity_LotadGuy::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Mistcity_LotadGuy_2
	msgbox Mistcity_LotadGuy_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
Mistcity_LotadGuy_1:
	release
	return

Mistcity_LotadGuy_2:
	msgbox Mistcity_LotadGuy_Text_0
	waitmessage
	giveitem ITEM_WAILMER_PAIL
	waitmessage
	setflag FLAG_RECEIVED_WAILMER_PAIL
	goto Mistcity_LotadGuy_1


Mistcity_PuddleKid::
	lock
	faceplayer
	msgbox Mistcity_PuddleKid_Text_0
	waitmessage
	release
	return


Mistcity_Poliwag::
	lock
	faceplayer
	playmoncry SPECIES_POLIWAG, CRY_MODE_NORMAL
	msgbox Mistcity_Poliwag_Text_0
	waitmessage
	release
	return


Mistcity_Lotad::
	lock
	faceplayer
	playmoncry SPECIES_LOTAD, CRY_MODE_NORMAL
	msgbox Mistcity_Lotad_Text_0
	waitmessage
	release
	return


Mistcity_FailedRanger::
	lock
	faceplayer
	msgbox Mistcity_FailedRanger_Text_0
	waitmessage
	release
	return


Mistcity_SpacedoutGirlMushroom::
	lock
	faceplayer
	msgbox Mistcity_SpacedoutGirlMushroom_Text_0
	waitmessage
	release
	return


Mistcity_Artist::
	lock
	faceplayer
	msgbox Mistcity_Artist_Text_0
	waitmessage
	release
	return


Mistcity_Smoker::
	lock
	faceplayer
	msgbox Mistcity_Smoker_Text_0
	waitmessage
	release
	return


Mistcity_Tourist::
	lock
	faceplayer
	msgbox Mistcity_Tourist_Text_0
	waitmessage
	release
	return


Mistcity_Sign_Welcome::
	lock
	msgbox Mistcity_Sign_Welcome_Text_0
	waitmessage
	release
	return


Mistcity_Sign_Woodworkshop::
	lock
	msgbox Mistcity_Sign_Woodworkshop_Text_0
	waitmessage
	release
	return


Mistcity_Sign_ResearchCenter::
	lock
	msgbox Mistcity_Sign_ResearchCenter_Text_0
	waitmessage
	release
	return


Mistcity_Sign_Lookout::
	lock
	msgbox Mistcity_Sign_Lookout_Text_0
	waitmessage
	release
	return


Mistcity_Sign_Mushroomhut::
	lock
	msgbox Mistcity_Sign_Mushroomhut_Text_0
	waitmessage
	release
	return


Mistcity_Sign_Gym::
	lock
	msgbox Mistcity_Sign_Gym_Text_0
	waitmessage
	release
	return


Mistcity_Gymdoor::
	lock
	faceplayer
	msgbox Mistcity_Gymdoor_Text_0
	waitmessage
	release
	return


Mistcity_Sign_DarkCave::
	lock
	msgbox Mistcity_Sign_DarkCave_Text_0
	waitmessage
	release
	return


Mistcity_DarkCaveFail::
	lock
	faceplayer
	msgbox Mistcity_DarkCaveFail_Text_0
	waitmessage
	release
	return


Mistcity_AipomGuy_Text_0:
	.string "I can't believe the nerve of that Aipom!\p"
	.string "It swiped my lunch right out of my\n"
	.string "hands with its tail, and now it's just\l"
	.string "sitting up there enjoying my sandwich!$"

Mistcity_LotadGuy_Text_0:
	.string "My Lotad collects fresh rainwater in\n"
	.string "that leaf of its every morning.\p"
	.string "I grow a few special plants - good for\n"
	.string "the knees, you know how it is.\p"
	.string "Before I had Lotad I had to water them\n"
	.string "myself with a big old pail.\p"
	.string "Took me half the morning with these\n"
	.string "joints.\p"
	.string "Now Lotad does it better than I ever\n"
	.string "could.\p"
	.string "Here, take the pail. It will do more good\n"
	.string "with a young trainer.$"

Mistcity_LotadGuy_Text_1:
	.string "Lotad was out early again this morning.\p"
	.string "Those plants are doing better than\n"
	.string "ever.\p"
	.string "Good for the knees.$"

Mistcity_PuddleKid_Text_0:
	.string "My mom says I'll catch a cold if I stay\n"
	.string "out too long, but splashing in puddles\l"
	.string "is the best way to find invisible\l"
	.string "Kecleon!$"

Mistcity_Poliwag_Text_0:
	.string "Poli!\n"
	.string "Poli-wag!$"

Mistcity_Lotad_Text_0:
	.string "Looo-tah!\n"
	.string "Lotad!$"

Mistcity_FailedRanger_Text_0:
	.string "I come here every morning to watch the\n"
	.string "trucks head out\p"
	.string "If I hadn't flunked my Ranger exam, I'd\n"
	.string "be in the driver's seat right now\l"
	.string "instead of just watching from the\l"
	.string "sidelines....$"

Mistcity_SpacedoutGirlMushroom_Text_0:
	.string "I just bought a bag of 'special'\n"
	.string "mushrooms from Leaf, and now I can't\l"
	.string "tell if the rain is moving or if the whole\l"
	.string "world is just slowly spinning...\p"
	.string "whoa....$"

Mistcity_Artist_Text_0:
	.string "I've been standing here for hours\n"
	.string "waiting for the rain to let up so I can\l"
	.string "finally paint the valley, but I'm\l"
	.string "starting to think my canvas is going to\l"
	.string "stay blank forever.$"

Mistcity_Smoker_Text_0:
	.string "I just got fired for 'unauthorized\n"
	.string "combustion of plant matter' in the\l"
	.string "locker room.\p"
	.string "Honestly, I think they're just jealous\n"
	.string "of how relaxed I am about the whole\l"
	.string "thing.\p"
	.string "I got my special herbs from Siltroot\n"
	.string "Town.\p"
	.string "Their stuff is heavvyyy...$"

Mistcity_Tourist_Text_0:
	.string "I came here to see the rare Pokémon,\n"
	.string "but nobody told me the humidity would\l"
	.string "turn my hair into a Tangela's vine!$"

Mistcity_Sign_Welcome_Text_0:
	.string "{UP_ARROW}Mist City:\n"
	.string "The Sanctuary in the Clouds.$"

Mistcity_Sign_Woodworkshop_Text_0:
	.string "Silas's Woodworks:\n"
	.string "Breathing new life into fallen branches.$"

Mistcity_Sign_ResearchCenter_Text_0:
	.string "Pokémon Diversity Center:\n"
	.string "Research - Conservation - Exploration$"

Mistcity_Sign_Lookout_Text_0:
	.string "{RIGHT_ARROW} Valley Lookout Point Ahead:\n"
	.string "The Deep Cloud Forest (Restricted Area)$"

Mistcity_Sign_Mushroomhut_Text_0:
	.string "Leaf's Fungi Hut:\n"
	.string "Rare spores, damp moss, and magical\l"
	.string "mushrooms!$"

Mistcity_Sign_Gym_Text_0:
	.string "Mist City Pokémon Gym:\n"
	.string "Darkness in the Cloud Forest.$"

Mistcity_Gymdoor_Text_0:
	.string "I'm sorry, but the Gym is temporarily\n"
	.string "closed.\p"
	.string "Normally our team of rangers runs the\n"
	.string "battles here, but right now everyone is\l"
	.string "deployed to the deep forest to answer\l"
	.string "the distress calls.$"

Mistcity_Sign_DarkCave_Text_0:
	.string "{LEFT_ARROW} Bat Cave\n"
	.string "Caution: Heavy Bat Population.$"

Mistcity_DarkCaveFail_Text_0:
	.string "I tried to make it to Siltroot, but it's\n"
	.string "pitch black inside.\p"
	.string "I barely took five steps before a swarm\n"
	.string "of Zubats chased me right back out!$"
