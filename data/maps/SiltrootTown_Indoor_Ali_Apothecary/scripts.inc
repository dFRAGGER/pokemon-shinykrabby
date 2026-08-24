SiltrootTown_Indoor_Ali_Apothecary_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SiltrootTown_Indoor_Ali_Apothecary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SiltrootTown_Indoor_Ali_Apothecary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_SILTROOT_TOWN_STATE, 0, SiltrootTown_Indoor_Apothecary_Ali_Giel
	.2byte 0


SiltrootTown_Ali_Employer::
	lock
	faceplayer
	msgbox SiltrootTown_Ali_Employer_Text_0
	waitmessage
	pokemart SiltrootTown_Mart_Items
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
SiltrootTown_Mart_Items:
	.2byte ITEM_LEPPA_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_NONE

SiltrootTown_RollingTable::
	lock
	faceplayer
	goto_if_unset FLAG_MET_ROLLING_TABLE_GUY, SiltrootTown_RollingTable_2
SiltrootTown_RollingTable_1:
	special Special_HasGroundMaterial
	compare VAR_RESULT, FALSE
	goto_if_eq SiltrootTown_RollingTable_5
	msgbox SiltrootTown_RollingTable_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	special Special_OpenCaseForRolling
	waitstate
	compare VAR_RESULT, 0xFFFF
	goto_if_eq SiltrootTown_RollingTable_8
	msgbox SiltrootTown_RollingTable_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	multichoice 0, 0, MULTI_HERB_PREP, FALSE
	compare VAR_RESULT, 3
	goto_if_eq SiltrootTown_RollingTable_11
	copyvar VAR_0x8001, VAR_RESULT
	special Special_PrepareHerbTreat
	compare VAR_0x8001, 0
	goto_if_eq SiltrootTown_RollingTable_14
	compare VAR_0x8001, 1
	goto_if_eq SiltrootTown_RollingTable_15
	msgbox SiltrootTown_RollingTable_Text_7, MSGBOX_AUTOCLOSE
	waitmessage
SiltrootTown_RollingTable_13:
	release
	end

SiltrootTown_RollingTable_2:
	setflag FLAG_MET_ROLLING_TABLE_GUY
	msgbox SiltrootTown_RollingTable_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	goto SiltrootTown_RollingTable_1

SiltrootTown_RollingTable_5:
	msgbox SiltrootTown_RollingTable_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end

SiltrootTown_RollingTable_8:
	msgbox SiltrootTown_RollingTable_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end

SiltrootTown_RollingTable_11:
	msgbox SiltrootTown_RollingTable_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end

SiltrootTown_RollingTable_14:
	msgbox SiltrootTown_RollingTable_Text_5, MSGBOX_AUTOCLOSE
	waitmessage
	goto SiltrootTown_RollingTable_13

SiltrootTown_RollingTable_15:
	msgbox SiltrootTown_RollingTable_Text_6, MSGBOX_AUTOCLOSE
	waitmessage
	goto SiltrootTown_RollingTable_13


SiltrootTown_Elder_Dialogue::
	lock
	faceplayer
	msgbox SiltrootTown_Elder_Dialogue_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


SiltrootTown_Woman_Dialogue::
	lock
	faceplayer
	msgbox SiltrootTown_Woman_Dialogue_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


SiltrootTown_Screen_Dialogue::
	lock
	faceplayer
	msgbox SiltrootTown_Screen_Dialogue_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


SiltrootTown_Plant_Dialogue::
	lock
	faceplayer
	msgbox SiltrootTown_Plant_Dialogue_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


SiltrootTown_Indoor_Apothecary_Ali_Giel::
	lock
	setvar VAR_SILTROOT_TOWN_STATE, 1
	playse SE_PIN
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_0
	waitmovement
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 1, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_1
	waitmovement
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3
	delay 60
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	applymovement 5, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_4
	waitmovement
	playse SE_PIN
	delay 60
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_5, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
	applymovement 5, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_5
	waitmovement
	delay 60
	applymovement 5, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6
	waitmovement
	delay 60
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_6, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 5, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_7
	waitmovement
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_7
	waitmessage
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_8
	waitmessage
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_9, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	playse SE_POKENAV_CALL
	delay 60
	playse SE_POKENAV_CALL
	delay 60
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
	applymovement 1, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_8
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_10, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 1, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_9
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_10
	waitmovement
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_11, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 1, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_11
	waitmovement
	setflag FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1
	removeobject 1
	removeobject 5
	delay 120
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6
	waitmovement
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_12, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6
	waitmovement
	release
	end


