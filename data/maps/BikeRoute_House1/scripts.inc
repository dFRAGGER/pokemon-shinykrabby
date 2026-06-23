BikeRoute_House1_MapScripts::
	.byte 0


BikeRoute_House1_EventScript_Phildy::
# 4 "data/maps/BikeRoute_House1/scripts.pory"
	lock
# 5 "data/maps/BikeRoute_House1/scripts.pory"
	faceplayer
# 6 "data/maps/BikeRoute_House1/scripts.pory"
	setspeaker BikeRoute_House1_EventScript_Phildy_Text_0
# 7 "data/maps/BikeRoute_House1/scripts.pory"
	msgbox BikeRoute_House1_EventScript_Phildy_Text_1, MSGBOX_DEFAULT
# 8 "data/maps/BikeRoute_House1/scripts.pory"
	msgbox BikeRoute_House1_EventScript_Phildy_Text_2, MSGBOX_DEFAULT
# 9 "data/maps/BikeRoute_House1/scripts.pory"
	msgbox BikeRoute_House1_EventScript_Phildy_Text_3, MSGBOX_DEFAULT
# 10 "data/maps/BikeRoute_House1/scripts.pory"
	msgbox BikeRoute_House1_EventScript_Phildy_Text_4, MSGBOX_YESNO
# 11 "data/maps/BikeRoute_House1/scripts.pory"
	waitmessage
# 12 "data/maps/BikeRoute_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BikeRoute_House1_EventScript_Phildy_2
BikeRoute_House1_EventScript_Phildy_1:
# 23 "data/maps/BikeRoute_House1/scripts.pory"
	setrespawn HEAL_LOCATION_BIKE_PARK
# 24 "data/maps/BikeRoute_House1/scripts.pory"
	release
	end

BikeRoute_House1_EventScript_Phildy_2:
# 13 "data/maps/BikeRoute_House1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 14 "data/maps/BikeRoute_House1/scripts.pory"
	playse MUS_HEAL
# 15 "data/maps/BikeRoute_House1/scripts.pory"
	waitse
# 16 "data/maps/BikeRoute_House1/scripts.pory"
	special HealPlayerParty
# 17 "data/maps/BikeRoute_House1/scripts.pory"
	delay 40
# 18 "data/maps/BikeRoute_House1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 19 "data/maps/BikeRoute_House1/scripts.pory"
	setspeaker BikeRoute_House1_EventScript_Phildy_Text_0
# 20 "data/maps/BikeRoute_House1/scripts.pory"
	msgbox BikeRoute_House1_EventScript_Phildy_Text_5, MSGBOX_AUTOCLOSE
# 21 "data/maps/BikeRoute_House1/scripts.pory"
	waitmessage
	goto BikeRoute_House1_EventScript_Phildy_1


BikeRoute_House1_EventScript_Phildy_Text_0:
# 6 "data/maps/BikeRoute_House1/scripts.pory"
	.string "Phildy$"

BikeRoute_House1_EventScript_Phildy_Text_1:
# 7 "data/maps/BikeRoute_House1/scripts.pory"
	.string "Oh, hello! The name's Phildy. I live here.\p"
	.string "You've met Kasmi next door, I take it?\p"
	.string "I met him the week before he left on\n"
	.string "that big trip - five minutes in and he\l"
	.string "was already describing mountain routes.\p"
	.string "I thought: this man is either\n"
	.string "completely mad or completely free.\l"
	.string "Turned out to be both.$"

BikeRoute_House1_EventScript_Phildy_Text_2:
# 8 "data/maps/BikeRoute_House1/scripts.pory"
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
	.string "coming home.$"

BikeRoute_House1_EventScript_Phildy_Text_3:
# 9 "data/maps/BikeRoute_House1/scripts.pory"
	.string "I won't say I talked him into it. But I\n"
	.string "won't say I didn't either.\p"
	.string "And now here we are - him fixing bikes\n"
	.string "next door, me right here.\p"
	.string "He likes to say this place is too small\n"
	.string "for him. Maybe. But it fits us just fine.$"

BikeRoute_House1_EventScript_Phildy_Text_4:
# 10 "data/maps/BikeRoute_House1/scripts.pory"
	.string "You're welcome to rest here whenever\n"
	.string "you need.\p"
	.string "Shall I fix up your Pokémon?$"

BikeRoute_House1_EventScript_Phildy_Text_5:
# 20 "data/maps/BikeRoute_House1/scripts.pory"
	.string "There you go. Rest up and ride safe.$"
