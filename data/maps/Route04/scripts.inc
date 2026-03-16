Route04_MapScripts::
	.byte 0


Route04_Sign_DarkCave::
# 4 "data/maps/Route04/scripts.pory"
	lock
# 5 "data/maps/Route04/scripts.pory"
	msgbox Route04_Sign_DarkCave_Text_0
# 6 "data/maps/Route04/scripts.pory"
	waitmessage
# 7 "data/maps/Route04/scripts.pory"
	release
	return


Route04_HikerTired_Convo::
# 11 "data/maps/Route04/scripts.pory"
	lock
# 12 "data/maps/Route04/scripts.pory"
	faceplayer
# 13 "data/maps/Route04/scripts.pory"
	msgbox Route04_HikerTired_Convo_Text_0
# 14 "data/maps/Route04/scripts.pory"
	waitmessage
# 15 "data/maps/Route04/scripts.pory"
	release
	end


Route04_OldLady_Convo::
# 20 "data/maps/Route04/scripts.pory"
	lock
# 21 "data/maps/Route04/scripts.pory"
	faceplayer
# 22 "data/maps/Route04/scripts.pory"
	msgbox Route04_OldLady_Convo_Text_0, MSGBOX_AUTOCLOSE
# 23 "data/maps/Route04/scripts.pory"
	waitmessage
# 24 "data/maps/Route04/scripts.pory"
	release
	end


Route04_ElderMen_Convo::
# 29 "data/maps/Route04/scripts.pory"
	lock
# 30 "data/maps/Route04/scripts.pory"
	faceplayer
# 31 "data/maps/Route04/scripts.pory"
	msgbox Route04_ElderMen_Convo_Text_0, MSGBOX_AUTOCLOSE
# 32 "data/maps/Route04/scripts.pory"
	waitmessage
# 33 "data/maps/Route04/scripts.pory"
	release
	end


Route04_Totodile_Convo::
# 38 "data/maps/Route04/scripts.pory"
	lock
# 39 "data/maps/Route04/scripts.pory"
	faceplayer
# 40 "data/maps/Route04/scripts.pory"
	msgbox Route04_Totodile_Convo_Text_0, MSGBOX_AUTOCLOSE
# 41 "data/maps/Route04/scripts.pory"
	waitmessage
# 42 "data/maps/Route04/scripts.pory"
	release
	end


Route04_LadySwimming_Convo::
# 47 "data/maps/Route04/scripts.pory"
	lock
# 48 "data/maps/Route04/scripts.pory"
	faceplayer
# 49 "data/maps/Route04/scripts.pory"
	msgbox Route04_LadySwimming_Convo_Text_0, MSGBOX_AUTOCLOSE
# 50 "data/maps/Route04/scripts.pory"
	waitmessage
# 51 "data/maps/Route04/scripts.pory"
	release
	end


Route04_MenLost_Convo::
# 56 "data/maps/Route04/scripts.pory"
	lock
# 57 "data/maps/Route04/scripts.pory"
	faceplayer
# 58 "data/maps/Route04/scripts.pory"
	msgbox Route04_MenLost_Convo_Text_0, MSGBOX_AUTOCLOSE
# 59 "data/maps/Route04/scripts.pory"
	waitmessage
# 60 "data/maps/Route04/scripts.pory"
	release
	end


Route04_Trainer_Alfred::
# 65 "data/maps/Route04/scripts.pory"
	trainerbattle_single TRAINER_ALFRED, Route04_Text_AlfredIntro, Route04_Text_AlfredDefeated
# 66 "data/maps/Route04/scripts.pory"
	msgbox Route04_Text_AlfredPostBattle, MSGBOX_AUTOCLOSE
	end


Route04_Trainer_Deryck::
# 83 "data/maps/Route04/scripts.pory"
	trainerbattle_single TRAINER_DERYCK, Route04_Text_DeryckIntro, Route04_Text_DeryckDefeated
