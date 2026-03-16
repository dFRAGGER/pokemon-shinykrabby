EastLionMountain_Faculty_Mining_Cave_B1F_MapScripts::
	.byte 0


MiningCaveB1F_Trainer_Faculty_Mary::
# 9 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	trainerbattle_single TRAINER_MARY, MiningCaveB1F_Text_MaryIntro, MiningCaveB1F_Text_MaryDefeated
# 10 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
	end


MiningCaveB1F_Trainer_Faculty_Alexia::
# 27 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, MiningCaveB1F_Text_AlexiaIntro, MiningCaveB1F_Text_AlexiaDefeated
# 28 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
	end


MiningCaveB1F_Barry_Battle::
# 49 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock
# 50 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	faceplayer
# 51 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	playse SE_PIN
# 52 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	applymovement VAR_LAST_TALKED, MiningCaveB1F_Barry_Battle_Movement_0
# 53 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmovement 0
# 54 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	setspeaker MiningCaveB1F_Barry_Battle_Text_0
# 55 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Barry_Battle_Text_1, MSGBOX_AUTOCLOSE
# 56 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmessage
# 57 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Barry_Battle_Text_2
# 58 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmessage
# 59 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	trainerbattle_no_intro TRAINER_BARRY, MiningCaveB1F_Text_BarryDefeated
# 60 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	goto MiningCaveB1F_Barry_PostBattle
	return


MiningCaveB1F_Barry_PostBattle::
# 68 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock
# 69 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	playse SE_M_EARTHQUAKE
# 70 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	delay 60
# 71 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Barry_PostBattle_Text_0, MSGBOX_AUTOCLOSE
# 72 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmessage
# 73 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	delay 30
# 74 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	playse SE_PIN
# 75 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	applymovement VAR_LAST_TALKED, MiningCaveB1F_Barry_Battle_Movement_0
# 76 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmovement 0
# 77 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	setspeaker MiningCaveB1F_Barry_Battle_Text_0
# 78 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Barry_PostBattle_Text_1, MSGBOX_AUTOCLOSE
# 79 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmessage
# 80 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	delay 30
# 81 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Barry_PostBattle_Text_2, MSGBOX_AUTOCLOSE
# 82 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmessage
# 83 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	playse SE_BALL_THROW
# 84 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	delay 30
# 85 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	playse SE_BANG
# 86 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	fadescreen FADE_TO_WHITE
# 87 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	delay 60
# 89 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	setvar VAR_MINING_CAVE_STATE, 1
# 90 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	removeobject 1
# 91 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	removeobject 2
# 92 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	removeobject 3
# 93 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	removeobject 4
# 94 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 95 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	delay 60
# 96 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Barry_PostBattle_Text_3, MSGBOX_AUTOCLOSE
# 97 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	waitmessage
# 98 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	release
	end


MiningCaveB1F_Worker1_Convo::
# 108 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock
# 109 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	faceplayer
# 110 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Worker1_Convo_Text_0, MSGBOX_AUTOCLOSE
# 111 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	release
	end


MiningCaveB1F_Worker2_Convo::
# 116 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock
# 117 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	faceplayer
# 118 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Worker2_Convo_Text_0, MSGBOX_AUTOCLOSE
# 119 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	release
	end


MiningCaveB1F_Worker3_Convo::
# 124 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock
# 125 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	faceplayer
# 126 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Worker3_Convo_Text_0, MSGBOX_AUTOCLOSE
# 127 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	release
	end


MiningCaveB1F_Sign_DeepMine::
# 132 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	lock
# 133 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	msgbox MiningCaveB1F_Sign_DeepMine_Text_0, MSGBOX_AUTOCLOSE
# 134 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	release
	return


# 52 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
MiningCaveB1F_Barry_Battle_Movement_0:
# 52 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	emote_exclamation_mark
	step_end

MiningCaveB1F_Barry_Battle_Text_0:
# 54 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Barry$"

MiningCaveB1F_Barry_Battle_Text_1:
# 55 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "YOU again?!\p"
	.string "I should have known you'd stick your\n"
	.string "nose where it doesn't belong!\p"
	.string "Don't you understand? The Faculty\n"
	.string "stands on the threshold of greatness!\p"
	.string "These mountains... Regigigas chose this\n"
	.string "very spot to create its legendary\l"
	.string "servants!$"

MiningCaveB1F_Barry_Battle_Text_2:
# 57 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Hard rock for Regirock! Eternal ice for\n"
	.string "Regice! Volcanic iron for Registeel!\p"
	.string "All the materials exist here, in perfect\n"
	.string "harmony!\p"
	.string "With our control devices forged from\n"
	.string "these same ores, the Golems will have no\l"
	.string "choice but to obey!\p"
	.string "And there's nothing you can do to stop\n"
	.string "us!$"

