Route06_UpanaCave_MainRoom_MapScripts::
	.byte 0


UpanaCavesystem_Trainer_Charlie::
	trainerbattle_double TRAINER_CHARLIE, UpanaCavesystem_Text_CharlieIntro, UpanaCavesystem_Text_CharlieDefeated, UpanaCavesystem_Text_CharlieNotEnoughMons
	msgbox UpanaCavesystem_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCavesystem_Trainer_Bowen::
	trainerbattle_single TRAINER_HIKER_BOWEN, UpanaCavesystem_Text_BowenIntro, UpanaCavesystem_Text_BowenDefeated
	msgbox UpanaCavesystem_Text_BowenPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCavesystem_Trainer_Jasper::
	trainerbattle_single TRAINER_BUG_CATCHER_JASPER, UpanaCavesystem_Text_JasperIntro, UpanaCavesystem_Text_JasperDefeated
	msgbox UpanaCavesystem_Text_JasperPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCavesystem_Trainer_Quinn::
	trainerbattle_single TRAINER_LASS_QUINN, UpanaCavesystem_Text_QuinnIntro, UpanaCavesystem_Text_QuinnDefeated
	msgbox UpanaCavesystem_Text_QuinnPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCavesystem_Trainer_Dane::
	trainerbattle_single TRAINER_HIKER_DANE, UpanaCavesystem_Text_DaneIntro, UpanaCavesystem_Text_DaneDefeated
	msgbox UpanaCavesystem_Text_DanePostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCavesystem_Trainer_Kenzo::
	trainerbattle_single TRAINER_BLACK_BELT_KENZO, UpanaCavesystem_Text_KenzoIntro, UpanaCavesystem_Text_KenzoDefeated
	msgbox UpanaCavesystem_Text_KenzoPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCavesystem_Trainer_Edgar::
	trainerbattle_single TRAINER_POKEMANIAC_EDGAR, UpanaCavesystem_Text_EdgarIntro, UpanaCavesystem_Text_EdgarDefeated
	msgbox UpanaCavesystem_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCavesystem_Trainer_Aldric::
	trainerbattle_single TRAINER_HIKER_ALDRIC, UpanaCavesystem_Text_AldricIntro, UpanaCavesystem_Text_AldricDefeated
	msgbox UpanaCavesystem_Text_AldricPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCavesystem_Trainer_Sera::
	trainerbattle_single TRAINER_BATTLE_GIRL_SERA, UpanaCavesystem_Text_SeraIntro, UpanaCavesystem_Text_SeraDefeated
	msgbox UpanaCavesystem_Text_SeraPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCavesystem_Trainer_Opal::
	trainerbattle_single TRAINER_KINDLER_OPAL, UpanaCavesystem_Text_OpalIntro, UpanaCavesystem_Text_OpalDefeated
	msgbox UpanaCavesystem_Text_OpalPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCaveMainRoom_Npc_Researcher::
	lock
	faceplayer
	msgbox UpanaCaveMainRoom_Npc_Researcher_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


UpanaCaveMainRoom_Npc_Hiker::
	lock
	faceplayer
	msgbox UpanaCaveMainRoom_Npc_Hiker_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


UpanaCaveMainRoom_Inscription_1::
	lock
	msgbox UpanaCaveMainRoom_Inscription_1_Text_0
	waitmessage
	release
	return


UpanaCaveMainRoom_Inscription_2::
	lock
	msgbox UpanaCaveMainRoom_Inscription_2_Text_0
	waitmessage
	release
	return


UpanaCaveMainRoom_Inscription_3::
	lock
	msgbox UpanaCaveMainRoom_Inscription_3_Text_0
	waitmessage
	release
	return


UpanaCaveMainRoom_Inscription_4::
	lock
	msgbox UpanaCaveMainRoom_Inscription_4_Text_0
	waitmessage
	release
	return


UpanaCaveMainRoom_Inscription_Large::
	lock
	msgbox UpanaCaveMainRoom_Inscription_Large_Text_0
	waitmessage
	msgbox UpanaCaveMainRoom_Inscription_Large_Text_1
	waitmessage
	msgbox UpanaCaveMainRoom_Inscription_Large_Text_2
	waitmessage
	release
	return


