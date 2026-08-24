LionsarchCity_Steel_Factory_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, LionsarchCity_Steel_Factory_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

LionsarchCity_Steel_Factory_MapScripts_MAP_SCRIPT_ON_LOAD:
	call SteelFactory_1F_OnTransition
	return


SteelFactory_1F_OnTransition::
	goto_if_unset FLAG_STEEL_FACTORY_ALL_WIRES_PULLED, SteelFactory_1F_OnTransition_2
SteelFactory_1F_OnTransition_1:
	goto_if_set FLAG_STEEL_FACTORY_ALL_WIRES_PULLED, SteelFactory_1F_OnTransition_5
SteelFactory_1F_OnTransition_4:
	goto_if_unset FLAG_STEEL_FACTORY_FREED_POKEMON, SteelFactory_1F_OnTransition_8
SteelFactory_1F_OnTransition_7:
	goto_if_set FLAG_STEEL_FACTORY_FREED_POKEMON, SteelFactory_1F_OnTransition_14
SteelFactory_1F_OnTransition_13:
	goto_if_set FLAG_STEEL_FACTORY_ALL_WIRES_PULLED, SteelFactory_1F_OnTransition_19
SteelFactory_1F_OnTransition_18:
	goto_if_unset FLAG_STEEL_FACTORY_ARON_INTRO_DONE, SteelFactory_1F_OnTransition_22
	goto_if_unset FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_OnTransition_25
	goto_if_set FLAG_STEEL_FACTORY_ALL_WIRES_PULLED, SteelFactory_1F_OnTransition_28
	clearflag FLAG_STEEL_FACTORY_ARON_HIDDEN
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_1_PULLED, SteelFactory_1F_OnTransition_31
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_2_PULLED, SteelFactory_1F_OnTransition_34
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_3_PULLED, SteelFactory_1F_OnTransition_37
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_4_PULLED, SteelFactory_1F_OnTransition_40
	setobjectxyperm 18, 35, 16
	end

SteelFactory_1F_OnTransition_2:
	setflag FLAG_STEEL_FACTORY_CELL_ARON_HIDDEN
	goto SteelFactory_1F_OnTransition_1

SteelFactory_1F_OnTransition_5:
	goto_if_unset FLAG_STEEL_FACTORY_FREED_POKEMON, SteelFactory_1F_OnTransition_11
SteelFactory_1F_OnTransition_10:
	goto_if_set FLAG_STEEL_FACTORY_FREED_POKEMON, SteelFactory_1F_OnTransition_16
	goto SteelFactory_1F_OnTransition_4

SteelFactory_1F_OnTransition_8:
	setflag FLAG_STEEL_FACTORY_POKEMON_CAGED
	goto SteelFactory_1F_OnTransition_7

SteelFactory_1F_OnTransition_11:
	clearflag FLAG_STEEL_FACTORY_CELL_ARON_HIDDEN
	goto SteelFactory_1F_OnTransition_10

SteelFactory_1F_OnTransition_14:
	setmetatile 2, 33, 0x200, FALSE
	setmetatile 3, 33, 0x200, FALSE
	setmetatile 2, 34, 0x200, FALSE
	setmetatile 3, 34, 0x200, FALSE
	setmetatile 9, 32, 0x200, FALSE
	setmetatile 10, 32, 0x200, FALSE
	setmetatile 9, 33, 0x200, FALSE
	setmetatile 10, 33, 0x200, FALSE
	setmetatile 2, 40, 0x200, FALSE
	setmetatile 3, 40, 0x200, FALSE
	setmetatile 2, 41, 0x200, FALSE
	setmetatile 3, 41, 0x200, FALSE
	setmetatile 9, 39, 0x200, FALSE
	setmetatile 10, 39, 0x200, FALSE
	setmetatile 9, 40, 0x200, FALSE
	setmetatile 10, 40, 0x200, FALSE
	goto SteelFactory_1F_OnTransition_13

SteelFactory_1F_OnTransition_16:
	setflag FLAG_STEEL_FACTORY_CELL_ARON_HIDDEN
	goto SteelFactory_1F_OnTransition_4

SteelFactory_1F_OnTransition_19:
	setmetatile 5, 20, 0x229, FALSE
	setmetatile 6, 20, 0x229, FALSE
	setmetatile 7, 20, 0x229, FALSE
	setmetatile 5, 21, 0x229, FALSE
	setmetatile 6, 21, 0x229, FALSE
	setmetatile 7, 21, 0x229, FALSE
	goto SteelFactory_1F_OnTransition_18

SteelFactory_1F_OnTransition_22:
	setflag FLAG_STEEL_FACTORY_ARON_HIDDEN
	setobjectxyperm 18, 4, 12
	end

SteelFactory_1F_OnTransition_25:
	setflag FLAG_STEEL_FACTORY_ARON_HIDDEN
	end

SteelFactory_1F_OnTransition_28:
	setflag FLAG_STEEL_FACTORY_ARON_HIDDEN
	end

SteelFactory_1F_OnTransition_31:
	setobjectxyperm 18, 2, 13
	end

SteelFactory_1F_OnTransition_34:
	setobjectxyperm 18, 12, 7
	end

SteelFactory_1F_OnTransition_37:
	setobjectxyperm 18, 21, 23
	end

SteelFactory_1F_OnTransition_40:
	setobjectxyperm 18, 25, 10
	end


SteelFactory_1F_Aron_Interact::
	call SteelFactory_1F_CellPanel
	end


