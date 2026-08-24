LionsarchCity_Steel_Factory_2F_MapScripts::
	.byte 0


SteelFactory_2F_Scientist_Battle1::
	trainerbattle_single TRAINER_FACULTY_2F_SCIENTIST_1, SteelFactory_2F_Scientist1_Intro, SteelFactory_2F_Scientist1_Defeat
	msgbox SteelFactory_2F_Scientist1_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_2F_Grunt_Battle::
	trainerbattle_single TRAINER_FACULTY_2F_GRUNT, SteelFactory_2F_Grunt_Intro, SteelFactory_2F_Grunt_Defeat
	msgbox SteelFactory_2F_Grunt_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_2F_Scientist_Battle2::
	trainerbattle_single TRAINER_FACULTY_2F_SCIENTIST_2, SteelFactory_2F_Scientist2_Intro, SteelFactory_2F_Scientist2_Defeat
	msgbox SteelFactory_2F_Scientist2_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_2F_Scientist_Lore1::
	lockall
	faceplayer
	msgbox SteelFactory_2F_Scientist_Lore1_Text
	releaseall
	return


SteelFactory_2F_Rector_Fallback::
	lockall
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
	compare VAR_TEMP_2, 8
	goto_if_eq SteelFactory_2F_Rector_Fallback_3
SteelFactory_2F_Rector_Fallback_1:
	compare VAR_TEMP_2, 9
	goto_if_eq SteelFactory_2F_Rector_Fallback_8
SteelFactory_2F_Rector_Fallback_6:
	compare VAR_TEMP_2, 8
	goto_if_eq SteelFactory_2F_Rector_Fallback_13
SteelFactory_2F_Rector_Fallback_11:
	faceplayer
	goto_if_set FLAG_STEEL_FACTORY_RECTOR_DEFEATED, SteelFactory_2F_Rector_Fallback_17
	goto_if_set FLAG_STEEL_FACTORY_RECTOR_CUTSCENE_TRIGGERED, SteelFactory_2F_Rector_Fallback_20
	releaseall
	end

SteelFactory_2F_Rector_Fallback_2:
	applymovement LOCALID_PLAYER, SteelFactory_2F_Rector_Fallback_Movement_0
	waitmovement
	goto SteelFactory_2F_Rector_Fallback_1

SteelFactory_2F_Rector_Fallback_3:
	compare VAR_TEMP_3, 21
	goto_if_eq SteelFactory_2F_Rector_Fallback_2
	goto SteelFactory_2F_Rector_Fallback_1

SteelFactory_2F_Rector_Fallback_7:
	applymovement LOCALID_PLAYER, SteelFactory_2F_Rector_Fallback_Movement_1
	waitmovement
	goto SteelFactory_2F_Rector_Fallback_6

SteelFactory_2F_Rector_Fallback_8:
	compare VAR_TEMP_3, 22
	goto_if_eq SteelFactory_2F_Rector_Fallback_7
	goto SteelFactory_2F_Rector_Fallback_6

SteelFactory_2F_Rector_Fallback_12:
	applymovement LOCALID_PLAYER, SteelFactory_2F_Rector_Fallback_Movement_2
	waitmovement
	goto SteelFactory_2F_Rector_Fallback_11

SteelFactory_2F_Rector_Fallback_13:
	compare VAR_TEMP_3, 23
	goto_if_eq SteelFactory_2F_Rector_Fallback_12
	goto SteelFactory_2F_Rector_Fallback_11

SteelFactory_2F_Rector_Fallback_17:
	setspeaker SteelFactory_2F_Rector_Fallback_Text_0
	msgbox SteelFactory_2F_Rector_After
	waitmessage
	setspeaker NULL
	releaseall
	end

SteelFactory_2F_Rector_Fallback_20:
	setspeaker SteelFactory_2F_Rector_Fallback_Text_0
	msgbox SteelFactory_2F_Rector_WaitingLine
	waitmessage
	setspeaker NULL
	trainerbattle_no_intro TRAINER_FACULTY_RECTOR, SteelFactory_2F_Rector_BattleDefeat
	call SteelFactory_2F_Rector_Defeated
	releaseall
	end


