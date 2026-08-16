BikePark_MapScripts::
	.byte 0


BikePark_BikeCheck::
# 10 "data/maps/BikePark/scripts.pory"
	lockall
# 11 "data/maps/BikePark/scripts.pory"
	setvar VAR_TEMP_5, 0
# 12 "data/maps/BikePark/scripts.pory"
	special ForcePlayerOntoBike
# 13 "data/maps/BikePark/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 14 "data/maps/BikePark/scripts.pory"
	releaseall
	end


BikePark_EventScript_Route06ExitTrigger::
# 22 "data/maps/BikePark/scripts.pory"
	lockall
# 23 "data/maps/BikePark/scripts.pory"
	setvar VAR_TEMP_5, 0
# 24 "data/maps/BikePark/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 25 "data/maps/BikePark/scripts.pory"
	releaseall
	end


BikePark_EventScript_SteepDownhillSign::
# 30 "data/maps/BikePark/scripts.pory"
	lock
# 31 "data/maps/BikePark/scripts.pory"
	faceplayer
# 32 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_EventScript_SteepDownhillSign_Text_0, MSGBOX_DEFAULT
# 33 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_EventScript_BikeShopSign::
# 38 "data/maps/BikePark/scripts.pory"
	lock
# 39 "data/maps/BikePark/scripts.pory"
	faceplayer
# 40 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_EventScript_BikeShopSign_Text_0, MSGBOX_SIGN
# 41 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Npc_LegendWatcher::
# 46 "data/maps/BikePark/scripts.pory"
	lock
# 47 "data/maps/BikePark/scripts.pory"
	faceplayer
# 48 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_LegendWatcher_Text_0
# 49 "data/maps/BikePark/scripts.pory"
	waitmessage
# 50 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_LegendWatcher_Text_1
# 51 "data/maps/BikePark/scripts.pory"
	waitmessage
# 52 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_LegendWatcher_Text_2
# 53 "data/maps/BikePark/scripts.pory"
	waitmessage
# 54 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_LegendWatcher_Text_3, MSGBOX_AUTOCLOSE
# 55 "data/maps/BikePark/scripts.pory"
	waitmessage
# 56 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Npc_BikerKai::
# 61 "data/maps/BikePark/scripts.pory"
	lock
# 62 "data/maps/BikePark/scripts.pory"
	faceplayer
# 63 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_BikerKai_Text_0
# 64 "data/maps/BikePark/scripts.pory"
	waitmessage
# 65 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Npc_BikerFinn::
# 70 "data/maps/BikePark/scripts.pory"
	lock
# 71 "data/maps/BikePark/scripts.pory"
	faceplayer
# 72 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_BikerFinn_Text_0
# 73 "data/maps/BikePark/scripts.pory"
	waitmessage
# 74 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Npc_BikerRox::
# 79 "data/maps/BikePark/scripts.pory"
	lock
# 80 "data/maps/BikePark/scripts.pory"
	faceplayer
# 81 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_BikerRox_Text_0
# 82 "data/maps/BikePark/scripts.pory"
	waitmessage
# 83 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Npc_BikeWatcher::
# 88 "data/maps/BikePark/scripts.pory"
	lock
# 89 "data/maps/BikePark/scripts.pory"
	faceplayer
# 90 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_BikeWatcher_Text_0, MSGBOX_AUTOCLOSE
# 91 "data/maps/BikePark/scripts.pory"
	waitmessage
# 92 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Npc_RidgeRanger::
# 97 "data/maps/BikePark/scripts.pory"
	lock
# 98 "data/maps/BikePark/scripts.pory"
	faceplayer
# 99 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_RidgeRanger_Text_0
# 100 "data/maps/BikePark/scripts.pory"
	waitmessage
# 101 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_RidgeRanger_Text_1, MSGBOX_AUTOCLOSE
# 102 "data/maps/BikePark/scripts.pory"
	waitmessage
# 103 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Npc_Milo::
# 108 "data/maps/BikePark/scripts.pory"
	lock
# 109 "data/maps/BikePark/scripts.pory"
	faceplayer
