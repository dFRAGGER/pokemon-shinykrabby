Mistcity_Indoor_PatternFinder_Father_MapScripts::
	.byte 0


Mistcity_Indoor_PatternFinder_Father::
# 4 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	lock
# 5 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	faceplayer
# 6 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	setspeaker Mistcity_Indoor_PatternFinder_Father_Text_0
# 7 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	goto_if_unset FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_PatternFinder_Father_2
# 12 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	goto_if_unset FLAG_ITEM_MISTCITY_TM_BULK_UP, Mistcity_Indoor_PatternFinder_Father_5
# 20 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	msgbox Mistcity_Indoor_PatternFinder_Father_Text_3, MSGBOX_AUTOCLOSE
# 21 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	waitmessage
Mistcity_Indoor_PatternFinder_Father_1:
# 24 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	release
	end

Mistcity_Indoor_PatternFinder_Father_2:
# 8 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	msgbox Mistcity_Indoor_PatternFinder_Father_Text_1
# 9 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	waitmessage
	goto Mistcity_Indoor_PatternFinder_Father_1

Mistcity_Indoor_PatternFinder_Father_5:
# 13 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	msgbox Mistcity_Indoor_PatternFinder_Father_Text_2
# 14 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	waitmessage
# 15 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 16 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	waitmessage
# 17 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	setflag FLAG_ITEM_MISTCITY_TM_BULK_UP
	goto Mistcity_Indoor_PatternFinder_Father_1


Mistcity_Indoor_PatternFinder_Father_Text_0:
# 6 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	.string "Mr. Heartfield$"

Mistcity_Indoor_PatternFinder_Father_Text_1:
# 8 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	.string "Oh, hello. My name is Mr. Heartfield.\p"
	.string "Welcome.\p"
	.string "Sorry for all the ladders and climbing\n"
	.string "to get here.\p"
	.string "My child is very sensitive to loud\n"
	.string "noises, but high in the canopy is an\l"
	.string "oasis of tranquility.\p"
	.string "Nature brings his mind to ease.\p"
	.string "My child... they see the world in a\n"
	.string "special way.\p"
	.string "Not many people understand.\p"
	.string "They don't talk much, but they see\n"
	.string "everything.\p"
	.string "All the little patterns and connections\n"
	.string "that the rest of us miss.\p"
	.string "It's a beautiful, intricate map that\n"
	.string "only they can read.\p"
	.string "I'm so glad my son David has found a\n"
	.string "place at the Ranger Station where his\l"
	.string "mind is appreciated.$"

Mistcity_Indoor_PatternFinder_Father_Text_2:
# 13 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	.string "It's you.\n"
	.string "Thank you.\p"
	.string "My son David came home yesterday... he\n"
	.string "seemed so happy. So alive.\p"
	.string "He was excitedly drawing these complex\n"
	.string "patterns in his notebook like dots on a\l"
	.string "stone, marks on a map, strange symbols.\p"
	.string "They said they were 'solving the puzzle'\n"
	.string "and that you understood.\p"
	.string "You showed them that their gift is\n"
	.string "important.\p"
	.string "More than that, that it's a strength.\p"
	.string "I... thank you.\p"
	.string "You've given them a confidence I\n"
	.string "haven't seen before.\p"
	.string "I want to give you something.\p"
	.string "This TM teaches Bulk Up.\p"
	.string "A move that builds both body and\n"
	.string "resolve at once, strength that comes\l"
	.string "from within.\p"
	.string "David used to shrink away from\n"
	.string "everything.\p"
	.string "Now I see them stand a little taller.\p"
	.string "That's what you gave them.\p"
	.string "I think this belongs with you.$"

Mistcity_Indoor_PatternFinder_Father_Text_3:
# 20 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	.string "David is doing so well.\p"
	.string "They came home last night humming to\n"
	.string "themselves.\p"
	.string "First time I've heard that in years.$"
