Indoor_Maasje_Jakub_Home_MapScripts::
	.byte 0


Indoor_Maasje_Jakub_Home_JakubConvo::
	lock
	faceplayer
	goto_if_unset FLAG_JAKUB_CONVO, Indoor_Maasje_Jakub_Home_JakubConvo_2
	goto_if_unset FLAG_BADGE01_GET, Indoor_Maasje_Jakub_Home_JakubConvo_5
	goto_if_set FLAG_BADGE01_GET, Indoor_Maasje_Jakub_Home_JakubConvo_12
Indoor_Maasje_Jakub_Home_JakubConvo_10:
	goto_if_set FLAG_BADGE01_GET, Indoor_Maasje_Jakub_Home_JakubConvo_17
Indoor_Maasje_Jakub_Home_JakubConvo_15:
	release
	end

Indoor_Maasje_Jakub_Home_JakubConvo_2:
	setflag FLAG_JAKUB_CONVO
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_1
	setspeaker NULL
	giveitem ITEM_SCANNER
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_2
	waitmessage
	playse SE_PIN
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0
	waitmovement
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_PIN
	applymovement LOCALID_PLAYER, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_1
	delay 120
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	goto_if_set FLAG_BADGE01_GET, Indoor_Maasje_Jakub_Home_JakubConvo_8
Indoor_Maasje_Jakub_Home_JakubConvo_7:
	release
	end

Indoor_Maasje_Jakub_Home_JakubConvo_5:
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_6, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end

Indoor_Maasje_Jakub_Home_JakubConvo_8:
	playse SE_PIN
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0
	waitmovement
	setflag FLAG_JAKUB_CONVO_2
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_5, MSGBOX_AUTOCLOSE
	waitmessage
	goto Indoor_Maasje_Jakub_Home_JakubConvo_7

Indoor_Maasje_Jakub_Home_JakubConvo_11:
	setflag FLAG_JAKUB_CONVO_2
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_7, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end

Indoor_Maasje_Jakub_Home_JakubConvo_12:
	goto_if_unset FLAG_JAKUB_CONVO_2, Indoor_Maasje_Jakub_Home_JakubConvo_11
	goto Indoor_Maasje_Jakub_Home_JakubConvo_10

Indoor_Maasje_Jakub_Home_JakubConvo_16:
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_8, MSGBOX_AUTOCLOSE
	waitmessage
	goto Indoor_Maasje_Jakub_Home_JakubConvo_15

Indoor_Maasje_Jakub_Home_JakubConvo_17:
	goto_if_set FLAG_JAKUB_CONVO_2, Indoor_Maasje_Jakub_Home_JakubConvo_16
	goto Indoor_Maasje_Jakub_Home_JakubConvo_15


Indoor_Maasje_JacobChecksonGeorge::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 2
	goto_if_eq Indoor_Maasje_JacobChecksonGeorge_4
Indoor_Maasje_JacobChecksonGeorge_3:
	playse SE_PIN
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0
	waitmovement
	delay 60
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_0, MSGBOX_AUTOCLOSE
	delay 60
	applymovement 3, Indoor_Maasje_JacobChecksonGeorge_Movement_2
	waitmovement
	delay 60
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	applymovement 3, Indoor_Maasje_JacobChecksonGeorge_Movement_3
	waitmovement
	faceplayer
	return

	return

Indoor_Maasje_JacobChecksonGeorge_2:
	playse SE_PIN
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0
	waitmovement
	delay 60
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_0, MSGBOX_AUTOCLOSE
	delay 60
	applymovement 3, Indoor_Maasje_JacobChecksonGeorge_Movement_0
	waitmovement
	delay 60
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	applymovement 3, Indoor_Maasje_JacobChecksonGeorge_Movement_1
	waitmovement
	faceplayer
	return

Indoor_Maasje_JacobChecksonGeorge_4:
	compare VAR_TEMP_1, 5
	goto_if_eq Indoor_Maasje_JacobChecksonGeorge_2
	goto Indoor_Maasje_JacobChecksonGeorge_3


Indoor_Maasje_Jakub_Home_SiennaConvo::
	lock
	faceplayer
	setspeaker Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0
	msgbox Indoor_Maasje_Jakub_Home_SiennaConvo_Text_1
	release
	return


