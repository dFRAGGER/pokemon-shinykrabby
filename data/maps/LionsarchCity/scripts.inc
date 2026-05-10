LionsarchCity_MapScripts::
# 2 "data/maps/LionsarchCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LionsarchCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LionsarchCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LionsarchCity/scripts.pory"
	setflag FLAG_VISITED_LIONSARCH_CITY
	return


LionsarchCity_Sign_CityName::
# 12 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 13 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_CityName_Text_0
# 14 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_Gym::
# 18 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 19 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_Gym_Text_0
# 20 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_VisitorCenter::
# 24 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 25 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_VisitorCenter_Text_0
# 26 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_IndustrialPort::
# 30 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 31 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_IndustrialPort_Text_0
# 32 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_LeisurePort::
# 36 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 37 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_LeisurePort_Text_0
# 38 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_DiscoPamphlet_1::
# 46 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 47 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_DiscoPamphlet_1_Text_0
# 48 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_DiscoPamphlet_2::
# 52 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 53 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_DiscoPamphlet_2_Text_0
# 54 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_DiscoPamphlet_3::
# 58 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 59 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_DiscoPamphlet_3_Text_0
# 60 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_MarketStand_ExoticBerries::
# 68 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 69 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 70 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_ExoticBerries_Text_0
# 71 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 72 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_ExoticBerries
# 73 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 74 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 77 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_ExoticBerries:
# 78 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 79 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 80 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 81 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
	.2byte ITEM_NONE

LionsarchCity_MarketStand_EasternSpices::
# 85 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 86 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 87 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_EasternSpices_Text_0
# 88 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 89 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_EasternGoods
# 90 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 91 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 94 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_EasternGoods:
# 95 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 96 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 97 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
	.2byte ITEM_NONE

LionsarchCity_MarketStand_MountainGear::
# 101 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 102 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 103 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_MountainGear_Text_0
# 104 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 105 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_MountainGear
# 106 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 107 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 110 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_MountainGear:
# 111 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 112 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 113 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 114 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_REVIVE
# 115 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 116 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

LionsarchCity_MarketStand_RareStones::
# 120 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 121 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 122 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_RareStones_Text_0
# 123 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 124 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_RareStones
# 125 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 126 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 129 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_RareStones:
# 130 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 131 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_WATER_STONE
# 132 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 133 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 134 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_MOON_STONE
	.2byte ITEM_NONE

LionsarchCity_MarketStand_ImportedPokeBalls::
# 138 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 139 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 140 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_ImportedPokeBalls_Text_0
# 141 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 142 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_SpecialtyBalls
# 143 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 144 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 147 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_SpecialtyBalls:
# 148 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 149 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 150 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_NET_BALL
# 151 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_NEST_BALL
# 152 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

LionsarchCity_MarketStand_SeaDelicacies::
# 156 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 157 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 158 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_SeaDelicacies_Text_0
# 159 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 160 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_Delicacies
# 161 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 162 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 165 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_Delicacies:
# 166 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 167 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_SODA_POP
# 168 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_LEMONADE
# 169 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_NONE

LionsarchCity_MarketStand_TreasureHunter::
# 173 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 174 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 175 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_TreasureHunter_Text_0
# 176 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 177 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_Treasures
# 178 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 179 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 182 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_Treasures:
# 183 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_STAR_PIECE
# 184 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_NUGGET
# 185 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_PEARL
# 186 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_BIG_PEARL
	.2byte ITEM_NONE

