Route06_UpanaCave_MainRoom_MapScripts::
	.byte 0


UpanaCavesystem_Trainer_Charlie::
# 4 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	trainerbattle_double TRAINER_CHARLIE, UpanaCavesystem_Text_CharlieIntro, UpanaCavesystem_Text_CharlieDefeated, UpanaCavesystem_Text_CharlieNotEnoughMons
# 5 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	msgbox UpanaCavesystem_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCavesystem_Trainer_Bowen::
# 26 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	trainerbattle_single TRAINER_HIKER_BOWEN, UpanaCavesystem_Text_BowenIntro, UpanaCavesystem_Text_BowenDefeated
# 27 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	msgbox UpanaCavesystem_Text_BowenPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCavesystem_Trainer_Jasper::
# 44 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_JASPER, UpanaCavesystem_Text_JasperIntro, UpanaCavesystem_Text_JasperDefeated
# 45 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	msgbox UpanaCavesystem_Text_JasperPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCavesystem_Trainer_Quinn::
# 62 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	trainerbattle_single TRAINER_LASS_QUINN, UpanaCavesystem_Text_QuinnIntro, UpanaCavesystem_Text_QuinnDefeated
# 63 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	msgbox UpanaCavesystem_Text_QuinnPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCavesystem_Trainer_Dane::
# 80 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	trainerbattle_single TRAINER_HIKER_DANE, UpanaCavesystem_Text_DaneIntro, UpanaCavesystem_Text_DaneDefeated
# 81 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	msgbox UpanaCavesystem_Text_DanePostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCavesystem_Trainer_Kenzo::
# 98 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_KENZO, UpanaCavesystem_Text_KenzoIntro, UpanaCavesystem_Text_KenzoDefeated
# 99 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	msgbox UpanaCavesystem_Text_KenzoPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCavesystem_Trainer_Edgar::
# 116 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_EDGAR, UpanaCavesystem_Text_EdgarIntro, UpanaCavesystem_Text_EdgarDefeated
# 117 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	msgbox UpanaCavesystem_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCavesystem_Trainer_Aldric::
# 134 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	trainerbattle_single TRAINER_HIKER_ALDRIC, UpanaCavesystem_Text_AldricIntro, UpanaCavesystem_Text_AldricDefeated
# 135 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	msgbox UpanaCavesystem_Text_AldricPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCavesystem_Trainer_Sera::
# 152 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	trainerbattle_single TRAINER_BATTLE_GIRL_SERA, UpanaCavesystem_Text_SeraIntro, UpanaCavesystem_Text_SeraDefeated
# 153 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	msgbox UpanaCavesystem_Text_SeraPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCavesystem_Trainer_Opal::
# 170 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	trainerbattle_single TRAINER_KINDLER_OPAL, UpanaCavesystem_Text_OpalIntro, UpanaCavesystem_Text_OpalDefeated
# 171 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	msgbox UpanaCavesystem_Text_OpalPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCaveMainRoom_Npc_Researcher::
# 188 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	lock
# 189 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	faceplayer
# 190 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	setspeaker UpanaCaveMainRoom_Npc_Researcher_Text_0
# 191 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	msgbox UpanaCaveMainRoom_Npc_Researcher_Text_1, MSGBOX_AUTOCLOSE
# 192 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	waitmessage
# 193 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	release
	end


UpanaCaveMainRoom_Npc_Hiker::
# 198 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	lock
# 199 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	faceplayer
# 200 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	setspeaker UpanaCaveMainRoom_Npc_Hiker_Text_0
# 201 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	msgbox UpanaCaveMainRoom_Npc_Hiker_Text_1, MSGBOX_AUTOCLOSE
# 202 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	waitmessage
# 203 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	release
	end


UpanaCaveMainRoom_Inscription_1::
# 208 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	lock
# 209 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	msgbox UpanaCaveMainRoom_Inscription_1_Text_0
# 210 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	waitmessage
# 211 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	release
	return


