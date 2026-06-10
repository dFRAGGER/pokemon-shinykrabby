LionsarchCity_Steel_Factory_2F_MapScripts::
	.byte 0


SteelFactory_2F_Scientist_Battle1::
# 6 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_2F_SCIENTIST_1, SteelFactory_2F_Scientist1_Intro, SteelFactory_2F_Scientist1_Defeat
# 7 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Scientist1_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_2F_Grunt_Battle::
# 12 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_2F_GRUNT, SteelFactory_2F_Grunt_Intro, SteelFactory_2F_Grunt_Defeat
# 13 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Grunt_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_2F_Scientist_Battle2::
# 18 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_2F_SCIENTIST_2, SteelFactory_2F_Scientist2_Intro, SteelFactory_2F_Scientist2_Defeat
# 19 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Scientist2_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_2F_Scientist_Lore1::
# 62 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	lockall
# 63 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	faceplayer
# 64 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Scientist_Lore1_Text
# 65 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	releaseall
	return


SteelFactory_2F_Grunt_Lore1::
# 69 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	lockall
# 70 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	faceplayer
# 71 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Grunt_Lore1_Text
# 72 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	releaseall
	return


SteelFactory_2F_Barry::
# 86 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	lock
# 87 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	faceplayer
# 88 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_BARRY_DEFEATED, SteelFactory_2F_Barry_2
# 96 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Barry_Text_0
# 97 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Barry_Intro
# 98 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 99 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker NULL
# 100 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_BARRY, SteelFactory_2F_Barry_BattleIntro, SteelFactory_2F_Barry_BattleDefeat, SteelFactory_2F_Barry_Defeated
	end

SteelFactory_2F_Barry_2:
# 89 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Barry_Text_0
# 90 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Barry_After
# 91 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 92 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker NULL
# 93 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	release
	end


SteelFactory_2F_Barry_Defeated::
# 105 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	lock
# 106 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Barry_Text_0
# 107 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Barry_DefeatedText
# 108 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 109 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 2, SteelFactory_2F_Barry_Defeated_Movement_0
# 110 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmovement
# 111 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Barry_Text_0
# 112 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Barry_StepAside
# 113 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 114 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker NULL
# 115 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setflag FLAG_STEEL_FACTORY_BARRY_DEFEATED
# 116 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	release
	end


SteelFactory_2F_Rector::
# 123 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	lock
# 124 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	faceplayer
# 125 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_RECTOR_DEFEATED, SteelFactory_2F_Rector_2
# 133 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	goto_if_unset FLAG_STEEL_FACTORY_BARRY_DEFEATED, SteelFactory_2F_Rector_5
# 141 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Text_0
# 142 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_Intro1
# 143 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 144 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Text_0
# 145 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_Intro2
# 146 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 147 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Text_0
# 148 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_Intro3
# 149 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 150 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker NULL
# 151 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_RECTOR, SteelFactory_2F_Rector_BattleIntro, SteelFactory_2F_Rector_BattleDefeat, SteelFactory_2F_Rector_Defeated
	end

SteelFactory_2F_Rector_2:
# 126 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Text_0
# 127 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_After
# 128 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 129 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker NULL
# 130 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	release
	end

SteelFactory_2F_Rector_5:
# 134 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Text_0
# 135 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_BarryNotDefeated
# 136 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 137 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker NULL
# 138 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	release
	end


SteelFactory_2F_Rector_Defeated::
# 158 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	lock
# 159 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Text_0
# 160 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_DefeatedText
# 161 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 162 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	playse SE_DOOR
# 163 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Defeated_Text_0
# 164 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Agent_Alert
# 165 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 166 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Text_0
# 167 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_Evacuation
# 168 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 169 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 170 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	delay 60
# 171 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 172 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Text_0
# 173 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_Monologue
# 174 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 175 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_FREED_POKEMON, SteelFactory_2F_Rector_Defeated_2
# 180 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Text_0
# 181 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_OutroNotFreed
# 182 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
SteelFactory_2F_Rector_Defeated_1:
# 184 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 1, SteelFactory_2F_Rector_Defeated_Movement_0
# 185 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmovement
# 186 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker NULL
# 187 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
# 188 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmoncry
# 189 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_FREED_POKEMON, SteelFactory_2F_Rector_Defeated_6
# 192 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Mew_Quiet
SteelFactory_2F_Rector_Defeated_5:
# 194 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 195 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setflag FLAG_STEEL_FACTORY_RECTOR_DEFEATED
# 196 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setflag FLAG_STEEL_FACTORY_COMPLETE
# 197 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	release
	end

SteelFactory_2F_Rector_Defeated_2:
# 176 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Text_0
# 177 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_OutroFreed
# 178 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
	goto SteelFactory_2F_Rector_Defeated_1

SteelFactory_2F_Rector_Defeated_6:
# 190 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Mew_Warm
	goto SteelFactory_2F_Rector_Defeated_5


# 109 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_Barry_Defeated_Movement_0:
# 109 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_right
# 109 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_right
	step_end

# 184 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_Rector_Defeated_Movement_0:
# 184 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_left
# 184 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_left
# 184 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 184 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 184 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
	step_end

SteelFactory_2F_Barry_Text_0:
# 89 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Barry$"

SteelFactory_2F_Rector_Text_0:
# 126 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "The Rector$"

SteelFactory_2F_Rector_Defeated_Text_0:
# 163 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Faculty Agent$"

SteelFactory_2F_Scientist1_Intro::
# 23 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "You've made it this far?\p"
	.string "The Director will hear about this\n"
	.string "intrusion.$"

