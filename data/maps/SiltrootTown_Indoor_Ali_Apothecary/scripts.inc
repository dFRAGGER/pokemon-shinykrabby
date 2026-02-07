SiltrootTown_Indoor_Ali_Apothecary_MapScripts::
# 2 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SiltrootTown_Indoor_Ali_Apothecary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SiltrootTown_Indoor_Ali_Apothecary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	map_script_2 VAR_SILTROOT_TOWN_STATE, 0, SiltrootTown_Indoor_Apothecary_Ali_Giel
	.2byte 0


SiltrootTown_Ali_Employer::
# 8 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 9 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	faceplayer
# 10 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Ali_Employer_Text_0
# 11 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 12 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	pokemart SiltrootTown_Mart_Items
# 13 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 14 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end


	.align 2
# 19 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Mart_Items:
# 20 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 21 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 22 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 23 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_NONE

SiltrootTown_Elder_Dialogue::
# 27 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 28 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	faceplayer
# 29 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Elder_Dialogue_Text_0, MSGBOX_AUTOCLOSE
# 30 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 31 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end


SiltrootTown_Woman_Dialogue::
# 36 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 37 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	faceplayer
# 38 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Woman_Dialogue_Text_0, MSGBOX_AUTOCLOSE
# 39 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 40 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end


SiltrootTown_Screen_Dialogue::
# 45 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 46 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	faceplayer
# 47 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Screen_Dialogue_Text_0, MSGBOX_AUTOCLOSE
# 48 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 49 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end


SiltrootTown_Plant_Dialogue::
# 54 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 55 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	faceplayer
# 56 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Plant_Dialogue_Text_0, MSGBOX_AUTOCLOSE
# 57 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 58 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end


SiltrootTown_Indoor_Apothecary_Ali_Giel::
# 63 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 64 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setvar VAR_SILTROOT_TOWN_STATE, 1
# 65 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	playse SE_PIN
# 66 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_0
# 67 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 68 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 69 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_1, MSGBOX_AUTOCLOSE
# 70 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 71 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_1
# 72 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 73 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 74 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
# 75 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_3, MSGBOX_AUTOCLOSE
# 76 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 77 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3
# 78 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 79 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 80 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_4, MSGBOX_AUTOCLOSE
# 81 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 82 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 83 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 5, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_4
# 84 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 85 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	playse SE_PIN
# 86 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 87 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 88 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_5, MSGBOX_AUTOCLOSE
# 89 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 90 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 91 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 92 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 5, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_5
# 93 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 94 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 95 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 5, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6
# 96 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 97 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 98 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
# 99 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_6, MSGBOX_AUTOCLOSE
# 100 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 101 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 5, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_7
# 102 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 103 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 104 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
# 105 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_7
# 106 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 107 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3
# 108 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 109 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_8
# 110 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 111 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 112 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_9, MSGBOX_AUTOCLOSE
# 113 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 114 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 115 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	playse SE_POKENAV_CALL
# 116 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 117 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	playse SE_POKENAV_CALL
# 118 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 60
# 119 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 120 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_8
# 121 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
# 122 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_10, MSGBOX_AUTOCLOSE
# 123 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 124 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_9
# 125 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3
# 126 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_10
# 127 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 128 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2
# 129 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_11, MSGBOX_AUTOCLOSE
# 130 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 131 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 1, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_11
# 132 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 133 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setflag FLAG_SILTROOTTOWN_ALI_GIEL_CONVO1
# 134 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	removeobject 1
# 135 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	removeobject 5
# 136 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 120
# 137 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement LOCALID_PLAYER, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6
# 138 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 139 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 140 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_12, MSGBOX_AUTOCLOSE
# 141 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 142 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6
# 143 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 144 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end


Siltroottown_Indoor_Apothecary_Ali::
# 149 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	lock
# 150 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	faceplayer
# 151 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto_if_unset FLAG_SILTROOTTOWN_STASH_SACK, Siltroottown_Indoor_Apothecary_Ali_11
Siltroottown_Indoor_Apothecary_Ali_9:
# 156 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto_if_set FLAG_SILTROOTTOWN_STASH_SACK, Siltroottown_Indoor_Apothecary_Ali_8
Siltroottown_Indoor_Apothecary_Ali_6:
# 178 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto_if_set FLAG_SILTROOTTOWN_STASH_SACK, Siltroottown_Indoor_Apothecary_Ali_5
Siltroottown_Indoor_Apothecary_Ali_1:
# 183 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	release
	end

Siltroottown_Indoor_Apothecary_Ali_2:
# 152 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 153 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_0, MSGBOX_AUTOCLOSE
# 154 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
	goto Siltroottown_Indoor_Apothecary_Ali_1

Siltroottown_Indoor_Apothecary_Ali_3:
# 157 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 158 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_1, MSGBOX_AUTOCLOSE
# 159 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
# 160 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2
# 161 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 162 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 40
# 163 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6
# 164 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 165 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 40
# 166 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, Siltroottown_Indoor_Apothecary_Ali_Movement_0
# 167 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 168 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 40
# 169 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3
# 170 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmovement
# 171 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	delay 40
# 172 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	applymovement 2, Siltroottown_Indoor_Apothecary_Ali_Movement_1
# 173 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 174 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_2, MSGBOX_AUTOCLOSE
# 175 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
	goto Siltroottown_Indoor_Apothecary_Ali_1

