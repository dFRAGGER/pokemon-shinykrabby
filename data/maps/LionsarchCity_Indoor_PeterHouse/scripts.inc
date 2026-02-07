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
# 31 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 4, PeterHouse_EntranceScene_Movement_0
# 32 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 5, PeterHouse_EntranceScene_Movement_1
# 33 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 6, PeterHouse_EntranceScene_Movement_2
# 34 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 37 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	removeobject 4
# 38 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	removeobject 5
# 39 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	removeobject 6
# 41 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	delay 20
# 44 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 1, PeterHouse_EntranceScene_Movement_3
# 45 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 2, PeterHouse_EntranceScene_Movement_4
# 46 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 3, PeterHouse_EntranceScene_Movement_5
# 47 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 49 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	delay 20
# 52 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	playse SE_PIN
# 53 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 7, PeterHouse_EntranceScene_Movement_6
# 54 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 55 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 7, PeterHouse_EntranceScene_Movement_7
# 56 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 58 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_0
# 59 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_EntranceScene_Text_1
# 60 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 63 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement LOCALID_PLAYER, PeterHouse_EntranceScene_Movement_8
# 64 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 65 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 7, PeterHouse_EntranceScene_Movement_9
# 66 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 68 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_0
# 69 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_EntranceScene_Text_2
# 70 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 72 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_3
# 73 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_EntranceScene_Text_4
# 74 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 76 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	playse SE_PIN
# 77 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 7, PeterHouse_EntranceScene_Movement_6
# 78 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 80 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_0
# 81 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_EntranceScene_Text_5
# 82 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 84 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_0
# 85 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_EntranceScene_Text_6
# 86 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 89 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 7, PeterHouse_EntranceScene_Movement_7
# 90 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 92 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_0
# 93 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_EntranceScene_Text_7
# 94 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 97 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 1, PeterHouse_EntranceScene_Movement_10
# 98 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 99 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	delay 20
# 101 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_8
# 102 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_EntranceScene_Text_9
# 103 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 106 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 1, PeterHouse_EntranceScene_Movement_5
# 107 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 2, PeterHouse_EntranceScene_Movement_11
# 108 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 3, PeterHouse_EntranceScene_Movement_12
# 109 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 111 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	applymovement 7, PeterHouse_EntranceScene_Movement_9
# 112 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmovement
# 114 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_0
# 115 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_EntranceScene_Text_10
# 116 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 118 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setflag FLAG_PETER_HOUSE_INTRO_DONE
# 120 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
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
# 126 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	lockall
# 127 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	faceplayer
# 128 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_8
# 129 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	goto_if_set FLAG_PETER_HOUSE_INTRO_DONE, PeterHouse_Bouncer_2
	checkitem ITEM_SOOT_SACK, 1
# 0 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PeterHouse_Bouncer_3
# 134 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_Bouncer_Text_2
PeterHouse_Bouncer_1:
# 136 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 137 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	releaseall
	return

PeterHouse_Bouncer_2:
# 130 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_Bouncer_Text_0
	goto PeterHouse_Bouncer_1

PeterHouse_Bouncer_3:
# 132 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_Bouncer_Text_1
	goto PeterHouse_Bouncer_1


PeterHouse_Machoke::
# 142 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	lockall
# 143 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	faceplayer
# 144 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_Machoke_Text_0
# 145 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_Machoke_Text_1
# 146 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 147 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	releaseall
	return


PeterHouse_DoorGuard::
# 152 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	lockall
# 153 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	faceplayer
# 154 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_EntranceScene_Text_0
# 155 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	goto_if_set FLAG_PETER_HOUSE_INTRO_DONE, PeterHouse_DoorGuard_2
	checkitem ITEM_SOOT_SACK, 1
# 0 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PeterHouse_DoorGuard_3
# 163 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_DoorGuard_Text_3
PeterHouse_DoorGuard_1:
# 165 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 166 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	releaseall
	return

PeterHouse_DoorGuard_2:
# 156 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_DoorGuard_Text_0
	goto PeterHouse_DoorGuard_1

