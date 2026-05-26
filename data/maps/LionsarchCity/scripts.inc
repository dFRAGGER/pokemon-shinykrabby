LionsarchCity_MapScripts::
# 2 "data/maps/LionsarchCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LionsarchCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LionsarchCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LionsarchCity/scripts.pory"
	setflag FLAG_VISITED_LIONSARCH_CITY
# 4 "data/maps/LionsarchCity/scripts.pory"
	special Special_ReloadPrimaryTileset
	return


LionsarchCity_Sign_CityName::
# 13 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 14 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_CityName_Text_0
# 15 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_Gym::
# 19 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 20 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_Gym_Text_0
# 21 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_VisitorCenter::
# 25 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 26 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_VisitorCenter_Text_0
# 27 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_IndustrialPort::
# 31 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 32 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_IndustrialPort_Text_0
# 33 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_LeisurePort::
# 37 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 38 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_LeisurePort_Text_0
# 39 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_DiscoPamphlet_1::
# 47 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 48 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_DiscoPamphlet_1_Text_0
# 49 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_DiscoPamphlet_2::
# 53 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 54 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_DiscoPamphlet_2_Text_0
# 55 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_DiscoPamphlet_3::
# 59 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 60 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_DiscoPamphlet_3_Text_0
# 61 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_MarketStand_ExoticBerries::
# 69 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 70 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 71 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_ExoticBerries_Text_0
# 72 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 73 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_ExoticBerries
# 74 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 75 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 78 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_ExoticBerries:
# 79 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 80 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 81 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 82 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
	.2byte ITEM_NONE

LionsarchCity_MarketStand_EasternSpices::
# 86 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 87 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 88 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_EasternSpices_Text_0
# 89 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 90 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_EasternGoods
# 91 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 92 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 95 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_EasternGoods:
# 96 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 97 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 98 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
	.2byte ITEM_NONE

LionsarchCity_MarketStand_MountainGear::
# 102 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 103 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 104 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_MountainGear_Text_0
# 105 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 106 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_MountainGear
# 107 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 108 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 111 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_MountainGear:
# 112 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 113 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 114 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 115 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_REVIVE
# 116 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 117 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

LionsarchCity_MarketStand_RareStones::
# 121 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 122 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 123 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_RareStones_Text_0
# 124 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 125 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_RareStones
# 126 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 127 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 130 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_RareStones:
# 131 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 132 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_WATER_STONE
# 133 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 134 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 135 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_MOON_STONE
	.2byte ITEM_NONE

LionsarchCity_MarketStand_ImportedPokeBalls::
# 139 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 140 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 141 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_ImportedPokeBalls_Text_0
# 142 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 143 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_SpecialtyBalls
# 144 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 145 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 148 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_SpecialtyBalls:
# 149 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 150 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 151 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_NET_BALL
# 152 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_NEST_BALL
# 153 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

LionsarchCity_MarketStand_SeaDelicacies::
# 157 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 158 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 159 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_SeaDelicacies_Text_0
# 160 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 161 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_Delicacies
# 162 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 163 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 166 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_Delicacies:
# 167 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 168 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_SODA_POP
# 169 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_LEMONADE
# 170 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_NONE

LionsarchCity_MarketStand_TreasureHunter::
# 174 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 175 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 176 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_TreasureHunter_Text_0
# 177 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 178 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_Treasures
# 179 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 180 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 183 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_Treasures:
# 184 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_STAR_PIECE
# 185 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_NUGGET
# 186 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_PEARL
# 187 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_BIG_PEARL
	.2byte ITEM_NONE

LionsarchCity_FacultyGrunt_1::
# 195 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 196 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_1_Text_0, MSGBOX_AUTOCLOSE
# 197 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 198 "data/maps/LionsarchCity/scripts.pory"
	delay 20
# 199 "data/maps/LionsarchCity/scripts.pory"
	playse SE_PIN
# 200 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 201 "data/maps/LionsarchCity/scripts.pory"
	applymovement 15, LionsarchCity_FacultyGrunt_1_Movement_0
# 202 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_1_Text_1, MSGBOX_AUTOCLOSE
# 203 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 204 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_FacultyGrunt_2::
# 208 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 209 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_2_Text_0, MSGBOX_AUTOCLOSE
# 210 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 211 "data/maps/LionsarchCity/scripts.pory"
	delay 20
# 212 "data/maps/LionsarchCity/scripts.pory"
	playse SE_PIN
