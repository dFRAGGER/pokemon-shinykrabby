LionsarchCity_Indoor_PeterBasementParty_MapScripts::
	.byte 0


DiscoBasement_DJ_Peter::
	lock
	faceplayer
	setspeaker DiscoBasement_DJ_Peter_Text_0
	goto_if_set FLAG_DELIVERED_ALIS_PACKAGE_TO_PETER, DiscoBasement_DJ_Peter_2
	checkitem ITEM_SOOT_SACK, 1
	compare VAR_RESULT, 0
	goto_if_ne DiscoBasement_DJ_Peter_3
	setspeaker DiscoBasement_DJ_Peter_Text_0
	msgbox DiscoBasement_DJ_Peter_Text_26
DiscoBasement_DJ_Peter_1:
	waitmessage
	release
	return

DiscoBasement_DJ_Peter_2:
	goto_if_set FLAG_RECEIVED_CLIMBING_ROPE, DiscoBasement_DJ_Peter_7
	setspeaker DiscoBasement_DJ_Peter_Text_0
	msgbox DiscoBasement_DJ_Peter_Text_16
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_3:
	setspeaker DiscoBasement_DJ_Peter_Text_0
	msgbox DiscoBasement_DJ_Peter_Text_17
	waitmessage
	setspeaker DiscoBasement_DJ_Peter_Text_0
	msgbox DiscoBasement_DJ_Peter_Text_18
	waitmessage
	removeitem ITEM_SOOT_SACK, 1
	setflag FLAG_DELIVERED_ALIS_PACKAGE_TO_PETER
	setspeaker DiscoBasement_DJ_Peter_Text_0
	msgbox DiscoBasement_DJ_Peter_Text_19
	waitmessage
	setspeaker DiscoBasement_DJ_Peter_Text_0
	msgbox DiscoBasement_DJ_Peter_Text_20
	waitmessage
	setspeaker DiscoBasement_DJ_Peter_Text_0
	msgbox DiscoBasement_DJ_Peter_Text_21
	waitmessage
	setspeaker DiscoBasement_DJ_Peter_Text_0
	msgbox DiscoBasement_DJ_Peter_Text_22
	waitmessage
	setspeaker DiscoBasement_DJ_Peter_Text_0
	msgbox DiscoBasement_DJ_Peter_Text_23
	waitmessage
	giveitem ITEM_CLIMBING_ROPE
	setflag FLAG_RECEIVED_CLIMBING_ROPE
	setspeaker DiscoBasement_DJ_Peter_Text_0
	msgbox DiscoBasement_DJ_Peter_Text_24
	waitmessage
	setspeaker DiscoBasement_DJ_Peter_Text_0
	msgbox DiscoBasement_DJ_Peter_Text_25
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_7:
	setspeaker DiscoBasement_DJ_Peter_Text_0
	goto_if_set FLAG_STEEL_FACTORY_COMPLETE, DiscoBasement_DJ_Peter_10
	goto_if_set FLAG_STEEL_FACTORY_TUNNEL_OPEN, DiscoBasement_DJ_Peter_11
	goto_if_set FLAG_PETER_GAVE_TUNNEL_PERMISSION, DiscoBasement_DJ_Peter_12
	goto_if_set FLAG_HIDE_FACULTY_AT_WESTLION_MINE, DiscoBasement_DJ_Peter_13
	msgbox DiscoBasement_DJ_Peter_Text_15
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_10:
	goto_if_set FLAG_PETER_GAVE_FACTORY_REWARD, DiscoBasement_DJ_Peter_19
	msgbox DiscoBasement_DJ_Peter_Text_2
	waitmessage
	setspeaker DiscoBasement_DJ_Peter_Text_0
	msgbox DiscoBasement_DJ_Peter_Text_3
	waitmessage
	setspeaker DiscoBasement_DJ_Peter_Text_0
	msgbox DiscoBasement_DJ_Peter_Text_4
	waitmessage
	giveitem ITEM_TM38
	setflag FLAG_PETER_GAVE_FACTORY_REWARD
	setspeaker DiscoBasement_DJ_Peter_Text_0
	msgbox DiscoBasement_DJ_Peter_Text_5
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_11:
	msgbox DiscoBasement_DJ_Peter_Text_6
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_12:
	msgbox DiscoBasement_DJ_Peter_Text_7
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_13:
	msgbox DiscoBasement_DJ_Peter_Text_8
	waitmessage
	setspeaker DiscoBasement_DJ_Peter_Text_0
	msgbox DiscoBasement_DJ_Peter_Text_9
	waitmessage
	setspeaker DiscoBasement_DJ_Peter_Text_0
	msgbox DiscoBasement_DJ_Peter_Text_10
	waitmessage
	setspeaker DiscoBasement_DJ_Peter_Text_0
	msgbox DiscoBasement_DJ_Peter_Text_11
	waitmessage
	setspeaker DiscoBasement_DJ_Peter_Text_0
	msgbox DiscoBasement_DJ_Peter_Text_12
	waitmessage
	setspeaker DiscoBasement_DJ_Peter_Text_0
	msgbox DiscoBasement_DJ_Peter_Text_13
	waitmessage
	setspeaker DiscoBasement_DJ_Peter_Text_0
	msgbox DiscoBasement_DJ_Peter_Text_14
	waitmessage
	setflag FLAG_PETER_GAVE_TUNNEL_PERMISSION
	setflag FLAG_HIDE_RECTOR_ELECTABUZZ_AFTER_BATTLE
	goto DiscoBasement_DJ_Peter_1

