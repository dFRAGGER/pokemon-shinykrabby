LabJariIndoor_MapScripts::
	.byte 0


LabJariIndoor_Eventscript_Birds_Pokemon_Check::
# 6 "data/maps/LabJariIndoor/scripts.pory"
	lockall
# 7 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 8 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_1
# 9 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 10 "data/maps/LabJariIndoor/scripts.pory"
	releaseall
	return


LabJariIndoor_Eventscript_Barry_Birds::
# 14 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 15 "data/maps/LabJariIndoor/scripts.pory"
	goto_if_unset FLAG_INTERN_BOXES_ASSIGNMENT, LabJariIndoor_Eventscript_Barry_Birds_1
# 114 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 115 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_16
# 116 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 117 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_10, MSGBOX_AUTOCLOSE
# 118 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 119 "data/maps/LabJariIndoor/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoor_Eventscript_Barry_Birds_Movement_15
# 120 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 121 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 122 "data/maps/LabJariIndoor/scripts.pory"
	release
	end

LabJariIndoor_Eventscript_Barry_Birds_1:
# 16 "data/maps/LabJariIndoor/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 17 "data/maps/LabJariIndoor/scripts.pory"
	delay 10
# 18 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 19 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_0
# 20 "data/maps/LabJariIndoor/scripts.pory"
	delay 30
# 21 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 22 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_1
# 23 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 24 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_6
LabJariIndoor_Eventscript_Barry_Birds_4:
# 28 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_11
LabJariIndoor_Eventscript_Barry_Birds_9:
# 31 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_16
LabJariIndoor_Eventscript_Barry_Birds_14:
# 34 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_21
LabJariIndoor_Eventscript_Barry_Birds_19:
# 38 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 39 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 40 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_0, MSGBOX_AUTOCLOSE
# 41 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 42 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_7
# 43 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 44 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_8
# 45 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 46 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Barry_Birds_Text_1
# 47 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_2, MSGBOX_AUTOCLOSE
# 48 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 49 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 50 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_3, MSGBOX_AUTOCLOSE
# 51 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 52 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 53 "data/maps/LabJariIndoor/scripts.pory"
	delay 40
# 54 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_7
# 55 "data/maps/LabJariIndoor/scripts.pory"
	delay 40
# 56 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 57 "data/maps/LabJariIndoor/scripts.pory"
	delay 40
# 58 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_7
# 59 "data/maps/LabJariIndoor/scripts.pory"
	delay 40
# 60 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 61 "data/maps/LabJariIndoor/scripts.pory"
	delay 60
# 62 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 63 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_10
# 64 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 65 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 66 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_4
# 67 "data/maps/LabJariIndoor/scripts.pory"
	release
# 68 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 69 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 70 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_10
# 71 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 72 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Barry_Birds_Text_1
# 73 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_5
# 74 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 75 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_7
# 76 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 77 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_6
# 78 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 79 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 80 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 81 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_7, MSGBOX_AUTOCLOSE
# 82 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 83 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_26
LabJariIndoor_Eventscript_Barry_Birds_24:
# 86 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_31
LabJariIndoor_Eventscript_Barry_Birds_29:
# 89 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_36
LabJariIndoor_Eventscript_Barry_Birds_34:
# 92 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_41
LabJariIndoor_Eventscript_Barry_Birds_39:
# 95 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 96 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 97 "data/maps/LabJariIndoor/scripts.pory"
	delay 120
# 98 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 99 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 100 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 101 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_8, MSGBOX_AUTOCLOSE
# 102 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 103 "data/maps/LabJariIndoor/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoor_Eventscript_Barry_Birds_Movement_15
# 104 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 105 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 106 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 107 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_9, MSGBOX_AUTOCLOSE
# 108 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 109 "data/maps/LabJariIndoor/scripts.pory"
	setflag FLAG_INTERN_BOXES_ASSIGNMENT
# 110 "data/maps/LabJariIndoor/scripts.pory"
	release
	end

LabJariIndoor_Eventscript_Barry_Birds_5:
# 25 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_2
# 26 "data/maps/LabJariIndoor/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
	goto LabJariIndoor_Eventscript_Barry_Birds_4

