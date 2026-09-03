Mistcity_Research_Center_Entrance_MapScripts::
	.byte 0


Mistcity_Research_Center_Entrance_Rangers_Slaking::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Rangers_Slaking_2
Mistcity_Research_Center_Entrance_Rangers_Slaking_1:
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Rangers_Slaking_5
Mistcity_Research_Center_Entrance_Rangers_Slaking_4:
	waitmessage
	release
	return

Mistcity_Research_Center_Entrance_Rangers_Slaking_2:
	msgbox Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0
	goto Mistcity_Research_Center_Entrance_Rangers_Slaking_1

Mistcity_Research_Center_Entrance_Rangers_Slaking_5:
	msgbox Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_1
	goto Mistcity_Research_Center_Entrance_Rangers_Slaking_4


Mistcity_Research_Center_Entrance_Rangers_Shiftry::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Rangers_Shiftry_2
Mistcity_Research_Center_Entrance_Rangers_Shiftry_1:
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Rangers_Shiftry_5
Mistcity_Research_Center_Entrance_Rangers_Shiftry_4:
	waitmessage
	release
	return

Mistcity_Research_Center_Entrance_Rangers_Shiftry_2:
	msgbox Mistcity_Research_Center_Entrance_Rangers_Shiftry_Text_0
	goto Mistcity_Research_Center_Entrance_Rangers_Shiftry_1

Mistcity_Research_Center_Entrance_Rangers_Shiftry_5:
	msgbox Mistcity_Research_Center_Entrance_Rangers_Shiftry_Text_1
	goto Mistcity_Research_Center_Entrance_Rangers_Shiftry_4


Mistcity_Research_Center_Entrance_Rangers_Paras::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Rangers_Paras_2
Mistcity_Research_Center_Entrance_Rangers_Paras_1:
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Rangers_Paras_5
Mistcity_Research_Center_Entrance_Rangers_Paras_4:
	waitmessage
	release
	return

Mistcity_Research_Center_Entrance_Rangers_Paras_2:
	msgbox Mistcity_Research_Center_Entrance_Rangers_Paras_Text_0
	goto Mistcity_Research_Center_Entrance_Rangers_Paras_1

Mistcity_Research_Center_Entrance_Rangers_Paras_5:
	msgbox Mistcity_Research_Center_Entrance_Rangers_Paras_Text_1
	goto Mistcity_Research_Center_Entrance_Rangers_Paras_4


Mistcity_Research_Center_Entrance_Rangers_Tropius::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Rangers_Tropius_2
Mistcity_Research_Center_Entrance_Rangers_Tropius_1:
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Rangers_Tropius_5
Mistcity_Research_Center_Entrance_Rangers_Tropius_4:
	waitmessage
	release
	return

Mistcity_Research_Center_Entrance_Rangers_Tropius_2:
	msgbox Mistcity_Research_Center_Entrance_Rangers_Tropius_Text_0
	goto Mistcity_Research_Center_Entrance_Rangers_Tropius_1

Mistcity_Research_Center_Entrance_Rangers_Tropius_5:
	msgbox Mistcity_Research_Center_Entrance_Rangers_Tropius_Text_1
	goto Mistcity_Research_Center_Entrance_Rangers_Tropius_4


Mistcity_Research_Center_Entrance_Rangers_Trucks::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Rangers_Trucks_2
Mistcity_Research_Center_Entrance_Rangers_Trucks_1:
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Rangers_Trucks_5
Mistcity_Research_Center_Entrance_Rangers_Trucks_4:
	waitmessage
	release
	return

Mistcity_Research_Center_Entrance_Rangers_Trucks_2:
	msgbox Mistcity_Research_Center_Entrance_Rangers_Trucks_Text_0
	goto Mistcity_Research_Center_Entrance_Rangers_Trucks_1

Mistcity_Research_Center_Entrance_Rangers_Trucks_5:
	msgbox Mistcity_Research_Center_Entrance_Rangers_Trucks_Text_1
	goto Mistcity_Research_Center_Entrance_Rangers_Trucks_4