# 84 "data/maps/Route04/scripts.pory"
	msgbox Route04_Text_DeryckPostBattle, MSGBOX_AUTOCLOSE
	end


Route04_Trainer_Leah::
# 101 "data/maps/Route04/scripts.pory"
	trainerbattle_single TRAINER_LEAH, Route04_Text_LeahIntro, Route04_Text_LeahDefeated
# 102 "data/maps/Route04/scripts.pory"
	msgbox Route04_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
	end


Route04_Trainer_Fredrick::
# 119 "data/maps/Route04/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, Route04_Text_FredrickIntro, Route04_Text_FredrickDefeated
# 120 "data/maps/Route04/scripts.pory"
	msgbox Route04_Text_FredrickPostBattle, MSGBOX_AUTOCLOSE
	end


Route04_Trainer_Matt::
# 137 "data/maps/Route04/scripts.pory"
	trainerbattle_single TRAINER_MATT, Route04_Text_MattIntro, Route04_Text_MattDefeated
# 138 "data/maps/Route04/scripts.pory"
	msgbox Route04_Text_MattPostBattle, MSGBOX_AUTOCLOSE
	end


Route04_Trainer_Daisy::
# 155 "data/maps/Route04/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route04_Text_DaisyIntro, Route04_Text_DaisyDefeated
# 156 "data/maps/Route04/scripts.pory"
	msgbox Route04_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
	end


Route04_Trainer_Zander::
# 173 "data/maps/Route04/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, Route04_Text_ZanderIntro, Route04_Text_ZanderDefeated
# 174 "data/maps/Route04/scripts.pory"
	msgbox Route04_Text_ZanderPostBattle, MSGBOX_AUTOCLOSE
	end


Route04_Trainer_Arielle::
# 191 "data/maps/Route04/scripts.pory"
	trainerbattle_single TRAINER_ARIELLE, Route04_Text_ArielleIntro, Route04_Text_ArielleDefeated
# 192 "data/maps/Route04/scripts.pory"
	msgbox Route04_Text_AriellePostBattle, MSGBOX_AUTOCLOSE
	end


Route04_Trainer_Archie::
# 209 "data/maps/Route04/scripts.pory"
	trainerbattle_single TRAINER_ARCHIE, Route04_Text_ArchieIntro, Route04_Text_ArchieDefeated
# 210 "data/maps/Route04/scripts.pory"
	msgbox Route04_Text_ArchiePostBattle, MSGBOX_AUTOCLOSE
	end


Route04_Trainer_Edgard::
# 227 "data/maps/Route04/scripts.pory"
	trainerbattle_single TRAINER_EDGARD, Route04_Text_EdgardIntro, Route04_Text_EdgardDefeated
# 228 "data/maps/Route04/scripts.pory"
	msgbox Route04_Text_EdgardPostBattle, MSGBOX_AUTOCLOSE
	end


Route04_Sign_DarkCave_Text_0:
# 5 "data/maps/Route04/scripts.pory"
	.string "Bat Cave\n"
	.string "Caution: Heavy Bat Population.$"

Route04_HikerTired_Convo_Text_0:
# 13 "data/maps/Route04/scripts.pory"
	.string "I thought...... escaping the mud would be\n"
	.string "the hard part......\p"
	.string "But gravity is winning this battle! My\n"
	.string "belly is pulling me down faster than my\l"
	.string "legs can push up!$"

Route04_OldLady_Convo_Text_0:
# 22 "data/maps/Route04/scripts.pory"
	.string "It is pitch black inside that cave!\p"
	.string "I can hear the flapping of a thousand\n"
	.string "Zubat wings echoing from the entrance.\p"
	.string "I think I will just stand here until the\n"
	.string "sun somehow rises underground.$"

Route04_ElderMen_Convo_Text_0:
# 31 "data/maps/Route04/scripts.pory"
	.string "You see that dark cave mouth over\n"
	.string "there? The water runs deep inside it.\p"
	.string "Legend says it was a sanctuary for\n"
	.string "ancient shell Pokémon, creatures with\l"
	.string "rock-hard armor.\p"
	.string "Fishermen prized them, but greed is a\n"
	.string "terrible thing... Overfishing wiped them\l"
	.string "out.\p"
	.string "I saw the very last one hiding in those\n"
	.string "shadows sixty years ago, back when I\l"
	.string "was just a boy.$"

