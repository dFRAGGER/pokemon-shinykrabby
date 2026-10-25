Marshduke_Indoor_House2_MapScripts::
	.byte 0


Marshduke_Indoor_House2_EventScript_MoveRelearner::
	lock
	faceplayer
	specialvar VAR_RESULT, IsRandomMovesActivated
	compare VAR_RESULT, TRUE
	goto_if_eq Marshduke_Indoor_House2_EventScript_MoveRelearner_2
	goto_if_unset FLAG_TEMP_1, Marshduke_Indoor_House2_EventScript_MoveRelearner_5
Marshduke_Indoor_House2_EventScript_MoveRelearner_4:
	goto Marshduke_Indoor_House2_EventScript_MoveRelearnerAsk
	return

Marshduke_Indoor_House2_EventScript_MoveRelearner_2:
	msgbox Marshduke_Indoor_House2_EventScript_MoveRelearner_Text_0
	release
	end

Marshduke_Indoor_House2_EventScript_MoveRelearner_5:
	msgbox Marshduke_Indoor_House2_EventScript_MoveRelearner_Text_1
	setflag FLAG_TEMP_1
	goto Marshduke_Indoor_House2_EventScript_MoveRelearner_4


Marshduke_Indoor_House2_EventScript_MoveRelearnerAsk::
	checkitem ITEM_HEART_SCALE
	compare VAR_RESULT, FALSE
	goto_if_eq Marshduke_Indoor_House2_EventScript_MoveRelearnerAsk_2
Marshduke_Indoor_House2_EventScript_MoveRelearnerAsk_1:
	msgbox Marshduke_Indoor_House2_EventScript_MoveRelearnerAsk_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Marshduke_Indoor_House2_EventScript_MoveRelearnerAsk_5
Marshduke_Indoor_House2_EventScript_MoveRelearnerAsk_4:
	goto Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon
	return

Marshduke_Indoor_House2_EventScript_MoveRelearnerAsk_2:
	goto Marshduke_Indoor_House2_EventScript_MoveRelearnerComeBack
	goto Marshduke_Indoor_House2_EventScript_MoveRelearnerAsk_1

Marshduke_Indoor_House2_EventScript_MoveRelearnerAsk_5:
	goto Marshduke_Indoor_House2_EventScript_MoveRelearnerComeBack
	goto Marshduke_Indoor_House2_EventScript_MoveRelearnerAsk_4


Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon::
	msgbox Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_Text_0
	setmoverelearnerstate MOVE_RELEARNER_LEVEL_UP_MOVES
	chooseboxmon SELECT_PC_MON_MOVE_RELEARNER
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_2
Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_1:
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_5
Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_4:
	special HasMovesToRelearn
	compare VAR_RESULT, FALSE
	goto_if_eq Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_8
Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_7:
	msgbox Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_Text_3
	special TeachMoveRelearnerMove
	waitstate
	compare VAR_0x8004, 0
	goto_if_eq Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_11
Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_10:
	msgbox Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_Text_4
	removeitem ITEM_HEART_SCALE
	goto Marshduke_Indoor_House2_EventScript_MoveRelearnerComeBack
	return

Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_2:
	goto Marshduke_Indoor_House2_EventScript_MoveRelearnerComeBack
	goto Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_1

Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_5:
	msgbox Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_Text_1
	goto Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon
	goto Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_4

Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_8:
	msgbox Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_Text_2
	goto Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon
	goto Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_7

Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_11:
	goto Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon
	goto Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_10


Marshduke_Indoor_House2_EventScript_MoveRelearnerComeBack::
	msgbox Marshduke_Indoor_House2_EventScript_MoveRelearnerComeBack_Text_0
	closemessage
	release
	end


Marshduke_Indoor_House2_EventScript_MoveDeleter::
	lock
	faceplayer
	msgbox Marshduke_Indoor_House2_EventScript_MoveDeleter_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Marshduke_Indoor_House2_EventScript_MoveDeleter_2
Marshduke_Indoor_House2_EventScript_MoveDeleter_1:
	goto Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon
	return