SteelFactory_1F_AronIntro::
	goto_if_set FLAG_STEEL_FACTORY_ARON_INTRO_DONE, SteelFactory_1F_AronIntro_2
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	setflag FLAG_STEEL_FACTORY_ARON_INTRO_DONE
	lockall
	addobject 18
	compare VAR_TEMP_0, 1
	goto_if_eq SteelFactory_1F_AronIntro_5
SteelFactory_1F_AronIntro_4:
	compare VAR_TEMP_0, 2
	goto_if_eq SteelFactory_1F_AronIntro_8
SteelFactory_1F_AronIntro_7:
	playse SE_PIN
	applymovement 18, SteelFactory_1F_AronIntro_Movement_4
	waitmovement 0
	msgbox SteelFactory_AronIntro_Text, MSGBOX_YESNO
	msgbox SteelFactory_1F_AronIntro_Text_0, MSGBOX_AUTOCLOSE
	compare VAR_RESULT, YES
	goto_if_eq SteelFactory_1F_AronIntro_11
	applymovement 18, SteelFactory_1F_AronIntro_Movement_9
	waitmovement 0
	msgbox SteelFactory_AronLeave_Text
	removeobject 18
	setflag FLAG_STEEL_FACTORY_ARON_HIDDEN
SteelFactory_1F_AronIntro_10:
	releaseall
	return

SteelFactory_1F_AronIntro_2:
	end

SteelFactory_1F_AronIntro_5:
	applymovement 18, SteelFactory_1F_AronIntro_Movement_0
	waitmovement
	applymovement LOCALID_PLAYER, SteelFactory_1F_AronIntro_Movement_1
	waitmovement 0
	goto SteelFactory_1F_AronIntro_4

SteelFactory_1F_AronIntro_8:
	applymovement 18, SteelFactory_1F_AronIntro_Movement_2
	waitmovement
	applymovement LOCALID_PLAYER, SteelFactory_1F_AronIntro_Movement_3
	waitmovement 0
	goto SteelFactory_1F_AronIntro_7

SteelFactory_1F_AronIntro_11:
	setflag FLAG_STEEL_FACTORY_ARON_GUIDING
	compare VAR_TEMP_0, 1
	goto_if_eq SteelFactory_1F_AronIntro_15
SteelFactory_1F_AronIntro_14:
	compare VAR_TEMP_0, 2
	goto_if_eq SteelFactory_1F_AronIntro_18
SteelFactory_1F_AronIntro_17:
	msgbox SteelFactory_AronFollow_Text
	waitmovement 0
	goto SteelFactory_1F_AronIntro_10

SteelFactory_1F_AronIntro_15:
	applymovement 18, SteelFactory_1F_AronIntro_Movement_5
	applymovement LOCALID_PLAYER, SteelFactory_1F_AronIntro_Movement_6
	waitmovement 0
	goto SteelFactory_1F_AronIntro_14

SteelFactory_1F_AronIntro_18:
	applymovement 18, SteelFactory_1F_AronIntro_Movement_7
	applymovement LOCALID_PLAYER, SteelFactory_1F_AronIntro_Movement_8
	waitmovement 0
	goto SteelFactory_1F_AronIntro_17


SteelFactory_1F_Scientist_Lore1::
	lockall
	faceplayer
	msgbox SteelFactory_1F_Scientist_Lore1_Text
	releaseall
	return


SteelFactory_1F_Scientist_Lore2::
	lockall
	faceplayer
	msgbox SteelFactory_1F_Scientist_Lore2_Text
	releaseall
	return


SteelFactory_1F_Scientist_Lore3::
	lockall
	faceplayer
	msgbox SteelFactory_1F_Scientist_Lore3_Text
	releaseall
	return


SteelFactory_1F_Scientist_Lore4::
	lockall
	faceplayer
	msgbox SteelFactory_1F_Scientist_Lore4_Text
	releaseall
	return


SteelFactory_1F_Scientist_Lore5::
	lockall
	faceplayer
	msgbox SteelFactory_1F_Scientist_Lore5_Text
	releaseall
	return


SteelFactory_1F_Official_Lore1::
	lockall
	faceplayer
	msgbox SteelFactory_1F_Official_Lore1_Text
	releaseall
	return


SteelFactory_1F_Official_Lore2::
	lockall
	faceplayer
	msgbox SteelFactory_1F_Official_Lore2_Text
	releaseall
	return


SteelFactory_1F_Official_Lore3::
	lockall
	faceplayer
	msgbox SteelFactory_1F_Official_Lore3_Text
	releaseall
	return


SteelFactory_1F_Scientist_Battle1::
	trainerbattle_single TRAINER_FACULTY_SCIENTIST_1, SteelFactory_1F_Scientist1_Intro, SteelFactory_1F_Scientist1_Defeat
	msgbox SteelFactory_1F_Scientist1_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_1F_Scientist_Battle2::
	trainerbattle_single TRAINER_FACULTY_SCIENTIST_2, SteelFactory_1F_Scientist2_Intro, SteelFactory_1F_Scientist2_Defeat
	msgbox SteelFactory_1F_Scientist2_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_1F_Official_Battle1::
	trainerbattle_single TRAINER_FACULTY_OFFICIAL_1, SteelFactory_1F_Official1_Intro, SteelFactory_1F_Official1_Defeat
	msgbox SteelFactory_1F_Official1_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_1F_Official_Battle2::
	trainerbattle_single TRAINER_FACULTY_OFFICIAL_2, SteelFactory_1F_Official2_Intro, SteelFactory_1F_Official2_Defeat
	msgbox SteelFactory_1F_Official2_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_1F_Official_Battle3::
	trainerbattle_single TRAINER_FACULTY_OFFICIAL_3, SteelFactory_1F_Official3_Intro, SteelFactory_1F_Official3_Defeat
	msgbox SteelFactory_1F_Official3_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_1F_Wire1::
	lock
	goto_if_set FLAG_STEEL_FACTORY_WIRE_1_PULLED, SteelFactory_1F_Wire1_2
	goto_if_unset FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire1_5
	msgbox SteelFactory_Wire_Prompt, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SteelFactory_1F_Wire1_8