Route04_Totodile_Convo_Text_0:
# 40 "data/maps/Route04/scripts.pory"
	.string "Hey, watch your ankles while you walk\n"
	.string "through here.\p"
	.string "I swear I saw some little blue monsters\n"
	.string "snapping their jaws at a Magikarp\l"
	.string "earlier.\p"
	.string "They had red ridges on their backs and\n"
	.string "looked way too energetic for a swamp\l"
	.string "like this.$"

Route04_LadySwimming_Convo_Text_0:
# 49 "data/maps/Route04/scripts.pory"
	.string "Oh, hello there dearie! Don't look at me\n"
	.string "like that!\p"
	.string "The mud in these mangroves is\n"
	.string "absolutely full of minerals. It works\l"
	.string "wonders for your joints!\p"
	.string "Why don't you take off those shoes and\n"
	.string "hop in? It is only a little bit slimy!$"

Route04_MenLost_Convo_Text_0:
# 58 "data/maps/Route04/scripts.pory"
	.string "Ugh, squish, squash... My socks are\n"
	.string "completely soaked!\p"
	.string "I am just trying to find the dry path to\n"
	.string "Siltroot Town, but these roots make\l"
	.string "this place feel like a maze.\p"
	.string "I try to go left, I hit water. I try to go\n"
	.string "right, I hit mud. How do people live\l"
	.string "here?$"

Route04_Text_AlfredIntro::
# 70 "data/maps/Route04/scripts.pory"
	.string "I spotted these little guys in the\n"
	.string "mangrove from way up here!$"

Route04_Text_AlfredDefeated::
# 74 "data/maps/Route04/scripts.pory"
	.string "My new team was not ready for the climb!$"

Route04_Text_AlfredPostBattle::
# 78 "data/maps/Route04/scripts.pory"
	.string "The mangrove roots below are full of\n"
	.string "life. You should go take a look if you\l"
	.string "are not afraid of getting muddy.$"

Route04_Text_DeryckIntro::
# 88 "data/maps/Route04/scripts.pory"
	.string "Hiyah! Ouch! This rock is harder than it\n"
	.string "looks. Hey, you look like a good target\l"
	.string "practice!$"

Route04_Text_DeryckDefeated::
# 92 "data/maps/Route04/scripts.pory"
	.string "You shattered my confidence faster\n"
	.string "than I shatter rocks.$"

Route04_Text_DeryckPostBattle::
# 96 "data/maps/Route04/scripts.pory"
	.string "I am training my fists to be as hard as\n"
	.string "steel. One day I will punch through a\l"
	.string "mountain!$"

Route04_Text_LeahIntro::
# 106 "data/maps/Route04/scripts.pory"
	.string "My Eevee has so much potential, just\n"
	.string "watch!$"

Route04_Text_LeahDefeated::
# 110 "data/maps/Route04/scripts.pory"
	.string "We still have a lot of growing to do.$"

Route04_Text_LeahPostBattle::
# 114 "data/maps/Route04/scripts.pory"
	.string "I cannot decide what I want my Eevee to\n"
	.string "evolve into. There are just too many\l"
	.string "choices!$"

Route04_Text_FredrickIntro::
# 124 "data/maps/Route04/scripts.pory"
	.string "Shh! Keep your voice down. I think I saw\n"
	.string "a rare bug crawling in the mudflats.$"

Route04_Text_FredrickDefeated::
# 128 "data/maps/Route04/scripts.pory"
	.string "Aww, all the commotion scared it away!$"

Route04_Text_FredrickPostBattle::
# 132 "data/maps/Route04/scripts.pory"
	.string "Some bugs love the tall grass, but the\n"
	.string "really interesting ones like to hide in\l"
	.string "the sticky mud. You just have to get\l"
	.string "your hands dirty.$"

