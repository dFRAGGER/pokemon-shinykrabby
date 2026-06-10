LionsarchCity_Steel_Factory_MapScripts::
# 2 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LionsarchCity_Steel_Factory_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

LionsarchCity_Steel_Factory_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	call SteelFactory_1F_OnTransition
	return


SteelFactory_1F_OnTransition::
# 8 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_ALL_WIRES_PULLED, SteelFactory_1F_OnTransition_2
SteelFactory_1F_OnTransition_1:
# 16 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_ARON_INTRO_DONE, SteelFactory_1F_OnTransition_5
# 21 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_OnTransition_8
# 25 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_ALL_WIRES_PULLED, SteelFactory_1F_OnTransition_11
# 29 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	clearflag FLAG_STEEL_FACTORY_ARON_HIDDEN
# 30 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_1_PULLED, SteelFactory_1F_OnTransition_14
# 34 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_2_PULLED, SteelFactory_1F_OnTransition_17
# 38 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_3_PULLED, SteelFactory_1F_OnTransition_20
# 42 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_4_PULLED, SteelFactory_1F_OnTransition_23
# 46 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectxyperm 18, 35, 16
	end

SteelFactory_1F_OnTransition_2:
# 9 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 5, 20, 0x229, FALSE
# 10 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 6, 20, 0x229, FALSE
# 11 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 7, 20, 0x229, FALSE
# 12 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 5, 21, 0x229, FALSE
# 13 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 6, 21, 0x229, FALSE
# 14 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 7, 21, 0x229, FALSE
	goto SteelFactory_1F_OnTransition_1

SteelFactory_1F_OnTransition_5:
# 17 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_ARON_HIDDEN
# 18 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectxyperm 18, 4, 12
	end

SteelFactory_1F_OnTransition_8:
# 22 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_ARON_HIDDEN
	end

SteelFactory_1F_OnTransition_11:
# 26 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_ARON_HIDDEN
	end

SteelFactory_1F_OnTransition_14:
# 31 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectxyperm 18, 2, 13
	end

SteelFactory_1F_OnTransition_17:
# 35 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectxyperm 18, 12, 7
	end

SteelFactory_1F_OnTransition_20:
# 39 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectxyperm 18, 21, 23
	end

SteelFactory_1F_OnTransition_23:
# 43 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectxyperm 18, 25, 10
	end


SteelFactory_1F_Aron_Interact::
# 53 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lock
# 54 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 55 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_PIN
# 56 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Aron_Interact_Movement_0
# 57 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 18
# 58 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Aron_Interact_Text, MSGBOX_AUTOCLOSE
# 59 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	return


SteelFactory_1F_AronIntro::
# 65 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_ARON_INTRO_DONE, SteelFactory_1F_AronIntro_2
# 68 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 69 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_ARON_INTRO_DONE
# 70 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 71 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	addobject 18
# 72 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SteelFactory_1F_AronIntro_5
SteelFactory_1F_AronIntro_4:
# 78 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SteelFactory_1F_AronIntro_8
SteelFactory_1F_AronIntro_7:
# 84 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_PIN
# 85 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_AronIntro_Movement_4
# 86 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
# 87 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_AronIntro_Text, MSGBOX_YESNO
# 88 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_AronIntro_Text_0, MSGBOX_AUTOCLOSE
# 89 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SteelFactory_1F_AronIntro_11
# 104 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_AronIntro_Movement_9
# 105 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
# 106 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_AronLeave_Text
# 107 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 18
# 108 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_ARON_HIDDEN
SteelFactory_1F_AronIntro_10:
# 110 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return

SteelFactory_1F_AronIntro_2:
	end

SteelFactory_1F_AronIntro_5:
# 73 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_AronIntro_Movement_0
# 74 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement
# 75 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_1F_AronIntro_Movement_1
# 76 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
	goto SteelFactory_1F_AronIntro_4

SteelFactory_1F_AronIntro_8:
# 79 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_AronIntro_Movement_2
# 80 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement
# 81 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_1F_AronIntro_Movement_3
# 82 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
	goto SteelFactory_1F_AronIntro_7

