LabJariIndoor_MapScripts::
	.byte 0


LabJariIndoor_Eventscript_Birds_Pokemon_Check::
# 6 "data/maps/LabJariIndoor/scripts.pory"
	lockall
# 7 "data/maps/LabJariIndoor/scripts.pory"
	faceplayer
# 8 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 9 "data/maps/LabJariIndoor/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, LabJariIndoor_Eventscript_Birds_Pokemon_Check_2
LabJariIndoor_Eventscript_Birds_Pokemon_Check_1:
# 13 "data/maps/LabJariIndoor/scripts.pory"
	goto_if_set FLAG_SHINY_KRABBY_ENCOUNTER, LabJariIndoor_Eventscript_Birds_Pokemon_Check_5
LabJariIndoor_Eventscript_Birds_Pokemon_Check_4:
# 17 "data/maps/LabJariIndoor/scripts.pory"
	releaseall
	return

LabJariIndoor_Eventscript_Birds_Pokemon_Check_2:
# 10 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_1, MSGBOX_AUTOCLOSE
# 11 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
	goto LabJariIndoor_Eventscript_Birds_Pokemon_Check_1

LabJariIndoor_Eventscript_Birds_Pokemon_Check_5:
# 14 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 15 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_2
	goto LabJariIndoor_Eventscript_Birds_Pokemon_Check_4


LabJariIndoor_Eventscript_Magikarp::
# 21 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 22 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Magikarp_Text_0, MSGBOX_AUTOCLOSE
# 23 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 24 "data/maps/LabJariIndoor/scripts.pory"
	release
	end


LabJariIndoor_Eventscript_Barry_Birds::
# 29 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 30 "data/maps/LabJariIndoor/scripts.pory"
	goto_if_unset FLAG_INTERN_BOXES_ASSIGNMENT, LabJariIndoor_Eventscript_Barry_Birds_1
# 132 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 133 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_16
# 134 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 135 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 136 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_10, MSGBOX_AUTOCLOSE
# 137 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 138 "data/maps/LabJariIndoor/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoor_Eventscript_Barry_Birds_Movement_15
# 139 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 140 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 141 "data/maps/LabJariIndoor/scripts.pory"
	release
	end

LabJariIndoor_Eventscript_Barry_Birds_1:
# 31 "data/maps/LabJariIndoor/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 32 "data/maps/LabJariIndoor/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 33 "data/maps/LabJariIndoor/scripts.pory"
	delay 10
# 34 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 35 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_0
# 36 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 37 "data/maps/LabJariIndoor/scripts.pory"
	delay 30
# 38 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 39 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_1
# 40 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 41 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_6
LabJariIndoor_Eventscript_Barry_Birds_4:
# 45 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_11
LabJariIndoor_Eventscript_Barry_Birds_9:
# 48 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_16
LabJariIndoor_Eventscript_Barry_Birds_14:
# 51 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_21
LabJariIndoor_Eventscript_Barry_Birds_19:
# 55 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 56 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 57 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_0, MSGBOX_AUTOCLOSE
# 58 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 59 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_7
# 60 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 61 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_8
# 62 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 63 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Barry_Birds_Text_1
# 64 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_2, MSGBOX_AUTOCLOSE
# 65 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 66 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 67 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_3, MSGBOX_AUTOCLOSE
# 68 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 69 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 70 "data/maps/LabJariIndoor/scripts.pory"
	delay 40
# 71 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_7
# 72 "data/maps/LabJariIndoor/scripts.pory"
	delay 40
# 73 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 74 "data/maps/LabJariIndoor/scripts.pory"
	delay 40
# 75 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_7
# 76 "data/maps/LabJariIndoor/scripts.pory"
	delay 40
# 77 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 78 "data/maps/LabJariIndoor/scripts.pory"
	delay 60
# 79 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 80 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_10
# 81 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 82 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 83 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_4
# 84 "data/maps/LabJariIndoor/scripts.pory"
	release
