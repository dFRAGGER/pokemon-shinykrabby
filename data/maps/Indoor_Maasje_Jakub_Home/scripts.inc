Indoor_Maasje_Jakub_Home_MapScripts::
	.byte 0


Indoor_Maasje_Jakub_Home_JakubConvo::
# 4 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	lock
# 5 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	faceplayer
# 6 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_JAKUB_CONVO, Indoor_Maasje_Jakub_Home_JakubConvo_2
# 38 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, Indoor_Maasje_Jakub_Home_JakubConvo_5
# 45 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Indoor_Maasje_Jakub_Home_JakubConvo_12
Indoor_Maasje_Jakub_Home_JakubConvo_10:
# 53 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Indoor_Maasje_Jakub_Home_JakubConvo_17
Indoor_Maasje_Jakub_Home_JakubConvo_15:
# 59 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
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
	playse SE_PIN
# 16 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0
# 17 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 18 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 19 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_3, MSGBOX_AUTOCLOSE
# 20 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 21 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	playse SE_PIN
# 22 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement LOCALID_PLAYER, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_1
# 23 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 120
# 24 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_4, MSGBOX_AUTOCLOSE
# 25 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 26 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Indoor_Maasje_Jakub_Home_JakubConvo_8
Indoor_Maasje_Jakub_Home_JakubConvo_7:
# 35 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	end

Indoor_Maasje_Jakub_Home_JakubConvo_5:
# 39 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 40 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_6, MSGBOX_AUTOCLOSE
# 41 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 42 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	end

Indoor_Maasje_Jakub_Home_JakubConvo_8:
# 27 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	playse SE_PIN
# 28 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0
# 29 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 30 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setflag FLAG_JAKUB_CONVO_2
# 31 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 32 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_5, MSGBOX_AUTOCLOSE
# 33 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
	goto Indoor_Maasje_Jakub_Home_JakubConvo_7

Indoor_Maasje_Jakub_Home_JakubConvo_11:
# 46 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setflag FLAG_JAKUB_CONVO_2
# 47 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 48 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_7, MSGBOX_AUTOCLOSE
# 49 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 50 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	end

Indoor_Maasje_Jakub_Home_JakubConvo_12:
# 45 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_JAKUB_CONVO_2, Indoor_Maasje_Jakub_Home_JakubConvo_11
	goto Indoor_Maasje_Jakub_Home_JakubConvo_10

Indoor_Maasje_Jakub_Home_JakubConvo_16:
# 54 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 55 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_JakubConvo_Text_8, MSGBOX_AUTOCLOSE
# 56 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
	goto Indoor_Maasje_Jakub_Home_JakubConvo_15

Indoor_Maasje_Jakub_Home_JakubConvo_17:
# 53 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_JAKUB_CONVO_2, Indoor_Maasje_Jakub_Home_JakubConvo_16
	goto Indoor_Maasje_Jakub_Home_JakubConvo_15


Indoor_Maasje_JacobChecksonGeorge::
# 64 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 65 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Indoor_Maasje_JacobChecksonGeorge_4
Indoor_Maasje_JacobChecksonGeorge_3:
# 94 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	playse SE_PIN
# 95 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0
# 96 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 97 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 98 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 99 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_0, MSGBOX_AUTOCLOSE
# 100 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 101 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_JacobChecksonGeorge_Movement_2
# 102 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 103 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 104 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 105 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_1, MSGBOX_AUTOCLOSE
# 106 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 107 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 108 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 109 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_2, MSGBOX_AUTOCLOSE
# 110 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 111 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 112 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 113 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_3, MSGBOX_AUTOCLOSE
# 114 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 115 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 116 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_JacobChecksonGeorge_Movement_3
# 117 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 118 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	faceplayer
	return

	return

Indoor_Maasje_JacobChecksonGeorge_2:
# 66 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	playse SE_PIN
# 67 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0
# 68 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 69 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 70 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 71 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_0, MSGBOX_AUTOCLOSE
# 72 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 73 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_JacobChecksonGeorge_Movement_0
# 74 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 75 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 76 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 77 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_1, MSGBOX_AUTOCLOSE
# 78 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 79 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 80 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 81 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_2, MSGBOX_AUTOCLOSE
# 82 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 83 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 84 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_JakubConvo_Text_0
# 85 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_JacobChecksonGeorge_Text_3, MSGBOX_AUTOCLOSE
# 86 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 87 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 88 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 3, Indoor_Maasje_JacobChecksonGeorge_Movement_1
# 89 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 90 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	faceplayer
	return

