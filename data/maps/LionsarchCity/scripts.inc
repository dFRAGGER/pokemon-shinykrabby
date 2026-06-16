LionsarchCity_MapScripts::
# 2 "data/maps/LionsarchCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LionsarchCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/LionsarchCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LionsarchCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LionsarchCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LionsarchCity/scripts.pory"
	setflag FLAG_VISITED_LIONSARCH_CITY
# 4 "data/maps/LionsarchCity/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_COMPLETE, LionsarchCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

LionsarchCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/LionsarchCity/scripts.pory"
	setflag FLAG_HIDE_LIONSARCH_RECTOR_SENDOFF
# 6 "data/maps/LionsarchCity/scripts.pory"
	setflag FLAG_HIDE_LIONSARCH_BARRY_SENDOFF
# 7 "data/maps/LionsarchCity/scripts.pory"
	setflag FLAG_HIDE_LIONSARCH_CONRECTOR_SENDOFF
	return

LionsarchCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/LionsarchCity/scripts.pory"
	map_script_2 VAR_LIONSARCH_CITY_STATE, 1, LionsarchCity_RectorSendoff
	.2byte 0


LionsarchCity_Sign_Route06::
# 20 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 21 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_Route06_Text_0
# 22 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_CityName::
# 26 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 27 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_CityName_Text_0
# 28 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_Gym::
# 32 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 33 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_Gym_Text_0
# 34 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_VisitorCenter::
# 38 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 39 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_VisitorCenter_Text_0
# 40 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_IndustrialPort::
# 44 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 45 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_IndustrialPort_Text_0
# 46 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Sign_LeisurePort::
# 50 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 51 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Sign_LeisurePort_Text_0
# 52 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_DiscoPamphlet_1::
# 60 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 61 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_DiscoPamphlet_1_Text_0
# 62 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_DiscoPamphlet_2::
# 66 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 67 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_DiscoPamphlet_2_Text_0
# 68 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_DiscoPamphlet_3::
# 72 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 73 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_DiscoPamphlet_3_Text_0
# 74 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_MarketStand_ExoticBerries::
# 82 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 83 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 84 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_ExoticBerries_Text_0
# 85 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 86 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_ExoticBerries
# 87 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 88 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 91 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_ExoticBerries:
# 92 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 93 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 94 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 95 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
	.2byte ITEM_NONE

LionsarchCity_MarketStand_EasternSpices::
# 99 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 100 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 101 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_EasternSpices_Text_0
# 102 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 103 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_EasternGoods
# 104 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 105 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 108 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_EasternGoods:
# 109 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 110 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 111 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
	.2byte ITEM_NONE

LionsarchCity_MarketStand_MountainGear::
# 115 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 116 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 117 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_MountainGear_Text_0
# 118 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 119 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_MountainGear
# 120 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 121 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 124 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_MountainGear:
# 125 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 126 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 127 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 128 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_REVIVE
# 129 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 130 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

LionsarchCity_MarketStand_RareStones::
# 134 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 135 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 136 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_RareStones_Text_0
# 137 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 138 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_RareStones
# 139 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 140 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 143 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_RareStones:
# 144 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 145 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_WATER_STONE
# 146 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 147 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 148 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_MOON_STONE
	.2byte ITEM_NONE

LionsarchCity_MarketStand_ImportedPokeBalls::
# 152 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 153 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 154 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_ImportedPokeBalls_Text_0
# 155 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 156 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_SpecialtyBalls
# 157 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 158 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 161 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_SpecialtyBalls:
# 162 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 163 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 164 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_NET_BALL
# 165 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_NEST_BALL
# 166 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

LionsarchCity_MarketStand_SeaDelicacies::
# 170 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 171 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 172 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_SeaDelicacies_Text_0
# 173 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 174 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_Delicacies
# 175 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 176 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 179 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_Delicacies:
# 180 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 181 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_SODA_POP
# 182 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_LEMONADE
# 183 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_NONE

LionsarchCity_MarketStand_TreasureHunter::
# 187 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 188 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 189 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_MarketStand_TreasureHunter_Text_0
# 190 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 191 "data/maps/LionsarchCity/scripts.pory"
	pokemart LionsarchCity_Mart_Treasures
# 192 "data/maps/LionsarchCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 193 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


	.align 2
# 196 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_Mart_Treasures:
# 197 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_STAR_PIECE
# 198 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_NUGGET
# 199 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_PEARL
# 200 "data/maps/LionsarchCity/scripts.pory"
	.2byte ITEM_BIG_PEARL
	.2byte ITEM_NONE

LionsarchCity_FacultyGrunt_1::
# 208 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 209 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_1_Text_0, MSGBOX_AUTOCLOSE
# 210 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 211 "data/maps/LionsarchCity/scripts.pory"
	delay 20
# 212 "data/maps/LionsarchCity/scripts.pory"
	playse SE_PIN
# 213 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 214 "data/maps/LionsarchCity/scripts.pory"
	applymovement 15, LionsarchCity_FacultyGrunt_1_Movement_0
# 215 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_1_Text_1, MSGBOX_AUTOCLOSE
# 216 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 217 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_FacultyGrunt_2::
# 221 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 222 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_2_Text_0, MSGBOX_AUTOCLOSE
# 223 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 224 "data/maps/LionsarchCity/scripts.pory"
	delay 20
# 225 "data/maps/LionsarchCity/scripts.pory"
	playse SE_PIN
# 226 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 227 "data/maps/LionsarchCity/scripts.pory"
	applymovement 16, LionsarchCity_FacultyGrunt_1_Movement_0
# 228 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_2_Text_1, MSGBOX_AUTOCLOSE
# 229 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 230 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_FacultyGrunt_3::
# 234 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 235 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_3_Text_0, MSGBOX_AUTOCLOSE
# 236 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 237 "data/maps/LionsarchCity/scripts.pory"
	delay 20
# 238 "data/maps/LionsarchCity/scripts.pory"
	playse SE_PIN
# 239 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 240 "data/maps/LionsarchCity/scripts.pory"
	applymovement 13, LionsarchCity_FacultyGrunt_1_Movement_0