DiscoBasement_DJ_Peter_19:
	msgbox DiscoBasement_DJ_Peter_Text_1
	goto DiscoBasement_DJ_Peter_1


DiscoBasement_Guard_DJStage::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	faceplayer
	setspeaker DiscoBasement_Guard_DJStage_Text_0
	goto_if_set FLAG_BASEMENT_DJ_STAGE_ACCESS, DiscoBasement_Guard_DJStage_2
	checkitem ITEM_SOOT_SACK, 1
	compare VAR_RESULT, 0
	goto_if_ne DiscoBasement_Guard_DJStage_3
	setspeaker DiscoBasement_Guard_DJStage_Text_0
	msgbox DiscoBasement_Guard_DJStage_Text_6
DiscoBasement_Guard_DJStage_1:
	waitmessage
	release
	return

DiscoBasement_Guard_DJStage_2:
	setspeaker DiscoBasement_Guard_DJStage_Text_0
	msgbox DiscoBasement_Guard_DJStage_Text_1
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_0
	compare VAR_TEMP_0, 21
	goto_if_eq DiscoBasement_Guard_DJStage_17
DiscoBasement_Guard_DJStage_15:
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_14
DiscoBasement_Guard_DJStage_12:
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_11
DiscoBasement_Guard_DJStage_7:
	waitmovement
	goto DiscoBasement_Guard_DJStage_1

DiscoBasement_Guard_DJStage_3:
	setspeaker DiscoBasement_Guard_DJStage_Text_0
	msgbox DiscoBasement_Guard_DJStage_Text_2
	waitmessage
	setspeaker DiscoBasement_Guard_DJStage_Text_0
	msgbox DiscoBasement_Guard_DJStage_Text_3
	waitmessage
	setspeaker DiscoBasement_Guard_DJStage_Text_0
	msgbox DiscoBasement_Guard_DJStage_Text_4
	waitmessage
	setflag FLAG_BASEMENT_DJ_STAGE_ACCESS
	setspeaker DiscoBasement_Guard_DJStage_Text_0
	msgbox DiscoBasement_Guard_DJStage_Text_5
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_0
	compare VAR_TEMP_0, 21
	goto_if_eq DiscoBasement_Guard_DJStage_30
DiscoBasement_Guard_DJStage_28:
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_27
DiscoBasement_Guard_DJStage_25:
	compare VAR_TEMP_0, 22
	goto_if_eq DiscoBasement_Guard_DJStage_24
DiscoBasement_Guard_DJStage_20:
	waitmovement
	goto DiscoBasement_Guard_DJStage_1

DiscoBasement_Guard_DJStage_8:
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_1
	waitmovement
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_9:
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_3
	waitmovement
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_10:
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_4
	waitmovement
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_11:
	compare VAR_TEMP_1, 4
	goto_if_eq DiscoBasement_Guard_DJStage_10
	goto DiscoBasement_Guard_DJStage_7