# 213 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 214 "data/maps/LionsarchCity/scripts.pory"
	applymovement 16, LionsarchCity_FacultyGrunt_1_Movement_0
# 215 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_2_Text_1, MSGBOX_AUTOCLOSE
# 216 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 217 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_FacultyGrunt_3::
# 221 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 222 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_3_Text_0, MSGBOX_AUTOCLOSE
# 223 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 224 "data/maps/LionsarchCity/scripts.pory"
	delay 20
# 225 "data/maps/LionsarchCity/scripts.pory"
	playse SE_PIN
# 226 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 227 "data/maps/LionsarchCity/scripts.pory"
	applymovement 13, LionsarchCity_FacultyGrunt_1_Movement_0
# 228 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_3_Text_1
# 229 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 230 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_FacultyGrunt_4::
# 234 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 235 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_4_Text_0, MSGBOX_AUTOCLOSE
# 236 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 237 "data/maps/LionsarchCity/scripts.pory"
	delay 20
# 238 "data/maps/LionsarchCity/scripts.pory"
	playse SE_PIN
# 239 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 240 "data/maps/LionsarchCity/scripts.pory"
	applymovement 14, LionsarchCity_FacultyGrunt_1_Movement_0
# 241 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_4_Text_1, MSGBOX_AUTOCLOSE
# 242 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 243 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_FacultyWorker_Suspicious::
# 247 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 248 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 249 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyWorker_Suspicious_Text_0, MSGBOX_AUTOCLOSE
# 250 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_ColdWeather::
# 258 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 259 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 260 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_ColdWeather_Text_0
# 261 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_TouristCouple_F::
# 265 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 266 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 267 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_TouristCouple_F_Text_0
# 268 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_TouristCouple_M::
# 272 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 273 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 274 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_TouristCouple_M_Text_0
# 275 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_OldSailor::
# 279 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 280 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 281 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_OldSailor_Text_0
# 282 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_DockWorker_1::
# 286 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 287 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 288 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_DockWorker_1_Text_0
# 289 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_DockWorker_2::
# 293 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 294 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 295 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_DockWorker_2_Text_0
# 296 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_LocalResident_1::
# 300 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 301 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 302 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_LocalResident_1_Text_0
# 303 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_LocalResident_2::
# 307 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 308 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 309 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_LocalResident_2_Text_0
# 310 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_MusicFan::
# 314 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 315 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 316 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_MusicFan_Text_0
# 317 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_BusinessPerson::
# 321 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 322 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 323 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_BusinessPerson_Text_0
# 324 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_MountainHiker::
# 328 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 329 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 330 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_MountainHiker_Text_0
# 331 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_Ranger::
# 335 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 336 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 337 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_Ranger_Text_0
# 338 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_FishingEnthusiast::
# 342 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 343 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 344 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_FishingEnthusiast_Text_0
# 345 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_NewsReporter::
# 349 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 350 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 351 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_NewsReporter_Text_0
# 352 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_GymTrainer::
# 356 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 357 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 358 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_GymTrainer_Text_0
# 359 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_ShipCaptain::
# 363 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 364 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 365 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_ShipCaptain_Text_0
# 366 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_StreetVendor::
# 370 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 371 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 372 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_StreetVendor_Text_0
# 373 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Scott_ArrivalPoint::
# 381 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 382 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Scott_ArrivalPoint_Text_0
# 383 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


# 201 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_FacultyGrunt_1_Movement_0:
# 201 "data/maps/LionsarchCity/scripts.pory"
	emote_exclamation_mark
	step_end

LionsarchCity_Sign_CityName_Text_0:
# 14 "data/maps/LionsarchCity/scripts.pory"
	.string "LIONSARCH CITY\n"
	.string "Gateway to the Northern Peaks\p"
	.string "Where the harbor meets the mountains$"

LionsarchCity_Sign_Gym_Text_0:
# 20 "data/maps/LionsarchCity/scripts.pory"
	.string "LIONSARCH CITY GYM\n"
	.string "LEADER: PETRA\n"
	.string "The Iron Mountain$"

LionsarchCity_Sign_VisitorCenter_Text_0:
# 26 "data/maps/LionsarchCity/scripts.pory"
	.string "TWIN LIONS VISITOR CENTER\n"
	.string "Information for travelers heading to\l"
	.string "Lion Mountains$"

