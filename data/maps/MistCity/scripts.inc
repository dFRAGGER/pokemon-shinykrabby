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
	msgbox Mistcity_LotadGuy_Text_0
# 19 "data/maps/MistCity/scripts.pory"
	waitmessage
# 20 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_PuddleKid::
# 24 "data/maps/MistCity/scripts.pory"
	lock
# 25 "data/maps/MistCity/scripts.pory"
	faceplayer
# 26 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_PuddleKid_Text_0
# 27 "data/maps/MistCity/scripts.pory"
	waitmessage
# 28 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Poliwag::
# 32 "data/maps/MistCity/scripts.pory"
	lock
# 33 "data/maps/MistCity/scripts.pory"
	faceplayer
# 34 "data/maps/MistCity/scripts.pory"
	playmoncry SPECIES_POLIWAG, CRY_MODE_NORMAL
# 35 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Poliwag_Text_0
# 36 "data/maps/MistCity/scripts.pory"
	waitmessage
# 37 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Lotad::
# 41 "data/maps/MistCity/scripts.pory"
	lock
# 42 "data/maps/MistCity/scripts.pory"
	faceplayer
# 43 "data/maps/MistCity/scripts.pory"
	playmoncry SPECIES_LOTAD, CRY_MODE_NORMAL
# 44 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Lotad_Text_0
# 45 "data/maps/MistCity/scripts.pory"
	waitmessage
# 46 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_FailedRanger::
# 50 "data/maps/MistCity/scripts.pory"
	lock
# 51 "data/maps/MistCity/scripts.pory"
	faceplayer
# 52 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_FailedRanger_Text_0
# 53 "data/maps/MistCity/scripts.pory"
	waitmessage
# 54 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_SpacedoutGirlMushroom::
# 58 "data/maps/MistCity/scripts.pory"
	lock
# 59 "data/maps/MistCity/scripts.pory"
	faceplayer
# 60 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_SpacedoutGirlMushroom_Text_0
# 61 "data/maps/MistCity/scripts.pory"
	waitmessage
# 62 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Artist::
# 66 "data/maps/MistCity/scripts.pory"
	lock
# 67 "data/maps/MistCity/scripts.pory"
	faceplayer
# 68 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Artist_Text_0
# 69 "data/maps/MistCity/scripts.pory"
	waitmessage
# 70 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Smoker::
# 74 "data/maps/MistCity/scripts.pory"
	lock
# 75 "data/maps/MistCity/scripts.pory"
	faceplayer
# 76 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Smoker_Text_0
# 77 "data/maps/MistCity/scripts.pory"
	waitmessage
# 78 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Tourist::
# 82 "data/maps/MistCity/scripts.pory"
	lock
# 83 "data/maps/MistCity/scripts.pory"
	faceplayer
# 84 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Tourist_Text_0
# 85 "data/maps/MistCity/scripts.pory"
	waitmessage
# 86 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Sign_Welcome::
# 90 "data/maps/MistCity/scripts.pory"
	lock
# 91 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Sign_Welcome_Text_0
# 92 "data/maps/MistCity/scripts.pory"
	waitmessage
# 93 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Sign_Woodworkshop::
# 97 "data/maps/MistCity/scripts.pory"
	lock
# 98 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Sign_Woodworkshop_Text_0
# 99 "data/maps/MistCity/scripts.pory"
	waitmessage
# 100 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Sign_ResearchCenter::
# 104 "data/maps/MistCity/scripts.pory"
	lock
# 105 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Sign_ResearchCenter_Text_0
# 106 "data/maps/MistCity/scripts.pory"
	waitmessage
# 107 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Sign_Lookout::
# 111 "data/maps/MistCity/scripts.pory"
	lock
# 112 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Sign_Lookout_Text_0
# 113 "data/maps/MistCity/scripts.pory"
	waitmessage
# 114 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Sign_Mushroomhut::
# 118 "data/maps/MistCity/scripts.pory"
	lock
# 119 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Sign_Mushroomhut_Text_0
# 120 "data/maps/MistCity/scripts.pory"
	waitmessage
# 121 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Sign_Gym::
# 125 "data/maps/MistCity/scripts.pory"
	lock
# 126 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Sign_Gym_Text_0
# 127 "data/maps/MistCity/scripts.pory"
	waitmessage
# 128 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Gymdoor::
# 132 "data/maps/MistCity/scripts.pory"
	lock
# 133 "data/maps/MistCity/scripts.pory"
	faceplayer
# 134 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Gymdoor_Text_0
# 135 "data/maps/MistCity/scripts.pory"
	waitmessage
# 136 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_Sign_DarkCave::
# 140 "data/maps/MistCity/scripts.pory"
	lock
# 141 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_Sign_DarkCave_Text_0
# 142 "data/maps/MistCity/scripts.pory"
	waitmessage
# 143 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_DarkCaveFail::
# 147 "data/maps/MistCity/scripts.pory"
	lock
# 148 "data/maps/MistCity/scripts.pory"
	faceplayer
# 149 "data/maps/MistCity/scripts.pory"
	msgbox Mistcity_DarkCaveFail_Text_0
