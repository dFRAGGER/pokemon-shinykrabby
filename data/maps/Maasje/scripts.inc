Maasje_MapScripts::
# 2 "data/maps/Maasje/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Maasje_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Maasje_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Maasje/scripts.pory"
	call Maasje_On_Transition
	return


Maasje_On_Transition::
# 8 "data/maps/Maasje/scripts.pory"
	setflag FLAG_VISITED_MAASJE
# 9 "data/maps/Maasje/scripts.pory"
	clearflag FLAG_DISABLE_FOLLOWER_POKEMON
	return


Maasje_Sign_Welcome::
# 13 "data/maps/Maasje/scripts.pory"
	lock
# 14 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_Welcome_Text_0, MSGBOX_SIGN
# 15 "data/maps/Maasje/scripts.pory"
	waitmessage
# 16 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Sign_Jakub_Home::
# 20 "data/maps/Maasje/scripts.pory"
	lock
# 21 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_Jakub_Home_Text_0
# 22 "data/maps/Maasje/scripts.pory"
	waitmessage
# 23 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Sign_Gym::
# 27 "data/maps/Maasje/scripts.pory"
	lock
# 28 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_Gym_Text_0
# 29 "data/maps/Maasje/scripts.pory"
	waitmessage
# 30 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Sign_Hill::
# 34 "data/maps/Maasje/scripts.pory"
	lock
# 35 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_Hill_Text_0
# 36 "data/maps/Maasje/scripts.pory"
	waitmessage
# 37 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Sign_Beekeeper::
# 41 "data/maps/Maasje/scripts.pory"
	lock
# 42 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_Beekeeper_Text_0
# 43 "data/maps/Maasje/scripts.pory"
	waitmessage
# 44 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Sign_CrabHill::
# 48 "data/maps/Maasje/scripts.pory"
	lock
# 49 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_CrabHill_Text_0
# 50 "data/maps/Maasje/scripts.pory"
	waitmessage
# 51 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Tree_Boy_Cut::
# 55 "data/maps/Maasje/scripts.pory"
	lock
# 56 "data/maps/Maasje/scripts.pory"
	faceplayer
# 57 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Tree_Boy_Cut_Text_0, MSGBOX_AUTOCLOSE
# 58 "data/maps/Maasje/scripts.pory"
	waitmessage
# 59 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Sign_NextRoute::
# 63 "data/maps/Maasje/scripts.pory"
	lock
# 64 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_NextRoute_Text_0
# 65 "data/maps/Maasje/scripts.pory"
	waitmessage
# 66 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Krabby_Cry::
# 70 "data/maps/Maasje/scripts.pory"
	playmoncry SPECIES_KRABBY, CRY_MODE_NORMAL
	return


Maasje_Collect_Honey_BeeHives::
# 74 "data/maps/Maasje/scripts.pory"
	lock
# 75 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Collect_Honey_BeeHives_Text_0
# 76 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Advice_Fisher_Crabhill::
# 80 "data/maps/Maasje/scripts.pory"
	lock
# 81 "data/maps/Maasje/scripts.pory"
	faceplayer
# 82 "data/maps/Maasje/scripts.pory"
	applymovement 60, Maasje_Advice_Fisher_Crabhill_Movement_0
# 83 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_RECEIVED_ESCAPE_ROPE, Maasje_Advice_Fisher_Crabhill_2
# 91 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Advice_Fisher_Crabhill_Text_2
# 92 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Advice_Fisher_Crabhill_1:
# 94 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Advice_Fisher_Crabhill_2:
# 84 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Advice_Fisher_Crabhill_Text_0
# 85 "data/maps/Maasje/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 86 "data/maps/Maasje/scripts.pory"
	setflag FLAG_RECEIVED_ESCAPE_ROPE
# 87 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Advice_Fisher_Crabhill_Text_1
# 88 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Advice_Fisher_Crabhill_1


Maasje_Flag_Follower_Prep::
# 98 "data/maps/Maasje/scripts.pory"
	setflag FLAG_DISABLE_FOLLOWER_POKEMON
	return


Maasje_Beehive_01::
# 102 "data/maps/Maasje/scripts.pory"
	lock
# 103 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_01_2
# 119 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 120 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_01_1:
# 122 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_01_2:
# 104 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_01, Maasje_Beehive_01_5
# 114 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 115 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_01_1

Maasje_Beehive_01_5:
# 105 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 106 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_01_8
	goto Maasje_Beehive_01_1

Maasje_Beehive_01_8:
# 107 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 108 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 109 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_01
# 110 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_01_1


Maasje_Beehive_02::
# 126 "data/maps/Maasje/scripts.pory"
	lock
# 127 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_02_2
# 143 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 144 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_02_1:
# 146 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_02_2:
# 128 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_02, Maasje_Beehive_02_5
# 138 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 139 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_02_1