DiscoBasement_Guard_DJStage_14:
	compare VAR_TEMP_1, 6
	goto_if_eq DiscoBasement_Guard_DJStage_9
	goto DiscoBasement_Guard_DJStage_12

DiscoBasement_Guard_DJStage_17:
	compare VAR_TEMP_1, 5
	goto_if_eq DiscoBasement_Guard_DJStage_8
	goto DiscoBasement_Guard_DJStage_15

DiscoBasement_Guard_DJStage_21:
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_1
	waitmovement
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_22:
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_3
	waitmovement
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_23:
	applymovement LOCALID_PLAYER, DiscoBasement_Guard_DJStage_Movement_4
	waitmovement
	applymovement 10, DiscoBasement_Guard_DJStage_Movement_2
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_24:
	compare VAR_TEMP_1, 4
	goto_if_eq DiscoBasement_Guard_DJStage_23
	goto DiscoBasement_Guard_DJStage_20

DiscoBasement_Guard_DJStage_27:
	compare VAR_TEMP_1, 6
	goto_if_eq DiscoBasement_Guard_DJStage_22
	goto DiscoBasement_Guard_DJStage_25

DiscoBasement_Guard_DJStage_30:
	compare VAR_TEMP_1, 5
	goto_if_eq DiscoBasement_Guard_DJStage_21
	goto DiscoBasement_Guard_DJStage_28


DiscoBasement_Guard_Tunnel::
	lockall
	faceplayer
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
	goto_if_set FLAG_STEEL_FACTORY_TUNNEL_OPEN, DiscoBasement_Guard_Tunnel_2
	goto_if_set FLAG_PETER_GAVE_TUNNEL_PERMISSION, DiscoBasement_Guard_Tunnel_5
	msgbox DiscoBasement_Guard_Tunnel_Text_3
	waitmessage
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
	msgbox DiscoBasement_Guard_Tunnel_Text_4
	waitmessage
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
	msgbox DiscoBasement_Guard_Tunnel_Text_5, MSGBOX_AUTOCLOSE
	waitmessage
	releaseall
	return

DiscoBasement_Guard_Tunnel_2:
	msgbox DiscoBasement_Guard_Tunnel_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	releaseall
	end

DiscoBasement_Guard_Tunnel_5:
	msgbox DiscoBasement_Guard_Tunnel_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	setflag FLAG_STEEL_FACTORY_TUNNEL_OPEN
	releaseall
	end


DiscoBasement_Guard_Machoke::
	lockall
	faceplayer
	setspeaker DiscoBasement_Guard_Machoke_Text_0
	msgbox DiscoBasement_Guard_Machoke_Text_1
	waitmessage
	releaseall
	return


DiscoBasement_Guard_Staring::
	lockall
	faceplayer
	setspeaker DiscoBasement_Guard_Staring_Text_0
	msgbox DiscoBasement_Guard_Staring_Text_1
	waitmessage
	releaseall
	return


DiscoBasement_Giel::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	faceplayer
	setspeaker DiscoBasement_Giel_Text_0
	goto_if_set FLAG_GIEL_LEFT_BASEMENT, DiscoBasement_Giel_2
	setspeaker DiscoBasement_Giel_Text_0
	msgbox DiscoBasement_Giel_Text_1
	waitmessage
	setspeaker DiscoBasement_Giel_Text_0
	msgbox DiscoBasement_Giel_Text_2
	waitmessage
	applymovement 7, DiscoBasement_Giel_Movement_0
	waitmovement
	compare VAR_TEMP_0, 16
	goto_if_eq DiscoBasement_Giel_6
