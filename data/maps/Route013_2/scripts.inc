Route013_2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route013_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route013_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route013_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Route013_2_OnTransition
	return

Route013_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_2, 1, Route013_2_StuckInMud
	.2byte 0


Route013_2_OnTransition::
	setstepcallback STEP_CB_DUMMY
	return


Route013_2_EventScript_BikeParkExitTrigger::
	lockall
	setvar VAR_TEMP_4, 0
	clearflag FLAG_SYS_CYCLING_ROAD
	releaseall
	end


Route013_2_EventScript_BikeParkMountTrigger::
	lockall
	setvar VAR_TEMP_4, 0
	special ForcePlayerOntoBike
	setflag FLAG_SYS_CYCLING_ROAD
	releaseall
	end


Route013_2_Platform1::
	setvar VAR_TEMP_0, 13
	setvar VAR_TEMP_1, 43
	setstepcallback STEP_CB_MUD_SWAMP
	end


Route013_2_Platform2::
	setvar VAR_TEMP_0, 19
	setvar VAR_TEMP_1, 60
	setstepcallback STEP_CB_MUD_SWAMP
	end


Route013_2_Platform3::
	setvar VAR_TEMP_0, 17
	setvar VAR_TEMP_1, 84
	setstepcallback STEP_CB_MUD_SWAMP
	end


Route013_2_Platform4::
	setvar VAR_TEMP_0, 22
	setvar VAR_TEMP_1, 100
	setstepcallback STEP_CB_MUD_SWAMP
	end


Route013_2_StuckInMud::
	lockall
	setvar VAR_TEMP_2, 0
	msgbox Route013_2_Text_StuckInMud, MSGBOX_DEFAULT
	compare VAR_TEMP_0, 13
	goto_if_eq Route013_2_StuckInMud_2
Route013_2_StuckInMud_1:
	compare VAR_TEMP_0, 19
	goto_if_eq Route013_2_StuckInMud_5
Route013_2_StuckInMud_4:
	compare VAR_TEMP_0, 17
	goto_if_eq Route013_2_StuckInMud_8
Route013_2_StuckInMud_7:
	goto Route013_2_WarpBack_Platform4
	return

Route013_2_StuckInMud_2:
	goto Route013_2_WarpBack_Platform1
	goto Route013_2_StuckInMud_1

Route013_2_StuckInMud_5:
	goto Route013_2_WarpBack_Platform2
	goto Route013_2_StuckInMud_4

Route013_2_StuckInMud_8:
	goto Route013_2_WarpBack_Platform3
	goto Route013_2_StuckInMud_7


Route013_2_WarpBack_Platform1::
	warp MAP_ROUTE013_2, 13, 43
	waitstate
	releaseall
	end


Route013_2_WarpBack_Platform2::
	warp MAP_ROUTE013_2, 19, 60
	waitstate
	releaseall
	end


Route013_2_WarpBack_Platform3::
	warp MAP_ROUTE013_2, 17, 84
	waitstate
	releaseall
	end


Route013_2_WarpBack_Platform4::
	warp MAP_ROUTE013_2, 22, 100
	waitstate
	releaseall
	end


Route013_2_Trainer_Fenner::
	trainerbattle_single TRAINER_DELTA_FENNER_SK, Route013_2_Trainer_Fenner_Intro, Route013_2_Trainer_Fenner_Defeat
	msgbox Route013_2_Trainer_Fenner_After, MSGBOX_AUTOCLOSE
	end


Route013_2_Trainer_Mieke::
	trainerbattle_single TRAINER_DELTA_MIEKE_SK, Route013_2_Trainer_Mieke_Intro, Route013_2_Trainer_Mieke_Defeat
	msgbox Route013_2_Trainer_Mieke_After, MSGBOX_AUTOCLOSE
	end


Route013_2_Trainer_Otis::
	trainerbattle_single TRAINER_DELTA_OTIS_SK, Route013_2_Trainer_Otis_Intro, Route013_2_Trainer_Otis_Defeat
	msgbox Route013_2_Trainer_Otis_After, MSGBOX_AUTOCLOSE
	end


Route013_2_Trainer_Jori::
	trainerbattle_single TRAINER_DELTA_JORI_SK, Route013_2_Trainer_Jori_Intro, Route013_2_Trainer_Jori_Defeat
	msgbox Route013_2_Trainer_Jori_After, MSGBOX_AUTOCLOSE
	end


Route013_2_Trainer_Ellis::
	trainerbattle_single TRAINER_DELTA_ELLIS_SK, Route013_2_Trainer_Ellis_Intro, Route013_2_Trainer_Ellis_Defeat
	msgbox Route013_2_Trainer_Ellis_After, MSGBOX_AUTOCLOSE
	end


Route013_2_Trainer_Len::
	trainerbattle_single TRAINER_DELTA_LEN_SK, Route013_2_Trainer_Len_Intro, Route013_2_Trainer_Len_Defeat
	msgbox Route013_2_Trainer_Len_After, MSGBOX_AUTOCLOSE
	end


