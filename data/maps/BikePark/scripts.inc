BikePark_MapScripts::
	.byte 0


BikePark_BikeCheck::
# 4 "data/maps/BikePark/scripts.pory"
	lockall
# 5 "data/maps/BikePark/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 6 "data/maps/BikePark/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BikePark_BikeCheck_2
BikePark_BikeCheck_1:
# 9 "data/maps/BikePark/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 10 "data/maps/BikePark/scripts.pory"
	setvar VAR_TEMP_0, 1
# 11 "data/maps/BikePark/scripts.pory"
	releaseall
	end

BikePark_BikeCheck_2:
# 7 "data/maps/BikePark/scripts.pory"
	goto BikePark_BikeCheck_NoBike
	goto BikePark_BikeCheck_1


BikePark_BikeCheck_NoBike::
# 16 "data/maps/BikePark/scripts.pory"
	playse SE_PIN
# 17 "data/maps/BikePark/scripts.pory"
	applymovement 17, BikePark_BikeCheck_NoBike_Movement_0
# 18 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_BikeCheck_NoBike_Text_0, MSGBOX_AUTOCLOSE
# 19 "data/maps/BikePark/scripts.pory"
	waitmessage
# 20 "data/maps/BikePark/scripts.pory"
	applymovement LOCALID_PLAYER, BikePark_BikeCheck_NoBike_Movement_1
# 21 "data/maps/BikePark/scripts.pory"
	waitmovement
# 22 "data/maps/BikePark/scripts.pory"
	releaseall
	end


BikePark_ClearCyclingRoad::
# 27 "data/maps/BikePark/scripts.pory"
	lockall
# 28 "data/maps/BikePark/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 29 "data/maps/BikePark/scripts.pory"
	setvar VAR_TEMP_0, 0
# 30 "data/maps/BikePark/scripts.pory"
	releaseall
	end


BikePark_Npc_LegendWatcher::
# 35 "data/maps/BikePark/scripts.pory"
	lock
# 36 "data/maps/BikePark/scripts.pory"
	faceplayer
# 37 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_LegendWatcher_Text_0
# 38 "data/maps/BikePark/scripts.pory"
	waitmessage
# 39 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_LegendWatcher_Text_1
# 40 "data/maps/BikePark/scripts.pory"
	waitmessage
# 41 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_LegendWatcher_Text_2
# 42 "data/maps/BikePark/scripts.pory"
	waitmessage
# 43 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_LegendWatcher_Text_3, MSGBOX_AUTOCLOSE
# 44 "data/maps/BikePark/scripts.pory"
	waitmessage
# 45 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Npc_BikerKai::
# 50 "data/maps/BikePark/scripts.pory"
	lock
# 51 "data/maps/BikePark/scripts.pory"
	faceplayer
# 52 "data/maps/BikePark/scripts.pory"
	setspeaker BikePark_Npc_BikerKai_Text_0
# 53 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_BikerKai_Text_1
# 54 "data/maps/BikePark/scripts.pory"
	waitmessage
# 55 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Npc_BikerFinn::
# 60 "data/maps/BikePark/scripts.pory"
	lock
# 61 "data/maps/BikePark/scripts.pory"
	faceplayer
# 62 "data/maps/BikePark/scripts.pory"
	setspeaker BikePark_Npc_BikerFinn_Text_0
# 63 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_BikerFinn_Text_1
# 64 "data/maps/BikePark/scripts.pory"
	waitmessage
# 65 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Npc_BikerRox::
# 70 "data/maps/BikePark/scripts.pory"
	lock
# 71 "data/maps/BikePark/scripts.pory"
	faceplayer
# 72 "data/maps/BikePark/scripts.pory"
	setspeaker BikePark_Npc_BikerRox_Text_0
# 73 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_BikerRox_Text_1
# 74 "data/maps/BikePark/scripts.pory"
	waitmessage
# 75 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Npc_BikeWatcher::
# 80 "data/maps/BikePark/scripts.pory"
	lock
# 81 "data/maps/BikePark/scripts.pory"
	faceplayer
# 82 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_BikeWatcher_Text_0, MSGBOX_AUTOCLOSE
# 83 "data/maps/BikePark/scripts.pory"
	waitmessage
