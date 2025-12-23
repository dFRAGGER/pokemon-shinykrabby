SiltrootTown_MapScripts::
	.byte 0


SiltrootTown_Sign_AliApothecary::
# 4 "data/maps/SiltrootTown/scripts.pory"
	lock
# 5 "data/maps/SiltrootTown/scripts.pory"
	msgbox SiltrootTown_Sign_AliApothecary_Text_0
# 6 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 7 "data/maps/SiltrootTown/scripts.pory"
	release
	return


Siltroottown_Youth_Outide_Ali_Shop_1::
# 13 "data/maps/SiltrootTown/scripts.pory"
	lock
# 14 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Youth_Outide_Ali_Shop_1_Text_0, MSGBOX_AUTOCLOSE
# 15 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 16 "data/maps/SiltrootTown/scripts.pory"
	playse SE_PIN
# 17 "data/maps/SiltrootTown/scripts.pory"
	applymovement 14, Siltroottown_Youth_Outide_Ali_Shop_1_Movement_0
# 18 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Youth_Outide_Ali_Shop_1_Text_1
# 19 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 20 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Youth_Outide_Ali_Shop_2::
# 25 "data/maps/SiltrootTown/scripts.pory"
	lock
# 26 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 27 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Youth_Outide_Ali_Shop_2_Text_0
# 28 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 29 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Youth_Outide_Ali_Shop_3::
# 34 "data/maps/SiltrootTown/scripts.pory"
	lock
# 35 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 36 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Youth_Outide_Ali_Shop_3_Text_0
# 37 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 38 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Stoned_Dude_Outside::
# 43 "data/maps/SiltrootTown/scripts.pory"
	lock
# 44 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 45 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Stoned_Dude_Outside_Text_0
# 46 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 47 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Old_Lady::
# 53 "data/maps/SiltrootTown/scripts.pory"
	lock
# 54 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 55 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Old_Lady_Text_0
# 56 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 57 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Fat_Man::
# 62 "data/maps/SiltrootTown/scripts.pory"
	lock
# 63 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 64 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Fat_Man_Text_0
# 65 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 66 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Children_Boy::
# 71 "data/maps/SiltrootTown/scripts.pory"
	lock
# 73 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Children_Boy_Text_0
# 74 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 75 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Children_Girl::
# 80 "data/maps/SiltrootTown/scripts.pory"
	lock
# 81 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Children_Girl_Text_0
# 82 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 83 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Sailor_Biodiversity::
# 88 "data/maps/SiltrootTown/scripts.pory"
	lock
# 89 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 90 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Sailor_Biodiversity_Text_0
# 91 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 92 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Fisher_Sad::
# 97 "data/maps/SiltrootTown/scripts.pory"
	lock
# 98 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 99 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Fisher_Sad_Text_0
# 100 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 101 "data/maps/SiltrootTown/scripts.pory"
	release
	end


Siltroottown_Guard_shed::
# 106 "data/maps/SiltrootTown/scripts.pory"
	lock
# 107 "data/maps/SiltrootTown/scripts.pory"
	faceplayer
# 108 "data/maps/SiltrootTown/scripts.pory"
	goto_if_unset FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1, Siltroottown_Guard_shed_11
Siltroottown_Guard_shed_9:
# 114 "data/maps/SiltrootTown/scripts.pory"
	goto_if_set FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1, Siltroottown_Guard_shed_8
Siltroottown_Guard_shed_6:
# 144 "data/maps/SiltrootTown/scripts.pory"
	goto_if_set FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1, Siltroottown_Guard_shed_5
Siltroottown_Guard_shed_1:
# 150 "data/maps/SiltrootTown/scripts.pory"
	release
	end

Siltroottown_Guard_shed_2:
# 109 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Guard_shed_Text_0, MSGBOX_AUTOCLOSE
# 110 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 111 "data/maps/SiltrootTown/scripts.pory"
	release
	end

Siltroottown_Guard_shed_3:
# 115 "data/maps/SiltrootTown/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 116 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Guard_shed_Text_0, MSGBOX_AUTOCLOSE
# 117 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 118 "data/maps/SiltrootTown/scripts.pory"
	delay 60
# 119 "data/maps/SiltrootTown/scripts.pory"
	playse SE_PIN
# 120 "data/maps/SiltrootTown/scripts.pory"
	applymovement 20, Siltroottown_Guard_shed_Movement_0
# 121 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 122 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Guard_shed_Text_1, MSGBOX_AUTOCLOSE
# 123 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 124 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_0, 52
	goto_if_eq Siltroottown_Guard_shed_20
Siltroottown_Guard_shed_18:
# 130 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_0, 51
	goto_if_eq Siltroottown_Guard_shed_17
Siltroottown_Guard_shed_14:
# 136 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Guard_shed_Text_2, MSGBOX_AUTOCLOSE
# 137 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 138 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Siltroottown_Guard_shed_Movement_5
# 139 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 140 "data/maps/SiltrootTown/scripts.pory"
	setflag FLAG_HIDE_SILTROOTTOWN_SHED_GUARD
