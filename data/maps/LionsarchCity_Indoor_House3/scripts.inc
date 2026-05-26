LionsarchCity_Indoor_House3_MapScripts::
	.byte 0


House3_Olaf::
# 10 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	lock
# 11 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	faceplayer
# 12 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	goto_if_set FLAG_HOUSE3_ITEMFINDER_GIVEN, House3_Olaf_2
# 15 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	goto_if_set FLAG_HOUSE3_FOUND_COMPASS, House3_Olaf_6
House3_Olaf_4:
# 28 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_Olaf_Text_5
# 29 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
# 30 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_Olaf_Text_6
# 31 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
# 32 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_Olaf_Text_7
# 33 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
House3_Olaf_1:
# 35 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	release
	return

House3_Olaf_2:
# 13 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_Olaf_Text_0
# 14 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
	goto House3_Olaf_1

House3_Olaf_3:
# 16 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_Olaf_Text_1
# 17 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
# 18 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_Olaf_Text_2
# 19 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
# 20 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_Olaf_Text_3
# 21 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
# 22 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 23 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
# 24 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	setflag FLAG_HOUSE3_ITEMFINDER_GIVEN
# 25 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_Olaf_Text_4
# 26 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
	goto House3_Olaf_1

House3_Olaf_5:
# 15 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	goto_if_set FLAG_HOUSE3_FOUND_BUTTON, House3_Olaf_3
	goto House3_Olaf_4

House3_Olaf_6:
# 15 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	goto_if_set FLAG_HOUSE3_FOUND_CLAMSHELL, House3_Olaf_5
	goto House3_Olaf_4


House3_Mio::
# 39 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	lock
# 40 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	faceplayer
# 41 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	goto_if_set FLAG_HOUSE3_FOUND_COMPASS, House3_Mio_11
House3_Mio_6:
# 44 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	goto_if_set FLAG_HOUSE3_FOUND_COMPASS, House3_Mio_3
# 44 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	goto_if_set FLAG_HOUSE3_FOUND_CLAMSHELL, House3_Mio_3
# 44 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	goto_if_set FLAG_HOUSE3_FOUND_BUTTON, House3_Mio_3
# 48 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_Mio_Text_2
# 49 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
House3_Mio_1:
# 51 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	release
	return

House3_Mio_2:
# 42 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_Mio_Text_0
# 43 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
	goto House3_Mio_1

House3_Mio_3:
# 45 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_Mio_Text_1
# 46 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
	goto House3_Mio_1

House3_Mio_10:
# 41 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	goto_if_set FLAG_HOUSE3_FOUND_BUTTON, House3_Mio_2
	goto House3_Mio_6

House3_Mio_11:
# 41 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	goto_if_set FLAG_HOUSE3_FOUND_CLAMSHELL, House3_Mio_10
	goto House3_Mio_6


House3_TreasureCompass::
# 55 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	lockall
# 56 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	goto_if_set FLAG_HOUSE3_FOUND_COMPASS, House3_TreasureCompass_2
# 60 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_TreasureCompass_Text_1
# 61 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
# 62 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	playse SE_ITEMFINDER
# 63 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitse
# 64 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	setflag FLAG_HOUSE3_FOUND_COMPASS
# 65 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_TreasureCompass_Text_2
# 66 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
House3_TreasureCompass_1:
# 68 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	releaseall
	return

House3_TreasureCompass_2:
# 57 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_TreasureCompass_Text_0
# 58 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
	goto House3_TreasureCompass_1


House3_TreasureClamshell::
# 72 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	lockall
# 73 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	goto_if_set FLAG_HOUSE3_FOUND_CLAMSHELL, House3_TreasureClamshell_2
# 77 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_TreasureClamshell_Text_1
# 78 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
# 79 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	playse SE_ITEMFINDER
# 80 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitse
# 81 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	setflag FLAG_HOUSE3_FOUND_CLAMSHELL
# 82 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_TreasureClamshell_Text_2
# 83 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
House3_TreasureClamshell_1:
# 85 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	releaseall
	return

House3_TreasureClamshell_2:
# 74 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_TreasureClamshell_Text_0
# 75 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
	goto House3_TreasureClamshell_1


House3_TreasureButton::
# 89 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	lockall
# 90 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	goto_if_set FLAG_HOUSE3_FOUND_BUTTON, House3_TreasureButton_2
# 94 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_TreasureButton_Text_1
# 95 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
# 96 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	playse SE_ITEMFINDER
# 97 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitse
# 98 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	setflag FLAG_HOUSE3_FOUND_BUTTON
# 99 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_TreasureButton_Text_2
# 100 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
House3_TreasureButton_1:
# 102 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	releaseall
	return

House3_TreasureButton_2:
# 91 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_TreasureButton_Text_0
# 92 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	waitmessage
	goto House3_TreasureButton_1


House3_RodRack::
# 106 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	lockall
# 107 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_RodRack_Text_0
# 108 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	releaseall
	return


House3_TideChart::
# 112 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	lockall
# 113 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	msgbox House3_TideChart_Text_0
# 114 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	releaseall
	return


House3_Olaf_Text_0:
# 13 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "Heh heh! Good nose on you, kid.\p"
	.string "That machine'll serve you well out there\n"
	.string "in the world.\p"
	.string "There's always something worth finding,\n"
	.string "if you know how to look.$"

House3_Olaf_Text_1:
# 16 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "Ayyy! You found them!\p"
	.string "The compass, the shell, and the old\n"
	.string "brass button!\p"
	.string "Haha! I knew someone sharp would\n"
	.string "stumble in eventually!$"