# 84 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Npc_RidgeRanger::
# 89 "data/maps/BikePark/scripts.pory"
	lock
# 90 "data/maps/BikePark/scripts.pory"
	faceplayer
# 91 "data/maps/BikePark/scripts.pory"
	setspeaker BikePark_Npc_RidgeRanger_Text_0
# 92 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_RidgeRanger_Text_1
# 93 "data/maps/BikePark/scripts.pory"
	waitmessage
# 94 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_RidgeRanger_Text_2, MSGBOX_AUTOCLOSE
# 95 "data/maps/BikePark/scripts.pory"
	waitmessage
# 96 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Trainer_Skye::
# 101 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_BIKER_FRLG_SKYE, BikePark_Text_SkyeIntro, BikePark_Text_SkyeDefeated
# 102 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_SkyePostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Wren::
# 119 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_F_WREN, BikePark_Text_WrenIntro, BikePark_Text_WrenDefeated
# 120 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_WrenPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Reed::
# 137 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_M_REED, BikePark_Text_ReedIntro, BikePark_Text_ReedDefeated
# 138 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_ReedPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Mira::
# 155 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_F_MIRA, BikePark_Text_MiraIntro, BikePark_Text_MiraDefeated
# 156 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_MiraPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Colt::
# 173 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_BIKER_FRLG_COLT, BikePark_Text_ColtIntro, BikePark_Text_ColtDefeated
# 174 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_ColtPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Pike::
# 191 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_M_PIKE, BikePark_Text_PikeIntro, BikePark_Text_PikeDefeated
# 192 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_PikePostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Lane::
# 209 "data/maps/BikePark/scripts.pory"
	trainerbattle_double TRAINER_INTERVIEWER_LANE, BikePark_Text_LaneIntro, BikePark_Text_LaneDefeated, BikePark_Text_LaneNotEnoughMons
# 210 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_LanePostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Sear::
# 231 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_BIKER_FRLG_SEAR, BikePark_Text_SearIntro, BikePark_Text_SearDefeated
# 232 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_SearPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Vela::
# 249 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_F_VELA, BikePark_Text_VelaIntro, BikePark_Text_VelaDefeated
# 250 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_VelaPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Holt::
# 267 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_M_HOLT, BikePark_Text_HoltIntro, BikePark_Text_HoltDefeated
# 268 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_HoltPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Grit::
# 285 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_BIKER_FRLG_GRIT, BikePark_Text_GritIntro, BikePark_Text_GritDefeated
# 286 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_GritPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Fern::
# 303 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_F_FERN, BikePark_Text_FernIntro, BikePark_Text_FernDefeated
# 304 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_FernPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Axel::
# 321 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_BIKER_FRLG_AXEL, BikePark_Text_AxelIntro, BikePark_Text_AxelDefeated
# 322 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_AxelPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Jude::
# 339 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_M_JUDE, BikePark_Text_JudeIntro, BikePark_Text_JudeDefeated
# 340 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_JudePostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Dune::
# 357 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_F_DUNE, BikePark_Text_DuneIntro, BikePark_Text_DuneDefeated
# 358 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_DunePostBattle, MSGBOX_AUTOCLOSE
	end


# 17 "data/maps/BikePark/scripts.pory"
BikePark_BikeCheck_NoBike_Movement_0:
# 17 "data/maps/BikePark/scripts.pory"
	emote_exclamation_mark
	step_end

# 20 "data/maps/BikePark/scripts.pory"
BikePark_BikeCheck_NoBike_Movement_1:
# 20 "data/maps/BikePark/scripts.pory"
	walk_left
	step_end

BikePark_BikeCheck_NoBike_Text_0:
# 18 "data/maps/BikePark/scripts.pory"
	.string "Whoa! This is a designated cycling\n"
	.string "route.\p"
	.string "For the safety of everyone on the\n"
	.string "ridge, you cannot proceed on foot.\p"
	.string "Please get on your bike first.$"

BikePark_Npc_LegendWatcher_Text_0:
# 37 "data/maps/BikePark/scripts.pory"
	.string "You know, there's a story about a rider\n"
	.string "who trained on this exact ridge.\p"
	.string "Red hair. Couldn't miss him.\p"
	.string "Three hours a day, five days a week, for\n"
	.string "six years straight.$"

