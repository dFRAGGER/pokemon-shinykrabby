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


BikePark_EventScript_SteepDownhillSign::
# 35 "data/maps/BikePark/scripts.pory"
	lock
# 36 "data/maps/BikePark/scripts.pory"
	faceplayer
# 37 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_EventScript_SteepDownhillSign_Text_0, MSGBOX_DEFAULT
# 38 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_EventScript_BikeShopSign::
# 43 "data/maps/BikePark/scripts.pory"
	lock
# 44 "data/maps/BikePark/scripts.pory"
	faceplayer
# 45 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_EventScript_BikeShopSign_Text_0, MSGBOX_SIGN
# 46 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Npc_LegendWatcher::
# 51 "data/maps/BikePark/scripts.pory"
	lock
# 52 "data/maps/BikePark/scripts.pory"
	faceplayer
# 53 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_LegendWatcher_Text_0
# 54 "data/maps/BikePark/scripts.pory"
	waitmessage
# 55 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_LegendWatcher_Text_1
# 56 "data/maps/BikePark/scripts.pory"
	waitmessage
# 57 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_LegendWatcher_Text_2
# 58 "data/maps/BikePark/scripts.pory"
	waitmessage
# 59 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_LegendWatcher_Text_3, MSGBOX_AUTOCLOSE
# 60 "data/maps/BikePark/scripts.pory"
	waitmessage
# 61 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Npc_BikerKai::
# 66 "data/maps/BikePark/scripts.pory"
	lock
# 67 "data/maps/BikePark/scripts.pory"
	faceplayer
# 68 "data/maps/BikePark/scripts.pory"
	setspeaker BikePark_Npc_BikerKai_Text_0
# 69 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_BikerKai_Text_1
# 70 "data/maps/BikePark/scripts.pory"
	waitmessage
# 71 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Npc_BikerFinn::
# 76 "data/maps/BikePark/scripts.pory"
	lock
# 77 "data/maps/BikePark/scripts.pory"
	faceplayer
# 78 "data/maps/BikePark/scripts.pory"
	setspeaker BikePark_Npc_BikerFinn_Text_0
# 79 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_BikerFinn_Text_1
# 80 "data/maps/BikePark/scripts.pory"
	waitmessage
# 81 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Npc_BikerRox::
# 86 "data/maps/BikePark/scripts.pory"
	lock
# 87 "data/maps/BikePark/scripts.pory"
	faceplayer
# 88 "data/maps/BikePark/scripts.pory"
	setspeaker BikePark_Npc_BikerRox_Text_0
# 89 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_BikerRox_Text_1
# 90 "data/maps/BikePark/scripts.pory"
	waitmessage
# 91 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Npc_BikeWatcher::
# 96 "data/maps/BikePark/scripts.pory"
	lock
# 97 "data/maps/BikePark/scripts.pory"
	faceplayer
# 98 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_BikeWatcher_Text_0, MSGBOX_AUTOCLOSE
# 99 "data/maps/BikePark/scripts.pory"
	waitmessage
# 100 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Npc_RidgeRanger::
# 105 "data/maps/BikePark/scripts.pory"
	lock
# 106 "data/maps/BikePark/scripts.pory"
	faceplayer
# 107 "data/maps/BikePark/scripts.pory"
	setspeaker BikePark_Npc_RidgeRanger_Text_0
# 108 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_RidgeRanger_Text_1
# 109 "data/maps/BikePark/scripts.pory"
	waitmessage
# 110 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_RidgeRanger_Text_2, MSGBOX_AUTOCLOSE
# 111 "data/maps/BikePark/scripts.pory"
	waitmessage
# 112 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Npc_Milo::
# 117 "data/maps/BikePark/scripts.pory"
	lock
# 118 "data/maps/BikePark/scripts.pory"
	faceplayer
# 119 "data/maps/BikePark/scripts.pory"
	setspeaker BikePark_Npc_Milo_Text_0
# 120 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Npc_Milo_Text_1, MSGBOX_AUTOCLOSE
# 121 "data/maps/BikePark/scripts.pory"
	waitmessage
# 122 "data/maps/BikePark/scripts.pory"
	release
	end