SteelFactory_1F_AronIntro_11:
# 90 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_ARON_GUIDING
# 91 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SteelFactory_1F_AronIntro_15
SteelFactory_1F_AronIntro_14:
# 96 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SteelFactory_1F_AronIntro_18
SteelFactory_1F_AronIntro_17:
# 101 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_AronFollow_Text
# 102 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
	goto SteelFactory_1F_AronIntro_10

SteelFactory_1F_AronIntro_15:
# 92 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_AronIntro_Movement_5
# 93 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_1F_AronIntro_Movement_6
# 94 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
	goto SteelFactory_1F_AronIntro_14

SteelFactory_1F_AronIntro_18:
# 97 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_AronIntro_Movement_7
# 98 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_1F_AronIntro_Movement_8
# 99 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
	goto SteelFactory_1F_AronIntro_17


SteelFactory_1F_Scientist_Lore1::
# 116 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 117 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 118 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist_Lore1_Text
# 119 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Scientist_Lore2::
# 123 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 124 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 125 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist_Lore2_Text
# 126 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Scientist_Lore3::
# 130 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 131 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 132 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist_Lore3_Text
# 133 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Scientist_Lore4::
# 137 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 138 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 139 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist_Lore4_Text
# 140 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Scientist_Lore5::
# 144 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 145 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 146 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist_Lore5_Text
# 147 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Official_Lore1::
# 153 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 154 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 155 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Official_Lore1_Text
# 156 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Official_Lore2::
# 160 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 161 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 162 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Official_Lore2_Text
# 163 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Official_Lore3::
# 167 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 168 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 169 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Official_Lore3_Text
# 170 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Scientist_Battle1::
# 176 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_SCIENTIST_1, SteelFactory_1F_Scientist1_Intro, SteelFactory_1F_Scientist1_Defeat
# 177 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist1_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_1F_Scientist_Battle2::
# 182 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_SCIENTIST_2, SteelFactory_1F_Scientist2_Intro, SteelFactory_1F_Scientist2_Defeat
# 183 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist2_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_1F_Official_Battle1::
# 190 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_OFFICIAL_1, SteelFactory_1F_Official1_Intro, SteelFactory_1F_Official1_Defeat
# 191 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Official1_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_1F_Official_Battle2::
# 196 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_OFFICIAL_2, SteelFactory_1F_Official2_Intro, SteelFactory_1F_Official2_Defeat
# 197 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Official2_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_1F_Official_Battle3::
# 202 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_OFFICIAL_3, SteelFactory_1F_Official3_Intro, SteelFactory_1F_Official3_Defeat
# 203 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Official3_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_1F_Wire1::
# 210 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lock
# 211 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_WIRE_1_PULLED, SteelFactory_1F_Wire1_2
# 216 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire1_5
# 221 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_Prompt, MSGBOX_YESNO
# 222 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SteelFactory_1F_Wire1_8
SteelFactory_1F_Wire1_7:
# 244 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	return

SteelFactory_1F_Wire1_2:
# 212 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_AlreadyPulled
# 213 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire1_5:
# 217 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_NotReady
# 218 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire1_8:
# 223 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_WIRE_1_PULLED
# 224 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_CLICK
# 225 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitse
# 226 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire1_PulledText
# 227 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire1_11
SteelFactory_1F_Wire1_10:
# 242 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	call SteelFactory_CheckAllWires
	goto SteelFactory_1F_Wire1_7

SteelFactory_1F_Wire1_11:
# 228 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_PIN
# 229 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Wire1_Movement_0
# 230 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
# 231 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_AronNextMachine_Text, MSGBOX_AUTOCLOSE
# 232 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Wire1_Movement_1
# 233 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 18
# 234 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 18
# 235 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectxyperm 18, 12, 7
# 236 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_RIGHT
# 237 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	clearflag FLAG_STEEL_FACTORY_ARON_HIDDEN
# 238 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	addobject 18
	goto SteelFactory_1F_Wire1_10


SteelFactory_1F_Wire2::
# 248 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lock
# 249 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_WIRE_2_PULLED, SteelFactory_1F_Wire2_2
# 254 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire2_5
# 259 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_1_PULLED, SteelFactory_1F_Wire2_8
# 264 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_Prompt, MSGBOX_YESNO
# 265 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SteelFactory_1F_Wire2_11
SteelFactory_1F_Wire2_10:
# 285 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	return