# 85 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 86 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 87 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_10
# 88 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 89 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Barry_Birds_Text_1
# 90 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_5
# 91 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 92 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_7
# 93 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 94 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_6
# 95 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 96 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 97 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 98 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_7, MSGBOX_AUTOCLOSE
# 99 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 100 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_26
LabJariIndoor_Eventscript_Barry_Birds_24:
# 103 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_31
LabJariIndoor_Eventscript_Barry_Birds_29:
# 106 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_36
LabJariIndoor_Eventscript_Barry_Birds_34:
# 109 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_41
LabJariIndoor_Eventscript_Barry_Birds_39:
# 112 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 113 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 114 "data/maps/LabJariIndoor/scripts.pory"
	delay 90
# 115 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 116 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 117 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 118 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_8, MSGBOX_AUTOCLOSE
# 119 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 120 "data/maps/LabJariIndoor/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoor_Eventscript_Barry_Birds_Movement_15
# 121 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 122 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 123 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 124 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_9, MSGBOX_AUTOCLOSE
# 125 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 126 "data/maps/LabJariIndoor/scripts.pory"
	setflag FLAG_INTERN_BOXES_ASSIGNMENT
# 127 "data/maps/LabJariIndoor/scripts.pory"
	fadedefaultbgm
# 128 "data/maps/LabJariIndoor/scripts.pory"
	release
	end

LabJariIndoor_Eventscript_Barry_Birds_5:
# 42 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_2
# 43 "data/maps/LabJariIndoor/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
	goto LabJariIndoor_Eventscript_Barry_Birds_4

LabJariIndoor_Eventscript_Barry_Birds_6:
# 41 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_5
	goto LabJariIndoor_Eventscript_Barry_Birds_4

LabJariIndoor_Eventscript_Barry_Birds_10:
# 46 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_4
	goto LabJariIndoor_Eventscript_Barry_Birds_9

LabJariIndoor_Eventscript_Barry_Birds_11:
# 45 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_10
	goto LabJariIndoor_Eventscript_Barry_Birds_9

LabJariIndoor_Eventscript_Barry_Birds_15:
# 49 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_5
	goto LabJariIndoor_Eventscript_Barry_Birds_14

LabJariIndoor_Eventscript_Barry_Birds_16:
# 48 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_15
	goto LabJariIndoor_Eventscript_Barry_Birds_14

LabJariIndoor_Eventscript_Barry_Birds_20:
# 52 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_6
# 53 "data/maps/LabJariIndoor/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
	goto LabJariIndoor_Eventscript_Barry_Birds_19

LabJariIndoor_Eventscript_Barry_Birds_21:
# 51 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_20
	goto LabJariIndoor_Eventscript_Barry_Birds_19

LabJariIndoor_Eventscript_Barry_Birds_25:
# 101 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_11
	goto LabJariIndoor_Eventscript_Barry_Birds_24

LabJariIndoor_Eventscript_Barry_Birds_26:
# 100 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_25
	goto LabJariIndoor_Eventscript_Barry_Birds_24

LabJariIndoor_Eventscript_Barry_Birds_30:
# 104 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_12
	goto LabJariIndoor_Eventscript_Barry_Birds_29

LabJariIndoor_Eventscript_Barry_Birds_31:
# 103 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_30
	goto LabJariIndoor_Eventscript_Barry_Birds_29

LabJariIndoor_Eventscript_Barry_Birds_35:
# 107 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_13
	goto LabJariIndoor_Eventscript_Barry_Birds_34

LabJariIndoor_Eventscript_Barry_Birds_36:
# 106 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_35
	goto LabJariIndoor_Eventscript_Barry_Birds_34

LabJariIndoor_Eventscript_Barry_Birds_40:
# 110 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_14
	goto LabJariIndoor_Eventscript_Barry_Birds_39

LabJariIndoor_Eventscript_Barry_Birds_41:
# 109 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_40
	goto LabJariIndoor_Eventscript_Barry_Birds_39