BikePark_Trainer_Skye::
# 127 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_BIKER_FRLG_SKYE, BikePark_Text_SkyeIntro, BikePark_Text_SkyeDefeated
# 128 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_SkyePostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Wren::
# 145 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_F_WREN, BikePark_Text_WrenIntro, BikePark_Text_WrenDefeated
# 146 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_WrenPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Reed::
# 163 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_M_REED, BikePark_Text_ReedIntro, BikePark_Text_ReedDefeated
# 164 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_ReedPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Mira::
# 181 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_F_MIRA, BikePark_Text_MiraIntro, BikePark_Text_MiraDefeated
# 182 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_MiraPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Colt::
# 199 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_BIKER_FRLG_COLT, BikePark_Text_ColtIntro, BikePark_Text_ColtDefeated
# 200 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_ColtPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Pike::
# 217 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_M_PIKE, BikePark_Text_PikeIntro, BikePark_Text_PikeDefeated
# 218 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_PikePostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Lane::
# 235 "data/maps/BikePark/scripts.pory"
	trainerbattle_double TRAINER_INTERVIEWER_LANE, BikePark_Text_LaneIntro, BikePark_Text_LaneDefeated, BikePark_Text_LaneNotEnoughMons
# 236 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_LanePostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Sear::
# 257 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_BIKER_FRLG_SEAR, BikePark_Text_SearIntro, BikePark_Text_SearDefeated
# 258 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_SearPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Vela::
# 275 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_F_VELA, BikePark_Text_VelaIntro, BikePark_Text_VelaDefeated
# 276 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_VelaPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Holt::
# 293 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_M_HOLT, BikePark_Text_HoltIntro, BikePark_Text_HoltDefeated
# 294 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_HoltPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Grit::
# 311 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_BIKER_FRLG_GRIT, BikePark_Text_GritIntro, BikePark_Text_GritDefeated
# 312 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_GritPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Fern::
# 329 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_F_FERN, BikePark_Text_FernIntro, BikePark_Text_FernDefeated
# 330 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_FernPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Axel::
# 347 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_BIKER_FRLG_AXEL, BikePark_Text_AxelIntro, BikePark_Text_AxelDefeated
# 348 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_AxelPostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Jude::
# 365 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_M_JUDE, BikePark_Text_JudeIntro, BikePark_Text_JudeDefeated
# 366 "data/maps/BikePark/scripts.pory"
	msgbox BikePark_Text_JudePostBattle, MSGBOX_AUTOCLOSE
	end


BikePark_Trainer_Dune::
# 383 "data/maps/BikePark/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLETE_F_DUNE, BikePark_Text_DuneIntro, BikePark_Text_DuneDefeated
# 384 "data/maps/BikePark/scripts.pory"
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

BikePark_EventScript_SteepDownhillSign_Text_0:
# 37 "data/maps/BikePark/scripts.pory"
	.string "!!{DOWN_ARROW} DANGER!!\p"
	.string "Only enter downhill with proper bike and\n"
	.string "experience required.\p"
	.string "Very steep.$"

BikePark_EventScript_BikeShopSign_Text_0:
# 45 "data/maps/BikePark/scripts.pory"
	.string "Mr. Kasmi's Bikeshop$"

BikePark_Npc_LegendWatcher_Text_0:
# 53 "data/maps/BikePark/scripts.pory"
	.string "You know, there's a story about a rider\n"
	.string "who trained on this exact ridge.\p"
	.string "Red hair. Couldn't miss him.\p"
	.string "Three hours a day, five days a week, for\n"
	.string "six years straight.$"

BikePark_Npc_LegendWatcher_Text_1:
# 55 "data/maps/BikePark/scripts.pory"
	.string "Six years.\p"
	.string "I did the math once.\p"
	.string "That's over four thousand hours on a\n"
	.string "bike going downhill.\p"
	.string "On this hill.$"

BikePark_Npc_LegendWatcher_Text_2:
# 57 "data/maps/BikePark/scripts.pory"
	.string "Last I heard he still travels.\p"
	.string "Not on a bike anymore though.\p"
	.string "Some beat-up campervan.\p"
	.string "Occasionally turns up in his hometown.\p"
	.string "Apparently it only has one house.$"

