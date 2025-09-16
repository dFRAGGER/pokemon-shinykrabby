Indoor_Maasje_Beekeeper_Geurts_MapScripts::
	.byte 0


Maasje_Indoor_Beekeeper_Geurts_Assignment::
# 4 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	lock
# 5 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	faceplayer
# 6 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	compare VAR_BEEKEEPER_GEURTS, 0
	goto_if_eq Maasje_Indoor_Beekeeper_Geurts_Assignment_2
Maasje_Indoor_Beekeeper_Geurts_Assignment_1:
# 20 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	compare VAR_BEEKEEPER_GEURTS, 1
	goto_if_eq Maasje_Indoor_Beekeeper_Geurts_Assignment_5
Maasje_Indoor_Beekeeper_Geurts_Assignment_4:
# 23 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	compare VAR_BEEKEEPER_GEURTS, 1
	goto_if_gt Maasje_Indoor_Beekeeper_Geurts_Assignment_12
Maasje_Indoor_Beekeeper_Geurts_Assignment_10:
# 26 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	compare VAR_BEEKEEPER_GEURTS, 9
	goto_if_eq Maasje_Indoor_Beekeeper_Geurts_Assignment_16
# 36 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	msgbox Maasje_Indoor_Beekeeper_Geurts_Assignment_Text_7
Maasje_Indoor_Beekeeper_Geurts_Assignment_15:
# 38 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	waitmessage
# 39 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	release
	return

Maasje_Indoor_Beekeeper_Geurts_Assignment_2:
# 7 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	msgbox Maasje_Indoor_Beekeeper_Geurts_Assignment_Text_0, MSGBOX_YESNO
# 8 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Maasje_Indoor_Beekeeper_Geurts_Assignment_7
# 17 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	msgbox Maasje_Indoor_Beekeeper_Geurts_Assignment_Text_2
	goto Maasje_Indoor_Beekeeper_Geurts_Assignment_1

Maasje_Indoor_Beekeeper_Geurts_Assignment_5:
# 21 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	msgbox Maasje_Indoor_Beekeeper_Geurts_Assignment_Text_3
	goto Maasje_Indoor_Beekeeper_Geurts_Assignment_4

Maasje_Indoor_Beekeeper_Geurts_Assignment_7:
# 9 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	msgbox Maasje_Indoor_Beekeeper_Geurts_Assignment_Text_1, MSGBOX_AUTOCLOSE
# 10 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	waitmessage
# 11 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	setflag FLAG_START_COLLECTING_HONEY
# 12 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	setvar VAR_BEEKEEPER_GEURTS, 1
# 13 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	delay 40
	end

Maasje_Indoor_Beekeeper_Geurts_Assignment_11:
# 24 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	msgbox Maasje_Indoor_Beekeeper_Geurts_Assignment_Text_4
	goto Maasje_Indoor_Beekeeper_Geurts_Assignment_10

Maasje_Indoor_Beekeeper_Geurts_Assignment_12:
# 23 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	compare VAR_BEEKEEPER_GEURTS, 9
	goto_if_lt Maasje_Indoor_Beekeeper_Geurts_Assignment_11
	goto Maasje_Indoor_Beekeeper_Geurts_Assignment_10

Maasje_Indoor_Beekeeper_Geurts_Assignment_16:
# 27 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	msgbox Maasje_Indoor_Beekeeper_Geurts_Assignment_Text_5
# 28 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	giveitem ITEM_HM01
# 29 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 30 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	waitmessage
# 31 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	msgbox Maasje_Indoor_Beekeeper_Geurts_Assignment_Text_6
# 32 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	setvar VAR_BEEKEEPER_GEURTS, 10
# 33 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	clearflag FLAG_START_COLLECTING_HONEY
	goto Maasje_Indoor_Beekeeper_Geurts_Assignment_15


Maasje_Indoor_Beekeeper_Geurts_Assignment_Text_0:
# 7 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	.string "Hi there!\n"
	.string "My Name is Steven Smells.\p"
	.string "I recently retired as a biology teacher,\n"
	.string "and now am a full time beekeper.\p"
	.string "I love honey! It is my favorite\n"
	.string "substance.\p"
	.string "Can you help me collect my honey from\n"
	.string "my beehives outside?$"

Maasje_Indoor_Beekeeper_Geurts_Assignment_Text_1:
# 9 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	.string "Thank you so much, my body is becoming\n"
	.string "to brittle to climb the cliffs.\p"
	.string "There should be 8 beehives along the\n"
	.string "coast.\p"
	.string "Come back when you have collected all\n"
	.string "the honey.\p"
	.string "I might have a small reward for you.$"

Maasje_Indoor_Beekeeper_Geurts_Assignment_Text_2:
# 17 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	.string "Too bad! Hopefully someone else will\n"
	.string "come by soon, I'm not sure I can do it\l"
	.string "myself anymore.$"

Maasje_Indoor_Beekeeper_Geurts_Assignment_Text_3:
# 21 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	.string "The beehives should be along the\n"
	.string "coastal area's.\p"
	.string "If you could collect the honey, I might\n"
	.string "have a little surprise for you.$"

Maasje_Indoor_Beekeeper_Geurts_Assignment_Text_4:
# 24 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	.string "Keep going! I still need some more honey\n"
	.string "to fill up my storage.\p"
	.string "Once my storage is full, I can begin\n"
	.string "processing orders across the region.\p"
	.string "With the profits I can protect the rare\n"
	.string "bee species along this coast.$"

Maasje_Indoor_Beekeeper_Geurts_Assignment_Text_5:
# 27 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	.string "Thank you so much! This will be enough\n"
	.string "for all the orders this season.\p"
	.string "All of the profit will go directly into\n"
	.string "the protection of the bee species\l"
	.string "across this coast.\p"
	.string "As a reward, I give you this:$"

Maasje_Indoor_Beekeeper_Geurts_Assignment_Text_6:
# 31 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	.string "When I was young I tried to keep the\n"
	.string "coast clear of invasive species.\p"
	.string "With this move, my Pokémons could cut\n"
	.string "down small trees and bushes that did\l"
	.string "not belong on the coast.\p"
	.string "To actually use the move you still have\n"
	.string "to get permission from the Gym Leader\l"
	.string "of this town.\p"
	.string "They are very strict nowadays.$"

Maasje_Indoor_Beekeeper_Geurts_Assignment_Text_7:
# 36 "data/maps/Indoor_Maasje_Beekeeper_Geurts/scripts.pory"
	.string "Thanks for helping me out! If I ever\n"
	.string "need help again I know where to find ya!$"
