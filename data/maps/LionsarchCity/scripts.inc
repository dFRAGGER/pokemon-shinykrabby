LionsarchCity_MapScripts::
# 2 "data/maps/LionsarchCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LionsarchCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LionsarchCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LionsarchCity/scripts.pory"
	setflag FLAG_VISITED_LIONSARCH_CITY
	return


LionsarchCity_Sign_Route06::
# 12 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 13 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_Route06_Text_0
# 14 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_CityName::
# 18 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 19 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_CityName_Text_0
# 20 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_Gym::
# 24 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 25 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_Gym_Text_0
# 26 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_VisitorCenter::
# 30 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 31 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_VisitorCenter_Text_0
# 32 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_IndustrialPort::
# 36 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 37 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_IndustrialPort_Text_0
# 38 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_LeisurePort::
# 42 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 43 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_LeisurePort_Text_0
# 44 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_DiscoPamphlet_1::
# 52 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 53 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_DiscoPamphlet_1_Text_0
# 54 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_DiscoPamphlet_2::
# 58 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 59 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_DiscoPamphlet_2_Text_0
# 60 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_DiscoPamphlet_3::
# 64 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 65 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_DiscoPamphlet_3_Text_0
# 66 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_MarketStand_ExoticBerries::
# 74 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 75 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 76 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_ExoticBerries_Text_0
# 77 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 78 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_ExoticBerries
# 79 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 80 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 83 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_ExoticBerries:
# 84 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 85 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 86 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 87 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
	.2byte ITEM_NONE

LionsarchCity_MarketStand_EasternSpices::
# 91 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 92 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 93 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_EasternSpices_Text_0
# 94 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 95 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_EasternGoods
# 96 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 97 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 100 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_EasternGoods:
# 101 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 102 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 103 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
	.2byte ITEM_NONE

LionsarchCity_MarketStand_MountainGear::
# 107 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 108 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 109 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_MountainGear_Text_0
# 110 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 111 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_MountainGear
# 112 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 113 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 116 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_MountainGear:
# 117 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 118 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 119 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 120 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_REVIVE
# 121 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 122 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

LionsarchCity_MarketStand_RareStones::
# 126 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 127 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 128 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_RareStones_Text_0
# 129 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 130 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_RareStones
# 131 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 132 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 135 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_RareStones:
# 136 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 137 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_WATER_STONE
# 138 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 139 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 140 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_MOON_STONE
	.2byte ITEM_NONE

LionsarchCity_MarketStand_ImportedPokeBalls::
# 144 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 145 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 146 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_ImportedPokeBalls_Text_0
# 147 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 148 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_SpecialtyBalls
# 149 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 150 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 153 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_SpecialtyBalls:
# 154 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 155 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 156 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_NET_BALL
# 157 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_NEST_BALL
# 158 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

LionsarchCity_MarketStand_SeaDelicacies::
# 162 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 163 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 164 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_SeaDelicacies_Text_0
# 165 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 166 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_Delicacies
# 167 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 168 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 171 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_Delicacies:
# 172 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 173 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_SODA_POP
# 174 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_LEMONADE
# 175 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_NONE

LionsarchCity_MarketStand_TreasureHunter::
# 179 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 180 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 181 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_TreasureHunter_Text_0
# 182 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 183 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_Treasures
# 184 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 185 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 188 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_Treasures:
# 189 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_STAR_PIECE
# 190 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_NUGGET
# 191 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_PEARL
# 192 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_BIG_PEARL
	.2byte ITEM_NONE

LionsarchCity_FacultyGrunt_1::
# 200 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 201 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_1_Text_0, MSGBOX_AUTOCLOSE
# 202 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 203 "data/maps/LionsarchCity/scripts.pory"
	delay 20
# 204 "data/maps/LionsarchCity/scripts.pory"
	playse SE_PIN
# 205 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 206 "data/maps/LionsarchCity/scripts.pory"
	applymovement 15, LionsarchCity_FacultyGrunt_1_Movement_0
# 207 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_1_Text_1, MSGBOX_AUTOCLOSE
# 208 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 209 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_FacultyGrunt_2::
# 213 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 214 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_2_Text_0, MSGBOX_AUTOCLOSE
# 215 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 216 "data/maps/LionsarchCity/scripts.pory"
	delay 20
# 217 "data/maps/LionsarchCity/scripts.pory"
	playse SE_PIN
# 218 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 219 "data/maps/LionsarchCity/scripts.pory"
	applymovement 16, LionsarchCity_FacultyGrunt_1_Movement_0
