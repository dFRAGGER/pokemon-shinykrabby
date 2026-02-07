LionsarchCity_MapScripts::
	.byte 0


LionsarchCity_Sign_CityName::
# 8 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 9 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_CityName_Text_0
# 10 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_Gym::
# 14 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 15 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_Gym_Text_0
# 16 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_VisitorCenter::
# 20 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 21 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_VisitorCenter_Text_0
# 22 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_IndustrialPort::
# 26 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 27 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_IndustrialPort_Text_0
# 28 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_LeisurePort::
# 32 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 33 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_LeisurePort_Text_0
# 34 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_DiscoPamphlet_1::
# 42 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 43 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_DiscoPamphlet_1_Text_0
# 44 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_DiscoPamphlet_2::
# 48 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 49 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_DiscoPamphlet_2_Text_0
# 50 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_DiscoPamphlet_3::
# 54 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 55 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_DiscoPamphlet_3_Text_0
# 56 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_MarketStand_ExoticBerries::
# 64 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 65 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 66 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_ExoticBerries_Text_0
# 67 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 68 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_ExoticBerries
# 69 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 70 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 73 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_ExoticBerries:
# 74 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 75 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 76 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 77 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
	.2byte ITEM_NONE

LionsarchCity_MarketStand_EasternSpices::
# 81 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 82 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 83 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_EasternSpices_Text_0
# 84 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 85 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_EasternGoods
# 86 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 87 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 90 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_EasternGoods:
# 91 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 92 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 93 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
	.2byte ITEM_NONE

LionsarchCity_MarketStand_MountainGear::
# 97 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 98 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 99 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_MountainGear_Text_0
# 100 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 101 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_MountainGear
# 102 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 103 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 106 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_MountainGear:
# 107 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 108 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 109 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 110 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_REVIVE
# 111 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 112 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

LionsarchCity_MarketStand_RareStones::
# 116 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 117 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 118 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_RareStones_Text_0
# 119 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 120 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_RareStones
# 121 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 122 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 125 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_RareStones:
# 126 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 127 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_WATER_STONE
# 128 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 129 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 130 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_MOON_STONE
	.2byte ITEM_NONE

LionsarchCity_MarketStand_ImportedPokeBalls::
# 134 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 135 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 136 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_ImportedPokeBalls_Text_0
# 137 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 138 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_SpecialtyBalls
# 139 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 140 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 143 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_SpecialtyBalls:
# 144 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 145 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 146 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_NET_BALL
# 147 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_NEST_BALL
# 148 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

LionsarchCity_MarketStand_SeaDelicacies::
# 152 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 153 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 154 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_SeaDelicacies_Text_0
# 155 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 156 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_Delicacies
# 157 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 158 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 161 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_Delicacies:
# 162 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 163 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_SODA_POP
# 164 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_LEMONADE
# 165 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_NONE

LionsarchCity_MarketStand_TreasureHunter::
# 169 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 170 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 171 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_TreasureHunter_Text_0
# 172 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 173 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_Treasures
# 174 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 175 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 178 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_Treasures:
# 179 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_STAR_PIECE
# 180 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_NUGGET
# 181 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_PEARL
# 182 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_BIG_PEARL
	.2byte ITEM_NONE

LionsarchCity_FacultyGrunt_1::
# 190 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 191 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 192 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_1_Text_0
# 193 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_FacultyGrunt_2::
# 197 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 198 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 199 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_2_Text_0
# 200 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_FacultyGrunt_3::
# 204 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 205 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 206 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_3_Text_0
# 207 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_FacultyGrunt_4::
# 211 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 212 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 213 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_4_Text_0
# 214 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_FacultyWorker_Suspicious::
# 218 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 219 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 220 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyWorker_Suspicious_Text_0
# 221 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_ColdWeather::
# 229 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 230 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 231 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_ColdWeather_Text_0
# 232 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_TouristCouple_F::
# 236 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 237 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 238 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_TouristCouple_F_Text_0
# 239 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_TouristCouple_M::
# 243 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 244 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 245 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_TouristCouple_M_Text_0
# 246 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_OldSailor::
# 250 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 251 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 252 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_OldSailor_Text_0
# 253 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_DockWorker_1::
# 257 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 258 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 259 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_DockWorker_1_Text_0
# 260 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_DockWorker_2::
# 264 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 265 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 266 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_DockWorker_2_Text_0
# 267 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_LocalResident_1::
# 271 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 272 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 273 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_LocalResident_1_Text_0
# 274 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_LocalResident_2::
# 278 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 279 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 280 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_LocalResident_2_Text_0
# 281 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_MusicFan::
# 285 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 286 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 287 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_MusicFan_Text_0
# 288 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_BusinessPerson::
# 292 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 293 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 294 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_BusinessPerson_Text_0
# 295 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_MountainHiker::
# 299 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 300 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 301 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_MountainHiker_Text_0
# 302 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_Ranger::
# 306 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 307 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 308 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_Ranger_Text_0
# 309 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_FishingEnthusiast::
# 313 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 314 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 315 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_FishingEnthusiast_Text_0
# 316 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_NewsReporter::
# 320 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 321 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 322 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_NewsReporter_Text_0
# 323 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_GymTrainer::
# 327 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 328 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 329 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_GymTrainer_Text_0
# 330 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_ShipCaptain::
# 334 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 335 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 336 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_ShipCaptain_Text_0
# 337 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_StreetVendor::
# 341 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 342 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 343 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_StreetVendor_Text_0
# 344 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Scott_ArrivalPoint::
# 352 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 353 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Scott_ArrivalPoint_Text_0
# 354 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_CityName_Text_0:
# 9 "data/maps/LionsarchCity/scripts.pory"
	.string "LIONSARCH CITY\n"
	.string "Gateway to the Northern Peaks\p"
	.string "Where the harbor meets the mountains$"

