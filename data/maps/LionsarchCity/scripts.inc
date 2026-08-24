LionsarchCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LionsarchCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LionsarchCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LionsarchCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_LIONSARCH_CITY
	goto_if_unset FLAG_STEEL_FACTORY_COMPLETE, LionsarchCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

LionsarchCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_HIDE_LIONSARCH_RECTOR_SENDOFF
	setflag FLAG_HIDE_LIONSARCH_BARRY_SENDOFF
	setflag FLAG_HIDE_LIONSARCH_CONRECTOR_SENDOFF
	return

LionsarchCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_LIONSARCH_CITY_STATE, 1, LionsarchCity_RectorSendoff
	.2byte 0


LionsarchCity_Sign_Route06::
	lockall
	msgbox LionsarchCity_Sign_Route06_Text_0
	releaseall
	return


LionsarchCity_Sign_CityName::
	lockall
	msgbox LionsarchCity_Sign_CityName_Text_0
	releaseall
	return


LionsarchCity_Sign_Gym::
	lockall
	msgbox LionsarchCity_Sign_Gym_Text_0
	releaseall
	return


LionsarchCity_Sign_VisitorCenter::
	lockall
	msgbox LionsarchCity_Sign_VisitorCenter_Text_0
	releaseall
	return


LionsarchCity_Sign_IndustrialPort::
	lockall
	msgbox LionsarchCity_Sign_IndustrialPort_Text_0
	releaseall
	return


LionsarchCity_Sign_LeisurePort::
	lockall
	msgbox LionsarchCity_Sign_LeisurePort_Text_0
	releaseall
	return


LionsarchCity_DiscoPamphlet_1::
	lockall
	msgbox LionsarchCity_DiscoPamphlet_1_Text_0
	releaseall
	return


LionsarchCity_DiscoPamphlet_2::
	lockall
	msgbox LionsarchCity_DiscoPamphlet_2_Text_0
	releaseall
	return


LionsarchCity_DiscoPamphlet_3::
	lockall
	msgbox LionsarchCity_DiscoPamphlet_3_Text_0
	releaseall
	return


LionsarchCity_MarketStand_ExoticBerries::
	lockall
	faceplayer
	msgbox LionsarchCity_MarketStand_ExoticBerries_Text_0
	waitmessage
	pokemart LionsarchCity_Mart_ExoticBerries
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	releaseall
	return


	.align 2
LionsarchCity_Mart_ExoticBerries:
	.2byte ITEM_LUM_BERRY
	.2byte ITEM_POMEG_BERRY
	.2byte ITEM_KELPSY_BERRY
	.2byte ITEM_QUALOT_BERRY
	.2byte ITEM_NONE

LionsarchCity_MarketStand_EasternSpices::
	lockall
	faceplayer
	msgbox LionsarchCity_MarketStand_EasternSpices_Text_0
	waitmessage
	pokemart LionsarchCity_Mart_EasternGoods
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	releaseall
	return


	.align 2
LionsarchCity_Mart_EasternGoods:
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_FLUFFY_TAIL
	.2byte ITEM_CLEANSE_TAG
	.2byte ITEM_NONE

LionsarchCity_MarketStand_MountainGear::
	lockall
	faceplayer
	msgbox LionsarchCity_MarketStand_MountainGear_Text_0
	waitmessage
	pokemart LionsarchCity_Mart_MountainGear
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	releaseall
	return


	.align 2
LionsarchCity_Mart_MountainGear:
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

LionsarchCity_MarketStand_RareStones::
	lockall
	faceplayer
	msgbox LionsarchCity_MarketStand_RareStones_Text_0
	waitmessage
	pokemart LionsarchCity_Mart_RareStones
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	releaseall
	return


	.align 2
LionsarchCity_Mart_RareStones:
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_NONE

LionsarchCity_MarketStand_ImportedPokeBalls::
	lockall
	faceplayer
	msgbox LionsarchCity_MarketStand_ImportedPokeBalls_Text_0
	waitmessage
	pokemart LionsarchCity_Mart_SpecialtyBalls
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	releaseall
	return


	.align 2
LionsarchCity_Mart_SpecialtyBalls:
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