PeterHouse_DoorGuard_3:
# 158 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_DoorGuard_Text_1
# 159 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 160 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setflag FLAG_PETER_HOUSE_INTRO_DONE
# 161 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_DoorGuard_Text_2
	goto PeterHouse_DoorGuard_1


PeterHouse_PartyGirl::
# 171 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	lockall
# 172 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	faceplayer
# 173 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_PartyGirl_Text_0
# 174 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_PartyGirl_Text_1
# 175 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
# 176 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	releaseall
	return


PeterHouse_NPC_Peter::
# 180 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	lockall
# 181 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	faceplayer
# 182 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	goto_if_unset FLAG_DELIVERED_ALIS_PACKAGE_TO_PETER, PeterHouse_NPC_Peter_2
# 187 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_NPC_Peter_Text_0
# 188 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_NPC_Peter_Text_2
# 189 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
PeterHouse_NPC_Peter_1:
# 191 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	releaseall
	return

PeterHouse_NPC_Peter_2:
# 183 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	setspeaker PeterHouse_NPC_Peter_Text_0
# 184 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_NPC_Peter_Text_1
# 185 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	waitmessage
	goto PeterHouse_NPC_Peter_1


PeterHouse_Woman_Neighbor::
# 195 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	lockall
# 196 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	faceplayer
# 197 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_Woman_Neighbor_Text_0
# 198 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	releaseall
	return


PeterHouse_RecordPlayer::
# 202 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	lockall
# 203 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_RecordPlayer_Text_0
# 204 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	releaseall
	return


PeterHouse_Bookshelf::
# 208 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	lockall
# 209 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_Bookshelf_Text_0
# 210 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	releaseall
	return


PeterHouse_DiscoBalPostet::
# 214 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	lockall
# 215 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	msgbox PeterHouse_DiscoBalPostet_Text_0
# 216 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	releaseall
	return


# 31 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_0:
# 31 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_down
# 31 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_down
# 31 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
# 31 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
# 31 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
# 31 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
# 31 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
# 31 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
	step_end

# 32 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_1:
# 32 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
# 32 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_down
# 32 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_down
# 32 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
# 32 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
# 32 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
# 32 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
# 32 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
	step_end

# 33 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_2:
# 33 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_down
# 33 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_down
# 33 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
# 33 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
# 33 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
# 33 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
# 33 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
	step_end

# 44 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_3:
# 44 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_up
# 44 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	face_down
	step_end

# 45 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_4:
# 45 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_left
# 45 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	face_down
	step_end

# 46 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_5:
# 46 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
# 46 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	face_down
	step_end

# 53 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_6:
# 53 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	emote_exclamation_mark
	step_end

# 55 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_7:
# 55 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	face_left
	step_end

# 63 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_8:
# 63 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_up
# 63 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_up
# 63 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
# 63 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
	step_end

# 65 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_9:
# 65 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	face_down
	step_end

# 97 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_10:
# 97 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	face_right
	step_end

# 107 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_11:
# 107 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_right
# 107 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	face_left
	step_end

# 108 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
PeterHouse_EntranceScene_Movement_12:
# 108 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	walk_left
# 108 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	face_right
	step_end

PeterHouse_EntranceScene_Text_0:
# 58 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Door Guard$"

PeterHouse_EntranceScene_Text_1:
# 59 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Hey, you there!\p"
	.string "Come over here for a second.$"

PeterHouse_EntranceScene_Text_2:
# 69 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Alright, what's your name?\p"
	.string "And more importantly... who do you know\n"
	.string "here?\p"
	.string "This ain't a public venue, kid.$"

PeterHouse_EntranceScene_Text_3:
# 72 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "{PLAYER}$"

PeterHouse_EntranceScene_Text_4:
# 73 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "I'm looking for Peter.\p"
	.string "I have a special delivery from Ali in\n"
	.string "Siltroot Town.$"

PeterHouse_EntranceScene_Text_5:
# 81 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Ali?\p"
	.string "From down south?\p"
	.string "Oh damn, you're THAT delivery!$"

PeterHouse_EntranceScene_Text_6:
# 85 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Peter's been waiting for this package\n"
	.string "for weeks!\p"
	.string "Says it's essential for the 'party\n"
	.string "atmosphere'.\p"
	.string "Whatever that means...$"