LabJariIndoor_Eventscript_Barry_Birds_6:
# 24 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_5
	goto LabJariIndoor_Eventscript_Barry_Birds_4

LabJariIndoor_Eventscript_Barry_Birds_10:
# 29 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_4
	goto LabJariIndoor_Eventscript_Barry_Birds_9

LabJariIndoor_Eventscript_Barry_Birds_11:
# 28 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_10
	goto LabJariIndoor_Eventscript_Barry_Birds_9

LabJariIndoor_Eventscript_Barry_Birds_15:
# 32 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_5
	goto LabJariIndoor_Eventscript_Barry_Birds_14

LabJariIndoor_Eventscript_Barry_Birds_16:
# 31 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_15
	goto LabJariIndoor_Eventscript_Barry_Birds_14

LabJariIndoor_Eventscript_Barry_Birds_20:
# 35 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_6
# 36 "data/maps/LabJariIndoor/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
	goto LabJariIndoor_Eventscript_Barry_Birds_19

LabJariIndoor_Eventscript_Barry_Birds_21:
# 34 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_20
	goto LabJariIndoor_Eventscript_Barry_Birds_19

LabJariIndoor_Eventscript_Barry_Birds_25:
# 84 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_11
	goto LabJariIndoor_Eventscript_Barry_Birds_24

LabJariIndoor_Eventscript_Barry_Birds_26:
# 83 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_25
	goto LabJariIndoor_Eventscript_Barry_Birds_24

LabJariIndoor_Eventscript_Barry_Birds_30:
# 87 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_12
	goto LabJariIndoor_Eventscript_Barry_Birds_29

LabJariIndoor_Eventscript_Barry_Birds_31:
# 86 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_30
	goto LabJariIndoor_Eventscript_Barry_Birds_29

LabJariIndoor_Eventscript_Barry_Birds_35:
# 90 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_13
	goto LabJariIndoor_Eventscript_Barry_Birds_34

LabJariIndoor_Eventscript_Barry_Birds_36:
# 89 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_35
	goto LabJariIndoor_Eventscript_Barry_Birds_34

LabJariIndoor_Eventscript_Barry_Birds_40:
# 93 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_14
	goto LabJariIndoor_Eventscript_Barry_Birds_39

LabJariIndoor_Eventscript_Barry_Birds_41:
# 92 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_40
	goto LabJariIndoor_Eventscript_Barry_Birds_39


LabJariIndoor_Eventscript_Birds_Convo::
# 129 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 130 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 131 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_10
# 132 "data/maps/LabJariIndoor/scripts.pory"
	faceplayer
# 133 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 134 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Birds_Convo_Text_0
# 135 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 136 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 137 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Birds_Convo_Movement_0
# 138 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Barry_Birds_Text_1
# 139 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Birds_Convo_Text_1, MSGBOX_AUTOCLOSE
# 140 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 141 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 142 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Birds_Convo_Movement_1
# 143 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 144 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 145 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Birds_Convo_Text_2, MSGBOX_AUTOCLOSE
# 146 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 147 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 148 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 149 "data/maps/LabJariIndoor/scripts.pory"
	delay 40
# 150 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 151 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 152 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 153 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Birds_Convo_Text_3, MSGBOX_AUTOCLOSE
# 154 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 155 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 156 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 157 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Eventscript_Barry_Convo::
# 161 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 162 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 163 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_10
# 164 "data/maps/LabJariIndoor/scripts.pory"
	faceplayer
