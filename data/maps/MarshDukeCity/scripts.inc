MarshDukeCity_MapScripts::
	.byte 0


MarshDukeCity_Sign_CityName::
	lockall
	msgbox MarshDukeCity_Sign_CityName_Text_0, MSGBOX_SIGN
	waitmessage
	releaseall
	return


Marshduke_Library_Sign::
	lock
	msgbox Marshduke_Library_Sign_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Cathedral_Sign::
	lock
	msgbox Marshduke_Cathedral_Sign_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Garden_Sign::
	lock
	msgbox Marshduke_Garden_Sign_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Luzac_Sign::
	lock
	msgbox Marshduke_Luzac_Sign_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Gallery_Sign::
	lock
	msgbox Marshduke_Gallery_Sign_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


MarshDukeCity_NPC_RangerHuts::
	lock
	faceplayer
	msgbox MarshDukeCity_NPC_RangerHuts_Text_0
	release
	end


MarshDukeCity_NPC_ResearchDirections::
	lock
	faceplayer
	msgbox MarshDukeCity_NPC_ResearchDirections_Text_0
	release
	end


MarshDukeCity_NPC_LibraryVisitor::
	lock
	faceplayer
	msgbox MarshDukeCity_NPC_LibraryVisitor_Text_0
	release
	end


MarshDukeCity_NPC_Pilgrim::
	lock
	faceplayer
	goto_if_set FLAG_MARSHDUKE_CATHEDRAL_TOUR, MarshDukeCity_NPC_Pilgrim_2
	msgbox MarshDukeCity_NPC_Pilgrim_Text_1
MarshDukeCity_NPC_Pilgrim_1:
	release
	end

MarshDukeCity_NPC_Pilgrim_2:
	msgbox MarshDukeCity_NPC_Pilgrim_Text_0
	goto MarshDukeCity_NPC_Pilgrim_1


MarshDukeCity_NPC_DeltaResident::
	lock
	faceplayer
	msgbox MarshDukeCity_NPC_DeltaResident_Text_0
	release
	end


MarshDukeCity_NPC_CemeteryDirections::
	lock
	faceplayer
	msgbox MarshDukeCity_NPC_CemeteryDirections_Text_0
	release
	end


MarshDukeCity_NPC_OldFisherman::
	lock
	faceplayer
	msgbox MarshDukeCity_NPC_OldFisherman_Text_0
	release
	end


MarshDukeCity_NPC_BirdCounter::
	lock
	faceplayer
	msgbox MarshDukeCity_NPC_BirdCounter_Text_0
	release
	end


MarshDukeCity_NPC_MonkErrand::
	lock
	faceplayer
	msgbox MarshDukeCity_NPC_MonkErrand_Text_0
	release
	end


MarshDukeCity_NPC_BridgeWorker::
	lock
	faceplayer
	msgbox MarshDukeCity_NPC_BridgeWorker_Text_0
	release
	end


MarshDukeCity_NPC_Tourist::
	lock
	faceplayer
	msgbox MarshDukeCity_NPC_Tourist_Text_0
	release
	end


MarshDukeCity_NPC_WooperGirl::
	lock
	faceplayer
	msgbox MarshDukeCity_NPC_WooperGirl_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_MARSHDUKE_WOOPER, MarshDukeCity_NPC_WooperGirl_Movement_0
	waitmovement 0
	msgbox MarshDukeCity_NPC_WooperGirl_Text_1
	release
	end


MarshDukeCity_Wooper::
	lock
	faceplayer
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
	msgbox MarshDukeCity_Wooper_Text_0
	waitmoncry
	release
	end


MarshDukeCity_NPC_BarboachBoy::
	lock
	faceplayer
	msgbox MarshDukeCity_NPC_BarboachBoy_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_PIN
	applymovement 14, MarshDukeCity_NPC_BarboachBoy_Movement_0
	applymovement LOCALID_MARSHDUKE_BARBOACH, MarshDukeCity_NPC_BarboachBoy_Movement_1
	waitmovement 0
	faceplayer
	msgbox MarshDukeCity_NPC_BarboachBoy_Text_1
	release
	end


MarshDukeCity_Barboach::
	lock
	faceplayer
	playmoncry SPECIES_BARBOACH, CRY_MODE_NORMAL
	msgbox MarshDukeCity_Barboach_Text_0
	waitmoncry
	release
	end