SteelFactory_1F_Wire2_2:
# 250 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_AlreadyPulled
# 251 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire2_5:
# 255 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_NotReady
# 256 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire2_8:
# 260 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_NotReady
# 261 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire2_11:
# 266 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_WIRE_2_PULLED
# 267 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_CLICK
# 268 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitse
# 269 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire2_PulledText
# 270 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire2_14
SteelFactory_1F_Wire2_13:
# 283 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	call SteelFactory_CheckAllWires
	goto SteelFactory_1F_Wire2_10

SteelFactory_1F_Wire2_14:
# 271 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_PIN
# 272 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Wire1_Movement_0
# 273 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
# 274 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_AronNextMachine_Text, MSGBOX_AUTOCLOSE
# 275 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Wire2_Movement_0
# 276 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 18
# 277 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 18
# 278 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectxyperm 18, 21, 23
# 279 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 280 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	clearflag FLAG_STEEL_FACTORY_ARON_HIDDEN
# 281 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	addobject 18
	goto SteelFactory_1F_Wire2_13


SteelFactory_1F_Wire3::
# 289 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 290 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_WIRE_3_PULLED, SteelFactory_1F_Wire3_2
# 295 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire3_5
# 300 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_2_PULLED, SteelFactory_1F_Wire3_8
# 305 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_Prompt, MSGBOX_YESNO
# 306 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SteelFactory_1F_Wire3_11
SteelFactory_1F_Wire3_10:
# 326 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return

SteelFactory_1F_Wire3_2:
# 291 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_AlreadyPulled
# 292 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	end

SteelFactory_1F_Wire3_5:
# 296 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_NotReady
# 297 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	end

SteelFactory_1F_Wire3_8:
# 301 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_NotReady
# 302 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	end

SteelFactory_1F_Wire3_11:
# 307 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_WIRE_3_PULLED
# 308 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_CLICK
# 309 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitse
# 310 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire3_PulledText
# 311 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire3_14
SteelFactory_1F_Wire3_13:
# 324 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	call SteelFactory_CheckAllWires
	goto SteelFactory_1F_Wire3_10

SteelFactory_1F_Wire3_14:
# 312 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_PIN
# 313 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Wire1_Movement_0
# 314 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
# 315 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_AronNextMachine_Text, MSGBOX_AUTOCLOSE
# 316 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Wire3_Movement_0
# 317 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 18
# 318 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 18
# 319 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectxyperm 18, 25, 10
# 320 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_RIGHT
# 321 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	clearflag FLAG_STEEL_FACTORY_ARON_HIDDEN
# 322 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	addobject 18
	goto SteelFactory_1F_Wire3_13


SteelFactory_1F_Wire4::
# 330 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lock
# 331 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_WIRE_4_PULLED, SteelFactory_1F_Wire4_2
# 336 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire4_5
# 341 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_3_PULLED, SteelFactory_1F_Wire4_8
# 346 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_Prompt, MSGBOX_YESNO
# 347 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SteelFactory_1F_Wire4_11
SteelFactory_1F_Wire4_10:
# 367 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	return

SteelFactory_1F_Wire4_2:
# 332 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_AlreadyPulled
# 333 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire4_5:
# 337 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_NotReady
# 338 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire4_8:
# 342 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_NotReady
# 343 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire4_11:
# 348 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_WIRE_4_PULLED
# 349 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_CLICK
# 350 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitse
# 351 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire4_PulledText
# 352 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire4_14
SteelFactory_1F_Wire4_13:
# 365 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	call SteelFactory_CheckAllWires
	goto SteelFactory_1F_Wire4_10

SteelFactory_1F_Wire4_14:
# 353 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_PIN
# 354 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Wire1_Movement_0
# 355 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
# 356 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_AronNextMachine_Text, MSGBOX_AUTOCLOSE
# 357 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Wire4_Movement_0
# 358 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 18
# 359 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 18
# 360 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectxyperm 18, 35, 16
# 361 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_LEFT
# 362 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	clearflag FLAG_STEEL_FACTORY_ARON_HIDDEN
# 363 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	addobject 18
	goto SteelFactory_1F_Wire4_13


