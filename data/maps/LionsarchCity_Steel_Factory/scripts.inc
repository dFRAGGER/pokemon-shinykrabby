LionsarchCity_Steel_Factory_MapScripts::
# 2 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LionsarchCity_Steel_Factory_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

LionsarchCity_Steel_Factory_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	call SteelFactory_1F_OnTransition
	return


SteelFactory_1F_OnTransition::
# 9 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_ALL_WIRES_PULLED, SteelFactory_1F_OnTransition_2
SteelFactory_1F_OnTransition_1:
# 12 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_ALL_WIRES_PULLED, SteelFactory_1F_OnTransition_5
SteelFactory_1F_OnTransition_4:
# 22 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_FREED_POKEMON, SteelFactory_1F_OnTransition_8
SteelFactory_1F_OnTransition_7:
# 26 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_FREED_POKEMON, SteelFactory_1F_OnTransition_14
SteelFactory_1F_OnTransition_13:
# 44 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_ALL_WIRES_PULLED, SteelFactory_1F_OnTransition_19
SteelFactory_1F_OnTransition_18:
# 52 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_ARON_INTRO_DONE, SteelFactory_1F_OnTransition_22
# 57 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_OnTransition_25
# 61 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_ALL_WIRES_PULLED, SteelFactory_1F_OnTransition_28
# 65 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	clearflag FLAG_STEEL_FACTORY_ARON_HIDDEN
# 66 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_1_PULLED, SteelFactory_1F_OnTransition_31
# 70 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_2_PULLED, SteelFactory_1F_OnTransition_34
# 74 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_3_PULLED, SteelFactory_1F_OnTransition_37
# 78 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_4_PULLED, SteelFactory_1F_OnTransition_40
# 82 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectxyperm 18, 35, 16
	end

SteelFactory_1F_OnTransition_2:
# 10 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_CELL_ARON_HIDDEN
	goto SteelFactory_1F_OnTransition_1

SteelFactory_1F_OnTransition_5:
# 13 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_FREED_POKEMON, SteelFactory_1F_OnTransition_11
SteelFactory_1F_OnTransition_10:
# 16 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_FREED_POKEMON, SteelFactory_1F_OnTransition_16
	goto SteelFactory_1F_OnTransition_4

SteelFactory_1F_OnTransition_8:
# 23 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_POKEMON_CAGED
	goto SteelFactory_1F_OnTransition_7

SteelFactory_1F_OnTransition_11:
# 14 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	clearflag FLAG_STEEL_FACTORY_CELL_ARON_HIDDEN
	goto SteelFactory_1F_OnTransition_10

SteelFactory_1F_OnTransition_14:
# 27 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 2, 33, 0x200, FALSE
# 28 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 3, 33, 0x200, FALSE
# 29 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 2, 34, 0x200, FALSE
# 30 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 3, 34, 0x200, FALSE
# 31 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 9, 32, 0x200, FALSE
# 32 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 10, 32, 0x200, FALSE
# 33 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 9, 33, 0x200, FALSE
# 34 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 10, 33, 0x200, FALSE
# 35 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 2, 40, 0x200, FALSE
# 36 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 3, 40, 0x200, FALSE
# 37 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 2, 41, 0x200, FALSE
# 38 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 3, 41, 0x200, FALSE
# 39 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 9, 39, 0x200, FALSE
# 40 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 10, 39, 0x200, FALSE
# 41 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 9, 40, 0x200, FALSE
# 42 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 10, 40, 0x200, FALSE
	goto SteelFactory_1F_OnTransition_13

SteelFactory_1F_OnTransition_16:
# 17 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_CELL_ARON_HIDDEN
	goto SteelFactory_1F_OnTransition_4

SteelFactory_1F_OnTransition_19:
# 45 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 5, 20, 0x229, FALSE
# 46 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 6, 20, 0x229, FALSE
# 47 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 7, 20, 0x229, FALSE
# 48 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 5, 21, 0x229, FALSE
# 49 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 6, 21, 0x229, FALSE
# 50 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 7, 21, 0x229, FALSE
	goto SteelFactory_1F_OnTransition_18

SteelFactory_1F_OnTransition_22:
# 53 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_ARON_HIDDEN
# 54 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectxyperm 18, 4, 12
	end

SteelFactory_1F_OnTransition_25:
# 58 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_ARON_HIDDEN
	end

SteelFactory_1F_OnTransition_28:
# 62 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_ARON_HIDDEN
	end

SteelFactory_1F_OnTransition_31:
# 67 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectxyperm 18, 2, 13
	end

SteelFactory_1F_OnTransition_34:
# 71 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectxyperm 18, 12, 7
	end

SteelFactory_1F_OnTransition_37:
# 75 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectxyperm 18, 21, 23
	end

SteelFactory_1F_OnTransition_40:
# 79 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectxyperm 18, 25, 10
	end


SteelFactory_1F_Aron_Interact::
# 90 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	call SteelFactory_1F_CellPanel
	end


