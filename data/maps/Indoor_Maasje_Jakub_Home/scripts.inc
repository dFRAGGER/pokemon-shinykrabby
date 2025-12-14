Indoor_Maasje_Jakub_Home_MapScripts::
	.byte 0


Indoor_Maasje_Jakub_Home_JakubConvo::
# 4 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	lock
# 5 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	faceplayer
# 6 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_JAKUB_CONVO, Indoor_Maasje_Jakub_Home_JakubConvo_2
# 34 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_JAKUB_CONVO, Indoor_Maasje_Jakub_Home_JakubConvo_3
Indoor_Maasje_Jakub_Home_JakubConvo_1:
# 56 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	end

Indoor_Maasje_Jakub_Home_JakubConvo_2:
# 7 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setflag FLAG_JAKUB_CONVO
# 8 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 9 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_1
# 10 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker NULL
# 11 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	giveitem ITEM_SCANNER
# 12 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 13 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_2
# 14 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 15 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_HIDE_PETELONGFELLOW, Indoor_Maasje_Jakub_Home_JakubConvo_6
# 27 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_HIDE_PETELONGFELLOW, Indoor_Maasje_Jakub_Home_JakubConvo_7
	goto Indoor_Maasje_Jakub_Home_JakubConvo_1

Indoor_Maasje_Jakub_Home_JakubConvo_3:
# 35 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_HIDE_PETELONGFELLOW, Indoor_Maasje_Jakub_Home_JakubConvo_19
Indoor_Maasje_Jakub_Home_JakubConvo_17:
# 45 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_HIDE_PETELONGFELLOW, Indoor_Maasje_Jakub_Home_JakubConvo_16
Indoor_Maasje_Jakub_Home_JakubConvo_14:
# 50 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_HIDE_PETELONGFELLOW, Indoor_Maasje_Jakub_Home_JakubConvo_13
	goto Indoor_Maasje_Jakub_Home_JakubConvo_1

Indoor_Maasje_Jakub_Home_JakubConvo_6:
# 16 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setflag FLAG_JAKUB_CONVO_2
# 17 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 18 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_3, MSGBOX_AUTOCLOSE
# 19 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 20 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	call Indoor_Maasje_JacobChecksonGeorge
# 21 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 22 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_4, MSGBOX_AUTOCLOSE
# 23 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 24 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	end

Indoor_Maasje_Jakub_Home_JakubConvo_7:
# 28 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 29 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_5, MSGBOX_AUTOCLOSE
# 30 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 31 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	end

Indoor_Maasje_Jakub_Home_JakubConvo_10:
# 36 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setflag FLAG_JAKUB_CONVO_2
# 37 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 38 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_6, MSGBOX_AUTOCLOSE
# 39 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 40 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	call Indoor_Maasje_JacobChecksonGeorge
# 41 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 42 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_4, MSGBOX_AUTOCLOSE
# 43 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
	goto Indoor_Maasje_Jakub_Home_JakubConvo_1

Indoor_Maasje_Jakub_Home_JakubConvo_11:
# 46 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 47 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_7, MSGBOX_AUTOCLOSE
# 48 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
	goto Indoor_Maasje_Jakub_Home_JakubConvo_1

Indoor_Maasje_Jakub_Home_JakubConvo_12:
# 51 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 52 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_8, MSGBOX_AUTOCLOSE
# 53 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
	goto Indoor_Maasje_Jakub_Home_JakubConvo_1

Indoor_Maasje_Jakub_Home_JakubConvo_13:
# 50 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_JAKUB_CONVO_2, Indoor_Maasje_Jakub_Home_JakubConvo_12
	goto Indoor_Maasje_Jakub_Home_JakubConvo_1

Indoor_Maasje_Jakub_Home_JakubConvo_16:
# 45 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_JAKUB_CONVO_2, Indoor_Maasje_Jakub_Home_JakubConvo_11
	goto Indoor_Maasje_Jakub_Home_JakubConvo_14

Indoor_Maasje_Jakub_Home_JakubConvo_19:
# 35 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_JAKUB_CONVO_2, Indoor_Maasje_Jakub_Home_JakubConvo_10
	goto Indoor_Maasje_Jakub_Home_JakubConvo_17