Mistcity_Research_Center_Entrance_Scientist_Mist::
	lock
	faceplayer
	msgbox Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0
	waitmessage
	release
	return


Mistcity_Research_Center_Entrance_Scientist_Guard::
	lock
	faceplayer
	msgbox Mistcity_Research_Center_Entrance_Scientist_Guard_Text_0
	waitmessage
	release
	return


Mistcity_Research_Center_Entrance_Scientist_Paras::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Paras_2
Mistcity_Research_Center_Entrance_Scientist_Paras_1:
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Paras_5
Mistcity_Research_Center_Entrance_Scientist_Paras_4:
	waitmessage
	applymovement 3, Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0
	waitmovement
	release
	return

Mistcity_Research_Center_Entrance_Scientist_Paras_2:
	msgbox Mistcity_Research_Center_Entrance_Scientist_Paras_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Paras_1

Mistcity_Research_Center_Entrance_Scientist_Paras_5:
	msgbox Mistcity_Research_Center_Entrance_Scientist_Paras_Text_1
	goto Mistcity_Research_Center_Entrance_Scientist_Paras_4


Mistcity_Research_Center_Entrance_Scientist_Tropius::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Tropius_2
Mistcity_Research_Center_Entrance_Scientist_Tropius_1:
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Tropius_5
Mistcity_Research_Center_Entrance_Scientist_Tropius_4:
	waitmessage
	applymovement 12, Mistcity_Research_Center_Entrance_Scientist_Tropius_Movement_0
	waitmovement
	release
	return

Mistcity_Research_Center_Entrance_Scientist_Tropius_2:
	msgbox Mistcity_Research_Center_Entrance_Scientist_Tropius_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Tropius_1

Mistcity_Research_Center_Entrance_Scientist_Tropius_5:
	msgbox Mistcity_Research_Center_Entrance_Scientist_Tropius_Text_1
	goto Mistcity_Research_Center_Entrance_Scientist_Tropius_4


Mistcity_Research_Center_Entrance_Scientist_Shiftry::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Shiftry_2
Mistcity_Research_Center_Entrance_Scientist_Shiftry_1:
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Shiftry_5
Mistcity_Research_Center_Entrance_Scientist_Shiftry_4:
	waitmessage
	applymovement 4, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
	waitmovement
	release
	return

Mistcity_Research_Center_Entrance_Scientist_Shiftry_2:
	msgbox Mistcity_Research_Center_Entrance_Scientist_Shiftry_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Shiftry_1

Mistcity_Research_Center_Entrance_Scientist_Shiftry_5:
	msgbox Mistcity_Research_Center_Entrance_Scientist_Shiftry_Text_1
	goto Mistcity_Research_Center_Entrance_Scientist_Shiftry_4


Mistcity_Research_Center_Entrance_Scientist_Slaking::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Slaking_2
Mistcity_Research_Center_Entrance_Scientist_Slaking_1:
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_Scientist_Slaking_5
Mistcity_Research_Center_Entrance_Scientist_Slaking_4:
	waitmessage
	applymovement 2, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
	waitmovement
	release
	return

Mistcity_Research_Center_Entrance_Scientist_Slaking_2:
	msgbox Mistcity_Research_Center_Entrance_Scientist_Slaking_Text_0
	goto Mistcity_Research_Center_Entrance_Scientist_Slaking_1

Mistcity_Research_Center_Entrance_Scientist_Slaking_5:
	msgbox Mistcity_Research_Center_Entrance_Scientist_Slaking_Text_1
	goto Mistcity_Research_Center_Entrance_Scientist_Slaking_4