# 110 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_Milo_Text_0, MSGBOX_AUTOCLOSE
# 111 "data/maps/BikePark/scripts.pory"
	waitmessage
# 112 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Trainer_Skye::
# 117 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_BIKER_FRLG_SKYE, BikePark_Text_SkyeIntro, BikePark_Text_SkyeDefeated
# 118 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_SkyePostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Wren::
# 135 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_F_WREN, BikePark_Text_WrenIntro, BikePark_Text_WrenDefeated
# 136 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_WrenPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Reed::
# 153 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_M_REED, BikePark_Text_ReedIntro, BikePark_Text_ReedDefeated
# 154 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_ReedPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Mira::
# 171 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_F_MIRA, BikePark_Text_MiraIntro, BikePark_Text_MiraDefeated
# 172 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_MiraPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Colt::
# 189 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_BIKER_FRLG_COLT, BikePark_Text_ColtIntro, BikePark_Text_ColtDefeated
# 190 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_ColtPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Pike::
# 207 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_M_PIKE, BikePark_Text_PikeIntro, BikePark_Text_PikeDefeated
# 208 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_PikePostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Lane::
# 225 "data/maps/BikePark/scripts.pory"
	trainerbattle_double TRAINER_INTERVIEWER_LANE, BikePark_Text_LaneIntro, BikePark_Text_LaneDefeated, BikePark_Text_LaneNotEnoughMons
# 226 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_LanePostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Sear::
# 247 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_BIKER_FRLG_SEAR, BikePark_Text_SearIntro, BikePark_Text_SearDefeated
# 248 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_SearPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Vela::
# 265 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_F_VELA, BikePark_Text_VelaIntro, BikePark_Text_VelaDefeated
# 266 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_VelaPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Holt::
# 283 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_M_HOLT, BikePark_Text_HoltIntro, BikePark_Text_HoltDefeated
# 284 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_HoltPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Grit::
# 301 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_BIKER_FRLG_GRIT, BikePark_Text_GritIntro, BikePark_Text_GritDefeated
# 302 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_GritPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Fern::
# 319 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_F_FERN, BikePark_Text_FernIntro, BikePark_Text_FernDefeated
# 320 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_FernPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Axel::
# 337 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_BIKER_FRLG_AXEL, BikePark_Text_AxelIntro, BikePark_Text_AxelDefeated
# 338 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_AxelPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Jude::
# 355 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_M_JUDE, BikePark_Text_JudeIntro, BikePark_Text_JudeDefeated
# 356 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_JudePostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Dune::
# 373 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_F_DUNE, BikePark_Text_DuneIntro, BikePark_Text_DuneDefeated
# 374 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_DunePostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_EventScript_SteepDownhillSign_Text_0:
# 32 "data/maps/BikePark/scripts.pory"
	.string "!!{DOWN_ARROW} DANGER!!\p"
	.string "Only enter downhill with proper bike and\n"
	.string "experience required.\p"
	.string "Very steep.$"

BikePark_EventScript_BikeShopSign_Text_0:
# 40 "data/maps/BikePark/scripts.pory"
	.string "Mr. Kasmi's Bikeshop$"

BikePark_Npc_LegendWatcher_Text_0:
# 48 "data/maps/BikePark/scripts.pory"
	.string "You know, there's a story about a rider\n"
	.string "who trained on this exact ridge.\p"
	.string "Red hair. Couldn't miss him.\p"
	.string "Three hours a day, five days a week, for\n"
	.string "six years straight.$"

BikePark_Npc_LegendWatcher_Text_1:
# 50 "data/maps/BikePark/scripts.pory"
	.string "Six years.\p"
	.string "I did the math once.\p"
	.string "That's over four thousand hours on a\n"
	.string "bike going downhill.\p"
	.string "On this hill.$"

BikePark_Npc_LegendWatcher_Text_2:
# 52 "data/maps/BikePark/scripts.pory"
	.string "Last I heard he still travels.\p"
	.string "Not on a bike anymore though.\p"
	.string "Some beat-up campervan.\p"
	.string "Occasionally turns up in his hometown.\p"
	.string "Apparently it only has one house.$"