# 165 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Barry_Birds_Text_1
# 166 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Convo_Text_0, MSGBOX_AUTOCLOSE
# 167 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 168 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 169 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 170 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_1::
# 174 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 175 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_1_Text_0
# 176 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 177 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_2::
# 181 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 182 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_2_Text_0
# 183 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 184 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_3::
# 188 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 189 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_3_Text_0
# 190 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 191 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_4::
# 195 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 196 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_4_Text_0
# 197 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 198 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_5::
# 202 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 203 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_5_Text_0
# 204 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 205 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_6::
# 212 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 213 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_6_Text_0
# 214 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 215 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_7::
# 219 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 220 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_7_Text_0
# 221 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 222 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_8::
# 226 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 227 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_8_Text_0
# 228 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 229 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_9::
# 233 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 234 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_9_Text_0
# 235 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 236 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_10::
# 240 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 241 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_10_Text_0
# 242 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 243 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_11::
# 247 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 248 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_11_Text_0
# 249 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 250 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_12::
# 254 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 255 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_12_Text_0
# 256 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 257 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_13::
# 261 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 262 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_13_Text_0
# 263 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 264 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_14::
# 268 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 269 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_14_Text_0
# 270 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 271 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_15::
# 275 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 276 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_14_Text_0
# 277 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 278 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_16::
# 282 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 283 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_16_Text_0
# 284 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 285 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_17::
# 289 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 290 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_17_Text_0
# 291 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 292 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_18::
# 296 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 297 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_18_Text_0
# 298 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 299 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_19::
# 303 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 304 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_19_Text_0
# 305 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 306 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


# 19 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_0:
# 19 "data/maps/LabJariIndoor/scripts.pory"
	face_down
# 19 "data/maps/LabJariIndoor/scripts.pory"
	emote_exclamation_mark
	step_end

# 22 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_1:
# 22 "data/maps/LabJariIndoor/scripts.pory"
	face_down
# 22 "data/maps/LabJariIndoor/scripts.pory"
	emote_question_mark
	step_end

# 25 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_2:
# 25 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
# 25 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
	step_end

# 26 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_3:
# 26 "data/maps/LabJariIndoor/scripts.pory"
	face_up
	step_end

# 29 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_4:
# 29 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 29 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
	step_end

# 32 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_5:
# 32 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 32 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 32 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
	step_end

# 35 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_6:
# 35 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 35 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 35 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 35 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
# 35 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
	step_end

# 42 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_7:
# 42 "data/maps/LabJariIndoor/scripts.pory"
	face_left
	step_end

# 44 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_8:
# 44 "data/maps/LabJariIndoor/scripts.pory"
	emote_question_mark
	step_end

# 52 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_9:
# 52 "data/maps/LabJariIndoor/scripts.pory"
	face_down
	step_end

# 63 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_10:
# 63 "data/maps/LabJariIndoor/scripts.pory"
	emote_exclamation_mark
	step_end

# 84 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_11:
# 84 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
# 84 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
	step_end

# 87 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_12:
# 87 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
# 87 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 87 "data/maps/LabJariIndoor/scripts.pory"
	face_up
	step_end

# 90 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_13:
# 90 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
# 90 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 90 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 90 "data/maps/LabJariIndoor/scripts.pory"
	face_up
	step_end

# 93 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_14:
# 93 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
# 93 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
# 93 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 93 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 93 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 93 "data/maps/LabJariIndoor/scripts.pory"
	face_up
	step_end

# 103 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_15:
# 103 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
	step_end

# 115 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_16:
# 115 "data/maps/LabJariIndoor/scripts.pory"
	emote_exclamation_mark
# 115 "data/maps/LabJariIndoor/scripts.pory"
	face_down
	step_end

# 137 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Birds_Convo_Movement_0:
# 137 "data/maps/LabJariIndoor/scripts.pory"
	face_right
# 137 "data/maps/LabJariIndoor/scripts.pory"
	emote_question_mark
	step_end

# 142 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Birds_Convo_Movement_1:
# 142 "data/maps/LabJariIndoor/scripts.pory"
	emote_exclamation_mark
# 142 "data/maps/LabJariIndoor/scripts.pory"
	face_left
	step_end

LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0:
# 7 "data/maps/LabJariIndoor/scripts.pory"
	.string "Prof. Birds$"

LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_1:
# 8 "data/maps/LabJariIndoor/scripts.pory"
	.string "...WHY ARE YOU STILL HERE? BETTER GET\n"
	.string "TO THAT SCRUB OF A FRIEND CALLED {COLOR GREEN}Jacob{COLOR DARK_GRAY}\l"
	.string "IN THE {COLOR RED}Mestreech{COLOR DARK_GRAY}! HE PROBABLY KNOWS\l"
	.string "HOW TO CATCH SOME POKEMON!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_0:
# 40 "data/maps/LabJariIndoor/scripts.pory"
	.string "SO WHO ARE YOU?\p"
	.string "...\p"
	.string "You want to become my intern?\p"
	.string "WELL TOO LATE BOY!!\p"
	.string "BARRY WAS HERE FIRST!!\p"
	.string "ISN'T THAT RIGHT BARRY?$"

LabJariIndoor_Eventscript_Barry_Birds_Text_1:
# 46 "data/maps/LabJariIndoor/scripts.pory"
	.string "Barry$"

LabJariIndoor_Eventscript_Barry_Birds_Text_2:
# 47 "data/maps/LabJariIndoor/scripts.pory"
	.string "Uhmm...\n"
	.string "wait a second...\p"
	.string "I'm just...\n"
	.string "...an intern???\p"
	.string "But what about...\n"
	.string "...my salary?$"

LabJariIndoor_Eventscript_Barry_Birds_Text_3:
# 50 "data/maps/LabJariIndoor/scripts.pory"
	.string "YES BARRY, YOU ARE MY INTERN\p"
	.string "...NO, I'M NOT PAYING YOU A FULL SALARY\p"
	.string "...NO, THE GOVERNMENT SUBSIDIES AREN'T\n"
	.string "ENOUGH!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_4:
# 66 "data/maps/LabJariIndoor/scripts.pory"
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
# 73 "data/maps/LabJariIndoor/scripts.pory"
	.string "What the...$"

LabJariIndoor_Eventscript_Barry_Birds_Text_6:
# 77 "data/maps/LabJariIndoor/scripts.pory"
	.string "DON'T COMPLAIN BARRY!!\p"
	.string "SHUT U....I MEAN WE WILL TALK ABOUT THIS\n"
	.string "LATER!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_7:
# 81 "data/maps/LabJariIndoor/scripts.pory"
	.string "And you are... {PLAYER}??\p"
	.string "...and {PLAYER} is interested in\n"
	.string "Pokémon??\p"
	.string "WELL, GET IN LINE! HAHAHA.\p"
	.string "MY NAME IS PROFESSOR BIRDS!\p"
	.string "I RESEARCH POKEMON FOR A LIVING!!\p"
	.string "BESIDES THAT, I ALSO DEVELOP SECRET\n"
	.string "TECHNOL... I mean sensors for pig farms.\p"
	.string "...so you want to become a Pokémon\n"
	.string "Master?\p"
	.string "...HAHAHAH, YOU!!?\n"
	.string "A POKEMON MASTER???\p"
	.string "YOUR FIRST TASK AS AN INTERN IS TO GET\n"
	.string "SOME BOXES OUT OF MY STORAGE ROOM.\p"
	.string "EVERYBODY WHO WANTS TO BECOME A\n"
	.string "POKEMON MASTER HAS TO START\l"
	.string "SOMEWHERE!!\p"
	.string "HAHAHAHAH!!\p"
	.string "I warn you, do not sniff around in my\n"
	.string "storage room...\p"
	.string "...OR I'LL FIRE YOU IMMEDIATELY!\p"
	.string "HAHAHHAHA... HAHAH... HAHA... HA... haha...$"

LabJariIndoor_Eventscript_Barry_Birds_Text_8:
# 101 "data/maps/LabJariIndoor/scripts.pory"
	.string "THE BOXES ARE IN THE BACK YOU IDIO...\n"
	.string "lovely little intern!!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_9:
# 107 "data/maps/LabJariIndoor/scripts.pory"
	.string "WELL, WHERE WERE WE BARRY??$"

LabJariIndoor_Eventscript_Barry_Birds_Text_10:
# 117 "data/maps/LabJariIndoor/scripts.pory"
	.string "WHERE DO YOU THINK YOU ARE GOING,\n"
	.string "{PLAYER}?\p"
	.string "GET TO THE BACK AND GET THOSE BOXES\n"
	.string "HERE!!$"

LabJariIndoor_Eventscript_Birds_Convo_Text_0:
# 134 "data/maps/LabJariIndoor/scripts.pory"
	.string "DON'T BOTHER US, I'M EXPLAINING TO\n"
	.string "BARRY HOW IMPORTANT DNA SAMPL... pig\l"
	.string "sensors are!!$"