MarshDukeCity_NPC_NatuWatcher::
	lock
	faceplayer
	msgbox MarshDukeCity_NPC_NatuWatcher_Text_0
	waitmessage
	playse SE_PIN
	applymovement 16, MarshDukeCity_NPC_NatuWatcher_Movement_0
	applymovement LOCALID_MARSHDUKE_NATU, MarshDukeCity_NPC_NatuWatcher_Movement_1
	waitmovement 0
	msgbox MarshDukeCity_NPC_NatuWatcher_Text_1
	closemessage
	release
	end


MarshDukeCity_Natu::
	lock
	faceplayer
	playmoncry SPECIES_NATU, CRY_MODE_NORMAL
	msgbox MarshDukeCity_Natu_Text_0
	waitmoncry
	release
	end


MarshDukeCity_NPC_WooperGirl_Movement_0:
	face_player
	emote_heart
	jump_in_place_down
	step_end

MarshDukeCity_NPC_BarboachBoy_Movement_0:
	face_up
	step_end

MarshDukeCity_NPC_BarboachBoy_Movement_1:
	emote_exclamation_mark
	jump_in_place_down
	jump_in_place_down
	step_end

MarshDukeCity_NPC_NatuWatcher_Movement_0:
	face_right
	step_end

MarshDukeCity_NPC_NatuWatcher_Movement_1:
	emote_exclamation_mark
	face_up
	step_end

MarshDukeCity_Sign_CityName_Text_0:
	.string "MARSHDUKE CITY\n"
	.string "Oldest City in TESSERA\p"
	.string "Where the Rememberer Resides.$"

Marshduke_Library_Sign_Text_0:
	.string "- Marshduke Library -\n"
	.string "WE WRITE TO REMEMBER FOR OURSELVES.$"

Marshduke_Cathedral_Sign_Text_0:
	.string "- Cathedral of the Open Eye -\n"
	.string "HOME OF THE REMEMBERER. GUIDED TOURS\l"
	.string "DAILY.$"

Marshduke_Garden_Sign_Text_0:
	.string "- Marshduke Botanical Garden -\n"
	.string "GARDEN AND CEMETERY. PLEASE STAY ON\l"
	.string "THE PATHS.$"

Marshduke_Luzac_Sign_Text_0:
	.string "- Luzac Institute -\n"
	.string "RESEARCH CENTRE FOR PSYCHIC\l"
	.string "PHENOMENA.$"

Marshduke_Gallery_Sign_Text_0:
	.string "- Cartesius Gallery -\n"
	.string "LOOK WITH YOUR EYES, NOT WITH YOUR\l"
	.string "HANDS.$"

MarshDukeCity_NPC_RangerHuts_Text_0:
	.string "Hmppf..\p"
	.string "I just got back from visiting the little\n"
	.string "ranger huts in the estuary.\p"
	.string "I went there to spy on wild Pokémon!\p"
	.string "Every hut looks out on something\n"
	.string "different. Trees, reeds, ponds...\p"
	.string "I went looking for an Ursaring, but I\n"
	.string "only saw a few Stantler. I guess they\l"
	.string "were just passing through.$"

MarshDukeCity_NPC_ResearchDirections_Text_0:
	.string "Our research centre studies the Mega\n"
	.string "Alakazam in the cathedral.\p"
	.string "We have a dedecated team studying each\n"
	.string "of the six altars, too!\p"
	.string "Each research team consists of a monk\n"
	.string "and a scientist.\p"
	.string "The monks taught us how to sit still for\n"
	.string "hours, and we taught them how to label\l"
	.string "their jars.\p"
	.string "...They're still working on that part.$"

MarshDukeCity_NPC_LibraryVisitor_Text_0:
	.string "I went to the library to read up on the\n"
	.string "history of my street.\p"
	.string "Turns out it used to be a river!\p"
	.string "That explains why my basement is always\n"
	.string "wet...$"

MarshDukeCity_NPC_Pilgrim_Text_0:
	.string "The scholars say one thing. The monks\n"
	.string "say another.\p"
	.string "At least the Rememberer hasn't tried to\n"
	.string "sell me a book yet.$"