SteelFactory_1F_AronIntro::
# 97 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_ARON_INTRO_DONE, SteelFactory_1F_AronIntro_2
# 100 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 101 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_ARON_INTRO_DONE
# 102 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 103 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	addobject 18
# 104 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SteelFactory_1F_AronIntro_5
SteelFactory_1F_AronIntro_4:
# 110 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SteelFactory_1F_AronIntro_8
SteelFactory_1F_AronIntro_7:
# 116 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_PIN
# 117 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_AronIntro_Movement_4
# 118 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
# 119 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_AronIntro_Text, MSGBOX_YESNO
# 120 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_AronIntro_Text_0, MSGBOX_AUTOCLOSE
# 121 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SteelFactory_1F_AronIntro_11
# 136 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_AronIntro_Movement_9
# 137 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
# 138 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_AronLeave_Text
# 139 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 18
# 140 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_ARON_HIDDEN
SteelFactory_1F_AronIntro_10:
# 142 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return

SteelFactory_1F_AronIntro_2:
	end

SteelFactory_1F_AronIntro_5:
# 105 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_AronIntro_Movement_0
# 106 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement
# 107 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_1F_AronIntro_Movement_1
# 108 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
	goto SteelFactory_1F_AronIntro_4

SteelFactory_1F_AronIntro_8:
# 111 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_AronIntro_Movement_2
# 112 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement
# 113 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_1F_AronIntro_Movement_3
# 114 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
	goto SteelFactory_1F_AronIntro_7

SteelFactory_1F_AronIntro_11:
# 122 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_ARON_GUIDING
# 123 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SteelFactory_1F_AronIntro_15
SteelFactory_1F_AronIntro_14:
# 128 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SteelFactory_1F_AronIntro_18
SteelFactory_1F_AronIntro_17:
# 133 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_AronFollow_Text
# 134 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
	goto SteelFactory_1F_AronIntro_10

SteelFactory_1F_AronIntro_15:
# 124 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_AronIntro_Movement_5
# 125 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_1F_AronIntro_Movement_6
# 126 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
	goto SteelFactory_1F_AronIntro_14

SteelFactory_1F_AronIntro_18:
# 129 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_AronIntro_Movement_7
# 130 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_1F_AronIntro_Movement_8
# 131 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
	goto SteelFactory_1F_AronIntro_17


SteelFactory_1F_Scientist_Lore1::
# 148 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 149 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 150 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist_Lore1_Text
# 151 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Scientist_Lore2::
# 155 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 156 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 157 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist_Lore2_Text
# 158 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Scientist_Lore3::
# 162 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 163 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 164 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist_Lore3_Text
# 165 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Scientist_Lore4::
# 169 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 170 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 171 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist_Lore4_Text
# 172 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Scientist_Lore5::
# 176 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 177 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 178 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist_Lore5_Text
# 179 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Official_Lore1::
# 185 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 186 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 187 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Official_Lore1_Text
# 188 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Official_Lore2::
# 192 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 193 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 194 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Official_Lore2_Text
# 195 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Official_Lore3::
# 199 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 200 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 201 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Official_Lore3_Text
# 202 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Scientist_Battle1::
# 208 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_SCIENTIST_1, SteelFactory_1F_Scientist1_Intro, SteelFactory_1F_Scientist1_Defeat
# 209 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist1_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_1F_Scientist_Battle2::
# 214 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_SCIENTIST_2, SteelFactory_1F_Scientist2_Intro, SteelFactory_1F_Scientist2_Defeat
# 215 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist2_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_1F_Official_Battle1::
# 222 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_OFFICIAL_1, SteelFactory_1F_Official1_Intro, SteelFactory_1F_Official1_Defeat
# 223 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Official1_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_1F_Official_Battle2::
# 228 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_OFFICIAL_2, SteelFactory_1F_Official2_Intro, SteelFactory_1F_Official2_Defeat
# 229 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Official2_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_1F_Official_Battle3::
# 234 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_OFFICIAL_3, SteelFactory_1F_Official3_Intro, SteelFactory_1F_Official3_Defeat
# 235 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Official3_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_1F_Wire1::
# 242 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lock
# 243 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_WIRE_1_PULLED, SteelFactory_1F_Wire1_2
# 248 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire1_5
# 253 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_Prompt, MSGBOX_YESNO
# 254 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SteelFactory_1F_Wire1_8
SteelFactory_1F_Wire1_7:
# 276 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	return

SteelFactory_1F_Wire1_2:
# 244 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_AlreadyPulled
# 245 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire1_5:
# 249 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_NotReady
# 250 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire1_8:
# 255 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_WIRE_1_PULLED
# 256 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_CLICK
# 257 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitse
# 258 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire1_PulledText
# 259 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire1_11
SteelFactory_1F_Wire1_10:
# 274 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	call SteelFactory_CheckAllWires
	goto SteelFactory_1F_Wire1_7

SteelFactory_1F_Wire1_11:
# 260 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_PIN
# 261 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Wire1_Movement_0
# 262 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
# 263 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_AronNextMachine_Text, MSGBOX_AUTOCLOSE
# 264 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Wire1_Movement_1
# 265 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 18
# 266 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 18
# 267 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectxyperm 18, 12, 7
# 268 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_RIGHT
# 269 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	clearflag FLAG_STEEL_FACTORY_ARON_HIDDEN
# 270 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	addobject 18
	goto SteelFactory_1F_Wire1_10


SteelFactory_1F_Wire2::
# 280 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lock
# 281 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_WIRE_2_PULLED, SteelFactory_1F_Wire2_2
# 286 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire2_5
# 291 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_1_PULLED, SteelFactory_1F_Wire2_8
# 296 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_Prompt, MSGBOX_YESNO
# 297 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SteelFactory_1F_Wire2_11
SteelFactory_1F_Wire2_10:
# 317 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	return