LionsarchCity_MarketStand_SeaDelicacies::
	lockall
	faceplayer
	msgbox LionsarchCity_MarketStand_SeaDelicacies_Text_0
	waitmessage
	pokemart LionsarchCity_Mart_Delicacies
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	releaseall
	return


	.align 2
LionsarchCity_Mart_Delicacies:
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_NONE

LionsarchCity_MarketStand_TreasureHunter::
	lockall
	faceplayer
	msgbox LionsarchCity_MarketStand_TreasureHunter_Text_0
	waitmessage
	pokemart LionsarchCity_Mart_Treasures
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	releaseall
	return


	.align 2
LionsarchCity_Mart_Treasures:
	.2byte ITEM_STAR_PIECE
	.2byte ITEM_NUGGET
	.2byte ITEM_PEARL
	.2byte ITEM_BIG_PEARL
	.2byte ITEM_NONE

LionsarchCity_FacultyGrunt_1::
	lockall
	msgbox LionsarchCity_FacultyGrunt_1_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	delay 20
	playse SE_PIN
	faceplayer
	applymovement 15, LionsarchCity_FacultyGrunt_1_Movement_0
	msgbox LionsarchCity_FacultyGrunt_1_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	releaseall
	return


LionsarchCity_FacultyGrunt_2::
	lockall
	msgbox LionsarchCity_FacultyGrunt_2_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	delay 20
	playse SE_PIN
	faceplayer
	applymovement 16, LionsarchCity_FacultyGrunt_1_Movement_0
	msgbox LionsarchCity_FacultyGrunt_2_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	releaseall
	return


LionsarchCity_FacultyGrunt_3::
	lockall
	msgbox LionsarchCity_FacultyGrunt_3_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	delay 20
	playse SE_PIN
	faceplayer
	applymovement 13, LionsarchCity_FacultyGrunt_1_Movement_0
	msgbox LionsarchCity_FacultyGrunt_3_Text_1
	waitmessage
	releaseall
	return


LionsarchCity_FacultyGrunt_4::
	lockall
	msgbox LionsarchCity_FacultyGrunt_4_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	delay 20
	playse SE_PIN
	faceplayer
	applymovement 14, LionsarchCity_FacultyGrunt_1_Movement_0
	msgbox LionsarchCity_FacultyGrunt_4_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	releaseall
	return


LionsarchCity_FacultyWorker_Suspicious::
	lockall
	faceplayer
	msgbox LionsarchCity_FacultyWorker_Suspicious_Text_0, MSGBOX_AUTOCLOSE
	releaseall
	return


LionsarchCity_NPC_ColdWeather::
	lockall
	faceplayer
	msgbox LionsarchCity_NPC_ColdWeather_Text_0
	releaseall
	return


LionsarchCity_NPC_TouristCouple_F::
	lockall
	faceplayer
	msgbox LionsarchCity_NPC_TouristCouple_F_Text_0
	releaseall
	return


LionsarchCity_NPC_TouristCouple_M::
	lockall
	faceplayer
	msgbox LionsarchCity_NPC_TouristCouple_M_Text_0
	releaseall
	return


LionsarchCity_NPC_OldSailor::
	lockall
	faceplayer
	msgbox LionsarchCity_NPC_OldSailor_Text_0
	releaseall
	return


LionsarchCity_NPC_DockWorker_1::
	lockall
	faceplayer
	msgbox LionsarchCity_NPC_DockWorker_1_Text_0
	releaseall
	return


LionsarchCity_NPC_DockWorker_2::
	lockall
	faceplayer
	msgbox LionsarchCity_NPC_DockWorker_2_Text_0
	releaseall
	return


LionsarchCity_NPC_LocalResident_1::
	lockall
	faceplayer
	msgbox LionsarchCity_NPC_LocalResident_1_Text_0
	releaseall
	return


LionsarchCity_NPC_LocalResident_2::
	lockall
	faceplayer
	msgbox LionsarchCity_NPC_LocalResident_2_Text_0
	releaseall
	return


LionsarchCity_NPC_MusicFan::
	lockall
	faceplayer
	msgbox LionsarchCity_NPC_MusicFan_Text_0
	releaseall
	return