DiscoBasement_Giel_4:
	delay 30
	setspeaker DiscoBasement_Giel_Text_0
	msgbox DiscoBasement_Giel_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 7, DiscoBasement_Giel_Movement_2
	waitmovement
	setspeaker DiscoBasement_Giel_Text_0
	msgbox DiscoBasement_Giel_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_PIN
	applymovement 4, DiscoBasement_Giel_Movement_3
	waitmovement
	setspeaker NULL
	msgbox DiscoBasement_Giel_Text_5
	waitmessage
	playse SE_PIN
	applymovement 5, DiscoBasement_Giel_Movement_3
	waitmovement
	msgbox DiscoBasement_Giel_Text_6
	waitmessage
	playse SE_PIN
	applymovement 6, DiscoBasement_Giel_Movement_3
	waitmovement
	msgbox DiscoBasement_Giel_Text_7, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 7, DiscoBasement_Giel_Movement_4
	waitmovement
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	setspeaker DiscoBasement_Giel_Text_0
	msgbox DiscoBasement_Giel_Text_8
	waitmessage
	setspeaker DiscoBasement_Giel_Text_0
	msgbox DiscoBasement_Giel_Text_9
	waitmessage
	setspeaker DiscoBasement_Giel_Text_0
	msgbox DiscoBasement_Giel_Text_10, MSGBOX_AUTOCLOSE
	waitmessage
	compare VAR_TEMP_0, 17
	goto_if_eq DiscoBasement_Giel_11
DiscoBasement_Giel_9:
	applymovement LOCALID_PLAYER, DiscoBasement_Giel_Movement_6
	applymovement 7, DiscoBasement_Giel_Movement_7
	waitmovement
	setflag FLAG_GIEL_LEFT_BASEMENT
	removeobject 7
	applymovement 4, DiscoBasement_Giel_Movement_8
	applymovement 5, DiscoBasement_Giel_Movement_8
	applymovement 6, DiscoBasement_Giel_Movement_8
	waitmovement
	release
	return

DiscoBasement_Giel_2:
	releaseall
	end

DiscoBasement_Giel_5:
	applymovement LOCALID_PLAYER, DiscoBasement_Giel_Movement_1
	goto DiscoBasement_Giel_4

DiscoBasement_Giel_6:
	compare VAR_TEMP_1, 8
	goto_if_eq DiscoBasement_Giel_5
	goto DiscoBasement_Giel_4

DiscoBasement_Giel_10:
	applymovement LOCALID_PLAYER, DiscoBasement_Giel_Movement_5
	goto DiscoBasement_Giel_9

DiscoBasement_Giel_11:
	compare VAR_TEMP_1, 9
	goto_if_eq DiscoBasement_Giel_10
	goto DiscoBasement_Giel_9


DiscoBasement_Dancer_1::
	lockall
	faceplayer
	msgbox DiscoBasement_Dancer_1_Text_0
	releaseall
	return


DiscoBasement_Dancer_2::
	lockall
	faceplayer
	msgbox DiscoBasement_Dancer_2_Text_0
	releaseall
	return


DiscoBasement_Dancer_3::
	lockall
	faceplayer
	msgbox DiscoBasement_Dancer_3_Text_0
	releaseall
	return


DiscoBasement_Chillaxer::
	lockall
	faceplayer
	msgbox DiscoBasement_Chillaxer_Text_0
	releaseall
	return


DiscoBasement_AliFriend::
	lockall
	faceplayer
	msgbox DiscoBasement_AliFriend_Text_0
	releaseall
	return


DiscoBasement_Oldwoman::
	lockall
	faceplayer
	msgbox DiscoBasement_Oldwoman_Text_0
	releaseall
	return


DiscoBasement_DiscoBall::
	lockall
	msgbox DiscoBasement_DiscoBall_Text_0
	releaseall
	return


DiscoBasement_SpeakerSystem::
	lockall
	msgbox DiscoBasement_SpeakerSystem_Text_0
	releaseall
	return


DiscoBasement_VinylCollection::
	lockall
	msgbox DiscoBasement_VinylCollection_Text_0
	releaseall
	return


DiscoBasement_TunnelEntrance_Check::
	goto_if_set FLAG_STEEL_FACTORY_TUNNEL_OPEN, DiscoBasement_TunnelEntrance_Check_2
	lockall
	playse SE_PIN
	applymovement 13, DiscoBasement_TunnelEntrance_Check_Movement_0
	waitmovement
	setspeaker DiscoBasement_Guard_Tunnel_Text_0
	msgbox DiscoBasement_TunnelEntrance_Check_Text_0, MSGBOX_AUTOCLOSE
	applymovement LOCALID_PLAYER, DiscoBasement_TunnelEntrance_Check_Movement_1
	waitmovement
	releaseall
	end

DiscoBasement_TunnelEntrance_Check_2:
	end