Siltroottown_Indoor_Apothecary_Ali_4:
# 179 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	setspeaker SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0
# 180 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	msgbox Siltroottown_Indoor_Apothecary_Ali_Text_3
# 181 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	waitmessage
	goto Siltroottown_Indoor_Apothecary_Ali_1

Siltroottown_Indoor_Apothecary_Ali_5:
# 178 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto_if_set FLAG_HIDE_SCOTT_AFTER_CONVO, Siltroottown_Indoor_Apothecary_Ali_4
	goto Siltroottown_Indoor_Apothecary_Ali_1

Siltroottown_Indoor_Apothecary_Ali_8:
# 156 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto_if_unset FLAG_HIDE_SCOTT_AFTER_CONVO, Siltroottown_Indoor_Apothecary_Ali_3
	goto Siltroottown_Indoor_Apothecary_Ali_6

Siltroottown_Indoor_Apothecary_Ali_11:
# 151 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	goto_if_unset FLAG_HIDE_SCOTT_AFTER_CONVO, Siltroottown_Indoor_Apothecary_Ali_2
	goto Siltroottown_Indoor_Apothecary_Ali_9


# 66 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_0:
# 66 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	emote_question_mark
# 66 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_down
	step_end

# 71 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_1:
# 71 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_left
# 71 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_down
	step_end

# 73 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_2:
# 73 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_left
	step_end

# 77 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_3:
# 77 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_down
	step_end

# 83 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_4:
# 83 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 83 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 83 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 83 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 83 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 83 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_right
# 83 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_right
# 83 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_right
# 83 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_down
# 83 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	emote_question_mark
	step_end

# 92 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_5:
# 92 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
# 92 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_right
	step_end

# 95 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_6:
# 95 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_up
	step_end

# 101 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_7:
# 101 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_down
# 101 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_left
# 101 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_left
# 101 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_left
# 101 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
# 101 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
# 101 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
# 101 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
# 101 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_slow_up
	step_end

# 120 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_8:
# 120 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	emote_question_mark
	step_end

# 124 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_9:
# 124 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_down
# 124 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_down
# 124 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_down
# 124 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_right
	step_end

# 126 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_10:
# 126 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_right
# 126 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_left
	step_end

# 131 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
SiltrootTown_Indoor_Apothecary_Ali_Giel_Movement_11:
# 131 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	walk_down
	step_end

# 166 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
Siltroottown_Indoor_Apothecary_Ali_Movement_0:
# 166 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_right
	step_end

# 172 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
Siltroottown_Indoor_Apothecary_Ali_Movement_1:
# 172 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	face_player
	step_end

SiltrootTown_Ali_Employer_Text_0:
# 10 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Hi there. A new batch just arrived.\n"
	.string "How can I help?$"

SiltrootTown_Elder_Dialogue_Text_0:
# 29 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "My doctor prescribed me all sorts of\n"
	.string "pills for my stiff hip... but Ali's\l"
	.string "'special brownies' are the only thing\l"
	.string "that work.\p"
	.string "I feel twenty years younger... and very,\n"
	.string "very hungry.\p"
	.string "Do you have any cookies, dear?$"

SiltrootTown_Woman_Dialogue_Text_0:
# 38 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "I don't even smoke.\p"
	.string "I just come here to sit in the fog.\p"
	.string "It is the only place in town where\n"
	.string "nobody asks me to do anything.\p"
	.string "It's like a sanctuary... a very smelly\n"
	.string "sanctuary.$"

SiltrootTown_Screen_Dialogue_Text_0:
# 47 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Eight hundred for a gram of OG Kush?!\p"
	.string "Inflation is hitting us hard.\p"
	.string "I might have to settle for the Lemon\n"
	.string "Haze mix this week.\p"
	.string "It's weaker, but it leaves enough money\n"
	.string "for snacks.$"

SiltrootTown_Plant_Dialogue_Text_0:
# 56 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Look at the leaves on this one.\p"
	.string "They call it 'Indica'.\p"
	.string "Ali says if you stare at it long enough,\n"
	.string "you can see the cosmos.\p"
	.string "I have been staring for ten minutes and\n"
	.string "I only see a very fuzzy caterpie.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_0:
# 68 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Ali$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_1:
# 69 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Whoa... enter the event horizon, my\n"
	.string "friend.\p"
	.string "You have pulled into my gravity well.\p"
	.string "You look like you are carrying a lot of\n"
	.string "mass on your shoulders.\p"
	.string "We have the finest herbs here... grown\n"
	.string "with hydroponics that rival NASA specs.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_2:
# 74 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Giel$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_3:
# 75 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "cough... COUGH!\p"
	.string "Don't let him start on the space stuff,\n"
	.string "kid.\p"
	.string "He stares at the sky all night.\p"
	.string "It's just lights in the dark, Ali.\p"
	.string "cough...\p"
	.string "Like an Artic Monkey concert but\n"
	.string "further away.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_4:
# 80 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Wait... the vibrations are shifting.\p"
	.string "Daan sent you?\p"
	.string "Whoa. That guy is intense.\p"
	.string "Always shouting about 'Mother Nature'...\p"
	.string "He thinks too small.\p"
	.string "I'm thinking about the bigger picture.\n"
	.string "The cosmos. The singularity.\p"
	.string "Talking about singularity... Slowbro,\n"
	.string "bring me a sample of that OG Kush.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_5:
# 88 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Slowbro, abort launch.\p"
	.string "Our guest is grounded.\p"
	.string "More for us, right?\p"
	.string "I need the focus anyway.\p"
	.string "My Master's thesis on supermassive\n"
	.string "black holes isn't going to write itself.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_6:
# 99 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Thanks Slowbro. These herbs will do me\n"
	.string "good.\p"
	.string "cough... COUGH!$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_7:
# 105 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "So you need a ride to Lion's Arch?\p"
	.string "That cold ass harbor up north?\p"
	.string "Why would anyone want to go there?\p"
	.string "There's no good music scene, apart from\n"
	.string "a disco club in a random basement.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_8:
# 109 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "It is a long trip across the wild ocean.\p"
	.string "You need my neighbor, Scott.\p"
	.string "He... moves inventory for me.\p"
	.string "This business funds my, uh... 'hardware\n"
	.string "acquisitions'.\p"
	.string "Rocket fuel isn't cheap, you know?\p"
	.string "I mean... high-quality fertilizer. Yeah.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_9:
# 112 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "I believe in Karma. Celestial mechanics.\p"
	.string "I help you, you help me.\p"
	.string "I have a client in Lion's Arch.\p"
	.string "A DJ... cool guy.\p"
	.string "He helps fund my 'Project Star-Shot'.\p"
	.string "I mean, he buys a lot of product.\p"
	.string "I have a stash stacked in an old shed\n"
	.string "deep in the southern mangroves.\p"
	.string "Go get the package, bring it to Scott,\n"
	.string "and tell him it is for the 'Ice Cold' run.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_10:
# 122 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "...\p"
	.string "Wait... that's my phone?\p"
	.string "Oh for the love of...\p"
	.string "It's her.\p"
	.string "She probably crashed her car again or\n"
	.string "needs 'emotional support'.\p"
	.string "I can't deal with this drama right now,\n"
	.string "but I have to take this.\p"
	.string "...COUGH!\p"
	.string "See you around, kid. Don't let the\n"
	.string "system grind you down.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_11:
# 129 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Oh... if you are ever visit Hezik Town,\n"
	.string "let me know.\p"
	.string "Maybe you can visit one of my history\n"
	.string "lectures, girls love that shit.$"

SiltrootTown_Indoor_Apothecary_Ali_Giel_Text_12:
# 140 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "He loves that woman, even if the\n"
	.string "thermodynamics of their relationship\l"
	.string "are unstable.\p"
	.string "Alright, good vibes only.\p"
	.string "Go to the southern mangroves, grab the\n"
	.string "stash, find Scott.\p"
	.string "And watch the sky... big things are\n"
	.string "coming.$"

Siltroottown_Indoor_Apothecary_Ali_Text_0:
# 153 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Follow coastline south, there you'll\n"
	.string "find a passage to a small shed.\p"
	.string "Feel free to take any samples if you'd\n"
	.string "like.\p"
	.string "The herbs are in that shed are some of\n"
	.string "the strongest I got hehe.$"

Siltroottown_Indoor_Apothecary_Ali_Text_1:
# 158 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Ah, the satellite returns to base.\p"
	.string "You smell like swamp water... and\n"
	.string "success.\p"
	.string "Those Slowbros in the shed are hard\n"
	.string "workers, but their processing speed is\l"
	.string "a bit low, right?\p"
	.string "You got the package? Stellar.\p"
	.string "My client in Lion's Arch is going to be\n"
	.string "very happy.\p"
	.string "This funds the next phase of the... uh,\n"
	.string "'hydro-garden project'.$"

Siltroottown_Indoor_Apothecary_Ali_Text_2:
# 174 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "Okay, listen closely.\p"
	.string "Go to the house at the very end of the\n"
	.string "mudflat, right next to mine.\p"
	.string "That is where Scott lives.\p"
	.string "He is a bit... weird.\p"
	.string "And he wears these experimental\n"
	.string "goggles all the time.\p"
	.string "Do not ask him about them.\p"
	.string "Just show him the package and tell him\n"
	.string "you need an 'Ice Cold' run.\p"
	.string "Good luck kiddo.$"

Siltroottown_Indoor_Apothecary_Ali_Text_3:
# 180 "data/maps/SiltrootTown_Indoor_Ali_Apothecary/scripts.pory"
	.string "So you've met scott?\p"
	.string "He's a little bit of weirdo, I know, but\n"
	.string "he gets the job done.\p"
	.string "Good luck on your trip across the\n"
	.string "ocean, it's gonna be a wild one!\p"
	.string "Let me know when you have delivered the\n"
	.string "stash.\p"
	.string "See you around.$"
