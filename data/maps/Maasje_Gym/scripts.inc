Maasje_Gym_MapScripts::
	.byte 0


Maasje_Gym_Introduction::
# 4 "data/maps/Maasje_Gym/scripts.pory"
	lock
# 5 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Introduction_Text_0
# 6 "data/maps/Maasje_Gym/scripts.pory"
	waitmessage
# 7 "data/maps/Maasje_Gym/scripts.pory"
	release
	return


Maasje_Gym_Leader_Pete_Longfellow::
# 11 "data/maps/Maasje_Gym/scripts.pory"
	lockall
# 12 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Leader_Pete_Longfellow_Text_0
# 13 "data/maps/Maasje_Gym/scripts.pory"
	waitmessage
# 14 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Leader_Pete_Longfellow_Text_1
# 15 "data/maps/Maasje_Gym/scripts.pory"
	waitmessage
# 16 "data/maps/Maasje_Gym/scripts.pory"
	giveitem ITEM_TM37
# 17 "data/maps/Maasje_Gym/scripts.pory"
	waitstate
# 18 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Leader_Pete_Longfellow_Text_2
# 19 "data/maps/Maasje_Gym/scripts.pory"
	waitmessage
# 20 "data/maps/Maasje_Gym/scripts.pory"
	releaseall
	return


Maasje_Gym_Introduction_Text_0:
# 5 "data/maps/Maasje_Gym/scripts.pory"
	.string "Hi, welcome to the Maasje Pokemon Gym.\n"
	.string "The gym leader and trainers use sand &\l"
	.string "ground pokemon. Grass pokemon seem to\l"
	.string "have an edge, while electric pokemon\l"
	.string "are not recommended. The gym leader is\l"
	.string "called Pete Longfellow, he ues to be a\l"
	.string "geography teacher. He has been\l"
	.string "training pokemon for a long time but he\l"
	.string "can be stubborn and emotional. Stay\l"
	.string "cool and calm and you should be good.\l"
	.string "Good luck!$"

Maasje_Gym_Leader_Pete_Longfellow_Text_0:
# 12 "data/maps/Maasje_Gym/scripts.pory"
	.string "Well, well. Look who we got here. Let me\n"
	.string "learn you something about tectonic\l"
	.string "plates and the glorious power of\l"
	.string "erosion!$"

Maasje_Gym_Leader_Pete_Longfellow_Text_1:
# 14 "data/maps/Maasje_Gym/scripts.pory"
	.string "I might be getting to old for this.\n"
	.string "Maybe my skills have finally eroded with\l"
	.string "the wind. Let me give you this:$"

Maasje_Gym_Leader_Pete_Longfellow_Text_2:
# 18 "data/maps/Maasje_Gym/scripts.pory"
	.string "This Technical Machine is called\n"
	.string "Sandstorm. It creates a sandstorm on\l"
	.string "the battlefield that last 5 turns with\l"
	.string "additional effects.... which I forgot..\n"
	.string "You might have been lucky against me,\l"
	.string "but the rest of The Factulty will ruin\l"
	.string "your life.$"