House3_Olaf_Text_2:
# 18 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "Those three things... each one's from a\n"
	.string "different voyage.\p"
	.string "The compass from my first time rounding\n"
	.string "the northern cape.\p"
	.string "The shell from the year I caught a\n"
	.string "Lapras in the deep water.\p"
	.string "And the button - that came off a\n"
	.string "sailor's coat.\n"
	.string "He lost it in a wager.$"

House3_Olaf_Text_3:
# 20 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "Now then. A deal's a deal.\p"
	.string "Here. Take this thing.\p"
	.string "Mio's been bugging me to get rid of it\n"
	.string "anyway.$"

House3_Olaf_Text_4:
# 25 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "It's called a Dowsing Machine.\p"
	.string "Fancy name for a treasure sniffer.\p"
	.string "That gadget'd have found my three\n"
	.string "things in ten seconds flat.\p"
	.string "Go find some real treasure with it, kid.\p"
	.string "The ocean's still full of surprises.$"

House3_Olaf_Text_5:
# 28 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "Heh! Don't mind the mess. I know where\n"
	.string "everything is.\p"
	.string "Well... mostly.\p"
	.string "Fact is, I hid three keepsakes\n"
	.string "somewhere in this old shack a while back\n"
	.string "and I can't quite recall where.$"

House3_Olaf_Text_6:
# 30 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "A compass. A clamshell. And a heavy\n"
	.string "brass button with an anchor on it.\p"
	.string "They're each from a different\n"
	.string "adventure out on the water.\p"
	.string "I put them somewhere safe, I swear.\p"
	.string "Mio looked for an hour and gave up.$"

House3_Olaf_Text_7:
# 32 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "If you can sniff out all three...\p"
	.string "I'll give you something better than any\n"
	.string "of 'em.\p"
	.string "A real treasure hunter's tool. Deal?$"

House3_Mio_Text_0:
# 42 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "You found all three?!\p"
	.string "I looked everywhere!\p"
	.string "Grandpa's going to be absolutely\n"
	.string "delighted.\p"
	.string "Also a little smug about it.$"

House3_Mio_Text_1:
# 45 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "Oh, you're helping Grandpa look?\p"
	.string "You've already found some, haven't you!\p"
	.string "He told me they're all near things that\n"
	.string "came from the sea.\p"
	.string "That's his logic for you.$"

House3_Mio_Text_2:
# 48 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "Grandpa hides things.\p"
	.string "He says it keeps his mind sharp.\p"
	.string "I say it just drives me crazy.\p"
	.string "I gave up after an hour and a sore back.\p"
	.string "He told me they're near things that\n"
	.string "came from the sea.\p"
	.string "Hopefully that helps you more than it\n"
	.string "helped me.$"

House3_TreasureCompass_Text_0:
# 57 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "A large potted plant with broad leaves\n"
	.string "yellowing at the edges.\p"
	.string "The compass is already gone - you found\n"
	.string "it.$"

House3_TreasureCompass_Text_1:
# 60 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "A large potted plant.\p"
	.string "The soil is dry and the leaves are a bit\n"
	.string "sorry-looking.\p"
	.string "The soil seems to be disturbed near the\n"
	.string "base...\p"
	.string "You dig around the roots and feel\n"
	.string "something hard.\p"
	.string "A weathered brass compass, wrapped in a\n"
	.string "strip of sailcloth.$"

House3_TreasureCompass_Text_2:
# 65 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "Found Gramps Olaf's compass!$"

House3_TreasureClamshell_Text_0:
# 74 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "A tall ceramic vase painted with a faded\n"
	.string "wave pattern.\p"
	.string "The clamshell is already gone - you\n"
	.string "found it.$"

House3_TreasureClamshell_Text_1:
# 77 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "A tall ceramic vase.\p"
	.string "It looks decorative, but something\n"
	.string "rattles faintly inside.\p"
	.string "You tip it carefully...\p"
	.string "A large polished clamshell slides out.\p"
	.string "The inside gleams like mother-of-pearl\n"
	.string "in the pale light.$"

House3_TreasureClamshell_Text_2:
# 82 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "Found Gramps Olaf's clamshell!$"

House3_TreasureButton_Text_0:
# 91 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "A small display case withits glass front\n"
	.string "fogged with age.\p"
	.string "The brass button is already gone - you\n"
	.string "found it.$"

House3_TreasureButton_Text_1:
# 94 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "A small display case.\p"
	.string "Behind the foggy glass, a handful of old\n"
	.string "knick-knacks: a bent fish hook, a cork,\l"
	.string "a faded name tag.\p"
	.string "But tucked behind them, barely visible...\p"
	.string "You open the latch and reach past the\n"
	.string "other things.\p"
	.string "A heavy brass button with an anchor\n"
	.string "engraving.$"

House3_TreasureButton_Text_2:
# 99 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "Found Gramps Olaf's brass button!$"

House3_RodRack_Text_0:
# 107 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "A rack of fishing rods in various states\n"
	.string "of repair.\p"
	.string "One has a strip of tape: 'STILL GOOD -\n"
	.string "DO NOT THROW'\p"
	.string "Another has a tag: 'BROKEN - FIX\n"
	.string "SOMEDAY'\p"
	.string "A third has no label but is clearly the\n"
	.string "nicest one.\p"
	.string "It's bone dry and smells like varnish\n"
	.string "and salt.$"

House3_TideChart_Text_0:
# 113 "data/maps/LionsarchCity_Indoor_House3/scripts.pory"
	.string "A tide chart for the northern\n"
	.string "harbor,covered in Olaf's cramped\l"
	.string "handwriting.\p"
	.string "Circled dates are marked 'BIG CATCH' or\n"
	.string "'NOTHING'.\p"
	.string "A small sketch next to one entry reads:\n"
	.string "'Saw something HUGE in sector 7. NOT a\l"
	.string "Dewgong.'\p"
	.string "The date is circled three times and\n"
	.string "underlined.$"
