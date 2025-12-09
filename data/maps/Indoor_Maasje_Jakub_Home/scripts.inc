Indoor_Maasje_Jakub_Home_MapScripts::
	.byte 0


Indoor_Maasje_Jakub_Home_JakubConvo::
# 4 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	lock
# 5 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	faceplayer
# 6 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jakub_Home_JakubConvo_3
Indoor_Maasje_Jakub_Home_JakubConvo_1:
# 14 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jakub_Home_JakubConvo_8
Indoor_Maasje_Jakub_Home_JakubConvo_6:
# 20 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jakub_Home_JakubConvo_13
Indoor_Maasje_Jakub_Home_JakubConvo_11:
# 105 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jakub_Home_JakubConvo_18
Indoor_Maasje_Jakub_Home_JakubConvo_16:
# 109 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	return

Indoor_Maasje_Jakub_Home_JakubConvo_2:
# 7 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 8 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_1
# 9 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 10 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setflag FLAG_JAKUB_CONVO
# 11 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	end

Indoor_Maasje_Jakub_Home_JakubConvo_3:
# 6 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_JAKUB_CONVO, Indoor_Maasje_Jakub_Home_JakubConvo_2
	goto Indoor_Maasje_Jakub_Home_JakubConvo_1

Indoor_Maasje_Jakub_Home_JakubConvo_7:
# 15 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 16 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_2
# 17 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	end

Indoor_Maasje_Jakub_Home_JakubConvo_8:
# 14 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_JAKUB_CONVO, Indoor_Maasje_Jakub_Home_JakubConvo_7
	goto Indoor_Maasje_Jakub_Home_JakubConvo_6

Indoor_Maasje_Jakub_Home_JakubConvo_12:
# 21 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 22 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_3
# 23 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 24 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 25 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	giveitem ITEM_HELIX_FOSSIL
# 26 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_HIDE_PETELONGFELLOW, Indoor_Maasje_Jakub_Home_JakubConvo_22
# 32 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 33 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_5, MSGBOX_AUTOCLOSE
# 34 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
Indoor_Maasje_Jakub_Home_JakubConvo_21:
# 36 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 37 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 38 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Indoor_Maasje_Jakub_Home_JakubConvo_28
Indoor_Maasje_Jakub_Home_JakubConvo_27:
# 65 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	playse SE_PIN
# 66 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0
# 67 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 68 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 69 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_6, MSGBOX_AUTOCLOSE
# 71 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 72 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_3
# 73 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 74 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 75 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 76 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_7, MSGBOX_AUTOCLOSE
# 77 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 78 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 79 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 80 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_8, MSGBOX_AUTOCLOSE
# 81 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 82 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 83 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 84 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_9, MSGBOX_AUTOCLOSE
# 85 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 86 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 87 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_4
# 88 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
Indoor_Maasje_Jakub_Home_JakubConvo_25:
# 90 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	faceplayer
# 91 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_HIDE_PETELONGFELLOW, Indoor_Maasje_Jakub_Home_JakubConvo_32
# 97 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 98 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_11
# 99 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
Indoor_Maasje_Jakub_Home_JakubConvo_31:
# 101 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setflag FLAG_JAKUB_CONVO_2
# 102 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	end

Indoor_Maasje_Jakub_Home_JakubConvo_13:
# 20 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_JAKUB_CONVO_2, Indoor_Maasje_Jakub_Home_JakubConvo_12
	goto Indoor_Maasje_Jakub_Home_JakubConvo_11

Indoor_Maasje_Jakub_Home_JakubConvo_17:
# 106 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 107 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_12
	goto Indoor_Maasje_Jakub_Home_JakubConvo_16

Indoor_Maasje_Jakub_Home_JakubConvo_18:
# 105 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_JAKUB_CONVO_2, Indoor_Maasje_Jakub_Home_JakubConvo_17
	goto Indoor_Maasje_Jakub_Home_JakubConvo_16

Indoor_Maasje_Jakub_Home_JakubConvo_22:
# 27 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 28 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_4, MSGBOX_AUTOCLOSE
# 29 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
	goto Indoor_Maasje_Jakub_Home_JakubConvo_21

