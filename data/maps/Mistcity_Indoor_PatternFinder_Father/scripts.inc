Mistcity_Indoor_PatternFinder_Father_MapScripts::
	.byte 0


Mistcity_Indoor_PatternFinder_Father::
# 4 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	lock
# 5 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	faceplayer
# 6 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	goto_if_unset FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_PatternFinder_Father_2
Mistcity_Indoor_PatternFinder_Father_1:
# 10 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_PatternFinder_Father_5
Mistcity_Indoor_PatternFinder_Father_4:
# 13 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	release
	end

Mistcity_Indoor_PatternFinder_Father_2:
# 7 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	msgbox Mistcity_Indoor_PatternFinder_Father_Text_0
# 8 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	waitmessage
	goto Mistcity_Indoor_PatternFinder_Father_1

Mistcity_Indoor_PatternFinder_Father_5:
# 11 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	msgbox Mistcity_Indoor_PatternFinder_Father_Text_1
	goto Mistcity_Indoor_PatternFinder_Father_4


Mistcity_Indoor_PatternFinder_Father_Text_0:
# 7 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	.string "Oh, hello. My name is {COLOR GREEN}Mr. Heartfield{COLOR DARK_GRAY}.\p"
	.string "Welcome.\p"
	.string "Sorry for all the ladders and climbing\n"
	.string "to get to here.\p"
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

Mistcity_Indoor_PatternFinder_Father_Text_1:
# 11 "data/maps/Mistcity_Indoor_PatternFinder_Father/scripts.pory"
	.string "{COLOR GREEN}Mr. Heartfield{COLOR DARK_GRAY}: It's you.\n"
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
	.string "haven't seen before.$"