BikePark_Npc_LegendWatcher_Text_3:
# 59 "data/maps/BikePark/scripts.pory"
	.string "...One house.\p"
	.string "...Four thousand hours on a bike.\p"
	.string "...I'm starting to think the riding didn't\n"
	.string "make him great.\p"
	.string "I'm starting to think it made him a\n"
	.string "little insane.$"

BikePark_Npc_BikerKai_Text_0:
# 68 "data/maps/BikePark/scripts.pory"
	.string "Biker Kai$"

BikePark_Npc_BikerKai_Text_1:
# 69 "data/maps/BikePark/scripts.pory"
	.string "Fastest on this ridge? That would be\n"
	.string "me.\p"
	.string "Finn tried to argue it last week.\p"
	.string "He stopped halfway down to adjust his\n"
	.string "gloves.\p"
	.string "Case closed.$"

BikePark_Npc_BikerFinn_Text_0:
# 78 "data/maps/BikePark/scripts.pory"
	.string "Biker Finn$"

BikePark_Npc_BikerFinn_Text_1:
# 79 "data/maps/BikePark/scripts.pory"
	.string "Don't let Kai tell you anything.\p"
	.string "He brakes before every bend. I've\n"
	.string "clocked it.\p"
	.string "Fastest downhill is whoever doesn't\n"
	.string "touch the brakes.\p"
	.string "That's me.$"

BikePark_Npc_BikerRox_Text_0:
# 88 "data/maps/BikePark/scripts.pory"
	.string "Biker Rox$"

BikePark_Npc_BikerRox_Text_1:
# 89 "data/maps/BikePark/scripts.pory"
	.string "Those two have been at this for a week.\p"
	.string "Neither of them has actually raced the\n"
	.string "other yet.\p"
	.string "I offered to time it. They both made\n"
	.string "excuses.\p"
	.string "...Fastest on this ridge is whoever's\n"
	.string "willing to actually go.$"

BikePark_Npc_BikeWatcher_Text_0:
# 98 "data/maps/BikePark/scripts.pory"
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
# 107 "data/maps/BikePark/scripts.pory"
	.string "Ranger Tove$"

BikePark_Npc_RidgeRanger_Text_1:
# 108 "data/maps/BikePark/scripts.pory"
	.string "Three years I've been watching this\n"
	.string "ridge.\p"
	.string "Gulliot, Taillow, Wingull - same crowd\n"
	.string "every season.\p"
	.string "But last month I spotted something on\n"
	.string "the southern outcrop.\p"
	.string "Orange. Small. Left a scorch mark on the\n"
	.string "rock when it took off.$"

BikePark_Npc_RidgeRanger_Text_2:
# 110 "data/maps/BikePark/scripts.pory"
	.string "Haven't seen it since.\p"
	.string "I'm not writing it in the report yet.$"

BikePark_Npc_Milo_Text_0:
# 119 "data/maps/BikePark/scripts.pory"
	.string "Milo$"

BikePark_Npc_Milo_Text_1:
# 120 "data/maps/BikePark/scripts.pory"
	.string "That drop right there? I've been\n"
	.string "meaning to ride it all week.\p"
	.string "Just waiting on the right gear. Wrong\n"
	.string "tires for that grade. Wrong suspension\l"
	.string "too, honestly.$"

BikePark_Text_SkyeIntro::
# 132 "data/maps/BikePark/scripts.pory"
	.string "Every time I ride down here a whole\n"
	.string "flock joins me! Try and keep up!$"

BikePark_Text_SkyeDefeated::
# 136 "data/maps/BikePark/scripts.pory"
	.string "They flew ahead before the finish line...$"

BikePark_Text_SkyePostBattle::
# 140 "data/maps/BikePark/scripts.pory"
	.string "This ridge belongs to the birds. No\n"
	.string "predator can reach them up here.\p"
	.string "They own the airspace.$"

BikePark_Text_WrenIntro::
# 150 "data/maps/BikePark/scripts.pory"
	.string "Farfetch'd and I train this descent\n"
	.string "every day. You just stepped onto our\l"
	.string "track!$"