UpanaCaveMainRoom_Inscription_2::
# 215 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	lock
# 216 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	msgbox UpanaCaveMainRoom_Inscription_2_Text_0
# 217 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	waitmessage
# 218 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	release
	return


UpanaCaveMainRoom_Inscription_3::
# 222 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	lock
# 223 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	msgbox UpanaCaveMainRoom_Inscription_3_Text_0
# 224 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	waitmessage
# 225 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	release
	return


UpanaCaveMainRoom_Inscription_4::
# 229 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	lock
# 230 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	msgbox UpanaCaveMainRoom_Inscription_4_Text_0
# 231 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	waitmessage
# 232 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	release
	return


UpanaCaveMainRoom_Inscription_Large::
# 236 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	lock
# 237 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	msgbox UpanaCaveMainRoom_Inscription_Large_Text_0
# 238 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	waitmessage
# 239 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	msgbox UpanaCaveMainRoom_Inscription_Large_Text_1
# 240 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	waitmessage
# 241 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	msgbox UpanaCaveMainRoom_Inscription_Large_Text_2
# 242 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	waitmessage
# 243 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	release
	return


UpanaCavesystem_Trainer_Rex::
# 247 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	trainerbattle_single TRAINER_BIKER_REX, UpanaCavesystem_Text_RexIntro, UpanaCavesystem_Text_RexDefeated
# 248 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	msgbox UpanaCavesystem_Text_RexPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCaveMainRoom_Npc_Researcher_Text_0:
# 190 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "Dr. Virel$"

UpanaCaveMainRoom_Npc_Researcher_Text_1:
# 191 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "These carvings are extraordinary.\p"
	.string "The technique, the depth of the cuts,\n"
	.string "this predates anything we have\l"
	.string "documented in the region.\p"
	.string "Whoever made them spent a long time\n"
	.string "down here.\p"
	.string "The creatures depicted... I can't place\n"
	.string "them.\p"
	.string "They don't match anything in modern\n"
	.string "records.\p"
	.string "But the people who carved them clearly\n"
	.string "knew them very well.\p"
	.string "Perhaps too well.$"

UpanaCaveMainRoom_Npc_Hiker_Text_0:
# 200 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "Hiker Bram$"

UpanaCaveMainRoom_Npc_Hiker_Text_1:
# 201 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "You know what I love about this cave?\p"
	.string "The formations.\p"
	.string "Look at those stalactites they have\n"
	.string "been growing for thousands of years.\p"
	.string "Just one drip at a time.\p"
	.string "Stalactites hang down from the ceiling.\n"
	.string "Stalagmites push up from the floor.\p"
	.string "Easy way to remember: stalacTITES hold\n"
	.string "TIGHT to the ceiling.\p"
	.string "I came up with that myself.$"

UpanaCaveMainRoom_Inscription_1_Text_0:
# 209 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "A small carving, easy to miss.\p"
	.string "A circle of hunched figures around a\n"
	.string "dark pool.\p"
	.string "Something is submerged in the water at\n"
	.string "the center.\p"
	.string "All the figures face inward.\p"
	.string "None of them appear to be looking at\n"
	.string "each other.$"

UpanaCaveMainRoom_Inscription_2_Text_0:
# 216 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "A tightly coiled, spiral-shelled\n"
	.string "creature fills most of the stone panel.\p"
	.string "Below it, small figures press their\n"
	.string "foreheads to the ground.\p"
	.string "Fish and plants are carved around them,\n"
	.string "laid out in neat rows.\p"
	.string "They appear to be offerings.$"

UpanaCaveMainRoom_Inscription_3_Text_0:
# 223 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "A lone figure stands with its arms\n"
	.string "outstretched.\p"
	.string "Before it looms a shape with wide,\n"
	.string "jagged jaws and features like a\l"
	.string "wingspan.\p"
	.string "The lines carved around the creature\n"
	.string "are deeper and more frantic than\l"
	.string "anywhere else on the wall.\p"
	.string "Something about the image suggests\n"
	.string "the figure is not afraid.$"