BikePark_Npc_LegendWatcher_Text_1:
# 39 "data/maps/BikePark/scripts.pory"
	.string "Six years.\p"
	.string "I did the math once.\p"
	.string "That's over four thousand hours on a\n"
	.string "bike going downhill.\p"
	.string "On this hill.$"

BikePark_Npc_LegendWatcher_Text_2:
# 41 "data/maps/BikePark/scripts.pory"
	.string "Last I heard he still travels.\p"
	.string "Not on a bike anymore though.\p"
	.string "Some beat-up campervan.\p"
	.string "Occasionally turns up in his hometown.\p"
	.string "Apparently it only has one house.$"

BikePark_Npc_LegendWatcher_Text_3:
# 43 "data/maps/BikePark/scripts.pory"
	.string "...One house.\p"
	.string "...Four thousand hours on a bike.\p"
	.string "...I'm starting to think the riding didn't\n"
	.string "make him great.\p"
	.string "I'm starting to think it made him a\n"
	.string "little insane.$"

BikePark_Npc_BikerKai_Text_0:
# 52 "data/maps/BikePark/scripts.pory"
	.string "Biker Kai$"

BikePark_Npc_BikerKai_Text_1:
# 53 "data/maps/BikePark/scripts.pory"
	.string "Fastest on this ridge? That would be\n"
	.string "me.\p"
	.string "Finn tried to argue it last week.\p"
	.string "He stopped halfway down to adjust his\n"
	.string "gloves.\p"
	.string "Case closed.$"

BikePark_Npc_BikerFinn_Text_0:
# 62 "data/maps/BikePark/scripts.pory"
	.string "Biker Finn$"

BikePark_Npc_BikerFinn_Text_1:
# 63 "data/maps/BikePark/scripts.pory"
	.string "Don't let Kai tell you anything.\p"
	.string "He brakes before every bend. I've\n"
	.string "clocked it.\p"
	.string "Fastest downhill is whoever doesn't\n"
	.string "touch the brakes.\p"
	.string "That's me.$"

BikePark_Npc_BikerRox_Text_0:
# 72 "data/maps/BikePark/scripts.pory"
	.string "Biker Rox$"

BikePark_Npc_BikerRox_Text_1:
# 73 "data/maps/BikePark/scripts.pory"
	.string "Those two have been at this for a week.\p"
	.string "Neither of them has actually raced the\n"
	.string "other yet.\p"
	.string "I offered to time it. They both made\n"
	.string "excuses.\p"
	.string "...Fastest on this ridge is whoever's\n"
	.string "willing to actually go.$"

BikePark_Npc_BikeWatcher_Text_0:
# 82 "data/maps/BikePark/scripts.pory"
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
# 91 "data/maps/BikePark/scripts.pory"
	.string "Ranger Tove$"

BikePark_Npc_RidgeRanger_Text_1:
# 92 "data/maps/BikePark/scripts.pory"
	.string "Three years I've been watching this\n"
	.string "ridge.\p"
	.string "Gulliot, Taillow, Wingull - same crowd\n"
	.string "every season.\p"
	.string "But last month I spotted something on\n"
	.string "the southern outcrop.\p"
	.string "Orange. Small. Left a scorch mark on the\n"
	.string "rock when it took off.$"

BikePark_Npc_RidgeRanger_Text_2:
# 94 "data/maps/BikePark/scripts.pory"
	.string "Haven't seen it since.\p"
	.string "I'm not writing it in the report yet.$"

BikePark_Text_SkyeIntro::
# 106 "data/maps/BikePark/scripts.pory"
	.string "Every time I ride down here a whole\n"
	.string "flock joins me! Try and keep up!$"

BikePark_Text_SkyeDefeated::
# 110 "data/maps/BikePark/scripts.pory"
	.string "They flew ahead before the finish line...$"

BikePark_Text_SkyePostBattle::
# 114 "data/maps/BikePark/scripts.pory"
	.string "This ridge belongs to the birds. No\n"
	.string "predator can reach them up here.\p"
	.string "They own the airspace.$"

BikePark_Text_WrenIntro::
# 124 "data/maps/BikePark/scripts.pory"
	.string "Farfetch'd and I train this descent\n"
	.string "every day. You just stepped onto our\l"
	.string "track!$"

