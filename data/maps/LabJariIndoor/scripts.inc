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
	msgbox LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_1
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
# 129 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 130 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_16
# 131 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 132 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_10, MSGBOX_AUTOCLOSE
# 133 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 134 "data/maps/LabJariIndoor/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoor_Eventscript_Barry_Birds_Movement_15
# 135 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 136 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 137 "data/maps/LabJariIndoor/scripts.pory"
	release
	end

LabJariIndoor_Eventscript_Barry_Birds_1:
# 31 "data/maps/LabJariIndoor/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 32 "data/maps/LabJariIndoor/scripts.pory"
	delay 10
# 33 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 34 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_0
# 35 "data/maps/LabJariIndoor/scripts.pory"
	delay 30
# 36 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 37 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_1
# 38 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 39 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_6
LabJariIndoor_Eventscript_Barry_Birds_4:
# 43 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_11
LabJariIndoor_Eventscript_Barry_Birds_9:
# 46 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_16
LabJariIndoor_Eventscript_Barry_Birds_14:
# 49 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_21
LabJariIndoor_Eventscript_Barry_Birds_19:
# 53 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 54 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 55 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_0, MSGBOX_AUTOCLOSE
# 56 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 57 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_7
# 58 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 59 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_8
# 60 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 61 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Barry_Birds_Text_1
# 62 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_2, MSGBOX_AUTOCLOSE
# 63 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 64 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 65 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_3, MSGBOX_AUTOCLOSE
# 66 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 67 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 68 "data/maps/LabJariIndoor/scripts.pory"
	delay 40
# 69 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_7
# 70 "data/maps/LabJariIndoor/scripts.pory"
	delay 40
# 71 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 72 "data/maps/LabJariIndoor/scripts.pory"
	delay 40
# 73 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_7
# 74 "data/maps/LabJariIndoor/scripts.pory"
	delay 40
# 75 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 76 "data/maps/LabJariIndoor/scripts.pory"
	delay 60
# 77 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 78 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_10
# 79 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 80 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 81 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_4
# 82 "data/maps/LabJariIndoor/scripts.pory"
	release
# 83 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 84 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 85 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_10
# 86 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 87 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Barry_Birds_Text_1
# 88 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_5
# 89 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 90 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_7
# 91 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 92 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_6
# 93 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 94 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 95 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 96 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_7, MSGBOX_AUTOCLOSE
# 97 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 98 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_26
LabJariIndoor_Eventscript_Barry_Birds_24:
# 101 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_31
LabJariIndoor_Eventscript_Barry_Birds_29:
# 104 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_36
LabJariIndoor_Eventscript_Barry_Birds_34:
# 107 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_41
LabJariIndoor_Eventscript_Barry_Birds_39:
# 110 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 111 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 112 "data/maps/LabJariIndoor/scripts.pory"
	delay 90
# 113 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_9
# 114 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 115 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 116 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_8, MSGBOX_AUTOCLOSE
# 117 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 118 "data/maps/LabJariIndoor/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoor_Eventscript_Barry_Birds_Movement_15
# 119 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 120 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 121 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 122 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Birds_Text_9, MSGBOX_AUTOCLOSE
# 123 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 124 "data/maps/LabJariIndoor/scripts.pory"
	setflag FLAG_INTERN_BOXES_ASSIGNMENT
# 125 "data/maps/LabJariIndoor/scripts.pory"
	release
	end

LabJariIndoor_Eventscript_Barry_Birds_5:
# 40 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_2
# 41 "data/maps/LabJariIndoor/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
	goto LabJariIndoor_Eventscript_Barry_Birds_4

LabJariIndoor_Eventscript_Barry_Birds_6:
# 39 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_5
	goto LabJariIndoor_Eventscript_Barry_Birds_4

LabJariIndoor_Eventscript_Barry_Birds_10:
# 44 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_4
	goto LabJariIndoor_Eventscript_Barry_Birds_9

LabJariIndoor_Eventscript_Barry_Birds_11:
# 43 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_10
	goto LabJariIndoor_Eventscript_Barry_Birds_9

LabJariIndoor_Eventscript_Barry_Birds_15:
# 47 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_5
	goto LabJariIndoor_Eventscript_Barry_Birds_14

LabJariIndoor_Eventscript_Barry_Birds_16:
# 46 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_15
	goto LabJariIndoor_Eventscript_Barry_Birds_14