# 141 "data/maps/SiltrootTown/scripts.pory"
	release
	end

Siltroottown_Guard_shed_4:
# 145 "data/maps/SiltrootTown/scripts.pory"
	msgbox Siltroottown_Guard_shed_Text_3, MSGBOX_AUTOCLOSE
# 146 "data/maps/SiltrootTown/scripts.pory"
	waitmessage
# 147 "data/maps/SiltrootTown/scripts.pory"
	release
	end

Siltroottown_Guard_shed_5:
# 144 "data/maps/SiltrootTown/scripts.pory"
	goto_if_set FLAG_HIDE_SILTROOTTOWN_SHED_GUARD, Siltroottown_Guard_shed_4
	goto Siltroottown_Guard_shed_1

Siltroottown_Guard_shed_8:
# 114 "data/maps/SiltrootTown/scripts.pory"
	goto_if_unset FLAG_HIDE_SILTROOTTOWN_SHED_GUARD, Siltroottown_Guard_shed_3
	goto Siltroottown_Guard_shed_6

Siltroottown_Guard_shed_11:
# 108 "data/maps/SiltrootTown/scripts.pory"
	goto_if_unset FLAG_HIDE_SILTROOTTOWN_SHED_GUARD, Siltroottown_Guard_shed_2
	goto Siltroottown_Guard_shed_9

Siltroottown_Guard_shed_15:
# 125 "data/maps/SiltrootTown/scripts.pory"
	applymovement 20, Siltroottown_Guard_shed_Movement_1
# 126 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 127 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Siltroottown_Guard_shed_Movement_2
# 128 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
	goto Siltroottown_Guard_shed_14

Siltroottown_Guard_shed_16:
# 131 "data/maps/SiltrootTown/scripts.pory"
	applymovement 20, Siltroottown_Guard_shed_Movement_3
# 132 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
# 133 "data/maps/SiltrootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Siltroottown_Guard_shed_Movement_4
# 134 "data/maps/SiltrootTown/scripts.pory"
	waitmovement
	goto Siltroottown_Guard_shed_14

Siltroottown_Guard_shed_17:
# 130 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_1, 66
	goto_if_eq Siltroottown_Guard_shed_16
	goto Siltroottown_Guard_shed_14

Siltroottown_Guard_shed_20:
# 124 "data/maps/SiltrootTown/scripts.pory"
	compare VAR_TEMP_1, 65
	goto_if_eq Siltroottown_Guard_shed_15
	goto Siltroottown_Guard_shed_18


# 17 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Youth_Outide_Ali_Shop_1_Movement_0:
# 17 "data/maps/SiltrootTown/scripts.pory"
	emote_exclamation_mark
# 17 "data/maps/SiltrootTown/scripts.pory"
	face_player
	step_end

# 120 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_0:
# 120 "data/maps/SiltrootTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 125 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_1:
# 125 "data/maps/SiltrootTown/scripts.pory"
	walk_down
# 125 "data/maps/SiltrootTown/scripts.pory"
	face_up
	step_end

# 127 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_2:
# 127 "data/maps/SiltrootTown/scripts.pory"
	walk_left
# 127 "data/maps/SiltrootTown/scripts.pory"
	face_down
	step_end

# 131 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_3:
# 131 "data/maps/SiltrootTown/scripts.pory"
	walk_right
# 131 "data/maps/SiltrootTown/scripts.pory"
	face_left
	step_end

# 133 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_4:
# 133 "data/maps/SiltrootTown/scripts.pory"
	walk_up
# 133 "data/maps/SiltrootTown/scripts.pory"
	face_right
	step_end

# 138 "data/maps/SiltrootTown/scripts.pory"
Siltroottown_Guard_shed_Movement_5:
# 138 "data/maps/SiltrootTown/scripts.pory"
	face_up
	step_end

SiltrootTown_Sign_AliApothecary_Text_0:
# 5 "data/maps/SiltrootTown/scripts.pory"
	.string "$"

Siltroottown_Youth_Outide_Ali_Shop_1_Text_0:
# 14 "data/maps/SiltrootTown/scripts.pory"
	.string "Yo Charmander, give your tail here, I\n"
	.string "need to light my joint as we...$"

Siltroottown_Youth_Outide_Ali_Shop_1_Text_1:
# 18 "data/maps/SiltrootTown/scripts.pory"
	.string "!!\p"
	.string "...as well as my incense!\p"
	.string "Yes, purely medicinal incense.\p"
	.string "For my... glaucoma.\p"
	.string "Please don't tell Officer Jenny.$"