# 241 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_3_Text_1
# 242 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 243 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_FacultyGrunt_4::
# 247 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 248 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_4_Text_0, MSGBOX_AUTOCLOSE
# 249 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 250 "data/maps/LionsarchCity/scripts.pory"
	delay 20
# 251 "data/maps/LionsarchCity/scripts.pory"
	playse SE_PIN
# 252 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 253 "data/maps/LionsarchCity/scripts.pory"
	applymovement 14, LionsarchCity_FacultyGrunt_1_Movement_0
# 254 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyGrunt_4_Text_1, MSGBOX_AUTOCLOSE
# 255 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 256 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_FacultyWorker_Suspicious::
# 260 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 261 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 262 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_FacultyWorker_Suspicious_Text_0, MSGBOX_AUTOCLOSE
# 263 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_ColdWeather::
# 271 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 272 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 273 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_ColdWeather_Text_0
# 274 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_TouristCouple_F::
# 278 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 279 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 280 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_TouristCouple_F_Text_0
# 281 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_TouristCouple_M::
# 285 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 286 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 287 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_TouristCouple_M_Text_0
# 288 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_OldSailor::
# 292 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 293 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 294 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_OldSailor_Text_0
# 295 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_DockWorker_1::
# 299 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 300 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 301 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_DockWorker_1_Text_0
# 302 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_DockWorker_2::
# 306 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 307 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 308 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_DockWorker_2_Text_0
# 309 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_LocalResident_1::
# 313 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 314 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 315 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_LocalResident_1_Text_0
# 316 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_LocalResident_2::
# 320 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 321 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 322 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_LocalResident_2_Text_0
# 323 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_MusicFan::
# 327 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 328 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 329 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_MusicFan_Text_0
# 330 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_BusinessPerson::
# 334 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 335 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 336 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_BusinessPerson_Text_0
# 337 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_MountainHiker::
# 341 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 342 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 343 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_MountainHiker_Text_0
# 344 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_Ranger::
# 348 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 349 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 350 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_Ranger_Text_0
# 351 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_FishingEnthusiast::
# 355 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 356 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 357 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_FishingEnthusiast_Text_0
# 358 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_NewsReporter::
# 362 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 363 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 364 "data/maps/LionsarchCity/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_COMPLETE, LionsarchCity_NPC_NewsReporter_2
# 369 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_NewsReporter_Text_1
# 370 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return

LionsarchCity_NPC_NewsReporter_2:
# 365 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_NewsReporter_Text_0
# 366 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	end


LionsarchCity_NPC_GymTrainer::
# 374 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 375 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 376 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_GymTrainer_Text_0
# 377 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_ShipCaptain::
# 381 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 382 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 383 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_ShipCaptain_Text_0
# 384 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_NPC_StreetVendor::
# 388 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 389 "data/maps/LionsarchCity/scripts.pory"
	faceplayer
# 390 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_NPC_StreetVendor_Text_0
# 391 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_Scott_ArrivalPoint::
# 399 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 400 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_Scott_ArrivalPoint_Text_0
# 401 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return


LionsarchCity_RectorSendoff::
# 410 "data/maps/LionsarchCity/scripts.pory"
	setvar VAR_LIONSARCH_CITY_STATE, 2
# 411 "data/maps/LionsarchCity/scripts.pory"
	lockall
# 412 "data/maps/LionsarchCity/scripts.pory"
	clearflag FLAG_HIDE_LIONSARCH_RECTOR_SENDOFF
# 413 "data/maps/LionsarchCity/scripts.pory"
	addobject 36
# 414 "data/maps/LionsarchCity/scripts.pory"
	delay 30
# 416 "data/maps/LionsarchCity/scripts.pory"
	setspeaker LionsarchCity_RectorSendoff_Text_0
# 417 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_RectorSendoff_Text_1, MSGBOX_AUTOCLOSE
# 418 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 420 "data/maps/LionsarchCity/scripts.pory"
	special SpawnCameraObject
# 421 "data/maps/LionsarchCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LionsarchCity_RectorSendoff_Movement_0
# 422 "data/maps/LionsarchCity/scripts.pory"
	waitmovement
# 423 "data/maps/LionsarchCity/scripts.pory"
	setflag FLAG_HIDE_LIONSARCH_FACULTY_SHIPS
# 424 "data/maps/LionsarchCity/scripts.pory"
	applymovement 38, LionsarchCity_RectorSendoff_Movement_1
# 425 "data/maps/LionsarchCity/scripts.pory"
	waitmovement
# 426 "data/maps/LionsarchCity/scripts.pory"
	playse SE_PIN
# 427 "data/maps/LionsarchCity/scripts.pory"
	applymovement 16, LionsarchCity_RectorSendoff_Movement_2
# 428 "data/maps/LionsarchCity/scripts.pory"
	setspeaker LionsarchCity_RectorSendoff_Text_2
# 429 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_RectorSendoff_Text_3, MSGBOX_AUTOCLOSE
# 430 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 431 "data/maps/LionsarchCity/scripts.pory"
	applymovement 16, LionsarchCity_RectorSendoff_Movement_3
# 432 "data/maps/LionsarchCity/scripts.pory"
	waitmovement
# 433 "data/maps/LionsarchCity/scripts.pory"
	removeobject 16
# 434 "data/maps/LionsarchCity/scripts.pory"
	applymovement 38, LionsarchCity_RectorSendoff_Movement_4
# 435 "data/maps/LionsarchCity/scripts.pory"
	waitmovement
# 436 "data/maps/LionsarchCity/scripts.pory"
	setspeaker LionsarchCity_RectorSendoff_Text_2
# 437 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_RectorSendoff_Text_4, MSGBOX_AUTOCLOSE
# 438 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 439 "data/maps/LionsarchCity/scripts.pory"
	applymovement 17, LionsarchCity_RectorSendoff_Movement_5
# 440 "data/maps/LionsarchCity/scripts.pory"
	applymovement 12, LionsarchCity_RectorSendoff_Movement_6
# 441 "data/maps/LionsarchCity/scripts.pory"
	waitmovement 12