DiscoBasement_SecretEntrance::
	lockall
	msgbox DiscoBasement_SecretEntrance_Text_0
	releaseall
	return


DiscoBasement_Guard_DJStage_Movement_0:
	walk_right
	face_left
	step_end

DiscoBasement_Guard_DJStage_Movement_1:
	walk_right
	walk_up
	step_end

DiscoBasement_Guard_DJStage_Movement_2:
	walk_left
	face_down
	step_end

DiscoBasement_Guard_DJStage_Movement_3:
	walk_up
	walk_up
	step_end

DiscoBasement_Guard_DJStage_Movement_4:
	walk_down
	walk_down
	step_end

DiscoBasement_Giel_Movement_0:
	face_left
	step_end

DiscoBasement_Giel_Movement_1:
	walk_down
	walk_right
	face_left
	step_end

DiscoBasement_Giel_Movement_2:
	walk_left
	step_end

DiscoBasement_Giel_Movement_3:
	emote_exclamation_mark
	face_right
	step_end

DiscoBasement_Giel_Movement_4:
	walk_right
	face_player
	step_end

DiscoBasement_Giel_Movement_5:
	jump_right
	face_down
	step_end

DiscoBasement_Giel_Movement_6:
	face_down
	step_end

DiscoBasement_Giel_Movement_7:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

DiscoBasement_Giel_Movement_8:
	face_up
	step_end

DiscoBasement_TunnelEntrance_Check_Movement_0:
	emote_exclamation_mark
	step_end

DiscoBasement_TunnelEntrance_Check_Movement_1:
	walk_up
	step_end

DiscoBasement_DJ_Peter_Text_0:
	.string "DJ PETER$"

DiscoBasement_DJ_Peter_Text_1:
	.string "Seriously, you did it.\p"
	.string "The Faculty's gone, the factory's quiet,\n"
	.string "and I can finally breathe again.\p"
	.string "Party's louder than ever down here.\p"
	.string "That's all thanks to you.$"

DiscoBasement_DJ_Peter_Text_2:
	.string "You actually did it.\p"
	.string "I didn't think... I mean, I KNEW you could\n"
	.string "do it.\p"
	.string "But still.\p"
	.string "The Faculty. Gone. From my city.$"

DiscoBasement_DJ_Peter_Text_3:
	.string "Look, I owe you.\p"
	.string "I had this stashed away for a while.\p"
	.string "Got it the hard way, if you know what I\n"
	.string "mean.\p"
	.string "There was a period in my life where I ran\n"
	.string "a little... HOT.\p"
	.string "Too hot.\p"
	.string "Like,\n"
	.string "everything-on-fire-including-myself\l"
	.string "hot.\p"
	.string "Not my proudest chapter.$"

DiscoBasement_DJ_Peter_Text_4:
	.string "Point is, I learned a thing or two about\n"
	.string "Overheat.\p"
	.string "Not the kind you want to experience\n"
	.string "personally, trust me.\p"
	.string "But the kind your Pokemon can actually\n"
	.string "USE?\p"
	.string "That's a different story.\p"
	.string "Here. Take the TM.\p"
	.string "You'll do more good with it than I ever\n"
	.string "did.$"

DiscoBasement_DJ_Peter_Text_5:
	.string "Now get back out there.\p"
	.string "And hey... stay funky.$"

DiscoBasement_DJ_Peter_Text_6:
	.string "Welcome back to the GROOVE ZONE!\p"
	.string "You making progress in there?\p"
	.string "That factory's been giving me the\n"
	.string "creeps for years.\p"
	.string "Good to know someone's finally poking\n"
	.string "around.$"

DiscoBasement_DJ_Peter_Text_7:
	.string "Tunnel's still open on our end.\p"
	.string "Paolo will let you through.\p"
	.string "Get in there and find out what they're\n"
	.string "really building.$"

DiscoBasement_DJ_Peter_Text_8:
	.string "Hey... you're back.\p"
	.string "You've got that look.\p"
	.string "Like you've just been somewhere you\n"
	.string "weren't supposed to be.\p"
	.string "...What happened?$"

DiscoBasement_DJ_Peter_Text_9:
	.string "...\p"
	.string "They pushed you into a CREVASSE?!\p"
	.string "I always knew the Faculty played dirty.\p"
	.string "But throwing someone into a pit...$"