Indoor_Maasje_Jakub_Home_JakubConvo_26:
# 39 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	playse SE_PIN
# 40 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0
# 41 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 42 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 43 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 44 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_6, MSGBOX_AUTOCLOSE
# 45 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 46 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_1
# 47 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 48 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 49 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 50 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_7, MSGBOX_AUTOCLOSE
# 51 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 52 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 53 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 54 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_8, MSGBOX_AUTOCLOSE
# 55 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 56 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 57 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 58 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_9, MSGBOX_AUTOCLOSE
# 59 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 60 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 61 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_2
# 62 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
	goto Indoor_Maasje_Jakub_Home_JakubConvo_25

Indoor_Maasje_Jakub_Home_JakubConvo_28:
# 38 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq Indoor_Maasje_Jakub_Home_JakubConvo_26
	goto Indoor_Maasje_Jakub_Home_JakubConvo_27

Indoor_Maasje_Jakub_Home_JakubConvo_32:
# 92 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 93 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_10
# 94 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
	goto Indoor_Maasje_Jakub_Home_JakubConvo_31


Indoor_Maasje_Jakub_Home_SiennaConvo::
# 113 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	lock
# 114 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	faceplayer
# 115 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jakub_Home_SiennaConvo_2
# 120 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0
# 121 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_SiennaConvo_Text_2
Indoor_Maasje_Jakub_Home_SiennaConvo_1:
# 123 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	return

Indoor_Maasje_Jakub_Home_SiennaConvo_2:
# 116 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0
# 117 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_SiennaConvo_Text_1
	goto Indoor_Maasje_Jakub_Home_SiennaConvo_1


Indoor_Maasje_Jacob_Home_Sienna1::
# 127 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	lock
# 128 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	faceplayer
# 129 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	playse SE_PIN
# 130 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 4, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0
# 131 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 132 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jacob_Home_Sienna1_3
Indoor_Maasje_Jacob_Home_Sienna1_1:
# 159 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jacob_Home_Sienna1_7
	return

Indoor_Maasje_Jacob_Home_Sienna1_2:
# 133 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0
# 134 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jacob_Home_Sienna1_Text_0, MSGBOX_AUTOCLOSE
# 135 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 136 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement LOCALID_PLAYER, Indoor_Maasje_Jacob_Home_Sienna1_Movement_0
# 137 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 4, Indoor_Maasje_Jacob_Home_Sienna1_Movement_1
# 138 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 139 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 120
# 140 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 4, Indoor_Maasje_Jacob_Home_Sienna1_Movement_2
# 141 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement LOCALID_PLAYER, Indoor_Maasje_Jacob_Home_Sienna1_Movement_3
# 142 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 143 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0
# 144 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jacob_Home_Sienna1_Text_1, MSGBOX_AUTOCLOSE
# 145 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 146 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 4, Indoor_Maasje_Jacob_Home_Sienna1_Movement_3
# 147 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 148 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 1, Indoor_Maasje_Jacob_Home_Sienna1_Movement_4
# 149 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jacob_Home_Sienna1_Text_2
# 150 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jacob_Home_Sienna1_Text_3, MSGBOX_AUTOCLOSE
# 151 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 152 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 1, Indoor_Maasje_Jacob_Home_Sienna1_Movement_5
# 153 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 4, Indoor_Maasje_Jacob_Home_Sienna1_Movement_6
# 154 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 155 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setflag FLAG_JAKUB_CONVO
# 156 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	end

Indoor_Maasje_Jacob_Home_Sienna1_3:
# 132 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_JAKUB_CONVO, Indoor_Maasje_Jacob_Home_Sienna1_2
	goto Indoor_Maasje_Jacob_Home_Sienna1_1

Indoor_Maasje_Jacob_Home_Sienna1_6:
# 160 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0
# 161 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jacob_Home_Sienna1_Text_4, MSGBOX_AUTOCLOSE
# 162 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 163 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 4, Indoor_Maasje_Jacob_Home_Sienna1_Movement_3
# 164 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 165 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	end