SteelFactory_2F_OverhearCutscene::
	goto_if_set FLAG_STEEL_FACTORY_RECTOR_DEFEATED, SteelFactory_2F_OverhearCutscene_2
	goto_if_set FLAG_STEEL_FACTORY_RECTOR_CUTSCENE_TRIGGERED, SteelFactory_2F_OverhearCutscene_5
	setflag FLAG_STEEL_FACTORY_RECTOR_CUTSCENE_TRIGGERED
	setvar VAR_TEMP_0, 1
	lockall
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 13
	goto_if_eq SteelFactory_2F_OverhearCutscene_9
SteelFactory_2F_OverhearCutscene_7:
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, SteelFactory_2F_OverhearCutscene_Movement_1
	waitmovement
	setspeaker SteelFactory_2F_OverhearCutscene_Text_0
	msgbox SteelFactory_2F_Rector_OpensMeeting
	waitmessage
	applymovement 8, SteelFactory_2F_OverhearCutscene_Movement_2
	goto_if_set FLAG_STEEL_FACTORY_FREED_POKEMON, SteelFactory_2F_OverhearCutscene_13
	setspeaker SteelFactory_2F_OverhearCutscene_Text_1
	msgbox SteelFactory_2F_Conrector_LaironsGood, MSGBOX_AUTOCLOSE
	waitmessage
SteelFactory_2F_OverhearCutscene_12:
	applymovement 8, SteelFactory_2F_OverhearCutscene_Movement_3
	delay 60
	applymovement 2, SteelFactory_2F_OverhearCutscene_Movement_2
	setspeaker SteelFactory_2F_OverhearCutscene_Text_0
	msgbox SteelFactory_2F_Rector_ShockSuggestion, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_PIN
	applymovement 2, SteelFactory_2F_OverhearCutscene_Movement_4
	delay 120
	applymovement 2, SteelFactory_2F_OverhearCutscene_Movement_5
	setspeaker SteelFactory_2F_OverhearCutscene_Text_2
	msgbox SteelFactory_2F_Barry_ShockDecline, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	setspeaker SteelFactory_2F_OverhearCutscene_Text_2
	msgbox SteelFactory_2F_Barry_MiningReport, MSGBOX_AUTOCLOSE
	waitmessage
	setspeaker NULL
	applymovement OBJ_EVENT_ID_CAMERA, SteelFactory_2F_OverhearCutscene_Movement_6
	waitmovement
	special RemoveCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, SteelFactory_2F_OverhearCutscene_Movement_7
	waitmovement
	playse SE_PIN
	applymovement 1, SteelFactory_2F_OverhearCutscene_Movement_8
	applymovement 2, SteelFactory_2F_OverhearCutscene_Movement_9
	applymovement 8, SteelFactory_2F_OverhearCutscene_Movement_8
	setspeaker SteelFactory_2F_OverhearCutscene_Text_0
	msgbox SteelFactory_2F_Rector_Recognises, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_FAILURE
	applymovement 1, SteelFactory_2F_OverhearCutscene_Movement_10
	applymovement 8, SteelFactory_2F_OverhearCutscene_Movement_11
	setspeaker SteelFactory_2F_OverhearCutscene_Text_0
	msgbox SteelFactory_2F_Rector_TurnsOnConrector, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 2, SteelFactory_2F_OverhearCutscene_Movement_5
	setspeaker SteelFactory_2F_OverhearCutscene_Text_0
	msgbox SteelFactory_2F_Rector_AngryOrders, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 8, SteelFactory_2F_OverhearCutscene_Movement_12
	applymovement LOCALID_PLAYER, SteelFactory_2F_OverhearCutscene_Movement_13
	applymovement 2, SteelFactory_2F_OverhearCutscene_Movement_14
	applymovement 10, SteelFactory_2F_OverhearCutscene_Movement_15
	waitmovement
	applymovement 2, SteelFactory_2F_OverhearCutscene_Movement_16
	waitmovement
	setspeaker SteelFactory_2F_OverhearCutscene_Text_2
	msgbox SteelFactory_2F_OverhearCutscene_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 2, SteelFactory_2F_OverhearCutscene_Movement_17
	applymovement 10, SteelFactory_2F_OverhearCutscene_Movement_18
	waitmovement 10
	removeobject 2
	removeobject 8
	removeobject 10
	applymovement 7, SteelFactory_2F_OverhearCutscene_Movement_19
	applymovement 1, SteelFactory_2F_OverhearCutscene_Movement_20
	applymovement LOCALID_PLAYER, SteelFactory_2F_Rector_Fallback_Movement_1
	delay 60
	applymovement LOCALID_PLAYER, SteelFactory_2F_OverhearCutscene_Movement_21
	waitmovement
	setspeaker SteelFactory_2F_OverhearCutscene_Text_0
	msgbox SteelFactory_2F_Rector_BattleChallenge
	waitmessage
	setspeaker NULL
	clearflag FLAG_HIDE_RECTOR_ELECTABUZZ_AFTER_BATTLE
	trainerbattle_no_intro TRAINER_FACULTY_RECTOR, SteelFactory_2F_Rector_BattleDefeat
	call SteelFactory_2F_Rector_Defeated
	end

