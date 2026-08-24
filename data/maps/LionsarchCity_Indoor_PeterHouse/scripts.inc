LionsarchCity_Indoor_PeterHouse_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LionsarchCity_Indoor_PeterHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LionsarchCity_Indoor_PeterHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, PeterHouse_EntranceScene
	.2byte 0


PeterHouse_EntranceScene::
	lock
	goto_if_set FLAG_PETER_HOUSE_INTRO_DONE, PeterHouse_EntranceScene_2
	checkitem ITEM_SOOT_SACK, 1
	compare VAR_RESULT, 0
	goto_if_eq PeterHouse_EntranceScene_5
	setvar VAR_TEMP_0, 1
	delay 30
	setspeaker PeterHouse_EntranceScene_Text_0
	msgbox PeterHouse_EntranceScene_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 1, PeterHouse_EntranceScene_Movement_0
	applymovement 4, PeterHouse_EntranceScene_Movement_1
	applymovement 5, PeterHouse_EntranceScene_Movement_2
	applymovement 6, PeterHouse_EntranceScene_Movement_3
	waitmovement
	removeobject 4
	removeobject 5
	removeobject 6
	delay 20
	applymovement 1, PeterHouse_EntranceScene_Movement_4
	waitmovement
	delay 20
	playse SE_PIN
	applymovement 7, PeterHouse_EntranceScene_Movement_5
	waitmovement
	applymovement 7, PeterHouse_EntranceScene_Movement_6
	waitmovement
	setspeaker PeterHouse_EntranceScene_Text_2
	msgbox PeterHouse_EntranceScene_Text_3
	waitmessage
	applymovement LOCALID_PLAYER, PeterHouse_EntranceScene_Movement_7
	waitmovement
	setspeaker PeterHouse_EntranceScene_Text_2
	msgbox PeterHouse_EntranceScene_Text_4
	waitmessage
	playse SE_PIN
	applymovement 7, PeterHouse_EntranceScene_Movement_5
	waitmovement
	setspeaker PeterHouse_EntranceScene_Text_2
	msgbox PeterHouse_EntranceScene_Text_5
	waitmessage
	setspeaker PeterHouse_EntranceScene_Text_2
	msgbox PeterHouse_EntranceScene_Text_6
	waitmessage
	applymovement 7, PeterHouse_EntranceScene_Movement_8
	waitmovement
	setspeaker PeterHouse_EntranceScene_Text_2
	msgbox PeterHouse_EntranceScene_Text_7
	waitmessage
	applymovement 1, PeterHouse_EntranceScene_Movement_9
	waitmovement
	delay 20
	setspeaker PeterHouse_EntranceScene_Text_0
	msgbox PeterHouse_EntranceScene_Text_8
	waitmessage
	applymovement 1, PeterHouse_EntranceScene_Movement_0
	waitmovement
	applymovement 7, PeterHouse_EntranceScene_Movement_6
	waitmovement
	setspeaker PeterHouse_EntranceScene_Text_2
	msgbox PeterHouse_EntranceScene_Text_9
	waitmessage
	setflag FLAG_PETER_HOUSE_INTRO_DONE
	release
	end

PeterHouse_EntranceScene_2:
	setvar VAR_TEMP_0, 1
	release
	end

PeterHouse_EntranceScene_5:
	setvar VAR_TEMP_0, 1
	release
	end


PeterHouse_Bouncer::
	lockall
	faceplayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	getobjectxy 1, CURRENT_POSITION, VAR_TEMP_2, VAR_TEMP_3
	goto_if_set FLAG_PETER_HOUSE_INTRO_DONE, PeterHouse_Bouncer_2
	checkitem ITEM_SOOT_SACK, 1
	compare VAR_RESULT, 0
	goto_if_ne PeterHouse_Bouncer_3
	msgbox PeterHouse_Bouncer_Text_3
PeterHouse_Bouncer_1:
	waitmessage
	releaseall
	return

PeterHouse_Bouncer_2:
	compare VAR_TEMP_0, 2
	goto_if_eq PeterHouse_Bouncer_34
PeterHouse_Bouncer_28:
	compare VAR_TEMP_0, 3
	goto_if_eq PeterHouse_Bouncer_27
PeterHouse_Bouncer_21:
	compare VAR_TEMP_0, 2
	goto_if_eq PeterHouse_Bouncer_20
