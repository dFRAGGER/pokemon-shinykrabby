SiltrootTown_Indoor_Ali_Apothecary_MapScripts::
# 2 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SiltrootTown_Indoor_Ali_Apothecary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SiltrootTown_Indoor_Ali_Apothecary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	map_script_2 VAR_SILTROOT_TOWN_STATE, 0, SiltrootTown_Indoor_Apothecary_Ali_Giel
	.2byte 0


SiltrootTown_Indoor_Apothecary_Ali_Giel::
# 8 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 9 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setvar VAR_SILTROOT_TOWN_STATE, 1
# 10 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	playse SE_PIN
# 11 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_0
# 12 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 13 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 14 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_1, MSGBOX_AUTOCLOSE
# 15 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 16 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_1
# 17 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 18 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 19 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
# 20 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_3, MSGBOX_AUTOCLOSE
# 21 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 22 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3
# 23 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 24 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_4, MSGBOX_AUTOCLOSE
# 25 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 26 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 27 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 5, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_4
# 28 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 29 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 30 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 31 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_5, MSGBOX_AUTOCLOSE
# 32 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 33 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 34 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_5
# 35 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 5, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6
# 36 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 37 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 38 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 5, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 39 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 40 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 41 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 5, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_7
# 42 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 43 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 44 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
# 45 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_6
# 46 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 47 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3
# 48 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 49 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_7
# 50 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 51 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 52 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_8, MSGBOX_AUTOCLOSE
# 53 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 54 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 55 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	playse SE_POKENAV_CALL
# 56 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 120
# 57 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 58 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_8
# 59 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
# 60 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_9, MSGBOX_AUTOCLOSE
# 61 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 62 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_9
# 63 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3
# 64 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_10
# 65 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 66 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
# 67 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_10, MSGBOX_AUTOCLOSE
# 68 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 69 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_11
# 70 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 71 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setflag FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1
# 72 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	removeobject 1
# 73 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	removeobject 5
# 74 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 75 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 76 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_11, MSGBOX_AUTOCLOSE
# 77 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 78 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 79 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 80 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end


Siltroottown_Indoor_Apothecary_Ali::
# 85 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 86 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	faceplayer
# 87 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 88 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_0, MSGBOX_AUTOCLOSE
# 89 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 90 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end


# 11 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_0:
# 11 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	emote_question_mark
# 11 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_down
	step_end

# 16 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_1:
# 16 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_left
# 16 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_down
	step_end

# 18 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2:
# 18 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_up
	step_end

# 22 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3:
# 22 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_down
	step_end

# 27 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_4:
# 27 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 27 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 27 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 27 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 27 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 27 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_right
# 27 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_right
# 27 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_right
# 27 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_down
# 27 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	emote_question_mark
	step_end

# 34 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_5:
# 34 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_left
	step_end

# 35 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6:
# 35 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
# 35 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_right
	step_end

# 41 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_7:
# 41 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 41 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_left
# 41 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_left
# 41 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_left
# 41 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
# 41 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
# 41 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
# 41 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
# 41 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
	step_end

# 58 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_8:
# 58 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	emote_question_mark
	step_end

# 62 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_9:
# 62 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_down
# 62 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_down
# 62 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_down
# 62 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_right
	step_end

# 64 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_10:
# 64 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_right
# 64 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_left
	step_end

# 69 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_11:
# 69 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_down
	step_end

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0:
# 13 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Ali$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_1:
# 14 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Whoa... enter the event horizon, my\n"
	.string "friend.\p"
	.string "You have pulled into my gravity well.\p"
	.string "You look like you are carrying a lot of\n"
	.string "mass on your shoulders.\p"
	.string "We have the finest herbs here... grown\n"
	.string "with hydroponics that rival NASA specs.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2:
# 19 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Giel$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_3:
# 20 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "cough... COUGH!\p"
	.string "Don't let him start on the space stuff,\n"
	.string "kid.\p"
	.string "He stares at the sky all night.\p"
	.string "It's just lights in the dark, Ali.\p"
	.string "cough...\p"
	.string "Like an Artic Monkey concert but\n"
	.string "further away.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_4:
# 24 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Wait... the vibrations are shifting.\p"
	.string "Daan sent you?\p"
	.string "Whoa. That guy is intense.\p"
	.string "Always shouting about 'Mother Nature'...\p"
	.string "He thinks too small.\p"
	.string "I'm thinking about the bigger picture.\n"
	.string "The cosmos. The singularity.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_5:
# 31 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Slowbro, abort launch.\p"
	.string "Our guest is grounded.\p"
	.string "More for us, right?\p"
	.string "I need the focus anyway.\p"
	.string "My Master's thesis on supermassive\n"
	.string "black holes isn't going to write itself.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_6:
# 45 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Thanks Slowbro. These herbs will do me\n"
	.string "good.\p"
	.string "cough... COUGH!\p"
	.string "So you need a ride to Lion's Arch?\p"
	.string "That frozen wasteland up north?\p"
	.string "Why would anyone want to go there?\p"
	.string "There's no good music scene, just ice\n"
	.string "and corporate shills.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_7:
# 49 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "It is a long trip across the wild ocean.\p"
	.string "You need my neighbor, Scott.\p"
	.string "He... moves inventory for me.\p"
	.string "This business funds my, uh... 'hardware\n"
	.string "acquisitions'.\p"
	.string "Rocket fuel isn't cheap, you know?\p"
	.string "I mean... high-quality fertilizer. Yeah.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_8:
# 52 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
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

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_9:
# 60 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
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

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_10:
# 67 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Oh... if you are ever visit Hezik Town,\n"
	.string "let me know.\p"
	.string "Maybe you can visit one of my history\n"
	.string "lectures, girls love that shit.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_11:
# 76 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "He loves that woman, even if the\n"
	.string "thermodynamics of their relationship\l"
	.string "are unstable.\p"
	.string "Alright, good vibes only.\p"
	.string "Go to the southern mangroves, grab the\n"
	.string "stash, find Scott.\p"
	.string "And watch the sky... big things are\n"
	.string "coming.$"

Siltroottown_Indoor_Apothecary_Ali_Text_0:
# 88 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Follow coastline south, there you'll\n"
	.string "find a passage to a small shed.\p"
	.string "Feel free to take any samples if you'd\n"
	.string "like.\p"
	.string "The herbs are in that shed are some of\n"
	.string "the strongest I got hehe.$"