Siltroottown_Youth_Outide_Ali_Shop_2_Text_0:
# 27 "data/maps/SiltrootTown/scripts.pory"
	.string "Dude, be cool!\p"
	.string "Stop looking at me!\p"
	.string "If you stare, they'll know we aren't\n"
	.string "actually training.\p"
	.string "Just act natural.\p"
	.string "...Is 'acting natural' standing\n"
	.string "perfectly still or waving my arms? I\l"
	.string "forgot.$"

Siltroottown_Youth_Outide_Ali_Shop_3_Text_0:
# 36 "data/maps/SiltrootTown/scripts.pory"
	.string "Ali really knows his botany...\p"
	.string "I feel like a Hoppip floating on a\n"
	.string "breeze.\p"
	.string "Hey, do you have any snacks?\p"
	.string "I would kill for a Lava Cookie right now.$"

Siltroottown_Stoned_Dude_Outside_Text_0:
# 45 "data/maps/SiltrootTown/scripts.pory"
	.string "I came outside for some fresh air, but\n"
	.string "the air feels... really loud right now.\p"
	.string "I think I'm just going to stare at the\n"
	.string "sand for a while.$"

Siltroottown_Old_Lady_Text_0:
# 55 "data/maps/SiltrootTown/scripts.pory"
	.string "All this beautiful nature, and the youth\n"
	.string "only care about those dreadful herbs.\p"
	.string "They should be burying their noses in\n"
	.string "books, not clouds of smoke.$"

Siltroottown_Fat_Man_Text_0:
# 64 "data/maps/SiltrootTown/scripts.pory"
	.string "Everyone claims the hunger comes from\n"
	.string "the special grass, but that is total\l"
	.string "nonsense.\p"
	.string "I am just big-boned and naturally\n"
	.string "require three pizzas every hour to\l"
	.string "survive.$"

Siltroottown_Children_Boy_Text_0:
# 73 "data/maps/SiltrootTown/scripts.pory"
	.string "Hey, cut it out! Janine!\p"
	.string "I am trying to look for a Magikarp down\n"
	.string "here and you are scaring them away!\p"
	.string "Why is your face all red? The water isn't\n"
	.string "even hot!$"

Siltroottown_Children_Girl_Text_0:
# 81 "data/maps/SiltrootTown/scripts.pory"
	.string "Take that! Adrian!\p"
	.string "I bet you can't catch me, even with\n"
	.string "those floaties on!\p"
	.string "...But if you did catch me, I wouldn't be\n"
	.string "mad or anything.$"

Siltroottown_Sailor_Biodiversity_Text_0:
# 90 "data/maps/SiltrootTown/scripts.pory"
	.string "Back in the day, you couldn't cast a line\n"
	.string "into these mangroves without hooking\l"
	.string "something rare.\p"
	.string "Siltroot was legendary, the water was\n"
	.string "practically bubbling with life.\p"
	.string "But for the last twenty years? It has\n"
	.string "been dead silent.\p"
	.string "Now you sit here for hours and catch\n"
	.string "nothing but old boots and seaweed.\p"
	.string "It breaks my heart to see the mudflats\n"
	.string "this empty.$"

Siltroottown_Fisher_Sad_Text_0:
# 99 "data/maps/SiltrootTown/scripts.pory"
	.string "They say the fish are gone because of\n"
	.string "'overfishing,' but that is total rubbish.\p"
	.string "It is the bureaucrats and their endless\n"
	.string "regulations that killed this town!\p"
	.string "That is why I sneak into the protected\n"
	.string "marine reserve to cast my line now.\p"
	.string "You have to break the law just to find a\n"
	.string "decent catch these days!$"

Siltroottown_Guard_shed_Text_0:
# 109 "data/maps/SiltrootTown/scripts.pory"
	.string "Whoa, hold your Ponyta.\p"
	.string "This is a restricted agricultural\n"
	.string "facility.\p"
	.string "Strictly authorized personnel only.$"

Siltroottown_Guard_shed_Text_1:
# 122 "data/maps/SiltrootTown/scripts.pory"
	.string "...\p"
	.string "Oh? Ali sent you?\p"
	.string "For the 'Project Star-Shot' shipment?\p"
	.string "Alright, you're clear.$"

Siltroottown_Guard_shed_Text_2:
# 136 "data/maps/SiltrootTown/scripts.pory"
	.string "But listen carefully.\p"
	.string "The production team is inside right now.\p"
	.string "It's a bunch of Slowbros.\p"
	.string "They are in a deep, meditative trance\n"
	.string "while they work.\p"
	.string "If they see you, it breaks their flow,\n"
	.string "and they will use Confusion to toss you\l"
	.string "right back out the front door.\p"
	.string "The bag is in the back.\p"
	.string "Move like a ghost, kid.$"

Siltroottown_Guard_shed_Text_3:
# 145 "data/maps/SiltrootTown/scripts.pory"
	.string "Remember, don't let the Slowbro's see\n"
	.string "you.\p"
	.string "The bag is in the back.\p"
	.string "Move like a ghost, kid.$"
