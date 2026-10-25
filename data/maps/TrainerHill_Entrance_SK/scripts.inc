TrainerHill_Entrance_SK_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_Entrance_SK_OnResume
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerHill_Entrance_SK_OnReturn
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerHill_Entrance_SK_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, TrainerHill_Entrance_SK_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Entrance_SK_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TrainerHill_Entrance_SK_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, TrainerHill_Entrance_SK_EventScript_ExitChallenge
	map_script_2 VAR_TEMP_D, 17, TrainerHill_Entrance_SK_EventScript_ExitElevator
	map_script_2 VAR_TEMP_5, 1, TrainerHill_Entrance_SK_EventScript_EntryTrigger
	map_script_2 VAR_TEMP_1, 1, TrainerHill_Entrance_SK_EventScript_WarpToEntranceCounter
	.2byte 0


TrainerHill_Entrance_SK_OnTransition::
	clearflag FLAG_LIMIT_TO_50
	calculatemonstats
	setflag FLAG_TEMP_HIDE_FOLLOWER
	setflag FLAG_LANDMARK_TRAINER_HILL
	getplayerxy VAR_TEMP_D, VAR_RESULT
	end


TrainerHill_Entrance_SK_OnResume::
	trainerhill_resumetimer
	setvar VAR_TEMP_0, 0
	trainerhill_getusingereader
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_SK_EventScript_TryFaceAttendant
	setobjectxy OBJ_EVENT_ID_PLAYER, 9, 6
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_SK_Movement_PlayerFaceAttendant
	end


TrainerHill_Entrance_SK_EventScript_TryFaceAttendant::
	trainerhill_getwon
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_SK_EventScript_PlayerDontFaceAttendant
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_SK_Movement_PlayerFaceAttendant
	end


TrainerHill_Entrance_SK_EventScript_PlayerDontFaceAttendant::
	end


TrainerHill_Entrance_SK_OnReturn::
	addobject LOCALID_TRAINER_HILL_SK_NURSE
	addobject LOCALID_TRAINER_HILL_SK_ATTENDANT
	addobject LOCALID_TRAINER_HILL_SK_MAN
	addobject LOCALID_TRAINER_HILL_SK_GIRL
	end


TrainerHill_Entrance_SK_OnLoad::
	call_if_eq VAR_TEMP_D, 17, TrainerHill_Entrance_SK_EventScript_OpenCounterDoor
	end


TrainerHill_Entrance_SK_EventScript_OpenCounterDoor::
	setmetatile 17, 10, METATILE_TrainerHill_GreenFloorTile, FALSE
	return


TrainerHill_Entrance_SK_EventScript_WarpToEntranceCounter::
	setvar VAR_TEMP_1, 0
	warp MAP_TRAINER_HILL_ENTRANCE_SK, 9, 6
	waitstate
	end


TrainerHill_Entrance_SK_EventScript_ExitElevator::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_SK_Movement_PlayerExitElevator
	waitmovement 0
	setmetatile 17, 10, METATILE_TrainerHill_CounterDoor, TRUE
	special DrawWholeMapView
	playse SE_CLICK
	waitse
	setvar VAR_TEMP_D, 0
	releaseall
	end


TrainerHill_Entrance_SK_EventScript_ExitChallenge::
	setvar VAR_TEMP_0, 1
	trainerhill_getstatus
	copyvar VAR_0x8000, VAR_RESULT
	goto_if_eq VAR_0x8000, TRAINER_HILL_PLAYER_STATUS_LOST, TrainerHill_Entrance_SK_EventScript_ExitChallengeLost
	goto_if_eq VAR_0x8000, TRAINER_HILL_PLAYER_STATUS_ECARD_SCANNED, TrainerHill_Entrance_SK_EventScript_ExitChallengeECard
	goto_if_eq VAR_0x8000, TRAINER_HILL_PLAYER_STATUS_NORMAL, TrainerHill_Entrance_SK_EventScript_EndExitChallenge
	goto TrainerHill_Entrance_SK_EventScript_ExitChallengeLost
	return