Indoor_Maasje_JacobChecksonGeorge_4:
# 65 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq Indoor_Maasje_JacobChecksonGeorge_2
	goto Indoor_Maasje_JacobChecksonGeorge_3


Indoor_Maasje_Jakub_Home_SiennaConvo::
# 126 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	lock
# 127 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	faceplayer
# 128 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0
# 129 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_SiennaConvo_Text_1
# 130 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	return


Indoor_Maasje_Jacob_Home_Sienna1::
# 134 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	lock
# 135 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	hidefollower
# 136 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	faceplayer
# 137 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	playse SE_PIN
# 138 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 4, Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0
# 139 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 140 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jacob_Home_Sienna1_3
Indoor_Maasje_Jacob_Home_Sienna1_1:
# 168 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jacob_Home_Sienna1_7
	return

Indoor_Maasje_Jacob_Home_Sienna1_2:
# 141 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement LOCALID_PLAYER, Indoor_Maasje_Jacob_Home_Sienna1_Movement_0
# 142 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0
# 143 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jacob_Home_Sienna1_Text_0, MSGBOX_AUTOCLOSE
# 144 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 145 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement LOCALID_PLAYER, Indoor_Maasje_Jacob_Home_Sienna1_Movement_1
# 146 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 4, Indoor_Maasje_Jacob_Home_Sienna1_Movement_2
# 147 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 148 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 120
# 149 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 4, Indoor_Maasje_Jacob_Home_Sienna1_Movement_3
# 150 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement LOCALID_PLAYER, Indoor_Maasje_Jacob_Home_Sienna1_Movement_4
# 151 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 152 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0
# 153 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jacob_Home_Sienna1_Text_1, MSGBOX_AUTOCLOSE
# 154 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 155 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 4, Indoor_Maasje_Jacob_Home_Sienna1_Movement_4
# 156 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	delay 60
# 157 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 1, Indoor_Maasje_Jacob_Home_Sienna1_Movement_5
# 158 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jacob_Home_Sienna1_Text_2
# 159 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jacob_Home_Sienna1_Text_3, MSGBOX_AUTOCLOSE
# 160 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 161 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 1, Indoor_Maasje_Jacob_Home_Sienna1_Movement_1
# 162 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 4, Indoor_Maasje_Jacob_Home_Sienna1_Movement_6
# 163 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 164 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setflag FLAG_SIENNA_CONVO
# 165 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	end

Indoor_Maasje_Jacob_Home_Sienna1_3:
# 140 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_SIENNA_CONVO, Indoor_Maasje_Jacob_Home_Sienna1_2
	goto Indoor_Maasje_Jacob_Home_Sienna1_1

Indoor_Maasje_Jacob_Home_Sienna1_6:
# 169 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0
# 170 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jacob_Home_Sienna1_Text_4, MSGBOX_AUTOCLOSE
# 171 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmessage
# 172 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	applymovement 4, Indoor_Maasje_Jacob_Home_Sienna1_Movement_4
# 173 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	waitmovement
# 174 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 175 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	end

Indoor_Maasje_Jacob_Home_Sienna1_7:
# 168 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_set FLAG_SIENNA_CONVO, Indoor_Maasje_Jacob_Home_Sienna1_6
	return


Indoor_Maasje_Jakub_Home_GeorgeConvo::
# 182 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	lock
# 183 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	faceplayer
# 184 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Indoor_Maasje_Jakub_Home_GeorgeConvo_2
# 189 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jacob_Home_Sienna1_Text_2
# 190 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_1
Indoor_Maasje_Jakub_Home_GeorgeConvo_1:
# 192 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	release
	return

Indoor_Maasje_Jakub_Home_GeorgeConvo_2:
# 185 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	setspeaker Indoor_Maasje_Jacob_Home_Sienna1_Text_2
# 186 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	msgbox Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_0
	goto Indoor_Maasje_Jakub_Home_GeorgeConvo_1


# 16 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jakub_Home_JakubConvo_Movement_0:
# 16 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	emote_exclamation_mark
	step_end

# 22 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jakub_Home_JakubConvo_Movement_1:
# 22 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	emote_question_mark
	step_end

# 73 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_JacobChecksonGeorge_Movement_0:
# 73 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 73 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 73 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 73 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 73 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 73 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 73 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 73 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 73 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 73 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 73 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 73 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
	step_end

# 88 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_JacobChecksonGeorge_Movement_1:
# 88 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 88 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 88 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 88 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 88 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 88 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 88 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 88 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 88 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 88 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 88 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 88 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
	step_end

# 101 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_JacobChecksonGeorge_Movement_2:
# 101 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 101 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 101 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 101 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_down
# 101 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 101 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 101 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 101 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 101 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
# 101 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_right
	step_end

