Marshduke_Indoor_Vision_LatiosLatias_MapScripts::
# 2 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Marshduke_Indoor_Vision_LatiosLatias_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Marshduke_Indoor_Vision_LatiosLatias_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	map_script_2 VAR_MARSHDUKE_CATHEDRAL_VISION_STATE, 1, Marshduke_Indoor_Vision_LatiosLatias_EventScript_Vision
	.2byte 0


Marshduke_Indoor_Vision_LatiosLatias_EventScript_Vision::
# 8 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	setvar VAR_MARSHDUKE_CATHEDRAL_VISION_STATE, 3
# 9 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	lock
# 10 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	applymovement LOCALID_PLAYER, Marshduke_Indoor_Vision_LatiosLatias_EventScript_Vision_Movement_0
# 11 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	waitmovement
# 12 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	special SpawnCameraObject
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Marshduke_Indoor_Vision_LatiosLatias_EventScript_Vision_Movement_1
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	applymovement 1, Marshduke_Indoor_Vision_LatiosLatias_EventScript_Vision_Movement_2
# 15 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	applymovement 2, Marshduke_Indoor_Vision_LatiosLatias_EventScript_Vision_Movement_2
# 16 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	waitmovement
# 17 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	fadescreen FADE_TO_BLACK
# 18 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	special RemoveCameraObject
# 19 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	setvar VAR_MARSHDUKE_CATHEDRAL_VISION_STATE, 2
# 20 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	warpsilent MAP_MARSHDUKE_INDOOR_CHATEDRAL, 32, 32
# 21 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	waitstate
# 22 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	release
	return


# 10 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
Marshduke_Indoor_Vision_LatiosLatias_EventScript_Vision_Movement_0:
# 10 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	face_up
	step_end

# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
Marshduke_Indoor_Vision_LatiosLatias_EventScript_Vision_Movement_1:
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 13 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
	step_end

# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
Marshduke_Indoor_Vision_LatiosLatias_EventScript_Vision_Movement_2:
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
# 14 "data/maps/Marshduke_Indoor_Vision_LatiosLatias/scripts.pory"
	walk_faster_right
	step_end