TrainerHill_Entrance_SK_EventScript_ExitChallengeLost::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_SK_Movement_PlayerFaceAttendant
	msgbox TrainerHill_Entrance_SK_Text_TooBadTremendousEffort, MSGBOX_DEFAULT
	goto TrainerHill_Entrance_SK_EventScript_PlayerExitChallenge
	return


TrainerHill_Entrance_SK_EventScript_ExitChallengeECard::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_SK_Movement_PlayerFaceAttendant
	msgbox TrainerHill_Entrance_SK_Text_MovedReceptionHereForSwitch, MSGBOX_DEFAULT
	goto TrainerHill_Entrance_SK_EventScript_PlayerExitChallenge
	return


TrainerHill_Entrance_SK_EventScript_PlayerExitChallenge::
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_SK_Movement_PushPlayerBackFromCounter
	waitmovement 0
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
	special HealPlayerParty
	releaseall
	goto TrainerHill_Entrance_SK_EventScript_EndExitChallenge
	return


TrainerHill_Entrance_SK_EventScript_EndExitChallenge::
	end


TrainerHill_Entrance_SK_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_TRAINER_HILL_SK_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


TrainerHill_Entrance_SK_EventScript_Attendant::
	lock
	faceplayer
	trainerhill_inchallenge
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_SK_EventScript_ThanksForPlaying
	msgbox TrainerHill_Entrance_SK_Text_HopeYouGiveItYourBest, MSGBOX_DEFAULT
	goto TrainerHill_Entrance_SK_EventScript_AttendantEnd
	return


TrainerHill_Entrance_SK_EventScript_ThanksForPlaying::
	msgbox TrainerHill_Entrance_SK_Text_ThankYouForPlaying, MSGBOX_DEFAULT
	goto TrainerHill_Entrance_SK_EventScript_AttendantEnd
	return


TrainerHill_Entrance_SK_EventScript_AttendantEnd::
	release
	end


TrainerHill_Entrance_SK_EventScript_EntryTrigger::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_SK_Movement_PlayerFaceAttendant
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_SK_EventScript_Closed
	msgbox TrainerHill_Entrance_SK_Text_WelcomeToTrainerHill, MSGBOX_DEFAULT
	trainerhill_getsaved
	call_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_SK_EventScript_SaveGame
	trainerhill_allfloorsused
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_SK_EventScript_AllFloorsUsed
	msgbox TrainerHill_Entrance_SK_Text_TrainersUpToFloorX, MSGBOX_DEFAULT
	goto TrainerHill_Entrance_SK_EventScript_AskChallengeTrainers
	return


TrainerHill_Entrance_SK_EventScript_AllFloorsUsed::
	msgbox TrainerHill_Entrance_SK_Text_TrainersInEveryRoom, MSGBOX_DEFAULT
	goto TrainerHill_Entrance_SK_EventScript_AskChallengeTrainers
	return


TrainerHill_Entrance_SK_EventScript_AskChallengeTrainers::
	message TrainerHill_Entrance_SK_Text_LikeToChallengeTrainers
	waitmessage
	multichoice 15, 6, MULTI_YESNOINFO, FALSE
	copyvar VAR_0x8000, VAR_RESULT
	goto_if_eq VAR_0x8000, 0, TrainerHill_Entrance_SK_EventScript_ChooseChallenge
	goto_if_eq VAR_0x8000, 1, TrainerHill_Entrance_SK_EventScript_CancelEntry
	goto_if_eq VAR_0x8000, 2, TrainerHill_Entrance_SK_EventScript_Info
	goto_if_eq VAR_0x8000, MULTI_B_PRESSED, TrainerHill_Entrance_SK_EventScript_CancelEntry
	end


TrainerHill_Entrance_SK_EventScript_Info::
	msgbox TrainerHill_Entrance_SK_Text_ExplainTrainerHill, MSGBOX_DEFAULT
	goto TrainerHill_Entrance_SK_EventScript_AskChallengeTrainers
	end