# 116 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_JacobChecksonGeorge_Movement_3:
# 116 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 116 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 116 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 116 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 116 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 116 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
# 116 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 116 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 116 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
# 116 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_up
	step_end

# 141 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_0:
# 141 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	jump_right
# 141 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	face_left
	step_end

# 145 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_1:
# 145 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	face_down
	step_end

# 146 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_2:
# 146 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_right
# 146 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_up
# 146 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_right
# 146 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_right
# 146 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_down
	step_end

# 149 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_3:
# 149 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_up
# 149 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_left
# 149 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_left
# 149 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_fast_down
# 149 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	face_right
	step_end

# 150 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_4:
# 150 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	face_left
	step_end

# 157 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_5:
# 157 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	face_right
	step_end

# 162 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
Indoor_Maasje_Jacob_Home_Sienna1_Movement_6:
# 162 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	walk_left
	step_end

Indoor_Maasje_Jakub_Home_JakubConvo_Text_0:
# 8 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "JACOB$"

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
	.string "I found it on the way out of Crabhill.\p"
	.string "It must have been dropped by that\n"
	.string "strange man when he fled the scene.\p"
	.string "It is fried, but it proves he was up to\n"
	.string "something nasty.\p"
	.string "I've heard rumors about a group called\n"
	.string "The Faculty.\p"
	.string "They talk about 'optimizing nature,' but\n"
	.string "this looked like some form of mind\l"
	.string "control.\p"
	.string "Apparently they all wear a sleek, brown\n"
	.string "uniform.\p"
	.string "...$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_3:
# 19 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "You got send by PROF. BIRDS?\p"
	.string "...\p"
	.string "To scan the Shiny Krabby? The Golden\n"
	.string "King?\p"
	.string "That is... not totally unexpected...\p"
	.string "...\p"
	.string "So you are his newest intern... the\n"
	.string "596th in 3 years...\p"
	.string "If I were you I would NOT go back to\n"
	.string "PROF. BIRDS yet!\p"
	.string "If he finds out you saw the Golden\n"
	.string "Krabby, the Michelangelo of\l"
	.string "crustaceans, and didn't get a single\l"
	.string "sensor reading?\p"
	.string "He will be crushed!\p"
	.string "He might actually fire you again for\n"
	.string "'gross incompetence,' and crush you\l"
	.string "dream of becoming a great Pokemon\l"
	.string "Researcher.\p"
	.string "I would advise you to go to Mist City\n"
	.string "and find my friend DAAN.\p"
	.string "He is a bit... earthy. Loves nature. A bit\n"
	.string "of a tree hugger.\p"
	.string "But he is also a POKEMON RESEARCHER\n"
	.string "himself, and possibly can decode the\l"
	.string "readings of this device the moments\l"
	.string "before it got fried by the Shiny Krabby.\p"
	.string "Maybe that can help you in your search\n"
	.string "for this magnificant creature.\p"
	.string "Well, what do you say?\p"
	.string "Are you ready for an adventure?\p"
	.string "...$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_4:
# 24 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "...no?\p"
	.string "Hmmm... I get it... this is all a bit much\n"
	.string "for a first day as an intern.\p"
	.string "Maybe you could check out the local\n"
	.string "gym?\p"
	.string "That might be an opportunity to boost\n"
	.string "your confidence.\p"
	.string "The GYM LEADER is an old man, but don't\n"
	.string "underestimate him.\p"
	.string "I think a well trained crustacean can\n"
	.string "help you out there, no bias ofcourse...\p"
	.string "Good luck!$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_5:
# 32 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "...\p"
	.string "WHAT?!\p"
	.string "YOU ALREADY BEAT HIM?\p"
	.string "Let me be clear, {PLAYER}you might be\n"
	.string "the 596th intern of PROF. BIRDS, but I\l"
	.string "think you get what it takes to have\l"
	.string "PROF. BIRDS actually hire you with a\l"
	.string "salary.\p"
	.string "Mist City for interns like you is just\n"
	.string "around the corner!\p"
	.string "Just follow the path north until you\n"
	.string "see some big waterfalls.\p"
	.string "At the the top of the falls you will find\n"
	.string "Mist City shrouded in clouds and rain.\p"
	.string "I'll call ahead and make sure DAAN is\n"
	.string "aware of your arrival.\p"
	.string "If you leave now you'll be back to ERP\n"
	.string "TOWN before your mom even starts to\l"
	.string "worry!$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_6:
# 40 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "The gym is up the hill!\p"
	.string "Good luck with training!\p"
	.string "I think the cliffs along the coast are a\n"
	.string "good place to challenge yourself.$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_7:
