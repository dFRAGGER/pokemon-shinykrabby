LionsarchCity_Indoor_House2_MapScripts::
	.byte 0


House2_Felix::
	lock
	faceplayer
	goto_if_unset FLAG_HOUSE2_NETBALL_GIVEN, House2_Felix_2
	msgbox House2_Felix_Text_3
	waitmessage
House2_Felix_1:
	release
	return

House2_Felix_2:
	msgbox House2_Felix_Text_0
	waitmessage
	msgbox House2_Felix_Text_1
	waitmessage
	giveitem ITEM_NET_BALL
	waitmessage
	setflag FLAG_HOUSE2_NETBALL_GIVEN
	msgbox House2_Felix_Text_2
	waitmessage
	goto House2_Felix_1


House2_Nadia::
	lock
	faceplayer
	msgbox House2_Nadia_Text_0
	waitmessage
	msgbox House2_Nadia_Text_1
	waitmessage
	release
	return


House2_CargoBoard::
	lockall
	msgbox House2_CargoBoard_Text_0
	releaseall
	return


House2_Newspaper::
	lockall
	msgbox House2_Newspaper_Text_0
	releaseall
	return


House2_Felix_Text_0:
	.string "Hm? Can't you see I'm in the middle of\n"
	.string "something?\p"
	.string "I've got 847 manifests to\n"
	.string "cross-reference before morning.\p"
	.string "Every crate, every barrel. By weight, by\n"
	.string "category, by flag of origin.\p"
	.string "The harbor master now wants them\n"
	.string "sorted by Pokémon interference risk\l"
	.string "too.\p"
	.string "Don't even get me started on the\n"
	.string "aquatic disturbance reports.$"

House2_Felix_Text_1:
	.string "...Actually. Here. Take these.\p"
	.string "I ordered them three months ago for\n"
	.string "catching Tentacool that get jammed in\l"
	.string "the filter grates.\p"
	.string "Never found the time to actually go\n"
	.string "down there.\p"
	.string "Maybe you'll put them to better use\n"
	.string "than I will.$"

House2_Felix_Text_2:
	.string "Now please. I have a shipment of raw\n"
	.string "iron and 200 barrels of fish paste to\l"
	.string "categorize.$"

House2_Felix_Text_3:
	.string "Do you know this city moves over 40,000\n"
	.string "tons of cargo every single month?\p"
	.string "40,000 tons!\p"
	.string "And someone has to write all of that\n"
	.string "down.\p"
	.string "That someone... is me.\p"
	.string "Go away.$"

House2_Nadia_Text_0:
	.string "You know what I think about sometimes?\p"
	.string "Just... boarding one of those big cargo\n"
	.string "ships at berth.\p"
	.string "Stowing away if I had to.\p"
	.string "See where it takes me.\p"
	.string "Anywhere south would do.$"

House2_Nadia_Text_1:
	.string "Don't get me wrong, Lionsarch is fine.\p"
	.string "It's just always cold. Always grey.\p"
	.string "Always smelling of metal and frozen\n"
	.string "fish.\p"
	.string "I want to go somewhere warm.\p"
	.string "Somewhere with actual sun.$"

House2_CargoBoard_Text_0:
	.string "A dense board covered in pinned\n"
	.string "manifests and cargo notes:\p"
	.string "(WEEK 43 - INBOUND)\n"
	.string "- Iron ore: 8,420 tons\n"
	.string "- Coal: 2,190 tons\n"
	.string "- Frozen fish paste: 340 tons\n"
	.string "- Factory parts: 67 units\p"
	.string "(WEEK 43 - OUTBOUND)\n"
	.string "- Processed steel: 6,850 tons\n"
	.string "- Refined ore pellets: 1,200 tons\n"
	.string "- 'Special cargo' (no label): 3 crates\p"
	.string "Felix's handwriting in red: 'WHAT IS IN\n"
	.string "CRATES 31-33??'$"

House2_Newspaper_Text_0:
	.string "A newspaper lies open on the table:\p"
	.string "'LIONSARCH STEEL OUTPUT TRIPLES'\p"
	.string "'Record tonnage exported this quarter.\n"
	.string "Harbor authority celebrates new crane\l"
	.string "installation.\p"
	.string "Critics ask: where did all the fishing\n"
	.string "boats go?'\p"
	.string "The crossword is half-finished.\n"
	.string "Someone has written 'BORING' across\l"
	.string "the sports section.$"