LabJariIndoor_Eventscript_Barry_Birds_20:
# 50 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_6
# 51 "data/maps/LabJariIndoor/scripts.pory"
	applymovement LOCALID_PLAYER, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
	goto LabJariIndoor_Eventscript_Barry_Birds_19

LabJariIndoor_Eventscript_Barry_Birds_21:
# 49 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_20
	goto LabJariIndoor_Eventscript_Barry_Birds_19

LabJariIndoor_Eventscript_Barry_Birds_25:
# 99 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_11
	goto LabJariIndoor_Eventscript_Barry_Birds_24

LabJariIndoor_Eventscript_Barry_Birds_26:
# 98 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_25
	goto LabJariIndoor_Eventscript_Barry_Birds_24

LabJariIndoor_Eventscript_Barry_Birds_30:
# 102 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_12
	goto LabJariIndoor_Eventscript_Barry_Birds_29

LabJariIndoor_Eventscript_Barry_Birds_31:
# 101 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_30
	goto LabJariIndoor_Eventscript_Barry_Birds_29

LabJariIndoor_Eventscript_Barry_Birds_35:
# 105 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_13
	goto LabJariIndoor_Eventscript_Barry_Birds_34

LabJariIndoor_Eventscript_Barry_Birds_36:
# 104 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_35
	goto LabJariIndoor_Eventscript_Barry_Birds_34

LabJariIndoor_Eventscript_Barry_Birds_40:
# 108 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_14
	goto LabJariIndoor_Eventscript_Barry_Birds_39

LabJariIndoor_Eventscript_Barry_Birds_41:
# 107 "data/maps/LabJariIndoor/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq LabJariIndoor_Eventscript_Barry_Birds_40
	goto LabJariIndoor_Eventscript_Barry_Birds_39


LabJariIndoor_Eventscript_Birds_Convo::
# 144 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 145 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 146 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_10
# 147 "data/maps/LabJariIndoor/scripts.pory"
	faceplayer
# 148 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 149 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Birds_Convo_Text_0
# 150 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 151 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 152 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Birds_Convo_Movement_0
# 153 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Barry_Birds_Text_1
# 154 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Birds_Convo_Text_1, MSGBOX_AUTOCLOSE
# 155 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 156 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 157 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Birds_Convo_Movement_1
# 158 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 159 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 160 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Birds_Convo_Text_2, MSGBOX_AUTOCLOSE
# 161 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 162 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 163 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 164 "data/maps/LabJariIndoor/scripts.pory"
	delay 40
# 165 "data/maps/LabJariIndoor/scripts.pory"
	faceplayer
# 166 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 167 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0
# 168 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Birds_Convo_Text_3, MSGBOX_AUTOCLOSE
# 169 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 170 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 3, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 171 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 172 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Eventscript_Barry_Convo::
# 176 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 177 "data/maps/LabJariIndoor/scripts.pory"
	playse SE_PIN
# 178 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_10
# 179 "data/maps/LabJariIndoor/scripts.pory"
	faceplayer
# 180 "data/maps/LabJariIndoor/scripts.pory"
	setspeaker LabJariIndoor_Eventscript_Barry_Birds_Text_1
# 181 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Eventscript_Barry_Convo_Text_0, MSGBOX_AUTOCLOSE
# 182 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 183 "data/maps/LabJariIndoor/scripts.pory"
	applymovement 2, LabJariIndoor_Eventscript_Barry_Birds_Movement_3
# 184 "data/maps/LabJariIndoor/scripts.pory"
	waitmovement
# 185 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_1::
# 189 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 190 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_1_Text_0
# 191 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 192 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_2::
# 196 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 197 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_2_Text_0
# 198 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 199 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_3::
# 203 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 204 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_3_Text_0
# 205 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 206 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_4::
# 210 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 211 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_4_Text_0
# 212 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 213 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_5::
# 217 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 218 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_5_Text_0
# 219 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 220 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_6::
# 227 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 228 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_6_Text_0
# 229 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 230 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_7::
# 234 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 235 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_7_Text_0
# 236 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 237 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_8::
# 241 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 242 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_8_Text_0
# 243 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 244 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_9::
# 248 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 249 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_9_Text_0
# 250 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 251 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_10::
# 255 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 256 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_10_Text_0
# 257 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 258 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_11::
# 262 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 263 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_11_Text_0
# 264 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 265 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_12::
# 269 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 270 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_12_Text_0
# 271 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 272 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_13::
# 276 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 277 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_13_Text_0
# 278 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 279 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_14::
# 283 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 284 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_14_Text_0
# 285 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 286 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_15::
# 290 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 291 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_14_Text_0
# 292 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 293 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_16::
# 297 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 298 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_16_Text_0
# 299 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 300 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_17::
# 304 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 305 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_17_Text_0
# 306 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 307 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_18::
# 311 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 312 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_18_Text_0
# 313 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 314 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


