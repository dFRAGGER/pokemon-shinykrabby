LabJariIndoor_MapScripts::
	.byte 0


LabJariIndoor_Eventscript_Birds_Pokemon_Check::
# 6 "data/maps/LabJariIndoor/scripts.pory"
	lockall
# 7 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 8 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 9 "data/maps/LabJariIndoor/scripts.pory"
	releaseall
	return


LabJariIndoor_Eventscript_Barry_Birds::
# 13 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 14 "data/maps/LabJariIndoor/scripts.pory"
	goto_if_unset FLAG_INTERN_BOXES_ASSIGNMENT, LabJariIndoor_Eventscript_Barry_Birds_1
# 100 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 101 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_16
# 102 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_7, MSGBOX_AUTOCLOSE
# 103 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 104 "data/maps/LabJariIndoor/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoor_Eventscript_Barry_Birds_Movement_15
# 105 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 106 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 107 "data/maps/LabJariIndoor/scripts.pory"
	release
	end

LabJariIndoor_Eventscript_Barry_Birds_1:
# 15 "data/maps/LabJariIndoor/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 16 "data/maps/LabJariIndoor/scripts.pory"
	delay 10
# 17 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 18 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_0
# 19 "data/maps/LabJariIndoor/scripts.pory"
	delay 30
# 20 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 21 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_1
# 22 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 23 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_6
LabJariIndoor_Eventscript_Barry_Birds_4:
# 27 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_11
LabJariIndoor_Eventscript_Barry_Birds_9:
# 30 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_16
LabJariIndoor_Eventscript_Barry_Birds_14:
# 33 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_21
LabJariIndoor_Eventscript_Barry_Birds_19:
# 37 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 38 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_0, MSGBOX_AUTOCLOSE
# 39 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 40 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_7
# 41 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 42 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_8
# 43 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 44 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_1, MSGBOX_AUTOCLOSE
# 45 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 46 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 47 "data/maps/LabJariIndoor/scripts.pory"
	delay 40
# 48 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_7
# 49 "data/maps/LabJariIndoor/scripts.pory"
	delay 40
# 50 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 51 "data/maps/LabJariIndoor/scripts.pory"
	delay 40
# 52 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_7
# 53 "data/maps/LabJariIndoor/scripts.pory"
	delay 40
# 54 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 55 "data/maps/LabJariIndoor/scripts.pory"
	delay 60
# 56 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 57 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_10
# 58 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 59 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_2
# 60 "data/maps/LabJariIndoor/scripts.pory"
	release
# 61 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 62 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 63 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_10
# 64 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 65 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_7
# 66 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_3
# 67 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 68 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 69 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_4, MSGBOX_AUTOCLOSE
# 70 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 71 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_26
LabJariIndoor_Eventscript_Barry_Birds_24:
# 74 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_31
LabJariIndoor_Eventscript_Barry_Birds_29:
# 77 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_36
LabJariIndoor_Eventscript_Barry_Birds_34:
# 80 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_41
LabJariIndoor_Eventscript_Barry_Birds_39:
# 83 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 84 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 85 "data/maps/LabJariIndoor/scripts.pory"
	delay 40
# 86 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 87 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 88 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_5, MSGBOX_AUTOCLOSE
# 89 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 90 "data/maps/LabJariIndoor/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoor_Eventscript_Barry_Birds_Movement_15
# 91 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 92 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 93 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_6, MSGBOX_AUTOCLOSE
# 94 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 95 "data/maps/LabJariIndoor/scripts.pory"
	setflag FLAG_INTERN_BOXES_ASSIGNMENT
# 96 "data/maps/LabJariIndoor/scripts.pory"
	release
	end

LabJariIndoor_Eventscript_Barry_Birds_5:
# 24 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_2
# 25 "data/maps/LabJariIndoor/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
	goto LabJariIndoor_Eventscript_Barry_Birds_4

LabJariIndoor_Eventscript_Barry_Birds_6:
# 23 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_5
	goto LabJariIndoor_Eventscript_Barry_Birds_4

LabJariIndoor_Eventscript_Barry_Birds_10:
# 28 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_4
	goto LabJariIndoor_Eventscript_Barry_Birds_9

LabJariIndoor_Eventscript_Barry_Birds_11:
# 27 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_10
	goto LabJariIndoor_Eventscript_Barry_Birds_9

LabJariIndoor_Eventscript_Barry_Birds_15:
# 31 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_5
	goto LabJariIndoor_Eventscript_Barry_Birds_14