SteelFactory_1F_Wire1_7:
	release
	return

SteelFactory_1F_Wire1_2:
	msgbox SteelFactory_Wire_AlreadyPulled
	release
	end

SteelFactory_1F_Wire1_5:
	msgbox SteelFactory_Wire_NotReady
	release
	end

SteelFactory_1F_Wire1_8:
	setflag FLAG_STEEL_FACTORY_WIRE_1_PULLED
	playse SE_CLICK
	waitse
	msgbox SteelFactory_Wire1_PulledText
	goto_if_set FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire1_11
SteelFactory_1F_Wire1_10:
	call SteelFactory_CheckAllWires
	goto SteelFactory_1F_Wire1_7

SteelFactory_1F_Wire1_11:
	playse SE_PIN
	applymovement 18, SteelFactory_1F_Wire1_Movement_0
	waitmovement 0
	msgbox SteelFactory_AronNextMachine_Text, MSGBOX_AUTOCLOSE
	applymovement 18, SteelFactory_1F_Wire1_Movement_1
	waitmovement 18
	removeobject 18
	setobjectxyperm 18, 12, 7
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_RIGHT
	clearflag FLAG_STEEL_FACTORY_ARON_HIDDEN
	addobject 18
	goto SteelFactory_1F_Wire1_10


SteelFactory_1F_Wire2::
	lock
	goto_if_set FLAG_STEEL_FACTORY_WIRE_2_PULLED, SteelFactory_1F_Wire2_2
	goto_if_unset FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire2_5
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_1_PULLED, SteelFactory_1F_Wire2_8
	msgbox SteelFactory_Wire_Prompt, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SteelFactory_1F_Wire2_11
SteelFactory_1F_Wire2_10:
	release
	return

SteelFactory_1F_Wire2_2:
	msgbox SteelFactory_Wire_AlreadyPulled
	release
	end

SteelFactory_1F_Wire2_5:
	msgbox SteelFactory_Wire_NotReady
	release
	end

SteelFactory_1F_Wire2_8:
	msgbox SteelFactory_Wire_NotReady
	release
	end

SteelFactory_1F_Wire2_11:
	setflag FLAG_STEEL_FACTORY_WIRE_2_PULLED
	playse SE_CLICK
	waitse
	msgbox SteelFactory_Wire2_PulledText
	goto_if_set FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire2_14
SteelFactory_1F_Wire2_13:
	call SteelFactory_CheckAllWires
	goto SteelFactory_1F_Wire2_10

SteelFactory_1F_Wire2_14:
	playse SE_PIN
	applymovement 18, SteelFactory_1F_Wire1_Movement_0
	waitmovement 0
	msgbox SteelFactory_AronNextMachine_Text, MSGBOX_AUTOCLOSE
	applymovement 18, SteelFactory_1F_Wire2_Movement_0
	waitmovement 18
	removeobject 18
	setobjectxyperm 18, 21, 23
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_DOWN
	clearflag FLAG_STEEL_FACTORY_ARON_HIDDEN
	addobject 18
	goto SteelFactory_1F_Wire2_13


SteelFactory_1F_Wire3::
	lockall
	goto_if_set FLAG_STEEL_FACTORY_WIRE_3_PULLED, SteelFactory_1F_Wire3_2
	goto_if_unset FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire3_5
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_2_PULLED, SteelFactory_1F_Wire3_8
	msgbox SteelFactory_Wire_Prompt, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SteelFactory_1F_Wire3_11
SteelFactory_1F_Wire3_10:
	releaseall
	return

SteelFactory_1F_Wire3_2:
	msgbox SteelFactory_Wire_AlreadyPulled
	releaseall
	end

SteelFactory_1F_Wire3_5:
	msgbox SteelFactory_Wire_NotReady
	releaseall
	end

SteelFactory_1F_Wire3_8:
	msgbox SteelFactory_Wire_NotReady
	releaseall
	end

SteelFactory_1F_Wire3_11:
	setflag FLAG_STEEL_FACTORY_WIRE_3_PULLED
	playse SE_CLICK
	waitse
	msgbox SteelFactory_Wire3_PulledText
	goto_if_set FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire3_14
SteelFactory_1F_Wire3_13:
	call SteelFactory_CheckAllWires
	goto SteelFactory_1F_Wire3_10

SteelFactory_1F_Wire3_14:
	playse SE_PIN
	applymovement 18, SteelFactory_1F_Wire1_Movement_0
	waitmovement 0
	msgbox SteelFactory_AronNextMachine_Text, MSGBOX_AUTOCLOSE
	applymovement 18, SteelFactory_1F_Wire3_Movement_0
	waitmovement 18
	removeobject 18
	setobjectxyperm 18, 25, 10
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_RIGHT
	clearflag FLAG_STEEL_FACTORY_ARON_HIDDEN
	addobject 18
	goto SteelFactory_1F_Wire3_13


SteelFactory_1F_Wire4::
	lock
	goto_if_set FLAG_STEEL_FACTORY_WIRE_4_PULLED, SteelFactory_1F_Wire4_2
	goto_if_unset FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire4_5
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_3_PULLED, SteelFactory_1F_Wire4_8
	msgbox SteelFactory_Wire_Prompt, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SteelFactory_1F_Wire4_11