LabJariIndoor_Sign_19::
# 318 "data/maps/LabJariIndoor/scripts.pory"
	lock
# 319 "data/maps/LabJariIndoor/scripts.pory"
	msgbox LabJariIndoor_Sign_19_Text_0
# 320 "data/maps/LabJariIndoor/scripts.pory"
	waitmessage
# 321 "data/maps/LabJariIndoor/scripts.pory"
	release
	return


# 34 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_0:
# 34 "data/maps/LabJariIndoor/scripts.pory"
	face_down
# 34 "data/maps/LabJariIndoor/scripts.pory"
	emote_exclamation_mark
	step_end

# 37 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_1:
# 37 "data/maps/LabJariIndoor/scripts.pory"
	face_down
# 37 "data/maps/LabJariIndoor/scripts.pory"
	emote_question_mark
	step_end

# 40 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_2:
# 40 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
# 40 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
	step_end

# 41 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_3:
# 41 "data/maps/LabJariIndoor/scripts.pory"
	face_up
	step_end

# 44 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_4:
# 44 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 44 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
	step_end

# 47 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_5:
# 47 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 47 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 47 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
	step_end

# 50 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_6:
# 50 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 50 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 50 "data/maps/LabJariIndoor/scripts.pory"
	walk_right
# 50 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
# 50 "data/maps/LabJariIndoor/scripts.pory"
	walk_down
	step_end

# 57 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_7:
# 57 "data/maps/LabJariIndoor/scripts.pory"
	face_left
	step_end

# 59 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_8:
# 59 "data/maps/LabJariIndoor/scripts.pory"
	emote_question_mark
	step_end

# 67 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_9:
# 67 "data/maps/LabJariIndoor/scripts.pory"
	face_down
	step_end

# 78 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_10:
# 78 "data/maps/LabJariIndoor/scripts.pory"
	emote_exclamation_mark
	step_end

# 99 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_11:
# 99 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
# 99 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
	step_end

# 102 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_12:
# 102 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
# 102 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 102 "data/maps/LabJariIndoor/scripts.pory"
	face_up
	step_end

# 105 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_13:
# 105 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
# 105 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 105 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 105 "data/maps/LabJariIndoor/scripts.pory"
	face_up
	step_end

# 108 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_14:
# 108 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
# 108 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
# 108 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 108 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 108 "data/maps/LabJariIndoor/scripts.pory"
	walk_left
# 108 "data/maps/LabJariIndoor/scripts.pory"
	face_up
	step_end

# 118 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_15:
# 118 "data/maps/LabJariIndoor/scripts.pory"
	walk_up
	step_end

# 130 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Barry_Birds_Movement_16:
# 130 "data/maps/LabJariIndoor/scripts.pory"
	emote_exclamation_mark
# 130 "data/maps/LabJariIndoor/scripts.pory"
	face_down
	step_end

# 152 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Birds_Convo_Movement_0:
# 152 "data/maps/LabJariIndoor/scripts.pory"
	face_right
# 152 "data/maps/LabJariIndoor/scripts.pory"
	emote_question_mark
	step_end

# 157 "data/maps/LabJariIndoor/scripts.pory"
LabJariIndoor_Eventscript_Birds_Convo_Movement_1:
# 157 "data/maps/LabJariIndoor/scripts.pory"
	emote_exclamation_mark
# 157 "data/maps/LabJariIndoor/scripts.pory"
	face_left
	step_end

LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_0:
# 8 "data/maps/LabJariIndoor/scripts.pory"
	.string "Prof. Birds$"

LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_1:
# 10 "data/maps/LabJariIndoor/scripts.pory"
	.string "...WHY ARE YOU STILL HERE? BETTER GET\n"
	.string "TO THAT SCRUB OF A FRIEND CALLED {COLOR GREEN}Jacob{COLOR DARK_GRAY}\l"
	.string "IN THE {COLOR RED}Mestreech{COLOR DARK_GRAY}! HE PROBABLY KNOWS\l"
	.string "WHERE TO FIND THAT GOLDEN KRABBY!$"