LabJariIndoor_Eventscript_Barry_Birds_16:
# 30 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_15
	goto LabJariIndoor_Eventscript_Barry_Birds_14

LabJariIndoor_Eventscript_Barry_Birds_20:
# 34 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_6
# 35 "data/maps/LabJariIndoor/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
	goto LabJariIndoor_Eventscript_Barry_Birds_19

LabJariIndoor_Eventscript_Barry_Birds_21:
# 33 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_20
	goto LabJariIndoor_Eventscript_Barry_Birds_19

LabJariIndoor_Eventscript_Barry_Birds_25:
# 72 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_11
	goto LabJariIndoor_Eventscript_Barry_Birds_24

LabJariIndoor_Eventscript_Barry_Birds_26:
# 71 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_25
	goto LabJariIndoor_Eventscript_Barry_Birds_24

LabJariIndoor_Eventscript_Barry_Birds_30:
# 75 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_12
	goto LabJariIndoor_Eventscript_Barry_Birds_29

LabJariIndoor_Eventscript_Barry_Birds_31:
# 74 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_30
	goto LabJariIndoor_Eventscript_Barry_Birds_29

LabJariIndoor_Eventscript_Barry_Birds_35:
# 78 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_13
	goto LabJariIndoor_Eventscript_Barry_Birds_34

LabJariIndoor_Eventscript_Barry_Birds_36:
# 77 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_35
	goto LabJariIndoor_Eventscript_Barry_Birds_34

LabJariIndoor_Eventscript_Barry_Birds_40:
# 81 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_14
	goto LabJariIndoor_Eventscript_Barry_Birds_39

LabJariIndoor_Eventscript_Barry_Birds_41:
# 80 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_40
	goto LabJariIndoor_Eventscript_Barry_Birds_39


LabJariIndoor_Eventscript_Birds_Convo::
# 114 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 115 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 116 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_10
# 117 "data/maps/LabJariIndoor/scripts.pory"
	faceplayer
# 118 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Birds_Convo_Text_0
# 119 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 120 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 121 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 122 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Eventscript_Barry_Convo::
# 126 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 127 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 128 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_10
# 129 "data/maps/LabJariIndoor/scripts.pory"
	faceplayer
# 130 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Convo_Text_0, MSGBOX_AUTOCLOSE
# 131 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 132 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 133 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 134 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_1::
# 138 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 139 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_1_Text_0
# 140 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 141 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_2::
# 145 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 146 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_2_Text_0
# 147 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 148 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_3::
# 152 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 153 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_3_Text_0
# 154 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 155 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_4::
# 159 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 160 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_4_Text_0
# 161 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 162 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_5::
# 166 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 167 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_5_Text_0
# 168 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 169 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_6::
# 176 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 177 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_6_Text_0
# 178 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 179 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_7::
# 183 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 184 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_7_Text_0
# 185 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 186 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_8::
# 190 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 191 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_8_Text_0
# 192 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 193 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_9::
# 197 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 198 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_9_Text_0
# 199 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 200 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_10::
# 204 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 205 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_10_Text_0
# 206 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 207 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_11::
# 211 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 212 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_11_Text_0
# 213 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 214 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_12::
# 218 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 219 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_12_Text_0
# 220 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 221 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_13::
# 225 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 226 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_13_Text_0
# 227 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 228 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_14::
# 232 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 233 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_14_Text_0
# 234 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 235 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_15::
# 239 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 240 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_14_Text_0
# 241 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 242 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_16::
# 246 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 247 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_16_Text_0
# 248 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 249 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_17::
# 253 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 254 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_17_Text_0
# 255 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 256 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_18::
# 260 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 261 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_18_Text_0
# 262 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 263 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_19::
# 267 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 268 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_19_Text_0
# 269 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 270 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


# 18 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_0:
# 18 "data/maps/LabJariIndoor/scripts.pory"
	face_down
# 18 "data/maps/LabJariIndoor/scripts.pory"
	emote_exclamation_mark
	step_end

# 21 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_1:
# 21 "data/maps/LabJariIndoor/scripts.pory"
	face_down
# 21 "data/maps/LabJariIndoor/scripts.pory"
	emote_question_mark
	step_end

# 24 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_2:
# 24 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
# 24 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
	step_end

# 25 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_3:
# 25 "data/maps/LabJariIndoor/scripts.pory"
	face_up
	step_end

# 28 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_4:
# 28 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 28 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
	step_end

# 31 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_5:
# 31 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 31 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 31 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
	step_end

