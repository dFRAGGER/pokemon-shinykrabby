LionsarchCity_Steel_Factory_2F_MapScripts::
	.byte 0


SteelFactory_2F_Barry::
# 6 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	lock
# 7 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	faceplayer
# 8 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_BARRY_DEFEATED, SteelFactory_2F_Barry_2
# 16 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Barry_Text_0
# 17 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Barry_Intro
# 18 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 19 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker NULL
# 20 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_BARRY, SteelFactory_2F_Barry_BattleIntro, SteelFactory_2F_Barry_BattleDefeat, SteelFactory_2F_Barry_Defeated
	end

SteelFactory_2F_Barry_2:
# 9 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Barry_Text_0
# 10 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Barry_After
# 11 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 12 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker NULL
# 13 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	release
	end


SteelFactory_2F_Barry_Defeated::
# 25 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	lock
# 26 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Barry_Text_0
# 27 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Barry_DefeatedText
# 28 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 29 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 2, SteelFactory_2F_Barry_Defeated_Movement_0
# 30 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmovement
# 31 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Barry_Text_0
# 32 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Barry_StepAside
# 33 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 34 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker NULL
# 35 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setflag FLAG_STEEL_FACTORY_BARRY_DEFEATED
# 36 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	release
	end


SteelFactory_2F_Rector::
# 43 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	lock
# 44 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	faceplayer
# 45 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_RECTOR_DEFEATED, SteelFactory_2F_Rector_2
# 53 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_BARRY_DEFEATED, SteelFactory_2F_Rector_5
# 61 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Text_0
# 62 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_Intro1
# 63 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 64 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Text_0
# 65 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_Intro2
# 66 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 67 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Text_0
# 68 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_Intro3
# 69 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 70 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker NULL
# 71 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_RECTOR, SteelFactory_2F_Rector_BattleIntro, SteelFactory_2F_Rector_BattleDefeat, SteelFactory_2F_Rector_Defeated
	end

SteelFactory_2F_Rector_2:
# 46 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Text_0
# 47 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_After
# 48 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 49 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker NULL
# 50 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	release
	end

SteelFactory_2F_Rector_5:
# 54 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Text_0
# 55 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_BarryNotDefeated
# 56 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 57 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker NULL
# 58 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	release
	end


SteelFactory_2F_Rector_Defeated::
# 78 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	lock
# 79 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Text_0
# 80 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_DefeatedText
# 81 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 82 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	playse SE_DOOR
# 83 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Defeated_Text_0
# 84 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Agent_Alert
# 85 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 86 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Text_0
# 87 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_Evacuation
# 88 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 89 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 90 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	delay 60
# 91 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 92 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Text_0
# 93 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_Monologue
# 94 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 95 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_FREED_POKEMON, SteelFactory_2F_Rector_Defeated_2
# 100 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Text_0
# 101 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_OutroNotFreed
# 102 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
SteelFactory_2F_Rector_Defeated_1:
# 104 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 1, SteelFactory_2F_Rector_Defeated_Movement_0
# 105 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmovement
# 106 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker NULL
# 107 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
# 108 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmoncry
# 109 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_FREED_POKEMON, SteelFactory_2F_Rector_Defeated_6
# 112 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Mew_Quiet
SteelFactory_2F_Rector_Defeated_5:
# 114 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 115 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setflag FLAG_STEEL_FACTORY_RECTOR_DEFEATED
# 116 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setflag FLAG_STEEL_FACTORY_COMPLETE
# 117 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	release
	end

SteelFactory_2F_Rector_Defeated_2:
# 96 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Text_0
# 97 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_OutroFreed
# 98 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
	goto SteelFactory_2F_Rector_Defeated_1

SteelFactory_2F_Rector_Defeated_6:
# 110 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Mew_Warm
	goto SteelFactory_2F_Rector_Defeated_5


# 29 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_Barry_Defeated_Movement_0:
# 29 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_right
# 29 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_right
	step_end

# 104 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_Rector_Defeated_Movement_0:
# 104 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_left
# 104 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_left
# 104 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 104 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 104 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
	step_end

SteelFactory_2F_Barry_Text_0:
# 9 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Barry$"

SteelFactory_2F_Rector_Text_0:
# 46 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Director Harkon$"

