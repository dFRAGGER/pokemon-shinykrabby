LionsarchCity_Indoor_PeterHouse_MapScripts::
# 2 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LionsarchCity_Indoor_PeterHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LionsarchCity_Indoor_PeterHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, PeterHouse_EntranceScene
	.2byte 0


PeterHouse_EntranceScene::
# 9 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	lock
# 11 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	goto_if_set FLAG_PETER_HOUSE_INTRO_DONE, PeterHouse_EntranceScene_2
	checkitem ITEM_SOOT_SACK, 1
# 0 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PeterHouse_EntranceScene_5
# 25 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setvar VAR_TEMP_0, 1
# 28 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	delay 30
# 29 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_0
# 30 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_EntranceScene_Text_1, MSGBOX_AUTOCLOSE
# 31 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 34 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 1, PeterHouse_EntranceScene_Movement_0
# 35 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 4, PeterHouse_EntranceScene_Movement_1
# 36 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 5, PeterHouse_EntranceScene_Movement_2
# 37 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 6, PeterHouse_EntranceScene_Movement_3
# 38 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 41 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	removeobject 4
# 42 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	removeobject 5
# 43 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	removeobject 6
# 45 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	delay 20
# 48 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 1, PeterHouse_EntranceScene_Movement_4
# 49 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 51 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	delay 20
# 54 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	playse SE_PIN
# 55 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 7, PeterHouse_EntranceScene_Movement_5
# 56 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 57 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 7, PeterHouse_EntranceScene_Movement_6
# 58 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 60 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_2
# 61 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_EntranceScene_Text_3
# 62 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 65 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement LOCALID_PLAYER, PeterHouse_EntranceScene_Movement_7
# 66 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 68 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_2
# 69 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_EntranceScene_Text_4
# 70 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 72 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	playse SE_PIN
# 73 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 7, PeterHouse_EntranceScene_Movement_5
# 74 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 76 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_2
# 77 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_EntranceScene_Text_5
# 78 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 80 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_2
# 81 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_EntranceScene_Text_6
# 82 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 85 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 7, PeterHouse_EntranceScene_Movement_8
# 86 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 88 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_2
# 89 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_EntranceScene_Text_7
# 90 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 93 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 1, PeterHouse_EntranceScene_Movement_9
# 94 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 95 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	delay 20
# 97 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_0
# 98 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_EntranceScene_Text_8
# 99 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 102 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 1, PeterHouse_EntranceScene_Movement_0
# 103 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 105 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 7, PeterHouse_EntranceScene_Movement_6
# 106 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 108 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_2
# 109 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_EntranceScene_Text_9
# 110 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 112 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setflag FLAG_PETER_HOUSE_INTRO_DONE
# 114 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	release
	end

PeterHouse_EntranceScene_2:
# 12 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setvar VAR_TEMP_0, 1
# 13 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	release
	end

PeterHouse_EntranceScene_5:
# 20 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setvar VAR_TEMP_0, 1
# 21 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	release
	end


PeterHouse_Bouncer::
# 120 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	lockall
# 121 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	faceplayer
# 122 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 123 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	getobjectxy 1, CURRENT_POSITION, VAR_TEMP_2, VAR_TEMP_3
# 124 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	goto_if_set FLAG_PETER_HOUSE_INTRO_DONE, PeterHouse_Bouncer_2
	checkitem ITEM_SOOT_SACK, 1
# 0 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PeterHouse_Bouncer_3
# 162 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_Bouncer_Text_3
PeterHouse_Bouncer_1:
# 164 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 165 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	releaseall
	return

PeterHouse_Bouncer_2:
# 125 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq PeterHouse_Bouncer_34
PeterHouse_Bouncer_28:
# 132 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq PeterHouse_Bouncer_27
PeterHouse_Bouncer_21:
# 139 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq PeterHouse_Bouncer_20
PeterHouse_Bouncer_14:
# 146 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq PeterHouse_Bouncer_13
PeterHouse_Bouncer_11:
# 154 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_0
# 155 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_Bouncer_Text_1
# 156 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
	goto PeterHouse_Bouncer_1

