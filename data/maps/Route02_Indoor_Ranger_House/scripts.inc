Route02_Indoor_Ranger_House_MapScripts::
	.byte 0


Route02_Indoor_Ranger_House_Hint1::
	lock
	msgbox Route02_Indoor_Ranger_House_Hint1_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


Route02_Indoor_Ranger_House_Hint2::
	lock
	msgbox Route02_Indoor_Ranger_House_Hint2_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


Route02_Indoor_Ranger_House_Hint3::
	lock
	msgbox Route02_Indoor_Ranger_House_Hint3_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


Route02_Station_Bookcase1::
	lock
	msgbox Route02_Station_Bookcase1_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


Route02_Station_Bookcase2::
	lock
	msgbox Route02_Station_Bookcase2_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


Route02_Station_Toolbox::
	lock
	msgbox Route02_Station_Toolbox_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


Route02_Station_SoilCrate::
	lock
	msgbox Route02_Station_SoilCrate_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


Route02_Station_SpecimenJar::
	lock
	goto_if_unset FLAG_ITEM_ROUTE02_STATION_MIRACLE_SEED, Route02_Station_SpecimenJar_2
	msgbox Route02_Station_SpecimenJar_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
Route02_Station_SpecimenJar_1:
	release
	return

Route02_Station_SpecimenJar_2:
	msgbox Route02_Station_SpecimenJar_Text_0
	waitmessage
	giveitem ITEM_MIRACLE_SEED
	waitmessage
	setflag FLAG_ITEM_ROUTE02_STATION_MIRACLE_SEED
	goto Route02_Station_SpecimenJar_1


Route02_Station_Radio::
	lock
	msgbox Route02_Station_Radio_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


Route02_Indoor_Ranger_House_Hint1_Text_0:
	.string "SPECIMEN LOG - WEEK 34\p"
	.string "'Magnetic anomalies recorded at\n"
	.string "grid ref. CF-09, deep forest.\p"
	.string "Metallic resonance. Source unknown.\p"
	.string "Do not approach alone.'$"

Route02_Indoor_Ranger_House_Hint2_Text_0:
	.string "NOTE - DR. VOSS\p"
	.string "'The readings at CF-09 are not\n"
	.string "geological. Something is down there.\p"
	.string "It doesn't move. It doesn't need to.\p"
	.string "I've requested backup.\n"
	.string "Nobody came.'$"

Route02_Indoor_Ranger_House_Hint3_Text_0:
	.string "...handwritten, barely legible...\p"
	.string "'Saw it again at the tree line.\p"
	.string "Pink. Fast. Gone before I could\n"
	.string "focus on it.\p"
	.string "Voss thinks I'm losing it.\p"
	.string "Voss hasn't seen what I've seen.\p"
	.string "I'm not logging this one.'$"

Route02_Station_Bookcase1_Text_0:
	.string "CLOUD FOREST FIELD RESEARCH\n"
	.string "Vol. 12 - Specimen Cataloguing\p"
	.string "Dense chapters on tagging\n"
	.string "procedures for grass-types.\p"
	.string "Somebody has underlined the\n"
	.string "word 'mutation' seventeen times.$"

Route02_Station_Bookcase2_Text_0:
	.string "FACULTY INTERNAL MEMO\n"
	.string "Binder - Outpost 7 Directives\p"
	.string "Mostly budget reports and\n"
	.string "safety compliance forms.\p"
	.string "The last page has been torn out.$"

Route02_Station_Toolbox_Text_0:
	.string "A rusted toolbox.\p"
	.string "Inside: three wrenches, a\n"
	.string "snapped drill bit, and a compass that\l"
	.string "spins without stopping.$"

Route02_Station_SoilCrate_Text_0:
	.string "A crate of soil samples,\n"
	.string "each one labelled with a grid reference.\p"
	.string "The samples from CF-09 are\n"
	.string "a different colour than the rest.\p"
	.string "Dark. Almost metallic.$"

Route02_Station_SpecimenJar_Text_0:
	.string "A specimen jar in a box.\p"
	.string "The label reads:\n"
	.string "'CF-09 - organic trace, unknown.'\p"
	.string "Inside, a small seed-like object, dark\n"
	.string "green, faintly warm to the touch.$"

Route02_Station_SpecimenJar_Text_1:
	.string "A specimen jar in a box, empty.\p"
	.string "The label reads:\n"
	.string "'CF-09 - organic trace, unknown.'\p"
	.string "Whatever was inside it has been\n"
	.string "removed.\p"
	.string "Recently.$"

Route02_Station_Radio_Text_0:
	.string "A broken radio receiver,\n"
	.string "still plugged into the wall.\p"
	.string "If you hold it to your ear\n"
	.string "you can hear a low hum.\p"
	.string "Regular. Deep.\p"
	.string "Like something breathing\n"
	.string "very slowly underground.$"