LabJariIndoor_Eventscript_Birds_Convo::
# 148 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 149 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 150 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_10
# 151 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 152 "data/maps/LabJariIndoor/scripts.pory"
	faceplayer
# 153 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 154 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Birds_Convo_Text_0
# 155 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 156 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 157 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Birds_Convo_Movement_0
# 158 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Barry_Birds_Text_1
# 159 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Birds_Convo_Text_1, MSGBOX_AUTOCLOSE
# 160 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 161 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 162 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Birds_Convo_Movement_1
# 163 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 164 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 165 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Birds_Convo_Text_2, MSGBOX_AUTOCLOSE
# 166 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 167 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 168 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 169 "data/maps/LabJariIndoor/scripts.pory"
	delay 40
# 170 "data/maps/LabJariIndoor/scripts.pory"
	faceplayer
# 171 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 172 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 173 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Birds_Convo_Text_3, MSGBOX_AUTOCLOSE
# 174 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 175 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 176 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 177 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Eventscript_Barry_Convo::
# 181 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 182 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 183 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_10
# 184 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 185 "data/maps/LabJariIndoor/scripts.pory"
	faceplayer
# 186 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Barry_Birds_Text_1
# 187 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Convo_Text_0, MSGBOX_AUTOCLOSE
# 188 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 189 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 190 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 191 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_1::
# 195 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 196 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_1_Text_0
# 197 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 198 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_2::
# 202 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 203 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_2_Text_0
# 204 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 205 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_3::
# 209 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 210 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_3_Text_0
# 211 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 212 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_4::
# 216 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 217 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_4_Text_0
# 218 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 219 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_5::
# 223 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 224 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_5_Text_0
# 225 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 226 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_6::
# 233 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 234 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_6_Text_0
# 235 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 236 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_7::
# 240 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 241 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_7_Text_0
# 242 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 243 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_8::
# 247 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 248 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_8_Text_0
# 249 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 250 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_9::
# 254 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 255 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_9_Text_0
# 256 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 257 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_10::
# 261 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 262 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_10_Text_0
# 263 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 264 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_11::
# 268 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 269 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_11_Text_0
# 270 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 271 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_12::
# 275 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 276 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_12_Text_0
# 277 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 278 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_13::
# 282 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 283 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_13_Text_0
# 284 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 285 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_14::
# 289 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 290 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_14_Text_0
# 291 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 292 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_15::
# 296 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 297 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_14_Text_0
# 298 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 299 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_16::
# 303 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 304 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_16_Text_0
# 305 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 306 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_17::
# 310 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 311 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_17_Text_0
# 312 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 313 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_18::
# 317 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 318 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_18_Text_0
# 319 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 320 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_19::
# 324 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 325 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_19_Text_0
# 326 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 327 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


# 35 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_0:
# 35 "data/maps/LabJariIndoor/scripts.pory"
	face_down
# 35 "data/maps/LabJariIndoor/scripts.pory"
	emote_exclamation_mark
	step_end

# 39 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_1:
# 39 "data/maps/LabJariIndoor/scripts.pory"
	face_down
# 39 "data/maps/LabJariIndoor/scripts.pory"
	emote_question_mark
	step_end

# 42 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_2:
# 42 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
# 42 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
	step_end

# 43 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_3:
# 43 "data/maps/LabJariIndoor/scripts.pory"
	face_up
	step_end

# 46 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_4:
# 46 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 46 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
	step_end

# 49 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_5:
# 49 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 49 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 49 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
	step_end

# 52 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_6:
# 52 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 52 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 52 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 52 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
# 52 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
	step_end

# 59 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_7:
# 59 "data/maps/LabJariIndoor/scripts.pory"
	face_left
	step_end

# 61 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_8:
# 61 "data/maps/LabJariIndoor/scripts.pory"
	emote_question_mark
	step_end

# 69 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_9:
# 69 "data/maps/LabJariIndoor/scripts.pory"
	face_down
	step_end