# 48 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "...\p"
	.string "WHAT?!\p"
	.string "YOU ALREADY BEAT HIM?\p"
	.string "Let me be clear, {PLAYER}, you might\n"
	.string "be the 596th intern of PROF. BIRDS, but\l"
	.string "I think you get what it takes to have\l"
	.string "PROF. BIRDS actually hire you with a\l"
	.string "salary.\p"
	.string "Mist City for interns like you is just\n"
	.string "around the corner!\p"
	.string "Just follow the path north until you\n"
	.string "see some big waterfalls.\p"
	.string "At the the top of the falls you will find\n"
	.string "Mist City shrouded in clouds and rain.\p"
	.string "I'll call ahead and make sure DAAN is\n"
	.string "aware of your arrival.\p"
	.string "If you leave now you'll be back to ERP\n"
	.string "TOWN before your mom even starts to\l"
	.string "worry!$"

Indoor_Maasje_Jakub_Home_JakubConvo_Text_8:
# 55 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Thank you so much for everything.\p"
	.string "I still want to catch that Golden\n"
	.string "Krabby one time.\p"
	.string "I can't stop thinking about it...$"

Indoor_Maasje_JacobChecksonGeorge_Text_0:
# 71 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "GEORGEEE, COME HERE, GET OUTSIDE!!$"

Indoor_Maasje_JacobChecksonGeorge_Text_1:
# 77 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "PUT THAT GAMEBOY DOWN...$"

Indoor_Maasje_JacobChecksonGeorge_Text_2:
# 81 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "NO I DID NOT DO THAT WHEN I WAS\n"
	.string "YOUNG!....$"

Indoor_Maasje_JacobChecksonGeorge_Text_3:
# 85 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "ARGHH NEVERMIND....$"

Indoor_Maasje_Jakub_Home_SiennaConvo_Text_0:
# 128 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "SIENNA$"

Indoor_Maasje_Jakub_Home_SiennaConvo_Text_1:
# 129 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Thanks for helping my husband!\p"
	.string "He has been more at peace since the\n"
	.string "Krabby's have been acting normal again.$"

Indoor_Maasje_Jacob_Home_Sienna1_Text_0:
# 143 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "EEEEK! Stay back!\p"
	.string "...Oh, thank goodness, you're human!\p"
	.string "Be queit, before they hear us!$"

Indoor_Maasje_Jacob_Home_Sienna1_Text_1:
# 153 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
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
	.string "...you are looking for my husband aren't\n"
	.string "you...\p"
	.string "Well join the club!\p"
	.string "When the invasion started, he couldn't\n"
	.string "just sit by.\p"
	.string "Krabby are his absolute favorite\n"
	.string "Pokémon, you see?\p"
	.string "It breaks his heart to see them acting\n"
	.string "so aggressive\p"
	.string "and wrong...\p"
	.string "He was convinced something on their\n"
	.string "breeding grounds must be disturbing\l"
	.string "them.\p"
	.string "He grabbed his old fishing gear and ran\n"
	.string "off toward Crabhill hours ago... but he\l"
	.string "didn't even ask permission!\p"
	.string "Please, you have to find him!\p"
	.string "Crabhill is the rocky hill to the west;\n"
	.string "you can cross the sandbar while the\l"
	.string "tide is still low.\p"
	.string "I have to stay here and protect my\n"
	.string "poor, terrified George!$"

Indoor_Maasje_Jacob_Home_Sienna1_Text_2:
# 158 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "GEORGE$"

Indoor_Maasje_Jacob_Home_Sienna1_Text_3:
# 159 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Mom, seriously, keep it down.\p"
	.string "I'm on the last level and if I lose my\n"
	.string "last life because you're yelling about\l"
	.string "crabs, I'm gonna lose it.$"

Indoor_Maasje_Jacob_Home_Sienna1_Text_4:
# 170 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "JEZUS! Please stop jump scaring me.\p"
	.string "Please! Go to Crabhill and find JACOB!\p"
	.string "If anyone can figure out why the\n"
	.string "Krabby are going crazy, it's him...$"

Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_0:
# 186 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Dad says that I can't be on my GameBoy\n"
	.string "the entire time.\p"
	.string "I'm sure he did the same thing back in\n"
	.string "the day.$"

Indoor_Maasje_Jakub_Home_GeorgeConvo_Text_1:
# 190 "data/maps/Indoor_Maasje_Jakub_Home/scripts.pory"
	.string "Last night I saw my dad play on his own\n"
	.string "gameboy.\p"
	.string "I'm sure as hell not going outside.$"