UpanaCavesystem_Trainer_Rex::
	trainerbattle_single TRAINER_BIKER_REX, UpanaCavesystem_Text_RexIntro, UpanaCavesystem_Text_RexDefeated
	msgbox UpanaCavesystem_Text_RexPostBattle, MSGBOX_AUTOCLOSE
	end


UpanaCaveMainRoom_Npc_Researcher_Text_0:
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
	.string "A small carving, easy to miss.\p"
	.string "A circle of hunched figures around a\n"
	.string "dark pool.\p"
	.string "Something is submerged in the water at\n"
	.string "the center.\p"
	.string "All the figures face inward.\p"
	.string "None of them appear to be looking at\n"
	.string "each other.$"

UpanaCaveMainRoom_Inscription_2_Text_0:
	.string "A tightly coiled, spiral-shelled\n"
	.string "creature fills most of the stone panel.\p"
	.string "Below it, small figures press their\n"
	.string "foreheads to the ground.\p"
	.string "Fish and plants are carved around them,\n"
	.string "laid out in neat rows.\p"
	.string "They appear to be offerings.$"

UpanaCaveMainRoom_Inscription_3_Text_0:
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
	.string "A row of oval shapes arranged in a\n"
	.string "perfect ring.\p"
	.string "Between each one, a mark like a curved\n"
	.string "blade.\p"
	.string "The image is worn almost flat.\p"
	.string "Whoever made it came back more than\n"
	.string "once. The outlines have been recut.$"

UpanaCaveMainRoom_Inscription_Large_Text_0:
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
	.string "In the upper corner of the image,\n"
	.string "something descends from above.\p"
	.string "A winged shape. Jaws open. Impossibly\n"
	.string "large.\p"
	.string "The two creatures are not fighting.\p"
	.string "They appear to be... meeting.$"

UpanaCaveMainRoom_Inscription_Large_Text_2:
	.string "Below both of them, the small figures\n"
	.string "are turned away.\p"
	.string "Heads bowed.\p"
	.string "In the lowest part of the carving,\n"
	.string "barely visible, something is being\l"
	.string "carried toward a fire.\p"
	.string "It is small.\p"
	.string "It is not a Pokémon.$"

UpanaCavesystem_Text_CharlieIntro::
	.string "Six Geodude, one cave, two at a time!\n"
	.string "You won't know which ones are rocks\l"
	.string "until they move!$"

UpanaCavesystem_Text_CharlieDefeated::
	.string "How do you tell them apart?! I can\n"
	.string "barely tell them apart!$"

UpanaCavesystem_Text_CharlieNotEnoughMons::
	.string "Come back when you have two Pokémon!$"

UpanaCavesystem_Text_CharliePostBattle::
	.string "Geodude belongs in a cave. These walls,\n"
	.string "this stone... they feel right at home.\p"
	.string "So do I, honestly.$"

UpanaCavesystem_Text_BowenIntro::
	.string "These cavern walls have stood for\n"
	.string "centuries! My Geodude are carved from\l"
	.string "the same ancient stone!$"

UpanaCavesystem_Text_BowenDefeated::
	.string "The rocks remember... even defeat.$"

UpanaCavesystem_Text_BowenPostBattle::
	.string "The people who lived here ages ago left\n"
	.string "carvings on these walls.\p"
	.string "This place is alive with history.$"

UpanaCavesystem_Text_JasperIntro::
	.string "Bet you didn't hear me coming! My\n"
	.string "Pokémon blend right into the dark of\l"
	.string "this cave!$"

UpanaCavesystem_Text_JasperDefeated::
	.string "I made too much noise after all...$"

UpanaCavesystem_Text_JasperPostBattle::
	.string "Nosepass is drawn here by the cave's\n"
	.string "natural magnetism.\p"
	.string "The ancient carvings deep inside even\n"
	.string "show it.$"

UpanaCavesystem_Text_QuinnIntro::
	.string "I heard there is a beautifull ridge at\n"
	.string "the end of this cave! I'm so curious!$"