Indoor_Maasje_Jacob_Home_Sienna1_7:
# 159 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_JAKUB_CONVO, Indoor_Maasje_Jacob_Home_Sienna1_6
	return


Indoor_Maasje_Jakub_Home_GeorgeConvo::
# 172 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	lock
# 173 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	faceplayer
# 174 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jakub_Home_GeorgeConvo_2
# 179 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jacob_Home_Sienna1_Text_2
# 180 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_1
Indoor_Maasje_Jakub_Home_GeorgeConvo_1:
# 182 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	return

Indoor_Maasje_Jakub_Home_GeorgeConvo_2:
# 175 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jacob_Home_Sienna1_Text_2
# 176 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_0
	goto Indoor_Maasje_Jakub_Home_GeorgeConvo_1


# 40 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0:
# 40 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	emote_exclamation_mark
	step_end

# 46 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jakub_Home_JakubConvo_Movement_1:
# 46 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 46 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 46 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 46 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 46 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 46 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 46 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 46 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 46 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 46 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 46 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 46 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
	step_end

# 61 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jakub_Home_JakubConvo_Movement_2:
# 61 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 61 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 61 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 61 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 61 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 61 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 61 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 61 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 61 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 61 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 61 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 61 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
	step_end

# 72 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jakub_Home_JakubConvo_Movement_3:
# 72 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 72 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 72 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 72 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 72 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 72 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 72 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 72 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 72 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 72 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
	step_end

# 87 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jakub_Home_JakubConvo_Movement_4:
# 87 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 87 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 87 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 87 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 87 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 87 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 87 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 87 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 87 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 87 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
	step_end

# 136 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_0:
# 136 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	jump_right
# 136 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	face_down
	step_end

# 137 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_1:
# 137 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_right
# 137 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_up
# 137 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_right
# 137 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_right
# 137 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_down
	step_end

# 140 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_2:
# 140 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_up
# 140 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_left
# 140 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_left
# 140 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_down
# 140 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	face_right
	step_end

# 141 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_3:
# 141 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	face_left
	step_end

# 148 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_4:
# 148 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	face_right
	step_end

# 152 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_5:
# 152 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	face_down
	step_end

# 153 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_6:
# 153 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
	step_end

Indoor_Maasje_Jakub_Home_JakubConvo_Text_0:
# 7 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Jacob$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_1:
# 8 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Hi there, my name is {COLOR GREEN}Jacob{COLOR DARK_GRAY}. Welcome to\n"
	.string "our home!\p"
	.string "...Professor Birds sent you?\p"
	.string "To catch rare species of Pokémon?\p"
	.string "And I can help you with that???\p"
	.string "That old fool...\p"
	.string "I don't have the time to help you with\n"
	.string "that, I'm afraid.\p"
	.string "I'm the one who needs help right now...\p"
	.string "You see this whole mess? The entire\n"
	.string "town is overrun.\p"
	.string "And these aren't normal Krabby. They're\n"
	.string "agitated, aggressive... lost.\p"
	.string "This all started when that new gym\n"
	.string "leader, Pete Longfellow, showed up.\p"
	.string "Rumor has it that he is part of a secret\n"
	.string "group called The Faculty.\p"
	.string "Apparently, this group is obsessed\n"
	.string "with... 'structure'. They talk about\l"
	.string "'potential' and 'discipline', but\l"
	.string "something about them feels wrong.\p"
	.string "They look at Pokémon not as partners,\n"
	.string "but as things to be optimized, like\l"
	.string "numbers in an equation.\p"
	.string "The thing is... Krabby is my favorite\n"
	.string "Pokémon!\p"
	.string "I've spent my whole life here watching\n"
	.string "them, and I've never seen anything like\l"
	.string "this.\p"
	.string "It feels so... wrong.\p"
	.string "It's like the soul of the town is sick.\p"
	.string "I've heard strange humming sounds\n"
	.string "coming from Crabhill, just north-west\l"
	.string "of here.\p"
	.string "Rumor has it there's a unique Krabby\n"
	.string "deep in the caves there, the alpha of\l"
	.string "the whole colony.\p"
	.string "If The Faculty is involved, I'm sure\n"
	.string "they're targeting the leader to cause\l"
	.string "all this chaos.\p"
	.string "I don't know what their grand plan is,\n"
	.string "but this feels like the first step.\p"
	.string "Please, can you go to Krabby Hill and\n"
	.string "investigate? Find that alpha Krabby\l"
	.string "and see what's happening to it.\p"
	.string "Whatever they're doing, you need to be\n"
	.string "the one to stop it.\p"
	.string "Freeing their leader is the only way to\n"
	.string "calm the colony. You'd be helping me a\l"
	.string "lot... and you'd be helping them.$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_2:
# 16 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Please help me and my family, little\n"
	.string "George can't play outside right now. He\l"
	.string "has been gaming on his GameBoy all day.$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_3:
# 22 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "... WHAT??\p"
	.string "You saw the alpha Krabby, and it was a\n"
	.string "SHINY KRABBY??\p"
	.string "You helped the other Krabby's snap out\n"
	.string "of their confusion?\p"
	.string "Thank you so much!!\p"
	.string "We, in Mestreech, owe you so much!\p"
	.string "Now my son George can go outside and\n"
	.string "play again!\p"
	.string "Here, take this, as a gift of gratitude:$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_4:
# 28 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "I think this is a fossil of an ancient\n"
	.string "pokemon.\p"
	.string "I found it while exploring our coastal\n"
	.string "caves looking for Krabby's.\p"
	.string "I'm not sure what to do with it though,\n"
	.string "but maybe my friend Daan can help you\l"
	.string "with that.\p"
	.string "He lives deep in the cloud forest, in\n"
	.string "Mist City.\p"
	.string "I heard he is running a research center\n"
	.string "that is looking into the diversity of\l"
	.string "Pokemon and their origins.\p"
	.string "He also gives guided tours through\n"
	.string "parts of the ancient forest.\p"
	.string "He can be quite passionate about\n"
	.string "protecting the forest, so don't drop\l"
	.string "any litter!\p"
	.string "Recently, a path has been created\n"
	.string "north of this town towards Mist City.\p"
	.string "It used to take days to reach the deep\n"
	.string "parts of the Cloud Forest.\p"
	.string "If you want to take the path, you\n"
	.string "should show the park rangers a gym\l"
	.string "badge, otherwise the forest might be\l"
	.string "too dangerous.\p"
	.string "I think you might have it in you to\n"
	.string "defeat that guy called Pete Longfellow,\l"
	.string "the new gym leader.\p"
	.string "WHAT???!!\p"
	.string "You already beat him?\p"
	.string "Wow.....$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_5:
# 33 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "I think this is a fossil of an ancient\n"
	.string "pokemon.\p"
	.string "I found it while exploring our coastal\n"
	.string "caves looking for Krabby's.\p"
	.string "I'm not sure what to do with it though,\n"
	.string "but maybe my friend Daan can help you\l"
	.string "with that.\p"
	.string "He lives deep in the cloud forest, in\n"
	.string "Mist City.\p"
	.string "I heard he is running a research center\n"
	.string "that is looking into the diversity of\l"
	.string "Pokemon and their origins.\p"
	.string "He also gives guided tours through\n"
	.string "parts of the ancient forest.\p"
	.string "He can be quite passionate about\n"
	.string "protecting the forest, so don't drop\l"
	.string "any litter!\p"
	.string "Recently, a path has been created\n"
	.string "north of this town towards Mist City.\p"
	.string "It used to take days to reach the deep\n"
	.string "parts of the Cloud Forest.\p"
	.string "If you want to take the path, you\n"
	.string "should show the park rangers a gym\l"
	.string "badge, otherwise the forest might be\l"
	.string "too dangerous.\p"
	.string "I think you might have it in you to\n"
	.string "defeat that guy called Pete Longfellow,\l"
	.string "the new gym leader.\p"
	.string "The gym is up the hill.$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_6:
