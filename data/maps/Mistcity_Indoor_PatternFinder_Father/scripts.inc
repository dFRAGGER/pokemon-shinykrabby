Mistcity_Indoor_PatternFinder_Father_MapScripts::
	.byte 0


Mistcity_Indoor_PatternFinder_Father::
	lock
	faceplayer
	setspeaker Mistcity_Indoor_PatternFinder_Father_Text_0
	goto_if_unset FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_PatternFinder_Father_2
	goto_if_unset FLAG_ITEM_MISTCITY_TM_BULK_UP, Mistcity_Indoor_PatternFinder_Father_5
	msgbox Mistcity_Indoor_PatternFinder_Father_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
Mistcity_Indoor_PatternFinder_Father_1:
	release
	end

Mistcity_Indoor_PatternFinder_Father_2:
	msgbox Mistcity_Indoor_PatternFinder_Father_Text_1
	waitmessage
	goto Mistcity_Indoor_PatternFinder_Father_1

Mistcity_Indoor_PatternFinder_Father_5:
	msgbox Mistcity_Indoor_PatternFinder_Father_Text_2
	waitmessage
	giveitem ITEM_TM_BULK_UP
	waitmessage
	setflag FLAG_ITEM_MISTCITY_TM_BULK_UP
	goto Mistcity_Indoor_PatternFinder_Father_1


Mistcity_Indoor_PatternFinder_Father_Text_0:
	.string "Mr. HEARTFIELD$"

Mistcity_Indoor_PatternFinder_Father_Text_1:
	.string "Oh, hello. My name is Mr. HEARTFIELD.\p"
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
	.string "It's you.\n"
	.string "Thank you.\p"
	.string "My son DAVID came home yesterday... he\n"
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
	.string "DAVID used to shrink away from\n"
	.string "everything.\p"
	.string "Now I see them stand a little taller.\p"
	.string "That's what you gave them.\p"
	.string "I think this belongs with you.$"

Mistcity_Indoor_PatternFinder_Father_Text_3:
	.string "DAVID is doing so well.\p"
	.string "They came home last night humming to\n"
	.string "themselves.\p"
	.string "First time I've heard that in years.$"