TrainerHill_Entrance_SK_EventScript_ChooseChallenge::
	multichoice 13, 2, MULTI_TAG_MATCH_TYPE, FALSE
	copyvar VAR_0x8000, VAR_RESULT
	goto_if_eq VAR_0x8000, 4, TrainerHill_Entrance_SK_EventScript_CancelEntry
	goto_if_eq VAR_0x8000, MULTI_B_PRESSED, TrainerHill_Entrance_SK_EventScript_CancelEntry
	trainerhill_setmode VAR_RESULT
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 1
	setvar VAR_TEMP_5, 0
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	msgbox TrainerHill_Entrance_SK_Text_TimeProgessGetSetGo, MSGBOX_DEFAULT
	trainerhill_start
	releaseall
	end


TrainerHill_Entrance_SK_EventScript_CancelEntry::
	setvar VAR_TEMP_5, 0
	msgbox TrainerHill_Entrance_SK_Text_PleaseVisitUsAgain, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_SK_Movement_PushPlayerBackFromCounter
	waitmovement 0
	releaseall
	end


TrainerHill_Entrance_SK_EventScript_SaveGame::
	msgbox TrainerHill_Entrance_SK_Text_SaveGameBeforeEnter, MSGBOX_DEFAULT
	trainerhill_setsaved
	setvar VAR_TEMP_5, 1
	call Common_EventScript_SaveGame
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_SK_EventScript_SaveFailed
	trainerhill_setsaved
	return


TrainerHill_Entrance_SK_EventScript_SaveFailed::
	trainerhill_clearsaved
	goto TrainerHill_Entrance_SK_EventScript_CancelEntry
	end


TrainerHill_Entrance_SK_EventScript_Closed::
	msgbox TrainerHill_Entrance_SK_Text_StillGettingReady, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_SK_Movement_PushPlayerBackFromCounter
	waitmovement 0
	releaseall
	end


TrainerHill_Entrance_SK_Movement_PlayerFaceAttendant:
	face_right
	step_end

TrainerHill_Entrance_SK_Movement_PushPlayerBackFromCounter:
	walk_down
	step_end

TrainerHill_Entrance_SK_Movement_PlayerExitElevator:
	walk_down
	walk_down
	step_end

TrainerHill_Entrance_SK_EventScript_Records::
	lockall
	fadescreen FADE_TO_BLACK
	setvar VAR_0x8004, 0
	special ShowTrainerHillRecords
	waitstate
	releaseall
	end


TrainerHill_Entrance_SK_EventScript_Man::
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_SK_EventScript_ManTrainerHillClosed
	msgbox TrainerHill_Entrance_SK_Text_WhatSortOfTrainersAreAhead, MSGBOX_NPC
	end


TrainerHill_Entrance_SK_EventScript_ManTrainerHillClosed::
	msgbox TrainerHill_Entrance_SK_Text_CantWaitToTestTheWaters, MSGBOX_NPC
	end


TrainerHill_Entrance_SK_EventScript_Man2::
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_SK_EventScript_ManTrainerHillClosed2
	msgbox TrainerHill_Entrance_SK_Text_Money, MSGBOX_NPC
	end


TrainerHill_Entrance_SK_EventScript_ManTrainerHillClosed2::
	msgbox TrainerHill_Entrance_SK_Text_HereToGetMoney, MSGBOX_NPC
	end


TrainerHill_Entrance_SK_EventScript_Girl::
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_SK_EventScript_GirlTrainerHillClosed
	msgbox TrainerHill_Entrance_SK_Text_FriendsTryingToReachTimeBoardTop, MSGBOX_NPC
	end


TrainerHill_Entrance_SK_EventScript_GirlTrainerHillClosed::
	msgbox TrainerHill_Entrance_SK_Text_DoYouKnowWhenTheyOpen, MSGBOX_NPC
	end


TrainerHill_Entrance_SK_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart TrainerHill_Entrance_SK_Pokemart_Basic
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


TrainerHill_Entrance_SK_EventScript_Clerk2::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
TrainerHill_Entrance_SK_Pokemart_Basic:
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_SPECIAL
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFEND
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_NONE

TrainerHill_Entrance_SK_EventScript_Chansey::
	lock
	faceplayer
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
	msgbox TrainerHill_Entrance_SK_Text_Chansey, MSGBOX_DEFAULT
	delay 40
	waitmoncry
	closemessage
	release
	end