LionsarchCity_Sign_Gym_Text_0:
# 15 "data/maps/LionsarchCity/scripts.pory"
	.string "LIONSARCH CITY GYM\n"
	.string "LEADER: PETRA\n"
	.string "The Iron Mountain$"

LionsarchCity_Sign_VisitorCenter_Text_0:
# 21 "data/maps/LionsarchCity/scripts.pory"
	.string "TWIN LIONS VISITOR CENTER\n"
	.string "Information for travelers heading to\l"
	.string "Lion Mountains$"

LionsarchCity_Sign_IndustrialPort_Text_0:
# 27 "data/maps/LionsarchCity/scripts.pory"
	.string "INDUSTRIAL PORT DISTRICT\n"
	.string "AUTHORIZED PERSONNEL ONLY\p"
	.string "Heavy machinery in operation - Exercise\n"
	.string "caution$"

LionsarchCity_Sign_LeisurePort_Text_0:
# 33 "data/maps/LionsarchCity/scripts.pory"
	.string "LIONSARCH MARINA\n"
	.string "Leisure vessels and tour boats$"

LionsarchCity_DiscoPamphlet_1_Text_0:
# 43 "data/maps/LionsarchCity/scripts.pory"
	.string "A crumpled flyer is taped to the wall:\p"
	.string "GROOVE UNDERGROUND\n"
	.string "OLD SCHOOL DISCO NIGHTS\n"
	.string "Every weekend!\p"
	.string "...The rest is too faded to read.$"

LionsarchCity_DiscoPamphlet_2_Text_0:
# 49 "data/maps/LionsarchCity/scripts.pory"
	.string "A colorful poster catches your eye:\p"
	.string "WHEN: Every Friday & Saturday\n"
	.string "WHERE: Ask around... if you're cool\l"
	.string "enough\n"
	.string "WHAT: Vinyl-only disco classics!\p"
	.string "BOOGIE WONDERLAND AWAITS$"

LionsarchCity_DiscoPamphlet_3_Text_0:
# 55 "data/maps/LionsarchCity/scripts.pory"
	.string "A flyer stuck under a rock:\p"
	.string "DJ PETER PRESENTS:\n"
	.string "DISCO INFERNO\n"
	.string "The funkiest beats this side of the\l"
	.string "mountains!\p"
	.string "Find the basement. Feel the groove.$"

LionsarchCity_MarketStand_ExoticBerries_Text_0:
# 66 "data/maps/LionsarchCity/scripts.pory"
	.string "Welcome to my humble stand!\p"
	.string "I import the finest strands from the\n"
	.string "tropical islands far to the south.\p"
	.string "You won't find these in Siltroot Town!$"

LionsarchCity_MarketStand_EasternSpices_Text_0:
# 83 "data/maps/LionsarchCity/scripts.pory"
	.string "Greetings, traveler!\p"
	.string "My family has traded across the\n"
	.string "eastern sea routes for three\l"
	.string "generations.\p"
	.string "These Poké Dolls and incense come\n"
	.string "straight from Marshduke City's finest\l"
	.string "craftsmen!$"

LionsarchCity_MarketStand_MountainGear_Text_0:
# 99 "data/maps/LionsarchCity/scripts.pory"
	.string "Heading up to the Lion Mountains?\p"
	.string "You'll need proper gear!\p"
	.string "I stock everything the rangers\n"
	.string "recommend for high-altitude training.$"