# 220 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_2_Text_1, MSGBOX_AUTOCLOSE
# 221 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 222 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_FacultyGrunt_3::
# 226 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 227 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_3_Text_0, MSGBOX_AUTOCLOSE
# 228 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 229 "data/maps/LionsarchCity/scripts.pory"
	delay 20
# 230 "data/maps/LionsarchCity/scripts.pory"
	playse SE_PIN
# 231 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 232 "data/maps/LionsarchCity/scripts.pory"
	applymovement 13, LionsarchCity_FacultyGrunt_1_Movement_0
# 233 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_3_Text_1
# 234 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 235 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_FacultyGrunt_4::
# 239 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 240 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_4_Text_0, MSGBOX_AUTOCLOSE
# 241 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 242 "data/maps/LionsarchCity/scripts.pory"
	delay 20
# 243 "data/maps/LionsarchCity/scripts.pory"
	playse SE_PIN
# 244 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 245 "data/maps/LionsarchCity/scripts.pory"
	applymovement 14, LionsarchCity_FacultyGrunt_1_Movement_0
# 246 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_4_Text_1, MSGBOX_AUTOCLOSE
# 247 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 248 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_FacultyWorker_Suspicious::
# 252 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 253 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 254 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyWorker_Suspicious_Text_0, MSGBOX_AUTOCLOSE
# 255 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_ColdWeather::
# 263 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 264 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 265 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_ColdWeather_Text_0
# 266 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_TouristCouple_F::
# 270 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 271 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 272 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_TouristCouple_F_Text_0
# 273 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_TouristCouple_M::
# 277 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 278 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 279 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_TouristCouple_M_Text_0
# 280 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_OldSailor::
# 284 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 285 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 286 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_OldSailor_Text_0
# 287 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_DockWorker_1::
# 291 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 292 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 293 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_DockWorker_1_Text_0
# 294 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_DockWorker_2::
# 298 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 299 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 300 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_DockWorker_2_Text_0
# 301 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_LocalResident_1::
# 305 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 306 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 307 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_LocalResident_1_Text_0
# 308 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_LocalResident_2::
# 312 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 313 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 314 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_LocalResident_2_Text_0
# 315 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_MusicFan::
# 319 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 320 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 321 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_MusicFan_Text_0
# 322 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_BusinessPerson::
# 326 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 327 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 328 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_BusinessPerson_Text_0
# 329 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_MountainHiker::
# 333 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 334 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 335 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_MountainHiker_Text_0
# 336 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_Ranger::
# 340 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 341 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 342 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_Ranger_Text_0
# 343 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_FishingEnthusiast::
# 347 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 348 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 349 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_FishingEnthusiast_Text_0
# 350 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_NewsReporter::
# 354 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 355 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 356 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_NewsReporter_Text_0
# 357 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_GymTrainer::
# 361 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 362 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 363 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_GymTrainer_Text_0
# 364 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_ShipCaptain::
# 368 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 369 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 370 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_ShipCaptain_Text_0
# 371 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_StreetVendor::
# 375 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 376 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 377 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_StreetVendor_Text_0
# 378 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Scott_ArrivalPoint::
# 386 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 387 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Scott_ArrivalPoint_Text_0
# 388 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


# 206 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_FacultyGrunt_1_Movement_0:
# 206 "data/maps/LionsarchCity/scripts.pory"
	emote_exclamation_mark
	step_end

LionsarchCity_Sign_Route06_Text_0:
# 13 "data/maps/LionsarchCity/scripts.pory"
	.string "Upana Cave System\n"
	.string "Path to Marshduke City\p"
	.string "Beware of falling Geodudes!$"

LionsarchCity_Sign_CityName_Text_0:
# 19 "data/maps/LionsarchCity/scripts.pory"
	.string "LIONSARCH CITY\n"
	.string "Gateway to the Northern Peaks\p"
	.string "Where the harbor meets the mountains$"

LionsarchCity_Sign_Gym_Text_0:
# 25 "data/maps/LionsarchCity/scripts.pory"
	.string "LIONSARCH CITY GYM\n"
	.string "LEADER: PETRA\n"
	.string "The Iron Mountain$"

LionsarchCity_Sign_VisitorCenter_Text_0:
# 31 "data/maps/LionsarchCity/scripts.pory"
	.string "TWIN LIONS VISITOR CENTER\n"
	.string "Information for travelers heading to\l"
	.string "Lion Mountains$"