SteelFactory_1F_Wire4_10:
	release
	return

SteelFactory_1F_Wire4_2:
	msgbox SteelFactory_Wire_AlreadyPulled
	release
	end

SteelFactory_1F_Wire4_5:
	msgbox SteelFactory_Wire_NotReady
	release
	end

SteelFactory_1F_Wire4_8:
	msgbox SteelFactory_Wire_NotReady
	release
	end

SteelFactory_1F_Wire4_11:
	setflag FLAG_STEEL_FACTORY_WIRE_4_PULLED
	playse SE_CLICK
	waitse
	msgbox SteelFactory_Wire4_PulledText
	goto_if_set FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire4_14
SteelFactory_1F_Wire4_13:
	call SteelFactory_CheckAllWires
	goto SteelFactory_1F_Wire4_10

SteelFactory_1F_Wire4_14:
	playse SE_PIN
	applymovement 18, SteelFactory_1F_Wire1_Movement_0
	waitmovement 0
	msgbox SteelFactory_AronNextMachine_Text, MSGBOX_AUTOCLOSE
	applymovement 18, SteelFactory_1F_Wire4_Movement_0
	waitmovement 18
	removeobject 18
	setobjectxyperm 18, 35, 16
	setobjectmovementtype 18, MOVEMENT_TYPE_FACE_LEFT
	clearflag FLAG_STEEL_FACTORY_ARON_HIDDEN
	addobject 18
	goto SteelFactory_1F_Wire4_13


SteelFactory_1F_Wire5::
	lock
	goto_if_set FLAG_STEEL_FACTORY_WIRE_5_PULLED, SteelFactory_1F_Wire5_2
	goto_if_unset FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire5_5
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_4_PULLED, SteelFactory_1F_Wire5_8
	msgbox SteelFactory_Wire_Prompt, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SteelFactory_1F_Wire5_11
SteelFactory_1F_Wire5_10:
	release
	return

SteelFactory_1F_Wire5_2:
	msgbox SteelFactory_Wire_AlreadyPulled
	release
	end

SteelFactory_1F_Wire5_5:
	msgbox SteelFactory_Wire_NotReady
	release
	end

SteelFactory_1F_Wire5_8:
	msgbox SteelFactory_Wire_NotReady
	release
	end

SteelFactory_1F_Wire5_11:
	setflag FLAG_STEEL_FACTORY_WIRE_5_PULLED
	playse SE_CLICK
	waitse
	msgbox SteelFactory_Wire5_PulledText
	goto_if_set FLAG_STEEL_FACTORY_ARON_GUIDING, SteelFactory_1F_Wire5_14
SteelFactory_1F_Wire5_13:
	call SteelFactory_CheckAllWires
	goto SteelFactory_1F_Wire5_10

SteelFactory_1F_Wire5_14:
	playse SE_PIN
	applymovement 18, SteelFactory_1F_Wire5_Movement_0
	waitmovement 18
	msgbox SteelFactory_AronFarewell_Text, MSGBOX_AUTOCLOSE
	applymovement 18, SteelFactory_1F_Wire5_Movement_1
	waitmovement 18
	removeobject 18
	setflag FLAG_STEEL_FACTORY_ARON_HIDDEN
	clearflag FLAG_STEEL_FACTORY_ARON_GUIDING
	goto SteelFactory_1F_Wire5_13


SteelFactory_CheckAllWires::
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_1_PULLED, SteelFactory_CheckAllWires_2
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_2_PULLED, SteelFactory_CheckAllWires_5
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_3_PULLED, SteelFactory_CheckAllWires_8
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_4_PULLED, SteelFactory_CheckAllWires_11
	goto_if_unset FLAG_STEEL_FACTORY_WIRE_5_PULLED, SteelFactory_CheckAllWires_14
	goto_if_set FLAG_STEEL_FACTORY_ALL_WIRES_PULLED, SteelFactory_CheckAllWires_17
	setflag FLAG_STEEL_FACTORY_ALL_WIRES_PULLED
	setmetatile 5, 20, 0x229, FALSE
	setmetatile 6, 20, 0x229, FALSE
	setmetatile 7, 20, 0x229, FALSE
	setmetatile 5, 21, 0x229, FALSE
	setmetatile 6, 21, 0x229, FALSE
	setmetatile 7, 21, 0x229, FALSE
	playse SE_DOOR
	waitse
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
	lockall
	faceplayer
	playse SE_PIN
	applymovement 25, SteelFactory_1F_CellPanel_Movement_0
	waitmovement 25
	delay 120
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	goto_if_set FLAG_STEEL_FACTORY_FREED_POKEMON, SteelFactory_1F_CellPanel_2
	goto_if_unset FLAG_STEEL_FACTORY_ALL_WIRES_PULLED, SteelFactory_1F_CellPanel_5
	applymovement 25, SteelFactory_1F_CellPanel_Movement_1
	waitmovement 25
	playse SE_PIN
	applymovement 25, SteelFactory_1F_Wire1_Movement_0
	waitmovement 25
	compare VAR_TEMP_0, 5
	goto_if_eq SteelFactory_1F_CellPanel_9
SteelFactory_1F_CellPanel_7:
	compare VAR_TEMP_0, 6
	goto_if_eq SteelFactory_1F_CellPanel_14
SteelFactory_1F_CellPanel_12:
	compare VAR_TEMP_0, 7
	goto_if_eq SteelFactory_1F_CellPanel_19