UpanaCaveMainRoom_Inscription_4_Text_0:
# 230 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "A row of oval shapes arranged in a\n"
	.string "perfect ring.\p"
	.string "Between each one, a mark like a curved\n"
	.string "blade.\p"
	.string "The image is worn almost flat.\p"
	.string "Whoever made it came back more than\n"
	.string "once. The outlines have been recut.$"

UpanaCaveMainRoom_Inscription_Large_Text_0:
# 237 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "A large carving covers an entire\n"
	.string "section of the wall.\p"
	.string "In the center stands a figure. Jointed,\n"
	.string "plated, its long curved arms at its\l"
	.string "sides.\p"
	.string "Around it, dozens of smaller figures in\n"
	.string "every posture: prostrate, standing,\l"
	.string "arms raised, holding torches.\p"
	.string "Lines radiate outward from the central\n"
	.string "figure in all directions.$"

UpanaCaveMainRoom_Inscription_Large_Text_1:
# 239 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "In the upper corner of the image,\n"
	.string "something descends from above.\p"
	.string "A winged shape. Jaws open. Impossibly\n"
	.string "large.\p"
	.string "The two creatures are not fighting.\p"
	.string "They appear to be... meeting.$"

UpanaCaveMainRoom_Inscription_Large_Text_2:
# 241 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "Below both of them, the small figures\n"
	.string "are turned away.\p"
	.string "Heads bowed.\p"
	.string "In the lowest part of the carving,\n"
	.string "barely visible, something is being\l"
	.string "carried toward a fire.\p"
	.string "It is small.\p"
	.string "It is not a Pokémon.$"

UpanaCavesystem_Text_CharlieIntro::
# 9 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "Six Geodude, one cave, two at a time!\n"
	.string "You won't know which ones are rocks\l"
	.string "until they move!$"

UpanaCavesystem_Text_CharlieDefeated::
# 13 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "How do you tell them apart?! I can\n"
	.string "barely tell them apart!$"

UpanaCavesystem_Text_CharlieNotEnoughMons::
# 17 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "Come back when you have two Pokémon!$"

UpanaCavesystem_Text_CharliePostBattle::
# 21 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "Geodude belongs in a cave. These walls,\n"
	.string "this stone... they feel right at home.\p"
	.string "So do I, honestly.$"

UpanaCavesystem_Text_BowenIntro::
# 31 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "These cavern walls have stood for\n"
	.string "centuries! My Geodude are carved from\l"
	.string "the same ancient stone!$"

UpanaCavesystem_Text_BowenDefeated::
# 35 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "The rocks remember... even defeat.$"

UpanaCavesystem_Text_BowenPostBattle::
# 39 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "The people who lived here ages ago left\n"
	.string "carvings on these walls.\p"
	.string "This place is alive with history.$"

UpanaCavesystem_Text_JasperIntro::
# 49 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "Bet you didn't hear me coming! My\n"
	.string "Pokémon blend right into the dark of\l"
	.string "this cave!$"

UpanaCavesystem_Text_JasperDefeated::
# 53 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "I made too much noise after all...$"

UpanaCavesystem_Text_JasperPostBattle::
# 57 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "Nosepass is drawn here by the cave's\n"
	.string "natural magnetism.\p"
	.string "The ancient carvings deep inside even\n"
	.string "show it.$"

UpanaCavesystem_Text_QuinnIntro::
# 67 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "I heard there is a beautifull ridge at\n"
	.string "the end of this cave! I'm so curious!$"

UpanaCavesystem_Text_QuinnDefeated::
# 71 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "That's what I get for wandering off the\n"
	.string "trail!$"

UpanaCavesystem_Text_QuinnPostBattle::
# 75 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "The upcoming ridgeline is amazing for\n"
	.string "cycling. Once you get out of here, go\l"
	.string "check it out!$"