# 442 "data/maps/LionsarchCity/scripts.pory"
	removeobject 12
# 443 "data/maps/LionsarchCity/scripts.pory"
	removeobject 17
# 444 "data/maps/LionsarchCity/scripts.pory"
	applymovement 38, LionsarchCity_RectorSendoff_Movement_7
# 445 "data/maps/LionsarchCity/scripts.pory"
	applymovement 39, LionsarchCity_RectorSendoff_Movement_8
# 446 "data/maps/LionsarchCity/scripts.pory"
	waitmovement 39
# 447 "data/maps/LionsarchCity/scripts.pory"
	setspeaker LionsarchCity_RectorSendoff_Text_5
# 448 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_RectorSendoff_Text_6, MSGBOX_AUTOCLOSE
# 449 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 450 "data/maps/LionsarchCity/scripts.pory"
	applymovement 38, LionsarchCity_RectorSendoff_Movement_9
# 451 "data/maps/LionsarchCity/scripts.pory"
	waitmovement
# 452 "data/maps/LionsarchCity/scripts.pory"
	removeobject 38
# 453 "data/maps/LionsarchCity/scripts.pory"
	applymovement 39, LionsarchCity_RectorSendoff_Movement_10
# 454 "data/maps/LionsarchCity/scripts.pory"
	waitmovement
# 455 "data/maps/LionsarchCity/scripts.pory"
	removeobject 39
# 456 "data/maps/LionsarchCity/scripts.pory"
	delay 30
# 457 "data/maps/LionsarchCity/scripts.pory"
	setspeaker LionsarchCity_RectorSendoff_Text_0
# 458 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_RectorSendoff_Text_7, MSGBOX_AUTOCLOSE
# 459 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 461 "data/maps/LionsarchCity/scripts.pory"
	delay 60
# 462 "data/maps/LionsarchCity/scripts.pory"
	setflag FLAG_HIDE_LIONSARCH_FACULTY_SHIPS
# 463 "data/maps/LionsarchCity/scripts.pory"
	applymovement 4, LionsarchCity_RectorSendoff_Movement_11
# 464 "data/maps/LionsarchCity/scripts.pory"
	applymovement 3, LionsarchCity_RectorSendoff_Movement_12
# 465 "data/maps/LionsarchCity/scripts.pory"
	waitmovement 3
# 466 "data/maps/LionsarchCity/scripts.pory"
	removeobject 3
# 467 "data/maps/LionsarchCity/scripts.pory"
	removeobject 4
# 468 "data/maps/LionsarchCity/scripts.pory"
	playse SE_PIN
# 469 "data/maps/LionsarchCity/scripts.pory"
	applymovement 41, LionsarchCity_FacultyGrunt_1_Movement_0
# 470 "data/maps/LionsarchCity/scripts.pory"
	waitmovement
# 471 "data/maps/LionsarchCity/scripts.pory"
	delay 30
# 472 "data/maps/LionsarchCity/scripts.pory"
	applymovement 41, LionsarchCity_RectorSendoff_Movement_13
# 473 "data/maps/LionsarchCity/scripts.pory"
	waitmovement 41
# 474 "data/maps/LionsarchCity/scripts.pory"
	removeobject 41
# 476 "data/maps/LionsarchCity/scripts.pory"
	delay 90
# 478 "data/maps/LionsarchCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LionsarchCity_RectorSendoff_Movement_14
# 479 "data/maps/LionsarchCity/scripts.pory"
	waitmovement
# 480 "data/maps/LionsarchCity/scripts.pory"
	special RemoveCameraObject
# 481 "data/maps/LionsarchCity/scripts.pory"
	delay 30
# 483 "data/maps/LionsarchCity/scripts.pory"
	applymovement 36, LionsarchCity_RectorSendoff_Movement_15
# 484 "data/maps/LionsarchCity/scripts.pory"
	applymovement LOCALID_PLAYER, LionsarchCity_RectorSendoff_Movement_16
# 485 "data/maps/LionsarchCity/scripts.pory"
	setspeaker LionsarchCity_RectorSendoff_Text_0
# 486 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_RectorSendoff_Text_8, MSGBOX_AUTOCLOSE
# 487 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 488 "data/maps/LionsarchCity/scripts.pory"
	delay 120
# 489 "data/maps/LionsarchCity/scripts.pory"
	applymovement 36, LionsarchCity_RectorSendoff_Movement_17
# 490 "data/maps/LionsarchCity/scripts.pory"
	setspeaker LionsarchCity_RectorSendoff_Text_0
# 491 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_RectorSendoff_Text_9, MSGBOX_AUTOCLOSE
# 492 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 494 "data/maps/LionsarchCity/scripts.pory"
	playmoncry SPECIES_SKARMORY, CRY_MODE_NORMAL
# 495 "data/maps/LionsarchCity/scripts.pory"
	applymovement 37, LionsarchCity_RectorSendoff_Movement_18
# 496 "data/maps/LionsarchCity/scripts.pory"
	waitmovement
# 497 "data/maps/LionsarchCity/scripts.pory"
	removeobject 37
# 498 "data/maps/LionsarchCity/scripts.pory"
	applymovement 36, LionsarchCity_RectorSendoff_Movement_19
# 499 "data/maps/LionsarchCity/scripts.pory"
	waitmovement
# 500 "data/maps/LionsarchCity/scripts.pory"
	removeobject 36
# 501 "data/maps/LionsarchCity/scripts.pory"
	delay 60
# 502 "data/maps/LionsarchCity/scripts.pory"
	addobject 40
# 503 "data/maps/LionsarchCity/scripts.pory"
	playse SE_PIN
# 504 "data/maps/LionsarchCity/scripts.pory"
	applymovement LOCALID_PLAYER, LionsarchCity_RectorSendoff_Movement_20
# 505 "data/maps/LionsarchCity/scripts.pory"
	applymovement 40, LionsarchCity_RectorSendoff_Movement_21
# 506 "data/maps/LionsarchCity/scripts.pory"
	waitmovement
# 507 "data/maps/LionsarchCity/scripts.pory"
	applymovement 40, LionsarchCity_RectorSendoff_Movement_22