LabJariIndoor_Eventscript_Birds_Pokemon_Check_Text_2:
# 15 "data/maps/LabJariIndoor/scripts.pory"
	.string "ZERO DATA?! YOU SAW THE GOLDEN ANOMALY\n"
	.string "AND YOU HAVE ZERO DATA?!\p"
	.string "THIS IS WORSE THAN THE DAY I SOLD MY\n"
	.string "BITCOIN FOR A PIZZA!\p"
	.string "...wait...\p"
	.string "...you said it deflected the signal?\n"
	.string "That level of energy resistance...\p"
	.string "...It might imply that the mutation was\n"
	.string "triggered by...\p"
	.string "...no...\p"
	.string "...it can't be...\p"
	.string "ANYWAYS! DO NOT COME BACK UNTIL YOU\n"
	.string "CATCH A RARE POKÉMON OR THAT GOLDEN\l"
	.string "KRABBY!\p"
	.string "NOW GET OUT! I NEED TO LISTEN TO\n"
	.string "SABRINA CARPENTER! USELESS INTERN!$"

LabJariIndoor_Eventscript_Magikarp_Text_0:
# 22 "data/maps/LabJariIndoor/scripts.pory"
	.string "...splash...splash...$"

LabJariIndoor_Eventscript_Barry_Birds_Text_0:
# 55 "data/maps/LabJariIndoor/scripts.pory"
	.string "SO WHO ARE YOU?\p"
	.string "...\p"
	.string "You want to become my new intern?\p"
	.string "WELL TOO LATE BOY!!\p"
	.string "BARRY WAS HERE FIRST!!\p"
	.string "ISN'T THAT RIGHT BARRY?$"

LabJariIndoor_Eventscript_Barry_Birds_Text_1:
# 61 "data/maps/LabJariIndoor/scripts.pory"
	.string "Barry$"

LabJariIndoor_Eventscript_Barry_Birds_Text_2:
# 62 "data/maps/LabJariIndoor/scripts.pory"
	.string "Uhmm...\n"
	.string "wait a second...\p"
	.string "I'm just...\n"
	.string "...an intern???\p"
	.string "But what about...\n"
	.string "...my salary?$"

LabJariIndoor_Eventscript_Barry_Birds_Text_3:
# 65 "data/maps/LabJariIndoor/scripts.pory"
	.string "YES BARRY, YOU ARE MY INTERN\p"
	.string "...NO, I'M NOT PAYING YOU A FULL SALARY\p"
	.string "...NO, THE GOVERNMENT SUBSIDIES AREN'T\n"
	.string "ENOUGH!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_4:
# 81 "data/maps/LabJariIndoor/scripts.pory"
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
# 88 "data/maps/LabJariIndoor/scripts.pory"
	.string "What the...$"

LabJariIndoor_Eventscript_Barry_Birds_Text_6:
# 92 "data/maps/LabJariIndoor/scripts.pory"
	.string "DON'T COMPLAIN BARRY!!\p"
	.string "SHUT U....I MEAN WE WILL TALK ABOUT THIS\n"
	.string "LATER!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_7:
# 96 "data/maps/LabJariIndoor/scripts.pory"
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
# 116 "data/maps/LabJariIndoor/scripts.pory"
	.string "THE BOXES ARE IN THE BACK YOU IDIO...\n"
	.string "lovely little intern!!$"

LabJariIndoor_Eventscript_Barry_Birds_Text_9:
# 122 "data/maps/LabJariIndoor/scripts.pory"
	.string "WELL, WHERE WERE WE BARRY??$"

LabJariIndoor_Eventscript_Barry_Birds_Text_10:
# 132 "data/maps/LabJariIndoor/scripts.pory"
	.string "WHERE DO YOU THINK YOU ARE GOING,\n"
	.string "{PLAYER}?\p"
	.string "GET TO THE BACK AND GET THOSE BOXES\n"
	.string "HERE!!$"

LabJariIndoor_Eventscript_Birds_Convo_Text_0:
# 149 "data/maps/LabJariIndoor/scripts.pory"
	.string "DON'T BOTHER US, I'M EXPLAINING TO\n"
	.string "BARRY HOW IMPORTANT DNA SAMPL... pig\l"
	.string "sensors are!!$"