Maasje_Beehive_02_5:
# 129 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 130 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_02_8
	goto Maasje_Beehive_02_1

Maasje_Beehive_02_8:
# 131 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 132 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 133 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_02
# 134 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_02_1


Maasje_Beehive_03::
# 150 "data/maps/Maasje/scripts.pory"
	lock
# 151 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_03_2
# 167 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 168 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_03_1:
# 170 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_03_2:
# 152 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_03, Maasje_Beehive_03_5
# 162 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 163 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_03_1

Maasje_Beehive_03_5:
# 153 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 154 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_03_8
	goto Maasje_Beehive_03_1

Maasje_Beehive_03_8:
# 155 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 156 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 157 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_03
# 158 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_03_1


Maasje_Beehive_04::
# 174 "data/maps/Maasje/scripts.pory"
	lock
# 175 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_04_2
# 191 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 192 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_04_1:
# 194 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_04_2:
# 176 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_04, Maasje_Beehive_04_5
# 186 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 187 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_04_1

Maasje_Beehive_04_5:
# 177 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 178 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_04_8
	goto Maasje_Beehive_04_1

Maasje_Beehive_04_8:
# 179 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 180 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 181 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_04
# 182 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_04_1


Maasje_Beehive_05::
# 198 "data/maps/Maasje/scripts.pory"
	lock
# 199 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_05_2
# 215 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 216 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_05_1:
# 218 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_05_2:
# 200 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_05, Maasje_Beehive_05_5
# 210 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 211 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_05_1

Maasje_Beehive_05_5:
# 201 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 202 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_05_8
	goto Maasje_Beehive_05_1

Maasje_Beehive_05_8:
# 203 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 204 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 205 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_05
# 206 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_05_1


Maasje_Beehive_06::
# 222 "data/maps/Maasje/scripts.pory"
	lock
# 223 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_06_2
# 245 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 246 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_06_1:
# 248 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_06_2:
# 224 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_06, Maasje_Beehive_06_5
# 240 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 241 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_06_1

Maasje_Beehive_06_5:
# 225 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 226 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_06_8
	goto Maasje_Beehive_06_1

Maasje_Beehive_06_8:
# 227 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 228 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 229 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_06
# 230 "data/maps/Maasje/scripts.pory"
	waitmessage
# 231 "data/maps/Maasje/scripts.pory"
	playmoncry SPECIES_VOLBEAT, CRY_MODE_ENCOUNTER
# 232 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_06_Text_0
# 233 "data/maps/Maasje/scripts.pory"
	waitmessage
# 234 "data/maps/Maasje/scripts.pory"
	waitmoncry
# 235 "data/maps/Maasje/scripts.pory"
	createmon 1, 0, SPECIES_VOLBEAT, 8
# 236 "data/maps/Maasje/scripts.pory"
	dowildbattle
	goto Maasje_Beehive_06_1


Maasje_Beehive_07::
# 252 "data/maps/Maasje/scripts.pory"
	lock
# 253 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_07_2
# 269 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 270 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_07_1:
# 272 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_07_2:
# 254 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_07, Maasje_Beehive_07_5
# 264 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 265 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_07_1

Maasje_Beehive_07_5:
# 255 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 256 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_07_8
	goto Maasje_Beehive_07_1

Maasje_Beehive_07_8:
# 257 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 258 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 259 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_07
# 260 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_07_1


Maasje_Beehive_08::
# 276 "data/maps/Maasje/scripts.pory"
	lock
# 277 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_08_2
# 299 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 300 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_08_1:
# 302 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_08_2:
# 278 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_08, Maasje_Beehive_08_5
# 294 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 295 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_08_1

Maasje_Beehive_08_5:
# 279 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 280 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_08_8
	goto Maasje_Beehive_08_1

Maasje_Beehive_08_8:
# 281 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 282 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 283 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_08
# 284 "data/maps/Maasje/scripts.pory"
	waitmessage
# 285 "data/maps/Maasje/scripts.pory"
	playmoncry SPECIES_ILLUMISE, CRY_MODE_ENCOUNTER
# 286 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_06_Text_0
# 287 "data/maps/Maasje/scripts.pory"
	waitmessage
# 288 "data/maps/Maasje/scripts.pory"
	waitmoncry
# 289 "data/maps/Maasje/scripts.pory"
	createmon 1, 0, SPECIES_ILLUMISE, 8
# 290 "data/maps/Maasje/scripts.pory"
	dowildbattle
	goto Maasje_Beehive_08_1


Maasje_Joris_UpToTheWhiteLight::
# 306 "data/maps/Maasje/scripts.pory"
	lock
# 307 "data/maps/Maasje/scripts.pory"
	faceplayer