BikePark_Npc_LegendWatcher_Text_3:
# 54 "data/maps/BikePark/scripts.pory"
	.string "...One house.\p"
	.string "...Four thousand hours on a bike.\p"
	.string "...I'm starting to think the riding didn't\n"
	.string "make him great.\p"
	.string "I'm starting to think it made him a\n"
	.string "little insane.$"

BikePark_Npc_BikerKai_Text_0:
# 63 "data/maps/BikePark/scripts.pory"
	.string "Fastest on this ridge? That would be\n"
	.string "me.\p"
	.string "Finn tried to argue it last week.\p"
	.string "He stopped halfway down to adjust his\n"
	.string "gloves.\p"
	.string "Case closed.$"

BikePark_Npc_BikerFinn_Text_0:
# 72 "data/maps/BikePark/scripts.pory"
	.string "Don't let Kai tell you anything.\p"
	.string "He brakes before every bend. I've\n"
	.string "clocked it.\p"
	.string "Fastest downhill is whoever doesn't\n"
	.string "touch the brakes.\p"
	.string "That's me.$"

BikePark_Npc_BikerRox_Text_0:
# 81 "data/maps/BikePark/scripts.pory"
	.string "Those two have been at this for a week.\p"
	.string "Neither of them has actually raced the\n"
	.string "other yet.\p"
	.string "I offered to time it. They both made\n"
	.string "excuses.\p"
	.string "...Fastest on this ridge is whoever's\n"
	.string "willing to actually go.$"

BikePark_Npc_BikeWatcher_Text_0:
# 90 "data/maps/BikePark/scripts.pory"
	.string "These bikes have been parked here a\n"
	.string "while...\p"
	.string "The red one looks quick but the brakes\n"
	.string "are worn.\p"
	.string "The blue one has better geometry but\n"
	.string "the saddle's too low.\p"
	.string "The yellow one in the back...\p"
	.string "...actually, I think that one might be\n"
	.string "stolen.\p"
	.string "I'll keep watching.$"

BikePark_Npc_RidgeRanger_Text_0:
# 99 "data/maps/BikePark/scripts.pory"
	.string "Three years I've been watching this\n"
	.string "ridge.\p"
	.string "Gulliot, Taillow, Wingull - same crowd\n"
	.string "every season.\p"
	.string "But last month I spotted something on\n"
	.string "the southern outcrop.\p"
	.string "Orange. Small. Left a scorch mark on the\n"
	.string "rock when it took off.$"

BikePark_Npc_RidgeRanger_Text_1:
# 101 "data/maps/BikePark/scripts.pory"
	.string "Haven't seen it since.\p"
	.string "I'm not writing it in the report yet.$"

BikePark_Npc_Milo_Text_0:
# 110 "data/maps/BikePark/scripts.pory"
	.string "That drop right there? I've been\n"
	.string "meaning to ride it all week.\p"
	.string "Just waiting on the right gear. Wrong\n"
	.string "tires for that grade. Wrong suspension\l"
	.string "too, honestly.$"

BikePark_Text_SkyeIntro::
# 122 "data/maps/BikePark/scripts.pory"
	.string "Every time I ride down here a whole\n"
	.string "flock joins me! Try and keep up!$"

BikePark_Text_SkyeDefeated::
# 126 "data/maps/BikePark/scripts.pory"
	.string "They flew ahead before the finish line...$"

BikePark_Text_SkyePostBattle::
# 130 "data/maps/BikePark/scripts.pory"
	.string "This ridge belongs to the birds. No\n"
	.string "predator can reach them up here.\p"
	.string "They own the airspace.$"

BikePark_Text_WrenIntro::
# 140 "data/maps/BikePark/scripts.pory"
	.string "Farfetch'd and I train this descent\n"
	.string "every day. You just stepped onto our\l"
	.string "track!$"

BikePark_Text_WrenDefeated::
# 144 "data/maps/BikePark/scripts.pory"
	.string "We'll add extra sprints to tomorrow's\n"
	.string "session.$"