LabJariIndoor_Eventscript_Birds_Convo_Text_1:
# 154 "data/maps/LabJariIndoor/scripts.pory"
	.string "...ehummm...\p"
	.string "...my name is Wou...$"

LabJariIndoor_Eventscript_Birds_Convo_Text_2:
# 160 "data/maps/LabJariIndoor/scripts.pory"
	.string "JUST FOCUS ON THE BOOKS BARRY!$"

LabJariIndoor_Eventscript_Birds_Convo_Text_3:
# 168 "data/maps/LabJariIndoor/scripts.pory"
	.string "NOW GET THOSE BOXES OUT OF THE STORAGE\n"
	.string "ROOM!!$"

LabJariIndoor_Eventscript_Barry_Convo_Text_0:
# 181 "data/maps/LabJariIndoor/scripts.pory"
	.string "Don't disturb me... I'm learning a lot\n"
	.string "about...\p"
	.string "pig sensors...$"

LabJariIndoor_Sign_1_Text_0:
# 190 "data/maps/LabJariIndoor/scripts.pory"
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
# 197 "data/maps/LabJariIndoor/scripts.pory"
	.string "This appears to be a DNA sequencer\n"
	.string "machine.$"

LabJariIndoor_Sign_3_Text_0:
# 204 "data/maps/LabJariIndoor/scripts.pory"
	.string "Loads of books about bitcoin.$"

LabJariIndoor_Sign_4_Text_0:
# 211 "data/maps/LabJariIndoor/scripts.pory"
	.string "This shelf is stacked with copies of\n"
	.string "Taylor Swift's autobiography.$"

LabJariIndoor_Sign_5_Text_0:
# 218 "data/maps/LabJariIndoor/scripts.pory"
	.string "An unopened box bearing the label:\n"
	.string "'SMAC'$"

LabJariIndoor_Sign_6_Text_0:
# 228 "data/maps/LabJariIndoor/scripts.pory"
	.string "A stack of opened, empty egg cartons.$"

LabJariIndoor_Sign_7_Text_0:
# 235 "data/maps/LabJariIndoor/scripts.pory"
	.string "Books about the history of bitcoin.$"

LabJariIndoor_Sign_8_Text_0:
# 242 "data/maps/LabJariIndoor/scripts.pory"
	.string "A sheet of paper covered with\n"
	.string "unintelligible scribbling.$"

LabJariIndoor_Sign_9_Text_0:
# 249 "data/maps/LabJariIndoor/scripts.pory"
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
# 256 "data/maps/LabJariIndoor/scripts.pory"
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
# 263 "data/maps/LabJariIndoor/scripts.pory"
	.string "The plant is clearly struggling, it looks\n"
	.string "as though it hasn't had any water in\l"
	.string "weeks.$"

LabJariIndoor_Sign_12_Text_0:
# 270 "data/maps/LabJariIndoor/scripts.pory"
	.string "This server is making strange beeping\n"
	.string "noises.$"

LabJariIndoor_Sign_13_Text_0:
# 277 "data/maps/LabJariIndoor/scripts.pory"
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
# 284 "data/maps/LabJariIndoor/scripts.pory"
	.string "A box overflowing with unsuccessful\n"
	.string "government subsidy requests.$"

LabJariIndoor_Sign_16_Text_0:
# 298 "data/maps/LabJariIndoor/scripts.pory"
	.string "An antique, leather-bound book with\n"
	.string "the title:\p"
	.string "The Source Code:\n"
	.string "Hidden truths about Pokémon origins.$"

LabJariIndoor_Sign_17_Text_0:
# 305 "data/maps/LabJariIndoor/scripts.pory"
	.string "A shelf containing books on pig\n"
	.string "biosensors and their application in\l"
	.string "intensive agriculture.$"

LabJariIndoor_Sign_18_Text_0:
# 312 "data/maps/LabJariIndoor/scripts.pory"
	.string "These appear to be field notes\n"
	.string "detailing a journey through a forest.\l"
	.string "That's strange.$"

LabJariIndoor_Sign_19_Text_0:
# 319 "data/maps/LabJariIndoor/scripts.pory"
	.string "An unopened box labeled with 'GPU\n"
	.string "cards'.$"