# 308 "data/maps/Maasje/scripts.pory"
	setflag FLAG_UP_TO_THE_WHITELIGHT_MAASJE
# 309 "data/maps/Maasje/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 310 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Joris_UpToTheWhiteLight_Text_0, MSGBOX_AUTOCLOSE
# 311 "data/maps/Maasje/scripts.pory"
	waitmessage
# 312 "data/maps/Maasje/scripts.pory"
	applymovement 2, Maasje_Joris_UpToTheWhiteLight_Movement_0
# 313 "data/maps/Maasje/scripts.pory"
	delay 40
# 314 "data/maps/Maasje/scripts.pory"
	setspeaker Maasje_Joris_UpToTheWhiteLight_Text_1
# 315 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Joris_UpToTheWhiteLight_Text_2, MSGBOX_AUTOCLOSE
# 316 "data/maps/Maasje/scripts.pory"
	waitmessage
# 317 "data/maps/Maasje/scripts.pory"
	applymovement LOCALID_PLAYER, Maasje_Joris_UpToTheWhiteLight_Movement_1
# 318 "data/maps/Maasje/scripts.pory"
	delay 40
# 319 "data/maps/Maasje/scripts.pory"
	compare VAR_TEMP_0, 49
	goto_if_eq Maasje_Joris_UpToTheWhiteLight_4
Maasje_Joris_UpToTheWhiteLight_3:
# 323 "data/maps/Maasje/scripts.pory"
	applymovement 2, Maasje_Joris_UpToTheWhiteLight_Movement_3
Maasje_Joris_UpToTheWhiteLight_1:
# 325 "data/maps/Maasje/scripts.pory"
	waitmovement
# 326 "data/maps/Maasje/scripts.pory"
	removeobject 2
# 327 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Joris_UpToTheWhiteLight_2:
# 320 "data/maps/Maasje/scripts.pory"
	applymovement 2, Maasje_Joris_UpToTheWhiteLight_Movement_2
	goto Maasje_Joris_UpToTheWhiteLight_1

Maasje_Joris_UpToTheWhiteLight_4:
# 319 "data/maps/Maasje/scripts.pory"
	compare VAR_TEMP_1, 34
	goto_if_eq Maasje_Joris_UpToTheWhiteLight_2
	goto Maasje_Joris_UpToTheWhiteLight_3


Maasje_Evenscript_Rick::
# 332 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 333 "data/maps/Maasje/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Evenscript_Allen::
# 338 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 339 "data/maps/Maasje/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Eventscript_Ivan::
# 344 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 345 "data/maps/Maasje/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Eventscript_Winston::
# 350 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat
# 351 "data/maps/Maasje/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 352 "data/maps/Maasje/scripts.pory"
	release
	end


Maasje_Eventscript_Maniac::
# 357 "data/maps/Maasje/scripts.pory"
	lock
# 358 "data/maps/Maasje/scripts.pory"
	faceplayer
# 359 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Maasje_Eventscript_Maniac_1
# 365 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Eventscript_Maniac_Text_1
# 366 "data/maps/Maasje/scripts.pory"
	release
	end

Maasje_Eventscript_Maniac_1:
# 360 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Eventscript_Maniac_Text_0
# 361 "data/maps/Maasje/scripts.pory"
	release
	end


# 82 "data/maps/Maasje/scripts.pory"
Maasje_Advice_Fisher_Crabhill_Movement_0:
# 82 "data/maps/Maasje/scripts.pory"
	face_player
	step_end

# 312 "data/maps/Maasje/scripts.pory"
Maasje_Joris_UpToTheWhiteLight_Movement_0:
# 312 "data/maps/Maasje/scripts.pory"
	walk_in_place_fast_down
	step_end

# 317 "data/maps/Maasje/scripts.pory"
Maasje_Joris_UpToTheWhiteLight_Movement_1:
# 317 "data/maps/Maasje/scripts.pory"
	emote_question_mark
	step_end

# 320 "data/maps/Maasje/scripts.pory"
Maasje_Joris_UpToTheWhiteLight_Movement_2:
# 320 "data/maps/Maasje/scripts.pory"
	walk_fast_left
# 320 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 320 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 320 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 320 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 320 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 320 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 320 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 320 "data/maps/Maasje/scripts.pory"
	walk_fast_left
# 320 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 320 "data/maps/Maasje/scripts.pory"
	walk_fast_down
	step_end

# 323 "data/maps/Maasje/scripts.pory"
Maasje_Joris_UpToTheWhiteLight_Movement_3:
# 323 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 323 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 323 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 323 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 323 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 323 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 323 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 323 "data/maps/Maasje/scripts.pory"
	walk_fast_left
# 323 "data/maps/Maasje/scripts.pory"
	walk_fast_left
# 323 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 323 "data/maps/Maasje/scripts.pory"
	walk_fast_down
	step_end

