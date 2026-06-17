MistCity_MapScripts::
# 2 "data/maps/MistCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MistCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MistCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MistCity/scripts.pory"
	setflag FLAG_VISITED_MIST_CITY
	return


Mistcity_AipomGuy::
# 8 "data/maps/MistCity/scripts.pory"
	lock
# 9 "data/maps/MistCity/scripts.pory"
	faceplayer
# 10 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_AipomGuy_Text_0
# 11 "data/maps/MistCity/scripts.pory"
	waitmessage
# 12 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_LotadGuy::
# 16 "data/maps/MistCity/scripts.pory"
	lock
# 17 "data/maps/MistCity/scripts.pory"
	faceplayer
# 18 "data/maps/MistCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Mistcity_LotadGuy_2
# 26 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_LotadGuy_Text_1, MSGBOX_AUTOCLOSE
# 27 "data/maps/MistCity/scripts.pory"
	waitmessage
Mistcity_LotadGuy_1:
# 29 "data/maps/MistCity/scripts.pory"
	release
	return

Mistcity_LotadGuy_2:
# 19 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_LotadGuy_Text_0
# 20 "data/maps/MistCity/scripts.pory"
	waitmessage
# 21 "data/maps/MistCity/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 22 "data/maps/MistCity/scripts.pory"
	waitmessage
# 23 "data/maps/MistCity/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
	goto Mistcity_LotadGuy_1


Mistcity_PuddleKid::
# 33 "data/maps/MistCity/scripts.pory"
	lock
# 34 "data/maps/MistCity/scripts.pory"
	faceplayer
# 35 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_PuddleKid_Text_0
# 36 "data/maps/MistCity/scripts.pory"
	waitmessage
# 37 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Poliwag::
# 41 "data/maps/MistCity/scripts.pory"
	lock
# 42 "data/maps/MistCity/scripts.pory"
	faceplayer
# 43 "data/maps/MistCity/scripts.pory"
	playmoncry SPECIES_POLIWAG, CRY_MODE_NORMAL
# 44 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Poliwag_Text_0
# 45 "data/maps/MistCity/scripts.pory"
	waitmessage
# 46 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Lotad::
# 50 "data/maps/MistCity/scripts.pory"
	lock
# 51 "data/maps/MistCity/scripts.pory"
	faceplayer
# 52 "data/maps/MistCity/scripts.pory"
	playmoncry SPECIES_LOTAD, CRY_MODE_NORMAL
# 53 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Lotad_Text_0
# 54 "data/maps/MistCity/scripts.pory"
	waitmessage
# 55 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_FailedRanger::
# 59 "data/maps/MistCity/scripts.pory"
	lock
# 60 "data/maps/MistCity/scripts.pory"
	faceplayer
# 61 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_FailedRanger_Text_0
# 62 "data/maps/MistCity/scripts.pory"
	waitmessage
# 63 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_SpacedoutGirlMushroom::
# 67 "data/maps/MistCity/scripts.pory"
	lock
# 68 "data/maps/MistCity/scripts.pory"
	faceplayer
# 69 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_SpacedoutGirlMushroom_Text_0
# 70 "data/maps/MistCity/scripts.pory"
	waitmessage
# 71 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Artist::
# 75 "data/maps/MistCity/scripts.pory"
	lock
# 76 "data/maps/MistCity/scripts.pory"
	faceplayer
# 77 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Artist_Text_0
# 78 "data/maps/MistCity/scripts.pory"
	waitmessage
# 79 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Smoker::
# 83 "data/maps/MistCity/scripts.pory"
	lock
# 84 "data/maps/MistCity/scripts.pory"
	faceplayer
# 85 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Smoker_Text_0
# 86 "data/maps/MistCity/scripts.pory"
	waitmessage
# 87 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Tourist::
# 91 "data/maps/MistCity/scripts.pory"
	lock
# 92 "data/maps/MistCity/scripts.pory"
	faceplayer
# 93 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Tourist_Text_0
# 94 "data/maps/MistCity/scripts.pory"
	waitmessage
# 95 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Sign_Welcome::
# 99 "data/maps/MistCity/scripts.pory"
	lock
# 100 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Sign_Welcome_Text_0
# 101 "data/maps/MistCity/scripts.pory"
	waitmessage
# 102 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Sign_Woodworkshop::
# 106 "data/maps/MistCity/scripts.pory"
	lock
# 107 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Sign_Woodworkshop_Text_0
# 108 "data/maps/MistCity/scripts.pory"
	waitmessage
# 109 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Sign_ResearchCenter::
# 113 "data/maps/MistCity/scripts.pory"
	lock
# 114 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Sign_ResearchCenter_Text_0
# 115 "data/maps/MistCity/scripts.pory"
	waitmessage
# 116 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Sign_Lookout::
# 120 "data/maps/MistCity/scripts.pory"
	lock
# 121 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Sign_Lookout_Text_0
# 122 "data/maps/MistCity/scripts.pory"
	waitmessage
# 123 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Sign_Mushroomhut::
# 127 "data/maps/MistCity/scripts.pory"
	lock
# 128 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Sign_Mushroomhut_Text_0
# 129 "data/maps/MistCity/scripts.pory"
	waitmessage
# 130 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Sign_Gym::
# 134 "data/maps/MistCity/scripts.pory"
	lock
# 135 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Sign_Gym_Text_0
# 136 "data/maps/MistCity/scripts.pory"
	waitmessage
# 137 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Gymdoor::
# 141 "data/maps/MistCity/scripts.pory"
	lock
# 142 "data/maps/MistCity/scripts.pory"
	faceplayer