UpanaCavesystem_Text_DaneIntro::
# 85 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "My Gligar can scale these cave walls\n"
	.string "easily. Can your Pokémon keep up?$"

UpanaCavesystem_Text_DaneDefeated::
# 89 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "You're as agile as Gligar itself!$"

UpanaCavesystem_Text_DanePostBattle::
# 93 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "This cave connects all the way to a\n"
	.string "beautifull ridgeline.\p"
	.string "The people who carved these walls knew\n"
	.string "both the sky and the stone.$"

UpanaCavesystem_Text_KenzoIntro::
# 103 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "In this ancient hall my spirit is\n"
	.string "sharpened! Face my fighting technique!$"

UpanaCavesystem_Text_KenzoDefeated::
# 107 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "Your discipline surpasses mine. I have\n"
	.string "more to learn.$"

UpanaCavesystem_Text_KenzoPostBattle::
# 111 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "The ancients who lived here trained\n"
	.string "their bodies just as I do.\p"
	.string "I feel their strength echoing in these\n"
	.string "walls.$"

UpanaCavesystem_Text_EdgarIntro::
# 121 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "This cave is full of ancient history! My\n"
	.string "Cubone was found right here among the\l"
	.string "ruins!$"

UpanaCavesystem_Text_EdgarDefeated::
# 125 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "My research...! My battle pride...! Both\n"
	.string "shattered!$"

UpanaCavesystem_Text_EdgarPostBattle::
# 129 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "The carvings here depict Pokémon we\n"
	.string "rarely see now.\p"
	.string "The indigenous people had a deep bond\n"
	.string "with cave-dwelling species.$"

UpanaCavesystem_Text_AldricIntro::
# 139 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "Onix IS this mountain! To battle me is\n"
	.string "to battle the stone itself!$"

UpanaCavesystem_Text_AldricDefeated::
# 143 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "Even the mountain must yield sometimes.$"

UpanaCavesystem_Text_AldricPostBattle::
# 147 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "I've spent years learning the paths\n"
	.string "through here.\p"
	.string "Every tunnel was carved by people who\n"
	.string "knew this rock better than anyone.$"

UpanaCavesystem_Text_SeraIntro::
# 157 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "The silence of this cave sharpens\n"
	.string "Meditite's focus and mine. Let's see\l"
	.string "your strength!$"

UpanaCavesystem_Text_SeraDefeated::
# 161 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "My focus slipped. I'll meditate on what\n"
	.string "went wrong.$"

UpanaCavesystem_Text_SeraPostBattle::
# 165 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "There's a section deeper in where it's\n"
	.string "completely silent. Perfect for training.\p"
	.string "The ancients knew it too.$"

UpanaCavesystem_Text_OpalIntro::
# 175 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "Ha, a young trainer in my cave! My Numel\n"
	.string "keeps me warm in these cold tunnels.\l"
	.string "Now battle!$"

UpanaCavesystem_Text_OpalDefeated::
# 179 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "You're fiercer than my Numel's fire,\n"
	.string "dear!$"

UpanaCavesystem_Text_OpalPostBattle::
# 183 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "I've lived near this cave my whole life.\p"
	.string "My grandmother spoke of the people who\n"
	.string "called it home. Their stories live in the\l"
	.string "stone.$"

UpanaCavesystem_Text_RexIntro::
# 252 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "Before I go down that ridge full I want\n"
	.string "to battle some trainers!$"

UpanaCavesystem_Text_RexDefeated::
# 256 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "Whoa, you're faster than both my Doduo!$"

UpanaCavesystem_Text_RexPostBattle::
# 260 "data/maps/Route06_UpanaCave_MainRoom/scripts.pory"
	.string "The downhill run from the ridgeline is\n"
	.string "wild. My Doduo can't keep pace with me\l"
	.string "on a bike so they stay in here and race\l"
	.string "the stalagmites.$"