Indoor_Maasje_Jacob_Home_Sienna1::
	lock
	hidefollower
	faceplayer
	playse SE_PIN
	applymovement 4, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0
	waitmovement
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jacob_Home_Sienna1_3
Indoor_Maasje_Jacob_Home_Sienna1_1:
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jacob_Home_Sienna1_7
	return

Indoor_Maasje_Jacob_Home_Sienna1_2:
	applymovement LOCALID_PLAYER, Indoor_Maasje_Jacob_Home_Sienna1_Movement_0
	setspeaker Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0
	msgbox Indoor_Maasje_Jacob_Home_Sienna1_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_PLAYER, Indoor_Maasje_Jacob_Home_Sienna1_Movement_1
	applymovement 4, Indoor_Maasje_Jacob_Home_Sienna1_Movement_2
	waitmovement
	delay 120
	applymovement 4, Indoor_Maasje_Jacob_Home_Sienna1_Movement_3
	applymovement LOCALID_PLAYER, Indoor_Maasje_Jacob_Home_Sienna1_Movement_4
	waitmovement
	setspeaker Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0
	msgbox Indoor_Maasje_Jacob_Home_Sienna1_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 4, Indoor_Maasje_Jacob_Home_Sienna1_Movement_4
	delay 60
	applymovement 1, Indoor_Maasje_Jacob_Home_Sienna1_Movement_5
	setspeaker Indoor_Maasje_Jacob_Home_Sienna1_Text_2
	msgbox Indoor_Maasje_Jacob_Home_Sienna1_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 1, Indoor_Maasje_Jacob_Home_Sienna1_Movement_1
	applymovement 4, Indoor_Maasje_Jacob_Home_Sienna1_Movement_6
	waitmovement
	setflag FLAG_SIENNA_CONVO
	release
	end

Indoor_Maasje_Jacob_Home_Sienna1_3:
	goto_if_unset FLAG_SIENNA_CONVO, Indoor_Maasje_Jacob_Home_Sienna1_2
	goto Indoor_Maasje_Jacob_Home_Sienna1_1

Indoor_Maasje_Jacob_Home_Sienna1_6:
	setspeaker Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0
	msgbox Indoor_Maasje_Jacob_Home_Sienna1_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 4, Indoor_Maasje_Jacob_Home_Sienna1_Movement_4
	waitmovement
	clearflag FLAG_TEMP_HIDE_FOLLOWER
	release
	end

Indoor_Maasje_Jacob_Home_Sienna1_7:
	goto_if_set FLAG_SIENNA_CONVO, Indoor_Maasje_Jacob_Home_Sienna1_6
	return


Indoor_Maasje_Jakub_Home_GeorgeConvo::
	lock
	faceplayer
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jakub_Home_GeorgeConvo_2
	setspeaker Indoor_Maasje_Jacob_Home_Sienna1_Text_2
	msgbox Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_1
Indoor_Maasje_Jakub_Home_GeorgeConvo_1:
	release
	return

Indoor_Maasje_Jakub_Home_GeorgeConvo_2:
	setspeaker Indoor_Maasje_Jacob_Home_Sienna1_Text_2
	msgbox Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_0
	goto Indoor_Maasje_Jakub_Home_GeorgeConvo_1


Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0:
	emote_exclamation_mark
	step_end

Indoor_Maasje_Jakub_Home_JakubConvo_Movement_1:
	emote_question_mark
	step_end

Indoor_Maasje_JacobChecksonGeorge_Movement_0:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Indoor_Maasje_JacobChecksonGeorge_Movement_1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	step_end

Indoor_Maasje_JacobChecksonGeorge_Movement_2:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Indoor_Maasje_JacobChecksonGeorge_Movement_3:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Indoor_Maasje_Jacob_Home_Sienna1_Movement_0:
	jump_right
	face_left
	step_end

Indoor_Maasje_Jacob_Home_Sienna1_Movement_1:
	face_down
	step_end

Indoor_Maasje_Jacob_Home_Sienna1_Movement_2:
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_down
	step_end

Indoor_Maasje_Jacob_Home_Sienna1_Movement_3:
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_down
	face_right
	step_end

Indoor_Maasje_Jacob_Home_Sienna1_Movement_4:
	face_left
	step_end

Indoor_Maasje_Jacob_Home_Sienna1_Movement_5:
	face_right
	step_end

Indoor_Maasje_Jacob_Home_Sienna1_Movement_6:
	walk_left
	step_end

