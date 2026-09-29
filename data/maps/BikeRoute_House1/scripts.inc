BikeRoute_House1_MapScripts::
	.byte 0


BikeRoute_House1_EventScript_Phildy::
	lock
	faceplayer
	setspeaker BikeRoute_House1_EventScript_Phildy_Text_0
	goto_if_set FLAG_MET_PHILDY, BikeRoute_House1_EventScript_Phildy_2
	msgbox BikeRoute_House1_EventScript_Phildy_Text_2, MSGBOX_YESNO
	setflag FLAG_MET_PHILDY
BikeRoute_House1_EventScript_Phildy_1:
	waitmessage
	compare VAR_RESULT, YES
	goto_if_eq BikeRoute_House1_EventScript_Phildy_6
BikeRoute_House1_EventScript_Phildy_5:
	setrespawn HEAL_LOCATION_BIKE_PARK
	release
	end

BikeRoute_House1_EventScript_Phildy_2:
	msgbox BikeRoute_House1_EventScript_Phildy_Text_1, MSGBOX_YESNO
	goto BikeRoute_House1_EventScript_Phildy_1

BikeRoute_House1_EventScript_Phildy_6:
	fadescreen FADE_TO_BLACK
	playse MUS_HEAL
	waitse
	special HealPlayerParty
	delay 40
	fadescreen FADE_FROM_BLACK
	setspeaker BikeRoute_House1_EventScript_Phildy_Text_0
	msgbox BikeRoute_House1_EventScript_Phildy_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	goto BikeRoute_House1_EventScript_Phildy_5


BikeRoute_House1_EventScript_Phildy_Text_0:
	.string "PHILDY$"

BikeRoute_House1_EventScript_Phildy_Text_1:
	.string "Back again? Of course.\p"
	.string "Shall I fix up your Pokémon?$"

BikeRoute_House1_EventScript_Phildy_Text_2:
	.string "Oh, hello! The name's PHILDY. I live here.\p"
	.string "You've met MR. KASMI next door, I take\n"
	.string "it?\p"
	.string "I met him the week before he left on\n"
	.string "that big trip - five minutes in and he\l"
	.string "was already describing mountain routes.\p"
	.string "I thought: this man is either\n"
	.string "completely mad or completely free.\l"
	.string "Turned out to be both.\p"
	.string "A couple months in I went to find him.\n"
	.string "Three connections and a long drive\l"
	.string "later, I did.\p"
	.string "Found him somewhere in the back of\n"
	.string "beyond, fixing that motorcycle in the\l"
	.string "rain without a care in the world.\p"
	.string "I stayed two weeks, kept messaging\n"
	.string "after that, and somewhere in all those\l"
	.string "words I must have said the right thing,\l"
	.string "because eventually he wrote back: I'm\l"
	.string "coming home.\p"
	.string "I won't say I talked him into it. But I\n"
	.string "won't say I didn't either.\p"
	.string "And now here we are - him fixing bikes\n"
	.string "next door, me right here.\p"
	.string "He likes to say this place is too small\n"
	.string "for him. Maybe. But it fits us just fine.\p"
	.string "You're welcome to rest here whenever\n"
	.string "you need.\p"
	.string "Shall I fix up your Pokémon?$"

BikeRoute_House1_EventScript_Phildy_Text_3:
	.string "There you go. Rest up and ride safe.$"