SteelFactory_1F_CellPanel_17:
	msgbox SteelFactory_1F_CellPanel_Prompt, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SteelFactory_1F_CellPanel_23
	applymovement 5, SteelFactory_1F_CellPanel_Movement_10
	waitmovement 5
	applymovement LOCALID_PLAYER, SteelFactory_1F_AronIntro_Movement_1
	playse SE_PIN
	applymovement 5, SteelFactory_1F_CellPanel_Movement_9
	waitmovement 5
	msgbox SteelFactory_1F_CellPanel_ScientistStop
	trainerbattle_no_intro TRAINER_FACULTY_SCIENTIST_FACTORY1, SteelFactory_1F_CellPanel_ScientistDefeat
	goto SteelFactory_1F_CellPanel_PostBattle
	return

SteelFactory_1F_CellPanel_2:
	msgbox SteelFactory_1F_CellPanel_AlreadyFreed
	releaseall
	end

SteelFactory_1F_CellPanel_5:
	msgbox SteelFactory_1F_CellPanel_NotReady
	releaseall
	end

SteelFactory_1F_CellPanel_8:
	applymovement 25, SteelFactory_1F_CellPanel_Movement_2
	applymovement LOCALID_PLAYER, SteelFactory_1F_CellPanel_Movement_3
	waitmovement 0
	goto SteelFactory_1F_CellPanel_7

SteelFactory_1F_CellPanel_9:
	compare VAR_TEMP_1, 36
	goto_if_eq SteelFactory_1F_CellPanel_8
	goto SteelFactory_1F_CellPanel_7

SteelFactory_1F_CellPanel_13:
	applymovement 25, SteelFactory_1F_CellPanel_Movement_4
	applymovement LOCALID_PLAYER, SteelFactory_1F_CellPanel_Movement_5
	waitmovement 0
	goto SteelFactory_1F_CellPanel_12

SteelFactory_1F_CellPanel_14:
	compare VAR_TEMP_1, 37
	goto_if_eq SteelFactory_1F_CellPanel_13
	goto SteelFactory_1F_CellPanel_12

SteelFactory_1F_CellPanel_18:
	applymovement 25, SteelFactory_1F_CellPanel_Movement_2
	applymovement LOCALID_PLAYER, SteelFactory_1F_CellPanel_Movement_6
	waitmovement 0
	goto SteelFactory_1F_CellPanel_17

SteelFactory_1F_CellPanel_19:
	compare VAR_TEMP_1, 36
	goto_if_eq SteelFactory_1F_CellPanel_18
	goto SteelFactory_1F_CellPanel_17

SteelFactory_1F_CellPanel_23:
	msgbox SteelFactory_1F_CellPanel_NoRelease, MSGBOX_AUTOCLOSE
	applymovement LOCALID_PLAYER, SteelFactory_1F_CellPanel_Movement_7
	applymovement 25, SteelFactory_1F_CellPanel_Movement_8
	waitmovement 25
	playse SE_PIN
	applymovement 25, SteelFactory_1F_CellPanel_Movement_9
	waitmovement 25
	releaseall
	end


SteelFactory_1F_CellPanel_PostBattle::
	playse SE_PIN
	applymovement 5, SteelFactory_1F_CellPanel_PostBattle_Movement_0
	waitmovement 5
	applymovement LOCALID_PLAYER, SteelFactory_1F_CellPanel_Movement_1
	msgbox SteelFactory_1F_CellPanel_PostBattle_Text_0, MSGBOX_AUTOCLOSE
	delay 60
	msgbox SteelFactory_1F_CellPanel_PressButton
	playse SE_CLICK
	waitse
	playse SE_THUNDER
	fadescreen FADE_TO_BLACK
	delay 30
	setmetatile 2, 33, 0x200, FALSE
	setmetatile 3, 33, 0x200, FALSE
	setmetatile 2, 34, 0x200, FALSE
	setmetatile 3, 34, 0x200, FALSE
	setmetatile 9, 32, 0x200, FALSE
	setmetatile 10, 32, 0x200, FALSE
	setmetatile 9, 33, 0x200, FALSE
	setmetatile 10, 33, 0x200, FALSE
	setmetatile 2, 40, 0x200, FALSE
	setmetatile 3, 40, 0x200, FALSE
	setmetatile 2, 41, 0x200, FALSE
	setmetatile 3, 41, 0x200, FALSE
	setmetatile 9, 39, 0x200, FALSE
	setmetatile 10, 39, 0x200, FALSE
	setmetatile 9, 40, 0x200, FALSE
	setmetatile 10, 40, 0x200, FALSE
	special DrawWholeMapView
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
	delay 30
	fadescreen FADE_FROM_BLACK
	playse SE_DOOR
	waitse
	applymovement 25, SteelFactory_1F_CellPanel_PostBattle_Movement_1
	waitmovement 25
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
	waitmoncry
	playse SE_PIN
	applymovement LOCALID_PLAYER, SteelFactory_1F_CellPanel_PostBattle_Movement_2
	msgbox SteelFactory_1F_CellPanel_MewCry, MSGBOX_AUTOCLOSE
	delay 60
	setflag FLAG_STEEL_FACTORY_FREED_POKEMON
	setflag FLAG_MEW_SAW_FACTORY_FREED
	setflag FLAG_STEEL_FACTORY_CHOICE_MADE
	setflag FLAG_STEEL_FACTORY_CELL_ARON_HIDDEN
	addobject 26
	addobject 27
	addobject 28
	addobject 29
	addobject 30
	addobject 31
	addobject 32
	applymovement 26, SteelFactory_1F_CellPanel_PostBattle_Movement_3
	applymovement 27, SteelFactory_1F_CellPanel_PostBattle_Movement_4
	applymovement 28, SteelFactory_1F_CellPanel_PostBattle_Movement_5
	applymovement 29, SteelFactory_1F_CellPanel_PostBattle_Movement_6
	applymovement 32, SteelFactory_1F_CellPanel_PostBattle_Movement_7
	applymovement 31, SteelFactory_1F_CellPanel_PostBattle_Movement_8
	applymovement 30, SteelFactory_1F_CellPanel_PostBattle_Movement_9
	waitmovement 31
	waitmovement 32
	applymovement 32, SteelFactory_1F_CellPanel_PostBattle_Movement_10
	applymovement 31, SteelFactory_1F_CellPanel_PostBattle_Movement_11
	applymovement 5, SteelFactory_1F_CellPanel_PostBattle_Movement_12
	waitmovement 5
	delay 120
	removeobject 26
	removeobject 27
	removeobject 28
	removeobject 29
	removeobject 31
	removeobject 32
	removeobject 5
	playse SE_PIN
	applymovement 25, SteelFactory_1F_CellPanel_PostBattle_Movement_13
	applymovement LOCALID_PLAYER, SteelFactory_1F_CellPanel_PostBattle_Movement_14
	delay 120
	applymovement 25, SteelFactory_1F_CellPanel_PostBattle_Movement_15
	delay 120
	applymovement 25, SteelFactory_1F_CellPanel_PostBattle_Movement_16
	applymovement 30, SteelFactory_1F_CellPanel_PostBattle_Movement_17
	waitmovement 30
	removeobject 25
	removeobject 30
	setflag FLAG_STEEL_FACTORY_POKEMON_CAGED
	releaseall
	return