UpanaCavesystem_Text_QuinnDefeated::
	.string "That's what I get for wandering off the\n"
	.string "trail!$"

UpanaCavesystem_Text_QuinnPostBattle::
	.string "The upcoming ridgeline is amazing for\n"
	.string "cycling. Once you get out of here, go\l"
	.string "check it out!$"

UpanaCavesystem_Text_DaneIntro::
	.string "My Gligar can scale these cave walls\n"
	.string "easily. Can your Pokémon keep up?$"

UpanaCavesystem_Text_DaneDefeated::
	.string "You're as agile as Gligar itself!$"

UpanaCavesystem_Text_DanePostBattle::
	.string "This cave connects all the way to a\n"
	.string "beautifull ridgeline.\p"
	.string "The people who carved these walls knew\n"
	.string "both the sky and the stone.$"

UpanaCavesystem_Text_KenzoIntro::
	.string "In this ancient hall my spirit is\n"
	.string "sharpened! Face my fighting technique!$"

UpanaCavesystem_Text_KenzoDefeated::
	.string "Your discipline surpasses mine. I have\n"
	.string "more to learn.$"

UpanaCavesystem_Text_KenzoPostBattle::
	.string "The ancients who lived here trained\n"
	.string "their bodies just as I do.\p"
	.string "I feel their strength echoing in these\n"
	.string "walls.$"

UpanaCavesystem_Text_EdgarIntro::
	.string "This cave is full of ancient history! My\n"
	.string "Cubone was found right here among the\l"
	.string "ruins!$"

UpanaCavesystem_Text_EdgarDefeated::
	.string "My research...! My battle pride...! Both\n"
	.string "shattered!$"

UpanaCavesystem_Text_EdgarPostBattle::
	.string "The carvings here depict Pokémon we\n"
	.string "rarely see now.\p"
	.string "The indigenous people had a deep bond\n"
	.string "with cave-dwelling species.$"

UpanaCavesystem_Text_AldricIntro::
	.string "Onix IS this mountain! To battle me is\n"
	.string "to battle the stone itself!$"

UpanaCavesystem_Text_AldricDefeated::
	.string "Even the mountain must yield sometimes.$"

UpanaCavesystem_Text_AldricPostBattle::
	.string "I've spent years learning the paths\n"
	.string "through here.\p"
	.string "Every tunnel was carved by people who\n"
	.string "knew this rock better than anyone.$"

UpanaCavesystem_Text_SeraIntro::
	.string "The silence of this cave sharpens\n"
	.string "Meditite's focus and mine. Let's see\l"
	.string "your strength!$"

UpanaCavesystem_Text_SeraDefeated::
	.string "My focus slipped. I'll meditate on what\n"
	.string "went wrong.$"

UpanaCavesystem_Text_SeraPostBattle::
	.string "There's a section deeper in where it's\n"
	.string "completely silent. Perfect for training.\p"
	.string "The ancients knew it too.$"

UpanaCavesystem_Text_OpalIntro::
	.string "Ha, a young trainer in my cave! My Numel\n"
	.string "keeps me warm in these cold tunnels.\l"
	.string "Now battle!$"

UpanaCavesystem_Text_OpalDefeated::
	.string "You're fiercer than my Numel's fire,\n"
	.string "dear!$"

UpanaCavesystem_Text_OpalPostBattle::
	.string "I've lived near this cave my whole life.\p"
	.string "My grandmother spoke of the people who\n"
	.string "called it home. Their stories live in the\l"
	.string "stone.$"

UpanaCavesystem_Text_RexIntro::
	.string "Before I go down that ridge full I want\n"
	.string "to battle some trainers!$"

UpanaCavesystem_Text_RexDefeated::
	.string "Whoa, you're faster than both my Doduo!$"

UpanaCavesystem_Text_RexPostBattle::
	.string "The downhill run from the ridgeline is\n"
	.string "wild. My Doduo can't keep pace with me\l"
	.string "on a bike so they stay in here and race\l"
	.string "the stalagmites.$"