# 80 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_10:
# 80 "data/maps/LabJariIndoor/scripts.pory"
	emote_exclamation_mark
	step_end

# 101 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_11:
# 101 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
# 101 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
	step_end

# 104 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_12:
# 104 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
# 104 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 104 "data/maps/LabJariIndoor/scripts.pory"
	face_up
	step_end

# 107 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_13:
# 107 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
# 107 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 107 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 107 "data/maps/LabJariIndoor/scripts.pory"
	face_up
	step_end

# 110 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_14:
# 110 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
# 110 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
# 110 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 110 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 110 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 110 "data/maps/LabJariIndoor/scripts.pory"
	face_up
	step_end

# 120 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_15:
# 120 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
	step_end

# 133 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_16:
# 133 "data/maps/LabJariIndoor/scripts.pory"
	emote_exclamation_mark
# 133 "data/maps/LabJariIndoor/scripts.pory"
	face_down
	step_end

# 157 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Birds_Convo_Movement_0:
# 157 "data/maps/LabJariIndoor/scripts.pory"
	face_right
# 157 "data/maps/LabJariIndoor/scripts.pory"
	emote_question_mark
	step_end

# 162 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Birds_Convo_Movement_1:
# 162 "data/maps/LabJariIndoor/scripts.pory"
	emote_exclamation_mark
# 162 "data/maps/LabJariIndoor/scripts.pory"
	face_left
	step_end

LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0:
# 8 "data/maps/LabJariIndoor/scripts.pory"
	.string "PROF. BIRDS$"

LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_1:
# 10 "data/maps/LabJariIndoor/scripts.pory"
	.string "...Why are you still HERE? BETTER GET TO\n"
	.string "THAT SCRUB OF A FRIEND CALLED JACOB IN\l"
	.string "MASO TOWN!$"

LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_2:
# 15 "data/maps/LabJariIndoor/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "ZERO DATA?!\p"
	.string "YOU SAW THE GOLDEN ANOMALY AND YOU\n"
	.string "HAVE ZERO DATA?!\p"
	.string "THIS IS WORSE THAN THE DAY I SOLD MY\n"
	.string "BITCOIN FOR A PIZZA!\p"
	.string "...wait...\p"
	.string "...you said it deflected the signal?\n"
	.string "That level of energy resistance...\p"
	.string "...It might imply that the mutation was\n"
	.string "triggered by...\p"
	.string "...no...\p"
	.string "...it can't be...\p"
	.string "ANYWAYS, IF YOU WANT TO TRULY BECOME A\n"
	.string "POKEMON RESEARCHER, SCAN THAT GOLDEN\l"
	.string "KRABBY FOR ME.\p"
	.string "NOW GET OUT! I NEED TO LISTEN TO\n"
	.string "SABRINA CARPENTER! USELESS INTERN!$"

LabJariIndoor_Eventscript_Magikarp_Text_0:
# 22 "data/maps/LabJariIndoor/scripts.pory"
	.string "...splash...splash...$"

LabJariIndoor_Eventscript_Barry_Birds_Text_0:
# 57 "data/maps/LabJariIndoor/scripts.pory"
	.string "SO WHO ARE YOU?\p"
	.string "...\p"
	.string "You want to become my new intern?\p"
	.string "WELL TOO LATE!!\p"
	.string "BARRY WAS HERE FIRST!!\p"
	.string "ISN'T THAT RIGHT BARRY?$"

LabJariIndoor_Eventscript_Barry_Birds_Text_1:
# 63 "data/maps/LabJariIndoor/scripts.pory"
	.string "BARRY$"

LabJariIndoor_Eventscript_Barry_Birds_Text_2:
# 64 "data/maps/LabJariIndoor/scripts.pory"
	.string "Uhmm...\n"
	.string "wait a second...\p"
	.string "I'm just...\n"
	.string "...an intern???\p"
	.string "But what about...\n"
	.string "...my salary?$"