LionsarchCity_Sign_IndustrialPort_Text_0:
# 37 "data/maps/LionsarchCity/scripts.pory"
	.string "INDUSTRIAL PORT DISTRICT\n"
	.string "AUTHORIZED PERSONNEL ONLY\p"
	.string "Heavy machinery in operation - Exercise\n"
	.string "caution$"

LionsarchCity_Sign_LeisurePort_Text_0:
# 43 "data/maps/LionsarchCity/scripts.pory"
	.string "LIONSARCH MARINA\n"
	.string "Leisure vessels and tour boats$"

LionsarchCity_DiscoPamphlet_1_Text_0:
# 53 "data/maps/LionsarchCity/scripts.pory"
	.string "A crumpled flyer is taped to a board:\p"
	.string "GROOVE UNDERGROUND\n"
	.string "OLD SCHOOL DISCO NIGHTS\n"
	.string "Every weekend!\p"
	.string "...The rest is too faded to read.$"

LionsarchCity_DiscoPamphlet_2_Text_0:
# 59 "data/maps/LionsarchCity/scripts.pory"
	.string "A colorful poster catches your eye:\p"
	.string "WHEN: Every Friday & Saturday\n"
	.string "WHERE: Ask around... if you're cool\l"
	.string "enough\n"
	.string "WHAT: Vinyl-only disco classics!\p"
	.string "BOOGIE WONDERLAND AWAITS$"

LionsarchCity_DiscoPamphlet_3_Text_0:
# 65 "data/maps/LionsarchCity/scripts.pory"
	.string "A flyer stuck to a wooden pole:\p"
	.string "DJ PETER PRESENTS:\n"
	.string "DISCO INFERNO\n"
	.string "The funkiest beats this side of the\l"
	.string "mountains!\p"
	.string "Find the basement. Feel the groove.$"

LionsarchCity_MarketStand_ExoticBerries_Text_0:
# 76 "data/maps/LionsarchCity/scripts.pory"
	.string "Welcome to my humble stand!\p"
	.string "I import the finest strands from the\n"
	.string "tropical islands far to the south.\p"
	.string "You won't find these in Siltroot Town!$"

LionsarchCity_MarketStand_EasternSpices_Text_0:
# 93 "data/maps/LionsarchCity/scripts.pory"
	.string "Greetings, traveler!\p"
	.string "My family has traded across the\n"
	.string "eastern sea routes for three\l"
	.string "generations.\p"
	.string "These Poké Dolls and incense come\n"
	.string "straight from Marshduke City's finest\l"
	.string "craftsmen!$"

LionsarchCity_MarketStand_MountainGear_Text_0:
# 109 "data/maps/LionsarchCity/scripts.pory"
	.string "Heading up to the Lion Mountains?\p"
	.string "You'll need proper gear!\p"
	.string "I stock everything the rangers\n"
	.string "recommend for high-altitude training.$"

LionsarchCity_MarketStand_RareStones_Text_0:
# 128 "data/maps/LionsarchCity/scripts.pory"
	.string "These stones came in on the morning\n"
	.string "shipment from deep caves across the\l"
	.string "region.\p"
	.string "Perfect for trainers looking to evolve\n"
	.string "their partners!$"

LionsarchCity_MarketStand_ImportedPokeBalls_Text_0:
# 146 "data/maps/LionsarchCity/scripts.pory"
	.string "Fresh shipment just arrived from Silph\n"
	.string "Co.!\p"
	.string "We get specialty Poké Balls that most\n"
	.string "marts don't carry.$"

LionsarchCity_MarketStand_SeaDelicacies_Text_0:
# 164 "data/maps/LionsarchCity/scripts.pory"
	.string "Fresh from the harbor this morning!\p"
	.string "Our Lava Cookies are baked using a\n"
	.string "recipe from sailors who've traveled the\l"
	.string "world.\p"
	.string "Perfect for curing any ailment!$"

LionsarchCity_MarketStand_TreasureHunter_Text_0:
# 181 "data/maps/LionsarchCity/scripts.pory"
	.string "I deal in rarities, kid.\p"
	.string "Things that wash up on distant shores\n"
	.string "or get dug out of ancient ruins.\p"
	.string "You got the cash, I got the goods.$"

LionsarchCity_FacultyGrunt_1_Text_0:
# 201 "data/maps/LionsarchCity/scripts.pory"
	.string "...if this ore shipment is late again the\n"
	.string "whole schedule slips... phase two can't\l"
	.string "start without it...$"