BikePark_Text_WrenDefeated::
# 154 "data/maps/BikePark/scripts.pory"
	.string "We'll add extra sprints to tomorrow's\n"
	.string "session.$"

BikePark_Text_WrenPostBattle::
# 158 "data/maps/BikePark/scripts.pory"
	.string "She holds that leek for balance on the\n"
	.string "slope. Never drops it. Not once.$"

BikePark_Text_ReedIntro::
# 168 "data/maps/BikePark/scripts.pory"
	.string "Nuzleaf loves the mountain air. So do I.\n"
	.string "Nothing like this ridge!$"

BikePark_Text_ReedDefeated::
# 172 "data/maps/BikePark/scripts.pory"
	.string "You've got some altitude in you.$"

BikePark_Text_ReedPostBattle::
# 176 "data/maps/BikePark/scripts.pory"
	.string "The elevation changes how Pokemon\n"
	.string "behave. Nuzleaf is calmer up here. More\l"
	.string "focused.$"

BikePark_Text_MiraIntro::
# 186 "data/maps/BikePark/scripts.pory"
	.string "Taillow rides the updrafts while Lombre\n"
	.string "handles the puddles at the bottom. This\l"
	.string "trail is ours!$"

BikePark_Text_MiraDefeated::
# 190 "data/maps/BikePark/scripts.pory"
	.string "You broke my rhythm!$"

BikePark_Text_MiraPostBattle::
# 194 "data/maps/BikePark/scripts.pory"
	.string "Something landed on my helmet halfway\n"
	.string "down.\p"
	.string "This ridge is full of birds. Bring a\n"
	.string "helmet, I'm serious.$"

BikePark_Text_ColtIntro::
# 204 "data/maps/BikePark/scripts.pory"
	.string "My Pidgeys fly escort while I go\n"
	.string "downhill. Fastest flock on the\l"
	.string "mountain!$"

BikePark_Text_ColtDefeated::
# 208 "data/maps/BikePark/scripts.pory"
	.string "They usually scare off the competition!$"

BikePark_Text_ColtPostBattle::
# 212 "data/maps/BikePark/scripts.pory"
	.string "Pidgeotto leads the formation. The two\n"
	.string "Pidgey keep pace.\p"
	.string "Works better than a bike computer.$"

BikePark_Text_PikeIntro::
# 222 "data/maps/BikePark/scripts.pory"
	.string "I train at dawn. My Pokemon see better\n"
	.string "in the dark than I ever could.$"

BikePark_Text_PikeDefeated::
# 226 "data/maps/BikePark/scripts.pory"
	.string "You've got good eyes for this hour.$"

BikePark_Text_PikePostBattle::
# 230 "data/maps/BikePark/scripts.pory"
	.string "Owls on a mountain ridge. The updrafts\n"
	.string "here are perfect for gliding at night.$"

BikePark_Text_LaneIntro::
# 240 "data/maps/BikePark/scripts.pory"
	.string "We're documenting the riders for a\n"
	.string "feature piece! A battle will make\l"
	.string "excellent footage!$"

BikePark_Text_LaneDefeated::
# 244 "data/maps/BikePark/scripts.pory"
	.string "Cut! That was NOT in the script!$"

BikePark_Text_LaneNotEnoughMons::
# 248 "data/maps/BikePark/scripts.pory"
	.string "You need at least two Pokemon for this\n"
	.string "segment!$"

BikePark_Text_LanePostBattle::
# 252 "data/maps/BikePark/scripts.pory"
	.string "The birds that live up here have\n"
	.string "extraordinary vision. They see\l"
	.string "everything on the ridge.\p"
	.string "So do we. That's why we came.$"

BikePark_Text_SearIntro::
# 262 "data/maps/BikePark/scripts.pory"
	.string "Combusken could outrun me uphill. Good\n"
	.string "thing we're going downhill!$"

BikePark_Text_SearDefeated::
# 266 "data/maps/BikePark/scripts.pory"
	.string "Blazing fast. Almost.$"

BikePark_Text_SearPostBattle::
# 270 "data/maps/BikePark/scripts.pory"
	.string "Fire-type birds very rarely nest here.\n"
	.string "But Combusken refused to leave the\l"
	.string "first time we came up.$"