# 508 "data/maps/LionsarchCity/scripts.pory"
	waitmovement
# 509 "data/maps/LionsarchCity/scripts.pory"
	applymovement LOCALID_PLAYER, LionsarchCity_RectorSendoff_Movement_17
# 510 "data/maps/LionsarchCity/scripts.pory"
	waitmovement
# 511 "data/maps/LionsarchCity/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_POKEMON_CAGED, LionsarchCity_RectorSendoff_2
LionsarchCity_RectorSendoff_1:
# 520 "data/maps/LionsarchCity/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_POKEMON_CAGED, LionsarchCity_RectorSendoff_5
LionsarchCity_RectorSendoff_4:
# 529 "data/maps/LionsarchCity/scripts.pory"
	delay 90
# 530 "data/maps/LionsarchCity/scripts.pory"
	playse SE_PIN
# 531 "data/maps/LionsarchCity/scripts.pory"
	applymovement LOCALID_PLAYER, LionsarchCity_RectorSendoff_Movement_20
# 532 "data/maps/LionsarchCity/scripts.pory"
	applymovement 40, LionsarchCity_RectorSendoff_Movement_25
# 533 "data/maps/LionsarchCity/scripts.pory"
	waitmovement
# 534 "data/maps/LionsarchCity/scripts.pory"
	removeobject 40
# 535 "data/maps/LionsarchCity/scripts.pory"
	delay 60
# 536 "data/maps/LionsarchCity/scripts.pory"
	setflag FLAG_HIDE_LIONSARCH_RECTOR_SENDOFF
# 537 "data/maps/LionsarchCity/scripts.pory"
	delay 60
# 538 "data/maps/LionsarchCity/scripts.pory"
	pokenavcall LionsarchCity_RectorSendoff_Text_12
# 539 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
# 540 "data/maps/LionsarchCity/scripts.pory"
	setspeaker NULL
# 541 "data/maps/LionsarchCity/scripts.pory"
	releaseall
	return

LionsarchCity_RectorSendoff_2:
# 512 "data/maps/LionsarchCity/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_NORMAL
# 513 "data/maps/LionsarchCity/scripts.pory"
	waitmoncry
# 514 "data/maps/LionsarchCity/scripts.pory"
	applymovement 40, LionsarchCity_RectorSendoff_Movement_23
# 515 "data/maps/LionsarchCity/scripts.pory"
	waitmovement
# 516 "data/maps/LionsarchCity/scripts.pory"
	setspeaker NULL
# 517 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_RectorSendoff_Text_10, MSGBOX_AUTOCLOSE
# 518 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
	goto LionsarchCity_RectorSendoff_1

LionsarchCity_RectorSendoff_5:
# 521 "data/maps/LionsarchCity/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_NORMAL
# 522 "data/maps/LionsarchCity/scripts.pory"
	waitmoncry
# 523 "data/maps/LionsarchCity/scripts.pory"
	applymovement 40, LionsarchCity_RectorSendoff_Movement_24
# 524 "data/maps/LionsarchCity/scripts.pory"
	waitmovement
# 525 "data/maps/LionsarchCity/scripts.pory"
	setspeaker NULL
# 526 "data/maps/LionsarchCity/scripts.pory"
	msgbox LionsarchCity_RectorSendoff_Text_11, MSGBOX_AUTOCLOSE
# 527 "data/maps/LionsarchCity/scripts.pory"
	waitmessage
	goto LionsarchCity_RectorSendoff_4


# 214 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_FacultyGrunt_1_Movement_0:
# 214 "data/maps/LionsarchCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 421 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_0:
# 421 "data/maps/LionsarchCity/scripts.pory"
	walk_down
# 421 "data/maps/LionsarchCity/scripts.pory"
	walk_down
# 421 "data/maps/LionsarchCity/scripts.pory"
	walk_down
# 421 "data/maps/LionsarchCity/scripts.pory"
	walk_down
# 421 "data/maps/LionsarchCity/scripts.pory"
	walk_down
# 421 "data/maps/LionsarchCity/scripts.pory"
	walk_down
# 421 "data/maps/LionsarchCity/scripts.pory"
	walk_down
# 421 "data/maps/LionsarchCity/scripts.pory"
	walk_down
# 421 "data/maps/LionsarchCity/scripts.pory"
	walk_down
# 421 "data/maps/LionsarchCity/scripts.pory"
	walk_down
# 421 "data/maps/LionsarchCity/scripts.pory"
	walk_down
	step_end

# 424 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_1:
# 424 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_left
# 424 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_left
# 424 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_left
# 424 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_left
# 424 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_left
# 424 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_left
# 424 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_left
# 424 "data/maps/LionsarchCity/scripts.pory"
	face_up
	step_end

# 427 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_2:
# 427 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_up
# 427 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_right
# 427 "data/maps/LionsarchCity/scripts.pory"
	face_down
# 427 "data/maps/LionsarchCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 431 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_3:
# 431 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_right
# 431 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_right
# 431 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_right
# 431 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_right
# 431 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_down
# 431 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_down
# 431 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_down
	step_end

# 434 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_4:
# 434 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_right
# 434 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_right
# 434 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_up
# 434 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_up
	step_end

# 439 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_5:
# 439 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_down
# 439 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_down
# 439 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_right
# 439 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_down
# 439 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_down
# 439 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_down
# 439 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_down
	step_end

# 440 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_6:
# 440 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_right
# 440 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_down
# 440 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_down
# 440 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_right
# 440 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_down
# 440 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_down
# 440 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_down
# 440 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_down
	step_end

# 444 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_7:
# 444 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_right
# 444 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_down
# 444 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_down
# 444 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_right
# 444 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_right
	step_end

# 445 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_8:
# 445 "data/maps/LionsarchCity/scripts.pory"
	walk_up
# 445 "data/maps/LionsarchCity/scripts.pory"
	walk_left
	step_end

# 450 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_9:
# 450 "data/maps/LionsarchCity/scripts.pory"
	walk_down
	step_end

# 453 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_10:
# 453 "data/maps/LionsarchCity/scripts.pory"
	walk_left