TrainerHill_Entrance_SK_Text_HereToGetMoney::
	.string "I'm here to make some cash!\nWhy? Because every time you reach\lthe top, you get a money reward!\pI wonder when they'll finally open.\nI can't wait!$"

TrainerHill_Entrance_SK_Text_Money::
	.string "Every time you reach the top,\nyou earn some money.\pI heard you can win up to 1.000.000¥\nif you finish within ten minutes!\pBut if it takes longer, the reward\nwill be reduced…$"

TrainerHill_Entrance_SK_Text_StillGettingReady::
	.string "This is the TRAINER HILL where\nyou may enjoy tag battles with many\lTRAINERS.\pUnfortunately, we're still getting\nthings ready. Please come back later!$"

TrainerHill_Entrance_SK_Text_WelcomeToTrainerHill::
	.string "Welcome!\pThis is the TRAINER HILL where\nyou may enjoy tag battles with many\lTRAINERS!$"

TrainerHill_Entrance_SK_Text_SaveGameBeforeEnter::
	.string "Is this your first visit here?\pBefore you enter, please save\nyour game.$"

TrainerHill_Entrance_SK_Text_TrainersUpToFloorX::
	.string "Let's see…\nThe TRAINERS here now are…\pUp to floor no. {STR_VAR_1}.$"

TrainerHill_Entrance_SK_Text_TrainersInEveryRoom::
	.string "Let's see…\nThe TRAINERS here now are…\pThere appear to be TRAINERS gathered\nin every room.$"

TrainerHill_Entrance_SK_Text_LikeToChallengeTrainers::
	.string "Would you like to challenge the\nwaiting TRAINERS?$"

TrainerHill_Entrance_SK_Text_TimeProgessGetSetGo::
	.string "I will time your progress.\nBest of luck!\pOn your marks…\pGet set…\pGo!$"

TrainerHill_Entrance_SK_Text_PleaseVisitUsAgain::
	.string "Please do visit us again!$"

TrainerHill_Entrance_SK_Text_TooBadTremendousEffort::
	.string "That was too bad.\pI think you put in a tremendous\neffort in your battling.\pPlease come back and try again!$"

TrainerHill_Entrance_SK_Text_HopeYouGiveItYourBest::
	.string "I hope you give it your best.$"

TrainerHill_Entrance_SK_Text_MovedReceptionHereForSwitch::
	.string "When the TRAINERS switch places,\nthe movement can be hectic.\pTo avoid the stampede, we moved\nthe reception counter here.\pI'm sorry for the inconvenience.$"

TrainerHill_Entrance_SK_Text_ThankYouForPlaying::
	.string "Thank you for playing!$"

TrainerHill_Entrance_SK_Text_ExplainTrainerHill::
	.string "Here at the TRAINER HILL, we conduct\nan event called the Time Attack.\pIt is a race that measures how long\nyou take to reach our owner on\lthe rooftop from this counter.\pThe fastest times are posted on\nthe Time Board--try competing with\lyour friends.\pIn TRAINER battles along the way,\nneither Exp. Points nor money will\lbe awarded.$"

TrainerHill_Entrance_SK_Text_WhatSortOfTrainersAreAhead::
	.string "Who knows what sort of TRAINERS\nand POKéMON combos are ahead?\pAll I know is that I'll knock aside\nanyone that stands in my way!$"

TrainerHill_Entrance_SK_Text_CantWaitToTestTheWaters::
	.string "I heard tough TRAINERS come to this\nTRAINER HILL from all over.\pI can't wait to test the waters!\pI'll knock aside anyone that stands\nin my way!$"

TrainerHill_Entrance_SK_Text_FriendsTryingToReachTimeBoardTop::
	.string "Do you see the Time Board over there?\pMy friends and I are trying to see who\ncan reach the top in the least time.$"

TrainerHill_Entrance_SK_Text_DoYouKnowWhenTheyOpen::
	.string "Do you know when they're opening\nthis place up?\pI'm waiting here to be the first\nchallenger ever!$"

TrainerHill_Entrance_SK_Text_Chansey::
	.string "CHANSEY: Chaan! Sii!$"