PeterHouse_Bouncer_14:
	compare VAR_TEMP_0, 1
	goto_if_eq PeterHouse_Bouncer_13
PeterHouse_Bouncer_11:
	setspeaker PeterHouse_EntranceScene_Text_0
	msgbox PeterHouse_Bouncer_Text_1
	waitmessage
	goto PeterHouse_Bouncer_1

PeterHouse_Bouncer_3:
	msgbox PeterHouse_Bouncer_Text_2
	goto PeterHouse_Bouncer_1

PeterHouse_Bouncer_7:
	setspeaker PeterHouse_EntranceScene_Text_0
	msgbox PeterHouse_Bouncer_Text_0
	waitmessage
	applymovement 1, PeterHouse_EntranceScene_Movement_0
	waitmovement
	goto PeterHouse_Bouncer_1

PeterHouse_Bouncer_8:
	setspeaker PeterHouse_EntranceScene_Text_0
	msgbox PeterHouse_Bouncer_Text_1
	waitmessage
	applymovement 1, PeterHouse_EntranceScene_Movement_0
	waitmovement
	goto PeterHouse_Bouncer_1

PeterHouse_Bouncer_9:
	setspeaker PeterHouse_EntranceScene_Text_0
	msgbox PeterHouse_Bouncer_Text_1
	waitmessage
	applymovement 1, PeterHouse_EntranceScene_Movement_0
	waitmovement
	goto PeterHouse_Bouncer_1

PeterHouse_Bouncer_10:
	setspeaker PeterHouse_EntranceScene_Text_0
	msgbox PeterHouse_Bouncer_Text_1
	waitmessage
	applymovement 1, PeterHouse_Bouncer_Movement_0
	waitmovement
	goto PeterHouse_Bouncer_1

PeterHouse_Bouncer_12:
	compare VAR_TEMP_2, 2
	goto_if_eq PeterHouse_Bouncer_16
	goto PeterHouse_Bouncer_11

PeterHouse_Bouncer_13:
	compare VAR_TEMP_1, 3
	goto_if_eq PeterHouse_Bouncer_12
	goto PeterHouse_Bouncer_11

PeterHouse_Bouncer_16:
	compare VAR_TEMP_3, 3
	goto_if_eq PeterHouse_Bouncer_10
	goto PeterHouse_Bouncer_11

PeterHouse_Bouncer_19:
	compare VAR_TEMP_2, 2
	goto_if_eq PeterHouse_Bouncer_23
	goto PeterHouse_Bouncer_14

PeterHouse_Bouncer_20:
	compare VAR_TEMP_1, 4
	goto_if_eq PeterHouse_Bouncer_19
	goto PeterHouse_Bouncer_14

PeterHouse_Bouncer_23:
	compare VAR_TEMP_3, 3
	goto_if_eq PeterHouse_Bouncer_9
	goto PeterHouse_Bouncer_14

PeterHouse_Bouncer_26:
	compare VAR_TEMP_2, 2
	goto_if_eq PeterHouse_Bouncer_30
	goto PeterHouse_Bouncer_21

PeterHouse_Bouncer_27:
	compare VAR_TEMP_1, 3
	goto_if_eq PeterHouse_Bouncer_26
	goto PeterHouse_Bouncer_21

PeterHouse_Bouncer_30:
	compare VAR_TEMP_3, 3
	goto_if_eq PeterHouse_Bouncer_8
	goto PeterHouse_Bouncer_21

PeterHouse_Bouncer_33:
	compare VAR_TEMP_2, 2
	goto_if_eq PeterHouse_Bouncer_37
	goto PeterHouse_Bouncer_28

PeterHouse_Bouncer_34:
	compare VAR_TEMP_1, 2
	goto_if_eq PeterHouse_Bouncer_33
	goto PeterHouse_Bouncer_28

PeterHouse_Bouncer_37:
	compare VAR_TEMP_3, 3
	goto_if_eq PeterHouse_Bouncer_7
	goto PeterHouse_Bouncer_28


PeterHouse_Machoke::
	lockall
	faceplayer
	setspeaker PeterHouse_Machoke_Text_0
	msgbox PeterHouse_Machoke_Text_1
	waitmessage
	releaseall
	return