LionsarchCity_FacultyGrunt_1::
# 194 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 195 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 196 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_1_Text_0
# 197 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_FacultyGrunt_2::
# 201 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 202 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 203 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_2_Text_0
# 204 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_FacultyGrunt_3::
# 208 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 209 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 210 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_3_Text_0
# 211 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_FacultyGrunt_4::
# 215 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 216 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 217 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_4_Text_0
# 218 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_FacultyWorker_Suspicious::
# 222 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 223 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 224 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyWorker_Suspicious_Text_0
# 225 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_ColdWeather::
# 233 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 234 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 235 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_ColdWeather_Text_0
# 236 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_TouristCouple_F::
# 240 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 241 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 242 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_TouristCouple_F_Text_0
# 243 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_TouristCouple_M::
# 247 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 248 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 249 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_TouristCouple_M_Text_0
# 250 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_OldSailor::
# 254 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 255 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 256 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_OldSailor_Text_0
# 257 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_DockWorker_1::
# 261 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 262 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 263 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_DockWorker_1_Text_0
# 264 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_DockWorker_2::
# 268 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 269 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 270 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_DockWorker_2_Text_0
# 271 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_LocalResident_1::
# 275 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 276 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 277 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_LocalResident_1_Text_0
# 278 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_LocalResident_2::
# 282 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 283 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 284 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_LocalResident_2_Text_0
# 285 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_MusicFan::
# 289 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 290 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 291 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_MusicFan_Text_0
# 292 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_BusinessPerson::
# 296 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 297 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 298 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_BusinessPerson_Text_0
# 299 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_MountainHiker::
# 303 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 304 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 305 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_MountainHiker_Text_0
# 306 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_Ranger::
# 310 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 311 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 312 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_Ranger_Text_0
# 313 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_FishingEnthusiast::
# 317 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 318 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 319 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_FishingEnthusiast_Text_0
# 320 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_NewsReporter::
# 324 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 325 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 326 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_NewsReporter_Text_0
# 327 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_GymTrainer::
# 331 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 332 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 333 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_GymTrainer_Text_0
# 334 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_ShipCaptain::
# 338 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 339 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 340 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_ShipCaptain_Text_0
# 341 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_StreetVendor::
# 345 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 346 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 347 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_StreetVendor_Text_0
# 348 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Scott_ArrivalPoint::
# 356 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 357 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Scott_ArrivalPoint_Text_0
# 358 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_CityName_Text_0:
# 13 "data/maps/LionsarchCity/scripts.pory"
	.string "LIONSARCH CITY\n"
	.string "Gateway to the Northern Peaks\p"
	.string "Where the harbor meets the mountains$"

LionsarchCity_Sign_Gym_Text_0:
# 19 "data/maps/LionsarchCity/scripts.pory"
	.string "LIONSARCH CITY GYM\n"
	.string "LEADER: PETRA\n"
	.string "The Iron Mountain$"

LionsarchCity_Sign_VisitorCenter_Text_0:
# 25 "data/maps/LionsarchCity/scripts.pory"
	.string "TWIN LIONS VISITOR CENTER\n"
	.string "Information for travelers heading to\l"
	.string "Lion Mountains$"

LionsarchCity_Sign_IndustrialPort_Text_0:
# 31 "data/maps/LionsarchCity/scripts.pory"
	.string "INDUSTRIAL PORT DISTRICT\n"
	.string "AUTHORIZED PERSONNEL ONLY\p"
	.string "Heavy machinery in operation - Exercise\n"
	.string "caution$"

LionsarchCity_Sign_LeisurePort_Text_0:
# 37 "data/maps/LionsarchCity/scripts.pory"
	.string "LIONSARCH MARINA\n"
	.string "Leisure vessels and tour boats$"

LionsarchCity_DiscoPamphlet_1_Text_0:
# 47 "data/maps/LionsarchCity/scripts.pory"
	.string "A crumpled flyer is taped to a board:\p"
	.string "GROOVE UNDERGROUND\n"
	.string "OLD SCHOOL DISCO NIGHTS\n"
	.string "Every weekend!\p"
	.string "...The rest is too faded to read.$"

LionsarchCity_DiscoPamphlet_2_Text_0:
# 53 "data/maps/LionsarchCity/scripts.pory"
	.string "A colorful poster catches your eye:\p"
	.string "WHEN: Every Friday & Saturday\n"
	.string "WHERE: Ask around... if you're cool\l"
	.string "enough\n"
	.string "WHAT: Vinyl-only disco classics!\p"
	.string "BOOGIE WONDERLAND AWAITS$"

LionsarchCity_DiscoPamphlet_3_Text_0:
# 59 "data/maps/LionsarchCity/scripts.pory"
	.string "A flyer stuck to a wooden pole:\p"
	.string "DJ PETER PRESENTS:\n"
	.string "DISCO INFERNO\n"
	.string "The funkiest beats this side of the\l"
	.string "mountains!\p"
	.string "Find the basement. Feel the groove.$"

LionsarchCity_MarketStand_ExoticBerries_Text_0:
# 70 "data/maps/LionsarchCity/scripts.pory"
	.string "Welcome to my humble stand!\p"
	.string "I import the finest strands from the\n"
	.string "tropical islands far to the south.\p"
	.string "You won't find these in Siltroot Town!$"

LionsarchCity_MarketStand_EasternSpices_Text_0:
# 87 "data/maps/LionsarchCity/scripts.pory"
	.string "Greetings, traveler!\p"
	.string "My family has traded across the\n"
	.string "eastern sea routes for three\l"
	.string "generations.\p"
	.string "These Poké Dolls and incense come\n"
	.string "straight from Marshduke City's finest\l"
	.string "craftsmen!$"

LionsarchCity_MarketStand_MountainGear_Text_0:
# 103 "data/maps/LionsarchCity/scripts.pory"
	.string "Heading up to the Lion Mountains?\p"
	.string "You'll need proper gear!\p"
	.string "I stock everything the rangers\n"
	.string "recommend for high-altitude training.$"