# 34 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_6:
# 34 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 34 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 34 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 34 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
# 34 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
	step_end

# 40 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_7:
# 40 "data/maps/LabJariIndoor/scripts.pory"
	face_left
	step_end

# 42 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_8:
# 42 "data/maps/LabJariIndoor/scripts.pory"
	emote_question_mark
	step_end

# 46 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_9:
# 46 "data/maps/LabJariIndoor/scripts.pory"
	face_down
	step_end

# 57 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_10:
# 57 "data/maps/LabJariIndoor/scripts.pory"
	emote_exclamation_mark
	step_end

# 72 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_11:
# 72 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
# 72 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
	step_end

# 75 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_12:
# 75 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
# 75 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 75 "data/maps/LabJariIndoor/scripts.pory"
	face_up
	step_end

# 78 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_13:
# 78 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
# 78 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 78 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 78 "data/maps/LabJariIndoor/scripts.pory"
	face_up
	step_end

# 81 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_14:
# 81 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
# 81 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
# 81 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 81 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 81 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 81 "data/maps/LabJariIndoor/scripts.pory"
	face_up
	step_end

# 90 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_15:
# 90 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
	step_end

# 101 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_16:
# 101 "data/maps/LabJariIndoor/scripts.pory"
	emote_exclamation_mark
# 101 "data/maps/LabJariIndoor/scripts.pory"
	face_down
	step_end

LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0:
# 7 "data/maps/LabJariIndoor/scripts.pory"
	.string "{COLOR GREEN}Prof. Birds: {COLOR DARK_GRAY}...WHY ARE YOU STILL HERE?\n"
	.string "BETTER GET TO THAT SCRUB OF A FRIEND\l"
	.string "CALLED JAKUB IN THE NEXT TOWN! HE\l"
	.string "PROBABLY KNOWS HOW TO CATCH SOME\l"
	.string "POKEMON!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_0:
# 38 "data/maps/LabJariIndoor/scripts.pory"
	.string "{COLOR GREEN}Prof. Birds: {COLOR DARK_GRAY}SO WHO ARE YOU?\p"
	.string "...\p"
	.string "YOU WANT TO BECOME MY INTERN?\p"
	.string "WELL TOO LATE BOY!!\p"
	.string "BARRY WAS HERE FIRST!!\p"
	.string "ISN'T THAT RIGHT BARRY?$"

LabJariIndoor_Eventscript_Barry_Birds_Text_1:
# 44 "data/maps/LabJariIndoor/scripts.pory"
	.string "YES BARRY, YOU ARE MY INTERN\p"
	.string "...NO, I'M NOT PAYING YOU A FULL SALARY\p"
	.string "...NO, THE GOVERNMENT SUBSIDIES ARE NOT\n"
	.string "ENOUGH!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_2:
# 59 "data/maps/LabJariIndoor/scripts.pory"
	.string "....wait a second....\p"
	.string "I JUST LOOKED AT THE NEW SUBSIDIES\n"
	.string "AND...\p"
	.string "OUR BUDGET STILL ALLOWS AN EXTRA\n"
	.string "INTERN!!\p"
	.string "YOU ARE HIRED!!\p"
	.string "...SALARY?? AT THE END OF THE MONTH\n"
	.string "OFCOURSE...\p"
	.string "MAYBE...\p"
	.string "WHO KNOWS!!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_3:
# 66 "data/maps/LabJariIndoor/scripts.pory"
	.string "DON'T COMPLAIN BARRY!!\p"
	.string "SHUT U....I MEAN WE WILL TALK ABOUT THIS\n"
	.string "LATER!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_4:
# 69 "data/maps/LabJariIndoor/scripts.pory"
	.string "AND YOU ARE... {PLAYER}??\p"
	.string "...AND {PLAYER} IS INTERESTED IN\n"
	.string "POKEMON??\p"
	.string "WELL, GET IN LINE! HAHAHA.\p"
	.string "MY NAME IS PROFESSOR BIRDS!\p"
	.string "I RESEARCH POKEMON FOR A LIVING!!\p"
	.string "BESIDES THAT, I ALSO DEVELOP SECRET\n"
	.string "TECHNOL... I MEAN SENSORS FOR PIG\l"
	.string "FARMS.\p"
	.string "...SO YOU WANT TO BECOME A POKEMON\n"
	.string "MASTER?\p"
	.string "MUAAHAHAHAH, YOU!!? A POKEMON\n"
	.string "MASTER???\p"
	.string "YOUR FIRST TASK AS AN INTERN IS TO GET\n"
	.string "SOME BOXES OUT OF MY STORAGE ROOM.\p"
	.string "EVERYBODY WHO WANTS TO BECOME A\n"
	.string "POKEMON MASTER HAS TO START\l"
	.string "SOMEWHERE!!\p"
	.string "I WARN YOU, DO NOT SNIFF AROUND OR I'LL\n"
	.string "FIRE YOU IMMEDIATELY!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_5:
# 88 "data/maps/LabJariIndoor/scripts.pory"
	.string "THE BOXES ARE IN THE BACK YOU IDIO...\n"
	.string "LOVELY LITTLE INTERN!!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_6:
# 93 "data/maps/LabJariIndoor/scripts.pory"
	.string "WELL, WHERE WERE WE BARRY??$"

LabJariIndoor_Eventscript_Barry_Birds_Text_7:
# 102 "data/maps/LabJariIndoor/scripts.pory"
	.string "{COLOR GREEN}Prof. Birds: {COLOR DARK_GRAY}WHERE DO YOU THINK YOU ARE\n"
	.string "GOING?\p"
	.string "GET TO THE BACK AND GET THOSE BOXES\n"
	.string "HERE!!$"

LabJariIndoor_Eventscript_Birds_Convo_Text_0:
# 118 "data/maps/LabJariIndoor/scripts.pory"
	.string "{COLOR GREEN}Prof. Birds: {COLOR DARK_GRAY}DON'T BOTHER US, I'M\n"
	.string "EXPLAINING TO BARRY HOW IMPORTANT DNA\l"
	.string "SAMPL... PIG SENSORS ARE!!\p"
	.string "GET THOSE BOXES OUT OF THE BACK OF THE\n"
	.string "STORAGE ROOM!!$"

LabJariIndoor_Eventscript_Barry_Convo_Text_0:
# 130 "data/maps/LabJariIndoor/scripts.pory"
	.string "{COLOR BLUE}Barry{COLOR DARK_GRAY}: Don't disturb me... I'm learning a\n"
	.string "lot about...\p"
	.string "pig sensors...$"

LabJariIndoor_Sign_1_Text_0:
# 139 "data/maps/LabJariIndoor/scripts.pory"
	.string "--COMPUTER TERMINAL: FILE LOG--\p"
	.string "DIRECTORY:\n"
	.string "OLDFILES/UNCATEGORIZED/VIDEOS/\n"
	.string "FILE NAME: 'HOW-TO-POTATO-CANNON.MP4'\p"
	.string "SIZE: MASSIVE.\n"
	.string "DATE CREATED: 08/17/2005\p"
	.string "SYSTEM NOTE: VIDEO ARCHIVED. Content\n"
	.string "appears to involve the dangerous\l"
	.string "CONSTRUCTION of a PROJECTILE DEVICE\l"
	.string "using TUBER parts.\p"
	.string "WARNING: DO NOT OPEN. PROFESSOR'S\n"
	.string "ORDERS. DANGER LEVEL: MEDIUM. (POTATO\l"
	.string "DAMAGE ONLY)\p"
	.string "--PRESS A TO EXIT--$"

LabJariIndoor_Sign_2_Text_0:
# 146 "data/maps/LabJariIndoor/scripts.pory"
	.string "This appears to be a DNA sequencer\n"
	.string "machine.$"

LabJariIndoor_Sign_3_Text_0:
# 153 "data/maps/LabJariIndoor/scripts.pory"
	.string "Loads of books about bitcoin.$"

LabJariIndoor_Sign_4_Text_0:
# 160 "data/maps/LabJariIndoor/scripts.pory"
	.string "This shelf is stacked with copies of\n"
	.string "Taylor Swift's autobiography.$"

LabJariIndoor_Sign_5_Text_0:
# 167 "data/maps/LabJariIndoor/scripts.pory"
	.string "An unopened box bearing the label,\n"
	.string "'SMAC'.$"

LabJariIndoor_Sign_6_Text_0:
# 177 "data/maps/LabJariIndoor/scripts.pory"
	.string "A stack of opened, empty egg cartons.$"

LabJariIndoor_Sign_7_Text_0:
# 184 "data/maps/LabJariIndoor/scripts.pory"
	.string "Books about the history of bitcoin.$"

LabJariIndoor_Sign_8_Text_0:
# 191 "data/maps/LabJariIndoor/scripts.pory"
	.string "A sheet of paper covered with\n"
	.string "unintelligible scribbling.$"