BikePark_Text_WrenDefeated::
# 128 "data/maps/BikePark/scripts.pory"
	.string "We'll add extra sprints to tomorrow's\n"
	.string "session.$"

BikePark_Text_WrenPostBattle::
# 132 "data/maps/BikePark/scripts.pory"
	.string "She holds that leek for balance on the\n"
	.string "slope. Never drops it. Not once.$"

BikePark_Text_ReedIntro::
# 142 "data/maps/BikePark/scripts.pory"
	.string "Nuzleaf loves the mountain air. So do I.\n"
	.string "Nothing like this ridge!$"

BikePark_Text_ReedDefeated::
# 146 "data/maps/BikePark/scripts.pory"
	.string "You've got some altitude in you.$"

BikePark_Text_ReedPostBattle::
# 150 "data/maps/BikePark/scripts.pory"
	.string "The elevation changes how Pokemon\n"
	.string "behave. Nuzleaf is calmer up here. More\l"
	.string "focused.$"

BikePark_Text_MiraIntro::
# 160 "data/maps/BikePark/scripts.pory"
	.string "Taillow rides the updrafts while Lombre\n"
	.string "handles the puddles at the bottom. This\l"
	.string "trail is ours!$"

BikePark_Text_MiraDefeated::
# 164 "data/maps/BikePark/scripts.pory"
	.string "You broke my rhythm!$"

BikePark_Text_MiraPostBattle::
# 168 "data/maps/BikePark/scripts.pory"
	.string "Something landed on my helmet halfway\n"
	.string "down.\p"
	.string "This ridge is full of birds. Bring a\n"
	.string "helmet, I'm serious.$"

BikePark_Text_ColtIntro::
# 178 "data/maps/BikePark/scripts.pory"
	.string "My Pidgeys fly escort while I go\n"
	.string "downhill. Fastest flock on the\l"
	.string "mountain!$"

BikePark_Text_ColtDefeated::
# 182 "data/maps/BikePark/scripts.pory"
	.string "They usually scare off the competition!$"

BikePark_Text_ColtPostBattle::
# 186 "data/maps/BikePark/scripts.pory"
	.string "Pidgeotto leads the formation. The two\n"
	.string "Pidgey keep pace.\p"
	.string "Works better than a bike computer.$"

BikePark_Text_PikeIntro::
# 196 "data/maps/BikePark/scripts.pory"
	.string "I train at dawn. My Pokemon see better\n"
	.string "in the dark than I ever could.$"

BikePark_Text_PikeDefeated::
# 200 "data/maps/BikePark/scripts.pory"
	.string "You've got good eyes for this hour.$"

BikePark_Text_PikePostBattle::
# 204 "data/maps/BikePark/scripts.pory"
	.string "Owls on a mountain ridge. The updrafts\n"
	.string "here are perfect for gliding at night.$"

BikePark_Text_LaneIntro::
# 214 "data/maps/BikePark/scripts.pory"
	.string "We're documenting the riders for a\n"
	.string "feature piece! A battle will make\l"
	.string "excellent footage!$"

BikePark_Text_LaneDefeated::
# 218 "data/maps/BikePark/scripts.pory"
	.string "Cut! That was NOT in the script!$"

BikePark_Text_LaneNotEnoughMons::
# 222 "data/maps/BikePark/scripts.pory"
	.string "You need at least two Pokemon for this\n"
	.string "segment!$"

BikePark_Text_LanePostBattle::
# 226 "data/maps/BikePark/scripts.pory"
	.string "The birds that live up here have\n"
	.string "extraordinary vision. They see\l"
	.string "everything on the ridge.\p"
	.string "So do we. That's why we came.$"

BikePark_Text_SearIntro::
# 236 "data/maps/BikePark/scripts.pory"
	.string "Combusken could outrun me uphill. Good\n"
	.string "thing we're going downhill!$"

BikePark_Text_SearDefeated::
# 240 "data/maps/BikePark/scripts.pory"
	.string "Blazing fast. Almost.$"

BikePark_Text_SearPostBattle::
# 244 "data/maps/BikePark/scripts.pory"
	.string "Fire-type birds very rarely nest here.\n"
	.string "But Combusken refused to leave the\l"
	.string "first time we came up.$"