LabJariIndoor_Eventscript_Barry_Birds_Text_3:
# 67 "data/maps/LabJariIndoor/scripts.pory"
	.string "YES BARRY, YOU ARE MY INTERN\p"
	.string "...NO, I'M NOT PAYING YOU A FULL SALARY\p"
	.string "...NO, THE GOVERNMENT SUBSIDIES AREN'T\n"
	.string "ENOUGH!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_4:
# 83 "data/maps/LabJariIndoor/scripts.pory"
	.string "....wait a second....\p"
	.string "...I just looked at the new subsidies\n"
	.string "and...\p"
	.string "OUR BUDGET STILL ALLOWS AN EXTRA\n"
	.string "INTERN!!\p"
	.string "YOU ARE HIRED!!\p"
	.string "...SALARY?? AT THE END OF THE MONTH\n"
	.string "OFCOURSE...\p"
	.string "MAYBE...\p"
	.string "WHO KNOWS!!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_5:
# 90 "data/maps/LabJariIndoor/scripts.pory"
	.string "What the...$"

LabJariIndoor_Eventscript_Barry_Birds_Text_6:
# 94 "data/maps/LabJariIndoor/scripts.pory"
	.string "DON'T COMPLAIN BARRY!!\p"
	.string "SHUT U....I MEAN WE WILL TALK ABOUT THIS\n"
	.string "LATER!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_7:
# 98 "data/maps/LabJariIndoor/scripts.pory"
	.string "And you are... {PLAYER}??\p"
	.string "...and {PLAYER} is interested in\n"
	.string "Pokémon??\p"
	.string "WELL, GET IN LINE! HAHAHA.\p"
	.string "MY NAME IS PROFESSOR BIRDS!\p"
	.string "I RESEARCH POKEMON FOR A LIVING!!\p"
	.string "Besides that, I also develop secret\n"
	.string "technol... SENSORS FOR PIG FARMS.\p"
	.string "...so you want to become a POKEMON\n"
	.string "RESEARCHER?\p"
	.string "...HAHAHAH, YOU!!?\n"
	.string "A POKEMON RESEARCHER???\p"
	.string "WELL WELL.\p"
	.string "Your first task as an INTERN is to GET\n"
	.string "SOME BOXES OUT OF MY STORAGE ROOM.\p"
	.string "Everybody who wants to become a\n"
	.string "POKEMON RESEARCHER has to start\l"
	.string "SOMEWHERE!!\p"
	.string "HAHAHAHAH!!\p"
	.string "I warn you, do not sniff around in my\n"
	.string "storage room...\p"
	.string "...OR I'LL FIRE YOU IMMEDIATELY!\p"
	.string "HAHAHHAHA... HAHAH... HAHA... HA... haha...$"

LabJariIndoor_Eventscript_Barry_Birds_Text_8:
# 118 "data/maps/LabJariIndoor/scripts.pory"
	.string "THE BOXES ARE IN THE BACK YOU IDIO...\n"
	.string "lovely little intern!!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_9:
# 124 "data/maps/LabJariIndoor/scripts.pory"
	.string "WELL, WHERE WERE WE BARRY??$"

LabJariIndoor_Eventscript_Barry_Birds_Text_10:
# 136 "data/maps/LabJariIndoor/scripts.pory"
	.string "WHERE DO YOU THINK YOU ARE GOING,\n"
	.string "{PLAYER}?\p"
	.string "GET TO THE BACK AND GET THOSE BOXES\n"
	.string "HERE!!$"

LabJariIndoor_Eventscript_Birds_Convo_Text_0:
# 154 "data/maps/LabJariIndoor/scripts.pory"
	.string "DON'T BOTHER US, I'M EXPLAINING TO\n"
	.string "BARRY HOW IMPORTANT DNA SAMPL... pig\l"
	.string "sensors are!!$"