PeterHouse_Bouncer_3:
# 160 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_Bouncer_Text_2
	goto PeterHouse_Bouncer_1

PeterHouse_Bouncer_7:
# 126 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_0
# 127 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_Bouncer_Text_0
# 128 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 129 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 1, PeterHouse_EntranceScene_Movement_0
# 130 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
	goto PeterHouse_Bouncer_1

PeterHouse_Bouncer_8:
# 133 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_0
# 134 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_Bouncer_Text_1
# 135 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 136 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 1, PeterHouse_EntranceScene_Movement_0
# 137 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
	goto PeterHouse_Bouncer_1

PeterHouse_Bouncer_9:
# 140 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_0
# 141 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_Bouncer_Text_1
# 142 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 143 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 1, PeterHouse_EntranceScene_Movement_0
# 144 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
	goto PeterHouse_Bouncer_1

PeterHouse_Bouncer_10:
# 147 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_0
# 148 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_Bouncer_Text_1
# 149 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 150 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 1, PeterHouse_Bouncer_Movement_0
# 151 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
	goto PeterHouse_Bouncer_1

PeterHouse_Bouncer_12:
# 146 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq PeterHouse_Bouncer_16
	goto PeterHouse_Bouncer_11

PeterHouse_Bouncer_13:
# 146 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq PeterHouse_Bouncer_12
	goto PeterHouse_Bouncer_11

PeterHouse_Bouncer_16:
# 146 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_TEMP_3, 3
	goto_if_eq PeterHouse_Bouncer_10
	goto PeterHouse_Bouncer_11

PeterHouse_Bouncer_19:
# 139 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq PeterHouse_Bouncer_23
	goto PeterHouse_Bouncer_14

PeterHouse_Bouncer_20:
# 139 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq PeterHouse_Bouncer_19
	goto PeterHouse_Bouncer_14

PeterHouse_Bouncer_23:
# 139 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_TEMP_3, 3
	goto_if_eq PeterHouse_Bouncer_9
	goto PeterHouse_Bouncer_14

PeterHouse_Bouncer_26:
# 132 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq PeterHouse_Bouncer_30
	goto PeterHouse_Bouncer_21

PeterHouse_Bouncer_27:
# 132 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq PeterHouse_Bouncer_26
	goto PeterHouse_Bouncer_21

PeterHouse_Bouncer_30:
# 132 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_TEMP_3, 3
	goto_if_eq PeterHouse_Bouncer_8
	goto PeterHouse_Bouncer_21

PeterHouse_Bouncer_33:
# 125 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq PeterHouse_Bouncer_37
	goto PeterHouse_Bouncer_28

PeterHouse_Bouncer_34:
# 125 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq PeterHouse_Bouncer_33
	goto PeterHouse_Bouncer_28

PeterHouse_Bouncer_37:
# 125 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_TEMP_3, 3
	goto_if_eq PeterHouse_Bouncer_7
	goto PeterHouse_Bouncer_28


PeterHouse_Machoke::
# 170 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	lockall
# 171 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	faceplayer
# 172 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_Machoke_Text_0
# 173 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_Machoke_Text_1
# 174 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 175 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	releaseall
	return


PeterHouse_DoorGuard::
# 180 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	lockall
# 181 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	faceplayer
# 182 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_2
# 183 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	goto_if_set FLAG_PETER_HOUSE_INTRO_DONE, PeterHouse_DoorGuard_2
	checkitem ITEM_SOOT_SACK, 1
# 0 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PeterHouse_DoorGuard_3
# 191 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_DoorGuard_Text_3
PeterHouse_DoorGuard_1:
# 193 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 194 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	releaseall
	return

PeterHouse_DoorGuard_2:
# 184 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_DoorGuard_Text_0
	goto PeterHouse_DoorGuard_1