# 150 "data/maps/MistCity/scripts.pory"
	waitmessage
# 151 "data/maps/MistCity/scripts.pory"
	release
	return


Mistcity_AipomGuy_Text_0:
# 10 "data/maps/MistCity/scripts.pory"
	.string "I can't believe the nerve of that Aipom!\p"
	.string "It swiped my lunch right out of my\n"
	.string "hands with its tail, and now it's just\l"
	.string "sitting up there enjoying my sandwich!$"

Mistcity_LotadGuy_Text_0:
# 18 "data/maps/MistCity/scripts.pory"
	.string "My Lotad collects fresh rainwater in\n"
	.string "its leaf for my tea every morning\p"
	.string "Nothing beats the taste of pure cloud\n"
	.string "forest dew.$"

Mistcity_PuddleKid_Text_0:
# 26 "data/maps/MistCity/scripts.pory"
	.string "My mom says I'll catch a cold if I stay\n"
	.string "out too long, but splashing in puddles\l"
	.string "is the best way to find invisible\l"
	.string "Kecleon!$"

Mistcity_Poliwag_Text_0:
# 35 "data/maps/MistCity/scripts.pory"
	.string "Poli!\n"
	.string "Poli-wag!$"

Mistcity_Lotad_Text_0:
# 44 "data/maps/MistCity/scripts.pory"
	.string "Looo-tah!\n"
	.string "Lotad!$"

Mistcity_FailedRanger_Text_0:
# 52 "data/maps/MistCity/scripts.pory"
	.string "I come here every morning to watch the\n"
	.string "trucks head out\p"
	.string "If I hadn't flunked my Ranger exam, I'd\n"
	.string "be in the driver's seat right now\l"
	.string "instead of just watching from the\l"
	.string "sidelines....$"

Mistcity_SpacedoutGirlMushroom_Text_0:
# 60 "data/maps/MistCity/scripts.pory"
	.string "I just bought a bag of 'special'\n"
	.string "mushrooms from Leaf, and now I can't\l"
	.string "tell if the rain is moving or if the whole\l"
	.string "world is just slowly spinning...\p"
	.string "whoa....$"

Mistcity_Artist_Text_0:
# 68 "data/maps/MistCity/scripts.pory"
	.string "I've been standing here for hours\n"
	.string "waiting for the rain to let up so I can\l"
	.string "finally paint the valley, but I'm\l"
	.string "starting to think my canvas is going to\l"
	.string "stay blank forever.$"

Mistcity_Smoker_Text_0:
# 76 "data/maps/MistCity/scripts.pory"
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
# 84 "data/maps/MistCity/scripts.pory"
	.string "I came here to see the rare Pokémon,\n"
	.string "but nobody told me the humidity would\l"
	.string "turn my hair into a Tangela's vine!$"

Mistcity_Sign_Welcome_Text_0:
# 91 "data/maps/MistCity/scripts.pory"
	.string "{UP_ARROW}Mist City:\n"
	.string "The Sanctuary in the Clouds.$"

Mistcity_Sign_Woodworkshop_Text_0:
# 98 "data/maps/MistCity/scripts.pory"
	.string "Silas's Woodworks:\n"
	.string "Breathing new life into fallen branches.$"

Mistcity_Sign_ResearchCenter_Text_0:
# 105 "data/maps/MistCity/scripts.pory"
	.string "Pokémon Diversity Center:\n"
	.string "Research - Conservation - Exploration$"

Mistcity_Sign_Lookout_Text_0:
# 112 "data/maps/MistCity/scripts.pory"
	.string "{RIGHT_ARROW} Valley Lookout Point Ahead:\n"
	.string "The Deep Cloud Forest (Restricted Area)$"

Mistcity_Sign_Mushroomhut_Text_0:
# 119 "data/maps/MistCity/scripts.pory"
	.string "Leaf's Fungi Hut:\n"
	.string "Rare spores, damp moss, and magical\l"
	.string "mushrooms!$"

Mistcity_Sign_Gym_Text_0:
# 126 "data/maps/MistCity/scripts.pory"
	.string "Mist City Pokémon Gym:\n"
	.string "Darkness in the Cloud Forest.$"

Mistcity_Gymdoor_Text_0:
# 134 "data/maps/MistCity/scripts.pory"
	.string "I'm sorry, but the Gym is temporarily\n"
	.string "closed.\p"
	.string "Normally our team of rangers runs the\n"
	.string "battles here, but right now everyone is\l"
	.string "deployed to the deep forest to answer\l"
	.string "the distress calls.$"

Mistcity_Sign_DarkCave_Text_0:
# 141 "data/maps/MistCity/scripts.pory"
	.string "{LEFT_ARROW} Bat Cave\n"
	.string "Caution: Heavy Bat Population.$"

Mistcity_DarkCaveFail_Text_0:
# 149 "data/maps/MistCity/scripts.pory"
	.string "I tried to make it to Siltroot, but it's\n"
	.string "pitch black inside.\p"
	.string "I barely took five steps before a swarm\n"
	.string "of Zubats chased me right back out!$"