SteelFactory_1F_Wire5::
# 371 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lock
# 372 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_WIRE_5_PULLED, SteelFactory_1F_Wire5_2
# 377 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire5_5
# 382 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_4_PULLED, SteelFactory_1F_Wire5_8
# 387 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_Prompt, MSGBOX_YESNO
# 388 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SteelFactory_1F_Wire5_11
SteelFactory_1F_Wire5_10:
# 406 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	return

SteelFactory_1F_Wire5_2:
# 373 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_AlreadyPulled
# 374 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire5_5:
# 378 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_NotReady
# 379 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire5_8:
# 383 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_NotReady
# 384 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire5_11:
# 389 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_WIRE_5_PULLED
# 390 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_CLICK
# 391 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitse
# 392 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire5_PulledText
# 393 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire5_14
SteelFactory_1F_Wire5_13:
# 404 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	call SteelFactory_CheckAllWires
	goto SteelFactory_1F_Wire5_10

SteelFactory_1F_Wire5_14:
# 394 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_PIN
# 395 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Wire5_Movement_0
# 396 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 18
# 397 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_AronFarewell_Text, MSGBOX_AUTOCLOSE
# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Wire5_Movement_1
# 399 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 18
# 400 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 18
# 401 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_ARON_HIDDEN
# 402 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	clearflag FLAG_STEEL_FACTORY_ARON_GUIDING
	goto SteelFactory_1F_Wire5_13


SteelFactory_CheckAllWires::
# 410 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_1_PULLED, SteelFactory_CheckAllWires_2
# 413 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_2_PULLED, SteelFactory_CheckAllWires_5
# 416 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_3_PULLED, SteelFactory_CheckAllWires_8
# 419 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_4_PULLED, SteelFactory_CheckAllWires_11
# 422 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_5_PULLED, SteelFactory_CheckAllWires_14
# 425 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_ALL_WIRES_PULLED, SteelFactory_CheckAllWires_17
# 428 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_ALL_WIRES_PULLED
# 429 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 5, 20, 0x229, FALSE
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 6, 20, 0x229, FALSE
# 431 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 7, 20, 0x229, FALSE
# 432 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 5, 21, 0x229, FALSE
# 433 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 6, 21, 0x229, FALSE
# 434 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 7, 21, 0x229, FALSE
# 435 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_DOOR
# 436 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitse
# 437 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_AllWires_Text
	return

SteelFactory_CheckAllWires_2:
	return

SteelFactory_CheckAllWires_5:
	return

SteelFactory_CheckAllWires_8:
	return

SteelFactory_CheckAllWires_11:
	return

SteelFactory_CheckAllWires_14:
	return

SteelFactory_CheckAllWires_17:
	return


SteelFactory_1F_ControlPanel::
# 444 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 445 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_CHOICE_MADE, SteelFactory_1F_ControlPanel_2
# 454 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Panel_Prompt, MSGBOX_YESNO
# 455 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SteelFactory_1F_ControlPanel_5
SteelFactory_1F_ControlPanel_4:
# 466 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SteelFactory_1F_ControlPanel_12
SteelFactory_1F_ControlPanel_11:
# 475 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_CHOICE_MADE
# 476 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return

SteelFactory_1F_ControlPanel_2:
# 446 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_FREED_POKEMON, SteelFactory_1F_ControlPanel_8
# 449 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Panel_AlreadyLeft
SteelFactory_1F_ControlPanel_7:
# 451 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	end

SteelFactory_1F_ControlPanel_5:
# 456 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_SUCCESS
# 457 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Panel_FreeSequence
# 458 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmessage
# 459 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_FREED_POKEMON
# 460 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_MEW_SAW_FACTORY_FREED
# 461 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
# 462 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmoncry
# 463 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Panel_MewFree
# 464 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmessage
	goto SteelFactory_1F_ControlPanel_4

SteelFactory_1F_ControlPanel_8:
# 447 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Panel_AlreadyFreed
	goto SteelFactory_1F_ControlPanel_7

SteelFactory_1F_ControlPanel_12:
# 467 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Panel_Left
# 468 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmessage
# 469 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_MEW_SAW_FACTORY_NOT_FREED
# 470 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
# 471 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmoncry
# 472 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Panel_MewLeft
# 473 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmessage
	goto SteelFactory_1F_ControlPanel_11