# 453 "data/maps/LionsarchCity/scripts.pory"
	walk_down
	step_end

# 463 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_11:
# 463 "data/maps/LionsarchCity/scripts.pory"
	walk_slow_down
# 463 "data/maps/LionsarchCity/scripts.pory"
	walk_slow_down
# 463 "data/maps/LionsarchCity/scripts.pory"
	walk_slow_down
# 463 "data/maps/LionsarchCity/scripts.pory"
	walk_slow_down
# 463 "data/maps/LionsarchCity/scripts.pory"
	walk_slow_down
	step_end

# 464 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_12:
# 464 "data/maps/LionsarchCity/scripts.pory"
	walk_slow_diag_southwest
# 464 "data/maps/LionsarchCity/scripts.pory"
	walk_slow_diag_southwest
# 464 "data/maps/LionsarchCity/scripts.pory"
	walk_slow_down
# 464 "data/maps/LionsarchCity/scripts.pory"
	walk_slow_down
# 464 "data/maps/LionsarchCity/scripts.pory"
	walk_slow_down
# 464 "data/maps/LionsarchCity/scripts.pory"
	walk_slow_down
# 464 "data/maps/LionsarchCity/scripts.pory"
	walk_slow_down
	step_end

# 472 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_13:
# 472 "data/maps/LionsarchCity/scripts.pory"
	jump_2_down
	step_end

# 478 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_14:
# 478 "data/maps/LionsarchCity/scripts.pory"
	walk_up
# 478 "data/maps/LionsarchCity/scripts.pory"
	walk_up
# 478 "data/maps/LionsarchCity/scripts.pory"
	walk_up
# 478 "data/maps/LionsarchCity/scripts.pory"
	walk_up
# 478 "data/maps/LionsarchCity/scripts.pory"
	walk_up
# 478 "data/maps/LionsarchCity/scripts.pory"
	walk_up
# 478 "data/maps/LionsarchCity/scripts.pory"
	walk_up
# 478 "data/maps/LionsarchCity/scripts.pory"
	walk_up
# 478 "data/maps/LionsarchCity/scripts.pory"
	walk_up
# 478 "data/maps/LionsarchCity/scripts.pory"
	walk_up
# 478 "data/maps/LionsarchCity/scripts.pory"
	walk_up
	step_end

# 483 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_15:
# 483 "data/maps/LionsarchCity/scripts.pory"
	face_right
	step_end

# 484 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_16:
# 484 "data/maps/LionsarchCity/scripts.pory"
	face_left
	step_end

# 489 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_17:
# 489 "data/maps/LionsarchCity/scripts.pory"
	face_down
	step_end

# 495 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_18:
# 495 "data/maps/LionsarchCity/scripts.pory"
	jump_down
# 495 "data/maps/LionsarchCity/scripts.pory"
	jump_2_down
	step_end

# 498 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_19:
# 498 "data/maps/LionsarchCity/scripts.pory"
	fly_up
	step_end

# 504 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_20:
# 504 "data/maps/LionsarchCity/scripts.pory"
	emote_question_mark
	step_end

# 505 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_21:
# 505 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_right
# 505 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_right
# 505 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_right
# 505 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_right
# 505 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_right
# 505 "data/maps/LionsarchCity/scripts.pory"
	walk_fast_right
# 505 "data/maps/LionsarchCity/scripts.pory"
	walk_diag_southeast
	step_end

# 507 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_22:
# 507 "data/maps/LionsarchCity/scripts.pory"
	face_up
# 507 "data/maps/LionsarchCity/scripts.pory"
	lock_facing_direction
# 507 "data/maps/LionsarchCity/scripts.pory"
	walk_right
# 507 "data/maps/LionsarchCity/scripts.pory"
	walk_right
# 507 "data/maps/LionsarchCity/scripts.pory"
	walk_right
# 507 "data/maps/LionsarchCity/scripts.pory"
	walk_right
# 507 "data/maps/LionsarchCity/scripts.pory"
	unlock_facing_direction
	step_end

# 514 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_23:
# 514 "data/maps/LionsarchCity/scripts.pory"
	emote_heart
	step_end

# 523 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_24:
# 523 "data/maps/LionsarchCity/scripts.pory"
	emote_x
	step_end

# 532 "data/maps/LionsarchCity/scripts.pory"
LionsarchCity_RectorSendoff_Movement_25:
# 532 "data/maps/LionsarchCity/scripts.pory"
	walk_faster_down
# 532 "data/maps/LionsarchCity/scripts.pory"
	walk_faster_down
# 532 "data/maps/LionsarchCity/scripts.pory"
	walk_faster_down
# 532 "data/maps/LionsarchCity/scripts.pory"
	walk_faster_down
# 532 "data/maps/LionsarchCity/scripts.pory"
	walk_faster_down
# 532 "data/maps/LionsarchCity/scripts.pory"
	walk_faster_down
# 532 "data/maps/LionsarchCity/scripts.pory"
	walk_faster_down
# 532 "data/maps/LionsarchCity/scripts.pory"
	walk_faster_down
	step_end

LionsarchCity_Sign_Route06_Text_0:
# 21 "data/maps/LionsarchCity/scripts.pory"
	.string "{UP_ARROW} Upana Cave System\n"
	.string "Path to Marshduke City\p"
	.string "Beware of falling Geodudes!$"

LionsarchCity_Sign_CityName_Text_0:
# 27 "data/maps/LionsarchCity/scripts.pory"
	.string "LIONSARCH CITY\n"
	.string "Gateway to the Northern Peaks\p"
	.string "Where the harbor meets the mountains$"

LionsarchCity_Sign_Gym_Text_0:
# 33 "data/maps/LionsarchCity/scripts.pory"
	.string "LIONSARCH CITY GYM\n"
	.string "LEADER: PETRA\n"
	.string "The Iron Mountain$"

LionsarchCity_Sign_VisitorCenter_Text_0:
# 39 "data/maps/LionsarchCity/scripts.pory"
	.string "TWIN LIONS VISITOR CENTER\n"
	.string "Information for travelers heading to\l"
	.string "Lion Mountains$"