Marshduke_Indoor_House2_EventScript_MoveDeleter_2:
	goto Marshduke_Indoor_House2_EventScript_MoveDeleterComeAgain
	goto Marshduke_Indoor_House2_EventScript_MoveDeleter_1


Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon::
	msgbox Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_Text_0
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_2
Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_1:
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_5
	special GetNumMovesSelectedMonHas
	compare VAR_RESULT, 1
	goto_if_eq Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_8
	msgbox Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_Text_3
	fadescreen FADE_TO_BLACK
	special MoveDeleterChooseMoveToForget
	fadescreen FADE_FROM_BLACK
	compare VAR_0x8005, MAX_MON_MOVES
	goto_if_eq Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_11
Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_10:
	special BufferMoveDeleterNicknameAndMove
	msgbox Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_14
Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_13:
	special IsLastMonThatKnowsSurf
	compare VAR_RESULT, TRUE
	goto_if_eq Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_17
	special MoveDeleterForgetMove
	playfanfare MUS_MOVE_DELETED
	waitfanfare
	msgbox Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_Text_6
	release
	end

Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_2:
	goto Marshduke_Indoor_House2_EventScript_MoveDeleterComeAgain
	goto Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_1

Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_5:
	msgbox Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_Text_1
	release
	end

Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_8:
	special BufferMoveDeleterNicknameAndMove
	msgbox Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_Text_2
	release
	end

Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_11:
	goto Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon
	goto Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_10

Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_14:
	goto Marshduke_Indoor_House2_EventScript_MoveDeleterComeAgain
	goto Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_13

Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_17:
	special BufferMoveDeleterNicknameAndMove
	msgbox Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_Text_5
	release
	end


Marshduke_Indoor_House2_EventScript_MoveDeleterComeAgain::
	msgbox Marshduke_Indoor_House2_EventScript_MoveDeleterComeAgain_Text_0
	release
	end


Marshduke_Indoor_House2_EventScript_MoveRelearner_Text_0:
	.string "Sorry, I can't help you.$"

Marshduke_Indoor_House2_EventScript_MoveRelearner_Text_1:
	.string "Everyone in Marshduke is busy\n"
	.string "remembering the past. I help Pokémon\l"
	.string "remember what they once knew.\p"
	.string "A move they forgot can always be found\n"
	.string "again. It's still in there somewhere.\p"
	.string "My wife does the opposite, mind you.\n"
	.string "Between the two of us, nothing is ever\l"
	.string "truly lost or stuck.\p"
	.string "I'll help your Pokémon remember a move\n"
	.string "for one Heart Scale.$"

Marshduke_Indoor_House2_EventScript_MoveRelearnerAsk_Text_0:
	.string "Ah, a Heart Scale! Shall I help one of\n"
	.string "your Pokémon remember a move?$"

Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_Text_0:
	.string "Which Pokémon should remember a move?$"

Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_Text_1:
	.string "An Egg? It hasn't lived long enough to\n"
	.string "have anything to remember.$"

Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_Text_2:
	.string "Hmm... There's nothing this Pokémon has\n"
	.string "forgotten that I can bring back.$"

Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_Text_3:
	.string "Which move should it remember?$"

Marshduke_Indoor_House2_EventScript_MoveRelearnerChooseMon_Text_4:
	.string "{PLAYER} handed over one Heart Scale in\n"
	.string "exchange.$"

Marshduke_Indoor_House2_EventScript_MoveRelearnerComeBack_Text_0:
	.string "If your Pokémon ever need to remember\n"
	.string "a move, come back with a Heart Scale.$"

Marshduke_Indoor_House2_EventScript_MoveDeleter_Text_0:
	.string "A whole city that can't stop\n"
	.string "remembering... it's making me crazy.\p"
	.string "How about we start to forget some\n"
	.string "things?\p"
	.string "I can help your Pokémon to let go of\n"
	.string "moves they no longer need.\p"
	.string "Shall I make one of your Pokémon forget\n"
	.string "a move?$"

Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_Text_0:
	.string "Which Pokémon should forget a move?$"

Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_Text_1:
	.string "An Egg doesn't know any moves yet.\n"
	.string "There's nothing to let go of.$"

Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_Text_2:
	.string "{STR_VAR_1} only knows one move. I\n"
	.string "can't take that away from it.$"

Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_Text_3:
	.string "Which move should be forgotten?$"

Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_Text_4:
	.string "{STR_VAR_1}'s {STR_VAR_2}?\n"
	.string "You're sure it should forget that?$"

Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_Text_5:
	.string "Hm... Your {STR_VAR_1} doesn't seem\n"
	.string "willing to forget Surf.$"

Marshduke_Indoor_House2_EventScript_MoveDeleterChooseMon_Text_6:
	.string "There. {STR_VAR_1} has let go of\n"
	.string "{STR_VAR_2} completely.\p"
	.string "Don't worry. If it ever wants it back, my\n"
	.string "husband knows the way.$"

Marshduke_Indoor_House2_EventScript_MoveDeleterComeAgain_Text_0:
	.string "Come back whenever your Pokémon are\n"
	.string "carrying moves they no longer need.$"