LionsarchCity_MarketStand_RareStones_Text_0:
# 122 "data/maps/LionsarchCity/scripts.pory"
	.string "These stones came in on the morning\n"
	.string "shipment from deep caves across the\l"
	.string "region.\p"
	.string "Perfect for trainers looking to evolve\n"
	.string "their partners!$"

LionsarchCity_MarketStand_ImportedPokeBalls_Text_0:
# 140 "data/maps/LionsarchCity/scripts.pory"
	.string "Fresh shipment just arrived from Silph\n"
	.string "Co.!\p"
	.string "We get specialty Poké Balls that most\n"
	.string "marts don't carry.$"

LionsarchCity_MarketStand_SeaDelicacies_Text_0:
# 158 "data/maps/LionsarchCity/scripts.pory"
	.string "Fresh from the harbor this morning!\p"
	.string "Our Lava Cookies are baked using a\n"
	.string "recipe from sailors who've traveled the\l"
	.string "world.\p"
	.string "Perfect for curing any ailment!$"

LionsarchCity_MarketStand_TreasureHunter_Text_0:
# 175 "data/maps/LionsarchCity/scripts.pory"
	.string "I deal in rarities, kid.\p"
	.string "Things that wash up on distant shores\n"
	.string "or get dug out of ancient ruins.\p"
	.string "You got the cash, I got the goods.$"

LionsarchCity_FacultyGrunt_1_Text_0:
# 196 "data/maps/LionsarchCity/scripts.pory"
	.string "The Faculty's mining operation in the\n"
	.string "Lion Mountains is proceeding ahead of\l"
	.string "schedule.\p"
	.string "We're extracting rare metals that'll\n"
	.string "change everything.$"

LionsarchCity_FacultyGrunt_2_Text_0:
# 203 "data/maps/LionsarchCity/scripts.pory"
	.string "Move along, kid.\p"
	.string "This is Faculty business.\p"
	.string "We've got authorization from the\n"
	.string "regional board to transport our\l"
	.string "equipment through this harbor.$"

LionsarchCity_FacultyGrunt_3_Text_0:
# 210 "data/maps/LionsarchCity/scripts.pory"
	.string "These crates contain prototype\n"
	.string "containment units.\p"
	.string "Not that it's any of your concern.\p"
	.string "The Faculty is doing important work in\n"
	.string "the northern peaks.$"

LionsarchCity_FacultyGrunt_4_Text_0:
# 217 "data/maps/LionsarchCity/scripts.pory"
	.string "Did you know certain metals can\n"
	.string "suppress psychic and electromagnetic\l"
	.string "frequencies?\p"
	.string "Fascinating stuff.\p"
	.string "The mountains up north are full of them.$"

LionsarchCity_FacultyWorker_Suspicious_Text_0:
# 224 "data/maps/LionsarchCity/scripts.pory"
	.string "Another truck of drilling equipment\n"
	.string "heading north tomorrow.\p"
	.string "The boss says we're close to a\n"
	.string "breakthrough.\p"
	.string "Something about 'legendary\n"
	.string "containment protocols'... whatever that\l"
	.string "means.$"

LionsarchCity_NPC_ColdWeather_Text_0:
# 235 "data/maps/LionsarchCity/scripts.pory"
	.string "Brrr! The wind coming off the mountains\n"
	.string "is brutal today!\p"
	.string "I should've worn a thicker coat.$"

LionsarchCity_NPC_TouristCouple_F_Text_0:
# 242 "data/maps/LionsarchCity/scripts.pory"
	.string "My husband and I came to see the Twin\n"
	.string "Lions.\p"
	.string "They say if you look at the peaks from\n"
	.string "the right angle, they look like two\l"
	.string "Pyroar facing each other!$"

LionsarchCity_NPC_TouristCouple_M_Text_0:
# 249 "data/maps/LionsarchCity/scripts.pory"
	.string "The Visitor Center has some great\n"
	.string "hiking maps.\p"
	.string "We're planning to trek up to the north\n"
	.string "pass tomorrow if the weather holds.$"

LionsarchCity_NPC_OldSailor_Text_0:
# 256 "data/maps/LionsarchCity/scripts.pory"
	.string "I've been working these docks for forty\n"
	.string "years.\p"
	.string "Used to be we only shipped fish and\n"
	.string "lumber.\p"
	.string "Now it's all industrial equipment and\n"
	.string "strange machinery.\p"
	.string "Times change, I suppose.$"

LionsarchCity_NPC_DockWorker_1_Text_0:
# 263 "data/maps/LionsarchCity/scripts.pory"
	.string "The ports keep this city running.\p"
	.string "We load and unload cargo ships day and\n"
	.string "night.\p"
	.string "It's hard work, but the pay is good.$"