SteelFactory_1F_ControlPanel::
	lock
	msgbox SteelFactory_1F_ControlPanel_Text
	release
	return


SteelFactory_1F_AronIntro_Movement_0:
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	face_left
	step_end

SteelFactory_1F_AronIntro_Movement_1:
	face_right
	step_end

SteelFactory_1F_AronIntro_Movement_2:
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	face_up
	step_end

SteelFactory_1F_AronIntro_Movement_3:
	face_down
	step_end

SteelFactory_1F_AronIntro_Movement_4:
	emote_question_mark
	step_end

SteelFactory_1F_AronIntro_Movement_5:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_up
	face_left
	step_end

SteelFactory_1F_AronIntro_Movement_6:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	face_up
	step_end

SteelFactory_1F_AronIntro_Movement_7:
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_up
	face_left
	step_end

SteelFactory_1F_AronIntro_Movement_8:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	face_up
	step_end

SteelFactory_1F_AronIntro_Movement_9:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

SteelFactory_1F_Wire1_Movement_0:
	emote_exclamation_mark
	step_end

SteelFactory_1F_Wire1_Movement_1:
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

SteelFactory_1F_Wire2_Movement_0:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

SteelFactory_1F_Wire3_Movement_0:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

SteelFactory_1F_Wire4_Movement_0:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

SteelFactory_1F_Wire5_Movement_0:
	emote_exclamation_mark
	jump_in_place_down
	face_left
	step_end

SteelFactory_1F_Wire5_Movement_1:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

SteelFactory_1F_CellPanel_Movement_0:
	emote_question_mark
	jump_in_place_down
	step_end

SteelFactory_1F_CellPanel_Movement_1:
	face_up
	step_end

SteelFactory_1F_CellPanel_Movement_2:
	walk_down
	face_up
	step_end

SteelFactory_1F_CellPanel_Movement_3:
	walk_right
	face_up
	step_end

SteelFactory_1F_CellPanel_Movement_4:
	walk_left
	walk_down
	walk_right
	face_up
	step_end

SteelFactory_1F_CellPanel_Movement_5:
	walk_up
	face_up
	step_end

SteelFactory_1F_CellPanel_Movement_6:
	walk_left
	face_up
	step_end

SteelFactory_1F_CellPanel_Movement_7:
	walk_down
	step_end

SteelFactory_1F_CellPanel_Movement_8:
	walk_left
	walk_up
	walk_right
	face_up
	step_end

SteelFactory_1F_CellPanel_Movement_9:
	emote_double_exclamation_mark
	step_end

SteelFactory_1F_CellPanel_Movement_10:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_up
	face_left
	step_end

SteelFactory_1F_CellPanel_PostBattle_Movement_0:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	face_down
	emote_exclamation_mark
	step_end

SteelFactory_1F_CellPanel_PostBattle_Movement_1:
	emote_heart
	jump_in_place_down
	face_down
	step_end

SteelFactory_1F_CellPanel_PostBattle_Movement_2:
	face_down
	emote_question_mark
	step_end

SteelFactory_1F_CellPanel_PostBattle_Movement_3:
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

SteelFactory_1F_CellPanel_PostBattle_Movement_4:
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

SteelFactory_1F_CellPanel_PostBattle_Movement_5:
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

SteelFactory_1F_CellPanel_PostBattle_Movement_6:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

SteelFactory_1F_CellPanel_PostBattle_Movement_7:
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	face_left
	step_end

SteelFactory_1F_CellPanel_PostBattle_Movement_8:
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	face_up
	step_end

SteelFactory_1F_CellPanel_PostBattle_Movement_9:
	walk_down
	walk_down
	walk_right
	step_end

SteelFactory_1F_CellPanel_PostBattle_Movement_10:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

SteelFactory_1F_CellPanel_PostBattle_Movement_11:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

SteelFactory_1F_CellPanel_PostBattle_Movement_12:
	jump_2_up
	jump_2_up
	step_end

SteelFactory_1F_CellPanel_PostBattle_Movement_13:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_left
	emote_heart
	jump_in_place_left
	step_end