Indoor_Maasje_JacobChecksonGeorge::
# 61 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 62 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Indoor_Maasje_JacobChecksonGeorge_4
Indoor_Maasje_JacobChecksonGeorge_3:
# 91 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	playse SE_PIN
# 92 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_JacobChecksonGeorge_Movement_0
# 93 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 94 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 95 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 96 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_0, MSGBOX_AUTOCLOSE
# 97 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 98 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_JacobChecksonGeorge_Movement_3
# 99 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 100 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 101 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 102 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_1, MSGBOX_AUTOCLOSE
# 103 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 104 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 105 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 106 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_2, MSGBOX_AUTOCLOSE
# 107 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 108 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 109 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 110 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_3, MSGBOX_AUTOCLOSE
# 111 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 112 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 113 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_JacobChecksonGeorge_Movement_4
# 114 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 115 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	faceplayer
	return

	return

Indoor_Maasje_JacobChecksonGeorge_2:
# 63 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	playse SE_PIN
# 64 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_JacobChecksonGeorge_Movement_0
# 65 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 66 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 67 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 68 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_0, MSGBOX_AUTOCLOSE
# 69 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_JacobChecksonGeorge_Movement_1
# 71 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 72 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 73 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 74 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_1, MSGBOX_AUTOCLOSE
# 75 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 76 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 77 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 78 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_2, MSGBOX_AUTOCLOSE
# 79 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 80 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 81 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 82 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_3, MSGBOX_AUTOCLOSE
# 83 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 84 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 85 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_JacobChecksonGeorge_Movement_2
# 86 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 87 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	faceplayer
	return

Indoor_Maasje_JacobChecksonGeorge_4:
# 62 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq Indoor_Maasje_JacobChecksonGeorge_2
	goto Indoor_Maasje_JacobChecksonGeorge_3


Indoor_Maasje_Jakub_Home_SiennaConvo::
# 123 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	lock
# 124 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	faceplayer
# 125 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0
# 126 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_SiennaConvo_Text_1
# 127 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	return


Indoor_Maasje_Jacob_Home_Sienna1::
# 131 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	lock
# 132 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	faceplayer
# 133 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	playse SE_PIN
# 134 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 4, Indoor_Maasje_JacobChecksonGeorge_Movement_0
# 135 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 136 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jacob_Home_Sienna1_3
Indoor_Maasje_Jacob_Home_Sienna1_1:
# 163 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jacob_Home_Sienna1_7
	return

Indoor_Maasje_Jacob_Home_Sienna1_2:
# 137 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0
# 138 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jacob_Home_Sienna1_Text_0, MSGBOX_AUTOCLOSE
# 139 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 140 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement LOCALID_PLAYER, Indoor_Maasje_Jacob_Home_Sienna1_Movement_0
# 141 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 4, Indoor_Maasje_Jacob_Home_Sienna1_Movement_1
# 142 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 143 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 120
# 144 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 4, Indoor_Maasje_Jacob_Home_Sienna1_Movement_2
# 145 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement LOCALID_PLAYER, Indoor_Maasje_Jacob_Home_Sienna1_Movement_3
# 146 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 147 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0
# 148 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jacob_Home_Sienna1_Text_1, MSGBOX_AUTOCLOSE
# 149 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 150 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 4, Indoor_Maasje_Jacob_Home_Sienna1_Movement_3
# 151 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 152 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 1, Indoor_Maasje_Jacob_Home_Sienna1_Movement_4
# 153 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jacob_Home_Sienna1_Text_2
# 154 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jacob_Home_Sienna1_Text_3, MSGBOX_AUTOCLOSE
# 155 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 156 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 1, Indoor_Maasje_Jacob_Home_Sienna1_Movement_5
# 157 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 4, Indoor_Maasje_Jacob_Home_Sienna1_Movement_6
# 158 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 159 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setflag FLAG_SIENNA_CONVO
# 160 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	end

Indoor_Maasje_Jacob_Home_Sienna1_3:
# 136 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_SIENNA_CONVO, Indoor_Maasje_Jacob_Home_Sienna1_2
	goto Indoor_Maasje_Jacob_Home_Sienna1_1