LionsarchCity_Sign_IndustrialPort_Text_0:
# 32 "data/maps/LionsarchCity/scripts.pory"
	.string "INDUSTRIAL PORT DISTRICT\n"
	.string "AUTHORIZED PERSONNEL ONLY\p"
	.string "Heavy machinery in operation - Exercise\n"
	.string "caution$"

LionsarchCity_Sign_LeisurePort_Text_0:
# 38 "data/maps/LionsarchCity/scripts.pory"
	.string "LIONSARCH MARINA\n"
	.string "Leisure vessels and tour boats$"

LionsarchCity_DiscoPamphlet_1_Text_0:
# 48 "data/maps/LionsarchCity/scripts.pory"
	.string "A crumpled flyer is taped to a board:\p"
	.string "GROOVE UNDERGROUND\n"
	.string "OLD SCHOOL DISCO NIGHTS\n"
	.string "Every weekend!\p"
	.string "...The rest is too faded to read.$"

LionsarchCity_DiscoPamphlet_2_Text_0:
# 54 "data/maps/LionsarchCity/scripts.pory"
	.string "A colorful poster catches your eye:\p"
	.string "WHEN: Every Friday & Saturday\n"
	.string "WHERE: Ask around... if you're cool\l"
	.string "enough\n"
	.string "WHAT: Vinyl-only disco classics!\p"
	.string "BOOGIE WONDERLAND AWAITS$"

LionsarchCity_DiscoPamphlet_3_Text_0:
# 60 "data/maps/LionsarchCity/scripts.pory"
	.string "A flyer stuck to a wooden pole:\p"
	.string "DJ PETER PRESENTS:\n"
	.string "DISCO INFERNO\n"
	.string "The funkiest beats this side of the\l"
	.string "mountains!\p"
	.string "Find the basement. Feel the groove.$"

LionsarchCity_MarketStand_ExoticBerries_Text_0:
# 71 "data/maps/LionsarchCity/scripts.pory"
	.string "Welcome to my humble stand!\p"
	.string "I import the finest strands from the\n"
	.string "tropical islands far to the south.\p"
	.string "You won't find these in Siltroot Town!$"

LionsarchCity_MarketStand_EasternSpices_Text_0:
# 88 "data/maps/LionsarchCity/scripts.pory"
	.string "Greetings, traveler!\p"
	.string "My family has traded across the\n"
	.string "eastern sea routes for three\l"
	.string "generations.\p"
	.string "These Poké Dolls and incense come\n"
	.string "straight from Marshduke City's finest\l"
	.string "craftsmen!$"

LionsarchCity_MarketStand_MountainGear_Text_0:
# 104 "data/maps/LionsarchCity/scripts.pory"
	.string "Heading up to the Lion Mountains?\p"
	.string "You'll need proper gear!\p"
	.string "I stock everything the rangers\n"
	.string "recommend for high-altitude training.$"

LionsarchCity_MarketStand_RareStones_Text_0:
# 123 "data/maps/LionsarchCity/scripts.pory"
	.string "These stones came in on the morning\n"
	.string "shipment from deep caves across the\l"
	.string "region.\p"
	.string "Perfect for trainers looking to evolve\n"
	.string "their partners!$"

LionsarchCity_MarketStand_ImportedPokeBalls_Text_0:
# 141 "data/maps/LionsarchCity/scripts.pory"
	.string "Fresh shipment just arrived from Silph\n"
	.string "Co.!\p"
	.string "We get specialty Poké Balls that most\n"
	.string "marts don't carry.$"

LionsarchCity_MarketStand_SeaDelicacies_Text_0:
# 159 "data/maps/LionsarchCity/scripts.pory"
	.string "Fresh from the harbor this morning!\p"
	.string "Our Lava Cookies are baked using a\n"
	.string "recipe from sailors who've traveled the\l"
	.string "world.\p"
	.string "Perfect for curing any ailment!$"

LionsarchCity_MarketStand_TreasureHunter_Text_0:
# 176 "data/maps/LionsarchCity/scripts.pory"
	.string "I deal in rarities, kid.\p"
	.string "Things that wash up on distant shores\n"
	.string "or get dug out of ancient ruins.\p"
	.string "You got the cash, I got the goods.$"

LionsarchCity_FacultyGrunt_1_Text_0:
# 196 "data/maps/LionsarchCity/scripts.pory"
	.string "...if this ore shipment is late again the\n"
	.string "whole schedule slips... phase two can't\l"
	.string "start without it...$"