Siltroottown_Indoor_Apothecary_Ali::
	lock
	faceplayer
	goto_if_unset FLAG_SILTROOTTOWN_STASH_SACK, Siltroottown_Indoor_Apothecary_Ali_11
Siltroottown_Indoor_Apothecary_Ali_9:
	goto_if_set FLAG_SILTROOTTOWN_STASH_SACK, Siltroottown_Indoor_Apothecary_Ali_8
Siltroottown_Indoor_Apothecary_Ali_6:
	goto_if_set FLAG_SILTROOTTOWN_STASH_SACK, Siltroottown_Indoor_Apothecary_Ali_5
Siltroottown_Indoor_Apothecary_Ali_1:
	release
	end

Siltroottown_Indoor_Apothecary_Ali_2:
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	goto Siltroottown_Indoor_Apothecary_Ali_1

Siltroottown_Indoor_Apothecary_Ali_3:
	checkitem ITEM_POKEBLOCK_CASE
	compare VAR_RESULT, TRUE
	goto_if_eq Siltroottown_Indoor_Apothecary_Ali_14
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
	waitmovement
	delay 40
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6
	waitmovement
	delay 40
	applymovement 2, Siltroottown_Indoor_Apothecary_Ali_Movement_0
	waitmovement
	delay 40
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3
	waitmovement
	delay 40
	applymovement 2, Siltroottown_Indoor_Apothecary_Ali_Movement_1
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	delay 40
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	giveitem ITEM_POKEBLOCK_CASE
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_5, MSGBOX_AUTOCLOSE
	waitmessage
	goto Siltroottown_Indoor_Apothecary_Ali_1

Siltroottown_Indoor_Apothecary_Ali_4:
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_6
	waitmessage
	goto Siltroottown_Indoor_Apothecary_Ali_1

Siltroottown_Indoor_Apothecary_Ali_5:
	goto_if_set FLAG_HIDE_SCOTT_AFTER_CONVO, Siltroottown_Indoor_Apothecary_Ali_4
	goto Siltroottown_Indoor_Apothecary_Ali_1

Siltroottown_Indoor_Apothecary_Ali_8:
	goto_if_unset FLAG_HIDE_SCOTT_AFTER_CONVO, Siltroottown_Indoor_Apothecary_Ali_3
	goto Siltroottown_Indoor_Apothecary_Ali_6

Siltroottown_Indoor_Apothecary_Ali_11:
	goto_if_unset FLAG_HIDE_SCOTT_AFTER_CONVO, Siltroottown_Indoor_Apothecary_Ali_2
	goto Siltroottown_Indoor_Apothecary_Ali_9

Siltroottown_Indoor_Apothecary_Ali_14:
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	goto Siltroottown_Indoor_Apothecary_Ali_1


SiltrootTown_PriceBoard::
	lock
	msgbox SiltrootTown_PriceBoard_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


SiltrootTown_HerbGuide::
	lock
	faceplayer
	msgbox SiltrootTown_HerbGuide_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SiltrootTown_HerbGuide_2
SiltrootTown_HerbGuide_Menu:
	multichoice 0, 0, MULTI_HERB_GUIDE, FALSE
	compare VAR_RESULT, 0
	goto_if_eq SiltrootTown_HerbGuide_5
SiltrootTown_HerbGuide_4:
	compare VAR_RESULT, 1
	goto_if_eq SiltrootTown_HerbGuide_8
SiltrootTown_HerbGuide_7:
	compare VAR_RESULT, 2
	goto_if_eq SiltrootTown_HerbGuide_11
SiltrootTown_HerbGuide_10:
	compare VAR_RESULT, 3
	goto_if_eq SiltrootTown_HerbGuide_14
SiltrootTown_HerbGuide_13:
	msgbox SiltrootTown_HerbGuide_Text_6, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end

SiltrootTown_HerbGuide_2:
	msgbox SiltrootTown_HerbGuide_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end

SiltrootTown_HerbGuide_5:
	msgbox SiltrootTown_HerbGuide_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	goto SiltrootTown_HerbGuide_Menu
	goto SiltrootTown_HerbGuide_4

SiltrootTown_HerbGuide_8:
	msgbox SiltrootTown_HerbGuide_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	goto SiltrootTown_HerbGuide_Menu
	goto SiltrootTown_HerbGuide_7

SiltrootTown_HerbGuide_11:
	msgbox SiltrootTown_HerbGuide_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	goto SiltrootTown_HerbGuide_Menu
	goto SiltrootTown_HerbGuide_10

SiltrootTown_HerbGuide_14:
	msgbox SiltrootTown_HerbGuide_Text_5, MSGBOX_AUTOCLOSE
	waitmessage
	goto SiltrootTown_HerbGuide_Menu
	goto SiltrootTown_HerbGuide_13


SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_0:
	emote_question_mark
	face_down
	step_end

SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_1:
	walk_left
	walk_down
	step_end

SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2:
	face_left
	step_end

SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3:
	face_down
	step_end

SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_4:
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_right
	walk_slow_right
	walk_slow_right
	face_down
	emote_question_mark
	step_end

SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_5:
	walk_slow_up
	face_right
	step_end

SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6:
	face_up
	step_end

SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_7:
	walk_slow_down
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	step_end

SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_8:
	emote_question_mark
	step_end

SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_9:
	walk_down
	walk_down
	walk_down
	face_right
	step_end

SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_10:
	walk_right
	face_left
	step_end

SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_11:
	walk_down
	step_end

Siltroottown_Indoor_Apothecary_Ali_Movement_0:
	face_right
	step_end

Siltroottown_Indoor_Apothecary_Ali_Movement_1:
	face_player
	step_end

SiltrootTown_Ali_Employer_Text_0:
	.string "Hi there. A new batch just arrived.\n"
	.string "How can I help?$"

SiltrootTown_RollingTable_Text_0:
	.string "Hey. Name's Rudo.\p"
	.string "I've been rolling longer than Ali's been\n"
	.string "stargazing.\p"
	.string "Used to work the underground prep\n"
	.string "circuit in Lionsarch before he brought\l"
	.string "me in.\p"
	.string "Now I handle all the prep here - Joints,\n"
	.string "Blunts, Bowls.\p"
	.string "You bring me the grind, I'll turn it into\n"
	.string "something your Pokémon won't forget.$"

SiltrootTown_RollingTable_Text_1:
	.string "No grind, no roll.\p"
	.string "Find someone with a Grinder, grind your\n"
	.string "buds, then come back.$"

SiltrootTown_RollingTable_Text_2:
	.string "Nice. Pick which grind you want to roll.$"

SiltrootTown_RollingTable_Text_3:
	.string "No worries. Come back when you're ready.$"

SiltrootTown_RollingTable_Text_4:
	.string "Alright. What prep do you want?$"

SiltrootTown_RollingTable_Text_5:
	.string "There you go - rolled it into a Joint.\p"
	.string "Nice and even. Use it with your Pokemon\n"
	.string "and they'll feel it.$"

SiltrootTown_RollingTable_Text_6:
	.string "Blunt's done.\p"
	.string "Two dominant strains packed tight. Hits\n"
	.string "harder than a Joint.\p"
	.string "Use it with your Pokemon.$"

SiltrootTown_RollingTable_Text_7:
	.string "Bowl's packed.\p"
	.string "Pure concentrated top strain - nothing\n"
	.string "balanced about it.\p"
	.string "Use it with your Pokemon.$"

SiltrootTown_Elder_Dialogue_Text_0:
	.string "My doctor prescribed me all sorts of\n"
	.string "pills for my stiff hip... but Ali's\l"
	.string "'special brownies' are the only thing\l"
	.string "that work.\p"
	.string "I feel twenty years younger... and very,\n"
	.string "very hungry.\p"
	.string "Do you have any cookies, dear?$"

SiltrootTown_Woman_Dialogue_Text_0:
	.string "I don't even smoke.\p"
	.string "I just come here to sit in the fog.\p"
	.string "It is the only place in town where\n"
	.string "nobody asks me to do anything.\p"
	.string "It's like a sanctuary... a very smelly\n"
	.string "sanctuary.$"

SiltrootTown_Screen_Dialogue_Text_0:
	.string "Eight hundred for a gram of OG Kush?!\p"
	.string "Inflation is hitting us hard.\p"
	.string "I might have to settle for the Lemon\n"
	.string "Haze mix this week.\p"
	.string "It's weaker, but it leaves enough money\n"
	.string "for snacks.$"