PeterHouse_DoorGuard_3:
# 186 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_DoorGuard_Text_1
# 187 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 188 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setflag FLAG_PETER_HOUSE_INTRO_DONE
# 189 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_DoorGuard_Text_2
	goto PeterHouse_DoorGuard_1


PeterHouse_PartyGirl::
# 199 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	lockall
# 200 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	faceplayer
# 201 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_PartyGirl_Text_0
# 202 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_PartyGirl_Text_1
# 203 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 204 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	releaseall
	return


PeterHouse_NPC_Peter::
# 208 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	lockall
# 209 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	faceplayer
# 210 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	goto_if_unset FLAG_DELIVERED_ALIS_PACKAGE_TO_PETER, PeterHouse_NPC_Peter_2
# 215 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_NPC_Peter_Text_0
# 216 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_NPC_Peter_Text_2
# 217 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
PeterHouse_NPC_Peter_1:
# 219 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	releaseall
	return

PeterHouse_NPC_Peter_2:
# 211 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_NPC_Peter_Text_0
# 212 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_NPC_Peter_Text_1
# 213 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
	goto PeterHouse_NPC_Peter_1


PeterHouse_Woman_Neighbor::
# 223 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	lockall
# 224 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	faceplayer
# 225 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_Woman_Neighbor_Text_0
# 226 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	releaseall
	return


PeterHouse_RecordPlayer::
# 230 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	lockall
# 231 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_RecordPlayer_Text_0
# 232 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	releaseall
	return


PeterHouse_Bookshelf::
# 236 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	lockall
# 237 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_Bookshelf_Text_0
# 238 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	releaseall
	return


PeterHouse_DiscoBalPostet::
# 242 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	lockall
# 243 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_DiscoBalPostet_Text_0
# 244 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	releaseall
	return


# 34 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_0:
# 34 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_left
# 34 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	face_right
	step_end

# 35 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_1:
# 35 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_up
# 35 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_up
# 35 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_up
	step_end

# 36 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_2:
# 36 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_up
# 36 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_up
# 36 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_up
# 36 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_up
	step_end

# 37 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_3:
# 37 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_left
# 37 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_up
# 37 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_up
# 37 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_up
# 37 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_up
	step_end

# 48 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_4:
# 48 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
# 48 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	face_down
	step_end

# 55 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_5:
# 55 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	emote_exclamation_mark
	step_end

# 57 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_6:
# 57 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	face_down
	step_end

# 65 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_7:
# 65 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_up
# 65 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_left
# 65 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	face_up
	step_end

# 85 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_8:
# 85 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	face_left
	step_end

# 93 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_9:
# 93 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	face_right
	step_end

# 150 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_Bouncer_Movement_0:
# 150 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
# 150 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	face_left
	step_end

PeterHouse_EntranceScene_Text_0:
# 29 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Bouncer Bruno$"

PeterHouse_EntranceScene_Text_1:
# 30 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Come inside ladies.\p"
	.string "If there is a man bothering you, please\n"
	.string "give a shout out to the bouncers.$"

PeterHouse_EntranceScene_Text_2:
# 60 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Bouncer Mario$"

PeterHouse_EntranceScene_Text_3:
# 61 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Hey, you there!\p"
	.string "Come over here for a second.$"

PeterHouse_EntranceScene_Text_4:
# 69 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Alright, what's your name?\p"
	.string "And more importantly... who do you know\n"
	.string "here?\p"
	.string "This ain't a public venue, kid.$"

PeterHouse_EntranceScene_Text_5:
# 77 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "...\p"
	.string "A package from Ali?\p"
	.string "For Peter?\p"
	.string "From down south?\p"
	.string "Oh damn, you're THAT delivery!$"

PeterHouse_EntranceScene_Text_6:
# 81 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Peter's been waiting for this package\n"
	.string "for weeks!\p"
	.string "Says it's essential for the 'party\n"
	.string "atmosphere'.\p"
	.string "Whatever that means...$"

PeterHouse_EntranceScene_Text_7:
# 89 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Hey Bruno! Let this one through!\p"
	.string "VIP delivery from Ali!$"