BikePark_Text_VelaIntro::
# 280 "data/maps/BikePark/scripts.pory"
	.string "Murkrow keeps the other birds in line.\n"
	.string "That's how I like my trails: clear!$"

BikePark_Text_VelaDefeated::
# 284 "data/maps/BikePark/scripts.pory"
	.string "Nobody clears you for long.$"

BikePark_Text_VelaPostBattle::
# 288 "data/maps/BikePark/scripts.pory"
	.string "Snubbull and Murkrow are best friends.\n"
	.string "Everyone thinks it's weird. Everyone is\l"
	.string "wrong.$"

BikePark_Text_HoltIntro::
# 298 "data/maps/BikePark/scripts.pory"
	.string "Found these Kakuna clinging to the\n"
	.string "rock face. Waited all winter for them to\l"
	.string "hatch. Worth it!$"

BikePark_Text_HoltDefeated::
# 302 "data/maps/BikePark/scripts.pory"
	.string "You've got a good sting to you.$"

BikePark_Text_HoltPostBattle::
# 306 "data/maps/BikePark/scripts.pory"
	.string "Beedrill nest on the underside of the\n"
	.string "ledge here. Sheltered from wind.\p"
	.string "Safe from everything.$"

BikePark_Text_GritIntro::
# 316 "data/maps/BikePark/scripts.pory"
	.string "Trapinch on a mountain ridge? Don't\n"
	.string "underestimate us. We go hard downhill.$"

BikePark_Text_GritDefeated::
# 320 "data/maps/BikePark/scripts.pory"
	.string "Tougher than the gravel. Respect.$"

BikePark_Text_GritPostBattle::
# 324 "data/maps/BikePark/scripts.pory"
	.string "Trapinch bites through anything. Good\n"
	.string "motivation when the trail gets rough.$"

BikePark_Text_FernIntro::
# 334 "data/maps/BikePark/scripts.pory"
	.string "My Butterfree floats alongside me on\n"
	.string "the descent! Watch out though!$"

BikePark_Text_FernDefeated::
# 338 "data/maps/BikePark/scripts.pory"
	.string "You scattered my formation!$"

BikePark_Text_FernPostBattle::
# 342 "data/maps/BikePark/scripts.pory"
	.string "I carried these Metapod all the way up\n"
	.string "the mountain.\p"
	.string "The altitude speeds up the change.$"

BikePark_Text_AxelIntro::
# 352 "data/maps/BikePark/scripts.pory"
	.string "Ninjask moves faster than my tires.\n"
	.string "I've been chasing it all season!$"

BikePark_Text_AxelDefeated::
# 356 "data/maps/BikePark/scripts.pory"
	.string "Top speed wasn't enough!$"

BikePark_Text_AxelPostBattle::
# 360 "data/maps/BikePark/scripts.pory"
	.string "Koffing drifts upward, Ninjask shoots\n"
	.string "forward, I go downhill.\p"
	.string "Three directions, same team.$"

BikePark_Text_JudeIntro::
# 370 "data/maps/BikePark/scripts.pory"
	.string "I brought Makuhita up here to build\n"
	.string "endurance. Then I realized I needed it\l"
	.string "more.$"

BikePark_Text_JudeDefeated::
# 374 "data/maps/BikePark/scripts.pory"
	.string "More reps. Got it.$"

BikePark_Text_JudePostBattle::
# 378 "data/maps/BikePark/scripts.pory"
	.string "Distance, elevation, wind. Makuhita and\n"
	.string "I push through all of it.\p"
	.string "This ridge makes champions.$"

BikePark_Text_DuneIntro::
# 388 "data/maps/BikePark/scripts.pory"
	.string "The dry mountain air suits my\n"
	.string "ground-types perfectly. Now let's\l"
	.string "battle!$"

BikePark_Text_DuneDefeated::
# 392 "data/maps/BikePark/scripts.pory"
	.string "You ride harder than this trail.$"

BikePark_Text_DunePostBattle::
# 396 "data/maps/BikePark/scripts.pory"
	.string "Three runs in a row something has\n"
	.string "dropped on my head from above.\p"
	.string "No trees up here. It's the birds. It's\n"
	.string "always the birds.$"