# 56 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_Aron_Interact_Movement_0:
# 56 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	emote_question_mark
# 56 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	jump_in_place_down
	step_end

# 73 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_AronIntro_Movement_0:
# 73 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 73 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 73 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 73 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 73 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 73 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 73 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 73 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 73 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_left
	step_end

# 75 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_AronIntro_Movement_1:
# 75 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_right
	step_end

# 79 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_AronIntro_Movement_2:
# 79 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 79 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 79 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 79 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 79 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 79 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 79 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 79 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_up
	step_end

# 81 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_AronIntro_Movement_3:
# 81 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_down
	step_end

# 85 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_AronIntro_Movement_4:
# 85 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	emote_question_mark
	step_end

# 92 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_AronIntro_Movement_5:
# 92 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 92 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 92 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 92 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 92 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 92 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 92 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 92 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 92 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 92 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 92 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 92 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 92 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 92 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_left
	step_end

# 93 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_AronIntro_Movement_6:
# 93 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_right
# 93 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 93 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 93 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 93 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_right
# 93 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_right
# 93 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 93 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 93 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 93 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 93 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 93 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_left
# 93 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_left
# 93 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_left
# 93 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_up
	step_end

# 97 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_AronIntro_Movement_7:
# 97 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 97 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 97 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 97 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 97 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 97 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 97 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 97 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 97 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 97 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 97 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 97 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 97 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_left
	step_end

# 98 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_AronIntro_Movement_8:
# 98 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 98 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 98 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 98 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_right
# 98 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_right
# 98 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 98 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 98 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 98 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 98 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 98 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_left
# 98 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_left
# 98 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_left
# 98 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_up
	step_end

# 104 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_AronIntro_Movement_9:
# 104 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 104 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 104 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 104 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 104 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 104 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 104 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 104 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 104 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 104 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 104 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
	step_end

# 229 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_Wire1_Movement_0:
# 229 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	emote_exclamation_mark
	step_end

# 232 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_Wire1_Movement_1:
# 232 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 232 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 232 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 232 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 232 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 232 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 232 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 232 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 232 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 232 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 232 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 232 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 232 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 232 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 232 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
	step_end

# 275 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_Wire2_Movement_0:
# 275 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 275 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 275 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 275 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 275 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 275 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 275 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 275 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
	step_end

# 316 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_Wire3_Movement_0:
# 316 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 316 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 316 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 316 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 316 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 316 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 316 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 316 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 316 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 316 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
	step_end

# 357 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_Wire4_Movement_0:
# 357 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 357 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 357 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 357 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 357 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 357 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 357 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 357 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 357 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 357 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 357 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 357 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 357 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 357 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
	step_end

# 395 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_Wire5_Movement_0:
# 395 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	emote_exclamation_mark
# 395 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	jump_in_place_down
# 395 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_left
	step_end

# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_Wire5_Movement_1:
# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 398 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
	step_end

SteelFactory_1F_AronIntro_Text_0:
# 88 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Aron scuttled away!$"

SteelFactory_1F_Scientist_Lore1_Text::
# 481 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Regi-Metal alloy is our greatest\n"
	.string "achievement.\p"
	.string "By replicating the elemental forging\n"
	.string "process Regigigas used in Lions\l"
	.string "Mountains, we create a material that\l"
	.string "channels legendary energy.\p"
	.string "The Faculty will bring true order to\n"
	.string "Teressa. Diversity has had its chance.\l"
	.string "Now it is structure's turn.$"

SteelFactory_1F_Scientist_Lore2_Text::
# 485 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "This is a restricted area!\p"
	.string "Leave immediately or I'm calling\n"
	.string "security!$"

SteelFactory_1F_Scientist_Lore3_Text::
# 489 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The ore from Lions Mountains is unlike\n"
	.string "anything we've catalogued.\p"
	.string "Dense with ancient energy.\p"
	.string "The Pokemon here can sense it - it\n"
	.string "makes them... compliant.\p"
	.string "That's what The Rector calls it.\n"
	.string "Compliant.$"