Route013_2_Trainer_Runa::
	trainerbattle_single TRAINER_DELTA_RUNA_SK, Route013_2_Trainer_Runa_Intro, Route013_2_Trainer_Runa_Defeat
	msgbox Route013_2_Trainer_Runa_After, MSGBOX_AUTOCLOSE
	end


Route013_2_Trainer_Bo::
	trainerbattle_single TRAINER_DELTA_BO_SK, Route013_2_Trainer_Bo_Intro, Route013_2_Trainer_Bo_Defeat
	msgbox Route013_2_Trainer_Bo_After, MSGBOX_AUTOCLOSE
	end


Route013_2_Trainer_Tessa::
	trainerbattle_single TRAINER_DELTA_TESSA_SK, Route013_2_Trainer_Tessa_Intro, Route013_2_Trainer_Tessa_Defeat
	msgbox Route013_2_Trainer_Tessa_After, MSGBOX_AUTOCLOSE
	end


Route013_2_Trainer_Niels::
	trainerbattle_single TRAINER_DELTA_NIELS_SK, Route013_2_Trainer_Niels_Intro, Route013_2_Trainer_Niels_Defeat
	msgbox Route013_2_Trainer_Niels_After, MSGBOX_AUTOCLOSE
	end


Route013_2_Trainer_Koen::
	trainerbattle_single TRAINER_DELTA_KOEN_SK, Route013_2_Trainer_Koen_Intro, Route013_2_Trainer_Koen_Defeat
	msgbox Route013_2_Trainer_Koen_After, MSGBOX_AUTOCLOSE
	end


Route013_2_Trainer_Iris::
	trainerbattle_single TRAINER_DELTA_IRIS_SK, Route013_2_Trainer_Iris_Intro, Route013_2_Trainer_Iris_Defeat
	msgbox Route013_2_Trainer_Iris_After, MSGBOX_AUTOCLOSE
	end


Route013_2_NPC_MarshGuide::
	lock
	faceplayer
	msgbox Route013_2_NPC_MarshGuide_Text_0
	release
	end


Route013_2_NPC_BootCollector::
	lock
	faceplayer
	msgbox Route013_2_NPC_BootCollector_Text_0
	release
	end


Route013_2_NPC_RootWatcher::
	lock
	faceplayer
	msgbox Route013_2_NPC_RootWatcher_Text_0
	release
	end


Route013_2_NPC_PicnicCook::
	lock
	faceplayer
	msgbox Route013_2_NPC_PicnicCook_Text_0
	release
	end


Route013_2_NPC_Reporter::
	lock
	faceplayer
	msgbox Route013_2_NPC_Reporter_Text_0
	release
	end


Route013_2_NPC_Cameraman::
	lock
	faceplayer
	msgbox Route013_2_NPC_Cameraman_Text_0
	release
	end


Route013_2_NPC_BicycleVisitor::
	lock
	faceplayer
	msgbox Route013_2_NPC_BicycleVisitor_Text_0
	release
	end


Route013_2_NPC_OldSurveyor::
	lock
	faceplayer
	msgbox Route013_2_NPC_OldSurveyor_Text_0
	release
	end


Route013_2_NPC_MarshGuide_Text_0:
	.string "The marsh is crossed in stages. Stop on\n"
	.string "firm platforms and study the next\l"
	.string "stretch before heading out.\p"
	.string "Those dark patches will take your boots\n"
	.string "if you dawdle. I know because they\l"
	.string "already own mine.$"

Route013_2_NPC_BootCollector_Text_0:
	.string "I came here to train my legs. I've\n"
	.string "trained one leg, lost one shoe and\l"
	.string "developed a powerful respect for\l"
	.string "benches.$"

Route013_2_NPC_RootWatcher_Text_0:
	.string "Look under the roots before you call a\n"
	.string "patch empty.\p"
	.string "I found three kinds of tiny Pokemon\n"
	.string "there. And somebody's wedding ring. The\l"
	.string "Pokemon were less grateful to be found.$"

Route013_2_NPC_PicnicCook_Text_0:
	.string "Hot soup, dry socks, hot soup again.\n"
	.string "That's the marsh menu.\p"
	.string "No, I don't cook anything I find\n"
	.string "wriggling in a puddle. I have a supplier\l"
	.string "and a very serious apron.$"

Route013_2_NPC_Reporter_Text_0:
	.string "Our segment was called 'Untouched\n"
	.string "Wilderness.' Then a ranger pointed out\l"
	.string "the old drainage ditch behind me.\p"
	.string "Now it's called 'A Closer Look.' Much\n"
	.string "harder to film.$"

Route013_2_NPC_Cameraman_Text_0:
	.string "My camera caught something moving in\n"
	.string "the reeds.\p"
	.string "Could be a rare Pokemon. Could be my\n"
	.string "colleague retrieving her microphone.\l"
	.string "Both are being equally uncooperative.$"

Route013_2_NPC_BicycleVisitor_Text_0:
	.string "The bike handles the park beautifully.\n"
	.string "The marsh handles the bike like a snack.\p"
	.string "I'm walking this part. We all need\n"
	.string "boundaries.$"