LionsarchCity_Sign_IndustrialPort_Text_0:
# 45 "data/maps/LionsarchCity/scripts.pory"
	.string "INDUSTRIAL PORT DISTRICT\n"
	.string "AUTHORIZED PERSONNEL ONLY\p"
	.string "Heavy machinery in operation - Exercise\n"
	.string "caution$"

LionsarchCity_Sign_LeisurePort_Text_0:
# 51 "data/maps/LionsarchCity/scripts.pory"
	.string "LIONSARCH MARINA\n"
	.string "Leisure vessels and tour boats$"

LionsarchCity_DiscoPamphlet_1_Text_0:
# 61 "data/maps/LionsarchCity/scripts.pory"
	.string "A crumpled flyer is taped to a board:\p"
	.string "GROOVE UNDERGROUND\n"
	.string "OLD SCHOOL DISCO NIGHTS\n"
	.string "Every weekend!\p"
	.string "...The rest is too faded to read.$"

LionsarchCity_DiscoPamphlet_2_Text_0:
# 67 "data/maps/LionsarchCity/scripts.pory"
	.string "A colorful poster catches your eye:\p"
	.string "WHEN: Every Friday & Saturday\n"
	.string "WHERE: Ask around... if you're cool\l"
	.string "enough\n"
	.string "WHAT: Vinyl-only disco classics!\p"
	.string "BOOGIE WONDERLAND AWAITS$"

LionsarchCity_DiscoPamphlet_3_Text_0:
# 73 "data/maps/LionsarchCity/scripts.pory"
	.string "A flyer stuck to a wooden pole:\p"
	.string "DJ PETER PRESENTS:\n"
	.string "DISCO INFERNO\n"
	.string "The funkiest beats this side of the\l"
	.string "mountains!\p"
	.string "Find the basement. Feel the groove.$"

LionsarchCity_MarketStand_ExoticBerries_Text_0:
# 84 "data/maps/LionsarchCity/scripts.pory"
	.string "Welcome to my humble stand!\p"
	.string "I import the finest strands from the\n"
	.string "tropical islands far to the south.\p"
	.string "You won't find these in Siltroot Town!$"

LionsarchCity_MarketStand_EasternSpices_Text_0:
# 101 "data/maps/LionsarchCity/scripts.pory"
	.string "Greetings, traveler!\p"
	.string "My family has traded across the\n"
	.string "eastern sea routes for three\l"
	.string "generations.\p"
	.string "These Poké Dolls and incense come\n"
	.string "straight from Marshduke City's finest\l"
	.string "craftsmen!$"

LionsarchCity_MarketStand_MountainGear_Text_0:
# 117 "data/maps/LionsarchCity/scripts.pory"
	.string "Heading up to the Lion Mountains?\p"
	.string "You'll need proper gear!\p"
	.string "I stock everything the rangers\n"
	.string "recommend for high-altitude training.$"

LionsarchCity_MarketStand_RareStones_Text_0:
# 136 "data/maps/LionsarchCity/scripts.pory"
	.string "These stones came in on the morning\n"
	.string "shipment from deep caves across the\l"
	.string "region.\p"
	.string "Perfect for trainers looking to evolve\n"
	.string "their partners!$"

LionsarchCity_MarketStand_ImportedPokeBalls_Text_0:
# 154 "data/maps/LionsarchCity/scripts.pory"
	.string "Fresh shipment just arrived from Silph\n"
	.string "Co.!\p"
	.string "We get specialty Poké Balls that most\n"
	.string "marts don't carry.$"

LionsarchCity_MarketStand_SeaDelicacies_Text_0:
# 172 "data/maps/LionsarchCity/scripts.pory"
	.string "Fresh from the harbor this morning!\p"
	.string "Our Lava Cookies are baked using a\n"
	.string "recipe from sailors who've traveled the\l"
	.string "world.\p"
	.string "Perfect for curing any ailment!$"

LionsarchCity_MarketStand_TreasureHunter_Text_0:
# 189 "data/maps/LionsarchCity/scripts.pory"
	.string "I deal in rarities, kid.\p"
	.string "Things that wash up on distant shores\n"
	.string "or get dug out of ancient ruins.\p"
	.string "You got the cash, I got the goods.$"

LionsarchCity_FacultyGrunt_1_Text_0:
# 209 "data/maps/LionsarchCity/scripts.pory"
	.string "...if this ore shipment is late again the\n"
	.string "whole schedule slips... phase two can't\l"
	.string "start without it...$"

LionsarchCity_FacultyGrunt_1_Text_1:
# 215 "data/maps/LionsarchCity/scripts.pory"
	.string "Hey - HEY! Who are you?!\p"
	.string "This is a RESTRICTED Faculty dock! How\n"
	.string "did you even get in here?!\p"
	.string "Leave. NOW.$"

LionsarchCity_FacultyGrunt_2_Text_0:
# 222 "data/maps/LionsarchCity/scripts.pory"
	.string "...processing units load first, shielding\n"
	.string "on top... boss needs it all at the plant\l"
	.string "by Thursday...$"

LionsarchCity_FacultyGrunt_2_Text_1:
# 228 "data/maps/LionsarchCity/scripts.pory"
	.string "Wh- a KID?! On our dock?!\p"
	.string "Don't touch ANYTHING! These crates\n"
	.string "need to reach the ship by nightfall!\p"
	.string "Get OUT of here, right now!$"

LionsarchCity_FacultyGrunt_3_Text_0:
# 235 "data/maps/LionsarchCity/scripts.pory"
	.string "...they keep saying the steel can block\n"
	.string "it... block what exactly... I just load\l"
	.string "the ships...$"

LionsarchCity_FacultyGrunt_3_Text_1:
# 241 "data/maps/LionsarchCity/scripts.pory"
	.string "You've got some NERVE showing up here!\p"
	.string "This is Faculty property - no civilians,\n"
	.string "no visitors, NOTHING!\p"
	.string "Take a hike before you see something\n"
	.string "you'll regret!$"