MiningCaveB1F_Barry_PostBattle_Text_0:
# 71 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "The cave shakes violently!$"

MiningCaveB1F_Barry_PostBattle_Text_1:
# 78 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Gah! The tremors are getting worse!\p"
	.string "It's as if the mountain itself rejects\n"
	.string "our presence!\p"
	.string "...\p"
	.string "Actually, you know what? It doesn't\n"
	.string "matter!\p"
	.string "We've already gathered enough of\n"
	.string "Regigigas's sacred materials!$"

MiningCaveB1F_Barry_PostBattle_Text_2:
# 81 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "All units, fall back!\p"
	.string "Operation complete! Evacuate to the\n"
	.string "Steel Factory immediately!\p"
	.string "The ore shipments are already en route!\p"
	.string "You haven't won anything, {PLAYER}!\p"
	.string "When our apparatus is complete, the\n"
	.string "Golems will bend to our will!\p"
	.string "Regigigas's creations will serve the\n"
	.string "Faculty!\p"
	.string "MUAHAHAHA!$"

MiningCaveB1F_Barry_PostBattle_Text_3:
# 96 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Barry and the Faculty members have\n"
	.string "fled!\p"
	.string "They mentioned the Steel Factory in\n"
	.string "Lionsarch City...\p"
	.string "You should investigate there next!$"

MiningCaveB1F_Worker1_Convo_Text_0:
# 110 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Our instruments are detecting massive\n"
	.string "energy signatures below!\p"
	.string "The ancient Golem chambers must be\n"
	.string "directly beneath us.\p"
	.string "This is where Regigigas performed its\n"
	.string "greatest work...\p"
	.string "Shaping life from lifeless stone, ice,\n"
	.string "and metal!$"

MiningCaveB1F_Worker2_Convo_Text_0:
# 118 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "The legends say Regigigas crafted the\n"
	.string "Golems in its own image.\p"
	.string "It gathered materials from the\n"
	.string "harshest environments...\p"
	.string "Boulders from the mountain, never-melt\n"
	.string "ice from the frozen peaks, iron from the\l"
	.string "magma below.\p"
	.string "By using these same primordial\n"
	.string "elements, our control devices will\l"
	.string "resonate with the Golems!$"

MiningCaveB1F_Worker3_Convo_Text_0:
# 126 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "The Rector has grand ambitions for the\n"
	.string "Golems.\p"
	.string "Once we control Regigigas's creations,\n"
	.string "the Faculty will be unstoppable!\p"
	.string "Regirock for demolition, Regice for\n"
	.string "climate manipulation, Registeel for\l"
	.string "construction...\p"
	.string "And if we can locate Regigigas itself...\n"
	.string "imagine the possibilities!$"

MiningCaveB1F_Sign_DeepMine_Text_0:
# 133 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "EXTREME DANGER\n"
	.string "Deep Mining Zone\n"
	.string "Seismic Activity Detected\n"
	.string "...The sign looks hastily written.$"

MiningCaveB1F_Text_MaryIntro::
# 14 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "You've descended this far?\p"
	.string "The Administrator won't be pleased\n"
	.string "about this intrusion!$"

MiningCaveB1F_Text_MaryDefeated::
# 18 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "The tremors... they grow stronger the\n"
	.string "deeper we dig...$"

MiningCaveB1F_Text_MaryPostBattle::
# 22 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "Can't you feel it? The mountain\n"
	.string "remembers its creator.\p"
	.string "Regigigas walked these caverns\n"
	.string "millennia ago, shaping its servants.\p"
	.string "Every time we extract more ore, it's as\n"
	.string "if the earth itself protests.\p"
	.string "But the Administrator insists we\n"
	.string "continue... The Rector demands results.$"

MiningCaveB1F_Text_AlexiaIntro::
# 32 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "This is the deepest level of the\n"
	.string "excavation!\p"
	.string "You're not authorized to witness what\n"
	.string "we've discovered!$"

MiningCaveB1F_Text_AlexiaDefeated::
# 36 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "How did you defeat my team so easily?$"

MiningCaveB1F_Text_AlexiaPostBattle::
# 40 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "We've nearly collected enough\n"
	.string "primordial ore for the project.\p"
	.string "The same stone Regigigas used to\n"
	.string "sculpt Regirock...\p"
	.string "The same iron it drew from the magma to\n"
	.string "forge Registeel...\p"
	.string "Once the Steel Factory processes it\n"
	.string "all, our control apparatus will be\l"
	.string "complete!$"

MiningCaveB1F_Text_BarryDefeated::
# 63 "data/maps/EastLionMountain_Faculty_Mining_Cave_B1F/scripts.pory"
	.string "NO! Not again! Why do you always have to\n"
	.string "ruin everything?!$"