Route013_2_NPC_OldSurveyor_Text_0:
	.string "My first map put a channel right here.\n"
	.string "My second put it over there.\p"
	.string "I stopped drawing in ink. The river has a\n"
	.string "very firm editing policy.$"

Route013_2_Text_StuckInMud::
	.string "You got stuck in the mud\n"
	.string "and had to turn back!$"

Route013_2_Trainer_Fenner_Intro::
	.string "I've finally found somewhere dry enough\n"
	.string "to battle!$"

Route013_2_Trainer_Fenner_Defeat::
	.string "I should've stuck to fishing!$"

Route013_2_Trainer_Fenner_After::
	.string "WOOPER keeps splashing mud into my\n"
	.string "boots, so I've stopped emptying them.$"

Route013_2_Trainer_Mieke_Intro::
	.string "Watch where you step while we battle!$"

Route013_2_Trainer_Mieke_Defeat::
	.string "Oh, my flowers!$"

Route013_2_Trainer_Mieke_After::
	.string "I was pressing flowers in my notebook\n"
	.string "until PARAS sat on it. Now they're a bit\l"
	.string "too flat.$"

Route013_2_Trainer_Otis_Intro::
	.string "You're just in time for a battle before\n"
	.string "lunch!$"

Route013_2_Trainer_Otis_Defeat::
	.string "Is it lunchtime yet?$"

Route013_2_Trainer_Otis_After::
	.string "Don't let TEDDIURSA near your bag\n"
	.string "unless you've already eaten your\l"
	.string "sandwiches.$"

Route013_2_Trainer_Jori_Intro::
	.string "You won't believe what I caught out\n"
	.string "here!$"

Route013_2_Trainer_Jori_Defeat::
	.string "They looked bigger in the water!$"

Route013_2_Trainer_Jori_After::
	.string "Try the little pools off the main\n"
	.string "channel if you're fishing. That's where\l"
	.string "I caught my KRABBY.$"

Route013_2_Trainer_Ellis_Intro::
	.string "I've got time for a quick battle!$"

Route013_2_Trainer_Ellis_Defeat::
	.string "You had me working hard!$"

Route013_2_Trainer_Ellis_After::
	.string "Stay near the boards if you don't know\n"
	.string "this marsh. I'd rather meet you here\l"
	.string "than have to fish you out.$"

Route013_2_Trainer_Len_Intro::
	.string "Let's battle before I sink any deeper!$"

Route013_2_Trainer_Len_Defeat::
	.string "I'm sinking!$"

Route013_2_Trainer_Len_After::
	.string "I followed FURRET across a root and\n"
	.string "went straight through it. Please tell me\l"
	.string "there's a drier way back.$"

Route013_2_Trainer_Runa_Intro::
	.string "My bug Pokemon could use a battle!$"

Route013_2_Trainer_Runa_Defeat::
	.string "Aw, we nearly had you!$"

Route013_2_Trainer_Runa_After::
	.string "SPINARAK keeps building webs across my\n"
	.string "tent flap. I have to ask permission to\l"
	.string "go to bed.$"

Route013_2_Trainer_Bo_Intro::
	.string "I knew you'd come looking for a battle!$"

Route013_2_Trainer_Bo_Defeat::
	.string "That's not what I foresaw!$"

Route013_2_Trainer_Bo_After::
	.string "All right, I heard the boards squeaking.\n"
	.string "You won't tell anyone, will you?$"

Route013_2_Trainer_Tessa_Intro::
	.string "My birds spotted you before I did!$"

Route013_2_Trainer_Tessa_Defeat::
	.string "They didn't warn me you're good!$"

Route013_2_Trainer_Tessa_After::
	.string "SPEAROW likes perching on that old sign.\n"
	.string "It gets quite cross when somebody\l"
	.string "stops to read it.$"

Route013_2_Trainer_Niels_Intro::
	.string "Let's battle while the wind's died down!$"

Route013_2_Trainer_Niels_Defeat::
	.string "Can't blame the wind for that!$"

Route013_2_Trainer_Niels_After::
	.string "I've spent half the morning chasing\n"
	.string "SKIPLOOM with my lunch still in my hand.$"

Route013_2_Trainer_Koen_Intro::
	.string "Show me how you've been training!$"

Route013_2_Trainer_Koen_Defeat::
	.string "You've put the work in!$"

Route013_2_Trainer_Koen_After::
	.string "GROWLITHE kept barking at my pocket\n"
	.string "while we searched for my glove. You can\l"
	.string "probably guess where it was.$"

Route013_2_Trainer_Iris_Intro::
	.string "Don't be scared of my BEEDRILL!$"

Route013_2_Trainer_Iris_Defeat::
	.string "Maybe we should've been scared!$"

Route013_2_Trainer_Iris_After::
	.string "I've raised BEEDRILL since it was a\n"
	.string "WEEDLE. It's really sweet once you stop\l"
	.string "waving your arms about.$"
