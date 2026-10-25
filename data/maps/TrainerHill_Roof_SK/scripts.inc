TrainerHill_Roof_SK_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_OnResume
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, TrainerHill_Roof_SK_OnLoad
	.byte 0


TrainerHill_Roof_SK_OnLoad::
	setflag FLAG_TEMP_HIDE_FOLLOWER
	end


TrainerHill_Roof_SK_EventScript_Owner::
	trainerhill_settrainerflags
	lock
	faceplayer
	trainerhill_getownerstate
	copyvar VAR_0x8000, VAR_RESULT
	goto_if_eq VAR_0x8000, 0, TrainerHill_Roof_SK_EventScript_Arrived
	goto_if_eq VAR_0x8000, 1, TrainerHill_Roof_SK_EventScript_GivePrize
	goto_if_eq VAR_0x8000, 2, TrainerHill_Roof_SK_EventScript_AlreadyReceivedPrize
	goto TrainerHill_Roof_SK_EventScript_Arrived
	return


TrainerHill_Roof_SK_EventScript_Arrived::
	msgbox TrainerHill_Roof_SK_Text_YouFinallyCameBravo, MSGBOX_DEFAULT
	goto TrainerHill_Roof_SK_EventScript_GivePrize
	return


TrainerHill_Roof_SK_EventScript_GivePrize::
	trainerhill_giveprize
	copyvar VAR_0x8000, VAR_RESULT
	goto_if_eq VAR_0x8000, 0, TrainerHill_Roof_SK_EventScript_ReceivePrize
	goto_if_eq VAR_0x8000, 1, TrainerHill_Roof_SK_EventScript_NoRoomForPrize
	goto_if_eq VAR_0x8000, 2, TrainerHill_Roof_SK_EventScript_CheckFinalTime
	goto TrainerHill_Roof_SK_EventScript_ReceivePrize
	return


TrainerHill_Roof_SK_EventScript_ReceivePrize::
	msgbox TrainerHill_Roof_SK_Text_HaveTheMostMarvelousGift, MSGBOX_DEFAULT
	playfanfare MUS_LEVEL_UP
	message gText_ObtainedTheItem
	waitfanfare
	waitmessage
	goto TrainerHill_Roof_SK_EventScript_CheckFinalTime
	return


TrainerHill_Roof_SK_EventScript_NoRoomForPrize::
	msgbox TrainerHill_Roof_SK_Text_HaveTheMostMarvelousGift, MSGBOX_DEFAULT
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
	msgbox TrainerHill_Roof_SK_Text_FullUpBeBackLaterForThis, MSGBOX_DEFAULT
	goto TrainerHill_Roof_SK_EventScript_CheckFinalTime
	return


TrainerHill_Roof_SK_EventScript_CheckFinalTime::
	trainerhill_finaltime
	copyvar VAR_0x8000, VAR_RESULT
	goto_if_eq VAR_0x8000, 0, TrainerHill_Roof_SK_EventScript_NewRecord
	goto_if_eq VAR_0x8000, 1, TrainerHill_Roof_SK_EventScript_NoNewRecord
	goto_if_eq VAR_0x8000, 2, TrainerHill_Roof_SK_EventScript_EndSpeakToOwner
	goto TrainerHill_Roof_SK_EventScript_NewRecord
	return


TrainerHill_Roof_SK_EventScript_NewRecord::
	msgbox TrainerHill_Roof_SK_Text_GotHereMarvelouslyQuickly, MSGBOX_DEFAULT
	goto TrainerHill_Roof_SK_EventScript_EndSpeakToOwner
	end


TrainerHill_Roof_SK_EventScript_NoNewRecord::
	msgbox TrainerHill_Roof_SK_Text_YouWerentVeryQuick, MSGBOX_DEFAULT
	goto TrainerHill_Roof_SK_EventScript_EndSpeakToOwner
	end


TrainerHill_Roof_SK_EventScript_EndSpeakToOwner::
	msgbox TrainerHill_Roof_SK_Text_ArriveZippierNextTime, MSGBOX_DEFAULT
	release
	end


TrainerHill_Roof_SK_EventScript_AlreadyReceivedPrize::
	msgbox TrainerHill_Roof_SK_Text_ArriveZippierNextTime, MSGBOX_DEFAULT
	release
	end


TrainerHill_Roof_SK_Text_YouFinallyCameBravo::
	.string "Hm! Hm!\pYou finally came!\nYes, you have arrived!\pWait! Don't say it!\nI know why you came all the way\lhere by yourself!\pYou wanted to see me, the owner\nof the TRAINER HILL, because…\pYou want to form a tag team with me!\nWa-hoo!\p…Uh?\nThat's not it?\pAnyway, I watched you on your way up.\nMarvelous battling! Bravo, indeed!$"

TrainerHill_Roof_SK_Text_HaveTheMostMarvelousGift::
	.string "For a marvelous someone like you,\nI have the most marvelous gift,\lplus some money for your effort!$"

TrainerHill_Roof_SK_Text_FullUpBeBackLaterForThis::
	.string "Oh, no, full up with things!\nYou'll be back later for this!$"

TrainerHill_Roof_SK_Text_GotHereMarvelouslyQuickly::
	.string "Oh, hold on here! Did you possibly get\nhere marvelously quickly?\pHow splendid! You needn't have\nhurried so to see me!\pThat is so delightful. I'll have the Time\nBoard at the reception updated!$"

TrainerHill_Roof_SK_Text_YouWerentVeryQuick::
	.string "But, oh…\nYou weren't very quick getting here.$"

TrainerHill_Roof_SK_Text_ArriveZippierNextTime::
	.string "Perhaps it would please me more if you\narrived zippier next time.\pThen, I should be pleased to form\na tag team with you!\pUntil we meet again, amigo!$"