BikePark_Text_VelaIntro::
# 254 "data/maps/BikePark/scripts.pory"
	.string "Murkrow keeps the other birds in line.\n"
	.string "That's how I like my trails: clear!$"

BikePark_Text_VelaDefeated::
# 258 "data/maps/BikePark/scripts.pory"
	.string "Nobody clears you for long.$"

BikePark_Text_VelaPostBattle::
# 262 "data/maps/BikePark/scripts.pory"
	.string "Snubbull and Murkrow are best friends.\n"
	.string "Everyone thinks it's weird. Everyone is\l"
	.string "wrong.$"

BikePark_Text_HoltIntro::
# 272 "data/maps/BikePark/scripts.pory"
	.string "Found these Kakuna clinging to the\n"
	.string "rock face. Waited all winter for them to\l"
	.string "hatch. Worth it!$"

BikePark_Text_HoltDefeated::
# 276 "data/maps/BikePark/scripts.pory"
	.string "You've got a good sting to you.$"

BikePark_Text_HoltPostBattle::
# 280 "data/maps/BikePark/scripts.pory"
	.string "Beedrill nest on the underside of the\n"
	.string "ledge here. Sheltered from wind.\p"
	.string "Safe from everything.$"

BikePark_Text_GritIntro::
# 290 "data/maps/BikePark/scripts.pory"
	.string "Trapinch on a mountain ridge? Don't\n"
	.string "underestimate us. We go hard downhill.$"

BikePark_Text_GritDefeated::
# 294 "data/maps/BikePark/scripts.pory"
	.string "Tougher than the gravel. Respect.$"

BikePark_Text_GritPostBattle::
# 298 "data/maps/BikePark/scripts.pory"
	.string "Trapinch bites through anything. Good\n"
	.string "motivation when the trail gets rough.$"

BikePark_Text_FernIntro::
# 308 "data/maps/BikePark/scripts.pory"
	.string "My Butterfree floats alongside me on\n"
	.string "the descent! Watch out though!$"

BikePark_Text_FernDefeated::
# 312 "data/maps/BikePark/scripts.pory"
	.string "You scattered my formation!$"

BikePark_Text_FernPostBattle::
# 316 "data/maps/BikePark/scripts.pory"
	.string "I carried these Metapod all the way up\n"
	.string "the mountain.\p"
	.string "The altitude speeds up the change.$"

BikePark_Text_AxelIntro::
# 326 "data/maps/BikePark/scripts.pory"
	.string "Ninjask moves faster than my tires.\n"
	.string "I've been chasing it all season!$"

BikePark_Text_AxelDefeated::
# 330 "data/maps/BikePark/scripts.pory"
	.string "Top speed wasn't enough!$"

BikePark_Text_AxelPostBattle::
# 334 "data/maps/BikePark/scripts.pory"
	.string "Koffing drifts upward, Ninjask shoots\n"
	.string "forward, I go downhill.\p"
	.string "Three directions, same team.$"

BikePark_Text_JudeIntro::
# 344 "data/maps/BikePark/scripts.pory"
	.string "I brought Makuhita up here to build\n"
	.string "endurance. Then I realized I needed it\l"
	.string "more.$"

BikePark_Text_JudeDefeated::
# 348 "data/maps/BikePark/scripts.pory"
	.string "More reps. Got it.$"

BikePark_Text_JudePostBattle::
# 352 "data/maps/BikePark/scripts.pory"
	.string "Distance, elevation, wind. Makuhita and\n"
	.string "I push through all of it.\p"
	.string "This ridge makes champions.$"

BikePark_Text_DuneIntro::
# 362 "data/maps/BikePark/scripts.pory"
	.string "The dry mountain air suits my\n"
	.string "ground-types perfectly. Now let's\l"
	.string "battle!$"

BikePark_Text_DuneDefeated::
# 366 "data/maps/BikePark/scripts.pory"
	.string "You ride harder than this trail.$"

BikePark_Text_DunePostBattle::
# 370 "data/maps/BikePark/scripts.pory"
	.string "Three runs in a row something has\n"
	.string "dropped on my head from above.\p"
	.string "No trees up here. It's the birds. It's\n"
	.string "always the birds.$"