BikePark_Text_WrenPostBattle::
# 148 "data/maps/BikePark/scripts.pory"
	.string "She holds that leek for balance on the\n"
	.string "slope. Never drops it. Not once.$"

BikePark_Text_ReedIntro::
# 158 "data/maps/BikePark/scripts.pory"
	.string "Nuzleaf loves the mountain air. So do I.\n"
	.string "Nothing like this ridge!$"

BikePark_Text_ReedDefeated::
# 162 "data/maps/BikePark/scripts.pory"
	.string "You've got some altitude in you.$"

BikePark_Text_ReedPostBattle::
# 166 "data/maps/BikePark/scripts.pory"
	.string "The elevation changes how Pokemon\n"
	.string "behave. Nuzleaf is calmer up here. More\l"
	.string "focused.$"

BikePark_Text_MiraIntro::
# 176 "data/maps/BikePark/scripts.pory"
	.string "Taillow rides the updrafts while Lombre\n"
	.string "handles the puddles at the bottom. This\l"
	.string "trail is ours!$"

BikePark_Text_MiraDefeated::
# 180 "data/maps/BikePark/scripts.pory"
	.string "You broke my rhythm!$"

BikePark_Text_MiraPostBattle::
# 184 "data/maps/BikePark/scripts.pory"
	.string "Something landed on my helmet halfway\n"
	.string "down.\p"
	.string "This ridge is full of birds. Bring a\n"
	.string "helmet, I'm serious.$"

BikePark_Text_ColtIntro::
# 194 "data/maps/BikePark/scripts.pory"
	.string "My Pidgeys fly escort while I go\n"
	.string "downhill. Fastest flock on the\l"
	.string "mountain!$"

BikePark_Text_ColtDefeated::
# 198 "data/maps/BikePark/scripts.pory"
	.string "They usually scare off the competition!$"

BikePark_Text_ColtPostBattle::
# 202 "data/maps/BikePark/scripts.pory"
	.string "Pidgeotto leads the formation. The two\n"
	.string "Pidgey keep pace.\p"
	.string "Works better than a bike computer.$"

BikePark_Text_PikeIntro::
# 212 "data/maps/BikePark/scripts.pory"
	.string "I train at dawn. My Pokemon see better\n"
	.string "in the dark than I ever could.$"

BikePark_Text_PikeDefeated::
# 216 "data/maps/BikePark/scripts.pory"
	.string "You've got good eyes for this hour.$"

BikePark_Text_PikePostBattle::
# 220 "data/maps/BikePark/scripts.pory"
	.string "Owls on a mountain ridge. The updrafts\n"
	.string "here are perfect for gliding at night.$"

BikePark_Text_LaneIntro::
# 230 "data/maps/BikePark/scripts.pory"
	.string "We're documenting the riders for a\n"
	.string "feature piece! A battle will make\l"
	.string "excellent footage!$"

BikePark_Text_LaneDefeated::
# 234 "data/maps/BikePark/scripts.pory"
	.string "Cut! That was NOT in the script!$"

BikePark_Text_LaneNotEnoughMons::
# 238 "data/maps/BikePark/scripts.pory"
	.string "You need at least two Pokemon for this\n"
	.string "segment!$"

BikePark_Text_LanePostBattle::
# 242 "data/maps/BikePark/scripts.pory"
	.string "The birds that live up here have\n"
	.string "extraordinary vision. They see\l"
	.string "everything on the ridge.\p"
	.string "So do we. That's why we came.$"

BikePark_Text_SearIntro::
# 252 "data/maps/BikePark/scripts.pory"
	.string "Combusken could outrun me uphill. Good\n"
	.string "thing we're going downhill!$"

BikePark_Text_SearDefeated::
# 256 "data/maps/BikePark/scripts.pory"
	.string "Blazing fast. Almost.$"

BikePark_Text_SearPostBattle::
# 260 "data/maps/BikePark/scripts.pory"
	.string "Fire-type birds very rarely nest here.\n"
	.string "But Combusken refused to leave the\l"
	.string "first time we came up.$"