Indoor_Maasje_Jacob_Home_Sienna1_6:
# 164 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0
# 165 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jacob_Home_Sienna1_Text_4, MSGBOX_AUTOCLOSE
# 166 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 167 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 4, Indoor_Maasje_Jacob_Home_Sienna1_Movement_3
# 168 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 169 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	end

Indoor_Maasje_Jacob_Home_Sienna1_7:
# 163 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_SIENNA_CONVO, Indoor_Maasje_Jacob_Home_Sienna1_6
	return


Indoor_Maasje_Jakub_Home_GeorgeConvo::
# 176 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	lock
# 177 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	faceplayer
# 178 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jakub_Home_GeorgeConvo_2
# 183 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jacob_Home_Sienna1_Text_2
# 184 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_1
Indoor_Maasje_Jakub_Home_GeorgeConvo_1:
# 186 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	return

Indoor_Maasje_Jakub_Home_GeorgeConvo_2:
# 179 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jacob_Home_Sienna1_Text_2
# 180 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_0
	goto Indoor_Maasje_Jakub_Home_GeorgeConvo_1


# 64 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_JacobChecksonGeorge_Movement_0:
# 64 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	emote_exclamation_mark
	step_end

# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_JacobChecksonGeorge_Movement_1:
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
	step_end

# 85 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_JacobChecksonGeorge_Movement_2:
# 85 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 85 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 85 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 85 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 85 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 85 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 85 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 85 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 85 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 85 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 85 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 85 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
	step_end

# 98 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_JacobChecksonGeorge_Movement_3:
# 98 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 98 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 98 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 98 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 98 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 98 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 98 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 98 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 98 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 98 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
	step_end

# 113 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_JacobChecksonGeorge_Movement_4:
# 113 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 113 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 113 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 113 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 113 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 113 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 113 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 113 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 113 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 113 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
	step_end

# 140 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_0:
# 140 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	jump_right
# 140 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	face_down
	step_end

# 141 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_1:
# 141 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_right
# 141 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_up
# 141 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_right
# 141 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_right
# 141 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_down
	step_end

# 144 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_2:
# 144 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_up
# 144 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_left
# 144 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_left
# 144 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_down
# 144 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	face_right
	step_end

# 145 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_3:
# 145 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	face_left
	step_end

# 152 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_4:
# 152 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	face_right
	step_end

# 156 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_5:
# 156 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	face_down
	step_end

# 157 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_6:
# 157 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
	step_end

Indoor_Maasje_Jakub_Home_JakubConvo_Text_0:
# 8 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Jacob$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_1:
# 9 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Ah!\n"
	.string "You made it!\p"
	.string "As you can see, the crisis has been\n"
	.string "averted.\p"
	.string "The Krabby are back to their peaceful,\n"
	.string "sand-scuttling selves.\p"
	.string "My wife has...\p"
	.string "...mostly forgiven me.\p"
	.string "Here, take a look at this:$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_2:
# 13 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "I found it in the cave where the Shiny\n"
	.string "Krabby was dancing.\p"
	.string "Just when I entered the cave I saw\n"
	.string "someone zipping by.\p"
	.string "A person in a sleek, brown uniform.\p"
	.string "I think they dropped this and vanished\n"
	.string "towards the exit.\p"
	.string "After that the trance started...\p"
	.string "I've heard rumors about a group called\n"
	.string "The Faculty.\p"
	.string "They talk about 'optimizing nature,' but\n"
	.string "this was mind control.\p"
	.string "And it can't be a coincidence that the\n"
	.string "Gym was recently taken over by a new\l"
	.string "Leader who wears that same uniform.\p"
	.string "His name is Pete Longfellow.\p"
	.string "He beat the old leader and started\n"
	.string "'restructuring' everything.\p"
	.string "A few days later, the Krabby go crazy.\n"
	.string "You need to challenge him.\p"
	.string "He has to be the instigator of all this\n"
	.string "mess, I'm sure of it!\p"
	.string "Once you've done that, take this device\n"
	.string "to Mist City.\p"
	.string "My old friend Daan runs the Research\n"
	.string "Center there.\p"
	.string "He can analyze this tech, we need to\n"
	.string "get to the bottom of this.\p"
	.string "Plus, if you really want to impress\n"
	.string "Professor Birds, Mist City is the place.\p"
	.string "The Cloud Forest is full of rare\n"
	.string "Pokémon.\p"
	.string "Bringing back data on those and solving\n"
	.string "this mystery?\p"
	.string "That's how you show you are more than\n"
	.string "an intern!\p"
	.string "But first... deal with the Gym.$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_3:
# 18 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "...\p"
	.string "WHAT?!\p"
	.string "YOU ALREADY BEAT HIM?\p"
	.string "Jeezzz thank you so much!\p"
	.string "Time for George to go outside and play\n"
	.string "again!$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_4:
# 22 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Anyways...\p"
	.string "George is happily playing outsi... on his\n"
	.string "gameboy again!\p"
	.string "Safe travels and say Hi to Daan for me!$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_5:
# 29 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Good luck with training!\p"
	.string "I think the cliffs along the coast are a\n"
	.string "good place to challenge yourself.$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_6:
# 38 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "...\p"
	.string "WHAT?!\p"
	.string "YOU BEAT HIM?\p"
	.string "Jeezzz thank you so much!\p"
	.string "Time for George to go outside and play\n"
	.string "again!$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_7:
# 47 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "The gym is up the hill!\p"
	.string "Good luck with training!\p"
	.string "I think the cliffs along the coast are a\n"
	.string "good place to challenge yourself.$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_8:
# 52 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Thank you so much for everything.\p"
	.string "I still want to catch that golden\n"
	.string "Krabby one time.\p"
	.string "I can't stop thinking about it...$"

Indoor_Maasje_JacobChecksonGeorge_Text_0:
# 68 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "GEORGEEE, COME HERE, GET OUTSIDE!!$"

Indoor_Maasje_JacobChecksonGeorge_Text_1:
# 74 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "PUT THAT GAMEBOY DOWN...$"

Indoor_Maasje_JacobChecksonGeorge_Text_2:
# 78 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "NO I DID NOT DO THAT WHEN I WAS\n"
	.string "YOUNG!....$"

Indoor_Maasje_JacobChecksonGeorge_Text_3:
# 82 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "ARGHH NEVERMIND....$"

Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0:
# 125 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Sienna$"

Indoor_Maasje_Jakub_Home_SiennaConvo_Text_1:
# 126 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Thanks for helping my husband!\p"
	.string "He has been more relaxt since the\n"
	.string "Krabby's have been acting normal again.$"

Indoor_Maasje_Jacob_Home_Sienna1_Text_0:
# 138 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "EEEEK! Stay back!\p"
	.string "...Oh, thank goodness, you're human!\p"
	.string "Be queit, before they hear us!$"

Indoor_Maasje_Jacob_Home_Sienna1_Text_1:
# 148 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
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
	.string "didn't even ask permission!\p"
	.string "Please, you have to find him!\p"
	.string "Crabhill is the rocky hill to the\n"
	.string "northeast; you can cross the sandbar\l"
	.string "while the tide is still low.\p"
	.string "I have to stay here and protect my\n"
	.string "poor, terrified George!$"

Indoor_Maasje_Jacob_Home_Sienna1_Text_2:
# 153 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "George$"

Indoor_Maasje_Jacob_Home_Sienna1_Text_3:
# 154 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Mom, seriously, keep it down.\p"
	.string "I'm on the last level and if I lose my\n"
	.string "last life because you're yelling about\l"
	.string "crabs, I'm gonna lose it.$"

Indoor_Maasje_Jacob_Home_Sienna1_Text_4:
# 165 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "JEZUS! Please stop jump scaring me.\p"
	.string "Please! Go to Crabhill and find Jacob!\p"
	.string "If anyone can figure out why the\n"
	.string "Krabby are going crazy, it's him...$"

Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_0:
# 180 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Dad says that I can't be on my GameBoy\n"
	.string "the entire time.\p"
	.string "I'm sure he did the same thing back in\n"
	.string "the day.$"

Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_1:
# 184 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Last night I saw my dad play on his own\n"
	.string "gameboy.\p"
	.string "I'm sure as hell not going outside.$"