DiscoBasement_DJ_Peter_Text_10:
	.string "And they've already moved everything\n"
	.string "to the factory.\p"
	.string "This is escalating faster than I\n"
	.string "thought.$"

DiscoBasement_DJ_Peter_Text_11:
	.string "I've been watching those people dig\n"
	.string "into those mountains for months.\p"
	.string "Every week the shipments get bigger.\p"
	.string "Every week the tremors get worse.$"

DiscoBasement_DJ_Peter_Text_12:
	.string "I can't sit on this anymore.\p"
	.string "You need to get into that factory.\p"
	.string "Luckely I know a way in that the\n"
	.string "Faculty doesn't.$"

DiscoBasement_DJ_Peter_Text_13:
	.string "There's a tunnel running from this\n"
	.string "basement straight to the factory's\l"
	.string "lower level.\p"
	.string "Old smuggling route.\p"
	.string "The Faculty thinks they sealed their\n"
	.string "end years ago.\p"
	.string "They didn't seal ours.$"

DiscoBasement_DJ_Peter_Text_14:
	.string "Paolo guards the entrance down here.\p"
	.string "I'll tell him you have my blessing to go\n"
	.string "through.\p"
	.string "Get in there.\p"
	.string "Find out what they're really building.\p"
	.string "And be careful.$"

DiscoBasement_DJ_Peter_Text_15:
	.string "Hey, you're still kicking around\n"
	.string "Lionsarch!\p"
	.string "Good to see you.\p"
	.string "Something's been feeling off up in\n"
	.string "those mountains lately.\p"
	.string "Stay funky out there.$"

DiscoBasement_DJ_Peter_Text_16:
	.string "Hey, thanks again for the delivery!\p"
	.string "Don't forget you've still got those\n"
	.string "boots of mine!$"

DiscoBasement_DJ_Peter_Text_17:
	.string "Wait... that smell...\p"
	.string "Is that what I think it is?$"

DiscoBasement_DJ_Peter_Text_18:
	.string "You brought the goods from Ali!\p"
	.string "My man! This is exactly what I needed!\p"
	.string "The party can really get started now!$"

DiscoBasement_DJ_Peter_Text_19:
	.string "Let me return the favor - first round\n"
	.string "of dancing is on the house!$"

DiscoBasement_DJ_Peter_Text_20:
	.string "...\p"
	.string "No?\p"
	.string "You don't want to dance?\p"
	.string "You've got that look.\p"
	.string "Someone with places to be.\p"
	.string "Tough crowd!$"

DiscoBasement_DJ_Peter_Text_21:
	.string "Alright, let me return the favor another\n"
	.string "way.\p"
	.string "When I first rolled into Lionsarch, I\n"
	.string "had nothing.\p"
	.string "No gig, no place, no plan.\p"
	.string "Just a pair of boots and a whole lot of\n"
	.string "nerve.$"

DiscoBasement_DJ_Peter_Text_22:
	.string "Nights I'd dance in 'em right here on\n"
	.string "this floor.\p"
	.string "Days I'd climb the Lion Mountains in the\n"
	.string "same pair.\p"
	.string "Up those rocky ridges before the sun\n"
	.string "got too high.\p"
	.string "Same boots. Same rhythm. Different\n"
	.string "terrain.$"

DiscoBasement_DJ_Peter_Text_23:
	.string "I got new ones eventually.\p"
	.string "But these old ones deserve someone\n"
	.string "who'll actually use 'em.\p"
	.string "Here. Take 'em.\p"
	.string "They'll get you places.$"

DiscoBasement_DJ_Peter_Text_24:
	.string "Come back sometime, yeah?\p"
	.string "There's more down here than just good\n"
	.string "music.\p"
	.string "You talk to the right people... you'd be\n"
	.string "surprised what doors open.$"

DiscoBasement_DJ_Peter_Text_25:
	.string "Now get out there.\p"
	.string "And remember... stay funky!$"

DiscoBasement_DJ_Peter_Text_26:
	.string "Welcome to the GROOVE ZONE!\p"
	.string "This is where the real party happens!\p"
	.string "Old school disco, baby!\p"
	.string "None of that modern stuff - just pure,\n"
	.string "unadulterated FUNK!$"