SteelFactory_1F_Wire2_2:
# 282 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_AlreadyPulled
# 283 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire2_5:
# 287 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_NotReady
# 288 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire2_8:
# 292 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_NotReady
# 293 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire2_11:
# 298 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_WIRE_2_PULLED
# 299 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_CLICK
# 300 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitse
# 301 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire2_PulledText
# 302 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire2_14
SteelFactory_1F_Wire2_13:
# 315 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	call SteelFactory_CheckAllWires
	goto SteelFactory_1F_Wire2_10

SteelFactory_1F_Wire2_14:
# 303 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_PIN
# 304 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Wire1_Movement_0
# 305 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
# 306 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_AronNextMachine_Text, MSGBOX_AUTOCLOSE
# 307 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Wire2_Movement_0
# 308 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 18
# 309 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 18
# 310 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectxyperm 18, 21, 23
# 311 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
# 312 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	clearflag FLAG_STEEL_FACTORY_ARON_HIDDEN
# 313 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	addobject 18
	goto SteelFactory_1F_Wire2_13


SteelFactory_1F_Wire3::
# 321 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 322 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_WIRE_3_PULLED, SteelFactory_1F_Wire3_2
# 327 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire3_5
# 332 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_2_PULLED, SteelFactory_1F_Wire3_8
# 337 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_Prompt, MSGBOX_YESNO
# 338 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SteelFactory_1F_Wire3_11
SteelFactory_1F_Wire3_10:
# 358 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return

SteelFactory_1F_Wire3_2:
# 323 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_AlreadyPulled
# 324 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	end

SteelFactory_1F_Wire3_5:
# 328 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_NotReady
# 329 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	end

SteelFactory_1F_Wire3_8:
# 333 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_NotReady
# 334 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	end

SteelFactory_1F_Wire3_11:
# 339 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_WIRE_3_PULLED
# 340 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_CLICK
# 341 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitse
# 342 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire3_PulledText
# 343 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire3_14
SteelFactory_1F_Wire3_13:
# 356 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	call SteelFactory_CheckAllWires
	goto SteelFactory_1F_Wire3_10

SteelFactory_1F_Wire3_14:
# 344 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_PIN
# 345 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Wire1_Movement_0
# 346 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
# 347 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_AronNextMachine_Text, MSGBOX_AUTOCLOSE
# 348 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Wire3_Movement_0
# 349 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 18
# 350 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 18
# 351 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectxyperm 18, 25, 10
# 352 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_RIGHT
# 353 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	clearflag FLAG_STEEL_FACTORY_ARON_HIDDEN
# 354 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	addobject 18
	goto SteelFactory_1F_Wire3_13


SteelFactory_1F_Wire4::
# 362 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lock
# 363 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_WIRE_4_PULLED, SteelFactory_1F_Wire4_2
# 368 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire4_5
# 373 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_3_PULLED, SteelFactory_1F_Wire4_8
# 378 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_Prompt, MSGBOX_YESNO
# 379 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SteelFactory_1F_Wire4_11
SteelFactory_1F_Wire4_10:
# 399 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	return

SteelFactory_1F_Wire4_2:
# 364 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_AlreadyPulled
# 365 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire4_5:
# 369 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_NotReady
# 370 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire4_8:
# 374 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_NotReady
# 375 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire4_11:
# 380 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_WIRE_4_PULLED
# 381 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_CLICK
# 382 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitse
# 383 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire4_PulledText
# 384 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire4_14
SteelFactory_1F_Wire4_13:
# 397 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	call SteelFactory_CheckAllWires
	goto SteelFactory_1F_Wire4_10

SteelFactory_1F_Wire4_14:
# 385 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_PIN
# 386 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Wire1_Movement_0
# 387 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
# 388 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_AronNextMachine_Text, MSGBOX_AUTOCLOSE
# 389 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Wire4_Movement_0
# 390 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 18
# 391 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 18
# 392 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectxyperm 18, 35, 16
# 393 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_LEFT
# 394 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	clearflag FLAG_STEEL_FACTORY_ARON_HIDDEN
# 395 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	addobject 18
	goto SteelFactory_1F_Wire4_13


SteelFactory_1F_Wire5::
# 403 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lock
# 404 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_WIRE_5_PULLED, SteelFactory_1F_Wire5_2
# 409 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire5_5
# 414 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_4_PULLED, SteelFactory_1F_Wire5_8
# 419 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_Prompt, MSGBOX_YESNO
# 420 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SteelFactory_1F_Wire5_11
SteelFactory_1F_Wire5_10:
# 438 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	return

SteelFactory_1F_Wire5_2:
# 405 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_AlreadyPulled
# 406 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire5_5:
# 410 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_NotReady
# 411 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire5_8:
# 415 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire_NotReady
# 416 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end

SteelFactory_1F_Wire5_11:
# 421 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_WIRE_5_PULLED
# 422 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_CLICK
# 423 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitse
# 424 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_Wire5_PulledText
# 425 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire5_14
SteelFactory_1F_Wire5_13:
# 436 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	call SteelFactory_CheckAllWires
	goto SteelFactory_1F_Wire5_10