PeterHouse_EntranceScene_Text_7:
# 93 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Hey Bruno! Let this one through!\p"
	.string "VIP delivery from Ali!$"

PeterHouse_EntranceScene_Text_8:
# 101 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Bouncer Bruno$"

PeterHouse_EntranceScene_Text_9:
# 102 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Ali's contact, huh?\p"
	.string "Alright, you're good.\p"
	.string "Head on down. Peter's in the basement\n"
	.string "spinning records.$"

PeterHouse_EntranceScene_Text_10:
# 115 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Go on.\p"
	.string "And hey... enjoy the groove down there.\p"
	.string "Peter throws one hell of a party.$"

PeterHouse_Bouncer_Text_0:
# 130 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "You're cleared.\p"
	.string "Head on down whenever you're ready.\p"
	.string "Just don't cause any trouble.$"

PeterHouse_Bouncer_Text_1:
# 132 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Hold up.\p"
	.string "You need to check in with the guard at\n"
	.string "the table first.\p"
	.string "No exceptions.$"

PeterHouse_Bouncer_Text_2:
# 134 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Sorry, VIP access only.\p"
	.string "You need to know someone to get in\n"
	.string "here.\p"
	.string "Or bring something special...$"

PeterHouse_Machoke_Text_0:
# 144 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Machoke$"

PeterHouse_Machoke_Text_1:
# 145 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "MACHOKE!\p"
	.string "(The Machoke cracks its knuckles\n"
	.string "menacingly.)$"

PeterHouse_DoorGuard_Text_0:
# 156 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "You're on the list now.\p"
	.string "Go enjoy the party.\p"
	.string "Peter's got the best beats in\n"
	.string "Lionsarch.$"

PeterHouse_DoorGuard_Text_1:
# 158 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Oh, you've got something from Ali?\p"
	.string "Why didn't you say so!\p"
	.string "Go talk to Bruno, he'll let you through.$"

PeterHouse_DoorGuard_Text_2:
# 161 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Hey Bruno! This one's cleared!$"

PeterHouse_DoorGuard_Text_3:
# 163 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Name and reference, please.\p"
	.string "You don't know anyone?\p"
	.string "Then I can't let you in. House rules.$"

PeterHouse_PartyGirl_Text_0:
# 173 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Party Girl$"

PeterHouse_PartyGirl_Text_1:
# 174 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "That was SO fun!\p"
	.string "Peter's parties are the best!\p"
	.string "Gotta come back next weekend!$"

PeterHouse_NPC_Peter_Text_0:
# 183 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Peter$"

PeterHouse_NPC_Peter_Text_1:
# 184 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Hey there! You looking for something?\p"
	.string "If you're here about the party... well,\n"
	.string "you gotta know the password first.\p"
	.string "Or bring me something special from my\n"
	.string "friend Ali down south.$"

PeterHouse_NPC_Peter_Text_2:
# 188 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "The groove is strong tonight!\p"
	.string "Feel free to head downstairs anytime.\p"
	.string "The basement is where the magic\n"
	.string "happens.$"

PeterHouse_Woman_Neighbor_Text_0:
# 197 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "Peter is such a nice young man.\p"
	.string "A bit loud with his music sometimes, but\n"
	.string "he's always polite.\p"
	.string "I hear thumping bass at odd hours...\n"
	.string "must be doing aerobics or something.$"

PeterHouse_RecordPlayer_Text_0:
# 203 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "An old record player sits in the corner.\p"
	.string "A vinyl record is spinning: 'Stayin'\n"
	.string "Alive' by the Bee Gees.$"

PeterHouse_Bookshelf_Text_0:
# 209 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "The shelf is filled with vinyl records:\n"
	.string "Earth, Wind & Fire\n"
	.string "Donna Summer\n"
	.string "Kool & The Gang\n"
	.string "Chic\p"
	.string "...All disco classics!$"

PeterHouse_DiscoBalPostet_Text_0:
# 215 "data/maps/LionsarchCity_Indoor_PeterHouse/scripts.pory"
	.string "A glittery poster on the wall:\n"
	.string "'DISCO WILL NEVER DIE'\n"
	.string "with a silhouette of a dancer in\l"
	.string "platform shoes.$"