Mistcity_Research_Center_Entrance_Daan_RescueMission::
	lock
	setflag FLAG_DISABLE_FOLLOWER_POKEMON
	hidefollower
	playse SE_PIN
	applymovement 19, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_0
	waitmovement
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_1
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_2
	waitmovement
	applymovement 19, Mistcity_Research_Center_Entrance_Scientist_Tropius_Movement_0
	waitmovement
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 19, Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_1
	waitmovement
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_3, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, YES
	goto_if_eq Mistcity_Research_Center_Entrance_Daan_RescueMission_2
Mistcity_Research_Center_Entrance_Daan_RescueMission_1:
	compare VAR_RESULT, NO
	goto_if_eq Mistcity_Research_Center_Entrance_Daan_RescueMission_5
Mistcity_Research_Center_Entrance_Daan_RescueMission_4:
	waitmessage
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_3
	applymovement 21, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
	waitmovement
	applymovement 19, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_3
	applymovement 20, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_4
	applymovement 18, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
	waitmovement
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_6, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 20, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_5
	waitmovement
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_7
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_8, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 20, Mistcity_Research_Center_Entrance_Scientist_Tropius_Movement_0
	waitmovement
	delay 90
	applymovement 20, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
	waitmovement
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_7
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_9, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 20, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_6
	waitmovement
	applymovement 18, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_7
	waitmovement
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_10
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_11, MSGBOX_AUTOCLOSE
	waitmessage
	delay 40
	applymovement 18, Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0
	waitmovement
	delay 60
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_10
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_12, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	applymovement 18, Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0
	waitmovement
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_10
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_13, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 18, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_8
	waitmovement
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_14
	waitmessage
	applymovement 20, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_9
	waitmovement
	removeobject 20
	applymovement 21, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_10
	waitmovement
	removeobject 21
	applymovement 18, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_11
	waitmovement
	removeobject 18
	waitmovement
	setflag FLAG_HIDE_NASH_DAVID
	applymovement 19, Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0
	applymovement LOCALID_PLAYER, Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_1
	waitmovement
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_15
	waitmessage
	setvar VAR_MISTCITY_RESEARCH_CENTER, 1
	setflag FLAG_NASH_ENTRANCE_RESEARCH_CENTER1
	clearflag FLAG_DISABLE_FOLLOWER_POKEMON
	release
	end

Mistcity_Research_Center_Entrance_Daan_RescueMission_2:
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_4, MSGBOX_AUTOCLOSE
	goto Mistcity_Research_Center_Entrance_Daan_RescueMission_1

Mistcity_Research_Center_Entrance_Daan_RescueMission_5:
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
	msgbox Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_5, MSGBOX_AUTOCLOSE
	goto Mistcity_Research_Center_Entrance_Daan_RescueMission_4


Mistcity_Research_Center_Entrance_LeadScientist::
	lock
	faceplayer
	setspeaker Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_LeadScientist_2
	goto_if_unset FLAG_ITEM_RESEARCH_CENTER_EXP_SHARE, Mistcity_Research_Center_Entrance_LeadScientist_5
	msgbox Mistcity_Research_Center_Entrance_LeadScientist_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
Mistcity_Research_Center_Entrance_LeadScientist_1:
	release
	return

Mistcity_Research_Center_Entrance_LeadScientist_2:
	msgbox Mistcity_Research_Center_Entrance_LeadScientist_Text_0
	waitmessage
	goto Mistcity_Research_Center_Entrance_LeadScientist_1

Mistcity_Research_Center_Entrance_LeadScientist_5:
	msgbox Mistcity_Research_Center_Entrance_LeadScientist_Text_1
	waitmessage
	giveitem ITEM_EXP_SHARE
	waitmessage
	msgbox Mistcity_Research_Center_Entrance_LeadScientist_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	setflag FLAG_ITEM_RESEARCH_CENTER_EXP_SHARE
	goto Mistcity_Research_Center_Entrance_LeadScientist_1


Mistcity_Research_Center_Entrance_ScientistPlatform::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_ScientistPlatform_2
Mistcity_Research_Center_Entrance_ScientistPlatform_1:
	goto_if_unset FLAG_RESCUED_DAAN, Mistcity_Research_Center_Entrance_ScientistPlatform_5