Indoor_Maasje_Jakub_Home_JakubConvo_Text_0:
	.string "JACOB$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_1:
	.string "Ah!\n"
	.string "You made it!\p"
	.string "As you can see, the crisis has been\n"
	.string "averted.\p"
	.string "The Krabby are back to their peaceful,\n"
	.string "sand-scuttling selves.\p"
	.string "My wife has...\p"
	.string "...mostly forgiven me.\p"
	.string "Here, take a look at this:$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_2:
	.string "I found it on the way out of Crabhill.\p"
	.string "It must have been dropped by that\n"
	.string "strange man when he fled the scene.\p"
	.string "It is fried, but it proves he was up to\n"
	.string "something nasty.\p"
	.string "I've heard rumors about a group called\n"
	.string "The Faculty.\p"
	.string "They talk about 'optimizing nature,' but\n"
	.string "this looked like some form of mind\l"
	.string "control.\p"
	.string "Apparently they all wear a sleek, brown\n"
	.string "uniform.\p"
	.string "...$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_3:
	.string "You got send by PROF. BIRDS?\p"
	.string "...\p"
	.string "To scan the Shiny Krabby? The Golden\n"
	.string "King?\p"
	.string "That is... not totally unexpected...\p"
	.string "...\p"
	.string "So you are his newest intern... the\n"
	.string "596th in 3 years...\p"
	.string "If I were you I would NOT go back to\n"
	.string "PROF. BIRDS yet!\p"
	.string "If he finds out you saw the Golden\n"
	.string "Krabby, the Michelangelo of\l"
	.string "crustaceans, and didn't get a single\l"
	.string "sensor reading?\p"
	.string "He will be crushed!\p"
	.string "He might actually fire you again for\n"
	.string "'gross incompetence,' and crush you\l"
	.string "dream of becoming a great Pokemon\l"
	.string "Researcher.\p"
	.string "I would advise you to go to Mist City\n"
	.string "and find my friend DAAN.\p"
	.string "He is a bit... earthy. Loves nature. A bit\n"
	.string "of a tree hugger.\p"
	.string "But he is also a POKEMON RESEARCHER\n"
	.string "himself, and possibly can decode the\l"
	.string "readings of this device the moments\l"
	.string "before it got fried by the Shiny Krabby.\p"
	.string "Maybe that can help you in your search\n"
	.string "for this magnificant creature.\p"
	.string "Well, what do you say?\p"
	.string "Are you ready for an adventure?\p"
	.string "...$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_4:
	.string "...no?\p"
	.string "Hmmm... I get it... this is all a bit much\n"
	.string "for a first day as an intern.\p"
	.string "Maybe you could check out the local\n"
	.string "gym?\p"
	.string "That might be an opportunity to boost\n"
	.string "your confidence.\p"
	.string "The GYM LEADER is an old man, but don't\n"
	.string "underestimate him.\p"
	.string "I think a well trained crustacean can\n"
	.string "help you out there, no bias ofcourse...\p"
	.string "Good luck!$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_5:
	.string "...\p"
	.string "WHAT?!\p"
	.string "YOU ALREADY BEAT HIM?\p"
	.string "Let me be clear, {PLAYER}you might be\n"
	.string "the 596th intern of PROF. BIRDS...\p"
	.string "...but I think you get what it takes to\n"
	.string "have PROF. BIRDS actually hire you with\l"
	.string "a salary!\p"
	.string "Mist City for interns like you is just\n"
	.string "around the corner!\p"
	.string "Just follow the path north until you\n"
	.string "see some big waterfalls.\p"
	.string "At the the top of the falls you will find\n"
	.string "Mist City shrouded in clouds and rain.\p"
	.string "I'll call ahead and make sure DAAN is\n"
	.string "aware of your arrival.\p"
	.string "If you leave now you'll be back to ERP\n"
	.string "TOWN before your mom even starts to\l"
	.string "worry!$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_6:
	.string "The gym is up the hill!\p"
	.string "Good luck with training!\p"
	.string "I think the cliffs along the coast are a\n"
	.string "good place to challenge yourself.$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_7:
	.string "...\p"
	.string "WHAT?!\p"
	.string "YOU ALREADY BEAT HIM?\p"
	.string "Let me be clear, {PLAYER}, you might be\n"
	.string "the 596th intern of PROF. BIRDS, but I\l"
	.string "think you get what it takes to have\l"
	.string "PROF. BIRDS actually hire you with a\l"
	.string "salary.\p"
	.string "Mist City for interns like you is just\n"
	.string "around the corner!\p"
	.string "Just follow the path north until you\n"
	.string "see some big waterfalls.\p"
	.string "At the the top of the falls you will find\n"
	.string "Mist City shrouded in clouds and rain.\p"
	.string "I'll call ahead and make sure DAAN is\n"
	.string "aware of your arrival.\p"
	.string "If you leave now you'll be back to ERP\n"
	.string "TOWN before your mom even starts to\l"
	.string "worry!$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_8:
	.string "Thank you so much for everything.\p"
	.string "I still want to catch that Golden\n"
	.string "Krabby one time.\p"
	.string "I can't stop thinking about it...$"