MarshDukeCity_NPC_Pilgrim_Text_1:
	.string "I came all this way to find out what the\n"
	.string "Rememberer sees.\p"
	.string "Every scholar I ask gives me a\n"
	.string "different answer!$"

MarshDukeCity_NPC_DeltaResident_Text_0:
	.string "My dad always said Marshduke is a city\n"
	.string "built on islands. My mom said it's a city\l"
	.string "built on repairs!\p"
	.string "They met on the bridge committee. I\n"
	.string "guess they were both right!$"

MarshDukeCity_NPC_CemeteryDirections_Text_0:
	.string "The cathedral gardens have a little\n"
	.string "graveyard, right here in the city.\p"
	.string "There's an old fellow there who knows\n"
	.string "everything about plants.\p"
	.string "Ask him what time it is, and he'll tell\n"
	.string "you which flower is blooming!$"

MarshDukeCity_NPC_OldFisherman_Text_0:
	.string "When I was a boy, this delta had so many\n"
	.string "fish you couldn't even see the bottom!\p"
	.string "Now I can see the bottom just fine...\n"
	.string "but I can't see any fish!$"

MarshDukeCity_NPC_BirdCounter_Text_0:
	.string "I'm counting bird Pokémon for my school\n"
	.string "project! So far I've seen three Pidgey!\p"
	.string "Grandpa says that's nothing. He says\n"
	.string "the sky used to be so full of birds it\l"
	.string "looked like it was moving.\p"
	.string "I think they just settled themselves in\n"
	.string "the arches of the cathedral.$"

MarshDukeCity_NPC_MonkErrand_Text_0:
	.string "Brother Andre sent me into town to buy\n"
	.string "a new mop.\p"
	.string "He says a clean floor makes for a clear\n"
	.string "mind.\p"
	.string "He's mopped the same floor every\n"
	.string "morning for twenty years. He must must\l"
	.string "be super wise by now.$"

MarshDukeCity_NPC_BridgeWorker_Text_0:
	.string "Every spring, the delta moves the\n"
	.string "islands a little bit.\p"
	.string "Therefore, every spring, we move the\n"
	.string "boardwalks a little bit too!\p"
	.string "It's the slowest race in all of\n"
	.string "Tessera...\p"
	.string "Except for the annual Slowpoke race, of\n"
	.string "course.$"

MarshDukeCity_NPC_Tourist_Text_0:
	.string "I came all this way to see the\n"
	.string "Rememberer! They say it's been sitting\l"
	.string "in the same spot for 10,000 years.\p"
	.string "I can't even sit still through a whole\n"
	.string "lunch!$"

MarshDukeCity_NPC_WooperGirl_Text_0:
	.string "This is my Wooper! It loves the mud in\n"
	.string "the delta more than anything.\p"
	.string "I've given it a bath every day this\n"
	.string "week. It has never once stayed clean\l"
	.string "for more than a minute.$"

MarshDukeCity_NPC_WooperGirl_Text_1:
	.string "See? It's proud of it!$"

MarshDukeCity_Wooper_Text_0:
	.string "Woo? Wooooo!$"

MarshDukeCity_NPC_BarboachBoy_Text_0:
	.string "My Barboach can sense earthquakes! It\n"
	.string "starts wiggling like crazy whenever one\l"
	.string "is coming.\p"
	.string "It also wiggles when it's hungry. And\n"
	.string "when it's bored. And when it sees a\l"
	.string "Magikarp.\p"
	.string "So... we've had a lot of false alarms.$"

MarshDukeCity_NPC_BarboachBoy_Text_1:
	.string "Uh-oh, it's wiggling again! Earthquake\n"
	.string "or lunch? Only one way to find out...$"

MarshDukeCity_Barboach_Text_0:
	.string "Bar-bar!$"

MarshDukeCity_NPC_NatuWatcher_Text_0:
	.string "My Natu has been staring at the\n"
	.string "cathedral since breakfast.\p"
	.string "The monks say Natu can see the past.\n"
	.string "Maybe it's watching the Rememberer!\p"
	.string "Or maybe it's asleep with its eyes open.\n"
	.string "I honestly can't tell.$"

MarshDukeCity_NPC_NatuWatcher_Text_1:
	.string "Oh! It blinked! That's the first time\n"
	.string "today!$"

MarshDukeCity_Natu_Text_0:
	.string "...Tu.$"