PeterHouse_DoorGuard::
	lockall
	faceplayer
	setspeaker PeterHouse_EntranceScene_Text_2
	goto_if_set FLAG_PETER_HOUSE_INTRO_DONE, PeterHouse_DoorGuard_2
	checkitem ITEM_SOOT_SACK, 1
	compare VAR_RESULT, 0
	goto_if_ne PeterHouse_DoorGuard_3
	msgbox PeterHouse_DoorGuard_Text_3
PeterHouse_DoorGuard_1:
	waitmessage
	releaseall
	return

PeterHouse_DoorGuard_2:
	msgbox PeterHouse_DoorGuard_Text_0
	goto PeterHouse_DoorGuard_1

PeterHouse_DoorGuard_3:
	msgbox PeterHouse_DoorGuard_Text_1
	waitmessage
	setflag FLAG_PETER_HOUSE_INTRO_DONE
	msgbox PeterHouse_DoorGuard_Text_2
	goto PeterHouse_DoorGuard_1


PeterHouse_PartyGirl::
	lockall
	faceplayer
	setspeaker PeterHouse_PartyGirl_Text_0
	msgbox PeterHouse_PartyGirl_Text_1
	waitmessage
	releaseall
	return


PeterHouse_NPC_Peter::
	lockall
	faceplayer
	goto_if_unset FLAG_DELIVERED_ALIS_PACKAGE_TO_PETER, PeterHouse_NPC_Peter_2
	setspeaker PeterHouse_NPC_Peter_Text_0
	msgbox PeterHouse_NPC_Peter_Text_2
	waitmessage
PeterHouse_NPC_Peter_1:
	releaseall
	return

PeterHouse_NPC_Peter_2:
	setspeaker PeterHouse_NPC_Peter_Text_0
	msgbox PeterHouse_NPC_Peter_Text_1
	waitmessage
	goto PeterHouse_NPC_Peter_1


PeterHouse_Woman_Neighbor::
	lockall
	faceplayer
	msgbox PeterHouse_Woman_Neighbor_Text_0
	releaseall
	return


PeterHouse_RecordPlayer::
	lockall
	msgbox PeterHouse_RecordPlayer_Text_0
	releaseall
	return


PeterHouse_Bookshelf::
	lockall
	msgbox PeterHouse_Bookshelf_Text_0
	releaseall
	return


PeterHouse_DiscoBalPostet::
	lockall
	msgbox PeterHouse_DiscoBalPostet_Text_0
	releaseall
	return


PeterHouse_EntranceScene_Movement_0:
	walk_left
	face_right
	step_end

PeterHouse_EntranceScene_Movement_1:
	walk_up
	walk_up
	walk_up
	step_end

PeterHouse_EntranceScene_Movement_2:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PeterHouse_EntranceScene_Movement_3:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PeterHouse_EntranceScene_Movement_4:
	walk_right
	face_down
	step_end

PeterHouse_EntranceScene_Movement_5:
	emote_exclamation_mark
	step_end

PeterHouse_EntranceScene_Movement_6:
	face_down
	step_end

PeterHouse_EntranceScene_Movement_7:
	walk_up
	walk_left
	face_up
	step_end

PeterHouse_EntranceScene_Movement_8:
	face_left
	step_end

PeterHouse_EntranceScene_Movement_9:
	face_right
	step_end

PeterHouse_Bouncer_Movement_0:
	walk_right
	face_left
	step_end

PeterHouse_EntranceScene_Text_0:
	.string "BOUNCER BRUNO$"

PeterHouse_EntranceScene_Text_1:
	.string "Come inside ladies.\p"
	.string "If there is a man bothering you, please\n"
	.string "give a shout out to the bouncers.$"

PeterHouse_EntranceScene_Text_2:
	.string "BOUNCER MARIO$"

PeterHouse_EntranceScene_Text_3:
	.string "Hey, you there!\p"
	.string "Come over here for a second.$"

PeterHouse_EntranceScene_Text_4:
	.string "Alright, what's your name?\p"
	.string "And more importantly... who do you know\n"
	.string "here?\p"
	.string "This ain't a public venue, kid.$"

PeterHouse_EntranceScene_Text_5:
	.string "...\p"
	.string "A package from ALI?\p"
	.string "For PETER?\p"
	.string "From down south?\p"
	.string "Oh damn, you're THAT delivery!$"