BikePark_Text_VelaIntro::
# 270 "data/maps/BikePark/scripts.pory"
	.string "Murkrow keeps the other birds in line.\n"
	.string "That's how I like my trails: clear!$"

BikePark_Text_VelaDefeated::
# 274 "data/maps/BikePark/scripts.pory"
	.string "Nobody clears you for long.$"

BikePark_Text_VelaPostBattle::
# 278 "data/maps/BikePark/scripts.pory"
	.string "Snubbull and Murkrow are best friends.\n"
	.string "Everyone thinks it's weird. Everyone is\l"
	.string "wrong.$"

BikePark_Text_HoltIntro::
# 288 "data/maps/BikePark/scripts.pory"
	.string "Found these Kakuna clinging to the\n"
	.string "rock face. Waited all winter for them to\l"
	.string "hatch. Worth it!$"

BikePark_Text_HoltDefeated::
# 292 "data/maps/BikePark/scripts.pory"
	.string "You've got a good sting to you.$"

BikePark_Text_HoltPostBattle::
# 296 "data/maps/BikePark/scripts.pory"
	.string "Beedrill nest on the underside of the\n"
	.string "ledge here. Sheltered from wind.\p"
	.string "Safe from everything.$"

BikePark_Text_GritIntro::
# 306 "data/maps/BikePark/scripts.pory"
	.string "Trapinch on a mountain ridge? Don't\n"
	.string "underestimate us. We go hard downhill.$"

BikePark_Text_GritDefeated::
# 310 "data/maps/BikePark/scripts.pory"
	.string "Tougher than the gravel. Respect.$"

BikePark_Text_GritPostBattle::
# 314 "data/maps/BikePark/scripts.pory"
	.string "Trapinch bites through anything. Good\n"
	.string "motivation when the trail gets rough.$"

BikePark_Text_FernIntro::
# 324 "data/maps/BikePark/scripts.pory"
	.string "My Butterfree floats alongside me on\n"
	.string "the descent! Watch out though!$"

BikePark_Text_FernDefeated::
# 328 "data/maps/BikePark/scripts.pory"
	.string "You scattered my formation!$"

BikePark_Text_FernPostBattle::
# 332 "data/maps/BikePark/scripts.pory"
	.string "I carried these Metapod all the way up\n"
	.string "the mountain.\p"
	.string "The altitude speeds up the change.$"

BikePark_Text_AxelIntro::
# 342 "data/maps/BikePark/scripts.pory"
	.string "Ninjask moves faster than my tires.\n"
	.string "I've been chasing it all season!$"

BikePark_Text_AxelDefeated::
# 346 "data/maps/BikePark/scripts.pory"
	.string "Top speed wasn't enough!$"

BikePark_Text_AxelPostBattle::
# 350 "data/maps/BikePark/scripts.pory"
	.string "Koffing drifts upward, Ninjask shoots\n"
	.string "forward, I go downhill.\p"
	.string "Three directions, same team.$"

BikePark_Text_JudeIntro::
# 360 "data/maps/BikePark/scripts.pory"
	.string "I brought Makuhita up here to build\n"
	.string "endurance. Then I realized I needed it\l"
	.string "more.$"

BikePark_Text_JudeDefeated::
# 364 "data/maps/BikePark/scripts.pory"
	.string "More reps. Got it.$"

BikePark_Text_JudePostBattle::
# 368 "data/maps/BikePark/scripts.pory"
	.string "Distance, elevation, wind. Makuhita and\n"
	.string "I push through all of it.\p"
	.string "This ridge makes champions.$"

BikePark_Text_DuneIntro::
# 378 "data/maps/BikePark/scripts.pory"
	.string "The dry mountain air suits my\n"
	.string "ground-types perfectly. Now let's\l"
	.string "battle!$"

BikePark_Text_DuneDefeated::
# 382 "data/maps/BikePark/scripts.pory"
	.string "You ride harder than this trail.$"

BikePark_Text_DunePostBattle::
# 386 "data/maps/BikePark/scripts.pory"
	.string "Three runs in a row something has\n"
	.string "dropped on my head from above.\p"
	.string "No trees up here. It's the birds. It's\n"
	.string "always the birds.$"