SteelFactory_2F_OverhearCutscene_2:
	end

SteelFactory_2F_OverhearCutscene_5:
	end

SteelFactory_2F_OverhearCutscene_8:
	applymovement LOCALID_PLAYER, SteelFactory_2F_OverhearCutscene_Movement_0
	waitmovement
	goto SteelFactory_2F_OverhearCutscene_7

SteelFactory_2F_OverhearCutscene_9:
	compare VAR_TEMP_2, 16
	goto_if_eq SteelFactory_2F_OverhearCutscene_8
	goto SteelFactory_2F_OverhearCutscene_7

SteelFactory_2F_OverhearCutscene_13:
	setspeaker SteelFactory_2F_OverhearCutscene_Text_1
	msgbox SteelFactory_2F_Conrector_LaironsFreed, MSGBOX_AUTOCLOSE
	waitmessage
	goto SteelFactory_2F_OverhearCutscene_12


SteelFactory_2F_Rector_Defeated::
	setspeaker SteelFactory_2F_OverhearCutscene_Text_0
	msgbox SteelFactory_2F_Rector_DefeatedText1
	waitmessage
	setspeaker SteelFactory_2F_OverhearCutscene_Text_0
	msgbox SteelFactory_2F_Rector_DefeatedText2, MSGBOX_AUTOCLOSE
	waitmessage
	setspeaker NULL
	applymovement 7, SteelFactory_2F_Rector_Defeated_Movement_0
	applymovement 12, SteelFactory_2F_Rector_Defeated_Movement_0
	waitmovement 7
	waitmovement 12
	setflag FLAG_HIDE_RECTOR_ELECTABUZZ_AFTER_BATTLE
	applymovement 11, SteelFactory_2F_Rector_Defeated_Movement_1
	applymovement 1, SteelFactory_2F_Rector_Defeated_Movement_1
	waitmovement 11
	waitmovement 1
	removeobject 11
	removeobject 12
	removeobject 7
	removeobject 1
	setflag FLAG_STEEL_FACTORY_RECTOR_DEFEATED
	setflag FLAG_STEEL_FACTORY_COMPLETE
	clearflag FLAG_HIDE_LIONSARCH_RECTOR_SENDOFF
	clearflag FLAG_HIDE_LIONSARCH_BARRY_SENDOFF
	clearflag FLAG_HIDE_LIONSARCH_CONRECTOR_SENDOFF
	delay 30
	applymovement LOCALID_PLAYER, SteelFactory_2F_Rector_Defeated_Movement_1
	waitmovement
	playse SE_SLIDING_DOOR
	setvar VAR_LIONSARCH_CITY_STATE, 1
	warpsilent MAP_LIONSARCH_CITY, 10
	releaseall
	end


SteelFactory_2F_PC_Research::
	lock
	msgbox SteelFactory_2F_PC_Research_Text
	release
	return


SteelFactory_2F_PC_Logistics::
	lock
	msgbox SteelFactory_2F_PC_Logistics_Text
	release
	return


SteelFactory_2F_PC_Locked::
	lock
	msgbox SteelFactory_2F_PC_Locked_Text
	release
	return


SteelFactory_2F_Blueprint_Materials::
	lock
	msgbox SteelFactory_2F_Blueprint_Materials_Text
	release
	return