Mistcity_Research_Center_Entrance_ScientistPlatform_4:
	waitmessage
	release
	return

Mistcity_Research_Center_Entrance_ScientistPlatform_2:
	setspeaker Mistcity_Research_Center_Entrance_ScientistPlatform_Text_0
	msgbox Mistcity_Research_Center_Entrance_ScientistPlatform_Text_1
	goto Mistcity_Research_Center_Entrance_ScientistPlatform_1

Mistcity_Research_Center_Entrance_ScientistPlatform_5:
	setspeaker Mistcity_Research_Center_Entrance_ScientistPlatform_Text_0
	msgbox Mistcity_Research_Center_Entrance_ScientistPlatform_Text_2
	goto Mistcity_Research_Center_Entrance_ScientistPlatform_4


Mistcity_Research_Center_Entrance_Scientist_Paras_Movement_0:
	face_right
	step_end

Mistcity_Research_Center_Entrance_Scientist_Tropius_Movement_0:
	face_up
	step_end

Mistcity_Research_Center_Entrance_Scientist_Shiftry_Movement_0:
	face_down
	step_end

Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_0:
	face_right
	emote_exclamation_mark
	step_end

Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_1:
	face_left
	step_end

Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_2:
	walk_left
	walk_left
	walk_left
	face_up
	step_end

Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_3:
	walk_right
	walk_right
	face_up
	step_end

Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_4:
	walk_right
	walk_up
	face_down
	step_end

Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_5:
	walk_down
	step_end

Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_6:
	walk_up
	face_down
	step_end

Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_7:
	walk_down
	walk_right
	face_down
	step_end

Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_8:
	walk_left
	walk_up
	face_down
	step_end

Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_9:
	walk_up
	walk_up
	step_end

Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_10:
	walk_left
	walk_up
	walk_up
	step_end

Mistcity_Research_Center_Entrance_Daan_RescueMission_Movement_11:
	walk_right
	walk_up
	walk_up
	step_end

Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_0:
	.string "It is finally out cold.\p"
	.string "It stopped pressing its ear to the\n"
	.string "floor about an hour ago.\p"
	.string "To be honest, seeing it snore that\n"
	.string "loudly is a huge relief.$"

Mistcity_Research_Center_Entrance_Rangers_Slaking_Text_1:
	.string "This Slaking usually sleeps eighteen\n"
	.string "hours a day, but it keeps pressing its\l"
	.string "ear to the mud like it hears something\l"
	.string "moving deep underground.$"

Mistcity_Research_Center_Entrance_Rangers_Shiftry_Text_0:
	.string "The howling has completely stopped.\p"
	.string "It is just grooming its leaf fans now.\p"
	.string "It seems whatever was invading its\n"
	.string "territory in the deep woods is gone.$"

Mistcity_Research_Center_Entrance_Rangers_Shiftry_Text_1:
	.string "I've never seen a Shiftry act this\n"
	.string "aggressive, but it keeps staring toward\l"
	.string "the deep woods and howling as if an\l"
	.string "intruder is tearing up its home.$"

Mistcity_Research_Center_Entrance_Rangers_Paras_Text_0:
	.string "The air is finally clear.\p"
	.string "The defensive spore release has\n"
	.string "stopped.\p"
	.string "It seems the 'seismic activity' it was\n"
	.string "sensing has calmed down.$"

Mistcity_Research_Center_Entrance_Rangers_Paras_Text_1:
	.string "The mushroom on this Parasect's back\n"
	.string "has been releasing defensive spores all\l"
	.string "morning, a reaction usually only\l"
	.string "triggered by heavy seismic activity.$"

Mistcity_Research_Center_Entrance_Rangers_Tropius_Text_0:
	.string "It is happily munching on some Nanab\n"
	.string "berries now.\p"
	.string "That metallic grinding sound must have\n"
	.string "ceased, because this big guy is totally\l"
	.string "relaxed again.$"