LionsarchCity_MarketStand_RareStones_Text_0:
# 118 "data/maps/LionsarchCity/scripts.pory"
	.string "These stones came in on the morning\n"
	.string "shipment from deep caves across the\l"
	.string "region.\p"
	.string "Perfect for trainers looking to evolve\n"
	.string "their partners!$"

LionsarchCity_MarketStand_ImportedPokeBalls_Text_0:
# 136 "data/maps/LionsarchCity/scripts.pory"
	.string "Fresh shipment just arrived from Silph\n"
	.string "Co.!\p"
	.string "We get specialty Poké Balls that most\n"
	.string "marts don't carry.$"

LionsarchCity_MarketStand_SeaDelicacies_Text_0:
# 154 "data/maps/LionsarchCity/scripts.pory"
	.string "Fresh from the harbor this morning!\p"
	.string "Our Lava Cookies are baked using a\n"
	.string "recipe from sailors who've traveled the\l"
	.string "world.\p"
	.string "Perfect for curing any ailment!$"

LionsarchCity_MarketStand_TreasureHunter_Text_0:
# 171 "data/maps/LionsarchCity/scripts.pory"
	.string "I deal in rarities, kid.\p"
	.string "Things that wash up on distant shores\n"
	.string "or get dug out of ancient ruins.\p"
	.string "You got the cash, I got the goods.$"

LionsarchCity_FacultyGrunt_1_Text_0:
# 192 "data/maps/LionsarchCity/scripts.pory"
	.string "The Faculty's mining operation in the\n"
	.string "Lion Mountains is proceeding ahead of\l"
	.string "schedule.\p"
	.string "We're extracting rare metals that'll\n"
	.string "change everything.$"

LionsarchCity_FacultyGrunt_2_Text_0:
# 199 "data/maps/LionsarchCity/scripts.pory"
	.string "Move along, kid.\p"
	.string "This is Faculty business.\p"
	.string "We've got authorization from the\n"
	.string "regional board to transport our\l"
	.string "equipment through this harbor.$"

LionsarchCity_FacultyGrunt_3_Text_0:
# 206 "data/maps/LionsarchCity/scripts.pory"
	.string "These crates contain prototype\n"
	.string "containment units.\p"
	.string "Not that it's any of your concern.\p"
	.string "The Faculty is doing important work in\n"
	.string "the northern peaks.$"

LionsarchCity_FacultyGrunt_4_Text_0:
# 213 "data/maps/LionsarchCity/scripts.pory"
	.string "Did you know certain metals can\n"
	.string "suppress psychic and electromagnetic\l"
	.string "frequencies?\p"
	.string "Fascinating stuff.\p"
	.string "The mountains up north are full of them.$"

LionsarchCity_FacultyWorker_Suspicious_Text_0:
# 220 "data/maps/LionsarchCity/scripts.pory"
	.string "Another truck of drilling equipment\n"
	.string "heading north tomorrow.\p"
	.string "The boss says we're close to a\n"
	.string "breakthrough.\p"
	.string "Something about 'legendary\n"
	.string "containment protocols'... whatever that\l"
	.string "means.$"

LionsarchCity_NPC_ColdWeather_Text_0:
# 231 "data/maps/LionsarchCity/scripts.pory"
	.string "Brrr! The wind coming off the mountains\n"
	.string "is brutal today!\p"
	.string "I should've worn a thicker coat.$"

LionsarchCity_NPC_TouristCouple_F_Text_0:
# 238 "data/maps/LionsarchCity/scripts.pory"
	.string "My husband and I came to see the Twin\n"
	.string "Lions.\p"
	.string "They say if you look at the peaks from\n"
	.string "the right angle, they look like two\l"
	.string "Pyroar facing each other!$"

LionsarchCity_NPC_TouristCouple_M_Text_0:
# 245 "data/maps/LionsarchCity/scripts.pory"
	.string "The Visitor Center has some great\n"
	.string "hiking maps.\p"
	.string "We're planning to trek up to the north\n"
	.string "pass tomorrow if the weather holds.$"

LionsarchCity_NPC_OldSailor_Text_0:
# 252 "data/maps/LionsarchCity/scripts.pory"
	.string "I've been working these docks for forty\n"
	.string "years.\p"
	.string "Used to be we only shipped fish and\n"
	.string "lumber.\p"
	.string "Now it's all industrial equipment and\n"
	.string "strange machinery.\p"
	.string "Times change, I suppose.$"

LionsarchCity_NPC_DockWorker_1_Text_0:
# 259 "data/maps/LionsarchCity/scripts.pory"
	.string "Three industrial ports keep this city\n"
	.string "running.\p"
	.string "We load and unload cargo ships day and\n"
	.string "night.\p"
	.string "It's hard work, but the pay is good.$"

