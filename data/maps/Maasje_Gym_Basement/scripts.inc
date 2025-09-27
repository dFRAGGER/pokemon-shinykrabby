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
	msgbox Maasje_Gym_Basement_Eventscript_Addy_Text_0, MSGBOX_AUTOCLOSE
	end


Maasje_Gym_Basement_Eventscript_Mart::
# 27 "data/maps/Maasje_Gym_Basement/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_MART, TRAINER_MART, Maasje_Gym_Introtext_Trainer_Mart, Maasje_Gym_Losetext_Trainer_Mart, NULL, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 28 "data/maps/Maasje_Gym_Basement/scripts.pory"
	msgbox Maasje_Gym_Basement_Eventscript_Mart_Text_0, MSGBOX_AUTOCLOSE
	end


Maasje_Gym_Basement_Eventscript_Addy_Text_0:
# 14 "data/maps/Maasje_Gym_Basement/scripts.pory"
	.string "{COLOR BLUE}Addy the Janitor : {COLOR DARK_GRAY}The faculty has been\n"
	.string "good to me, I do have to get used to\l"
	.string "this outfit though.$"

Maasje_Gym_Basement_Eventscript_Mart_Text_0:
# 28 "data/maps/Maasje_Gym_Basement/scripts.pory"
	.string "{COLOR BLUE}Mart of the Breakel: {COLOR DARK_GRAY}The faculty has\n"
	.string "some smart people, but in Math nobody\l"
	.string "can rival me.$"

Maasje_Gym_Introtext_Trainer_Addy::
# 18 "data/maps/Maasje_Gym_Basement/scripts.pory"
	.string "{COLOR BLUE}Addy the Janitor : {COLOR DARK_GRAY}Students only called\n"
	.string "me when they were 'sick'.\n"
	.string "But I call the shots now!!$"

Maasje_Gym_Losetext_Trainer_Addy::
# 22 "data/maps/Maasje_Gym_Basement/scripts.pory"
	.string "{COLOR BLUE}Addy the Janitor : {COLOR DARK_GRAY}These cloths don't\n"
	.string "fit me anyway.$"

Maasje_Gym_Introtext_Trainer_Mart::
# 32 "data/maps/Maasje_Gym_Basement/scripts.pory"
	.string "{COLOR BLUE}Mart of the Breakel: {COLOR DARK_GRAY}I was too smart to\n"
	.string "be a teacher anyway.\n"
	.string "Lets put this brain to the test!!$"

Maasje_Gym_Losetext_Trainer_Mart::
# 36 "data/maps/Maasje_Gym_Basement/scripts.pory"
	.string "{COLOR BLUE}Mart of the Breakel: {COLOR DARK_GRAY}Maybe my IQ is\n"
	.string "lower than I thought.$"