Route04_Text_MattIntro::
# 142 "data/maps/Route04/scripts.pory"
	.string "Feel the resistance! Running on sand\n"
	.string "builds explosive leg muscles!$"

Route04_Text_MattDefeated::
# 146 "data/maps/Route04/scripts.pory"
	.string "I hit the wall! No energy left.$"

Route04_Text_MattPostBattle::
# 150 "data/maps/Route04/scripts.pory"
	.string "The sand sinks under your feet, making\n"
	.string "you work twice as hard. That is the\l"
	.string "secret to my speed.$"

Route04_Text_DaisyIntro::
# 160 "data/maps/Route04/scripts.pory"
	.string "I am doing interval training. Let's see\n"
	.string "if a battle can keep my heart rate up!$"

Route04_Text_DaisyDefeated::
# 164 "data/maps/Route04/scripts.pory"
	.string "Phew! That was a high-intensity\n"
	.string "workout.$"

Route04_Text_DaisyPostBattle::
# 168 "data/maps/Route04/scripts.pory"
	.string "My boyfriend Matt is training further\n"
	.string "down the beach. He says the sand is\l"
	.string "good for his calves, but I think he just\l"
	.string "likes the view.$"

Route04_Text_ZanderIntro::
# 178 "data/maps/Route04/scripts.pory"
	.string "I stepped off my ship to stretch my\n"
	.string "legs and found these two wriggling in\l"
	.string "the mud!$"

Route04_Text_ZanderDefeated::
# 182 "data/maps/Route04/scripts.pory"
	.string "Abandon ship! My fresh catch was not\n"
	.string "ready for battle.$"

Route04_Text_ZanderPostBattle::
# 186 "data/maps/Route04/scripts.pory"
	.string "The mud in these mangroves is thick and\n"
	.string "sticky. It is perfect for Barboach, but\l"
	.string "terrible for my boots.$"

Route04_Text_ArielleIntro::
# 196 "data/maps/Route04/scripts.pory"
	.string "Hey! You are blocking my view. I am\n"
	.string "trying to focus on that waterfall.$"

Route04_Text_ArielleDefeated::
# 200 "data/maps/Route04/scripts.pory"
	.string "My vision is blurry now...$"

Route04_Text_AriellePostBattle::
# 204 "data/maps/Route04/scripts.pory"
	.string "Look closely at the water crashing down\n"
	.string "in the distance. I swear I saw a shadow\l"
	.string "slip behind the curtain of water. Is\l"
	.string "there a cave entrance back there?$"

Route04_Text_ArchieIntro::
# 214 "data/maps/Route04/scripts.pory"
	.string "Fufufu! One day, the sea will cover\n"
	.string "everything, and I will be its king!\l"
	.string "Behold the power of the tides!$"

Route04_Text_ArchieDefeated::
# 218 "data/maps/Route04/scripts.pory"
	.string "Grrr! The land... it is too much land!$"

Route04_Text_ArchiePostBattle::
# 222 "data/maps/Route04/scripts.pory"
	.string "I am going to form a super cool team\n"
	.string "when I grow up. We will wear blue\l"
	.string "bandanas and worship the ancient gods\l"
	.string "of the sea! You will see!$"

Route04_Text_EdgardIntro::
# 232 "data/maps/Route04/scripts.pory"
	.string "Sacre bleu! Do not step on ze\n"
	.string "ingredients! I am looking for ze\l"
	.string "perfect catch for my bisque.$"

Route04_Text_EdgardDefeated::
# 236 "data/maps/Route04/scripts.pory"
	.string "My soufflé has collapsed!$"

Route04_Text_EdgardPostBattle::
# 240 "data/maps/Route04/scripts.pory"
	.string "Zis Qwilfish is exquisite, no? One must\n"
	.string "be very careful preparing it, or zap! Ze\l"
	.string "poison will get you. A true chef loves a\l"
	.string "little danger.$"