SteelFactory_1F_Wire5_14:
# 426 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_PIN
# 427 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Wire5_Movement_0
# 428 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 18
# 429 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_AronFarewell_Text, MSGBOX_AUTOCLOSE
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 18, SteelFactory_1F_Wire5_Movement_1
# 431 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 18
# 432 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 18
# 433 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_ARON_HIDDEN
# 434 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	clearflag FLAG_STEEL_FACTORY_ARON_GUIDING
	goto SteelFactory_1F_Wire5_13


SteelFactory_CheckAllWires::
# 442 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_1_PULLED, SteelFactory_CheckAllWires_2
# 445 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_2_PULLED, SteelFactory_CheckAllWires_5
# 448 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_3_PULLED, SteelFactory_CheckAllWires_8
# 451 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_4_PULLED, SteelFactory_CheckAllWires_11
# 454 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_5_PULLED, SteelFactory_CheckAllWires_14
# 457 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_ALL_WIRES_PULLED, SteelFactory_CheckAllWires_17
# 460 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_ALL_WIRES_PULLED
# 461 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 5, 20, 0x229, FALSE
# 462 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 6, 20, 0x229, FALSE
# 463 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 7, 20, 0x229, FALSE
# 464 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 5, 21, 0x229, FALSE
# 465 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 6, 21, 0x229, FALSE
# 466 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 7, 21, 0x229, FALSE
# 467 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_DOOR
# 468 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitse
# 469 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
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


SteelFactory_1F_CellPanel::
# 476 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 477 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 478 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_PIN
# 479 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 25, SteelFactory_1F_CellPanel_Movement_0
# 480 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 25
# 481 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	delay 120
# 482 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 483 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_FREED_POKEMON, SteelFactory_1F_CellPanel_2
# 488 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_ALL_WIRES_PULLED, SteelFactory_1F_CellPanel_5
# 493 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 25, SteelFactory_1F_CellPanel_Movement_1
# 494 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 25
# 495 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_PIN
# 496 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 25, SteelFactory_1F_Wire1_Movement_0
# 497 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 25
# 498 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq SteelFactory_1F_CellPanel_9
SteelFactory_1F_CellPanel_7:
# 503 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq SteelFactory_1F_CellPanel_14
SteelFactory_1F_CellPanel_12:
# 508 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_TEMP_0, 7
	goto_if_eq SteelFactory_1F_CellPanel_19
SteelFactory_1F_CellPanel_17:
# 513 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_CellPanel_Prompt, MSGBOX_YESNO
# 514 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SteelFactory_1F_CellPanel_23
# 527 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 5, SteelFactory_1F_CellPanel_Movement_10
# 528 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 5
# 529 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_1F_AronIntro_Movement_1
# 530 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_PIN
# 531 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 5, SteelFactory_1F_CellPanel_Movement_9
# 532 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 5
# 533 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_CellPanel_ScientistStop
# 534 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	trainerbattle_no_intro TRAINER_FACULTY_SCIENTIST_FACTORY1, SteelFactory_1F_CellPanel_ScientistDefeat
# 535 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto SteelFactory_1F_CellPanel_PostBattle
	return

SteelFactory_1F_CellPanel_2:
# 484 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_CellPanel_AlreadyFreed
# 485 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	end

SteelFactory_1F_CellPanel_5:
# 489 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_CellPanel_NotReady
# 490 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	end

SteelFactory_1F_CellPanel_8:
# 499 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 25, SteelFactory_1F_CellPanel_Movement_2
# 500 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_1F_CellPanel_Movement_3
# 501 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
	goto SteelFactory_1F_CellPanel_7

SteelFactory_1F_CellPanel_9:
# 498 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_TEMP_1, 36
	goto_if_eq SteelFactory_1F_CellPanel_8
	goto SteelFactory_1F_CellPanel_7

SteelFactory_1F_CellPanel_13:
# 504 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 25, SteelFactory_1F_CellPanel_Movement_4
# 505 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_1F_CellPanel_Movement_5
# 506 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
	goto SteelFactory_1F_CellPanel_12

SteelFactory_1F_CellPanel_14:
# 503 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_TEMP_1, 37
	goto_if_eq SteelFactory_1F_CellPanel_13
	goto SteelFactory_1F_CellPanel_12

SteelFactory_1F_CellPanel_18:
# 509 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 25, SteelFactory_1F_CellPanel_Movement_2
# 510 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_1F_CellPanel_Movement_6
# 511 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 0
	goto SteelFactory_1F_CellPanel_17

SteelFactory_1F_CellPanel_19:
# 508 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_TEMP_1, 36
	goto_if_eq SteelFactory_1F_CellPanel_18
	goto SteelFactory_1F_CellPanel_17

SteelFactory_1F_CellPanel_23:
# 515 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_CellPanel_NoRelease, MSGBOX_AUTOCLOSE
# 516 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_1F_CellPanel_Movement_7
# 517 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 25, SteelFactory_1F_CellPanel_Movement_8
# 518 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 25
# 519 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_PIN
# 520 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 25, SteelFactory_1F_CellPanel_Movement_9
# 521 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 25
# 522 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	end