Mistcity_Research_Center_Entrance_Rangers_Tropius_Text_1:
	.string "We found this poor Tropius tangled in\n"
	.string "the lower branches; it was terrified of\l"
	.string "a loud, metallic grinding sound echoing\l"
	.string "from the restricted zone.$"

Mistcity_Research_Center_Entrance_Rangers_Trucks_Text_0:
	.string "The distress signals have flatlined.\p"
	.string "We are actually parking the transport\n"
	.string "trucks for the first time in days.\p"
	.string "Sounds like peace has returned to the\n"
	.string "forest core.$"

Mistcity_Research_Center_Entrance_Rangers_Trucks_Text_1:
	.string "We've had to mobilize all our rescue\n"
	.string "trucks just to keep up with the sheer\l"
	.string "volume of distress signals coming from\l"
	.string "the forest core.$"

Mistcity_Research_Center_Entrance_Scientist_Mist_Text_0:
	.string "The deep cloud forest is a biological\n"
	.string "marvel, a unique ecosystem where the\l"
	.string "perpetual mist allows rare and ancient\l"
	.string "Pokémon species to thrive in isolation.$"

Mistcity_Research_Center_Entrance_Scientist_Guard_Text_0:
	.string "I can't let you through; the upper level\n"
	.string "is strictly reserved for our lead\l"
	.string "researchers to analyze the sensitive\l"
	.string "data coming from the forest.$"

Mistcity_Research_Center_Entrance_Scientist_Paras_Text_0:
	.string "Incredible.\p"
	.string "The bioluminescence on the Tochukaso\n"
	.string "mushroom is fading rapidly.\p"
	.string "It has returned to its natural, dull\n"
	.string "color.\p"
	.string "That 'sonar' signal that was irritating\n"
	.string "the fungus seems to have been cut off\l"
	.string "completely.\p"
	.string "Whatever you did down there silenced\n"
	.string "the noise.$"

Mistcity_Research_Center_Entrance_Scientist_Paras_Text_1:
	.string "Now, this is the most alarming case.\p"
	.string "The tochukaso mushroom that controls\n"
	.string "the Parasect is a fungus, right?\p"
	.string "It's incredibly sensitive to geological\n"
	.string "changes.\p"
	.string "Lately, we've rescued several Parasect\n"
	.string "from the deep woods whose mushrooms\l"
	.string "have developed a faint, unnatural\l"
	.string "bio-luminescence.\p"
	.string "It's a defensive reaction.\p"
	.string "Our hypothesis is that something is\n"
	.string "emitting powerful, systematic waves of\l"
	.string "energy into the ground-like a sonar.\p"
	.string "The fungus is reacting to being\n"
	.string "'scanned.'\p"
	.string "Someone isn't just exploring the\n"
	.string "forest; they're X-raying it.$"

Mistcity_Research_Center_Entrance_Scientist_Tropius_Text_0:
	.string "Just look at it.\p"
	.string "It is preening its wings and growling\n"
	.string "softly.\p"
	.string "The sheer terror is gone.\p"
	.string "If the atmospheric disturbance has\n"
	.string "truly dissipated, this one should be\l"
	.string "ready to return to Whisperwood Grove\l"
	.string "very soon.\p"
	.string "It finally feels safe to fly.$"

Mistcity_Research_Center_Entrance_Scientist_Tropius_Text_1:
	.string "This poor thing was part of a whole herd\n"
	.string "we saw fleeing the Whisperwood Grove\l"
	.string "area last week.\p"
	.string "They were in a complete panic, flying\n"
	.string "erratically as if escaping a huge\l"
	.string "predator, but there was nothing there.\p"
	.string "This one got separated and was\n"
	.string "exhausted.\p"
	.string "It's still incredibly skittish.\p"
	.string "We've been getting similar reports from\n"
	.string "other flying-type Pokémon.\p"
	.string "Some kind of powerful, ground-based\n"
	.string "energy pulse in that sector is making\l"
	.string "the sky feel unsafe to them.$"