LionsarchCity_FacultyGrunt_1_Text_1:
# 207 "data/maps/LionsarchCity/scripts.pory"
	.string "Hey - HEY! Who are you?!\p"
	.string "This is a RESTRICTED Faculty dock! How\n"
	.string "did you even get in here?!\p"
	.string "Leave. NOW.$"

LionsarchCity_FacultyGrunt_2_Text_0:
# 214 "data/maps/LionsarchCity/scripts.pory"
	.string "...processing units load first, shielding\n"
	.string "on top... boss needs it all at the plant\l"
	.string "by Thursday...$"

LionsarchCity_FacultyGrunt_2_Text_1:
# 220 "data/maps/LionsarchCity/scripts.pory"
	.string "Wh- a KID?! On our dock?!\p"
	.string "Don't touch ANYTHING! These crates\n"
	.string "need to reach the ship by nightfall!\p"
	.string "Get OUT of here, right now!$"

LionsarchCity_FacultyGrunt_3_Text_0:
# 227 "data/maps/LionsarchCity/scripts.pory"
	.string "...they keep saying the steel can block\n"
	.string "it... block what exactly... I just load\l"
	.string "the ships...$"

LionsarchCity_FacultyGrunt_3_Text_1:
# 233 "data/maps/LionsarchCity/scripts.pory"
	.string "You've got some NERVE showing up here!\p"
	.string "This is Faculty property - no civilians,\n"
	.string "no visitors, NOTHING!\p"
	.string "Take a hike before you see something\n"
	.string "you'll regret!$"

LionsarchCity_FacultyGrunt_4_Text_0:
# 240 "data/maps/LionsarchCity/scripts.pory"
	.string "...dampening alloy, check... containment\n"
	.string "frames, check... boss is gonna love this\l"
	.string "batch...$"

LionsarchCity_FacultyGrunt_4_Text_1:
# 246 "data/maps/LionsarchCity/scripts.pory"
	.string "What in the - get OUT! Right NOW!\p"
	.string "This dock is authorized Faculty\n"
	.string "personnel only!\p"
	.string "You better not have seen anything -\n"
	.string "scram!$"

LionsarchCity_FacultyWorker_Suspicious_Text_0:
# 254 "data/maps/LionsarchCity/scripts.pory"
	.string "HALT! Don't you DARE take another step!\p"
	.string "This is the Faculty Steel Plant\n"
	.string "entrance - there's a MACHAMP right here\l"
	.string "and I will use it!\p"
	.string "You have NO idea where you've walked\n"
	.string "into.\p"
	.string "Turn around and forget you ever saw\n"
	.string "this place. NOW.$"

LionsarchCity_NPC_ColdWeather_Text_0:
# 265 "data/maps/LionsarchCity/scripts.pory"
	.string "Brrr! The wind coming off the mountains\n"
	.string "is brutal today!\p"
	.string "I should've worn a thicker coat.$"

LionsarchCity_NPC_TouristCouple_F_Text_0:
# 272 "data/maps/LionsarchCity/scripts.pory"
	.string "My husband and I came to see the Twin\n"
	.string "Lions.\p"
	.string "They say if you look at the peaks from\n"
	.string "the right angle, they look like two\l"
	.string "Pyroar facing each other!$"

LionsarchCity_NPC_TouristCouple_M_Text_0:
# 279 "data/maps/LionsarchCity/scripts.pory"
	.string "The Visitor Center has some great\n"
	.string "hiking maps.\p"
	.string "We're planning to trek up to the north\n"
	.string "pass tomorrow if the weather holds.$"

LionsarchCity_NPC_OldSailor_Text_0:
# 286 "data/maps/LionsarchCity/scripts.pory"
	.string "I've been working these docks for forty\n"
	.string "years.\p"
	.string "Used to be we only shipped fish and\n"
	.string "lumber.\p"
	.string "Now it's all industrial equipment and\n"
	.string "strange machinery.\p"
	.string "Times change, I suppose.$"

LionsarchCity_NPC_DockWorker_1_Text_0:
# 293 "data/maps/LionsarchCity/scripts.pory"
	.string "The ports keep this city running.\p"
	.string "We load and unload cargo ships day and\n"
	.string "night.\p"
	.string "It's hard work, but the pay is good.$"

LionsarchCity_NPC_DockWorker_2_Text_0:
# 300 "data/maps/LionsarchCity/scripts.pory"
	.string "That leisure port over there? That's\n"
	.string "where the rich folks keep their yachts.\p"
	.string "Meanwhile, we're out here hauling crates\n"
	.string "in the freezing cold.$"