LabJariIndoor_Eventscript_Birds_Convo_Text_1:
# 159 "data/maps/LabJariIndoor/scripts.pory"
	.string "...ehummm...\p"
	.string "...my name is Wou...$"

LabJariIndoor_Eventscript_Birds_Convo_Text_2:
# 165 "data/maps/LabJariIndoor/scripts.pory"
	.string "JUST FOCUS ON THE BOOKS BARRY!$"

LabJariIndoor_Eventscript_Birds_Convo_Text_3:
# 173 "data/maps/LabJariIndoor/scripts.pory"
	.string "NOW GET THOSE BOXES OUT OF THE STORAGE\n"
	.string "ROOM!!$"

LabJariIndoor_Eventscript_Barry_Convo_Text_0:
# 187 "data/maps/LabJariIndoor/scripts.pory"
	.string "Don't disturb me... I'm learning a lot\n"
	.string "about...\p"
	.string "pig sensors...$"

LabJariIndoor_Sign_1_Text_0:
# 196 "data/maps/LabJariIndoor/scripts.pory"
	.string "--COMPUTER TERMINAL: FILE LOG--\p"
	.string "DIRECTORY:\n"
	.string "OLDFILES/UNCATEGORIZED/VIDEOS/\n"
	.string "FILE NAME: 'HOW-TO-POTATO-CANNON.MP4'\p"
	.string "SIZE: MASSIVE.\n"
	.string "DATE CREATED: 08/17/2005\p"
	.string "SYSTEM NOTE: VIDEO ARCHIVED.\n"
	.string "Content appears to involve the\l"
	.string "dangerous CONSTRUCTION of a\l"
	.string "PROJECTILE DEVICE using TUBER parts.\p"
	.string "WARNING: DO NOT OPEN.\n"
	.string "PROFESSOR'S ORDERS.\p"
	.string "DANGER LEVEL: MEDIUM.\n"
	.string "(POTATO DAMAGE ONLY)\p"
	.string "--PRESS A TO EXIT--$"

LabJariIndoor_Sign_2_Text_0:
# 203 "data/maps/LabJariIndoor/scripts.pory"
	.string "This appears to be a DNA sequencer\n"
	.string "machine.$"

LabJariIndoor_Sign_3_Text_0:
# 210 "data/maps/LabJariIndoor/scripts.pory"
	.string "Loads of books about bitcoin.$"

LabJariIndoor_Sign_4_Text_0:
# 217 "data/maps/LabJariIndoor/scripts.pory"
	.string "This shelf is stacked with copies of\n"
	.string "Taylor Swift's autobiography.$"

LabJariIndoor_Sign_5_Text_0:
# 224 "data/maps/LabJariIndoor/scripts.pory"
	.string "An unopened box bearing the label:\n"
	.string "'SMAC'$"

LabJariIndoor_Sign_6_Text_0:
# 234 "data/maps/LabJariIndoor/scripts.pory"
	.string "A stack of opened, empty egg cartons.$"

LabJariIndoor_Sign_7_Text_0:
# 241 "data/maps/LabJariIndoor/scripts.pory"
	.string "Books about the history of bitcoin.$"

LabJariIndoor_Sign_8_Text_0:
# 248 "data/maps/LabJariIndoor/scripts.pory"
	.string "A sheet of paper covered with\n"
	.string "unintelligible scribbling.$"

LabJariIndoor_Sign_9_Text_0:
# 255 "data/maps/LabJariIndoor/scripts.pory"
	.string "--MINING LOG: SECURE ACCESS--\p"
	.string "STATUS:\n"
	.string "BITCOIN MINING IN FULL OPERATION.\p"
	.string "GIGA-HASH RATE:\n"
	.string "0.000000000001 BTC/sec.\p"
	.string "SYSTEM MESSAGE:\n"
	.string "'PROJECT ETERNAL HODL'\p"
	.string "Estimated time to recover 2011 Wallet\n"
	.string "Balance: 8500 YEARS.\p"
	.string "--PRESS A TO CLOSE WINDOW--$"