Mistcity_Research_Center_Entrance_Scientist_Shiftry_Text_0:
	.string "The Shiftry has stopped staring at the\n"
	.string "floor.\p"
	.string "It is looking out the window towards\n"
	.string "the treeline.\p"
	.string "Its internal compass seems to have\n"
	.string "realigned.\p"
	.string "The magnetic interference that was\n"
	.string "scrambling its senses has vanished.\p"
	.string "It is back to being the master of the\n"
	.string "forest.$"

Mistcity_Research_Center_Entrance_Scientist_Shiftry_Text_1:
	.string "Shiftry are masters of the forest,\n"
	.string "moving like ghosts through the trees.\p"
	.string "They are deeply connected to their\n"
	.string "territory.\p"
	.string "But this one? We found it completely\n"
	.string "disoriented, miles from its home.\p"
	.string "It acts dazed, sometimes just staring\n"
	.string "blankly at the ground for hours.\p"
	.string "Our analysis suggests its sensory\n"
	.string "organs, which help it navigate, are\l"
	.string "being overwhelmed by some kind of\l"
	.string "external interference.\p"
	.string "It's like its natural compass has been\n"
	.string "scrambled by a powerful magnetic field.$"

Mistcity_Research_Center_Entrance_Scientist_Slaking_Text_0:
	.string "Shh... keep your voice down.\p"
	.string "For the first time in weeks, the Slaking\n"
	.string "is preparing to sleep.\p"
	.string "That low-frequency hum must have\n"
	.string "stopped, because its heart rate is\l"
	.string "perfectly slow and steady.\p"
	.string "It is finally back to doing what it does\n"
	.string "best... absolutely nothing.$"

