Marshduke_Indoor_Chatedral_MapScripts::
	.byte 0


Marshduke_Indoor_Chatedral_EventScript_Latias::
# 4 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setvar VAR_TEMP_0, 1
# 5 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	clearflag FLAG_MARSHDUKE_CATHEDRAL_LATIOS
# 6 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	addobject 12
# 7 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	applymovement 12, Marshduke_Indoor_Chatedral_EventScript_Latias_Movement_0
# 8 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	waitmovement 12
# 9 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	setflag FLAG_MARSHDUKE_CATHEDRAL_LATIOS
# 10 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	removeobject 12
	return


# 7 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
Marshduke_Indoor_Chatedral_EventScript_Latias_Movement_0:
# 7 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_fast_down
# 7 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_fast_down
# 7 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_fast_down
# 7 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_fast_down
# 7 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_fast_down
# 7 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_fast_down
# 7 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_fast_down
# 7 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_fast_down
# 7 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_fast_down
# 7 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_fast_down
# 7 "data/maps/Marshduke_Indoor_Chatedral/scripts.pory"
	walk_fast_down
	step_end