LabJariIndoor_Sign_10_Text_0:
# 262 "data/maps/LabJariIndoor/scripts.pory"
	.string "--FINANCE TERMINAL: LOGGED IN--\p"
	.string "SUBSIDY LOG:\n"
	.string "FUNDING STREAM DISRUPTED.\p"
	.string "CAUSE:\n"
	.string "GRANTS EXPIRED..\p"
	.string "PAYMENT MODULE:\n"
	.string "INTERN STIPENDS currently designated\l"
	.string "PENDING.\p"
	.string "NOTE:\n"
	.string "ALLOCATION DELAYED until RESOURCE\l"
	.string "RE-AQUISITION.\p"
	.string "EXPECTED WAIT TIME:\n"
	.string "--ERROR: VALUE UNKNOWN--\p"
	.string "SYSTEM:\n"
	.string "INSUFFICIENT FUNDS.\p"
	.string "--PRESS A TO HOLD OF ANY PAYMENT TO\n"
	.string "INTERNS.--$"

LabJariIndoor_Sign_11_Text_0:
# 269 "data/maps/LabJariIndoor/scripts.pory"
	.string "The plant is clearly struggling, it looks\n"
	.string "as though it hasn't had any water in\l"
	.string "weeks.$"

LabJariIndoor_Sign_12_Text_0:
# 276 "data/maps/LabJariIndoor/scripts.pory"
	.string "This server is making strange beeping\n"
	.string "noises.$"

LabJariIndoor_Sign_13_Text_0:
# 283 "data/maps/LabJariIndoor/scripts.pory"
	.string "--PROJECT CHRONOS: LATEST DATA LOG--\p"
	.string "SUBJECT:\n"
	.string "PROFESSOR'S INNATE TIME DISPLACEMENT\p"
	.string "OBSERVATION:\n"
	.string "100% CONFIRMED that the Professor\l"
	.string "always arrives at least 3 HOURS LATE\l"
	.string "for meetings.\p"
	.string "HYPOTHESIS:\n"
	.string "The Professor's body mass is creating a\l"
	.string "localized TEMPORAL DISTORTION FIELD, a\l"
	.string "micro-DIALGA-EFFECT, that actively\l"
	.string "shifts his personal timeline.\p"
	.string "SYSTEM WARNING:\n"
	.string "Current calculations predict that if\l"
	.string "this trend continues, the Professor\l"
	.string "will eventually be living A DECADE IN\l"
	.string "THE PAST. Do not rely on him to revive\l"
	.string "your FOSSILS.\p"
	.string "NOTE:\n"
	.string "PLEASE ADJUST ALL CLOCKS IN THE LAB BY\l"
	.string "-180 MINUTES.\p"
	.string "--PRESS A TO COMPLY.--$"

LabJariIndoor_Sign_14_Text_0:
# 290 "data/maps/LabJariIndoor/scripts.pory"
	.string "A box overflowing with unsuccessful\n"
	.string "government subsidy requests.$"

LabJariIndoor_Sign_16_Text_0:
# 304 "data/maps/LabJariIndoor/scripts.pory"
	.string "An antique, leather-bound book with\n"
	.string "the title:\p"
	.string "The Source Code:\n"
	.string "Hidden truths about Pokémon origins.$"

LabJariIndoor_Sign_17_Text_0:
# 311 "data/maps/LabJariIndoor/scripts.pory"
	.string "A shelf containing books on pig\n"
	.string "biosensors and their application in\l"
	.string "intensive agriculture.$"

LabJariIndoor_Sign_18_Text_0:
# 318 "data/maps/LabJariIndoor/scripts.pory"
	.string "These appear to be field notes\n"
	.string "detailing a journey through a forest.\l"
	.string "That's strange.$"

LabJariIndoor_Sign_19_Text_0:
# 325 "data/maps/LabJariIndoor/scripts.pory"
	.string "An unopened box labeled with 'GPU\n"
	.string "cards'.$"