LabJariIndoor_Eventscript_Birds_Convo_Text_1:
# 139 "data/maps/LabJariIndoor/scripts.pory"
	.string "...ehummm...\p"
	.string "...my name is Wou...$"

LabJariIndoor_Eventscript_Birds_Convo_Text_2:
# 145 "data/maps/LabJariIndoor/scripts.pory"
	.string "JUST FOCUS ON THE BOOKS BARRY!$"

LabJariIndoor_Eventscript_Birds_Convo_Text_3:
# 153 "data/maps/LabJariIndoor/scripts.pory"
	.string "NOW GET THOSE BOXES OUT OF THE STORAGE\n"
	.string "ROOM!!$"

LabJariIndoor_Eventscript_Barry_Convo_Text_0:
# 166 "data/maps/LabJariIndoor/scripts.pory"
	.string "Don't disturb me... I'm learning a lot\n"
	.string "about...\p"
	.string "pig sensors...$"

LabJariIndoor_Sign_1_Text_0:
# 175 "data/maps/LabJariIndoor/scripts.pory"
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
# 182 "data/maps/LabJariIndoor/scripts.pory"
	.string "This appears to be a DNA sequencer\n"
	.string "machine.$"

LabJariIndoor_Sign_3_Text_0:
# 189 "data/maps/LabJariIndoor/scripts.pory"
	.string "Loads of books about bitcoin.$"

LabJariIndoor_Sign_4_Text_0:
# 196 "data/maps/LabJariIndoor/scripts.pory"
	.string "This shelf is stacked with copies of\n"
	.string "Taylor Swift's autobiography.$"

LabJariIndoor_Sign_5_Text_0:
# 203 "data/maps/LabJariIndoor/scripts.pory"
	.string "An unopened box bearing the label:\n"
	.string "'SMAC'$"

LabJariIndoor_Sign_6_Text_0:
# 213 "data/maps/LabJariIndoor/scripts.pory"
	.string "A stack of opened, empty egg cartons.$"

LabJariIndoor_Sign_7_Text_0:
# 220 "data/maps/LabJariIndoor/scripts.pory"
	.string "Books about the history of bitcoin.$"

LabJariIndoor_Sign_8_Text_0:
# 227 "data/maps/LabJariIndoor/scripts.pory"
	.string "A sheet of paper covered with\n"
	.string "unintelligible scribbling.$"

LabJariIndoor_Sign_9_Text_0:
# 234 "data/maps/LabJariIndoor/scripts.pory"
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
# 241 "data/maps/LabJariIndoor/scripts.pory"
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
# 248 "data/maps/LabJariIndoor/scripts.pory"
	.string "The plant is clearly struggling, it looks\n"
	.string "as though it hasn't had any water in\l"
	.string "weeks.$"

LabJariIndoor_Sign_12_Text_0:
# 255 "data/maps/LabJariIndoor/scripts.pory"
	.string "This server is making strange beeping\n"
	.string "noises.$"

LabJariIndoor_Sign_13_Text_0:
# 262 "data/maps/LabJariIndoor/scripts.pory"
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
# 269 "data/maps/LabJariIndoor/scripts.pory"
	.string "A box overflowing with unsuccessful\n"
	.string "government subsidy requests.$"

LabJariIndoor_Sign_16_Text_0:
# 283 "data/maps/LabJariIndoor/scripts.pory"
	.string "An antique, leather-bound book with\n"
	.string "the title:\p"
	.string "The Source Code:\n"
	.string "Hidden truths about Pokémon origins.$"

LabJariIndoor_Sign_17_Text_0:
# 290 "data/maps/LabJariIndoor/scripts.pory"
	.string "A shelf containing books on pig\n"
	.string "biosensors and their application in\l"
	.string "intensive agriculture.$"

LabJariIndoor_Sign_18_Text_0:
# 297 "data/maps/LabJariIndoor/scripts.pory"
	.string "These appear to be field notes\n"
	.string "detailing a journey through a forest.\l"
	.string "That's strange.$"

LabJariIndoor_Sign_19_Text_0:
# 304 "data/maps/LabJariIndoor/scripts.pory"
	.string "An unopened box labeled with 'GPU\n"
	.string "cards'.$"