SteelFactory_1F_CellPanel_PostBattle::
# 540 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_PIN
# 541 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 5, SteelFactory_1F_CellPanel_PostBattle_Movement_0
# 542 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 5
# 543 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_1F_CellPanel_Movement_1
# 544 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_CellPanel_PostBattle_Text_0, MSGBOX_AUTOCLOSE
# 545 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	delay 60
# 546 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_CellPanel_PressButton
# 547 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_CLICK
# 548 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitse
# 550 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_THUNDER
# 551 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	fadescreen FADE_TO_BLACK
# 552 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	delay 30
# 553 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 2, 33, 0x200, FALSE
# 554 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 3, 33, 0x200, FALSE
# 555 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 2, 34, 0x200, FALSE
# 556 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 3, 34, 0x200, FALSE
# 557 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 9, 32, 0x200, FALSE
# 558 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 10, 32, 0x200, FALSE
# 559 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 9, 33, 0x200, FALSE
# 560 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 10, 33, 0x200, FALSE
# 561 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 2, 40, 0x200, FALSE
# 562 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 3, 40, 0x200, FALSE
# 563 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 2, 41, 0x200, FALSE
# 564 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 3, 41, 0x200, FALSE
# 565 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 9, 39, 0x200, FALSE
# 566 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 10, 39, 0x200, FALSE
# 567 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 9, 40, 0x200, FALSE
# 568 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setmetatile 10, 40, 0x200, FALSE
# 569 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	special DrawWholeMapView
# 570 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 571 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	delay 30
# 572 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 573 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_DOOR
# 574 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitse
# 576 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 25, SteelFactory_1F_CellPanel_PostBattle_Movement_1
# 577 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 25
# 579 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
# 580 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmoncry
# 581 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_PIN
# 582 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_1F_CellPanel_PostBattle_Movement_2
# 583 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_CellPanel_MewCry, MSGBOX_AUTOCLOSE
# 584 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	delay 60
# 586 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_FREED_POKEMON
# 587 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_MEW_SAW_FACTORY_FREED
# 588 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_CHOICE_MADE
# 590 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_CELL_ARON_HIDDEN
# 592 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	addobject 26
# 593 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	addobject 27
# 594 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	addobject 28
# 595 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	addobject 29
# 596 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	addobject 30
# 597 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	addobject 31
# 598 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	addobject 32
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 26, SteelFactory_1F_CellPanel_PostBattle_Movement_3
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 27, SteelFactory_1F_CellPanel_PostBattle_Movement_4
# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 28, SteelFactory_1F_CellPanel_PostBattle_Movement_5
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 29, SteelFactory_1F_CellPanel_PostBattle_Movement_6
# 603 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 32, SteelFactory_1F_CellPanel_PostBattle_Movement_7
# 604 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 31, SteelFactory_1F_CellPanel_PostBattle_Movement_8
# 605 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 30, SteelFactory_1F_CellPanel_PostBattle_Movement_9
# 606 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 31
# 607 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 32
# 608 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 32, SteelFactory_1F_CellPanel_PostBattle_Movement_10
# 609 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 31, SteelFactory_1F_CellPanel_PostBattle_Movement_11
# 610 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 5, SteelFactory_1F_CellPanel_PostBattle_Movement_12
# 611 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 5
# 612 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	delay 120
# 613 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 26
# 614 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 27
# 615 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 28
# 616 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 29
# 617 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 31
# 618 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 32
# 619 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 5
# 620 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_PIN
# 621 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 25, SteelFactory_1F_CellPanel_PostBattle_Movement_13
# 622 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_1F_CellPanel_PostBattle_Movement_14
# 623 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	delay 120
# 624 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 25, SteelFactory_1F_CellPanel_PostBattle_Movement_15
# 625 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	delay 120
# 626 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 25, SteelFactory_1F_CellPanel_PostBattle_Movement_16
# 627 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	applymovement 30, SteelFactory_1F_CellPanel_PostBattle_Movement_17
# 628 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmovement 30
# 629 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 25
# 630 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	removeobject 30
# 631 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_POKEMON_CAGED
# 632 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_ControlPanel::
# 638 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lock
# 639 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_ControlPanel_Text
# 640 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	return


# 105 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_AronIntro_Movement_0:
# 105 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 105 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 105 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 105 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 105 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 105 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 105 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 105 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 105 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_left
	step_end

# 107 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_AronIntro_Movement_1:
# 107 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_right
	step_end

# 111 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_AronIntro_Movement_2:
# 111 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 111 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 111 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 111 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 111 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 111 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 111 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 111 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_up
	step_end

# 113 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_AronIntro_Movement_3:
# 113 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_down
	step_end

# 117 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_AronIntro_Movement_4:
# 117 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	emote_question_mark
	step_end

# 124 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_AronIntro_Movement_5:
# 124 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 124 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 124 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 124 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 124 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 124 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 124 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 124 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 124 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 124 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 124 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 124 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 124 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 124 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_left
	step_end

# 125 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_AronIntro_Movement_6:
# 125 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_right
# 125 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 125 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 125 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 125 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_right
# 125 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_right
# 125 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 125 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 125 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 125 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 125 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 125 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_left
# 125 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_left
# 125 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_left
# 125 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_up
	step_end

# 129 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_AronIntro_Movement_7:
# 129 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 129 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 129 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 129 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 129 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 129 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 129 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 129 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 129 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 129 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 129 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 129 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 129 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_left
	step_end

# 130 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_AronIntro_Movement_8:
# 130 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 130 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 130 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 130 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_right
# 130 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_right
# 130 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 130 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 130 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 130 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 130 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 130 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_left
# 130 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_left
# 130 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_left
# 130 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_up
	step_end

# 136 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_AronIntro_Movement_9:
# 136 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 136 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 136 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 136 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 136 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 136 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 136 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 136 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 136 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 136 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 136 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
	step_end