# 44 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "GEORGEEE, COME HERE, GET OUTSIDE!!$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_7:
# 50 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "PUT THAT GAMEBOY DOWN...$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_8:
# 54 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "NO I DID NOT DO THAT WHEN I WAS\n"
	.string "YOUNG!....$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_9:
# 58 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "ARGHH NEVERMIND....$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_10:
# 93 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Allright well say Hi to Daan for me!$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_11:
# 98 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Good luck at the gym!$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_12:
# 107 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Thanks for everything you did!\p"
	.string "George is happily playing outsi... on his\n"
	.string "gameboy again!\p"
	.string "When you get to Mist City, say hi to my\n"
	.string "old friend Daan.$"

Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0:
# 116 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Sienna$"

Indoor_Maasje_Jakub_Home_SiennaConvo_Text_1:
# 117 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Please help my husband, he has not been\n"
	.string "the same since these weird Krabby's\l"
	.string "have been showing up. He hates to see\l"
	.string "his favorite pokemon being seen as a\l"
	.string "nuisance.$"

Indoor_Maasje_Jakub_Home_SiennaConvo_Text_2:
# 121 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Thanks for helping my husband!\p"
	.string "He has been more relaxt since the\n"
	.string "Krabby's have been acting normal again.$"

Indoor_Maasje_Jacob_Home_Sienna1_Text_0:
# 134 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "EEEEK! Stay back!\p"
	.string "...Oh, thank goodness, you're human!\p"
	.string "Be queit, before they hear us!$"

Indoor_Maasje_Jacob_Home_Sienna1_Text_1:
# 144 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "I don't think they noticed...\p"
	.string "It's a nightmare!\n"
	.string "The whole town has been overrun!\p"
	.string "The Krabby... they're usually such\n"
	.string "peaceful creatures, scuttling along\l"
	.string "the sand.\p"
	.string "But this morning, they just... snapped!\p"
	.string "They're swarming the streets, pinching\n"
	.string "everything in sight!\p"
	.string "Wait...\p"
	.string "...you must be the intern Professor\n"
	.string "Birds sent over.\p"
	.string "Jacob mentioned you were coming today,\n"
	.string "he got a call from his old friend Prof.\l"
	.string "Birds.\p"
	.string "He was so excited to take you out to\n"
	.string "catch that rare specimen he found...\p"
	.string "But he isn't here!\p"
	.string "When the invasion started, he couldn't\n"
	.string "just sit by.\p"
	.string "Krabby are his absolute favorite\n"
	.string "Pokémon, you see?\p"
	.string "It breaks his heart to see them acting\n"
	.string "so aggressive and confused.\p"
	.string "He was convinced something on their\n"
	.string "breeding grounds must be disturbing\l"
	.string "them.\p"
	.string "He grabbed his old fishing gear and ran\n"
	.string "off toward Crabhill hours ago... but he\l"
	.string "hasn't come back!\p"
	.string "Please, you have to find him!\p"
	.string "Crabhill is the rocky hill to the\n"
	.string "northeast; you can cross the sandbar\l"
	.string "while the tide is still low.\p"
	.string "I have to stay here and protect my\n"
	.string "poor, terrified George!$"

Indoor_Maasje_Jacob_Home_Sienna1_Text_2:
# 149 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "George$"

Indoor_Maasje_Jacob_Home_Sienna1_Text_3:
# 150 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Mom, seriously, keep it down.\p"
	.string "I'm on the last level and if I lose my\n"
	.string "last life because you're yelling about\l"
	.string "crabs, I'm gonna lose it.$"

Indoor_Maasje_Jacob_Home_Sienna1_Text_4:
# 161 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "JEZUS! Please stop jump scaring me.\p"
	.string "Please! Go to Crabhill and find Jacob!\p"
	.string "If anyone can figure out why the\n"
	.string "Krabby are going crazy, it's him...$"

Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_0:
# 176 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Dad says that I can't be on my GameBoy\n"
	.string "the entire time.\p"
	.string "I'm sure he did the same thing back in\n"
	.string "the day.$"

Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_1:
# 180 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Last night I saw my dad play on his own\n"
	.string "gameboy.\p"
	.string "I'm sure as hell not going outside.$"
