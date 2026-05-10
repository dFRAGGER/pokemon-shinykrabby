SiltrootTown_Indoor_House4_MapScripts::
	.byte 0


SiltrootTown_House4_FatGuy::
# 9 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	lock
# 10 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	faceplayer
# 13 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	goto_if_set FLAG_SILTROOT_HOUSE4_FAT_GUY_TRUSTS, SiltrootTown_House4_FatGuy_2
# 21 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	checkitem ITEM_POKEBLOCK_CASE
# 22 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SiltrootTown_House4_FatGuy_5
# 30 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	msgbox SiltrootTown_House4_FatGuy_Text_2, MSGBOX_AUTOCLOSE
# 31 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	waitmessage
# 32 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	playse SE_PIN
# 33 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	applymovement 1, SiltrootTown_House4_FatGuy_Movement_0
# 34 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	waitmovement
# 35 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	msgbox SiltrootTown_House4_FatGuy_Text_3, MSGBOX_AUTOCLOSE
# 36 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	waitmessage
# 37 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	msgbox SiltrootTown_House4_FatGuy_Text_4, MSGBOX_AUTOCLOSE
# 38 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	waitmessage
# 39 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	applymovement 1, SiltrootTown_House4_FatGuy_Movement_1
# 40 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	waitmovement
# 41 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	delay 120
# 42 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	applymovement 1, SiltrootTown_House4_FatGuy_Movement_2
# 43 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	waitmovement
# 44 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	msgbox SiltrootTown_House4_FatGuy_Text_5, MSGBOX_AUTOCLOSE
# 45 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	waitmessage
# 46 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	delay 40
# 47 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	msgbox SiltrootTown_House4_FatGuy_Text_6, MSGBOX_AUTOCLOSE
# 48 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	waitmessage
# 49 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	setflag FLAG_SILTROOT_HOUSE4_FAT_GUY_TRUSTS
# 50 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	goto SiltrootTown_House4_TryGrind
	end

SiltrootTown_House4_FatGuy_2:
# 14 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	msgbox SiltrootTown_House4_FatGuy_Text_0, MSGBOX_AUTOCLOSE
# 15 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	waitmessage
# 16 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	goto SiltrootTown_House4_TryGrind
	end

SiltrootTown_House4_FatGuy_5:
# 23 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	msgbox SiltrootTown_House4_FatGuy_Text_1, MSGBOX_AUTOCLOSE
# 24 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	waitmessage
# 25 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	release
	end


SiltrootTown_House4_TryGrind::
# 57 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	specialvar VAR_RESULT, GetFirstFreePokeblockSlot
# 58 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	compare VAR_RESULT, 65535
	goto_if_eq SiltrootTown_House4_TryGrind_2
# 66 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	specialvar VAR_RESULT, PlayerHasBerries
# 67 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SiltrootTown_House4_TryGrind_5
# 75 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	setvar VAR_0x8009, 1
# 76 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 77 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 78 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	special DoBerryBlending
# 79 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	waitstate
# 80 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	msgbox SiltrootTown_House4_TryGrind_Text_2, MSGBOX_AUTOCLOSE
# 81 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	waitmessage
# 82 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	releaseall
	end

SiltrootTown_House4_TryGrind_2:
# 59 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	msgbox SiltrootTown_House4_TryGrind_Text_0, MSGBOX_AUTOCLOSE
# 60 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	waitmessage
# 61 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	release
	end

SiltrootTown_House4_TryGrind_5:
# 68 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	msgbox SiltrootTown_House4_TryGrind_Text_1, MSGBOX_AUTOCLOSE
# 69 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	waitmessage
# 70 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	release
	end


# 33 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
SiltrootTown_House4_FatGuy_Movement_0:
# 33 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	emote_question_mark
# 33 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	face_player
	step_end

# 39 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
SiltrootTown_House4_FatGuy_Movement_1:
# 39 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	face_away_player
	step_end

# 42 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
SiltrootTown_House4_FatGuy_Movement_2:
# 42 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	face_player
	step_end

SiltrootTown_House4_FatGuy_Text_0:
# 14 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	.string "Oh. You again.\p"
	.string "Fine. What do you want ground?$"

SiltrootTown_House4_FatGuy_Text_1:
# 23 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	.string "Hey. HEY.\p"
	.string "I don't know you.\p"
	.string "This is a private residence.\p"
	.string "Who told you about my grinder?\p"
	.string "Actually, don't answer that.\p"
	.string "Just leave.$"

SiltrootTown_House4_FatGuy_Text_2:
# 30 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	.string "...Ugh.\p"
	.string "You're still standing there.$"

SiltrootTown_House4_FatGuy_Text_3:
# 35 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	.string "Wait.\p"
	.string "Is that Ali's Stash Case?\p"
	.string "Where did you get that?\p"
	.string "Did you go into the shed?\p"
	.string "Because NOBODY is supposed to go into\n"
	.string "the shed.$"

SiltrootTown_House4_FatGuy_Text_4:
# 37 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	.string "...Unless Ali sent you.\p"
	.string "Did Ali send you?\p"
	.string "You know what, it doesn't matter.\p"
	.string "I'm not getting involved.\p"
	.string "I don't know anything about any shed.$"

SiltrootTown_House4_FatGuy_Text_5:
# 44 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
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
# 47 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
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
# 59 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	.string "Your Stash Case is packed solid.\p"
	.string "No room for anything new.\p"
	.string "Bring your grind to\l"
	.string "the Rolling Table at Ali's first.$"

SiltrootTown_House4_TryGrind_Text_1:
# 68 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	.string "You've got nothing to grind.\p"
	.string "Come back when you have some stash.$"

SiltrootTown_House4_TryGrind_Text_2:
# 80 "data/maps/SiltrootTown_Indoor_House4/scripts.pory"
	.string "Not bad.\p"
	.string "I'll admit... you've got decent stuff.\p"
	.string "Come back anytime.\p"
	.string "Just... call ahead next time.\p"
	.string "I'm serious.$"