LionsarchCity_NPC_DockWorker_2_Text_0:
# 266 "data/maps/LionsarchCity/scripts.pory"
	.string "That leisure port over there? That's\n"
	.string "where the rich folks keep their yachts.\p"
	.string "Meanwhile, we're out here hauling crates\n"
	.string "in the freezing cold.$"

LionsarchCity_NPC_LocalResident_1_Text_0:
# 273 "data/maps/LionsarchCity/scripts.pory"
	.string "Lionsarch has changed so much in\n"
	.string "recent years.\p"
	.string "The Faculty's mining operation brought\n"
	.string "jobs, but also a lot of pollution.\p"
	.string "Some call it 'the smog.'$"

LionsarchCity_NPC_LocalResident_2_Text_0:
# 280 "data/maps/LionsarchCity/scripts.pory"
	.string "If you're looking for a good time,\n"
	.string "there's supposedly a secret disco club\l"
	.string "somewhere in the city.\p"
	.string "I've heard the music thumping late at\n"
	.string "night, but I've never found it!$"

LionsarchCity_NPC_MusicFan_Text_0:
# 287 "data/maps/LionsarchCity/scripts.pory"
	.string "You like old school disco?\p"
	.string "There's this DJ... Peter, I think his name\n"
	.string "is.\p"
	.string "He throws the most incredible\n"
	.string "underground parties.\p"
	.string "But you need to know someone who knows\n"
	.string "someone to get in.$"

LionsarchCity_NPC_BusinessPerson_Text_0:
# 294 "data/maps/LionsarchCity/scripts.pory"
	.string "The route east through the cliffs is\n"
	.string "treacherous but beautiful.\p"
	.string "It eventually leads to Marshduke City,\n"
	.string "an old city built right in the middle of a\l"
	.string "swamp.\p"
	.string "Quite the sight!$"

LionsarchCity_NPC_MountainHiker_Text_0:
# 301 "data/maps/LionsarchCity/scripts.pory"
	.string "The two paths through the mountains\n"
	.string "each offer unique challenges.\p"
	.string "The Lion Mountains path is steep but\n"
	.string "rewarding.\p"
	.string "The eastern cliff route is longer but\n"
	.string "has incredible views.$"

LionsarchCity_NPC_Ranger_Text_0:
# 308 "data/maps/LionsarchCity/scripts.pory"
	.string "We've been getting reports of\n"
	.string "increased seismic activity near the\l"
	.string "Lion Mountains.\p"
	.string "Probably just the Faculty's mining\n"
	.string "operation, but it's concerning\l"
	.string "nonetheless.$"

LionsarchCity_NPC_FishingEnthusiast_Text_0:
# 315 "data/maps/LionsarchCity/scripts.pory"
	.string "The waters around Lionsarch are full of\n"
	.string "Water-type Pokémon.\p"
	.string "I caught a Krabby just this morning!\p"
	.string "I couldn't believe my luck!$"

LionsarchCity_NPC_NewsReporter_Text_0:
# 322 "data/maps/LionsarchCity/scripts.pory"
	.string "I'm investigating the Faculty's\n"
	.string "activities for the regional news\l"
	.string "network.\p"
	.string "They claim to be mining rare metals, but\n"
	.string "their security is unusually tight.\p"
	.string "What are they really doing up there?$"

LionsarchCity_NPC_GymTrainer_Text_0:
# 329 "data/maps/LionsarchCity/scripts.pory"
	.string "Petra's Gym specializes in\n"
	.string "mountain-dwelling Pokémon.\p"
	.string "Ursaring, Golem, Donphan... they're all\n"
	.string "incredibly tough!\p"
	.string "You better come prepared.$"

LionsarchCity_NPC_ShipCaptain_Text_0:
# 336 "data/maps/LionsarchCity/scripts.pory"
	.string "My vessel sails between here and\n"
	.string "Siltroot Town regularly.\p"
	.string "The harbor's always busy with cargo\n"
	.string "ships coming and going.\p"
	.string "It's what keeps this city alive.$"

LionsarchCity_NPC_StreetVendor_Text_0:
# 343 "data/maps/LionsarchCity/scripts.pory"
	.string "The markets are the soul of Lionsarch!\p"
	.string "Traders from all over the region bring\n"
	.string "their goods here.\p"
	.string "You can find things here that don't\n"
	.string "exist anywhere else!$"

LionsarchCity_Scott_ArrivalPoint_Text_0:
# 353 "data/maps/LionsarchCity/scripts.pory"
	.string "The industrial dock stretches out\n"
	.string "before you.\p"
	.string "The smell of saltwater and diesel fills\n"
	.string "the air.$"