# 261 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_Wire1_Movement_0:
# 261 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	emote_exclamation_mark
	step_end

# 264 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_Wire1_Movement_1:
# 264 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 264 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 264 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 264 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 264 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 264 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 264 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 264 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 264 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 264 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 264 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 264 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 264 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 264 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 264 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
	step_end

# 307 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_Wire2_Movement_0:
# 307 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 307 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 307 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 307 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 307 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 307 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 307 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 307 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
	step_end

# 348 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_Wire3_Movement_0:
# 348 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 348 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 348 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 348 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 348 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 348 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 348 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 348 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 348 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 348 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
	step_end

# 389 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_Wire4_Movement_0:
# 389 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 389 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 389 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 389 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 389 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 389 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 389 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 389 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 389 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 389 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 389 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 389 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 389 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 389 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
	step_end

# 427 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_Wire5_Movement_0:
# 427 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	emote_exclamation_mark
# 427 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	jump_in_place_down
# 427 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_left
	step_end

# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_Wire5_Movement_1:
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 430 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
	step_end

# 479 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_Movement_0:
# 479 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	emote_question_mark
# 479 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	jump_in_place_down
	step_end

# 493 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_Movement_1:
# 493 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_up
	step_end

# 499 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_Movement_2:
# 499 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 499 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_up
	step_end

# 500 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_Movement_3:
# 500 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_right
# 500 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_up
	step_end

# 504 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_Movement_4:
# 504 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_left
# 504 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 504 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_right
# 504 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_up
	step_end

# 505 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_Movement_5:
# 505 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_up
# 505 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_up
	step_end

# 510 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_Movement_6:
# 510 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_left
# 510 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_up
	step_end

# 516 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_Movement_7:
# 516 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
	step_end

# 517 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_Movement_8:
# 517 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_left
# 517 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_up
# 517 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_right
# 517 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_up
	step_end

# 520 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_Movement_9:
# 520 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 527 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_Movement_10:
# 527 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 527 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 527 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 527 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 527 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 527 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 527 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 527 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 527 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 527 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 527 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_left
	step_end

# 541 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_PostBattle_Movement_0:
# 541 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 541 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 541 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 541 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 541 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_down
# 541 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	emote_exclamation_mark
	step_end

# 576 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_PostBattle_Movement_1:
# 576 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	emote_heart
# 576 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	jump_in_place_down
# 576 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_down
	step_end

# 582 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_PostBattle_Movement_2:
# 582 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_down
# 582 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	emote_question_mark
	step_end

# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_PostBattle_Movement_3:
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 599 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
	step_end

# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_PostBattle_Movement_4:
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 600 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
	step_end

# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_PostBattle_Movement_5:
# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 601 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
	step_end

# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_PostBattle_Movement_6:
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 602 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
	step_end

# 603 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_PostBattle_Movement_7:
# 603 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 603 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 603 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 603 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 603 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 603 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 603 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_left
	step_end

# 604 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_PostBattle_Movement_8:
# 604 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 604 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_down
# 604 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 604 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 604 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 604 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_up
	step_end

# 605 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_PostBattle_Movement_9:
# 605 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 605 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 605 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_right
	step_end

# 608 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_PostBattle_Movement_10:
# 608 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 608 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 608 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 608 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 608 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 608 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
	step_end

# 609 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_PostBattle_Movement_11:
# 609 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 609 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 609 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 609 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 609 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
	step_end

# 610 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_PostBattle_Movement_12:
# 610 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	jump_2_up
# 610 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	jump_2_up
	step_end

# 621 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_PostBattle_Movement_13:
# 621 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 621 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 621 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 621 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_left
# 621 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	emote_heart
# 621 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	jump_in_place_left
	step_end

# 622 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_PostBattle_Movement_14:
# 622 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_left
	step_end

# 624 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_PostBattle_Movement_15:
# 624 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_down
# 624 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	face_right
# 624 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	emote_heart
	step_end

# 626 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_PostBattle_Movement_16:
# 626 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 626 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 626 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 626 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 626 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 626 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 626 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 626 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 626 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
	step_end

# 627 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
SteelFactory_1F_CellPanel_PostBattle_Movement_17:
# 627 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_right
# 627 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_right
# 627 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 627 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_right
# 627 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 627 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 627 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 627 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
# 627 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	walk_fast_up
	step_end

SteelFactory_1F_AronIntro_Text_0:
# 120 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Aron scuttled away!$"

SteelFactory_1F_CellPanel_PostBattle_Text_0:
# 544 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "I'm telling you, don't do it!$"

SteelFactory_1F_ControlPanel_Text::
# 645 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "SPECIMEN MANAGEMENT REPORT - LAIRON\n"
	.string "UNIT\p"
	.string "- Lairon specimens are bred on-site\n"
	.string "across three generation cycles.\p"
	.string "Primary function: consumption of\n"
	.string "impurity-heavy ore.\p"
	.string "Digestive processing yields a refined\n"
	.string "iron output that exceeds all known\l"
	.string "industrial alternatives.\p"
	.string "Specimens are housed in sealed\n"
	.string "containment bays.\p"
	.string "Deployment to the work floor occurs in\n"
	.string "scheduled intervals only.\p"
	.string "Extended unsupervised contact with\n"
	.string "personnel is not permitted.\p"
	.string "- Compliance protocol: Magnemite units\n"
	.string "are stationed at the main entrance.\p"
	.string "Specimens that resist handling or\n"
	.string "refuse to process ore are subject to\l"
	.string "low-voltage deterrent discharge.\p"
	.string "Rate of non-compliance has decreased\n"
	.string "significantly since protocol\l"
	.string "implementation.\p"
	.string "Note: specimens show elevated stress\n"
	.string "indicators during transition periods.\p"
	.string "This is expected and does not affect\n"
	.string "output quality.-$"