DiscoBasement_Guard_DJStage_Text_0:
	.string "BOUNCER CARLO$"

DiscoBasement_Guard_DJStage_Text_1:
	.string "Alright, you're cool.\p"
	.string "Our VIPs can go where ever they want.\p"
	.string "Enjoy the party!$"

DiscoBasement_Guard_DJStage_Text_2:
	.string "Hey, hold up.\p"
	.string "Nobody gets past me without clearance.\p"
	.string "...$"

DiscoBasement_Guard_DJStage_Text_3:
	.string "Wait... is that Ali's stash you're\n"
	.string "carrying?\p"
	.string "I can smell it from here!\p"
	.string "Damn, that's the good stuff!$"

DiscoBasement_Guard_DJStage_Text_4:
	.string "Alright, you're clearly here on business.\p"
	.string "Peter's gonna want to see you.\p"
	.string "Go on through, VIP access granted!$"

DiscoBasement_Guard_DJStage_Text_5:
	.string "Tell Peter I said what's up!$"

DiscoBasement_Guard_DJStage_Text_6:
	.string "Hey, VIP area only past this point.\p"
	.string "No entry without clearance from the\n"
	.string "boss.\p"
	.string "You want in? Talk to someone who knows\n"
	.string "someone.$"

DiscoBasement_Guard_Tunnel_Text_0:
	.string "BOUNCER PAOLO$"

DiscoBasement_Guard_Tunnel_Text_1:
	.string "Peter said to let you through.\p"
	.string "Watch yourself in there.\p"
	.string "The Faculty doesn't take kindly to\n"
	.string "uninvited guests.$"

DiscoBasement_Guard_Tunnel_Text_2:
	.string "Just got the clearance over the radio\n"
	.string "from Peter.\p"
	.string "Said you did him a solid.\p"
	.string "He asked me to let you through the\n"
	.string "tunnel, the keys are in the door.\p"
	.string "Be careful in there, alright?$"

DiscoBasement_Guard_Tunnel_Text_3:
	.string "You see that old tunnel over there?\p"
	.string "It used to run all the way to the Iron\n"
	.string "Factory.\p"
	.string "Back in the day, it was a smuggling\n"
	.string "route.\p"
	.string "Direct link from the harbor, if you know\n"
	.string "what I mean.$"

DiscoBasement_Guard_Tunnel_Text_4:
	.string "Used to move all kinds of...\n"
	.string "'merchandise' through there.\p"
	.string "No customs, no questions asked.\p"
	.string "The good old days, you know?$"

DiscoBasement_Guard_Tunnel_Text_5:
	.string "But then the Faculty took over the\n"
	.string "factory.\p"
	.string "They sealed the whole thing up.\p"
	.string "Now only Peter and the Faculty have the\n"
	.string "keys.\p"
	.string "Rest of us are locked out for good.\p"
	.string "Peter told me to not let anyone near it,\n"
	.string "so... here I am, doing my part to keep\l"
	.string "the secrets safe.$"

DiscoBasement_Guard_Machoke_Text_0:
	.string "MACHOKE$"

DiscoBasement_Guard_Machoke_Text_1:
	.string "MACHOKE! CHOKE!$"

DiscoBasement_Guard_Staring_Text_0:
	.string "BOUNCER MARCO$"

DiscoBasement_Guard_Staring_Text_1:
	.string "Man, look at those dancers go!\p"
	.string "Peter really knows how to throw a\n"
	.string "party!\p"
	.string "I could watch them dance all night!$"

DiscoBasement_Giel_Text_0:
	.string "GIEL$"

DiscoBasement_Giel_Text_1:
	.string "Oh hey, it's you!\p"
	.string "Small world, right?\p"
	.string "I got here way faster than you.\p"
	.string "I know people, you see. Connections.$"

DiscoBasement_Giel_Text_2:
	.string "When you mentioned Lionsarch City back\n"
	.string "in Siltroot Town, I got inspired.\p"
	.string "Thought I'd check out the scene here.\p"
	.string "Maybe meet some intellectuals who\n"
	.string "appreciate fine conversation.$"

DiscoBasement_Giel_Text_3:
	.string "See those lovely ladies over there?\p"
	.string "I've been trying to impress them with my\n"
	.string "knowledge.\p"
	.string "Watch this!$"