LionsarchCity_NPC_BusinessPerson::
	lockall
	faceplayer
	msgbox LionsarchCity_NPC_BusinessPerson_Text_0
	releaseall
	return


LionsarchCity_NPC_MountainHiker::
	lockall
	faceplayer
	msgbox LionsarchCity_NPC_MountainHiker_Text_0
	releaseall
	return


LionsarchCity_NPC_Ranger::
	lockall
	faceplayer
	msgbox LionsarchCity_NPC_Ranger_Text_0
	releaseall
	return


LionsarchCity_NPC_FishingEnthusiast::
	lockall
	faceplayer
	msgbox LionsarchCity_NPC_FishingEnthusiast_Text_0
	releaseall
	return


LionsarchCity_NPC_NewsReporter::
	lockall
	faceplayer
	goto_if_set FLAG_STEEL_FACTORY_COMPLETE, LionsarchCity_NPC_NewsReporter_2
	msgbox LionsarchCity_NPC_NewsReporter_Text_1
	releaseall
	return

LionsarchCity_NPC_NewsReporter_2:
	msgbox LionsarchCity_NPC_NewsReporter_Text_0
	releaseall
	end


LionsarchCity_NPC_GymTrainer::
	lockall
	faceplayer
	goto_if_unset FLAG_ITEM_LIONSARCH_GYM_SNOWBALL, LionsarchCity_NPC_GymTrainer_2
	msgbox LionsarchCity_NPC_GymTrainer_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
LionsarchCity_NPC_GymTrainer_1:
	releaseall
	return

LionsarchCity_NPC_GymTrainer_2:
	msgbox LionsarchCity_NPC_GymTrainer_Text_0
	waitmessage
	giveitem ITEM_SNOWBALL
	waitmessage
	setflag FLAG_ITEM_LIONSARCH_GYM_SNOWBALL
	msgbox LionsarchCity_NPC_GymTrainer_Text_1
	waitmessage
	goto LionsarchCity_NPC_GymTrainer_1


LionsarchCity_NPC_ShipCaptain::
	lockall
	faceplayer
	msgbox LionsarchCity_NPC_ShipCaptain_Text_0
	releaseall
	return


LionsarchCity_NPC_StreetVendor::
	lockall
	faceplayer
	msgbox LionsarchCity_NPC_StreetVendor_Text_0
	releaseall
	return


LionsarchCity_Scott_ArrivalPoint::
	lockall
	msgbox LionsarchCity_Scott_ArrivalPoint_Text_0
	releaseall
	return