LabJariIndoor_Sign_9_Text_0:
# 198 "data/maps/LabJariIndoor/scripts.pory"
	.string "--MINING LOG: PROF. BIRDS SECURE\n"
	.string "ACCESS--\p"
	.string "STATUS: BITCOIN MINING... FULL\n"
	.string "OPERATION.\n"
	.string "GIGA-HASH RATE: 0.000000000001\l"
	.string "BTC/sec.\p"
	.string "SYSTEM MESSAGE: 'PROJECT ETERNAL\n"
	.string "HODL'\n"
	.string "Estimated time to recover 2011 Wallet\l"
	.string "Balance: 8500 YEARS.\p"
	.string "--PRESS A TO CLOSE WINDOW--$"

LabJariIndoor_Sign_10_Text_0:
# 205 "data/maps/LabJariIndoor/scripts.pory"
	.string "--FINANCE TERMINAL ACCESS:\n"
	.string "PROFESSOR'S DESK--\p"
	.string "SUBSIDY LOG: FUNDING STREAM\n"
	.string "DISRUPTED.\n"
	.string "CAUSE: GRANTS EXPIRED..\p"
	.string "PAYMENT MODULE: INTERN STIPENDS\n"
	.string "currently designated PENDING.\n"
	.string "NOTE: ALLOCATION DELAYED until\l"
	.string "RESOURCE RE-AQUISITION.\p"
	.string "EXPECTED WAIT TIME: --ERROR: VALUE\n"
	.string "UNKNOWN--\p"
	.string "--SYSTEM: INSUFFICIENT FUNDS. PRESS A\n"
	.string "TO HOLD OF ANY PAYMENT TO INTERNS.--$"

LabJariIndoor_Sign_11_Text_0:
# 212 "data/maps/LabJariIndoor/scripts.pory"
	.string "The plant is clearly struggling, it looks\n"
	.string "as though it hasn't had any water in\l"
	.string "weeks.$"

LabJariIndoor_Sign_12_Text_0:
# 219 "data/maps/LabJariIndoor/scripts.pory"
	.string "This server is making strange beeping\n"
	.string "noises.$"

LabJariIndoor_Sign_13_Text_0:
# 226 "data/maps/LabJariIndoor/scripts.pory"
	.string "--PROJECT CHRONOS: LATEST DATA LOG--\p"
	.string "SUBJECT: PROFESSOR'S INNATE TIME\n"
	.string "DISPLACEMENT\n"
	.string "OBSERVATION: 100% CONFIRMED that the\l"
	.string "Professor always arrives at least 3\l"
	.string "HOURS LATE for meetings.\p"
	.string "HYPOTHESIS: The Professor's body mass\n"
	.string "is creating a localized TEMPORAL\l"
	.string "DISTORTION FIELD, a\l"
	.string "micro-DIALGA-EFFECT, that actively\l"
	.string "shifts his personal timeline.\p"
	.string "SYSTEM WARNING: Current calculations\n"
	.string "predict that if this trend continues,\l"
	.string "the Professor will eventually be living\l"
	.string "A DECADE IN THE PAST. Do not rely on him\l"
	.string "to revive your FOSSILS.\p"
	.string "--NOTE: PLEASE ADJUST ALL CLOCKS IN\n"
	.string "THE LAB BY -180 MINUTES. PRESS A TO\l"
	.string "COMPLY.--$"

LabJariIndoor_Sign_14_Text_0:
# 233 "data/maps/LabJariIndoor/scripts.pory"
	.string "A box overflowing with unsuccessful\n"
	.string "government subsidy requests.$"

LabJariIndoor_Sign_16_Text_0:
# 247 "data/maps/LabJariIndoor/scripts.pory"
	.string "An antique, leather-bound book with\n"
	.string "the title:\p"
	.string "The Source Code:\n"
	.string "Hidden truths about Pokémon origins.$"

LabJariIndoor_Sign_17_Text_0:
# 254 "data/maps/LabJariIndoor/scripts.pory"
	.string "A shelf containing books on pig\n"
	.string "biosensors and their application in\l"
	.string "intensive agriculture.$"

LabJariIndoor_Sign_18_Text_0:
# 261 "data/maps/LabJariIndoor/scripts.pory"
	.string "These appear to be field notes\n"
	.string "detailing a journey through a forest.\l"
	.string "That's strange.$"

LabJariIndoor_Sign_19_Text_0:
# 268 "data/maps/LabJariIndoor/scripts.pory"
	.string "An unopened box labeled with 'GPU\n"
	.string "cards'.$"
