Route04_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route04_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route04_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_FORTREE_CITY_STATE, 1, Route04_DaanPokenavCall
	.2byte 0


Route04_DaanPokenavCall::
	lock
	setvar VAR_FORTREE_CITY_STATE, 2
	pokenavcall Route04_DaanPokenavCall_Text_0
	waitmessage
	release
	return


Route04_Sign_DarkCave::
	lock
	msgbox Route04_Sign_DarkCave_Text_0
	waitmessage
	release
	return


Route04_HikerTired_Convo::
	lock
	faceplayer
	goto_if_unset FLAG_ITEM_ROUTE04_SILK_SCARF, Route04_HikerTired_Convo_2
	msgbox Route04_HikerTired_Convo_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
Route04_HikerTired_Convo_1:
	release
	end

Route04_HikerTired_Convo_2:
	msgbox Route04_HikerTired_Convo_Text_0
	waitmessage
	giveitem ITEM_SILK_SCARF
	waitmessage
	setflag FLAG_ITEM_ROUTE04_SILK_SCARF
	goto Route04_HikerTired_Convo_1


Route04_OldLady_Convo::
	lock
	faceplayer
	msgbox Route04_OldLady_Convo_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Route04_ElderMen_Convo::
	lock
	faceplayer
	msgbox Route04_ElderMen_Convo_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Route04_Totodile_Convo::
	lock
	faceplayer
	msgbox Route04_Totodile_Convo_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Route04_LadySwimming_Convo::
	lock
	faceplayer
	msgbox Route04_LadySwimming_Convo_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Route04_MenLost_Convo::
	lock
	faceplayer
	msgbox Route04_MenLost_Convo_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Route04_Trainer_Alfred::
	trainerbattle_single TRAINER_ALFRED, Route04_Text_AlfredIntro, Route04_Text_AlfredDefeated
	msgbox Route04_Text_AlfredPostBattle, MSGBOX_AUTOCLOSE
	end


Route04_Trainer_Deryck::
	trainerbattle_single TRAINER_DERYCK, Route04_Text_DeryckIntro, Route04_Text_DeryckDefeated
	msgbox Route04_Text_DeryckPostBattle, MSGBOX_AUTOCLOSE
	end


Route04_Trainer_Leah::
	trainerbattle_single TRAINER_LEAH_ROUTE04_SK, Route04_Text_LeahIntro, Route04_Text_LeahDefeated
	msgbox Route04_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
	end


Route04_Trainer_Fredrick::
	trainerbattle_single TRAINER_FREDRICK_ROUTE04_SK, Route04_Text_FredrickIntro, Route04_Text_FredrickDefeated
	msgbox Route04_Text_FredrickPostBattle, MSGBOX_AUTOCLOSE
	end


Route04_Trainer_Matt::
	trainerbattle_single TRAINER_MATT_ROUTE04_SK, Route04_Text_MattIntro, Route04_Text_MattDefeated
	msgbox Route04_Text_MattPostBattle, MSGBOX_AUTOCLOSE
	end


Route04_Trainer_Daisy::
	trainerbattle_single TRAINER_DAISY_ROUTE04_SK, Route04_Text_DaisyIntro, Route04_Text_DaisyDefeated
	msgbox Route04_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
	end


Route04_Trainer_Zander::
	trainerbattle_single TRAINER_ZANDER_ROUTE04_SK, Route04_Text_ZanderIntro, Route04_Text_ZanderDefeated
	msgbox Route04_Text_ZanderPostBattle, MSGBOX_AUTOCLOSE
	end


Route04_Trainer_Arielle::
	trainerbattle_single TRAINER_ARIELLE, Route04_Text_ArielleIntro, Route04_Text_ArielleDefeated
	msgbox Route04_Text_AriellePostBattle, MSGBOX_AUTOCLOSE
	end


Route04_Trainer_Archie::
	trainerbattle_single TRAINER_ARCHIE_ROUTE04_SK, Route04_Text_ArchieIntro, Route04_Text_ArchieDefeated
	msgbox Route04_Text_ArchiePostBattle, MSGBOX_AUTOCLOSE
	end


Route04_Trainer_Edgard::
	trainerbattle_single TRAINER_EDGARD, Route04_Text_EdgardIntro, Route04_Text_EdgardDefeated
	msgbox Route04_Text_EdgardPostBattle, MSGBOX_AUTOCLOSE
	end


