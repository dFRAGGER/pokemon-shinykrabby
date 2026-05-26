LionsarchCity_Steel_Factory_MapScripts::
	.byte 0


SteelFactory_1F_Scientist_Lore1::
# 6 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 7 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 8 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist_Lore1_Text
# 9 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Scientist_Lore2::
# 13 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 14 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 15 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist_Lore2_Text
# 16 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Scientist_Lore3::
# 20 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 21 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 22 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist_Lore3_Text
# 23 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Scientist_Lore4::
# 27 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 28 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 29 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist_Lore4_Text
# 30 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Scientist_Lore5::
# 34 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 35 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 36 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist_Lore5_Text
# 37 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Official_Lore1::
# 43 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 44 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 45 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Official_Lore1_Text
# 46 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Official_Lore2::
# 50 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 51 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 52 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Official_Lore2_Text
# 53 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Official_Lore3::
# 57 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 58 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 59 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Official_Lore3_Text
# 60 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return


SteelFactory_1F_Scientist_Battle1::
# 66 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_SCIENTIST_1, SteelFactory_1F_Scientist1_Intro, SteelFactory_1F_Scientist1_Defeat
# 67 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist1_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_1F_Scientist_Battle2::
# 72 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_SCIENTIST_2, SteelFactory_1F_Scientist2_Intro, SteelFactory_1F_Scientist2_Defeat
# 73 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Scientist2_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_1F_Official_Battle1::
# 80 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_OFFICIAL_1, SteelFactory_1F_Official1_Intro, SteelFactory_1F_Official1_Defeat
# 81 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Official1_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_1F_Official_Battle2::
# 86 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_OFFICIAL_2, SteelFactory_1F_Official2_Intro, SteelFactory_1F_Official2_Defeat
# 87 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Official2_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_1F_Official_Battle3::
# 93 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lock
# 94 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	faceplayer
# 95 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_OFFICIAL_3, SteelFactory_1F_Official_Battle3_2
# 103 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_OFFICIAL_3, SteelFactory_1F_Official3_Intro, SteelFactory_1F_Official3_Defeat, SteelFactory_1F_Official3_Defeated
	end

SteelFactory_1F_Official_Battle3_2:
# 96 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setspeaker SteelFactory_1F_Official_Battle3_Text_0
# 97 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Official3_After
# 98 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmessage
# 99 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setspeaker NULL
# 100 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end


SteelFactory_1F_Official3_Defeated::
# 108 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lock
# 109 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setspeaker SteelFactory_1F_Official_Battle3_Text_0
# 110 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Official3_PostBattle
# 111 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmessage
# 112 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setspeaker NULL
# 113 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_OFFICIAL_3
# 114 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	release
	end


SteelFactory_1F_ControlPanel::
# 121 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	lockall
# 122 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_CHOICE_MADE, SteelFactory_1F_ControlPanel_2
# 131 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Panel_Prompt, MSGBOX_YESNO
# 132 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SteelFactory_1F_ControlPanel_5
SteelFactory_1F_ControlPanel_4:
# 143 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SteelFactory_1F_ControlPanel_12
SteelFactory_1F_ControlPanel_11:
# 152 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_CHOICE_MADE
# 153 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	return

SteelFactory_1F_ControlPanel_2:
# 123 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_FREED_POKEMON, SteelFactory_1F_ControlPanel_8
# 126 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Panel_AlreadyLeft
SteelFactory_1F_ControlPanel_7:
# 128 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	releaseall
	end

SteelFactory_1F_ControlPanel_5:
# 133 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playse SE_SUCCESS
# 134 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Panel_FreeSequence
# 135 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmessage
# 136 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_STEEL_FACTORY_FREED_POKEMON
# 137 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_MEW_SAW_FACTORY_FREED
# 138 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
# 139 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmoncry
# 140 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Panel_MewFree
# 141 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmessage
	goto SteelFactory_1F_ControlPanel_4

SteelFactory_1F_ControlPanel_8:
# 124 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Panel_AlreadyFreed
	goto SteelFactory_1F_ControlPanel_7

SteelFactory_1F_ControlPanel_12:
# 144 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Panel_Left
# 145 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmessage
# 146 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	setflag FLAG_MEW_SAW_FACTORY_NOT_FREED
# 147 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
# 148 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmoncry
# 149 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	msgbox SteelFactory_1F_Panel_MewLeft
# 150 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	waitmessage
	goto SteelFactory_1F_ControlPanel_11


SteelFactory_1F_Official_Battle3_Text_0:
# 96 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Faculty Official$"

SteelFactory_1F_Scientist_Lore1_Text::
# 158 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Regi-Metal alloy is our greatest\n"
	.string "achievement.\p"
	.string "By replicating the elemental forging\n"
	.string "process Regigigas used in Lions\l"
	.string "Mountains, we create a material that\l"
	.string "channels legendary energy.\p"
	.string "The Faculty will bring true order to\n"
	.string "Teressa. Diversity has had its chance.\l"
	.string "Now it is structure's turn.$"

SteelFactory_1F_Scientist_Lore2_Text::
# 162 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "This is a restricted area!\p"
	.string "Leave immediately or I'm calling\n"
	.string "security!$"

SteelFactory_1F_Scientist_Lore3_Text::
# 166 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The ore from Lions Mountains is unlike\n"
	.string "anything we've catalogued.\p"
	.string "Dense with ancient energy.\p"
	.string "The Pokemon here can sense it - it\n"
	.string "makes them... compliant.\p"
	.string "That's what The Rector calls it.\n"
	.string "Compliant.$"

SteelFactory_1F_Scientist_Lore4_Text::
# 170 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Registeel is now the linchpin of the\n"
	.string "whole operation.\p"
	.string "Without it, the entire synthesis breaks\n"
	.string "down.\p"
	.string "The Rector found a way to incentivize\n"
	.string "it.\p"
	.string "I try not to think about the details.$"