SteelFactory_2F_Blueprint_Assembly::
	lock
	msgbox SteelFactory_2F_Blueprint_Assembly_Text
	release
	return


SteelFactory_2F_Blueprint_RockSmash::
	lock
	msgbox SteelFactory_2F_Blueprint_RockSmash_Text
	release
	return


SteelFactory_2F_Rector_Fallback_Movement_0:
	walk_right
	walk_down
	face_left
	step_end

SteelFactory_2F_Rector_Fallback_Movement_1:
	face_left
	step_end

SteelFactory_2F_Rector_Fallback_Movement_2:
	walk_right
	walk_up
	face_left
	step_end

SteelFactory_2F_OverhearCutscene_Movement_0:
	walk_right
	face_down
	step_end

SteelFactory_2F_OverhearCutscene_Movement_1:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

SteelFactory_2F_OverhearCutscene_Movement_2:
	walk_up
	step_end

SteelFactory_2F_OverhearCutscene_Movement_3:
	walk_down
	face_up
	step_end

SteelFactory_2F_OverhearCutscene_Movement_4:
	face_down
	emote_question_mark
	step_end

SteelFactory_2F_OverhearCutscene_Movement_5:
	face_up
	step_end

SteelFactory_2F_OverhearCutscene_Movement_6:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

SteelFactory_2F_OverhearCutscene_Movement_7:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	step_end

SteelFactory_2F_OverhearCutscene_Movement_8:
	face_right
	emote_question_mark
	step_end

SteelFactory_2F_OverhearCutscene_Movement_9:
	face_right
	emote_double_exclamation_mark
	step_end

SteelFactory_2F_OverhearCutscene_Movement_10:
	face_down
	emote_x
	step_end

SteelFactory_2F_OverhearCutscene_Movement_11:
	face_up
	emote_exclamation_mark
	step_end

SteelFactory_2F_OverhearCutscene_Movement_12:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_right
	walk_fast_right
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

SteelFactory_2F_OverhearCutscene_Movement_13:
	face_down
	lock_facing_direction
	jump_up
	unlock_facing_direction
	step_end

SteelFactory_2F_OverhearCutscene_Movement_14:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
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

SteelFactory_2F_OverhearCutscene_Movement_15:
	jump_2_up
	jump_2_right
	jump_2_right
	jump_2_right
	jump_right
	jump_2_up
	jump_2_up
	step_end

SteelFactory_2F_OverhearCutscene_Movement_16:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

SteelFactory_2F_OverhearCutscene_Movement_17:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

SteelFactory_2F_OverhearCutscene_Movement_18:
	jump_2_up
	jump_2_up
	jump_2_up
	jump_2_up
	step_end

SteelFactory_2F_OverhearCutscene_Movement_19:
	walk_down
	walk_down
	walk_right
	walk_down
	walk_right
	step_end

SteelFactory_2F_OverhearCutscene_Movement_20:
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

SteelFactory_2F_OverhearCutscene_Movement_21:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

SteelFactory_2F_Rector_Defeated_Movement_0:
	enter_pokeball
	step_end

SteelFactory_2F_Rector_Defeated_Movement_1:
	walk_down
	walk_down
	step_end

SteelFactory_2F_Rector_Fallback_Text_0:
	.string "The Rector$"

SteelFactory_2F_OverhearCutscene_Text_0:
	.string "THE RECTOR$"

SteelFactory_2F_OverhearCutscene_Text_1:
	.string "THE CONRECTOR$"

SteelFactory_2F_OverhearCutscene_Text_2:
	.string "BARRY$"

SteelFactory_2F_OverhearCutscene_Text_3:
	.string "Come on you stupid fish, let's get out\n"
	.string "of here!$"

SteelFactory_2F_Scientist1_Intro::
	.string "You've made it this far?\p"
	.string "THE RECTOR will hear about this\n"
	.string "intrusion.$"

SteelFactory_2F_Scientist1_Defeat::
	.string "Impossible.\p"
	.string "My calculations were... flawless.$"

SteelFactory_2F_Scientist1_PostBattle::
	.string "Keep moving.\p"
	.string "You've already disrupted weeks of\n"
	.string "research.$"