SteelFactory_2F_Scientist1_Defeat::
# 27 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Impossible.\p"
	.string "My calculations were... flawless.$"

SteelFactory_2F_Scientist1_PostBattle::
# 31 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Keep moving.\p"
	.string "You've already disrupted weeks of\n"
	.string "research.$"

SteelFactory_2F_Grunt_Intro::
# 35 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Nobody gets past this floor without\n"
	.string "Faculty clearance.\p"
	.string "That means you.$"

SteelFactory_2F_Grunt_Defeat::
# 39 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "How...?\p"
	.string "You're just a kid!$"

SteelFactory_2F_Grunt_PostBattle::
# 43 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "The Rector's going to hear about every\n"
	.string "single one of you.$"

SteelFactory_2F_Scientist2_Intro::
# 47 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Turn around.\p"
	.string "This floor is restricted.\p"
	.string "I won't ask twice.$"

SteelFactory_2F_Scientist2_Defeat::
# 51 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "My containment protocol...\p"
	.string "It failed.$"

SteelFactory_2F_Scientist2_PostBattle::
# 55 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "You'll regret reaching that door.$"

SteelFactory_2F_Scientist_Lore1_Text::
# 75 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "This floor handles Faculty\n"
	.string "coordination.\p"
	.string "The Rector reviews all field reports\n"
	.string "personally.\p"
	.string "We don't get many... visitors.$"

SteelFactory_2F_Grunt_Lore1_Text::
# 79 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "I just make sure the floor stays clear.\p"
	.string "The researchers up here don't like\n"
	.string "being disturbed.\p"
	.string "Neither does the Director.$"

SteelFactory_2F_Barry_Intro::
# 203 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "You made it this far.\p"
	.string "Impressive. The Director chose well\n"
	.string "when he took me on.\p"
	.string "But this is where your run ends.\p"
	.string "That stupid fish finally became\n"
	.string "something usefull. You'll be surprised.$"

SteelFactory_2F_Barry_BattleIntro::
# 207 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "You've made it to The Rector's floor.\p"
	.string "That ends here!$"

SteelFactory_2F_Barry_BattleDefeat::
# 211 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "I... I don't understand.\p"
	.string "Even that stupid fish.. did not work?$"

SteelFactory_2F_Barry_DefeatedText::
# 215 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "I was supposed to be the wall between\n"
	.string "you and The Rector.\p"
	.string "I failed.$"

SteelFactory_2F_Barry_StepAside::
# 219 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "...Go. He's waiting.\p"
	.string "But whatever you think you're stopping\n"
	.string "here, the Faculty's reach goes further\l"
	.string "than this building.\p"
	.string "Far further.$"

SteelFactory_2F_Barry_After::
# 223 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "The Rector is behind that door.\p"
	.string "He's not going to run.\l"
	.string "He never does.$"

SteelFactory_2F_Rector_BarryNotDefeated::
# 227 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "You haven't even gotten past Barry.\p"
	.string "Don't waste my time.$"

SteelFactory_2F_Rector_After::
# 231 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "The Faculty endures.\p"
	.string "This was one facility.\p"
	.string "There are others.$"

SteelFactory_2F_Rector_Intro1::
# 235 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "So you're the one.\p"
	.string "I've had reports of an outsider\n"
	.string "disrupting my facility all morning.\p"
	.string "Tell me, do you even understand what we\n"
	.string "are building here?$"

SteelFactory_2F_Rector_Intro2::
# 239 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Regigigas didn't create the golems out\n"
	.string "of kindness.\p"
	.string "It created ORDER.\p"
	.string "Stone for strength.\p"
	.string "Iron for structure.\p"
	.string "Ice for stillness.\p"
	.string "The Teressa region has forgotten that\n"
	.string "lesson.\p"
	.string "We are here to remind it.$"

SteelFactory_2F_Rector_Intro3::
# 243 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "You want to fight me?\p"
	.string "Then fight.\p"
	.string "But you cannot defeat an idea.$"

SteelFactory_2F_Rector_BattleIntro::
# 247 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Come then. Show me what passes for\n"
	.string "strength in this chaotic region.$"

SteelFactory_2F_Rector_BattleDefeat::
# 251 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "...$"

SteelFactory_2F_Rector_DefeatedText::
# 255 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Impressive.\p"
	.string "Truly.$"

SteelFactory_2F_Agent_Alert::
# 259 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Rector! The extraction team is ready.\p"
	.string "We need to move - NOW.$"

SteelFactory_2F_Rector_Evacuation::
# 263 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Yes.\p"
	.string "Load everything.\p"
	.string "Leave nothing for them to study.$"

SteelFactory_2F_Rector_Monologue::
# 267 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "You won a battle, child.\p"
	.string "The Faculty has already won the\n"
	.string "campaign.\p"
	.string "The Regi-Metal is gone. Every last gram.\p"
	.string "You'll understand the scale of what\n"
	.string "you've failed to stop... eventually.$"

SteelFactory_2F_Rector_OutroFreed::
# 271 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "...I see you opened the containment\n"
	.string "bays.\p"
	.string "Sentimental.\p"
	.string "Enjoy your small mercy.$"

SteelFactory_2F_Rector_OutroNotFreed::
# 275 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "The Pokemon below are yours now, I\n"
	.string "suppose.\p"
	.string "Congratulations on your rescue\n"
	.string "operation.\p"
	.string "Or lack thereof.$"

SteelFactory_2F_Mew_Warm::
# 279 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "The cry is warm.\p"
	.string "Something remembers what you did here.$"

SteelFactory_2F_Mew_Quiet::
# 283 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "The cry is quiet.\p"
	.string "Somewhere, something is still watching.$"