LionsarchCity_RectorSendoff::
	setvar VAR_LIONSARCH_CITY_STATE, 2
	lockall
	clearflag FLAG_HIDE_LIONSARCH_RECTOR_SENDOFF
	addobject 36
	delay 30
	setspeaker LionsarchCity_RectorSendoff_Text_0
	msgbox LionsarchCity_RectorSendoff_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, LionsarchCity_RectorSendoff_Movement_0
	waitmovement
	setflag FLAG_HIDE_LIONSARCH_FACULTY_SHIPS
	applymovement 38, LionsarchCity_RectorSendoff_Movement_1
	waitmovement
	playse SE_PIN
	applymovement 16, LionsarchCity_RectorSendoff_Movement_2
	setspeaker LionsarchCity_RectorSendoff_Text_2
	msgbox LionsarchCity_RectorSendoff_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 16, LionsarchCity_RectorSendoff_Movement_3
	waitmovement
	removeobject 16
	applymovement 38, LionsarchCity_RectorSendoff_Movement_4
	waitmovement
	setspeaker LionsarchCity_RectorSendoff_Text_2
	msgbox LionsarchCity_RectorSendoff_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 17, LionsarchCity_RectorSendoff_Movement_5
	applymovement 12, LionsarchCity_RectorSendoff_Movement_6
	waitmovement 12
	removeobject 12
	removeobject 17
	applymovement 38, LionsarchCity_RectorSendoff_Movement_7
	applymovement 39, LionsarchCity_RectorSendoff_Movement_8
	waitmovement 39
	setspeaker LionsarchCity_RectorSendoff_Text_5
	msgbox LionsarchCity_RectorSendoff_Text_6, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 38, LionsarchCity_RectorSendoff_Movement_9
	waitmovement
	removeobject 38
	applymovement 39, LionsarchCity_RectorSendoff_Movement_10
	waitmovement
	removeobject 39
	delay 30
	setspeaker LionsarchCity_RectorSendoff_Text_0
	msgbox LionsarchCity_RectorSendoff_Text_7, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	setflag FLAG_HIDE_LIONSARCH_FACULTY_SHIPS
	applymovement 4, LionsarchCity_RectorSendoff_Movement_11
	applymovement 3, LionsarchCity_RectorSendoff_Movement_12
	waitmovement 3
	removeobject 3
	removeobject 4
	playse SE_PIN
	applymovement 41, LionsarchCity_FacultyGrunt_1_Movement_0
	waitmovement
	delay 30
	applymovement 41, LionsarchCity_RectorSendoff_Movement_13
	waitmovement 41
	removeobject 41
	delay 90
	applymovement OBJ_EVENT_ID_CAMERA, LionsarchCity_RectorSendoff_Movement_14
	waitmovement
	special RemoveCameraObject
	delay 30
	applymovement 36, LionsarchCity_RectorSendoff_Movement_15
	applymovement LOCALID_PLAYER, LionsarchCity_RectorSendoff_Movement_16
	setspeaker LionsarchCity_RectorSendoff_Text_0
	msgbox LionsarchCity_RectorSendoff_Text_8, MSGBOX_AUTOCLOSE
	waitmessage
	delay 120
	applymovement 36, LionsarchCity_RectorSendoff_Movement_17
	setspeaker LionsarchCity_RectorSendoff_Text_0
	msgbox LionsarchCity_RectorSendoff_Text_9, MSGBOX_AUTOCLOSE
	waitmessage
	playmoncry SPECIES_SKARMORY, CRY_MODE_NORMAL
	applymovement 37, LionsarchCity_RectorSendoff_Movement_18
	waitmovement
	removeobject 37
	applymovement 36, LionsarchCity_RectorSendoff_Movement_19
	waitmovement
	removeobject 36
	delay 60
	addobject 40
	playse SE_PIN
	applymovement LOCALID_PLAYER, LionsarchCity_RectorSendoff_Movement_20
	applymovement 40, LionsarchCity_RectorSendoff_Movement_21
	waitmovement
	applymovement 40, LionsarchCity_RectorSendoff_Movement_22
	waitmovement
	applymovement LOCALID_PLAYER, LionsarchCity_RectorSendoff_Movement_17
	waitmovement
	goto_if_set FLAG_STEEL_FACTORY_POKEMON_CAGED, LionsarchCity_RectorSendoff_2
LionsarchCity_RectorSendoff_1:
	goto_if_unset FLAG_STEEL_FACTORY_POKEMON_CAGED, LionsarchCity_RectorSendoff_5
LionsarchCity_RectorSendoff_4:
	delay 90
	playse SE_PIN
	applymovement LOCALID_PLAYER, LionsarchCity_RectorSendoff_Movement_20
	applymovement 40, LionsarchCity_RectorSendoff_Movement_25
	waitmovement
	removeobject 40
	delay 60
	setflag FLAG_HIDE_LIONSARCH_RECTOR_SENDOFF
	delay 60
	pokenavcall LionsarchCity_RectorSendoff_Text_12
	waitmessage
	setspeaker NULL
	releaseall
	return

LionsarchCity_RectorSendoff_2:
	playmoncry SPECIES_MEW, CRY_MODE_NORMAL
	waitmoncry
	applymovement 40, LionsarchCity_RectorSendoff_Movement_23
	waitmovement
	setspeaker NULL
	msgbox LionsarchCity_RectorSendoff_Text_10, MSGBOX_AUTOCLOSE
	waitmessage
	goto LionsarchCity_RectorSendoff_1

LionsarchCity_RectorSendoff_5:
	playmoncry SPECIES_MEW, CRY_MODE_NORMAL
	waitmoncry
	applymovement 40, LionsarchCity_RectorSendoff_Movement_24
	waitmovement
	setspeaker NULL
	msgbox LionsarchCity_RectorSendoff_Text_11, MSGBOX_AUTOCLOSE
	waitmessage
	goto LionsarchCity_RectorSendoff_4


