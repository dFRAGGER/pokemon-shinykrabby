Maasje_Coastal_Cave3_MapScripts::
	.byte 0


Maasje_Coastal_Cave3_EventScript_Winston::
	trainerbattle_single TRAINER_WINSTON_1, Maasje_Coastal_Cave3_Text_WinstonIntro, Maasje_Coastal_Cave3_Text_WinstonDefeated
	msgbox Maasje_Coastal_Cave3_Text_WinstonPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Coastal_Cave3_Text_WinstonIntro::
	.string "Oh, sure, I'll accept your challenge.\n"
	.string "I have a lot of money.$"

Maasje_Coastal_Cave3_Text_WinstonDefeated::
	.string "Why couldn't I win?$"

Maasje_Coastal_Cave3_Text_WinstonPostBattle::
	.string "There are some things money can't buy.\n"
	.string "That's POKéMON…$"