DiscoBasement_Giel_Text_4:
	.string "Hey Ladies!!\p"
	.string "Did you know about the historical\n"
	.string "conflicts in the Kanto region?\p"
	.string "Fascinating stuff, really.\p"
	.string "The war between Celadon and Saffron...\p"
	.string "The trade disputes of Vermilion\n"
	.string "Harbor...\p"
	.string "Classic historical drama!$"

DiscoBasement_Giel_Text_5:
	.string "Ugh, this guy again?\p"
	.string "Nobody wants to hear about ancient\n"
	.string "wars!\p"
	.string "We're trying to DANCE here!$"

DiscoBasement_Giel_Text_6:
	.string "Seriously, take the hint!\p"
	.string "You've been hovering around us all\n"
	.string "night!\p"
	.string "So creepy!$"

DiscoBasement_Giel_Text_7:
	.string "Security! Can someone get this weirdo\n"
	.string "away from us?!$"

DiscoBasement_Giel_Text_8:
	.string "FINE!\p"
	.string "I see how it is!\p"
	.string "You just can't appreciate intellectual\n"
	.string "discourse!\p"
	.string "This is what's wrong with society today!$"

DiscoBasement_Giel_Text_9:
	.string "Women just don't appreciate a man who\n"
	.string "understands history!\p"
	.string "I try to share my knowledge and THIS is\n"
	.string "the thanks I get?!$"

DiscoBasement_Giel_Text_10:
	.string "I'm done with this city!\p"
	.string "The disco scene here is TERRIBLE\n"
	.string "anyway!\p"
	.string "I'm going back to Hezik City where\n"
	.string "people actually have CULTURE!$"

DiscoBasement_Dancer_1_Text_0:
	.string "Can you FEEL it?!\p"
	.string "The bass is hitting different tonight!\p"
	.string "I haven't stopped dancing for THREE\n"
	.string "HOURS!$"

DiscoBasement_Dancer_2_Text_0:
	.string "This place is the best-kept secret in\n"
	.string "Lionsarch!\p"
	.string "No Faculty goons, no harbor noise...\p"
	.string "Just pure vibes and disco lights!$"

DiscoBasement_Dancer_3_Text_0:
	.string "PETER only plays vinyl.\p"
	.string "He says digital music doesn't have the\n"
	.string "same soul.\p"
	.string "I don't know about that, but this music\n"
	.string "SLAPS!$"

DiscoBasement_Chillaxer_Text_0:
	.string "I needed this, you know?\p"
	.string "The city above is all smog and industry.\p"
	.string "Down here, it's like traveling back to a\n"
	.string "better time.$"

DiscoBasement_AliFriend_Text_0:
	.string "ALI from Siltroot Town hooks PETER up\n"
	.string "with the good stuff.\p"
	.string "I mean... the good MUSIC.\p"
	.string "Yeah. Definitely just music.$"

DiscoBasement_Oldwoman_Text_0:
	.string "I used to come here when I was younger.\p"
	.string "PETER's been throwing parties here for\n"
	.string "decades!\p"
	.string "The music's changed, but the vibe is\n"
	.string "still the same.$"

DiscoBasement_DiscoBall_Text_0:
	.string "A massive disco ball spins overhead,\n"
	.string "scattering light across the room.\p"
	.string "It's mesmerizing...$"

DiscoBasement_SpeakerSystem_Text_0:
	.string "The Loudred is blasting:\n"
	.string "'Le Freak' by Chic\p"
	.string "'FREAK OUT!'$"

DiscoBasement_VinylCollection_Text_0:
	.string "PETER's vinyl collection is MASSIVE.\p"
	.string "Hundreds of records, all meticulously\n"
	.string "organized.\p"
	.string "This must have cost a fortune!$"

DiscoBasement_TunnelEntrance_Check_Text_0:
	.string "Hey! You can't just walk in there.\p"
	.string "That tunnel is off-limits.\p"
	.string "If you want access, talk to me first.$"

DiscoBasement_SecretEntrance_Text_0:
	.string "A discrete entrance hidden behind a\n"
	.string "bookshelf upstairs.\p"
	.string "Very clever!$"