# 143 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Gymdoor_Text_0
# 144 "data/maps/MistCity/scripts.pory"
	waitmessage
# 145 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Sign_DarkCave::
# 149 "data/maps/MistCity/scripts.pory"
	lock
# 150 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Sign_DarkCave_Text_0
# 151 "data/maps/MistCity/scripts.pory"
	waitmessage
# 152 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_DarkCaveFail::
# 156 "data/maps/MistCity/scripts.pory"
	lock
# 157 "data/maps/MistCity/scripts.pory"
	faceplayer
# 158 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_DarkCaveFail_Text_0
# 159 "data/maps/MistCity/scripts.pory"
	waitmessage
# 160 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_AipomGuy_Text_0:
# 10 "data/maps/MistCity/scripts.pory"
	.string "I can't believe the nerve of that Aipom!\p"
	.string "It swiped my lunch right out of my\n"
	.string "hands with its tail, and now it's just\l"
	.string "sitting up there enjoying my sandwich!$"

Mistcity_LotadGuy_Text_0:
# 19 "data/maps/MistCity/scripts.pory"
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
# 26 "data/maps/MistCity/scripts.pory"
	.string "Lotad was out early again this morning.\p"
	.string "Those plants are doing better than\n"
	.string "ever.\p"
	.string "Good for the knees.$"

Mistcity_PuddleKid_Text_0:
# 35 "data/maps/MistCity/scripts.pory"
	.string "My mom says I'll catch a cold if I stay\n"
	.string "out too long, but splashing in puddles\l"
	.string "is the best way to find invisible\l"
	.string "Kecleon!$"

Mistcity_Poliwag_Text_0:
# 44 "data/maps/MistCity/scripts.pory"
	.string "Poli!\n"
	.string "Poli-wag!$"

Mistcity_Lotad_Text_0:
# 53 "data/maps/MistCity/scripts.pory"
	.string "Looo-tah!\n"
	.string "Lotad!$"

Mistcity_FailedRanger_Text_0:
# 61 "data/maps/MistCity/scripts.pory"
	.string "I come here every morning to watch the\n"
	.string "trucks head out\p"
	.string "If I hadn't flunked my Ranger exam, I'd\n"
	.string "be in the driver's seat right now\l"
	.string "instead of just watching from the\l"
	.string "sidelines....$"

Mistcity_SpacedoutGirlMushroom_Text_0:
# 69 "data/maps/MistCity/scripts.pory"
	.string "I just bought a bag of 'special'\n"
	.string "mushrooms from Leaf, and now I can't\l"
	.string "tell if the rain is moving or if the whole\l"
	.string "world is just slowly spinning...\p"
	.string "whoa....$"

Mistcity_Artist_Text_0:
# 77 "data/maps/MistCity/scripts.pory"
	.string "I've been standing here for hours\n"
	.string "waiting for the rain to let up so I can\l"
	.string "finally paint the valley, but I'm\l"
	.string "starting to think my canvas is going to\l"
	.string "stay blank forever.$"

Mistcity_Smoker_Text_0:
# 85 "data/maps/MistCity/scripts.pory"
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
# 93 "data/maps/MistCity/scripts.pory"
	.string "I came here to see the rare Pokémon,\n"
	.string "but nobody told me the humidity would\l"
	.string "turn my hair into a Tangela's vine!$"

Mistcity_Sign_Welcome_Text_0:
# 100 "data/maps/MistCity/scripts.pory"
	.string "{UP_ARROW}Mist City:\n"
	.string "The Sanctuary in the Clouds.$"

Mistcity_Sign_Woodworkshop_Text_0:
# 107 "data/maps/MistCity/scripts.pory"
	.string "Silas's Woodworks:\n"
	.string "Breathing new life into fallen branches.$"

Mistcity_Sign_ResearchCenter_Text_0:
# 114 "data/maps/MistCity/scripts.pory"
	.string "Pokémon Diversity Center:\n"
	.string "Research - Conservation - Exploration$"

Mistcity_Sign_Lookout_Text_0:
# 121 "data/maps/MistCity/scripts.pory"
	.string "{RIGHT_ARROW} Valley Lookout Point Ahead:\n"
	.string "The Deep Cloud Forest (Restricted Area)$"

Mistcity_Sign_Mushroomhut_Text_0:
# 128 "data/maps/MistCity/scripts.pory"
	.string "Leaf's Fungi Hut:\n"
	.string "Rare spores, damp moss, and magical\l"
	.string "mushrooms!$"

Mistcity_Sign_Gym_Text_0:
# 135 "data/maps/MistCity/scripts.pory"
	.string "Mist City Pokémon Gym:\n"
	.string "Darkness in the Cloud Forest.$"

Mistcity_Gymdoor_Text_0:
# 143 "data/maps/MistCity/scripts.pory"
	.string "I'm sorry, but the Gym is temporarily\n"
	.string "closed.\p"
	.string "Normally our team of rangers runs the\n"
	.string "battles here, but right now everyone is\l"
	.string "deployed to the deep forest to answer\l"
	.string "the distress calls.$"

Mistcity_Sign_DarkCave_Text_0:
# 150 "data/maps/MistCity/scripts.pory"
	.string "{LEFT_ARROW} Bat Cave\n"
	.string "Caution: Heavy Bat Population.$"

Mistcity_DarkCaveFail_Text_0:
# 158 "data/maps/MistCity/scripts.pory"
	.string "I tried to make it to Siltroot, but it's\n"
	.string "pitch black inside.\p"
	.string "I barely took five steps before a swarm\n"
	.string "of Zubats chased me right back out!$"