SteelFactory_2F_Grunt_Intro::
	.string "Nobody gets past this floor without\n"
	.string "FACULTY clearance.\p"
	.string "That means you.$"

SteelFactory_2F_Grunt_Defeat::
	.string "How...?\p"
	.string "You're just a kid!$"

SteelFactory_2F_Grunt_PostBattle::
	.string "THE RECTOR's going to hear about every\n"
	.string "single one of you.$"

SteelFactory_2F_Scientist2_Intro::
	.string "Turn around.\p"
	.string "This floor is restricted.\p"
	.string "I won't ask twice.$"

SteelFactory_2F_Scientist2_Defeat::
	.string "My containment protocol...\p"
	.string "It failed.$"

SteelFactory_2F_Scientist2_PostBattle::
	.string "You'll regret reaching THE RECTOR.$"

SteelFactory_2F_Scientist_Lore1_Text::
	.string "This floor handles Faculty\n"
	.string "coordination.\p"
	.string "THE RECTOR reviews all field reports\n"
	.string "personally.\p"
	.string "We don't get many... visitors.$"

SteelFactory_2F_Rector_WaitingLine::
	.string "So you came back? I was hoping you\n"
	.string "would.$"

SteelFactory_2F_Rector_After::
	.string "The Faculty endures.\p"
	.string "This was one facility.\p"
	.string "There are others.$"

SteelFactory_2F_Rector_OpensMeeting::
	.string "Looks like the iron processing is ahead\n"
	.string "of schedule.\p"
	.string "You've both performed adequately this\n"
	.string "quarter, the yield figures are\l"
	.string "impressive.\p"
	.string "To make a long story short: Order wins,\n"
	.string "chaos loses.$"

SteelFactory_2F_Conrector_LaironsFreed::
	.string "Indeed, the processing yield was\n"
	.string "exceptional, sir.\p"
	.string "There was one small hiccup with the\n"
	.string "Lairon containment unit this morning,\l"
	.string "but I managed the issue, no problems at\l"
	.string "all sir.\p"
	.string "You see, the specimens had become\n"
	.string "unreliable. Diminishing returns. Worn\l"
	.string "teeth. Stress fractures.\p"
	.string "I made the executive call to release\n"
	.string "them before the voyage.\p"
	.string "Not worth shipping livestock that can't\n"
	.string "perform. Absolutely nothing to worry\l"
	.string "about, sir.$"

SteelFactory_2F_Conrector_LaironsGood::
	.string "Processing is complete, sir. Excellent\n"
	.string "yield.\p"
	.string "The Lairon unit consumed all\n"
	.string "impurity-heavy ore as intended.\p"
	.string "Only the highest-grade iron remains.\p"
	.string "One little Aron escaped this morning,\n"
	.string "but we managed to contain it.\p"
	.string "I've arranged for the specimens to be\n"
	.string "loaded onto the transport vessels in\l"
	.string "any moment.$"

SteelFactory_2F_Rector_ShockSuggestion::
	.string "How about you Barr.. Wouter?\p"
	.string "I notice your Magikarp is still not\n"
	.string "giving you any value?\p"
	.string "When my pokemon don't contribute, I let\n"
	.string "my Electabuzz handle them.\p"
	.string "A good shock now and then makes\n"
	.string "expectations very clear.\p"
	.string "Maybe Electabuzz could help you out\n"
	.string "with that?$"

SteelFactory_2F_Barry_ShockDecline::
	.string "I... appreciate the suggestion, sir.\p"
	.string "But Magikarp are quite sensitive to\n"
	.string "electricity. Apparently it discolors\l"
	.string "their scales.\p"
	.string "I wouldn't want to damage the...\n"
	.string "specimen quality.\p"
	.string "...That would be irresponsible.$"

SteelFactory_2F_Barry_MiningReport::
	.string "The mining operation hit every target,\n"
	.string "sir.\p"
	.string "We did have a brief evacuation. A\n"
	.string "civilian wandered into the tunnels.\p"
	.string "I handled it personally. Pushed them\n"
	.string "into a deep dark crevice.\p"
	.string "Hazard of the mine, really. Nothing\n"
	.string "special.$"