LionsarchCity_FacultyGrunt_1_Text_1:
# 202 "data/maps/LionsarchCity/scripts.pory"
	.string "Hey - HEY! Who are you?!\p"
	.string "This is a RESTRICTED Faculty dock! How\n"
	.string "did you even get in here?!\p"
	.string "Leave. NOW.$"

LionsarchCity_FacultyGrunt_2_Text_0:
# 209 "data/maps/LionsarchCity/scripts.pory"
	.string "...processing units load first, shielding\n"
	.string "on top... boss needs it all at the plant\l"
	.string "by Thursday...$"

LionsarchCity_FacultyGrunt_2_Text_1:
# 215 "data/maps/LionsarchCity/scripts.pory"
	.string "Wh- a KID?! On our dock?!\p"
	.string "Don't touch ANYTHING! These crates\n"
	.string "need to reach the ship by nightfall!\p"
	.string "Get OUT of here, right now!$"

LionsarchCity_FacultyGrunt_3_Text_0:
# 222 "data/maps/LionsarchCity/scripts.pory"
	.string "...they keep saying the steel can block\n"
	.string "it... block what exactly... I just load\l"
	.string "the ships...$"

LionsarchCity_FacultyGrunt_3_Text_1:
# 228 "data/maps/LionsarchCity/scripts.pory"
	.string "You've got some NERVE showing up here!\p"
	.string "This is Faculty property - no civilians,\n"
	.string "no visitors, NOTHING!\p"
	.string "Take a hike before you see something\n"
	.string "you'll regret!$"

LionsarchCity_FacultyGrunt_4_Text_0:
# 235 "data/maps/LionsarchCity/scripts.pory"
	.string "...dampening alloy, check... containment\n"
	.string "frames, check... boss is gonna love this\l"
	.string "batch...$"

LionsarchCity_FacultyGrunt_4_Text_1:
# 241 "data/maps/LionsarchCity/scripts.pory"
	.string "What in the - get OUT! Right NOW!\p"
	.string "This dock is authorized Faculty\n"
	.string "personnel only!\p"
	.string "You better not have seen anything -\n"
	.string "scram!$"

LionsarchCity_FacultyWorker_Suspicious_Text_0:
# 249 "data/maps/LionsarchCity/scripts.pory"
	.string "HALT! Don't you DARE take another step!\p"
	.string "This is the Faculty Steel Plant\n"
	.string "entrance - there's a MACHAMP right here\l"
	.string "and I will use it!\p"
	.string "You have NO idea where you've walked\n"
	.string "into.\p"
	.string "Turn around and forget you ever saw\n"
	.string "this place. NOW.$"

LionsarchCity_NPC_ColdWeather_Text_0:
# 260 "data/maps/LionsarchCity/scripts.pory"
	.string "Brrr! The wind coming off the mountains\n"
	.string "is brutal today!\p"
	.string "I should've worn a thicker coat.$"

LionsarchCity_NPC_TouristCouple_F_Text_0:
# 267 "data/maps/LionsarchCity/scripts.pory"
	.string "My husband and I came to see the Twin\n"
	.string "Lions.\p"
	.string "They say if you look at the peaks from\n"
	.string "the right angle, they look like two\l"
	.string "Pyroar facing each other!$"

LionsarchCity_NPC_TouristCouple_M_Text_0:
# 274 "data/maps/LionsarchCity/scripts.pory"
	.string "The Visitor Center has some great\n"
	.string "hiking maps.\p"
	.string "We're planning to trek up to the north\n"
	.string "pass tomorrow if the weather holds.$"

LionsarchCity_NPC_OldSailor_Text_0:
# 281 "data/maps/LionsarchCity/scripts.pory"
	.string "I've been working these docks for forty\n"
	.string "years.\p"
	.string "Used to be we only shipped fish and\n"
	.string "lumber.\p"
	.string "Now it's all industrial equipment and\n"
	.string "strange machinery.\p"
	.string "Times change, I suppose.$"

LionsarchCity_NPC_DockWorker_1_Text_0:
# 288 "data/maps/LionsarchCity/scripts.pory"
	.string "The ports keep this city running.\p"
	.string "We load and unload cargo ships day and\n"
	.string "night.\p"
	.string "It's hard work, but the pay is good.$"

LionsarchCity_NPC_DockWorker_2_Text_0:
# 295 "data/maps/LionsarchCity/scripts.pory"
	.string "That leisure port over there? That's\n"
	.string "where the rich folks keep their yachts.\p"
	.string "Meanwhile, we're out here hauling crates\n"
	.string "in the freezing cold.$"

