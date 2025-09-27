Indoor_Maasje_Jakub_Home_MapScripts::
	.byte 0


Indoor_Maasje_Jakub_Home_JakubConvo::
# 4 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	lock
# 5 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0
# 6 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jakub_Home_JakubConvo_3
Indoor_Maasje_Jakub_Home_JakubConvo_1:
# 11 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jakub_Home_JakubConvo_8
Indoor_Maasje_Jakub_Home_JakubConvo_6:
# 14 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jakub_Home_JakubConvo_13
Indoor_Maasje_Jakub_Home_JakubConvo_11:
# 86 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jakub_Home_JakubConvo_18
Indoor_Maasje_Jakub_Home_JakubConvo_16:
# 89 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	return

Indoor_Maasje_Jakub_Home_JakubConvo_2:
# 7 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 8 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 9 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setflag FLAG_JAKUB_CONVO
	goto Indoor_Maasje_Jakub_Home_JakubConvo_1

Indoor_Maasje_Jakub_Home_JakubConvo_3:
# 6 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_JAKUB_CONVO, Indoor_Maasje_Jakub_Home_JakubConvo_2
	goto Indoor_Maasje_Jakub_Home_JakubConvo_1

Indoor_Maasje_Jakub_Home_JakubConvo_7:
# 12 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_1
	goto Indoor_Maasje_Jakub_Home_JakubConvo_6

Indoor_Maasje_Jakub_Home_JakubConvo_8:
# 11 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_JAKUB_CONVO, Indoor_Maasje_Jakub_Home_JakubConvo_7
	goto Indoor_Maasje_Jakub_Home_JakubConvo_6

Indoor_Maasje_Jakub_Home_JakubConvo_12:
# 15 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_2
# 16 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 17 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 18 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	giveitem ITEM_HELIX_FOSSIL
# 19 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_HIDE_PETELONGFELLOW, Indoor_Maasje_Jakub_Home_JakubConvo_22
# 24 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_4, MSGBOX_AUTOCLOSE
# 25 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
Indoor_Maasje_Jakub_Home_JakubConvo_21:
# 27 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 28 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 29 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Indoor_Maasje_Jakub_Home_JakubConvo_28
Indoor_Maasje_Jakub_Home_JakubConvo_27:
# 52 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	playse SE_PIN
# 53 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_1
# 54 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 55 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 56 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_5, MSGBOX_AUTOCLOSE
# 57 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 58 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_4
# 59 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 60 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 61 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_6, MSGBOX_AUTOCLOSE
# 62 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 63 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 64 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_7, MSGBOX_AUTOCLOSE
# 65 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 66 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 67 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_8, MSGBOX_AUTOCLOSE
# 68 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 69 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_5
# 71 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
Indoor_Maasje_Jakub_Home_JakubConvo_25:
# 73 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	faceplayer
# 74 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_HIDE_PETELONGFELLOW, Indoor_Maasje_Jakub_Home_JakubConvo_32
# 79 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_10
# 80 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
Indoor_Maasje_Jakub_Home_JakubConvo_31:
# 82 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setflag FLAG_JAKUB_CONVO_2
# 83 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	end

Indoor_Maasje_Jakub_Home_JakubConvo_13:
# 14 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_JAKUB_CONVO_2, Indoor_Maasje_Jakub_Home_JakubConvo_12
	goto Indoor_Maasje_Jakub_Home_JakubConvo_11

Indoor_Maasje_Jakub_Home_JakubConvo_17:
# 87 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_11
	goto Indoor_Maasje_Jakub_Home_JakubConvo_16

Indoor_Maasje_Jakub_Home_JakubConvo_18:
# 86 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_JAKUB_CONVO_2, Indoor_Maasje_Jakub_Home_JakubConvo_17
	goto Indoor_Maasje_Jakub_Home_JakubConvo_16

Indoor_Maasje_Jakub_Home_JakubConvo_22:
# 20 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_3, MSGBOX_AUTOCLOSE
# 21 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
	goto Indoor_Maasje_Jakub_Home_JakubConvo_21

Indoor_Maasje_Jakub_Home_JakubConvo_26:
# 30 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	playse SE_PIN
# 31 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_1
# 32 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 33 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 34 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_5, MSGBOX_AUTOCLOSE
# 35 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 36 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_2
# 37 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 38 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 39 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_6, MSGBOX_AUTOCLOSE
# 40 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 41 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 42 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_7, MSGBOX_AUTOCLOSE
# 43 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 44 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 45 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_8, MSGBOX_AUTOCLOSE
# 46 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 47 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 48 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_3
# 49 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
	goto Indoor_Maasje_Jakub_Home_JakubConvo_25

Indoor_Maasje_Jakub_Home_JakubConvo_28:
# 29 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq Indoor_Maasje_Jakub_Home_JakubConvo_26
	goto Indoor_Maasje_Jakub_Home_JakubConvo_27