SteelFactory_2F_Rector_Recognises::
	.string "...You?\p"
	.string "What are you doing here?\p"
	.string "...\p"
	.string "Wait... you're the one who tried to stop\n"
	.string "us in the Cloud Forest as well?\p"
	.string "You just don't know when to quit, do\n"
	.string "you?\p"
	.string "$"

SteelFactory_2F_Rector_TurnsOnConrector::
	.string "And the Lairon.\p"
	.string "'Stress fractures'\p"
	.string "'Diminishing returns.'\p"
	.string "How convenient.$"

SteelFactory_2F_Rector_AngryOrders::
	.string "Load the boats.\p"
	.string "Both of you. NOW. I want neither of you\n"
	.string "on this floor when I am finished.$"

SteelFactory_2F_Rector_BattleChallenge::
	.string "You've become quite the nuisance.\p"
	.string "First the Cloud Forest, now our\n"
	.string "factory?\p"
	.string "You would be a great student of mine.$"

SteelFactory_2F_Rector_BattleIntro::
	.string "Show me what you are capable of. I will\n"
	.string "not hold back.$"

SteelFactory_2F_Rector_BattleDefeat::
	.string "...$"

SteelFactory_2F_Rector_DefeatedText1::
	.string "...\p"
	.string "...How.$"

SteelFactory_2F_Rector_DefeatedText2::
	.string "This changes nothing.\p"
	.string "The Faculty's reach goes further than\n"
	.string "this building.\p"
	.string "Far further.\p"
	.string "Follow me.$"

SteelFactory_2F_Barry_After::
	.string "The Rector is behind that door.\p"
	.string "He's not going to run. He never does.$"

SteelFactory_2F_PC_Research_Text::
	.string "FACULTY INTERNAL - CYCLE 14 SUMMARY\p"
	.string "- Output targets exceeded by 12%%.\p"
	.string "Specimen endurance remains within\n"
	.string "acceptable range.\p"
	.string "Note: biological variance in batch 7\n"
	.string "requires monitoring.\p"
	.string "Rector review pending. -$"

SteelFactory_2F_PC_Logistics_Text::
	.string "TRANSPORT MANIFEST - PENDING\n"
	.string "DISPATCH\p"
	.string "- Three shipments awaiting clearance.\p"
	.string "Contents: processed material, grade A.\p"
	.string "Destination: redacted.\p"
	.string "Estimated transit: 4 days by sea.\p"
	.string "All documentation has been filed under\n"
	.string "Rector authorization. -$"

SteelFactory_2F_PC_Locked_Text::
	.string "FACULTY ACCESS ONLY\p"
	.string "This terminal is locked.\p"
	.string "You cannot interact with it.$"

SteelFactory_2F_Blueprint_Materials_Text::
	.string "COMPONENT SPECIFICATION - DRAFT 9\p"
	.string "- Primary substrate: high-density ore,\n"
	.string "origin Lions Mountains.\p"
	.string "Secondary binding agent: unspecified\n"
	.string "biological compound, sourced on-site.\p"
	.string "Alloy stability under sustained\n"
	.string "resonance: 94%%.\p"
	.string "Warning: do not substitute substrate\n"
	.string "without Rector approval. -$"

SteelFactory_2F_Blueprint_Assembly_Text::
	.string "ASSEMBLY PHASE - STRUCTURAL OVERVIEW\p"
	.string "- Layer configuration classified. See\n"
	.string "Rector annex.\p"
	.string "Core channel dimensions have been\n"
	.string "adjusted per Cycle 11 findings.\p"
	.string "Note from lead researcher: the material\n"
	.string "responds differently than anticipated.\p"
	.string "Further testing required before full\n"
	.string "production begins. -$"

SteelFactory_2F_Blueprint_RockSmash_Text::
	.string "FIELD OBSERVATION - MINING DIVISION\p"
	.string "- During extraction operations in the\n"
	.string "lower ore deposits, repeated\l"
	.string "application of concentrated force\l"
	.string "against the rock face produced a\l"
	.string "consistent fracture response.\p"
	.string "Pokemon involved in the drilling\n"
	.string "process began replicating the motion\l"
	.string "instinctively.\p"
	.string "The technique has been documented and\n"
	.string "encoded.\p"
	.string "See attached disc for move data: ROCK\n"
	.string "SMASH. -$"