SteelFactory_2F_Rector_Defeated_Text_0:
# 83 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Faculty Agent$"

SteelFactory_2F_Barry_Intro::
# 123 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "You made it this far.\p"
	.string "Impressive. The Director chose well\l"
	.string "when he took me on.\p"
	.string "But this is where your run ends.\p"
	.string "I've trained every day for this moment.\l"
	.string "I'm not going to waste it.$"

SteelFactory_2F_Barry_BattleIntro::
# 127 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "You've made it to the Director's floor.\p"
	.string "That ends here!$"

SteelFactory_2F_Barry_BattleDefeat::
# 131 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "I... I don't understand.\p"
	.string "I've trained every day for this.$"

SteelFactory_2F_Barry_DefeatedText::
# 135 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "I was supposed to be the wall between\l"
	.string "you and the Director.\p"
	.string "I failed.$"

SteelFactory_2F_Barry_StepAside::
# 139 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "...Go. He's waiting.\p"
	.string "But whatever you think you're stopping\l"
	.string "here - the Faculty's reach goes further\l"
	.string "than this building.\p"
	.string "Far further.$"

SteelFactory_2F_Barry_After::
# 143 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "The Director is behind that door.\p"
	.string "He's not going to run.\l"
	.string "He never does.$"

SteelFactory_2F_Rector_BarryNotDefeated::
# 147 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "You haven't even gotten past Barry.\p"
	.string "Don't waste my time.$"

SteelFactory_2F_Rector_After::
# 151 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "The Faculty endures.\p"
	.string "This was one facility.\p"
	.string "There are others.$"

SteelFactory_2F_Rector_Intro1::
# 155 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "So you're the one.\p"
	.string "I've had reports of an outsider\l"
	.string "disrupting my facility all morning.\p"
	.string "Tell me - do you even understand\l"
	.string "what we are building here?$"

SteelFactory_2F_Rector_Intro2::
# 159 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Regigigas didn't create the golems\l"
	.string "out of kindness.\p"
	.string "It created ORDER.\p"
	.string "Stone for strength.\l"
	.string "Iron for structure.\l"
	.string "Ice for stillness.\p"
	.string "The Teressa region has forgotten\l"
	.string "that lesson.\p"
	.string "We are here to remind it.$"

SteelFactory_2F_Rector_Intro3::
# 163 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "You want to fight me?\p"
	.string "Then fight.\p"
	.string "But you cannot defeat an idea.$"

SteelFactory_2F_Rector_BattleIntro::
# 167 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Come then. Show me what passes for\l"
	.string "strength in this chaotic region.$"

SteelFactory_2F_Rector_BattleDefeat::
# 171 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "...$"

SteelFactory_2F_Rector_DefeatedText::
# 175 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Impressive.\p"
	.string "Truly.$"

SteelFactory_2F_Agent_Alert::
# 179 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Director! The extraction team is\l"
	.string "ready.\p"
	.string "We need to move - NOW.$"

SteelFactory_2F_Rector_Evacuation::
# 183 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Yes.\p"
	.string "Load everything.\p"
	.string "Leave nothing for them to study.$"

SteelFactory_2F_Rector_Monologue::
# 187 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "You won a battle, child.\p"
	.string "The Faculty has already won\l"
	.string "the campaign.\p"
	.string "The Regi-Metal is gone.\l"
	.string "Every last gram.\p"
	.string "You'll understand the scale of what\l"
	.string "you've failed to stop... eventually.$"

SteelFactory_2F_Rector_OutroFreed::
# 191 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "...I see you opened the containment\l"
	.string "bays.\p"
	.string "Sentimental.\p"
	.string "Enjoy your small mercy.$"

SteelFactory_2F_Rector_OutroNotFreed::
# 195 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "The Pokemon below are yours now,\l"
	.string "I suppose.\p"
	.string "Congratulations on your rescue\l"
	.string "operation.\p"
	.string "Or lack thereof.$"

SteelFactory_2F_Mew_Warm::
# 199 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "The cry is warm.\p"
	.string "Something remembers what you did here.$"

SteelFactory_2F_Mew_Quiet::
# 203 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "The cry is quiet.\p"
	.string "Somewhere, something is still watching.$"