Route04_DaanPokenavCall_Text_0:
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "DAAN: {PLAYER}!\p"
	.string "Finally! I've been trying to\n"
	.string "reach you for the past hour.\p"
	.string "Must've been that cave I sent\n"
	.string "you in, no signal there at all.\p"
	.string "Anyway, listen. Jacob and I\n"
	.string "just left Prof. Birds' lab.\p"
	.string "He denied knowing anything about\n"
	.string "Registeel.\p"
	.string "Still claims he was only running\n"
	.string "sensor tests for geothermal\l"
	.string "pig habitats.\p"
	.string "Something about a rare pink pig\n"
	.string "living down there...\p"
	.string "He refused to share his findings,\n"
	.string "said it would jeopoardize his\l"
	.string "subsidies.\p"
	.string "I don't buy it, but that's a\n"
	.string "problem for later.\p"
	.string "I mentioned reports from the\n"
	.string "north in the truck right?\p"
	.string "The reports are coming from\n"
	.string "Lionsarch City.\p"
	.string "Apparently a new company has\n"
	.string "bought the old steel plant and\l"
	.string "all the mining rights.\p"
	.string "Sounds familiar right?\p"
	.string "Now I'm certain. That's where\n"
	.string "The Faculty is making their\l"
	.string "next move.\p"
	.string "So.. Where are you now?\p"
	.string "...\p"
	.string "Good.\p"
	.string "Keep going downhill, enter the\n"
	.string "Mudflats, and keep pushing west.\p"
	.string "Hot, wet and miserable, but\n"
	.string "you'll make it.\p"
	.string "On the other side is\n"
	.string "Siltroot Town.\p"
	.string "Old trading post, deep in\n"
	.string "the mangroves.\p"
	.string "Find a man named Ali.\p"
	.string "Old friend of mine...\n"
	.string "brilliant physicist.\p"
	.string "...though he spends most of his\n"
	.string "time sampling his own very\l"
	.string "potent herbs...\p"
	.string "He knows every smuggling route\n"
	.string "and every boat captain in the\l"
	.string "area.\p"
	.string "If anyone can get you north,\n"
	.string "it's him.\p"
	.string "Stay focused, {PLAYER}.\n"
	.string "I'll be in touch.\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

Route04_Sign_DarkCave_Text_0:
	.string "{UP_ARROW} BAT CAVE\n"
	.string "Caution: Heavy Bat Population.$"

Route04_HikerTired_Convo_Text_0:
	.string "I thought...... escaping the mud would be\n"
	.string "the hard part......\p"
	.string "But gravity is winning this battle! My\n"
	.string "belly is pulling me down faster than my\l"
	.string "legs can push up!\p"
	.string "Hey, you're heading down to the\n"
	.string "mudflats aren't you?\p"
	.string "Take this. It's a Silk Scarf.\p"
	.string "Out on the open flats the sun just\n"
	.string "hammers you.\p"
	.string "No shade, no shelter, nothing.\p"
	.string "I'm going up the mountain from here,\n"
	.string "won't be needing it anymore.\p"
	.string "Stay cool out there.$"

Route04_HikerTired_Convo_Text_1:
	.string "Still... fighting... gravity......\p"
	.string "How are those mudflats treating you?$"

Route04_OldLady_Convo_Text_0:
	.string "It is pitch black inside that cave!\p"
	.string "I can hear the flapping of a thousand\n"
	.string "Zubat wings echoing from the entrance.\p"
	.string "I think I will just stand here until the\n"
	.string "sun somehow rises underground.$"

Route04_ElderMen_Convo_Text_0:
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
	.string "Hey, watch your ankles while you walk\n"
	.string "through here.\p"
	.string "I swear I saw some little blue monsters\n"
	.string "snapping their jaws at a Magikarp\l"
	.string "earlier.\p"
	.string "They had red ridges on their backs and\n"
	.string "looked way too energetic for a swamp\l"
	.string "like this.$"

Route04_LadySwimming_Convo_Text_0:
	.string "Oh, hello there dearie! Don't look at me\n"
	.string "like that!\p"
	.string "The mud in these mangroves is\n"
	.string "absolutely full of minerals. It works\l"
	.string "wonders for your joints!\p"
	.string "Why don't you take off those shoes and\n"
	.string "hop in? It is only a little bit slimy!$"

Route04_MenLost_Convo_Text_0:
	.string "Ugh, squish, squash... My socks are\n"
	.string "completely soaked!\p"
	.string "I am just trying to find the dry path to\n"
	.string "Siltroot Town, but these roots make\l"
	.string "this place feel like a maze.\p"
	.string "I try to go left, I hit water. I try to go\n"
	.string "right, I hit mud. How do people live\l"
	.string "here?$"