LionsarchCity_NPC_DockWorker_2_Text_0:
# 270 "data/maps/LionsarchCity/scripts.pory"
	.string "That leisure port over there? That's\n"
	.string "where the rich folks keep their yachts.\p"
	.string "Meanwhile, we're out here hauling crates\n"
	.string "in the freezing cold.$"

LionsarchCity_NPC_LocalResident_1_Text_0:
# 277 "data/maps/LionsarchCity/scripts.pory"
	.string "Lionsarch has changed so much in\n"
	.string "recent years.\p"
	.string "The Faculty's mining operation brought\n"
	.string "jobs, but also a lot of pollution.\p"
	.string "Some call it 'the smog.'$"

LionsarchCity_NPC_LocalResident_2_Text_0:
# 284 "data/maps/LionsarchCity/scripts.pory"
	.string "If you're looking for a good time,\n"
	.string "there's supposedly a secret disco club\l"
	.string "somewhere in the city.\p"
	.string "I've heard the music thumping late at\n"
	.string "night, but I've never found it!$"

LionsarchCity_NPC_MusicFan_Text_0:
# 291 "data/maps/LionsarchCity/scripts.pory"
	.string "You like old school disco?\p"
	.string "There's this DJ... Peter, I think his name\n"
	.string "is.\p"
	.string "He throws the most incredible\n"
	.string "underground parties.\p"
	.string "But you need to know someone who knows\n"
	.string "someone to get in.$"

LionsarchCity_NPC_BusinessPerson_Text_0:
# 298 "data/maps/LionsarchCity/scripts.pory"
	.string "The route east through the cliffs is\n"
	.string "treacherous but beautiful.\p"
	.string "It eventually leads to Marshduke City,\n"
	.string "an old city built right in the middle of a\l"
	.string "swamp.\p"
	.string "Quite the sight!$"

LionsarchCity_NPC_MountainHiker_Text_0:
# 305 "data/maps/LionsarchCity/scripts.pory"
	.string "The two paths through the mountains\n"
	.string "each offer unique challenges.\p"
	.string "The Lion Mountains path is steep but\n"
	.string "rewarding.\p"
	.string "The eastern cliff route is longer but\n"
	.string "has incredible views.$"

LionsarchCity_NPC_Ranger_Text_0:
# 312 "data/maps/LionsarchCity/scripts.pory"
	.string "We've been getting reports of\n"
	.string "increased seismic activity near the\l"
	.string "Lion Mountains.\p"
	.string "Probably just the Faculty's mining\n"
	.string "operation, but it's concerning\l"
	.string "nonetheless.$"

LionsarchCity_NPC_FishingEnthusiast_Text_0:
# 319 "data/maps/LionsarchCity/scripts.pory"
	.string "The waters around Lionsarch are full of\n"
	.string "Water-type Pokémon.\p"
	.string "I caught a Krabby just this morning!\p"
	.string "I couldn't believe my luck!$"

LionsarchCity_NPC_NewsReporter_Text_0:
# 326 "data/maps/LionsarchCity/scripts.pory"
	.string "I'm investigating the Faculty's\n"
	.string "activities for the regional news\l"
	.string "network.\p"
	.string "They claim to be mining rare metals, but\n"
	.string "their security is unusually tight.\p"
	.string "What are they really doing in there?$"

LionsarchCity_NPC_GymTrainer_Text_0:
# 333 "data/maps/LionsarchCity/scripts.pory"
	.string "Petra's Gym specializes in\n"
	.string "mountain-dwelling Pokémon.\p"
	.string "Ursaring, Golem, Donphan... they're all\n"
	.string "incredibly tough!\p"
	.string "You better come prepared.$"

LionsarchCity_NPC_ShipCaptain_Text_0:
# 340 "data/maps/LionsarchCity/scripts.pory"
	.string "My vessel sails between here and\n"
	.string "Siltroot Town regularly.\p"
	.string "The harbor's always busy with cargo\n"
	.string "ships coming and going.\p"
	.string "It's what keeps this city alive.$"

LionsarchCity_NPC_StreetVendor_Text_0:
# 347 "data/maps/LionsarchCity/scripts.pory"
	.string "The markets are the soul of Lionsarch!\p"
	.string "Traders from all over the region bring\n"
	.string "their goods here.\p"
	.string "You can find things here that don't\n"
	.string "exist anywhere else!\p"
	.string "I'm setting up shop right now if you\n"
	.string "want to take a look!\p"
	.string "I probably open my stand very soon!$"

LionsarchCity_Scott_ArrivalPoint_Text_0:
# 357 "data/maps/LionsarchCity/scripts.pory"
	.string "The industrial dock stretches out\n"
	.string "before you.\p"
	.string "The smell of saltwater and diesel fills\n"
	.string "the air.$"