PeterHouse_EntranceScene_Text_8:
# 98 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Ali's contact, huh?\p"
	.string "Alright, you're good.\p"
	.string "Head on down. Peter's in the basement\n"
	.string "spinning records.$"

PeterHouse_EntranceScene_Text_9:
# 109 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Go on.\p"
	.string "And hey... enjoy the groove down there.\p"
	.string "Peter throws one hell of a party.$"

PeterHouse_Bouncer_Text_0:
# 127 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "You're leaving already?\p"
	.string "The party's just getting started!$"

PeterHouse_Bouncer_Text_1:
# 134 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "You're cleared.\p"
	.string "Head on down whenever you're ready.\p"
	.string "Just don't cause any trouble.$"

PeterHouse_Bouncer_Text_2:
# 160 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Hold up.\p"
	.string "You need to check in with the bouncer\n"
	.string "at the table first.\p"
	.string "No exceptions.$"

PeterHouse_Bouncer_Text_3:
# 162 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Sorry, VIP access only.\p"
	.string "You need to know someone to get in\n"
	.string "here.\p"
	.string "Or bring something special...$"

PeterHouse_Machoke_Text_0:
# 172 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Machoke$"

PeterHouse_Machoke_Text_1:
# 173 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "MACHOKE!\p"
	.string "(The Machoke cracks its knuckles\n"
	.string "menacingly.)$"

PeterHouse_DoorGuard_Text_0:
# 184 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "You're on the list now.\p"
	.string "Go enjoy the party.\p"
	.string "Peter's got the best beats in\n"
	.string "Lionsarch.$"

PeterHouse_DoorGuard_Text_1:
# 186 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Oh, you've got something from Ali?\p"
	.string "Why didn't you say so!\p"
	.string "Go talk to Bruno, he'll let you through.$"

PeterHouse_DoorGuard_Text_2:
# 189 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Hey Bruno! This one's cleared!$"

PeterHouse_DoorGuard_Text_3:
# 191 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Name and reference, please.\p"
	.string "You don't know anyone?\p"
	.string "Then I can't let you in. House rules.$"

PeterHouse_PartyGirl_Text_0:
# 201 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Party Girl$"

PeterHouse_PartyGirl_Text_1:
# 202 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "That was SO fun!\p"
	.string "Peter's parties are the best!\p"
	.string "Gotta come back next weekend!$"

PeterHouse_NPC_Peter_Text_0:
# 211 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Peter$"

PeterHouse_NPC_Peter_Text_1:
# 212 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Hey there! You looking for something?\p"
	.string "If you're here about the party... well,\n"
	.string "you gotta know the password first.\p"
	.string "Or bring me something special from my\n"
	.string "friend Ali down south.$"

PeterHouse_NPC_Peter_Text_2:
# 216 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "The groove is strong tonight!\p"
	.string "Feel free to head downstairs anytime.\p"
	.string "The basement is where the magic\n"
	.string "happens.$"

PeterHouse_Woman_Neighbor_Text_0:
# 225 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Peter is such a nice young man.\p"
	.string "A bit loud with his music sometimes, but\n"
	.string "he's always polite.\p"
	.string "I hear thumping bass at odd hours...\n"
	.string "must be doing aerobics or something.$"

PeterHouse_RecordPlayer_Text_0:
# 231 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "An old record player sits in the corner.\p"
	.string "A vinyl record is spinning: 'Stayin'\n"
	.string "Alive' by the Bee Gees.$"

PeterHouse_Bookshelf_Text_0:
# 237 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "The shelf is filled with vinyl records:\n"
	.string "Earth, Wind & Fire\n"
	.string "Donna Summer\n"
	.string "Kool & The Gang\n"
	.string "Chic\p"
	.string "...All disco classics!$"

PeterHouse_DiscoBalPostet_Text_0:
# 243 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "A glittery poster on the wall:\n"
	.string "'DISCO WILL NEVER DIE'\n"
	.string "with a silhouette of a dancer in\l"
	.string "platform shoes.$"