Route04_Text_AlfredIntro::
	.string "I spotted these little guys in the\n"
	.string "mangrove from way up here!$"

Route04_Text_AlfredDefeated::
	.string "My new team was not ready for the climb!$"

Route04_Text_AlfredPostBattle::
	.string "The mangrove roots below are full of\n"
	.string "life. You should go take a look if you\l"
	.string "are not afraid of getting muddy.$"

Route04_Text_DeryckIntro::
	.string "Hiyah! Ouch! This rock is harder than it\n"
	.string "looks. Hey, you look like a good target\l"
	.string "practice!$"

Route04_Text_DeryckDefeated::
	.string "You shattered my confidence faster\n"
	.string "than I shatter rocks.$"

Route04_Text_DeryckPostBattle::
	.string "I am training my fists to be as hard as\n"
	.string "steel. One day I will punch through a\l"
	.string "mountain!$"

Route04_Text_LeahIntro::
	.string "My Eevee has so much potential, just\n"
	.string "watch!$"

Route04_Text_LeahDefeated::
	.string "We still have a lot of growing to do.$"

Route04_Text_LeahPostBattle::
	.string "I cannot decide what I want my Eevee to\n"
	.string "evolve into. There are just too many\l"
	.string "choices!$"

Route04_Text_FredrickIntro::
	.string "Shh! Keep your voice down. I think I saw\n"
	.string "a rare bug crawling in the mudflats.$"

Route04_Text_FredrickDefeated::
	.string "Aww, all the commotion scared it away!$"

Route04_Text_FredrickPostBattle::
	.string "Some bugs love the tall grass, but the\n"
	.string "really interesting ones like to hide in\l"
	.string "the sticky mud. You just have to get\l"
	.string "your hands dirty.$"

Route04_Text_MattIntro::
	.string "Feel the resistance! Running on sand\n"
	.string "builds explosive leg muscles!$"

Route04_Text_MattDefeated::
	.string "I hit the wall! No energy left.$"

Route04_Text_MattPostBattle::
	.string "The sand sinks under your feet, making\n"
	.string "you work twice as hard. That is the\l"
	.string "secret to my speed.$"

Route04_Text_DaisyIntro::
	.string "I am doing interval training. Let's see\n"
	.string "if a battle can keep my heart rate up!$"

Route04_Text_DaisyDefeated::
	.string "Phew! That was a high-intensity\n"
	.string "workout.$"

Route04_Text_DaisyPostBattle::
	.string "My boyfriend Matt is training further\n"
	.string "down the beach. He says the sand is\l"
	.string "good for his calves, but I think he just\l"
	.string "likes the view.$"

Route04_Text_ZanderIntro::
	.string "I stepped off my ship to stretch my\n"
	.string "legs and found these two wriggling in\l"
	.string "the mud!$"

Route04_Text_ZanderDefeated::
	.string "Abandon ship! My fresh catch was not\n"
	.string "ready for battle.$"

Route04_Text_ZanderPostBattle::
	.string "The mud in these mangroves is thick and\n"
	.string "sticky. It is perfect for Barboach, but\l"
	.string "terrible for my boots.$"

Route04_Text_ArielleIntro::
	.string "Hey! You are blocking my view. I am\n"
	.string "trying to focus on that waterfall.$"

Route04_Text_ArielleDefeated::
	.string "My vision is blurry now...$"

Route04_Text_AriellePostBattle::
	.string "Look closely at the water crashing down\n"
	.string "in the distance. I swear I saw a shadow\l"
	.string "slip behind the curtain of water. Is\l"
	.string "there a cave entrance back there?$"

Route04_Text_ArchieIntro::
	.string "Fufufu! One day, the sea will cover\n"
	.string "everything, and I will be its king!\l"
	.string "Behold the power of the tides!$"

Route04_Text_ArchieDefeated::
	.string "Grrr! The land... it is too much land!$"

Route04_Text_ArchiePostBattle::
	.string "I am going to form a super cool team\n"
	.string "when I grow up. We will wear blue\l"
	.string "bandanas and worship the ancient gods\l"
	.string "of the sea! You will see!$"

Route04_Text_EdgardIntro::
	.string "Sacre bleu! Do not step on ze\n"
	.string "ingredients! I am looking for ze\l"
	.string "perfect catch for my bisque.$"

Route04_Text_EdgardDefeated::
	.string "My soufflé has collapsed!$"

Route04_Text_EdgardPostBattle::
	.string "Zis Qwilfish is exquisite, no? One must\n"
	.string "be very careful preparing it, or zap! Ze\l"
	.string "poison will get you. A true chef loves a\l"
	.string "little danger.$"