LionsarchCity_FacultyGrunt_1_Movement_0:
	emote_exclamation_mark
	step_end

LionsarchCity_RectorSendoff_Movement_0:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

LionsarchCity_RectorSendoff_Movement_1:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	face_up
	step_end

LionsarchCity_RectorSendoff_Movement_2:
	walk_fast_up
	walk_fast_right
	face_down
	emote_exclamation_mark
	step_end

LionsarchCity_RectorSendoff_Movement_3:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

LionsarchCity_RectorSendoff_Movement_4:
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	step_end

LionsarchCity_RectorSendoff_Movement_5:
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

LionsarchCity_RectorSendoff_Movement_6:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

LionsarchCity_RectorSendoff_Movement_7:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	step_end

LionsarchCity_RectorSendoff_Movement_8:
	walk_up
	walk_left
	step_end

LionsarchCity_RectorSendoff_Movement_9:
	walk_down
	step_end

LionsarchCity_RectorSendoff_Movement_10:
	walk_left
	walk_down
	step_end

LionsarchCity_RectorSendoff_Movement_11:
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	step_end

LionsarchCity_RectorSendoff_Movement_12:
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	step_end

LionsarchCity_RectorSendoff_Movement_13:
	jump_2_down
	step_end

LionsarchCity_RectorSendoff_Movement_14:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

LionsarchCity_RectorSendoff_Movement_15:
	face_right
	step_end

LionsarchCity_RectorSendoff_Movement_16:
	face_left
	step_end

LionsarchCity_RectorSendoff_Movement_17:
	face_down
	step_end

LionsarchCity_RectorSendoff_Movement_18:
	jump_down
	jump_2_down
	step_end

LionsarchCity_RectorSendoff_Movement_19:
	fly_up
	step_end

LionsarchCity_RectorSendoff_Movement_20:
	emote_question_mark
	step_end

LionsarchCity_RectorSendoff_Movement_21:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_diag_southeast
	step_end

LionsarchCity_RectorSendoff_Movement_22:
	face_up
	lock_facing_direction
	walk_right
	walk_right
	walk_right
	walk_right
	unlock_facing_direction
	step_end

LionsarchCity_RectorSendoff_Movement_23:
	emote_heart
	step_end

LionsarchCity_RectorSendoff_Movement_24:
	emote_x
	step_end

LionsarchCity_RectorSendoff_Movement_25:
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	step_end

LionsarchCity_Sign_Route06_Text_0:
	.string "{UP_ARROW} Upana Cave System\n"
	.string "Path to Marshduke City\p"
	.string "Beware of falling Geodudes!$"

LionsarchCity_Sign_CityName_Text_0:
	.string "LIONSARCH CITY\n"
	.string "Gateway to the Northern Peaks\p"
	.string "Where the harbor meets the mountains$"

LionsarchCity_Sign_Gym_Text_0:
	.string "LIONSARCH CITY GYM\n"
	.string "LEADER: PETRA\n"
	.string "The Iron Mountain$"

LionsarchCity_Sign_VisitorCenter_Text_0:
	.string "TWIN LIONS VISITOR CENTER\n"
	.string "Information for travelers heading to\l"
	.string "Lion Mountains$"

LionsarchCity_Sign_IndustrialPort_Text_0:
	.string "INDUSTRIAL PORT DISTRICT\n"
	.string "AUTHORIZED PERSONNEL ONLY\p"
	.string "Heavy machinery in operation - Exercise\n"
	.string "caution$"

LionsarchCity_Sign_LeisurePort_Text_0:
	.string "LIONSARCH MARINA\n"
	.string "Leisure vessels and tour boats$"

LionsarchCity_DiscoPamphlet_1_Text_0:
	.string "A crumpled flyer is taped to a board:\p"
	.string "GROOVE UNDERGROUND\n"
	.string "OLD SCHOOL DISCO NIGHTS\n"
	.string "Every weekend!\p"
	.string "...The rest is too faded to read.$"

LionsarchCity_DiscoPamphlet_2_Text_0:
	.string "A colorful poster catches your eye:\p"
	.string "WHEN: Every Friday & Saturday\n"
	.string "WHERE: Ask around... if you're cool\l"
	.string "enough\n"
	.string "WHAT: Vinyl-only disco classics!\p"
	.string "BOOGIE WONDERLAND AWAITS$"