Indoor_Maasje_JacobChecksonGeorge_Text_0:
	.string "GEORGEEE, COME HERE, GET OUTSIDE!!$"

Indoor_Maasje_JacobChecksonGeorge_Text_1:
	.string "PUT THAT GAMEBOY DOWN...$"

Indoor_Maasje_JacobChecksonGeorge_Text_2:
	.string "NO I DID NOT DO THAT WHEN I WAS\n"
	.string "YOUNG!....$"

Indoor_Maasje_JacobChecksonGeorge_Text_3:
	.string "ARGHH NEVERMIND....$"

Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0:
	.string "SIENNA$"

Indoor_Maasje_Jakub_Home_SiennaConvo_Text_1:
	.string "Thanks for helping my husband!\p"
	.string "He has been more at peace since the\n"
	.string "Krabby's have been acting normal again.$"

Indoor_Maasje_Jacob_Home_Sienna1_Text_0:
	.string "EEEEK! Stay back!\p"
	.string "...Oh, thank goodness, you're human!\p"
	.string "Be queit, before they hear us!$"

Indoor_Maasje_Jacob_Home_Sienna1_Text_1:
	.string "I don't think they noticed...\p"
	.string "It's a nightmare!\n"
	.string "The whole town has been overrun!\p"
	.string "The Krabby... they're usually such\n"
	.string "peaceful creatures, scuttling along\l"
	.string "the sand.\p"
	.string "But this morning, they just... snapped!\p"
	.string "They're swarming the streets, pinching\n"
	.string "everything in sight!\p"
	.string "Wait...\p"
	.string "...you are looking for my husband aren't\n"
	.string "you...\p"
	.string "Well join the club!\p"
	.string "When the invasion started, he couldn't\n"
	.string "just sit by.\p"
	.string "Krabby are his absolute favorite\n"
	.string "Pokémon, you see?\p"
	.string "It breaks his heart to see them acting\n"
	.string "so aggressive\p"
	.string "and wrong...\p"
	.string "He was convinced something on their\n"
	.string "breeding grounds must be disturbing\l"
	.string "them.\p"
	.string "He grabbed his old fishing gear and ran\n"
	.string "off toward Crabhill hours ago... but he\l"
	.string "didn't even ask permission!\p"
	.string "Please, you have to find him!\p"
	.string "Crabhill is the rocky hill to the west;\n"
	.string "you can cross the sandbar while the\l"
	.string "tide is still low.\p"
	.string "I have to stay here and protect my\n"
	.string "poor, terrified George!$"

Indoor_Maasje_Jacob_Home_Sienna1_Text_2:
	.string "GEORGE$"

Indoor_Maasje_Jacob_Home_Sienna1_Text_3:
	.string "Mom, seriously, keep it down.\p"
	.string "I'm on the last level and if I lose my\n"
	.string "last life because you're yelling about\l"
	.string "crabs, I'm gonna lose it.$"

Indoor_Maasje_Jacob_Home_Sienna1_Text_4:
	.string "JEZUS! Please stop jump scaring me.\p"
	.string "Please! Go to Crabhill and find JACOB!\p"
	.string "If anyone can figure out why the\n"
	.string "Krabby are going crazy, it's him...$"

Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_0:
	.string "Dad says that I can't be on my GameBoy\n"
	.string "the entire time.\p"
	.string "I'm sure he did the same thing back in\n"
	.string "the day.$"

Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_1:
	.string "Last night I saw my dad play on his own\n"
	.string "gameboy.\p"
	.string "I'm sure as hell not going outside.$"