SteelFactory_1F_Scientist_Lore1_Text::
# 649 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
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
# 653 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "This is a restricted area!\p"
	.string "Leave immediately or I'm calling\n"
	.string "security!$"

SteelFactory_1F_Scientist_Lore3_Text::
# 657 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The ore from Lions Mountains is unlike\n"
	.string "anything we've catalogued.\p"
	.string "Dense with ancient energy.\p"
	.string "The Pokemon here can sense it - it\n"
	.string "makes them... compliant.\p"
	.string "That's what The Rector calls it.\n"
	.string "Compliant.$"

SteelFactory_1F_Scientist_Lore4_Text::
# 661 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Registeel is just a small piece of the\n"
	.string "puzzle.\p"
	.string "However, it does help us build metal\n"
	.string "structures that can bring order to\l"
	.string "even the most chaotic places.\p"
	.string "The Rector seems to have found a way\n"
	.string "to incentivize it.\p"
	.string "I try not to think about the details.$"

SteelFactory_1F_Scientist_Lore5_Text::
# 665 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The electro-magnetic resonance from\n"
	.string "the Magnemite cluster amplifies the\l"
	.string "metal's conductivity tenfold.\p"
	.string "Add the origin of the ore to the\n"
	.string "equation and we're making something\l"
	.string "the Regis would recognize as their own.$"

SteelFactory_1F_Official_Lore1_Text::
# 669 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Teressa is a beautiful region.\p"
	.string "But it's wasted on chaos.\p"
	.string "Dozens of mutations, dozens of types,\n"
	.string "no cohesion, no direction.\p"
	.string "We are going to change that.\p"
	.string "One processed metric ton at a time.$"

SteelFactory_1F_Official_Lore2_Text::
# 673 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Faculty destroying diversity?\p"
	.string "We organize it.\p"
	.string "Everything in its right place.\p"
	.string "Everyone with a clear role.\p"
	.string "Is that really so terrible?$"

SteelFactory_1F_Official_Lore3_Text::
# 677 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Pokemon working here are fed,\n"
	.string "sheltered, and given purpose.\p"
	.string "That's more than most wild Pokemon get.\p"
	.string "It's not cruelty. It's efficiency.\p"
	.string "At least... that's what we tell\n"
	.string "ourselves.$"

SteelFactory_1F_Scientist1_Intro::
# 681 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "A trespasser?!\p"
	.string "I'll neutralize you with cold, hard\n"
	.string "science!$"

SteelFactory_1F_Scientist1_Defeat::
# 685 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Unacceptable.\p"
	.string "My data... completely disrupted...$"

SteelFactory_1F_Scientist1_PostBattle::
# 689 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "How can something that disorganized\n"
	.string "defeat me?!$"

SteelFactory_1F_Scientist2_Intro::
# 693 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Security breach detected!\p"
	.string "Initiating containment protocol!\p"
	.string "Which is to say - I will fight you!$"

SteelFactory_1F_Scientist2_Defeat::
# 697 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "My containment protocol... failed.\p"
	.string "This is extremely irregular.$"

SteelFactory_1F_Scientist2_PostBattle::
# 701 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Rector is going to hear about this\n"
	.string "data anomaly.$"

SteelFactory_1F_Official1_Intro::
# 705 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Nobody disrupts Faculty operations and\n"
	.string "walks away, intruder.\p"
	.string "Order will be maintained!\p"
	.string "Starting with you!$"

SteelFactory_1F_Official1_Defeat::
# 709 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Extraordinary.\p"
	.string "You've upended three months of\n"
	.string "production schedules.$"

SteelFactory_1F_Official1_PostBattle::
# 713 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "...\p"
	.string "You'll want to turn around before you\n"
	.string "reach the upper floors.$"

SteelFactory_1F_Official2_Intro::
# 717 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "I don't know who let you in, but your\n"
	.string "little tour ends here.\p"
	.string "The Faculty's order demands it!$"

SteelFactory_1F_Official2_Defeat::
# 721 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Chaos wins the battle.\p"
	.string "But it always loses the war.$"

SteelFactory_1F_Official2_PostBattle::
# 725 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Don't say I didn't warn you.$"

SteelFactory_1F_Official3_Intro::
# 729 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Nobody reaches The Rector's floor\n"
	.string "without going through me.\p"
	.string "The Faculty's order demands it.\p"
	.string "And I am very orderly.$"

SteelFactory_1F_Official3_Defeat::
# 733 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Impossible.\p"
	.string "You... you're chaos incarnate.$"

SteelFactory_1F_Official3_PostBattle::
# 737 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Rector is on the second floor. Face\n"
	.string "him, if you dare.$"

SteelFactory_1F_Panel_Prompt::
# 742 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "POKEMON CONTAINMENT OVERRIDE -\n"
	.string "EMERGENCY RELEASE -\p"
	.string "Decades of Pokemon are held in these\n"
	.string "bays, forced to power the facility.\l"
	.string "Machop, Aron, Magnemite... and something\l"
	.string "much larger.\p"
	.string "Do you release them?$"