LionsarchCity_DiscoPamphlet_3_Text_0:
	.string "A flyer stuck to a wooden pole:\p"
	.string "DJ PETER PRESENTS:\n"
	.string "DISCO INFERNO\n"
	.string "The funkiest beats this side of the\l"
	.string "mountains!\p"
	.string "Find the basement. Feel the groove.$"

LionsarchCity_MarketStand_ExoticBerries_Text_0:
	.string "Welcome to my humble stand!\p"
	.string "I import the finest strands from the\n"
	.string "tropical islands far to the south.\p"
	.string "You won't find these in Siltroot Town!$"

LionsarchCity_MarketStand_EasternSpices_Text_0:
	.string "Greetings, traveler!\p"
	.string "My family has traded across the\n"
	.string "eastern sea routes for three\l"
	.string "generations.\p"
	.string "These Poké Dolls and incense come\n"
	.string "straight from Marshduke City's finest\l"
	.string "craftsmen!$"

LionsarchCity_MarketStand_MountainGear_Text_0:
	.string "Heading up to the Lion Mountains?\p"
	.string "You'll need proper gear!\p"
	.string "I stock everything the rangers\n"
	.string "recommend for high-altitude training.$"

LionsarchCity_MarketStand_RareStones_Text_0:
	.string "These stones came in on the morning\n"
	.string "shipment from deep caves across the\l"
	.string "region.\p"
	.string "Perfect for trainers looking to evolve\n"
	.string "their partners!$"

LionsarchCity_MarketStand_ImportedPokeBalls_Text_0:
	.string "Fresh shipment just arrived from Silph\n"
	.string "Co.!\p"
	.string "We get specialty Poké Balls that most\n"
	.string "marts don't carry.$"

LionsarchCity_MarketStand_SeaDelicacies_Text_0:
	.string "Fresh from the harbor this morning!\p"
	.string "Our Lava Cookies are baked using a\n"
	.string "recipe from sailors who've traveled the\l"
	.string "world.\p"
	.string "Perfect for curing any ailment!$"

LionsarchCity_MarketStand_TreasureHunter_Text_0:
	.string "I deal in rarities, kid.\p"
	.string "Things that wash up on distant shores\n"
	.string "or get dug out of ancient ruins.\p"
	.string "You got the cash, I got the goods.$"

LionsarchCity_FacultyGrunt_1_Text_0:
	.string "...if this ore shipment is late again the\n"
	.string "whole schedule slips... phase two can't\l"
	.string "start without it...$"

LionsarchCity_FacultyGrunt_1_Text_1:
	.string "Hey - HEY! Who are you?!\p"
	.string "This is a RESTRICTED Faculty dock! How\n"
	.string "did you even get in here?!\p"
	.string "Leave. NOW.$"

LionsarchCity_FacultyGrunt_2_Text_0:
	.string "...processing units load first, shielding\n"
	.string "on top... boss needs it all at the plant\l"
	.string "by Thursday...$"

LionsarchCity_FacultyGrunt_2_Text_1:
	.string "Wh- a KID?! On our dock?!\p"
	.string "Don't touch ANYTHING! These crates\n"
	.string "need to reach the ship by nightfall!\p"
	.string "Get OUT of here, right now!$"

LionsarchCity_FacultyGrunt_3_Text_0:
	.string "...they keep saying the steel can block\n"
	.string "it... block what exactly... I just load\l"
	.string "the ships...$"

LionsarchCity_FacultyGrunt_3_Text_1:
	.string "You've got some NERVE showing up here!\p"
	.string "This is Faculty property - no civilians,\n"
	.string "no visitors, NOTHING!\p"
	.string "Take a hike before you see something\n"
	.string "you'll regret!$"

LionsarchCity_FacultyGrunt_4_Text_0:
	.string "...dampening alloy, check... containment\n"
	.string "frames, check... boss is gonna love this\l"
	.string "batch...$"

LionsarchCity_FacultyGrunt_4_Text_1:
	.string "What in the - get OUT! Right NOW!\p"
	.string "This dock is authorized Faculty\n"
	.string "personnel only!\p"
	.string "You better not have seen anything -\n"
	.string "scram!$"