LionsarchCity_FacultyGrunt_4_Text_0:
# 248 "data/maps/LionsarchCity/scripts.pory"
	.string "...dampening alloy, check... containment\n"
	.string "frames, check... boss is gonna love this\l"
	.string "batch...$"

LionsarchCity_FacultyGrunt_4_Text_1:
# 254 "data/maps/LionsarchCity/scripts.pory"
	.string "What in the - get OUT! Right NOW!\p"
	.string "This dock is authorized Faculty\n"
	.string "personnel only!\p"
	.string "You better not have seen anything -\n"
	.string "scram!$"

LionsarchCity_FacultyWorker_Suspicious_Text_0:
# 262 "data/maps/LionsarchCity/scripts.pory"
	.string "HALT! Don't you DARE take another step!\p"
	.string "This is the Faculty Steel Plant\n"
	.string "entrance - there's a MACHAMP right here\l"
	.string "and I will use it!\p"
	.string "You have NO idea where you've walked\n"
	.string "into.\p"
	.string "Turn around and forget you ever saw\n"
	.string "this place. NOW.$"

LionsarchCity_NPC_ColdWeather_Text_0:
# 273 "data/maps/LionsarchCity/scripts.pory"
	.string "Brrr! The wind coming off the mountains\n"
	.string "is brutal today!\p"
	.string "I should've worn a thicker coat.$"

LionsarchCity_NPC_TouristCouple_F_Text_0:
# 280 "data/maps/LionsarchCity/scripts.pory"
	.string "My husband and I came to see the Twin\n"
	.string "Lions.\p"
	.string "They say if you look at the peaks from\n"
	.string "the right angle, they look like two\l"
	.string "Pyroar facing each other!$"

LionsarchCity_NPC_TouristCouple_M_Text_0:
# 287 "data/maps/LionsarchCity/scripts.pory"
	.string "The Visitor Center has some great\n"
	.string "hiking maps.\p"
	.string "We're planning to trek up to the north\n"
	.string "pass tomorrow if the weather holds.$"

LionsarchCity_NPC_OldSailor_Text_0:
# 294 "data/maps/LionsarchCity/scripts.pory"
	.string "I've been working these docks for forty\n"
	.string "years.\p"
	.string "Used to be we only shipped fish and\n"
	.string "lumber.\p"
	.string "Now it's all industrial equipment and\n"
	.string "strange machinery.\p"
	.string "Times change, I suppose.$"

LionsarchCity_NPC_DockWorker_1_Text_0:
# 301 "data/maps/LionsarchCity/scripts.pory"
	.string "The ports keep this city running.\p"
	.string "We load and unload cargo ships day and\n"
	.string "night.\p"
	.string "It's hard work, but the pay is good.$"

LionsarchCity_NPC_DockWorker_2_Text_0:
# 308 "data/maps/LionsarchCity/scripts.pory"
	.string "That leisure port over there? That's\n"
	.string "where the rich folks keep their yachts.\p"
	.string "Meanwhile, we're out here hauling crates\n"
	.string "in the freezing cold.$"

LionsarchCity_NPC_LocalResident_1_Text_0:
# 315 "data/maps/LionsarchCity/scripts.pory"
	.string "Lionsarch has changed so much in\n"
	.string "recent years.\p"
	.string "The Faculty's mining operation brought\n"
	.string "jobs, but also a lot of pollution.\p"
	.string "Some call it 'the smog.'$"

LionsarchCity_NPC_LocalResident_2_Text_0:
# 322 "data/maps/LionsarchCity/scripts.pory"
	.string "If you're looking for a good time,\n"
	.string "there's supposedly a secret disco club\l"
	.string "somewhere in the city.\p"
	.string "I've heard the music thumping late at\n"
	.string "night, but I've never found it!$"

LionsarchCity_NPC_MusicFan_Text_0:
# 329 "data/maps/LionsarchCity/scripts.pory"
	.string "You like old school disco?\p"
	.string "There's this DJ... Peter, I think his name\n"
	.string "is.\p"
	.string "He throws the most incredible\n"
	.string "underground parties.\p"
	.string "But you need to know someone who knows\n"
	.string "someone to get in.$"

LionsarchCity_NPC_BusinessPerson_Text_0:
# 336 "data/maps/LionsarchCity/scripts.pory"
	.string "The route east through the cliffs is\n"
	.string "treacherous but beautiful.\p"
	.string "It eventually leads to Marshduke City,\n"
	.string "an old city built right in the middle of a\l"
	.string "swamp.\p"
	.string "Quite the sight!$"

LionsarchCity_NPC_MountainHiker_Text_0:
# 343 "data/maps/LionsarchCity/scripts.pory"
	.string "The two paths through the mountains\n"
	.string "each offer unique challenges.\p"
	.string "The Lion Mountains path is steep but\n"
	.string "rewarding.\p"
	.string "The eastern cliff route is longer but\n"
	.string "has incredible views.$"

LionsarchCity_NPC_Ranger_Text_0:
# 350 "data/maps/LionsarchCity/scripts.pory"
	.string "We've been getting reports of\n"
	.string "increased seismic activity near the\l"
	.string "Lion Mountains.\p"
	.string "Probably just the Faculty's mining\n"
	.string "operation, but it's concerning\l"
	.string "nonetheless.$"

LionsarchCity_NPC_FishingEnthusiast_Text_0:
# 357 "data/maps/LionsarchCity/scripts.pory"
	.string "The waters around Lionsarch are full of\n"
	.string "Water-type Pokémon.\p"
	.string "I caught a Krabby just this morning!\p"
	.string "I couldn't believe my luck!$"

LionsarchCity_NPC_NewsReporter_Text_0:
# 365 "data/maps/LionsarchCity/scripts.pory"
	.string "Those Faculty ships were gone by the\n"
	.string "time I got my camera.\p"
	.string "I had a source. Cargo manifests, loading\n"
	.string "schedules, the lot.\p"
	.string "My editor killed the story this morning.\n"
	.string "Said there wasn't enough public\l"
	.string "interest.\p"
	.string "Twenty years in this job... I've never\n"
	.string "had a story pulled that fast.$"