LionsarchCity_NPC_LocalResident_1_Text_0:
# 307 "data/maps/LionsarchCity/scripts.pory"
	.string "Lionsarch has changed so much in\n"
	.string "recent years.\p"
	.string "The Faculty's mining operation brought\n"
	.string "jobs, but also a lot of pollution.\p"
	.string "Some call it 'the smog.'$"

LionsarchCity_NPC_LocalResident_2_Text_0:
# 314 "data/maps/LionsarchCity/scripts.pory"
	.string "If you're looking for a good time,\n"
	.string "there's supposedly a secret disco club\l"
	.string "somewhere in the city.\p"
	.string "I've heard the music thumping late at\n"
	.string "night, but I've never found it!$"

LionsarchCity_NPC_MusicFan_Text_0:
# 321 "data/maps/LionsarchCity/scripts.pory"
	.string "You like old school disco?\p"
	.string "There's this DJ... Peter, I think his name\n"
	.string "is.\p"
	.string "He throws the most incredible\n"
	.string "underground parties.\p"
	.string "But you need to know someone who knows\n"
	.string "someone to get in.$"

LionsarchCity_NPC_BusinessPerson_Text_0:
# 328 "data/maps/LionsarchCity/scripts.pory"
	.string "The route east through the cliffs is\n"
	.string "treacherous but beautiful.\p"
	.string "It eventually leads to Marshduke City,\n"
	.string "an old city built right in the middle of a\l"
	.string "swamp.\p"
	.string "Quite the sight!$"

LionsarchCity_NPC_MountainHiker_Text_0:
# 335 "data/maps/LionsarchCity/scripts.pory"
	.string "The two paths through the mountains\n"
	.string "each offer unique challenges.\p"
	.string "The Lion Mountains path is steep but\n"
	.string "rewarding.\p"
	.string "The eastern cliff route is longer but\n"
	.string "has incredible views.$"

LionsarchCity_NPC_Ranger_Text_0:
# 342 "data/maps/LionsarchCity/scripts.pory"
	.string "We've been getting reports of\n"
	.string "increased seismic activity near the\l"
	.string "Lion Mountains.\p"
	.string "Probably just the Faculty's mining\n"
	.string "operation, but it's concerning\l"
	.string "nonetheless.$"

LionsarchCity_NPC_FishingEnthusiast_Text_0:
# 349 "data/maps/LionsarchCity/scripts.pory"
	.string "The waters around Lionsarch are full of\n"
	.string "Water-type Pokémon.\p"
	.string "I caught a Krabby just this morning!\p"
	.string "I couldn't believe my luck!$"

LionsarchCity_NPC_NewsReporter_Text_0:
# 356 "data/maps/LionsarchCity/scripts.pory"
	.string "I'm investigating the Faculty's\n"
	.string "activities for the regional news\l"
	.string "network.\p"
	.string "They claim to be mining rare metals, but\n"
	.string "their security is unusually tight.\p"
	.string "What are they really doing in there?$"

LionsarchCity_NPC_GymTrainer_Text_0:
# 363 "data/maps/LionsarchCity/scripts.pory"
	.string "Petra's Gym specializes in\n"
	.string "mountain-dwelling Pokémon.\p"
	.string "Ursaring, Golem, Donphan... they're all\n"
	.string "incredibly tough!\p"
	.string "You better come prepared.$"

LionsarchCity_NPC_ShipCaptain_Text_0:
# 370 "data/maps/LionsarchCity/scripts.pory"
	.string "My vessel sails between here and\n"
	.string "Siltroot Town regularly.\p"
	.string "The harbor's always busy with cargo\n"
	.string "ships coming and going.\p"
	.string "It's what keeps this city alive.$"

LionsarchCity_NPC_StreetVendor_Text_0:
# 377 "data/maps/LionsarchCity/scripts.pory"
	.string "The markets are the soul of Lionsarch!\p"
	.string "Traders from all over the region bring\n"
	.string "their goods here.\p"
	.string "You can find things here that don't\n"
	.string "exist anywhere else!\p"
	.string "I'm setting up shop right now if you\n"
	.string "want to take a look!\p"
	.string "I probably open my stand very soon!$"

LionsarchCity_Scott_ArrivalPoint_Text_0:
# 387 "data/maps/LionsarchCity/scripts.pory"
	.string "The industrial dock stretches out\n"
	.string "before you.\p"
	.string "The smell of saltwater and diesel fills\n"
	.string "the air.$"
