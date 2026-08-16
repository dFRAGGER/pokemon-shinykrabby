LionsarchCity_Indoor_House1_MapScripts::
	.byte 0


House1_Sven::
# 8 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	lock
# 9 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	faceplayer
# 10 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	msgbox House1_Sven_Text_0
# 11 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	waitmessage
# 12 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	msgbox House1_Sven_Text_1
# 13 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	waitmessage
# 14 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	release
	return


House1_Marta::
# 18 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	lock
# 19 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	faceplayer
# 20 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	goto_if_unset FLAG_HOUSE1_STARDUST_GIVEN, House1_Marta_2
# 31 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	msgbox House1_Marta_Text_3
# 32 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	waitmessage
House1_Marta_1:
# 34 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	release
	return

House1_Marta_2:
# 21 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	msgbox House1_Marta_Text_0
# 22 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	waitmessage
# 23 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	msgbox House1_Marta_Text_1
# 24 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	waitmessage
# 25 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	giveitem ITEM_STARDUST
# 26 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	waitmessage
# 27 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	setflag FLAG_HOUSE1_STARDUST_GIVEN
# 28 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	msgbox House1_Marta_Text_2
# 29 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	waitmessage
	goto House1_Marta_1


House1_FishingTrophy::
# 38 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	lockall
# 39 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	msgbox House1_FishingTrophy_Text_0
# 40 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	releaseall
	return


House1_ShippingMap::
# 44 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	lockall
# 45 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	msgbox House1_ShippingMap_Text_0
# 46 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	releaseall
	return


House1_Sven_Text_0:
# 10 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	.string "Forty years on those docks.\p"
	.string "Loading crates, offloading barrels,\n"
	.string "hauling nets.\p"
	.string "You get a rhythm after a while. A real\n"
	.string "rhythm.\p"
	.string "The Krabby used to help us back in the\n"
	.string "day.\p"
	.string "Now they've got cranes for everything.$"

House1_Sven_Text_1:
# 12 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	.string "That steel factory changed this city.\p"
	.string "Don't get me wrong, the work's steady.\p"
	.string "But this place used to smell like salt\n"
	.string "and herring.\p"
	.string "Now it smells like iron and rust.\p"
	.string "Marta says I'm just getting old. Maybe\n"
	.string "she's right.$"

House1_Marta_Text_0:
# 21 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	.string "Oh! Hello there, come in, come in.\p"
	.string "I found something odd last spring in a\n"
	.string "crate that washed up near berth seven.\p"
	.string "No label. No manifest. No shipper's mark.\p"
	.string "Just this little thing inside, glittering\n"
	.string "in the harbor light.$"

House1_Marta_Text_1:
# 23 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	.string "My husband says I should have reported\n"
	.string "it to the harbor master.\p"
	.string "But I ask you - who sends an unmarked\n"
	.string "crate with just one shiny thing in it?\p"
	.string "Someone who doesn't want it found,\n"
	.string "that's who.\p"
	.string "You look sharp. Here. You take it.$"

House1_Marta_Text_2:
# 28 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	.string "Don't tell my husband, or I'll never hear\n"
	.string "the end of it.$"

House1_Marta_Text_3:
# 31 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	.string "My husband's been fretting about that\n"
	.string "crate for months.\p"
	.string "I told him I gave away what was inside.\p"
	.string "He says I 'can't just give away unlogged\n"
	.string "harbor goods.'\p"
	.string "Retired forty years and he still thinks\n"
	.string "like a dockworker.$"

House1_FishingTrophy_Text_0:
# 39 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	.string "A weathered bronze plaque rests on a\n"
	.string "small shelf:\p"
	.string "'1ST PLACE - LIONSARCH HARBOR CATCH\n"
	.string "CUP\p"
	.string "Year 42\p"
	.string "Winner: S. BRANDERS\p"
	.string "One Gyarados, 580 lbs'\p"
	.string "Below it, a faded photograph of a much\n"
	.string "younger Sven hoisting a bent rod with\l"
	.string "both arms, grinning wildly.$"

House1_ShippingMap_Text_0:
# 45 "data/maps/LionsarchCity_Indoor_House1/scripts.pory"
	.string "A large, yellowed map is pinned to the\n"
	.string "wall.\p"
	.string "Red ink traces the old harbor shipping\n"
	.string "routes:\p"
	.string "- Lionsarch to Siltroot Town:\n"
	.string "General goods and passengers\p"
	.string "- Lionsarch to Marshduke City:\n"
	.string "Steel, coal and minerals\p"
	.string "- Lionsarch to the Southern Ports:\n"
	.string "Fish, lumber, and manufactured goods\p"
	.string "Some of the routes have been crossed\n"
	.string "out in pencil.$"
