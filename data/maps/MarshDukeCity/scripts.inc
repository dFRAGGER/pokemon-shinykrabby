MarshDukeCity_MapScripts::
	.byte 0


Marshduke_Library_Sign::
	lock
	msgbox Marshduke_Library_Sign_Text_0, MSGBOX_SIGN
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
	msgbox MarshDukeCity_NPC_WooperGirl_Text_0
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
	msgbox MarshDukeCity_NPC_BarboachBoy_Text_0
	applymovement LOCALID_MARSHDUKE_BARBOACH, MarshDukeCity_NPC_BarboachBoy_Movement_0
	waitmovement 0
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
	applymovement LOCALID_MARSHDUKE_NATU, MarshDukeCity_NPC_NatuWatcher_Movement_0
	waitmovement 0
	msgbox MarshDukeCity_NPC_NatuWatcher_Text_1
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MarshDukeCity_NPC_NatuWatcher_Movement_1
	waitmovement 0
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
	emote_heart
	jump_in_place_down
	step_end

MarshDukeCity_NPC_BarboachBoy_Movement_0:
	emote_exclamation_mark
	jump_in_place_down
	jump_in_place_down
	step_end

MarshDukeCity_NPC_NatuWatcher_Movement_0:
	emote_exclamation_mark
	face_up
	step_end

MarshDukeCity_NPC_NatuWatcher_Movement_1:
	face_up
	step_end

Marshduke_Library_Sign_Text_0:
	.string "- Marshduke Library -\n"
	.string "WE WRITE TO REMEMBER FOR OURSELVES.$"

MarshDukeCity_NPC_RangerHuts_Text_0:
	.string "There are some little huts in the\n"
	.string "estuary to spy on wild Pokémon!\p"
	.string "Every hut looks out on something\n"
	.string "different. Trees, reeds, ponds...\p"
	.string "I checked every single one and still\n"
	.string "missed the Pokémon I came for!$"

MarshDukeCity_NPC_ResearchDirections_Text_0:
	.string "Our research centre studies the Mega\n"
	.string "Alakazam in the cathedral. And the six\l"
	.string "altars, too!\p"
	.string "The monks help us out. They taught us\n"
	.string "how to sit still for hours.\p"
	.string "We taught them how to label their jars.\p"
	.string "...They're still working on that part.$"

MarshDukeCity_NPC_LibraryVisitor_Text_0:
	.string "I went to the library to read up on the\n"
	.string "history of my street.\p"
	.string "Turns out it used to be a river!\p"
	.string "That explains why my basement is always\n"
	.string "wet...$"

MarshDukeCity_NPC_Pilgrim_Text_0:
	.string "The scholars say one thing. The monks\n"
	.string "say another. Even my own notes changed\l"
	.string "their mind twice!\p"
	.string "Well, at least the Rememberer hasn't\n"
	.string "tried to sell me a book yet.$"

MarshDukeCity_NPC_Pilgrim_Text_1:
	.string "I came all this way to find out what the\n"
	.string "Rememberer sees.\p"
	.string "Every scholar I ask gives me a\n"
	.string "different answer! And none of them can\l"
	.string "make this line move any faster...$"

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
	.string "When I was a boy, this river had so many\n"
	.string "fish you couldn't even see the bottom!\p"
	.string "Now I can see the bottom just fine. I\n"
	.string "can see my old boot down there, too.$"

MarshDukeCity_NPC_BirdCounter_Text_0:
	.string "I'm counting bird Pokémon for my school\n"
	.string "project! So far I've seen three Pidgey!\p"
	.string "Grandpa says that's nothing. He says\n"
	.string "the sky used to be so full of birds it\l"
	.string "looked like it was moving.\p"
	.string "I think Grandpa just forgot his\n"
	.string "glasses.$"

MarshDukeCity_NPC_MonkErrand_Text_0:
	.string "Brother Andre sent me into town to buy\n"
	.string "a new mop.\p"
	.string "He says a clean floor makes for a clear\n"
	.string "mind.\p"
	.string "He's mopped the same spot every\n"
	.string "morning for twenty years. That spot\l"
	.string "must be super wise by now.$"

MarshDukeCity_NPC_BridgeWorker_Text_0:
	.string "Every spring, the river moves the\n"
	.string "islands a little bit. So every spring, we\l"
	.string "move the bridges a little bit!\p"
	.string "It's the slowest race in all of Tessera.\n"
	.string "And the river's winning!$"

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
	.string "Wooper: Woo? Wooooo!\p"
	.string "It's covered in mud from head to tail. It\n"
	.string "looks very happy about it.$"

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
	.string "Barboach: Bar-bar!\p"
	.string "Its whiskers are twitching. It's either\n"
	.string "sensing a tremor or smelling snacks.$"

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
	.string "Natu: ...Tu.\p"
	.string "Natu is staring right through you. It\n"
	.string "still hasn't blinked.$"