Mistcity_Research_Center_Entrance_Scientist_Slaking_Text_1:
	.string "It's the strangest thing.\p"
	.string "Slaking are the definition of energy\n"
	.string "conservation, but this one... it won't\l"
	.string "rest.\p"
	.string "We rescued it a few weeks back after\n"
	.string "reports of it aggressively pacing near\l"
	.string "some ancient stone ruins deep in the\l"
	.string "forest.\p"
	.string "Its bio-scans are all over the place,\n"
	.string "showing constant, low-level stress.\p"
	.string "It's as if it's reacting to a persistent,\n"
	.string "low-frequency hum that none of our\l"
	.string "equipment can even detect.\p"
	.string "Something out there is seriously\n"
	.string "disturbing the peace.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_0:
	.string "LEAD SCIENTIST$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_1:
	.string "Hold it right there.\p"
	.string "You're a skilled trainer, right?\p"
	.string "...\p"
	.string "Researcher?\p"
	.string "Even better.\p"
	.string "We have a serious situation.\p"
	.string "Join us.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_2:
	.string "About two hours ago, a distress alarm\n"
	.string "went off in the Whisperwood Grove.\p"
	.string "It's in the same sector we've been\n"
	.string "getting all these weird reports from.\p"
	.string "The alarm was triggered by a report of\n"
	.string "illegal deforestation.\p"
	.string "Our best ranger, DAAN, took the first\n"
	.string "truck out to investigate.\p"
	.string "We were expecting a radio check-in an\n"
	.string "hour ago, but we've gotten nothing but\l"
	.string "static.\p"
	.string "We need someone to head to his last\n"
	.string "known coordinates to provide backup\l"
	.string "and find out what's going on.\p"
	.string "We're stretched thin here with all these\n"
	.string "agitated Pokémon.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_3:
	.string "Can you do it?$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_4:
	.string "...Great!\p"
	.string "Don't go in there unprepared.\p"
	.string "Every Pokémon we've rescued recently\n"
	.string "has come from that sector.\p"
	.string "They're all on edge, so expect wild\n"
	.string "Pokémon to be more aggressive than\l"
	.string "usual.\p"
	.string "The reports mentioned there were\n"
	.string "tracks from vehicles that have no\l"
	.string "business being that deep in a\l"
	.string "protected forest.\p"
	.string "This group, whoever they are, are\n"
	.string "well-equipped, and they're after\l"
	.string "something specific.\p"
	.string "Look for tracks, listen for machinery,\n"
	.string "and find DAAN.\p"
	.string "But be careful, whoever is out there is\n"
	.string "trying to tear the heart out of the\l"
	.string "forest.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_5:
	.string "Well, I'm afraid you have no choice.\p"
	.string "We are understaffed but you won't go in\n"
	.string "there alone.\p"
	.string "Every Pokémon we've rescued recently\n"
	.string "has come from that sector.\p"
	.string "They're all on edge, so expect wild\n"
	.string "Pokémon to be more aggressive than\l"
	.string "usual.\p"
	.string "The reports mentioned there were\n"
	.string "tracks from vehicles that have no\l"
	.string "business being that deep in a\l"
	.string "protected forest.\p"
	.string "This group, whoever they are, are\n"
	.string "well-equipped, and they're after\l"
	.string "something specific.\p"
	.string "Look for tracks, listen for machinery,\n"
	.string "and find DAAN.\p"
	.string "But be careful, whoever is out there\n"
	.string "seems to be organised and prepared.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_6:
	.string "I want to introduce you to two of my\n"
	.string "people, NASH & DAVID.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_7:
	.string "NASH$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_8:
	.string "Glad to have you with us.\p"
	.string "My partner, Arcanine, and I know that\n"
	.string "sector like the back of our hands.\p"
	.string "I'll handle communications and watch\n"
	.string "our six for any ambushes.\p"
	.string "The reports about organized\n"
	.string "trespassers are what worry me most.\p"
	.string "The tracks we've seen seem to be from\n"
	.string "professionals.\p"
	.string "Let's move out, find DAAN, and make sure\n"
	.string "whoever is doing this regrets stepping\l"
	.string "foot in our forest.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_9:
	.string "This is the kid's first time out in the\n"
	.string "deep woods.\p"
	.string "He's... a specialist.\p"
	.string "A bit green, but the sharpest mind we've\n"
	.string "got.\p"
	.string "Let's all make sure we get back in one\n"
	.string "piece.\p"
	.string "Go ahead, introduce yourself.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_10:
	.string "DAVID$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_11:
	.string "I'm DAVID HEARTFIELD.\p"
	.string "I'm...\p"
	.string "I'm not a great battler.\p"
	.string "NASH is for the fighting.\p"
	.string "I'm here to find the wrongness.\p"
	.string "The scientists... they said the\n"
	.string "Parasect's mushroom was glowing.\p"
	.string "A stress reaction to a high-frequency\n"
	.string "energy pulse.\p"
	.string "I built a scanner to detect that\n"
	.string "specific frequency.\p"
	.string "It won't find Pokémon... but it will find\n"
	.string "the source of what's hurting them.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_12:
	.string "It's... loud out there.\p"
	.string "Lots of data.\p"
	.string "All the agitated Pokémon are creating\n"
	.string "chaotic energy spikes.\p"
	.string "But their pattern is random.\p"
	.string "The deforestation signal... that will be\n"
	.string "a steady, repeating pattern.\p"
	.string "A clean signal in the noise.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_13:
	.string "I'll find the signal.\p"
	.string "That's what I'm good at.\p"
	.string "Just...\p"
	.string "just keep the angry Beedrill away from\n"
	.string "me.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_14:
	.string "NASH.\n"
	.string "DAVID.\p"
	.string "Go downstairs and prepare the truck.\p"
	.string "Keep me updated on your progress.$"

Mistcity_Research_Center_Entrance_Daan_RescueMission_Text_15:
	.string "Don't be afraid.\p"
	.string "NASH & DAVID are the best people I got.\p"
	.string "Make sure you heal your Pokémon and\n"
	.string "stack up on some potions, the forest\l"
	.string "can be a very harsh place.\p"
	.string "I'll keep in contact trough the radio.\p"
	.string "NASH and DAVID should be ready any\n"
	.string "minute now.$"