SteelFactory_1F_Scientist_Lore5_Text::
# 174 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The electro-magnetic resonance from\n"
	.string "the Magnemite cluster amplifies the\l"
	.string "metal's conductivity tenfold.\p"
	.string "Add Registeel to the equation and we're\n"
	.string "making something the Regis would\l"
	.string "recognize as their own.$"

SteelFactory_1F_Official_Lore1_Text::
# 178 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Teressa is a beautiful region.\p"
	.string "But it's wasted on chaos.\p"
	.string "Dozens of mutations, dozens of types,\n"
	.string "no cohesion, no direction.\p"
	.string "We are going to change that.\p"
	.string "One processed metric ton at a time.$"

SteelFactory_1F_Official_Lore2_Text::
# 182 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Faculty destroying diversity?\p"
	.string "We organize it.\p"
	.string "Everything in its right place.\p"
	.string "Everyone with a clear role.\p"
	.string "Is that really so terrible?$"

SteelFactory_1F_Official_Lore3_Text::
# 186 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Pokemon working here are fed,\n"
	.string "sheltered, and given purpose.\p"
	.string "That's more than most wild Pokemon get.\p"
	.string "It's not cruelty. It's efficiency.\p"
	.string "At least... that's what we tell\n"
	.string "ourselves.$"

SteelFactory_1F_Scientist1_Intro::
# 190 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "A trespasser?!\p"
	.string "I'll neutralize you with cold, hard\n"
	.string "science!$"

SteelFactory_1F_Scientist1_Defeat::
# 194 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Unacceptable.\p"
	.string "My data... completely disrupted...$"

SteelFactory_1F_Scientist1_PostBattle::
# 198 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "How can something that disorganized\n"
	.string "defeat me?!$"

SteelFactory_1F_Scientist2_Intro::
# 202 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Security breach detected!\p"
	.string "Initiating containment protocol!\p"
	.string "Which is to say - I will fight you!$"

SteelFactory_1F_Scientist2_Defeat::
# 206 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "My containment protocol... failed.\p"
	.string "This is extremely irregular.$"

SteelFactory_1F_Scientist2_PostBattle::
# 210 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Rector is going to hear about this\n"
	.string "data anomaly.$"

SteelFactory_1F_Official1_Intro::
# 214 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Nobody disrupts Faculty operations and\n"
	.string "walks away, intruder.\p"
	.string "Order will be maintained!\p"
	.string "Starting with you!$"

SteelFactory_1F_Official1_Defeat::
# 218 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Extraordinary.\p"
	.string "You've upended three months of\n"
	.string "production schedules.$"

SteelFactory_1F_Official1_PostBattle::
# 222 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "...\p"
	.string "You'll want to turn around before you\n"
	.string "reach the upper floors.$"

SteelFactory_1F_Official2_Intro::
# 226 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "I don't know who let you in, but your\n"
	.string "little tour ends here.\p"
	.string "The Faculty's order demands it!$"

SteelFactory_1F_Official2_Defeat::
# 230 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Chaos wins the battle.\p"
	.string "But it always loses the war.$"

SteelFactory_1F_Official2_PostBattle::
# 234 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Don't say I didn't warn you.$"

SteelFactory_1F_Official3_Intro::
# 238 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Nobody reaches The Rector's floor\n"
	.string "without going through me.\p"
	.string "The Faculty's order demands it.\p"
	.string "And I am very orderly.$"

SteelFactory_1F_Official3_Defeat::
# 242 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "Impossible.\p"
	.string "You... you're chaos incarnate.$"

SteelFactory_1F_Official3_PostBattle::
# 246 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The Rector is on the second floor. Face\n"
	.string "him, if you dare.$"

SteelFactory_1F_Official3_After::
# 250 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "...The Rector is upstairs.\p"
	.string "Just go.$"

SteelFactory_1F_Panel_Prompt::
# 254 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "POKEMON CONTAINMENT OVERRIDE -\n"
	.string "EMERGENCY RELEASE -\p"
	.string "Decades of Pokemon are held in these\n"
	.string "bays, forced to power the facility.\l"
	.string "Machop, Aron, Magnemite... and something\l"
	.string "much larger.\p"
	.string "Do you release them?$"

SteelFactory_1F_Panel_FreeSequence::
# 258 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "You engage the override.\p"
	.string "A deep rumble moves through the floor.\p"
	.string "The bay doors grind open.\p"
	.string "One by one, the Pokemon stir -\n"
	.string "confused, then alert.\p"
	.string "They look at you.\p"
	.string "Then they scatter into the vents and\n"
	.string "corridors, gone in seconds.\p"
	.string "The machines fall silent.$"

SteelFactory_1F_Panel_MewFree::
# 262 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "A soft cry echoes from somewhere deep\n"
	.string "in the factory walls.\p"
	.string "You sense something watching.\p"
	.string "Something that has been watching for a\n"
	.string "very long time.$"

SteelFactory_1F_Panel_Left::
# 266 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "You step back from the panel.\p"
	.string "The machines keep running.\p"
	.string "The Pokemon keep working.$"

SteelFactory_1F_Panel_MewLeft::
# 270 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "A faint cry carries through the steel\n"
	.string "walls.\p"
	.string "You almost missed it.$"

SteelFactory_1F_Panel_AlreadyFreed::
# 274 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The containment bays are open.\p"
	.string "The Pokemon are free.$"

SteelFactory_1F_Panel_AlreadyLeft::
# 278 "data/maps/LionsarchCity_Steel_Factory/scripts.pory"
	.string "The panel flickers.\p"
	.string "The Pokemon continue their labor.$"
