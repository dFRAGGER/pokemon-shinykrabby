Route02_Indoor_Ranger_House_MapScripts::
	.byte 0


Route02_Indoor_Ranger_House_Hint1::
# 4 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	lock
# 5 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	msgbox Route02_Indoor_Ranger_House_Hint1_Text_0, MSGBOX_AUTOCLOSE
# 6 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	waitmessage
# 7 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	release
	return


Route02_Indoor_Ranger_House_Hint2::
# 11 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	lock
# 12 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	msgbox Route02_Indoor_Ranger_House_Hint2_Text_0, MSGBOX_AUTOCLOSE
# 13 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	waitmessage
# 14 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	release
	return


Route02_Indoor_Ranger_House_Hint3::
# 18 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	lock
# 19 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	msgbox Route02_Indoor_Ranger_House_Hint3_Text_0, MSGBOX_AUTOCLOSE
# 20 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	waitmessage
# 21 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	release
	return


Route02_Station_Bookcase1::
# 25 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	lock
# 26 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	msgbox Route02_Station_Bookcase1_Text_0, MSGBOX_AUTOCLOSE
# 27 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	waitmessage
# 28 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	release
	return


Route02_Station_Bookcase2::
# 32 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	lock
# 33 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	msgbox Route02_Station_Bookcase2_Text_0, MSGBOX_AUTOCLOSE
# 34 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	waitmessage
# 35 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	release
	return


Route02_Station_Toolbox::
# 39 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	lock
# 40 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	msgbox Route02_Station_Toolbox_Text_0, MSGBOX_AUTOCLOSE
# 41 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	waitmessage
# 42 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	release
	return


Route02_Station_SoilCrate::
# 46 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	lock
# 47 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	msgbox Route02_Station_SoilCrate_Text_0, MSGBOX_AUTOCLOSE
# 48 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	waitmessage
# 49 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	release
	return


Route02_Station_SpecimenJar::
# 53 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	lock
# 54 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	goto_if_unset FLAG_ITEM_ROUTE02_STATION_MIRACLE_SEED, Route02_Station_SpecimenJar_2
# 62 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	msgbox Route02_Station_SpecimenJar_Text_1, MSGBOX_AUTOCLOSE
# 63 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	waitmessage
Route02_Station_SpecimenJar_1:
# 65 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	release
	return

Route02_Station_SpecimenJar_2:
# 55 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	msgbox Route02_Station_SpecimenJar_Text_0
# 56 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	waitmessage
# 57 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 58 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	waitmessage
# 59 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	setflag FLAG_ITEM_ROUTE02_STATION_MIRACLE_SEED
	goto Route02_Station_SpecimenJar_1


Route02_Station_Radio::
# 69 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	lock
# 70 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	msgbox Route02_Station_Radio_Text_0, MSGBOX_AUTOCLOSE
# 71 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	waitmessage
# 72 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	release
	return


Route02_Indoor_Ranger_House_Hint1_Text_0:
# 5 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	.string "SPECIMEN LOG - WEEK 34\p"
	.string "'Magnetic anomalies recorded at\n"
	.string "grid ref. CF-09, deep forest.\p"
	.string "Metallic resonance. Source unknown.\p"
	.string "Do not approach alone.'$"

Route02_Indoor_Ranger_House_Hint2_Text_0:
# 12 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	.string "NOTE - DR. VOSS\p"
	.string "'The readings at CF-09 are not\n"
	.string "geological. Something is down there.\p"
	.string "It doesn't move. It doesn't need to.\p"
	.string "I've requested backup.\n"
	.string "Nobody came.'$"

Route02_Indoor_Ranger_House_Hint3_Text_0:
# 19 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	.string "...handwritten, barely legible...\p"
	.string "'Saw it again at the tree line.\p"
	.string "Pink. Fast. Gone before I could\n"
	.string "focus on it.\p"
	.string "Voss thinks I'm losing it.\p"
	.string "Voss hasn't seen what I've seen.\p"
	.string "I'm not logging this one.'$"

Route02_Station_Bookcase1_Text_0:
# 26 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	.string "CLOUD FOREST FIELD RESEARCH\n"
	.string "Vol. 12 - Specimen Cataloguing\p"
	.string "Dense chapters on tagging\n"
	.string "procedures for grass-types.\p"
	.string "Somebody has underlined the\n"
	.string "word 'mutation' seventeen times.$"

Route02_Station_Bookcase2_Text_0:
# 33 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	.string "FACULTY INTERNAL MEMO\n"
	.string "Binder - Outpost 7 Directives\p"
	.string "Mostly budget reports and\n"
	.string "safety compliance forms.\p"
	.string "The last page has been torn out.$"

Route02_Station_Toolbox_Text_0:
# 40 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	.string "A rusted toolbox.\p"
	.string "Inside: three wrenches, a\n"
	.string "snapped drill bit, and a compass that\l"
	.string "spins without stopping.$"

Route02_Station_SoilCrate_Text_0:
# 47 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	.string "A crate of soil samples,\n"
	.string "each one labelled with a grid reference.\p"
	.string "The samples from CF-09 are\n"
	.string "a different colour than the rest.\p"
	.string "Dark. Almost metallic.$"

Route02_Station_SpecimenJar_Text_0:
# 55 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	.string "A specimen jar in a box.\p"
	.string "The label reads:\n"
	.string "'CF-09 - organic trace, unknown.'\p"
	.string "Inside, a small seed-like object, dark\n"
	.string "green, faintly warm to the touch.$"

Route02_Station_SpecimenJar_Text_1:
# 62 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	.string "A specimen jar in a box, empty.\p"
	.string "The label reads:\n"
	.string "'CF-09 - organic trace, unknown.'\p"
	.string "Whatever was inside it has been\n"
	.string "removed.\p"
	.string "Recently.$"

Route02_Station_Radio_Text_0:
# 70 "data/maps/Route02_Indoor_Ranger_House/scripts.pory"
	.string "A broken radio receiver,\n"
	.string "still plugged into the wall.\p"
	.string "If you hold it to your ear\n"
	.string "you can hear a low hum.\p"
	.string "Regular. Deep.\p"
	.string "Like something breathing\n"
	.string "very slowly underground.$"