LionsarchCity_FacultyWorker_Suspicious_Text_0:
	.string "HALT! Don't you DARE take another step!\p"
	.string "This is the Faculty Steel Plant\n"
	.string "entrance - there's a MACHAMP right here\l"
	.string "and I will use it!\p"
	.string "You have NO idea where you've walked\n"
	.string "into.\p"
	.string "Turn around and forget you ever saw\n"
	.string "this place. NOW.$"

LionsarchCity_NPC_ColdWeather_Text_0:
	.string "Brrr! The wind coming off the mountains\n"
	.string "is brutal today!\p"
	.string "I should've worn a thicker coat.$"

LionsarchCity_NPC_TouristCouple_F_Text_0:
	.string "My husband and I came to see the Twin\n"
	.string "Lions.\p"
	.string "They say if you look at the peaks from\n"
	.string "the right angle, they look like two\l"
	.string "Pyroar facing each other!$"

LionsarchCity_NPC_TouristCouple_M_Text_0:
	.string "The Visitor Center has some great\n"
	.string "hiking maps.\p"
	.string "We're planning to trek up to the north\n"
	.string "pass tomorrow if the weather holds.$"

LionsarchCity_NPC_OldSailor_Text_0:
	.string "I've been working these docks for forty\n"
	.string "years.\p"
	.string "Used to be we only shipped fish and\n"
	.string "lumber.\p"
	.string "Now it's all industrial equipment and\n"
	.string "strange machinery.\p"
	.string "Times change, I suppose.$"

LionsarchCity_NPC_DockWorker_1_Text_0:
	.string "The ports keep this city running.\p"
	.string "We load and unload cargo ships day and\n"
	.string "night.\p"
	.string "It's hard work, but the pay is good.$"

LionsarchCity_NPC_DockWorker_2_Text_0:
	.string "That leisure port over there? That's\n"
	.string "where the rich folks keep their yachts.\p"
	.string "Meanwhile, we're out here hauling crates\n"
	.string "in the freezing cold.$"

LionsarchCity_NPC_LocalResident_1_Text_0:
	.string "Lionsarch has changed so much in\n"
	.string "recent years.\p"
	.string "The Faculty's mining operation brought\n"
	.string "jobs, but also a lot of pollution.\p"
	.string "Some call it 'the smog.'$"

LionsarchCity_NPC_LocalResident_2_Text_0:
	.string "If you're looking for a good time,\n"
	.string "there's supposedly a secret disco club\l"
	.string "somewhere in the city.\p"
	.string "I've heard the music thumping late at\n"
	.string "night, but I've never found it!$"

LionsarchCity_NPC_MusicFan_Text_0:
	.string "You like old school disco?\p"
	.string "There's this DJ... Peter, I think his name\n"
	.string "is.\p"
	.string "He throws the most incredible\n"
	.string "underground parties.\p"
	.string "But you need to know someone who knows\n"
	.string "someone to get in.$"

LionsarchCity_NPC_BusinessPerson_Text_0:
	.string "The route east through the cliffs is\n"
	.string "treacherous but beautiful.\p"
	.string "It eventually leads to Marshduke City,\n"
	.string "an old city built right in the middle of a\l"
	.string "swamp.\p"
	.string "Quite the sight!$"

LionsarchCity_NPC_MountainHiker_Text_0:
	.string "The two paths through the mountains\n"
	.string "each offer unique challenges.\p"
	.string "The Lion Mountains path is steep but\n"
	.string "rewarding.\p"
	.string "The eastern cliff route is longer but\n"
	.string "has incredible views.$"

LionsarchCity_NPC_Ranger_Text_0:
	.string "We've been getting reports of\n"
	.string "increased seismic activity near the\l"
	.string "Lion Mountains.\p"
	.string "Probably just the Faculty's mining\n"
	.string "operation, but it's concerning\l"
	.string "nonetheless.$"

LionsarchCity_NPC_FishingEnthusiast_Text_0:
	.string "The waters around Lionsarch are full of\n"
	.string "Water-type Pokémon.\p"
	.string "I caught a Krabby just this morning!\p"
	.string "I couldn't believe my luck!$"