Maasje_Sign_Welcome_Text_0:
# 14 "data/maps/Maasje/scripts.pory"
	.string "MESTREECH TOWN\n"
	.string "Home to people, and crustaceans.$"

Maasje_Sign_Jakub_Home_Text_0:
# 21 "data/maps/Maasje/scripts.pory"
	.string "Jacob's House$"

Maasje_Sign_Gym_Text_0:
# 28 "data/maps/Maasje/scripts.pory"
	.string "Mestreech Gym:\n"
	.string "Where sand rules the world.$"

Maasje_Sign_Hill_Text_0:
# 35 "data/maps/Maasje/scripts.pory"
	.string "{UP_ARROW} PokeGym\n"
	.string "{DOWN_ARROW} The beach$"

Maasje_Sign_Beekeeper_Text_0:
# 42 "data/maps/Maasje/scripts.pory"
	.string "Beekeeper Smells's House$"

Maasje_Sign_CrabHill_Text_0:
# 49 "data/maps/Maasje/scripts.pory"
	.string "Crab Hill:\n"
	.string "WARNING! EASY TO GET LOST! TAKE CARE!$"

Maasje_Tree_Boy_Cut_Text_0:
# 57 "data/maps/Maasje/scripts.pory"
	.string "The rain in the Cloud Forest makes\n"
	.string "trees grow back overnight.\p"
	.string "Luckely you only need a POKéMON that\n"
	.string "CAN learn Cut in your party - no need to\l"
	.string "actually teach it.\p"
	.string "More room for the good moves, am I\n"
	.string "right!$"

Maasje_Sign_NextRoute_Text_0:
# 64 "data/maps/Maasje/scripts.pory"
	.string "{UP_ARROW} The Cloud Forest\n"
	.string "Enter on own risk, or with a guide.$"

Maasje_Collect_Honey_BeeHives_Text_0:
# 75 "data/maps/Maasje/scripts.pory"
	.string "You have collected honey from the\n"
	.string "beehive.$"

Maasje_Advice_Fisher_Crabhill_Text_0:
# 84 "data/maps/Maasje/scripts.pory"
	.string "Whoa there, planning on going in?\p"
	.string "That place can be a tricky maze. Here,\n"
	.string "take this with you, just in case.$"

Maasje_Advice_Fisher_Crabhill_Text_1:
# 87 "data/maps/Maasje/scripts.pory"
	.string "It's an Escape Rope. A real lifesaver if\n"
	.string "you ever feel hopelessly lost!$"

Maasje_Advice_Fisher_Crabhill_Text_2:
# 91 "data/maps/Maasje/scripts.pory"
	.string "Can you believe this whole place was\n"
	.string "once an underwater reef?\p"
	.string "Thanks to the tireless work of crabs,\n"
	.string "the reef grew over time, creating this\l"
	.string "safe haven for Pokémon.$"

Maasje_Beehive_01_Text_0:
# 105 "data/maps/Maasje/scripts.pory"
	.string "This beehive seems full of honey, do you\n"
	.string "want to collect it?$"

Maasje_Beehive_01_Text_1:
# 107 "data/maps/Maasje/scripts.pory"
	.string "{PLAYER} collected the honey.$"

Maasje_Beehive_01_Text_2:
# 114 "data/maps/Maasje/scripts.pory"
	.string "The beehive is empty. Better look for\n"
	.string "another hive.$"

Maasje_Beehive_01_Text_3:
# 119 "data/maps/Maasje/scripts.pory"
	.string "It's a beehive, better not touch it.$"

Maasje_Beehive_06_Text_0:
# 232 "data/maps/Maasje/scripts.pory"
	.string "......BZZZZZZZZZZZZZZ$"

Maasje_Joris_UpToTheWhiteLight_Text_0:
# 310 "data/maps/Maasje/scripts.pory"
	.string "...$"

Maasje_Joris_UpToTheWhiteLight_Text_1:
# 314 "data/maps/Maasje/scripts.pory"
	.string "?????$"

Maasje_Joris_UpToTheWhiteLight_Text_2:
# 315 "data/maps/Maasje/scripts.pory"
	.string "UP TO THE WHITELIGHT!!!$"

Maasje_Eventscript_Maniac_Text_0:
# 360 "data/maps/Maasje/scripts.pory"
	.string "This town is overrun by Krabby's.\p"
	.string "Everybody is scared to go outside.\p"
	.string "I still need groceries though, so I'm\n"
	.string "taking the risk!$"

Maasje_Eventscript_Maniac_Text_1:
# 365 "data/maps/Maasje/scripts.pory"
	.string "Everybody is still shook by the\n"
	.string "infestation by those Krabby's.\p"
	.string "You won't seem them outside very often.\p"
	.string "Hopefully one day everyting will be\n"
	.string "back to normal.$"