SteelFactory_1F_Scientist_Lore4_Text::
# 493 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Registeel is just a small piece of the\n"
	.string "puzzle.\p"
	.string "However, it does help us build metal\n"
	.string "structures that can bring order to\l"
	.string "even the most chaotic places.\p"
	.string "The Rector seems to have found a way\n"
	.string "to incentivize it.\p"
	.string "I try not to think about the details.$"

SteelFactory_1F_Scientist_Lore5_Text::
# 497 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The electro-magnetic resonance from\n"
	.string "the Magnemite cluster amplifies the\l"
	.string "metal's conductivity tenfold.\p"
	.string "Add the origin of the ore to the\n"
	.string "equation and we're making something\l"
	.string "the Regis would recognize as their own.$"

SteelFactory_1F_Official_Lore1_Text::
# 501 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Teressa is a beautiful region.\p"
	.string "But it's wasted on chaos.\p"
	.string "Dozens of mutations, dozens of types,\n"
	.string "no cohesion, no direction.\p"
	.string "We are going to change that.\p"
	.string "One processed metric ton at a time.$"

SteelFactory_1F_Official_Lore2_Text::
# 505 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Faculty destroying diversity?\p"
	.string "We organize it.\p"
	.string "Everything in its right place.\p"
	.string "Everyone with a clear role.\p"
	.string "Is that really so terrible?$"

SteelFactory_1F_Official_Lore3_Text::
# 509 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Pokemon working here are fed,\n"
	.string "sheltered, and given purpose.\p"
	.string "That's more than most wild Pokemon get.\p"
	.string "It's not cruelty. It's efficiency.\p"
	.string "At least... that's what we tell\n"
	.string "ourselves.$"

SteelFactory_1F_Scientist1_Intro::
# 513 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "A trespasser?!\p"
	.string "I'll neutralize you with cold, hard\n"
	.string "science!$"

SteelFactory_1F_Scientist1_Defeat::
# 517 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Unacceptable.\p"
	.string "My data... completely disrupted...$"

SteelFactory_1F_Scientist1_PostBattle::
# 521 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "How can something that disorganized\n"
	.string "defeat me?!$"

SteelFactory_1F_Scientist2_Intro::
# 525 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Security breach detected!\p"
	.string "Initiating containment protocol!\p"
	.string "Which is to say - I will fight you!$"

SteelFactory_1F_Scientist2_Defeat::
# 529 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "My containment protocol... failed.\p"
	.string "This is extremely irregular.$"

SteelFactory_1F_Scientist2_PostBattle::
# 533 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Rector is going to hear about this\n"
	.string "data anomaly.$"

SteelFactory_1F_Official1_Intro::
# 537 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Nobody disrupts Faculty operations and\n"
	.string "walks away, intruder.\p"
	.string "Order will be maintained!\p"
	.string "Starting with you!$"

SteelFactory_1F_Official1_Defeat::
# 541 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Extraordinary.\p"
	.string "You've upended three months of\n"
	.string "production schedules.$"

SteelFactory_1F_Official1_PostBattle::
# 545 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "...\p"
	.string "You'll want to turn around before you\n"
	.string "reach the upper floors.$"

SteelFactory_1F_Official2_Intro::
# 549 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "I don't know who let you in, but your\n"
	.string "little tour ends here.\p"
	.string "The Faculty's order demands it!$"

SteelFactory_1F_Official2_Defeat::
# 553 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Chaos wins the battle.\p"
	.string "But it always loses the war.$"

SteelFactory_1F_Official2_PostBattle::
# 557 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Don't say I didn't warn you.$"

SteelFactory_1F_Official3_Intro::
# 561 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Nobody reaches The Rector's floor\n"
	.string "without going through me.\p"
	.string "The Faculty's order demands it.\p"
	.string "And I am very orderly.$"

SteelFactory_1F_Official3_Defeat::
# 565 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Impossible.\p"
	.string "You... you're chaos incarnate.$"

SteelFactory_1F_Official3_PostBattle::
# 569 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Rector is on the second floor. Face\n"
	.string "him, if you dare.$"

SteelFactory_1F_Panel_Prompt::
# 574 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "POKEMON CONTAINMENT OVERRIDE -\n"
	.string "EMERGENCY RELEASE -\p"
	.string "Decades of Pokemon are held in these\n"
	.string "bays, forced to power the facility.\l"
	.string "Machop, Aron, Magnemite... and something\l"
	.string "much larger.\p"
	.string "Do you release them?$"

