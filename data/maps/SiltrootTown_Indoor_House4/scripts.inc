SiltrootTown_Indoor_House4_MapScripts::
	.byte 0


SiltrootTown_House4_FatGuy::
	lock
	faceplayer
	goto_if_set FLAG_SILTROOT_HOUSE4_FAT_GUY_TRUSTS, SiltrootTown_House4_FatGuy_2
	checkitem ITEM_POKEBLOCK_CASE
	compare VAR_RESULT, FALSE
	goto_if_eq SiltrootTown_House4_FatGuy_5
	msgbox SiltrootTown_House4_FatGuy_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_PIN
	applymovement 1, SiltrootTown_House4_FatGuy_Movement_0
	waitmovement
	msgbox SiltrootTown_House4_FatGuy_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	msgbox SiltrootTown_House4_FatGuy_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 1, SiltrootTown_House4_FatGuy_Movement_1
	waitmovement
	delay 120
	applymovement 1, SiltrootTown_House4_FatGuy_Movement_2
	waitmovement
	msgbox SiltrootTown_House4_FatGuy_Text_5, MSGBOX_AUTOCLOSE
	waitmessage
	delay 40
	msgbox SiltrootTown_House4_FatGuy_Text_6, MSGBOX_AUTOCLOSE
	waitmessage
	setflag FLAG_SILTROOT_HOUSE4_FAT_GUY_TRUSTS
	goto SiltrootTown_House4_TryGrind
	end

SiltrootTown_House4_FatGuy_2:
	msgbox SiltrootTown_House4_FatGuy_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	goto SiltrootTown_House4_TryGrind
	end

SiltrootTown_House4_FatGuy_5:
	msgbox SiltrootTown_House4_FatGuy_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


SiltrootTown_House4_TryGrind::
	specialvar VAR_RESULT, GetFirstFreePokeblockSlot
	compare VAR_RESULT, 65535
	goto_if_eq SiltrootTown_House4_TryGrind_2
	specialvar VAR_RESULT, PlayerHasBerries
	compare VAR_RESULT, FALSE
	goto_if_eq SiltrootTown_House4_TryGrind_5
	setvar VAR_0x8009, 1
	copyvar VAR_0x8004, VAR_0x8009
	fadescreen FADE_TO_BLACK
	special DoBerryBlending
	waitstate
	msgbox SiltrootTown_House4_TryGrind_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	releaseall
	end

SiltrootTown_House4_TryGrind_2:
	msgbox SiltrootTown_House4_TryGrind_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end

SiltrootTown_House4_TryGrind_5:
	msgbox SiltrootTown_House4_TryGrind_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


SiltrootTown_House4_FatGuy_Movement_0:
	emote_question_mark
	face_player
	step_end

SiltrootTown_House4_FatGuy_Movement_1:
	face_away_player
	step_end

SiltrootTown_House4_FatGuy_Movement_2:
	face_player
	step_end

SiltrootTown_House4_FatGuy_Text_0:
	.string "Oh. You again.\p"
	.string "Fine. What do you want ground?$"

SiltrootTown_House4_FatGuy_Text_1:
	.string "Hey. HEY.\p"
	.string "I don't know you.\p"
	.string "This is a private residence.\p"
	.string "Who told you about my grinder?\p"
	.string "Actually, don't answer that.\p"
	.string "Just leave.$"

SiltrootTown_House4_FatGuy_Text_2:
	.string "...Ugh.\p"
	.string "You're still standing there.$"

SiltrootTown_House4_FatGuy_Text_3:
	.string "Wait.\p"
	.string "Is that Ali's Stash Case?\p"
	.string "Where did you get that?\p"
	.string "Did you go into the shed?\p"
	.string "Because NOBODY is supposed to go into\n"
	.string "the shed.$"

SiltrootTown_House4_FatGuy_Text_4:
	.string "...Unless Ali sent you.\p"
	.string "Did Ali send you?\p"
	.string "You know what, it doesn't matter.\p"
	.string "I'm not getting involved.\p"
	.string "I don't know anything about any shed.$"

SiltrootTown_House4_FatGuy_Text_5:
	.string "...Fine.\p"
	.string "FINE.\p"
	.string "You've got the case, you've got the\n"
	.string "stash.\p"
	.string "You clearly know what you're doing.\p"
	.string "I just... I don't normally let strangers\n"
	.string "near my grinder.\p"
	.string "Last time I did, some guy showed up with\n"
	.string "a bag of berries.\p"
	.string "Oran Berries, to be precise.\p"
	.string "Put them straight in the grinder,\n"
	.string "apparently this is a thing in another\l"
	.string "region?\p"
	.string "I had to watch.\p"
	.string "I couldn't stop him.\p"
	.string "I was too stunned.\p"
	.string "Everybody knows a grinder needs some\n"
	.string "fresh cut buds.\p"
	.string "WHAT DID HE THINK WOULD HAPPEN?$"

SiltrootTown_House4_FatGuy_Text_6:
	.string "Okay.\p"
	.string "Okay okay okay.\p"
	.string "You seem alright.\p"
	.string "You've got good taste in suppliers at\n"
	.string "least.\p"
	.string "I'll run it for you.\p"
	.string "But don't talk to me while it's going.\p"
	.string "And please, for the love of Arceus, use\n"
	.string "something decent.\p"
	.string "Not some homemade, self-grown,\n"
	.string "nonsense.\p"
	.string "Or actual Berries for god's sake.$"

SiltrootTown_House4_TryGrind_Text_0:
	.string "Your Stash Case is packed solid.\p"
	.string "No room for anything new.\p"
	.string "Bring your grind to\l"
	.string "the Rolling Table at Ali's first.$"

SiltrootTown_House4_TryGrind_Text_1:
	.string "You've got nothing to grind.\p"
	.string "Come back when you have some stash.$"

SiltrootTown_House4_TryGrind_Text_2:
	.string "Not bad.\p"
	.string "I'll admit... you've got decent stuff.\p"
	.string "Come back anytime.\p"
	.string "Just... call ahead next time.\p"
	.string "I'm serious.$"