LionsarchCity_NPC_LocalResident_1_Text_0:
# 302 "data/maps/LionsarchCity/scripts.pory"
	.string "Lionsarch has changed so much in\n"
	.string "recent years.\p"
	.string "The Faculty's mining operation brought\n"
	.string "jobs, but also a lot of pollution.\p"
	.string "Some call it 'the smog.'$"

LionsarchCity_NPC_LocalResident_2_Text_0:
# 309 "data/maps/LionsarchCity/scripts.pory"
	.string "If you're looking for a good time,\n"
	.string "there's supposedly a secret disco club\l"
	.string "somewhere in the city.\p"
	.string "I've heard the music thumping late at\n"
	.string "night, but I've never found it!$"

LionsarchCity_NPC_MusicFan_Text_0:
# 316 "data/maps/LionsarchCity/scripts.pory"
	.string "You like old school disco?\p"
	.string "There's this DJ... Peter, I think his name\n"
	.string "is.\p"
	.string "He throws the most incredible\n"
	.string "underground parties.\p"
	.string "But you need to know someone who knows\n"
	.string "someone to get in.$"

LionsarchCity_NPC_BusinessPerson_Text_0:
# 323 "data/maps/LionsarchCity/scripts.pory"
	.string "The route east through the cliffs is\n"
	.string "treacherous but beautiful.\p"
	.string "It eventually leads to Marshduke City,\n"
	.string "an old city built right in the middle of a\l"
	.string "swamp.\p"
	.string "Quite the sight!$"

LionsarchCity_NPC_MountainHiker_Text_0:
# 330 "data/maps/LionsarchCity/scripts.pory"
	.string "The two paths through the mountains\n"
	.string "each offer unique challenges.\p"
	.string "The Lion Mountains path is steep but\n"
	.string "rewarding.\p"
	.string "The eastern cliff route is longer but\n"
	.string "has incredible views.$"

LionsarchCity_NPC_Ranger_Text_0:
# 337 "data/maps/LionsarchCity/scripts.pory"
	.string "We've been getting reports of\n"
	.string "increased seismic activity near the\l"
	.string "Lion Mountains.\p"
	.string "Probably just the Faculty's mining\n"
	.string "operation, but it's concerning\l"
	.string "nonetheless.$"

LionsarchCity_NPC_FishingEnthusiast_Text_0:
# 344 "data/maps/LionsarchCity/scripts.pory"
	.string "The waters around Lionsarch are full of\n"
	.string "Water-type Pokémon.\p"
	.string "I caught a Krabby just this morning!\p"
	.string "I couldn't believe my luck!$"

LionsarchCity_NPC_NewsReporter_Text_0:
# 351 "data/maps/LionsarchCity/scripts.pory"
	.string "I'm investigating the Faculty's\n"
	.string "activities for the regional news\l"
	.string "network.\p"
	.string "They claim to be mining rare metals, but\n"
	.string "their security is unusually tight.\p"
	.string "What are they really doing in there?$"

LionsarchCity_NPC_GymTrainer_Text_0:
# 358 "data/maps/LionsarchCity/scripts.pory"
	.string "Petra's Gym specializes in\n"
	.string "mountain-dwelling Pokémon.\p"
	.string "Ursaring, Golem, Donphan... they're all\n"
	.string "incredibly tough!\p"
	.string "You better come prepared.$"

LionsarchCity_NPC_ShipCaptain_Text_0:
# 365 "data/maps/LionsarchCity/scripts.pory"
	.string "My vessel sails between here and\n"
	.string "Siltroot Town regularly.\p"
	.string "The harbor's always busy with cargo\n"
	.string "ships coming and going.\p"
	.string "It's what keeps this city alive.$"

LionsarchCity_NPC_StreetVendor_Text_0:
# 372 "data/maps/LionsarchCity/scripts.pory"
	.string "The markets are the soul of Lionsarch!\p"
	.string "Traders from all over the region bring\n"
	.string "their goods here.\p"
	.string "You can find things here that don't\n"
	.string "exist anywhere else!\p"
	.string "I'm setting up shop right now if you\n"
	.string "want to take a look!\p"
	.string "I probably open my stand very soon!$"

LionsarchCity_Scott_ArrivalPoint_Text_0:
# 382 "data/maps/LionsarchCity/scripts.pory"
	.string "The industrial dock stretches out\n"
	.string "before you.\p"
	.string "The smell of saltwater and diesel fills\n"
	.string "the air.$"