SteelFactory_1F_Panel_FreeSequence::
# 578 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "You engage the override.\p"
	.string "A deep rumble moves through the floor.\p"
	.string "The bay doors grind open.\p"
	.string "One by one, the Pokemon stir -\n"
	.string "confused, then alert.\p"
	.string "They look at you.\p"
	.string "Then they scatter into the vents and\n"
	.string "corridors, gone in seconds.\p"
	.string "The machines fall silent.$"

SteelFactory_1F_Panel_MewFree::
# 582 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "A soft cry echoes from somewhere deep\n"
	.string "in the factory walls.\p"
	.string "You sense something watching.\p"
	.string "Something that has been watching for a\n"
	.string "very long time.$"

SteelFactory_1F_Panel_Left::
# 586 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "You step back from the panel.\p"
	.string "The machines keep running.\p"
	.string "The Pokemon keep working.$"

SteelFactory_1F_Panel_MewLeft::
# 590 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "A faint cry carries through the steel\n"
	.string "walls.\p"
	.string "You almost missed it.$"

SteelFactory_1F_Panel_AlreadyFreed::
# 594 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The containment bays are open.\p"
	.string "The Pokemon are free.$"

SteelFactory_1F_Panel_AlreadyLeft::
# 598 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The panel flickers.\p"
	.string "The Pokemon continue their labor.$"

SteelFactory_Wire_Prompt::
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "A thick cable runs from this machine\n"
	.string "into the wall.\p"
	.string "It looks like it keeps something\n"
	.string "running.\p"
	.string "Disconnect the wire?$"

SteelFactory_Wire_AlreadyPulled::
# 606 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The wire hangs loose from the machine.\p"
	.string "It's already been disconnected.$"

SteelFactory_Wire_NotReady::
# 610 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "A thick cable runs from this machine\n"
	.string "into the wall.\p"
	.string "You leave it alone.$"

SteelFactory_Wire1_PulledText::
# 614 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "You grip the cable and pull.\p"
	.string "It comes free with a sharp click.\p"
	.string "The machine goes dark.$"

SteelFactory_Wire2_PulledText::
# 618 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The cable resists briefly, then snaps\n"
	.string "free. Click.\p"
	.string "Another machine falls silent.$"

SteelFactory_Wire3_PulledText::
# 622 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "You work the cable loose from its\n"
	.string "housing. Click.\p"
	.string "The hum in this corner of the factory\n"
	.string "dies.$"

SteelFactory_Wire4_PulledText::
# 626 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The thick cable pulls free with a hollow\n"
	.string "click.\p"
	.string "Somewhere above, a light flickers out.$"

SteelFactory_Wire5_PulledText::
# 630 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The last cable.\p"
	.string "You pull it free. Click.\p"
	.string "A deep silence falls over the machines\n"
	.string "around you.$"

SteelFactory_AllWires_Text::
# 634 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "A low groan of shifting metal...\p"
	.string "Deep in the factory, something heavy\n"
	.string "has moved.$"

SteelFactory_Aron_Interact_Text::
# 638 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Aron glances up at you, then turns\n"
	.string "back to the machine.$"

SteelFactory_AronIntro_Text::
# 642 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "... the small Aron seems stressed.\p"
	.string "It seems desperate to show you\n"
	.string "something.\p"
	.string "Follow it? The Rector might escape...$"

SteelFactory_AronFollow_Text::
# 646 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Hmm... must be something with the\n"
	.string "machine...\p"
	.string "It's trying to pull something from the\n"
	.string "machine.\p"
	.string "It looks like it's trying to disconnect\n"
	.string "a wire?$"

SteelFactory_AronLeave_Text::
# 650 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Aron's head droops.\p"
	.string "It retreats behind some steel beams.\p"
	.string "The factory keeps humming.$"

SteelFactory_AronNextMachine_Text::
# 654 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Aron looks pleased. It scurries\n"
	.string "ahead to the next machine.$"

SteelFactory_AronFarewell_Text::
# 658 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Aron seems grateful for your help.\p"
	.string "What could it be trying to say?\p"
	.string "I think it's wanting me to follow it one\n"
	.string "last time...$"