SteelFactory_1F_CellPanel_PostBattle_Movement_14:
	face_left
	step_end

SteelFactory_1F_CellPanel_PostBattle_Movement_15:
	walk_down
	face_right
	emote_heart
	step_end

SteelFactory_1F_CellPanel_PostBattle_Movement_16:
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

SteelFactory_1F_CellPanel_PostBattle_Movement_17:
	walk_right
	walk_right
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

SteelFactory_1F_AronIntro_Text_0:
	.string "The Aron scuttled away!$"

SteelFactory_1F_CellPanel_PostBattle_Text_0:
	.string "I'm telling you, don't do it!$"

SteelFactory_1F_ControlPanel_Text::
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
	.string "The Regi-Metal alloy is our greatest\n"
	.string "achievement.\p"
	.string "By replicating the elemental forging\n"
	.string "process Regigigas used in Lions\l"
	.string "Mountains, we create a material that\l"
	.string "channels legendary energy.\p"
	.string "The Faculty will bring true order to\n"
	.string "Tessera. Diversity has had its chance.\l"
	.string "Now it is structure's turn.$"

SteelFactory_1F_Scientist_Lore2_Text::
	.string "This is a restricted area!\p"
	.string "Leave immediately or I'm calling\n"
	.string "security!$"

SteelFactory_1F_Scientist_Lore3_Text::
	.string "The ore from Lions Mountains is unlike\n"
	.string "anything we've catalogued.\p"
	.string "Dense with ancient energy.\p"
	.string "The Pokemon here can sense it - it\n"
	.string "makes them... compliant.\p"
	.string "That's what The Rector calls it.\n"
	.string "Compliant.$"

SteelFactory_1F_Scientist_Lore4_Text::
	.string "Registeel is just a small piece of the\n"
	.string "puzzle.\p"
	.string "However, it does help us build metal\n"
	.string "structures that can bring order to\l"
	.string "even the most chaotic places.\p"
	.string "The Rector seems to have found a way\n"
	.string "to incentivize it.\p"
	.string "I try not to think about the details.$"

SteelFactory_1F_Scientist_Lore5_Text::
	.string "The electro-magnetic resonance from\n"
	.string "the Magnemite cluster amplifies the\l"
	.string "metal's conductivity tenfold.\p"
	.string "Add the origin of the ore to the\n"
	.string "equation and we're making something\l"
	.string "the Regis would recognize as their own.$"

SteelFactory_1F_Official_Lore1_Text::
	.string "Teserra is a beautiful region.\p"
	.string "But it's wasted on chaos.\p"
	.string "Dozens of mutations, dozens of types,\n"
	.string "no cohesion, no direction.\p"
	.string "We are going to change that.\p"
	.string "One processed metric ton at a time.$"

SteelFactory_1F_Official_Lore2_Text::
	.string "The Faculty destroying diversity?\p"
	.string "We organize it.\p"
	.string "Everything in its right place.\p"
	.string "Everyone with a clear role.\p"
	.string "Is that really so terrible?$"

SteelFactory_1F_Official_Lore3_Text::
	.string "The Pokemon working here are fed,\n"
	.string "sheltered, and given purpose.\p"
	.string "That's more than most wild Pokemon get.\p"
	.string "It's not cruelty. It's efficiency.\p"
	.string "At least... that's what we tell\n"
	.string "ourselves.$"

SteelFactory_1F_Scientist1_Intro::
	.string "A trespasser?!\p"
	.string "I'll neutralize you with cold, hard\n"
	.string "science!$"

SteelFactory_1F_Scientist1_Defeat::
	.string "Unacceptable.\p"
	.string "My data... completely disrupted...$"

SteelFactory_1F_Scientist1_PostBattle::
	.string "How can something that disorganized\n"
	.string "defeat me?!$"

SteelFactory_1F_Scientist2_Intro::
	.string "Security breach detected!\p"
	.string "Initiating containment protocol!\p"
	.string "Which is to say - I will fight you!$"

SteelFactory_1F_Scientist2_Defeat::
	.string "My containment protocol... failed.\p"
	.string "This is extremely irregular.$"

SteelFactory_1F_Scientist2_PostBattle::
	.string "The Rector is going to hear about this\n"
	.string "data anomaly.$"

SteelFactory_1F_Official1_Intro::
	.string "Nobody disrupts Faculty operations and\n"
	.string "walks away, intruder.\p"
	.string "Order will be maintained!\p"
	.string "Starting with you!$"

SteelFactory_1F_Official1_Defeat::
	.string "Extraordinary.\p"
	.string "You've upended three months of\n"
	.string "production schedules.$"

SteelFactory_1F_Official1_PostBattle::
	.string "...\p"
	.string "You'll want to turn around before you\n"
	.string "reach the upper floors.$"

SteelFactory_1F_Official2_Intro::
	.string "I don't know who let you in, but your\n"
	.string "little tour ends here.\p"
	.string "The Faculty's order demands it!$"

SteelFactory_1F_Official2_Defeat::
	.string "Chaos wins the battle.\p"
	.string "But it always loses the war.$"

SteelFactory_1F_Official2_PostBattle::
	.string "Don't say I didn't warn you.$"

SteelFactory_1F_Official3_Intro::
	.string "Nobody reaches The Rector's floor\n"
	.string "without going through me.\p"
	.string "The Faculty's order demands it.\p"
	.string "And I am very orderly.$"

SteelFactory_1F_Official3_Defeat::
	.string "Impossible.\p"
	.string "You... you're chaos incarnate.$"

SteelFactory_1F_Official3_PostBattle::
	.string "The Rector is on the second floor. Face\n"
	.string "him, if you dare.$"

