Maasje_Gym_Basement_MapScripts::
# 2 "data/maps/Maasje_Gym_Basement/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Maasje_Gym_Basement_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Maasje_Gym_Basement_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Maasje_Gym_Basement/scripts.pory"
	call Maasje_Gym_Basement_Check_Buried
	return


Maasje_Gym_Basement_Check_Buried::
# 8 "data/maps/Maasje_Gym_Basement/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_BURIED
# 9 "data/maps/Maasje_Gym_Basement/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_BURIED
	return


Maasje_Gym_Basement_Eventscript_Addy::
# 13 "data/maps/Maasje_Gym_Basement/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_ADDY, TRAINER_ADDY, Maasje_Gym_Introtext_Trainer_Addy, Maasje_Gym_Losetext_Trainer_Addy, NULL, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 14 "data/maps/Maasje_Gym_Basement/scripts.pory"
	setspeaker Maasje_Gym_Basement_Eventscript_Addy_Text_0
# 15 "data/maps/Maasje_Gym_Basement/scripts.pory"
	msgbox Maasje_Gym_Basement_Eventscript_Addy_Text_1, MSGBOX_AUTOCLOSE
	end


Maasje_Gym_Basement_Eventscript_Mart::
# 28 "data/maps/Maasje_Gym_Basement/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_MART, TRAINER_MART, Maasje_Gym_Introtext_Trainer_Mart, Maasje_Gym_Losetext_Trainer_Mart, NULL, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 29 "data/maps/Maasje_Gym_Basement/scripts.pory"
	setspeaker Maasje_Gym_Basement_Eventscript_Mart_Text_0
# 30 "data/maps/Maasje_Gym_Basement/scripts.pory"
	msgbox Maasje_Gym_Basement_Eventscript_Mart_Text_1, MSGBOX_AUTOCLOSE
	end


Maasje_Gym_Basement_Eventscript_Addy_Text_0:
# 14 "data/maps/Maasje_Gym_Basement/scripts.pory"
	.string "Addy the Janitor$"

Maasje_Gym_Basement_Eventscript_Addy_Text_1:
# 15 "data/maps/Maasje_Gym_Basement/scripts.pory"
	.string "The faculty has been good to me, I do\n"
	.string "have to get used to this outfit though.$"

Maasje_Gym_Basement_Eventscript_Mart_Text_0:
# 29 "data/maps/Maasje_Gym_Basement/scripts.pory"
	.string "Mart of the Breakel$"

Maasje_Gym_Basement_Eventscript_Mart_Text_1:
# 30 "data/maps/Maasje_Gym_Basement/scripts.pory"
	.string "The faculty has some smart people, but\n"
	.string "in Math nobody can rival me.$"

Maasje_Gym_Introtext_Trainer_Addy::
# 19 "data/maps/Maasje_Gym_Basement/scripts.pory"
	.string "Students only called me when they were\n"
	.string "'sick'.\n"
	.string "But I call the shots now!!$"

Maasje_Gym_Losetext_Trainer_Addy::
# 23 "data/maps/Maasje_Gym_Basement/scripts.pory"
	.string "These cloths don't fit me anyway.$"

Maasje_Gym_Introtext_Trainer_Mart::
# 34 "data/maps/Maasje_Gym_Basement/scripts.pory"
	.string "I was too smart to be a teacher anyway.\n"
	.string "Lets put this brain to the test!!$"

Maasje_Gym_Losetext_Trainer_Mart::
# 38 "data/maps/Maasje_Gym_Basement/scripts.pory"
	.string "Maybe my IQ is lower than I thought.$"