PeterHouse_EntranceScene_Text_6:
	.string "PETER's been waiting for this package\n"
	.string "for weeks!\p"
	.string "Says it's essential for the 'party\n"
	.string "atmosphere'.\p"
	.string "Whatever that means...$"

PeterHouse_EntranceScene_Text_7:
	.string "Hey Bruno! Let this one through!\p"
	.string "VIP delivery from ALI!$"

PeterHouse_EntranceScene_Text_8:
	.string "ALI's contact, huh?\p"
	.string "Alright, you're good.\p"
	.string "Head on down. PETER's in the basement\n"
	.string "spinning records.$"

PeterHouse_EntranceScene_Text_9:
	.string "Go on.\p"
	.string "And hey... enjoy the groove down there.\p"
	.string "PETER throws one hell of a party.$"

PeterHouse_Bouncer_Text_0:
	.string "You're leaving already?\p"
	.string "The party's just getting started!$"

PeterHouse_Bouncer_Text_1:
	.string "You're cleared.\p"
	.string "Head on down whenever you're ready.\p"
	.string "Just don't cause any trouble.$"

PeterHouse_Bouncer_Text_2:
	.string "Hold up.\p"
	.string "You need to check in with the bouncer\n"
	.string "at the table first.\p"
	.string "No exceptions.$"

PeterHouse_Bouncer_Text_3:
	.string "Sorry, VIP access only.\p"
	.string "You need to know someone to get in\n"
	.string "here.\p"
	.string "Or bring something special...$"

PeterHouse_Machoke_Text_0:
	.string "MACHOKE$"

PeterHouse_Machoke_Text_1:
	.string "MACHOKE!\p"
	.string "(The Machoke cracks its knuckles\n"
	.string "menacingly.)$"

PeterHouse_DoorGuard_Text_0:
	.string "You're on the list now.\p"
	.string "Go enjoy the party.\p"
	.string "PETER's got the best beats in\n"
	.string "Lionsarch.$"

PeterHouse_DoorGuard_Text_1:
	.string "Oh, you've got something from ALI?\p"
	.string "Why didn't you say so!\p"
	.string "Go talk to BRUNO, he'll let you through.$"

PeterHouse_DoorGuard_Text_2:
	.string "Hey BRUNO! This one's cleared!$"

PeterHouse_DoorGuard_Text_3:
	.string "Name and reference, please.\p"
	.string "You don't know anyone?\p"
	.string "Then I can't let you in. House rules.$"

PeterHouse_PartyGirl_Text_0:
	.string "Party Girl$"

PeterHouse_PartyGirl_Text_1:
	.string "That was SO fun!\p"
	.string "Peter's parties are the best!\p"
	.string "Gotta come back next weekend!$"

PeterHouse_NPC_Peter_Text_0:
	.string "PETER$"

PeterHouse_NPC_Peter_Text_1:
	.string "Hey there! You looking for something?\p"
	.string "If you're here about the party... well,\n"
	.string "you gotta know the password first.\p"
	.string "Or bring me something special from my\n"
	.string "friend ALI down south.$"

PeterHouse_NPC_Peter_Text_2:
	.string "The groove is strong tonight!\p"
	.string "Feel free to head downstairs anytime.\p"
	.string "The basement is where the magic\n"
	.string "happens.$"

PeterHouse_Woman_Neighbor_Text_0:
	.string "PETER is such a nice young man.\p"
	.string "A bit loud with his music sometimes, but\n"
	.string "he's always polite.\p"
	.string "I hear thumping bass at odd hours...\n"
	.string "must be doing aerobics or something.$"

PeterHouse_RecordPlayer_Text_0:
	.string "An old record player sits in the corner.\p"
	.string "A vinyl record is spinning: 'Stayin'\n"
	.string "Alive' by the Bee Gees.$"

PeterHouse_Bookshelf_Text_0:
	.string "The shelf is filled with vinyl records:\n"
	.string "Earth, Wind & Fire\n"
	.string "Donna Summer\n"
	.string "Kool & The Gang\n"
	.string "Chic\p"
	.string "...All disco classics!$"

PeterHouse_DiscoBalPostet_Text_0:
	.string "A glittery poster on the wall:\n"
	.string "'DISCO WILL NEVER DIE'\n"
	.string "with a silhouette of a dancer in\l"
	.string "platform shoes.$"