SiltrootTown_Plant_Dialogue_Text_0:
	.string "Look at the leaves on this one.\p"
	.string "They call it 'Indica'.\p"
	.string "Ali says if you stare at it long enough,\n"
	.string "you can see the cosmos.\p"
	.string "I have been staring for ten minutes and\n"
	.string "I only see a very fuzzy caterpie.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0:
	.string "ALI$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_1:
	.string "Whoa... enter the event horizon, my\n"
	.string "friend.\p"
	.string "You have pulled into my gravity well.\p"
	.string "You look like you are carrying a lot of\n"
	.string "mass on your shoulders.\p"
	.string "We have the finest herbs here... grown\n"
	.string "with hydroponics that rival NASA specs.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2:
	.string "GIEL$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_3:
	.string "cough... COUGH!\p"
	.string "Don't let him start on the space stuff,\n"
	.string "kid.\p"
	.string "He stares at the sky all night.\p"
	.string "It's just lights in the dark, Ali.\p"
	.string "cough...\p"
	.string "Like an Artic Monkey concert but\n"
	.string "further away.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_4:
	.string "Wait... the vibrations are shifting.\p"
	.string "Daan sent you?\p"
	.string "Whoa. That guy is intense.\p"
	.string "Always shouting about 'Mother Nature'...\p"
	.string "He thinks too small.\p"
	.string "I'm thinking about the bigger picture.\n"
	.string "The cosmos. The singularity.\p"
	.string "Talking about singularity... Slowbro,\n"
	.string "bring me a sample of that OG Kush.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_5:
	.string "Slowbro, abort launch.\p"
	.string "Our guest is grounded.\p"
	.string "More for us, right?\p"
	.string "I need the focus anyway.\p"
	.string "My Master's thesis on supermassive\n"
	.string "black holes isn't going to write itself.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_6:
	.string "Thanks Slowbro. These herbs will do me\n"
	.string "good.\p"
	.string "cough... COUGH!$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_7:
	.string "So you need a ride to Lion's Arch?\p"
	.string "That cold ass harbor up north?\p"
	.string "Why would anyone want to go there?\p"
	.string "There's no good music scene, apart from\n"
	.string "a disco club in a random basement.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_8:
	.string "It is a long trip across the wild ocean.\p"
	.string "You need my neighbor, Scott.\p"
	.string "He... moves inventory for me.\p"
	.string "This business funds my, uh... 'hardware\n"
	.string "acquisitions'.\p"
	.string "Rocket fuel isn't cheap, you know?\p"
	.string "I mean... high-quality fertilizer. Yeah.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_9:
	.string "I believe in Karma. Celestial mechanics.\p"
	.string "I help you, you help me.\p"
	.string "I have a client in Lion's Arch.\p"
	.string "A DJ... cool guy.\p"
	.string "He helps fund my 'Project Star-Shot'.\p"
	.string "I mean, he buys a lot of product.\p"
	.string "I have a stash stacked in an old shed\n"
	.string "deep in the southern mangroves.\p"
	.string "Go get the package, bring it to Scott,\n"
	.string "and tell him it is for the 'Ice Cold' run.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_10:
	.string "...\p"
	.string "Wait... that's my phone?\p"
	.string "Oh for the love of...\p"
	.string "It's her.\p"
	.string "She probably crashed her car again or\n"
	.string "needs 'emotional support'.\p"
	.string "I can't deal with this drama right now,\n"
	.string "but I have to take this.\p"
	.string "...COUGH!\p"
	.string "See you around, kid. Don't let the\n"
	.string "system grind you down.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_11:
	.string "Oh... if you are ever visit Hezik Town,\n"
	.string "let me know.\p"
	.string "Maybe you can visit one of my history\n"
	.string "lectures, girls love that shit.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_12:
	.string "He loves that woman, even if the\n"
	.string "thermodynamics of their relationship\l"
	.string "are unstable.\p"
	.string "Alright, good vibes only.\p"
	.string "Go to the southern mangroves, grab the\n"
	.string "stash, find Scott.\p"
	.string "And watch the sky... big things are\n"
	.string "coming.$"

Siltroottown_Indoor_Apothecary_Ali_Text_0:
	.string "Follow coastline south, there you'll\n"
	.string "find a passage to a small shed.\p"
	.string "Feel free to take any samples if you'd\n"
	.string "like.\p"
	.string "The strains that are in that shed are\n"
	.string "some of the strongest I got hehe.$"

Siltroottown_Indoor_Apothecary_Ali_Text_1:
	.string "You've got my Stash Case.\p"
	.string "Now go find Scott - he is right next\n"
	.string "door.\p"
	.string "Show it to him and tell him it's for the\n"
	.string "'Ice Cold' run.$"

Siltroottown_Indoor_Apothecary_Ali_Text_2:
	.string "Ah, the satellite returns to base.\p"
	.string "You smell like swamp water... and\n"
	.string "success.\p"
	.string "Those Slowbros in the shed are hard\n"
	.string "workers, but their processing speed is\l"
	.string "a bit low, right?\p"
	.string "You got the package? Stellar.\p"
	.string "My client in Lion's Arch is going to be\n"
	.string "very happy.\p"
	.string "This funds the next phase of the... uh,\n"
	.string "'hydro-garden project'.$"

