Maasje_Coastal_Cave3_MapScripts::
	.byte 0


Maasje_Coastal_Cave3_EventScript_Winston::
# 4 "data/maps/Maasje_Coastal_Cave3/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Maasje_Coastal_Cave3_Text_WinstonIntro, Maasje_Coastal_Cave3_Text_WinstonDefeated
# 5 "data/maps/Maasje_Coastal_Cave3/scripts.pory"
	msgbox Maasje_Coastal_Cave3_Text_WinstonPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Coastal_Cave3_Text_WinstonIntro::
# 9 "data/maps/Maasje_Coastal_Cave3/scripts.pory"
	.string "Oh, sure, I'll accept your challenge.\n"
	.string "I have a lot of money.$"

Maasje_Coastal_Cave3_Text_WinstonDefeated::
# 13 "data/maps/Maasje_Coastal_Cave3/scripts.pory"
	.string "Why couldn't I win?$"

Maasje_Coastal_Cave3_Text_WinstonPostBattle::
# 17 "data/maps/Maasje_Coastal_Cave3/scripts.pory"
	.string "There are some things money can't buy.\n"
	.string "That's POKéMON…$"