Indoor_Maasje_Jakub_Home_JakubConvo_32:
# 75 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_9
# 76 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
	goto Indoor_Maasje_Jakub_Home_JakubConvo_31


Indoor_Maasje_Jakub_Home_SiennaConvo::
# 93 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	lock
# 94 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	faceplayer
# 95 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jakub_Home_SiennaConvo_2
# 99 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_SiennaConvo_Text_1
Indoor_Maasje_Jakub_Home_SiennaConvo_1:
# 101 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	return

Indoor_Maasje_Jakub_Home_SiennaConvo_2:
# 96 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0
	goto Indoor_Maasje_Jakub_Home_SiennaConvo_1


Indoor_Maasje_Jakub_Home_GeorgeConvo::
# 105 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	lock
# 106 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	faceplayer
# 107 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jakub_Home_GeorgeConvo_2
# 111 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_1
Indoor_Maasje_Jakub_Home_GeorgeConvo_1:
# 113 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	return

Indoor_Maasje_Jakub_Home_GeorgeConvo_2:
# 108 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_0
	goto Indoor_Maasje_Jakub_Home_GeorgeConvo_1


# 5 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0:
# 5 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	face_player
	step_end

# 31 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jakub_Home_JakubConvo_Movement_1:
# 31 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	emote_exclamation_mark
	step_end

# 36 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jakub_Home_JakubConvo_Movement_2:
# 36 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 36 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 36 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 36 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 36 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 36 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 36 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 36 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 36 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 36 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 36 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 36 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
	step_end

# 48 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jakub_Home_JakubConvo_Movement_3:
# 48 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 48 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 48 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 48 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 48 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 48 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 48 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 48 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 48 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 48 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 48 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 48 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
	step_end

# 58 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jakub_Home_JakubConvo_Movement_4:
# 58 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 58 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 58 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 58 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 58 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 58 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 58 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 58 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 58 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 58 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
	step_end

# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jakub_Home_JakubConvo_Movement_5:
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
	step_end

Indoor_Maasje_Jakub_Home_JakubConvo_Text_0:
# 7 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Hi there, my name is {COLOR GREEN}Jacob{COLOR DARK_GRAY}. Welcome to\n"
	.string "our home!\p"
	.string "...Professor Birds sent you?\p"
	.string "To catch rare species of Pokémon?\p"
	.string "And I can help you with that???\p"
	.string "That old fool...\p"
	.string "I don't have the time to help you with\n"
	.string "that, I'm afraid.\p"
	.string "I'm the one who needs help right now...\p"
	.string "You see this whole mess? The entire\n"
	.string "town is overrun.\p"
	.string "And these aren't normal Krabby. They're\n"
	.string "agitated, aggressive... lost.\p"
	.string "This all started when that new gym\n"
	.string "leader, Pete Longfellow, showed up.\p"
	.string "Rumor has it that he is part of a secret\n"
	.string "group called The Faculty.\p"
	.string "Apparently, this group is obsessed\n"
	.string "with... 'structure'. They talk about\l"
	.string "'potential' and 'discipline', but\l"
	.string "something about them feels wrong.\p"
	.string "They look at Pokémon not as partners,\n"
	.string "but as things to be optimized, like\l"
	.string "numbers in an equation.\p"
	.string "The thing is... Krabby is my favorite\n"
	.string "Pokémon!\p"
	.string "I've spent my whole life here watching\n"
	.string "them, and I've never seen anything like\l"
	.string "this.\p"
	.string "It feels so... wrong.\p"
	.string "It's like the soul of the town is sick.\p"
	.string "I've heard strange humming sounds\n"
	.string "coming from Crabhill, just north-west\l"
	.string "of here.\p"
	.string "Rumor has it there's a unique Krabby\n"
	.string "deep in the caves there, the alpha of\l"
	.string "the whole colony.\p"
	.string "If The Faculty is involved, I'm sure\n"
	.string "they're targeting the leader to cause\l"
	.string "all this chaos.\p"
	.string "I don't know what their grand plan is,\n"
	.string "but this feels like the first step.\p"
	.string "Please, can you go to Krabby Hill and\n"
	.string "investigate? Find that alpha Krabby\l"
	.string "and see what's happening to it.\p"
	.string "Whatever they're doing, you need to be\n"
	.string "the one to stop it.\p"
	.string "Freeing their leader is the only way to\n"
	.string "calm the colony. You'd be helping me a\l"
	.string "lot... and you'd be helping them.$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_1:
# 12 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "{COLOR GREEN}Jacob: {COLOR DARK_GRAY}Please help me and my family,\n"
	.string "little George can't play outside right\l"
	.string "now. He has been gaming on his GameBoy\l"
	.string "all day.$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_2:
# 15 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "{COLOR GREEN}Jacob: {COLOR DARK_GRAY}... WHAT??\p"
	.string "You saw the alpha Krabby, and it was a\n"
	.string "SHINY KRABBY??\p"
	.string "You helped the other Krabby's snap out\n"
	.string "of their confusion?\p"
	.string "Thank you so much!!\p"
	.string "We, in Maasje, owe you so much!\p"
	.string "Now my son George can go outside and\n"
	.string "play again!\p"
	.string "Here, take this, as a gift of gratitude:$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_3:
# 20 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "I think this is a fossil of an ancient\n"
	.string "pokemon.\p"
	.string "I found it while exploring our coastal\n"
	.string "caves looking for Krabby's.\p"
	.string "I'm not sure what to do with it though,\n"
	.string "but maybe my friend Daan can help you\l"
	.string "with that.\p"
	.string "He lives deep in the cloud forest, in\n"
	.string "Mist City.\p"
	.string "I heard he is running a research center\n"
	.string "that is looking into the diversity of\l"
	.string "Pokemon and their origins.\p"
	.string "He also gives guided tours through\n"
	.string "parts of the ancient forest.\p"
	.string "He can be quite passionate about\n"
	.string "protecting the forest, so don't drop\l"
	.string "any litter!\p"
	.string "Recently, a path has been created\n"
	.string "north of this town towards Mist City.\p"
	.string "It used to take days to reach the deep\n"
	.string "parts of the Cloud Forest.\p"
	.string "If you want to take the path, you\n"
	.string "should show the park rangers a gym\l"
	.string "badge, otherwise the forest might be\l"
	.string "too dangerous.\p"
	.string "I think you might have it in you to\n"
	.string "defeat that guy called Pete Longfellow,\l"
	.string "the new gym leader.\p"
	.string "WHAT???!!\p"
	.string "You already beat him?\p"
	.string "Wow.....$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_4:
# 24 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "I think this is a fossil of an ancient\n"
	.string "pokemon.\p"
	.string "I found it while exploring our coastal\n"
	.string "caves looking for Krabby's.\p"
	.string "I'm not sure what to do with it though,\n"
	.string "but maybe my friend Daan can help you\l"
	.string "with that.\p"
	.string "He lives deep in the cloud forest, in\n"
	.string "Mist City.\p"
	.string "I heard he is running a research center\n"
	.string "that is looking into the diversity of\l"
	.string "Pokemon and their origins.\p"
	.string "He also gives guided tours through\n"
	.string "parts of the ancient forest.\p"
	.string "He can be quite passionate about\n"
	.string "protecting the forest, so don't drop\l"
	.string "any litter!\p"
	.string "Recently, a path has been created\n"
	.string "north of this town towards Mist City.\p"
	.string "It used to take days to reach the deep\n"
	.string "parts of the Cloud Forest.\p"
	.string "If you want to take the path, you\n"
	.string "should show the park rangers a gym\l"
	.string "badge, otherwise the forest might be\l"
	.string "too dangerous.\p"
	.string "I think you might have it in you to\n"
	.string "defeat that guy called Pete Longfellow,\l"
	.string "the new gym leader.\p"
	.string "The gym is up the hill.$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_5:
# 34 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "{COLOR GREEN}Jacob: {COLOR DARK_GRAY}GEORGEEE, COME HERE, GET\n"
	.string "OUTSIDE!!$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_6:
# 39 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "PUT THAT GAMEBOY DOWN...$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_7:
# 42 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "NO I DID NOT DO THAT WHEN I WAS\n"
	.string "YOUNG!....$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_8:
# 45 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "ARGHH NEVERMIND....$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_9:
# 75 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Allright well say Hi to Daan for me!$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_10:
# 79 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Good luck at the gym!$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_11:
# 87 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "{COLOR GREEN}Jacob: {COLOR DARK_GRAY}Thanks for everything you did!\p"
	.string "George is happily playing outsi... on his\n"
	.string "gameboy again!\p"
	.string "When you get to Mist City, say hi to my\n"
	.string "old friend Daan.$"

Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0:
# 96 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "{COLOR RED}Sienna: {COLOR DARK_GRAY}Please help my husband, he has\n"
	.string "not been the same since these weird\l"
	.string "Krabby's have been showing up. He hates\l"
	.string "to see his favorite pokemon being seen\l"
	.string "as a nuisance.$"

Indoor_Maasje_Jakub_Home_SiennaConvo_Text_1:
# 99 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "{COLOR RED}Sienna: {COLOR DARK_GRAY}Thanks for helping my husband!\p"
	.string "He has been more relaxt since the\n"
	.string "Krabby's have been acting normal again.$"

Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_0:
# 108 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "{COLOR RED}George: {COLOR DARK_GRAY}Dad says that I can't be on my\n"
	.string "GameBoy the entire time.\p"
	.string "I'm sure he did the same thing back in\n"
	.string "the day.$"

Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_1:
# 111 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "{COLOR RED}George: {COLOR DARK_GRAY}Last night I saw my dad play on\n"
	.string "his own gameboy.\p"
	.string "I'm sure as hell not going outside.$"