LionsarchCity_NPC_NewsReporter_Text_1:
# 369 "data/maps/LionsarchCity/scripts.pory"
	.string "I'm investigating the Faculty's\n"
	.string "activities for the regional news\l"
	.string "network.\p"
	.string "They claim to be mining rare metals, but\n"
	.string "their security is unusually tight.\p"
	.string "What are they really doing in there?$"

LionsarchCity_NPC_GymTrainer_Text_0:
# 376 "data/maps/LionsarchCity/scripts.pory"
	.string "Petra's Gym specializes in\n"
	.string "mountain-dwelling Pokémon.\p"
	.string "Ursaring, Golem, Donphan... they're all\n"
	.string "incredibly tough!\p"
	.string "You better come prepared.$"

LionsarchCity_NPC_ShipCaptain_Text_0:
# 383 "data/maps/LionsarchCity/scripts.pory"
	.string "My vessel sails between here and\n"
	.string "Siltroot Town regularly.\p"
	.string "The harbor's always busy with cargo\n"
	.string "ships coming and going.\p"
	.string "It's what keeps this city alive.$"

LionsarchCity_NPC_StreetVendor_Text_0:
# 390 "data/maps/LionsarchCity/scripts.pory"
	.string "The markets are the soul of Lionsarch!\p"
	.string "Traders from all over the region bring\n"
	.string "their goods here.\p"
	.string "You can find things here that don't\n"
	.string "exist anywhere else!\p"
	.string "I'm setting up shop right now if you\n"
	.string "want to take a look!\p"
	.string "I probably open my stand very soon!$"

LionsarchCity_Scott_ArrivalPoint_Text_0:
# 400 "data/maps/LionsarchCity/scripts.pory"
	.string "The industrial dock stretches out\n"
	.string "before you.\p"
	.string "The smell of saltwater and diesel fills\n"
	.string "the air.$"

LionsarchCity_RectorSendoff_Text_0:
# 416 "data/maps/LionsarchCity/scripts.pory"
	.string "The Rector$"

LionsarchCity_RectorSendoff_Text_1:
# 417 "data/maps/LionsarchCity/scripts.pory"
	.string "You fought hard in there.\p"
	.string "You are lucky my strongest pokemon are\n"
	.string "on another mission...\p"
	.string "But it looks like I stalled you long\n"
	.string "enough for the ships to depart.$"

LionsarchCity_RectorSendoff_Text_2:
# 428 "data/maps/LionsarchCity/scripts.pory"
	.string "Barry$"

LionsarchCity_RectorSendoff_Text_3:
# 429 "data/maps/LionsarchCity/scripts.pory"
	.string "YOU THERE, WE HAVE ENOUGH MATERIALS,\n"
	.string "LETS MOVE!$"

LionsarchCity_RectorSendoff_Text_4:
# 437 "data/maps/LionsarchCity/scripts.pory"
	.string "AND YOU TWO, LETS KEEP THOSE MUSCLES\n"
	.string "MOVING!$"

LionsarchCity_RectorSendoff_Text_5:
# 447 "data/maps/LionsarchCity/scripts.pory"
	.string "The Conrector$"

LionsarchCity_RectorSendoff_Text_6:
# 448 "data/maps/LionsarchCity/scripts.pory"
	.string "Good job Barr...Wouter. After you.$"

LionsarchCity_RectorSendoff_Text_7:
# 458 "data/maps/LionsarchCity/scripts.pory"
	.string "Would you look at that young man, he\n"
	.string "has a bright future.\p"
	.string "He is Pushing Boundaries, Developing\n"
	.string "his Talent and an Inspiration!!\p"
	.string "Everything The Faculty needs.$"

LionsarchCity_RectorSendoff_Text_8:
# 486 "data/maps/LionsarchCity/scripts.pory"
	.string "The Faculty is not a building or a plan.\p"
	.string "It is an understanding, an idea.\p"
	.string "And ideas cannot be destroyed.$"

LionsarchCity_RectorSendoff_Text_9:
# 491 "data/maps/LionsarchCity/scripts.pory"
	.string "To make a long story short:\n"
	.string "Order will always prevail.\p"
	.string "In the end...\p"
	.string "that is what counts the most.\p"
	.string "Skarmory! Lets go!$"

LionsarchCity_RectorSendoff_Text_10:
# 517 "data/maps/LionsarchCity/scripts.pory"
	.string "...what are you...?\n"
	.string "You look happy!$"

LionsarchCity_RectorSendoff_Text_11:
# 526 "data/maps/LionsarchCity/scripts.pory"
	.string "...what are you...?\n"
	.string "You look angry...$"

LionsarchCity_RectorSendoff_Text_12:
# 538 "data/maps/LionsarchCity/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "Daan: {PLAYER}.\n"
	.string "You're in Lionsarch?\p"
	.string "Good. Talk to me.\n"
	.string "What is happening there?\p"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "They just LEFT?\n"
	.string "With all of it?\p"
	.string "...\p"
	.string "Okay. Okay okay okay.\n"
	.string "I'm not panicking.\p"
	.string "...I might be panicking\n"
	.string "a little.\p"
	.string "We had no idea they were\n"
	.string "even making these things.\p"
	.string "The materials are gone and we\n"
	.string "don't even know what they\l"
	.string "are for.\p"
	.string "Did you see where that Skarmory was\n"
	.string "headed?\p"
	.string "North? East? Out to sea?\p"
	.string "...\p"
	.string "Allright...\n"
	.string "then we have nothing to go on.\p"
	.string "...\p"
	.string "You're right. You're right.\n"
	.string "There's nothing left to do\l"
	.string "there.\p"
	.string "You stopped them using that\n"
	.string "factory. That matters.\p"
	.string "Head east for now.\n"
	.string "Marshduke City. Your next\l"
	.string "gym is there.\p"
	.string "Keep moving. Jacob, Ali and I\n"
	.string "are going to go through\l"
	.string "everything you've told us.\p"
	.string "Shipping routes, contacts,\n"
	.string "the Rector's name...\l"
	.string "there has to be something.\p"
	.string "We'll be in touch,\n"
	.string "{PLAYER}. Stay safe.\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"
