Indoor_Maasje_Jakub_Home_MapScripts::
	.byte 0


Indoor_Maasje_Jakub_Home_JakubConvo::
# 4 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	lock
# 5 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0
# 6 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Indoor_Maasje_Jakub_Home_JakubConvo_1
# 13 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_1
# 14 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	return

Indoor_Maasje_Jakub_Home_JakubConvo_1:
# 7 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 8 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 9 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setvar VAR_TEMP_1, 1
# 10 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	return


Indoor_Maasje_Jakub_Home_SiennaConvo::
# 19 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	lock
# 20 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 2, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0
# 21 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0
# 22 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	return


Indoor_Maasje_Jakub_Home_GeorgeConvo::
# 26 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	lock
# 27 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 1, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0
# 28 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_0
# 29 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	return


# 5 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0:
# 5 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	face_player
	step_end

Indoor_Maasje_Jakub_Home_JakubConvo_Text_0:
# 7 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Hi there, my name is Jakub. Welcome to\n"
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
	.string "coming from Krabby Hill, just north of\l"
	.string "here.\p"
	.string "Rumor has it there's a unique,\n"
	.string "gold-colored Krabby deep in the caves\l"
	.string "there, the alpha of the whole colony.\p"
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
# 13 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Please help me and my family, little\n"
	.string "George can't play outside right now. He\l"
	.string "has been gaming on his GameBoy all day.$"

Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0:
# 21 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Please help my husband, he has not been\n"
	.string "the same since these weird Krabby's\l"
	.string "have been showing up. He hates to see\l"
	.string "his favorite pokemon being seen as a\l"
	.string "nuisance.$"

Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_0:
# 28 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Dad says that I can't be on my GameBoy\n"
	.string "the entire time. I'm sure he did the same\l"
	.string "thing back in the day.$"