Siltroottown_Indoor_Apothecary_Ali_Text_3:
	.string "Okay, listen closely.\p"
	.string "Go to the house at the very end of the\n"
	.string "mudflat, right next to mine.\p"
	.string "That is where Scott lives.\p"
	.string "He is a bit... weird.\p"
	.string "And he wears these experimental\n"
	.string "goggles all the time.\p"
	.string "Do not ask him about them.\p"
	.string "Just show him the package and tell him\n"
	.string "you need an 'Ice Cold' run.\p"
	.string "Good luck kiddo.$"

Siltroottown_Indoor_Apothecary_Ali_Text_4:
	.string "Oh - one more thing.\p"
	.string "Take this.$"

Siltroottown_Indoor_Apothecary_Ali_Text_5:
	.string "That is my personal Stash Case.\p"
	.string "There is only one like it in the world.\p"
	.string "Scott will recognize it.\p"
	.string "We go way back, him and me.\p"
	.string "Many nights under the stars, that case,\n"
	.string "his goggles, and my telescope.\p"
	.string "Just show it to him and he will know you\n"
	.string "are from me.\p"
	.string "And hey - you can also use it to store\n"
	.string "your grind from a Grinder.\l"
	.string "Bring it back here and my Rolling Table\l"
	.string "guy will roll it into a Joint, Blunt, or\l"
	.string "Bowl for your Pokémon.\p"
	.string "Keeps them sharp. Trust the process.$"

Siltroottown_Indoor_Apothecary_Ali_Text_6:
	.string "So you've met scott?\p"
	.string "He's a little bit of weirdo, I know, but\n"
	.string "he gets the job done.\p"
	.string "Good luck on your trip across the\n"
	.string "ocean, it's gonna be a wild one!\p"
	.string "Let me know when you have delivered the\n"
	.string "stash.\p"
	.string "See you around.$"

SiltrootTown_PriceBoard_Text_0:
	.string "A large screen displays today's\n"
	.string "available strains.\p"
	.string "Silver Haze ............. ¥300\l"
	.string "Northern Lights ...... ¥400\l"
	.string "Lemon Haze .............. ¥600\l"
	.string "OG Kush ................... ¥800\p"
	.string "'From the cosmos to your Pokémon.\l"
	.string "Ali's Apothecary - Grown beyond the\l"
	.string "stars.'$"

SiltrootTown_HerbGuide_Text_0:
	.string "Hey, first time at an Apothecary?\p"
	.string "Want me to explain how the dark web of\n"
	.string "'herbs' works?$"

SiltrootTown_HerbGuide_Text_1:
	.string "No worries. Come find me if you have\n"
	.string "questions.$"

SiltrootTown_HerbGuide_Text_2:
	.string "The Grinder is where it all starts.\p"
	.string "You put a strain - a bud - into the\n"
	.string "Grinder and it spins it down into a\l"
	.string "grind.\p"
	.string "That grind goes into your Stash Case.\p"
	.string "You can carry multiple grinds at once.\p"
	.string "One slot per grind.$"

SiltrootTown_HerbGuide_Text_3:
	.string "Each grind takes on the name of the\n"
	.string "strongest effect in the strain.\p"
	.string "Strains can give 5 different effects.\p"
	.string "Some strains give an energetic effect\n"
	.string "while others boost creativity.\p"
	.string "There are also strains that help you\n"
	.string "Relax or Focus.\p"
	.string "Lastly there are some strains that\n"
	.string "Uplift you when you feel down.\p"
	.string "If the strain is balanced across all\n"
	.string "flavors, the grind and final prep get a\l"
	.string "Premium name.$"

SiltrootTown_HerbGuide_Text_4:
	.string "The Rolling Table in this shop is run by\n"
	.string "Rudo.\p"
	.string "Bring him your grind and he'll roll it\n"
	.string "into something your Pokémon can use.\p"
	.string "You pick which grind from your Stash\n"
	.string "Case, then pick the prep type.\p"
	.string "Feed the result to your Pokémon to\n"
	.string "boost their stats.$"

SiltrootTown_HerbGuide_Text_5:
	.string "Three ways to prep your grind for\n"
	.string "consumption.\p"
	.string "A Joint is smooth and balanced - all\n"
	.string "flavors carry through evenly.\p"
	.string "A Blunt is double-packed - the two\n"
	.string "strongest flavors hit harder than a\l"
	.string "Joint.\p"
	.string "A Bowl is pure top strain - maximum\n"
	.string "effect on one stat, nothing else.\p"
	.string "The 'Feel' number on the item tells you\n"
	.string "how potent it is.\p"
	.string "Higher Feel, stronger effect.$"

SiltrootTown_HerbGuide_Text_6:
	.string "Alright. You know where to find me.$"