SteelFactory_1F_Panel_Prompt::
	.string "POKEMON CONTAINMENT OVERRIDE -\n"
	.string "EMERGENCY RELEASE -\p"
	.string "Decades of Pokemon are held in these\n"
	.string "bays, forced to power the facility.\l"
	.string "Machop, Aron, Magnemite... and something\l"
	.string "much larger.\p"
	.string "Do you release them?$"

SteelFactory_1F_Panel_FreeSequence::
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
	.string "A soft cry echoes from somewhere deep\n"
	.string "in the factory walls.\p"
	.string "You sense something watching.\p"
	.string "Something that has been watching for a\n"
	.string "very long time.$"

SteelFactory_1F_Panel_Left::
	.string "You step back from the panel.\p"
	.string "The machines keep running.\p"
	.string "The Pokemon keep working.$"

SteelFactory_1F_Panel_MewLeft::
	.string "A faint cry carries through the steel\n"
	.string "walls.\p"
	.string "You almost missed it.$"

SteelFactory_1F_Panel_AlreadyFreed::
	.string "The containment bays are open.\p"
	.string "The Pokemon are free.$"

SteelFactory_1F_Panel_AlreadyLeft::
	.string "The panel flickers.\p"
	.string "The Pokemon continue their labor.$"

SteelFactory_Wire_Prompt::
	.string "A thick cable runs from this machine\n"
	.string "into the wall.\p"
	.string "It looks like it keeps something\n"
	.string "running.\p"
	.string "Disconnect the wire?$"

SteelFactory_Wire_AlreadyPulled::
	.string "The wire hangs loose from the machine.\p"
	.string "It's already been disconnected.$"

SteelFactory_Wire_NotReady::
	.string "A thick cable runs from this machine\n"
	.string "into the wall.\p"
	.string "You leave it alone.$"

SteelFactory_Wire1_PulledText::
	.string "You grip the cable and pull.\p"
	.string "It comes free with a sharp click.\p"
	.string "The machine goes dark.$"

SteelFactory_Wire2_PulledText::
	.string "The cable resists briefly, then snaps\n"
	.string "free. Click.\p"
	.string "Another machine falls silent.$"

SteelFactory_Wire3_PulledText::
	.string "You work the cable loose from its\n"
	.string "housing. Click.\p"
	.string "The hum in this corner of the factory\n"
	.string "dies.$"

SteelFactory_Wire4_PulledText::
	.string "The thick cable pulls free with a hollow\n"
	.string "click.\p"
	.string "Somewhere above, a light flickers out.$"

SteelFactory_Wire5_PulledText::
	.string "The last cable.\p"
	.string "You pull it free. Click.\p"
	.string "A deep silence falls over the machines\n"
	.string "around you.$"

SteelFactory_AllWires_Text::
	.string "A low groan of shifting metal...\p"
	.string "Deep in the factory, something heavy\n"
	.string "has moved.$"

SteelFactory_Aron_Interact_Text::
	.string "The Aron glances up at you, then turns\n"
	.string "back to the machine.$"

SteelFactory_AronIntro_Text::
	.string "... the small Aron seems stressed.\p"
	.string "It seems desperate to show you\n"
	.string "something.\p"
	.string "Follow it? The Rector might escape...$"

SteelFactory_AronFollow_Text::
	.string "Hmm... must be something with the\n"
	.string "machine...\p"
	.string "It's trying to pull something from the\n"
	.string "machine.\p"
	.string "It looks like it's trying to disconnect\n"
	.string "a wire?$"

SteelFactory_AronLeave_Text::
	.string "The Aron's head droops.\p"
	.string "It retreats behind some steel beams.\p"
	.string "The factory keeps humming.$"

SteelFactory_AronNextMachine_Text::
	.string "The Aron looks pleased. It scurries\n"
	.string "ahead to the next machine.$"

SteelFactory_AronFarewell_Text::
	.string "The Aron seems grateful for your help.\p"
	.string "What could it be trying to say?\p"
	.string "I think it's wanting me to follow it one\n"
	.string "last time...$"

SteelFactory_1F_CellPanel_AlreadyFreed::
	.string "The cell doors hang open.\p"
	.string "There's nothing left to release.$"

SteelFactory_1F_CellPanel_NotReady::
	.string "A reinforced control panel.\p"
	.string "It's on lockdown. The internal power\n"
	.string "must still be running.$"

SteelFactory_1F_CellPanel_Prompt::
	.string "The Aron stares at the release panel,\n"
	.string "unblinking.\p"
	.string "I think it wants me to push the\n"
	.string "buttons.\p"
	.string "Press RELEASE?$"

SteelFactory_1F_CellPanel_NoRelease::
	.string "You step back from the panel.\p"
	.string "The Aron's gaze drops to the floor.$"

SteelFactory_1F_CellPanel_ScientistStop::
	.string "WAIT!\p"
	.string "You have no idea what you're doing!\p"
	.string "Those specimens are irreplaceable\n"
	.string "research assets!$"

SteelFactory_1F_CellPanel_ScientistBattle::
	.string "I will not let you touch that panel!$"

SteelFactory_1F_CellPanel_ScientistDefeat::
	.string "No... the research... all of it...$"

SteelFactory_1F_CellPanel_ScientistNeedTwo::
	.string "You need at least two Pokemon\n"
	.string "to take on this battle!$"

SteelFactory_1F_CellPanel_PressButton::
	.string "You press RELEASE.\p"
	.string "A deep shudder runs through the floor.$"

SteelFactory_1F_CellPanel_MewCry::
	.string "...\p"
	.string "What was that sound?$"