LionsarchCity_NPC_NewsReporter_Text_0:
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
	.string "I'm investigating the Faculty's\n"
	.string "activities for the regional news\l"
	.string "network.\p"
	.string "They claim to be mining rare metals, but\n"
	.string "their security is unusually tight.\p"
	.string "What are they really doing in there?$"

LionsarchCity_NPC_GymTrainer_Text_0:
	.string "You're heading into the Ice Gym?\p"
	.string "Two leaders in there, Tanya and Tara,\n"
	.string "both weather setters, both dangerous.\p"
	.string "The trainers inside all run Ice-types,\n"
	.string "so bring Fire, Fighting, or Rock.\p"
	.string "Oh, and take this.$"

LionsarchCity_NPC_GymTrainer_Text_1:
	.string "A Snowball. Let a Pokemon hold it and it\n"
	.string "boosts their Attack when they get hit\l"
	.string "by an Ice move.\p"
	.string "In a Hail team mirror it can flip a fight\n"
	.string "fast.\p"
	.string "Good luck in there.$"

LionsarchCity_NPC_GymTrainer_Text_2:
	.string "Two leaders, two weather teams.\p"
	.string "Fire, Fighting, Rock. You've got this.$"

LionsarchCity_NPC_ShipCaptain_Text_0:
	.string "My vessel sails between here and\n"
	.string "Siltroot Town regularly.\p"
	.string "The harbor's always busy with cargo\n"
	.string "ships coming and going.\p"
	.string "It's what keeps this city alive.$"

LionsarchCity_NPC_StreetVendor_Text_0:
	.string "The markets are the soul of Lionsarch!\p"
	.string "Traders from all over the region bring\n"
	.string "their goods here.\p"
	.string "You can find things here that don't\n"
	.string "exist anywhere else!\p"
	.string "I'm setting up shop right now if you\n"
	.string "want to take a look!\p"
	.string "I probably open my stand very soon!$"

LionsarchCity_Scott_ArrivalPoint_Text_0:
	.string "The industrial dock stretches out\n"
	.string "before you.\p"
	.string "The smell of saltwater and diesel fills\n"
	.string "the air.$"

LionsarchCity_RectorSendoff_Text_0:
	.string "THE RECTOR$"

LionsarchCity_RectorSendoff_Text_1:
	.string "You fought hard in there.\p"
	.string "You are lucky my strongest pokemon are\n"
	.string "on another mission...\p"
	.string "But it looks like I stalled you long\n"
	.string "enough for the ships to depart.$"

LionsarchCity_RectorSendoff_Text_2:
	.string "BARRY$"

LionsarchCity_RectorSendoff_Text_3:
	.string "YOU THERE, WE HAVE ENOUGH MATERIALS,\n"
	.string "LETS MOVE!$"

LionsarchCity_RectorSendoff_Text_4:
	.string "AND YOU TWO, LETS KEEP THOSE MUSCLES\n"
	.string "MOVING!$"

LionsarchCity_RectorSendoff_Text_5:
	.string "THE CONRECTOR$"

LionsarchCity_RectorSendoff_Text_6:
	.string "Good job Barr...Wouter. After you.$"

LionsarchCity_RectorSendoff_Text_7:
	.string "Would you look at that young man, he\n"
	.string "has a bright future.\p"
	.string "He is Pushing Boundaries, Developing\n"
	.string "his Talent and an Inspiration!!\p"
	.string "Everything The Faculty needs.$"

LionsarchCity_RectorSendoff_Text_8:
	.string "The Faculty is not a building or a plan.\p"
	.string "It is an understanding, an idea.\p"
	.string "And ideas cannot be destroyed.$"

LionsarchCity_RectorSendoff_Text_9:
	.string "To make a long story short:\n"
	.string "Order will always prevail.\p"
	.string "In the end...\p"
	.string "that is what counts the most.\p"
	.string "Skarmory! Lets go!$"

LionsarchCity_RectorSendoff_Text_10:
	.string "...what are you...?\n"
	.string "You look happy!$"

LionsarchCity_RectorSendoff_Text_11:
	.string "...what are you...?\n"
	.string "You look angry...$"

LionsarchCity_RectorSendoff_Text_12:
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