SteelFactory_1F_Panel_FreeSequence::
# 746 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
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
# 750 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "A soft cry echoes from somewhere deep\n"
	.string "in the factory walls.\p"
	.string "You sense something watching.\p"
	.string "Something that has been watching for a\n"
	.string "very long time.$"

SteelFactory_1F_Panel_Left::
# 754 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "You step back from the panel.\p"
	.string "The machines keep running.\p"
	.string "The Pokemon keep working.$"

SteelFactory_1F_Panel_MewLeft::
# 758 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "A faint cry carries through the steel\n"
	.string "walls.\p"
	.string "You almost missed it.$"

SteelFactory_1F_Panel_AlreadyFreed::
# 762 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The containment bays are open.\p"
	.string "The Pokemon are free.$"

SteelFactory_1F_Panel_AlreadyLeft::
# 766 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The panel flickers.\p"
	.string "The Pokemon continue their labor.$"

SteelFactory_Wire_Prompt::
# 770 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "A thick cable runs from this machine\n"
	.string "into the wall.\p"
	.string "It looks like it keeps something\n"
	.string "running.\p"
	.string "Disconnect the wire?$"

SteelFactory_Wire_AlreadyPulled::
# 774 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The wire hangs loose from the machine.\p"
	.string "It's already been disconnected.$"

SteelFactory_Wire_NotReady::
# 778 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "A thick cable runs from this machine\n"
	.string "into the wall.\p"
	.string "You leave it alone.$"

SteelFactory_Wire1_PulledText::
# 782 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "You grip the cable and pull.\p"
	.string "It comes free with a sharp click.\p"
	.string "The machine goes dark.$"

SteelFactory_Wire2_PulledText::
# 786 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The cable resists briefly, then snaps\n"
	.string "free. Click.\p"
	.string "Another machine falls silent.$"

SteelFactory_Wire3_PulledText::
# 790 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "You work the cable loose from its\n"
	.string "housing. Click.\p"
	.string "The hum in this corner of the factory\n"
	.string "dies.$"

SteelFactory_Wire4_PulledText::
# 794 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The thick cable pulls free with a hollow\n"
	.string "click.\p"
	.string "Somewhere above, a light flickers out.$"

SteelFactory_Wire5_PulledText::
# 798 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The last cable.\p"
	.string "You pull it free. Click.\p"
	.string "A deep silence falls over the machines\n"
	.string "around you.$"

SteelFactory_AllWires_Text::
# 802 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "A low groan of shifting metal...\p"
	.string "Deep in the factory, something heavy\n"
	.string "has moved.$"

SteelFactory_Aron_Interact_Text::
# 806 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Aron glances up at you, then turns\n"
	.string "back to the machine.$"

SteelFactory_AronIntro_Text::
# 810 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "... the small Aron seems stressed.\p"
	.string "It seems desperate to show you\n"
	.string "something.\p"
	.string "Follow it? The Rector might escape...$"

SteelFactory_AronFollow_Text::
# 814 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Hmm... must be something with the\n"
	.string "machine...\p"
	.string "It's trying to pull something from the\n"
	.string "machine.\p"
	.string "It looks like it's trying to disconnect\n"
	.string "a wire?$"

SteelFactory_AronLeave_Text::
# 818 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Aron's head droops.\p"
	.string "It retreats behind some steel beams.\p"
	.string "The factory keeps humming.$"

SteelFactory_AronNextMachine_Text::
# 822 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Aron looks pleased. It scurries\n"
	.string "ahead to the next machine.$"

SteelFactory_AronFarewell_Text::
# 826 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Aron seems grateful for your help.\p"
	.string "What could it be trying to say?\p"
	.string "I think it's wanting me to follow it one\n"
	.string "last time...$"

SteelFactory_1F_CellPanel_AlreadyFreed::
# 830 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The cell doors hang open.\p"
	.string "There's nothing left to release.$"

SteelFactory_1F_CellPanel_NotReady::
# 834 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "A reinforced control panel.\p"
	.string "It's on lockdown. The internal power\n"
	.string "must still be running.$"

SteelFactory_1F_CellPanel_Prompt::
# 838 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Aron stares at the release panel,\n"
	.string "unblinking.\p"
	.string "I think it wants me to push the\n"
	.string "buttons.\p"
	.string "Press RELEASE?$"

SteelFactory_1F_CellPanel_NoRelease::
# 842 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "You step back from the panel.\p"
	.string "The Aron's gaze drops to the floor.$"

SteelFactory_1F_CellPanel_ScientistStop::
# 846 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "WAIT!\p"
	.string "You have no idea what you're doing!\p"
	.string "Those specimens are irreplaceable\n"
	.string "research assets!$"

SteelFactory_1F_CellPanel_ScientistBattle::
# 850 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "I will not let you touch that panel!$"

SteelFactory_1F_CellPanel_ScientistDefeat::
# 854 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "No... the research... all of it...$"

SteelFactory_1F_CellPanel_ScientistNeedTwo::
# 858 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "You need at least two Pokemon\n"
	.string "to take on this battle!$"

SteelFactory_1F_CellPanel_PressButton::
# 862 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "You press RELEASE.\p"
	.string "A deep shudder runs through the floor.$"

SteelFactory_1F_CellPanel_MewCry::
# 866 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "...\p"
	.string "What was that sound?$"