Mistcity_Research_Center_Entrance_LeadScientist_Text_0:
	.string "Don't be afraid.\p"
	.string "NASH & DAVID are the best people we\n"
	.string "got.\p"
	.string "Make sure you heal your Pokémon and\n"
	.string "stock up on potions, the forest can be\l"
	.string "a very harsh place.\p"
	.string "I'll keep in contact through the radio.\p"
	.string "Nash and David are waiting for you\n"
	.string "downstairs.$"

Mistcity_Research_Center_Entrance_LeadScientist_Text_1:
	.string "You actually did it.\p"
	.string "DAAN is safe, and the seismic\n"
	.string "disturbances have completely ceased.\p"
	.string "NASH and DAVID said you handled\n"
	.string "yourself like a veteran out there.\p"
	.string "We owe you a great debt, {PLAYER}.\p"
	.string "The forest can finally heal.\p"
	.string "As a reward, I want to give you a piece\n"
	.string "of technology we've been developing\l"
	.string "here.\p"
	.string "We call it Experience Sharing, or in\n"
	.string "short Exp. Share.\p"
	.string "The idea came from studying Venusaur's\n"
	.string "in their natural habitat.\p"
	.string "You probably know that Venusaur's\n"
	.string "collect solar energy through the flower\l"
	.string "on their back right?\p"
	.string "Turns out, that this energy is not only\n"
	.string "going to its own body, but is shared\l"
	.string "among every living thing around the\l"
	.string "Venusaur through tiny roots in his\l"
	.string "foots.\p"
	.string "Fascinating right?\p"
	.string "Sometimes new technology is not the\n"
	.string "answer, but just looking at what nature\l"
	.string "is doing around us and take that as an\l"
	.string "example.\p"
	.string "After all, Pokémon have been on this\n"
	.string "planet far longer than us.\p"
	.string "They've already solved problems we're\n"
	.string "still scribbling equations for.\p"
	.string "We just have to pay attention.\p"
	.string "This technology does the same thing, it\n"
	.string "shares the experience of battle across\l"
	.string "your whole team.\p"
	.string "Take it.$"

Mistcity_Research_Center_Entrance_LeadScientist_Text_2:
	.string "One more thing, you can turn it off any\n"
	.string "time.\p"
	.string "Sometimes the best thing for a Pokémon\n"
	.string "is to face a battle alone.\p"
	.string "There's a bond that forms when it's just\n"
	.string "the two of you out there.\p"
	.string "Or if you want a harder road, well... the\n"
	.string "forest will respect that too.$"

Mistcity_Research_Center_Entrance_LeadScientist_Text_3:
	.string "To think that group was operating right\n"
	.string "under our noses...\p"
	.string "The forest is quiet again.\p"
	.string "We won't take that for granted.$"

Mistcity_Research_Center_Entrance_ScientistPlatform_Text_0:
	.string "SCIENTIST$"

Mistcity_Research_Center_Entrance_ScientistPlatform_Text_1:
	.string "The anomaly just... vanished.\p"
	.string "Look at the monitor.\p"
	.string "The interference pattern flatlined\n"
	.string "some time ago.\p"
	.string "The background noise is back to normal\n"
	.string "ambient levels.\p"
	.string "It is like someone just walked up to the\n"
	.string "source and pulled the plug.$"

Mistcity_Research_Center_Entrance_ScientistPlatform_Text_2:
	.string "This doesn't make any sense.\p"
	.string "The seismic needles are jumping every\n"
	.string "thirty seconds exactly.\p"
	.string "Nature isn't this rhythmic.\p"
	.string "It looks less like tectonic movement\n"
	.string "and more like... heavy machinery?\p"
	.string "Whatever it is, it is shaking the very\n"
	.string "foundation of the forest.$"
