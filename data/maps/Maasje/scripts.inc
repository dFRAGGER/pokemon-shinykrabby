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
	return


Maasje_Sign_Welcome::
# 12 "data/maps/Maasje/scripts.pory"
	lock
# 13 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_Welcome_Text_0
# 14 "data/maps/Maasje/scripts.pory"
	waitmessage
# 15 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Sign_Jakub_Home::
# 19 "data/maps/Maasje/scripts.pory"
	lock
# 20 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_Jakub_Home_Text_0
# 21 "data/maps/Maasje/scripts.pory"
	waitmessage
# 22 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Sign_Gym::
# 26 "data/maps/Maasje/scripts.pory"
	lock
# 27 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_Gym_Text_0
# 28 "data/maps/Maasje/scripts.pory"
	waitmessage
# 29 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Sign_Hill::
# 33 "data/maps/Maasje/scripts.pory"
	lock
# 34 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_Hill_Text_0
# 35 "data/maps/Maasje/scripts.pory"
	waitmessage
# 36 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Sign_Beekeeper::
# 40 "data/maps/Maasje/scripts.pory"
	lock
# 41 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_Beekeeper_Text_0
# 42 "data/maps/Maasje/scripts.pory"
	waitmessage
# 43 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Sign_CrabHill::
# 47 "data/maps/Maasje/scripts.pory"
	lock
# 48 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_CrabHill_Text_0
# 49 "data/maps/Maasje/scripts.pory"
	waitmessage
# 50 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Sign_NextRoute::
# 54 "data/maps/Maasje/scripts.pory"
	lock
# 55 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_NextRoute_Text_0
# 56 "data/maps/Maasje/scripts.pory"
	waitmessage
# 57 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Krabby_Cry::
# 61 "data/maps/Maasje/scripts.pory"
	playmoncry SPECIES_KRABBY, CRY_MODE_NORMAL
	return


Maasje_Collect_Honey_BeeHives::
# 65 "data/maps/Maasje/scripts.pory"
	lock
# 66 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Collect_Honey_BeeHives_Text_0
# 67 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Advice_Fisher_Crabhill::
# 71 "data/maps/Maasje/scripts.pory"
	lock
# 72 "data/maps/Maasje/scripts.pory"
	applymovement 60, Maasje_Advice_Fisher_Crabhill_Movement_0
# 73 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_RECEIVED_ESCAPE_ROPE, Maasje_Advice_Fisher_Crabhill_2
# 81 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Advice_Fisher_Crabhill_Text_2
# 82 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Advice_Fisher_Crabhill_1:
# 84 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Advice_Fisher_Crabhill_2:
# 74 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Advice_Fisher_Crabhill_Text_0
# 75 "data/maps/Maasje/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 76 "data/maps/Maasje/scripts.pory"
	setflag FLAG_RECEIVED_ESCAPE_ROPE
# 77 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Advice_Fisher_Crabhill_Text_1
# 78 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Advice_Fisher_Crabhill_1


Maasje_Flag_Follower_Prep::
# 88 "data/maps/Maasje/scripts.pory"
	setflag FLAG_DISABLE_FOLLOWER_POKEMON
	return


Maasje_Beehive_01::
# 92 "data/maps/Maasje/scripts.pory"
	lock
# 93 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_01_2
# 109 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 110 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_01_1:
# 112 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_01_2:
# 94 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_01, Maasje_Beehive_01_5
# 104 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 105 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_01_1

Maasje_Beehive_01_5:
# 95 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 96 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_01_8
	goto Maasje_Beehive_01_1

Maasje_Beehive_01_8:
# 97 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 98 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 99 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_01
# 100 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_01_1


Maasje_Beehive_02::
# 116 "data/maps/Maasje/scripts.pory"
	lock
# 117 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_02_2
# 133 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 134 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_02_1:
# 136 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_02_2:
# 118 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_02, Maasje_Beehive_02_5
# 128 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 129 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_02_1

Maasje_Beehive_02_5:
# 119 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 120 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_02_8
	goto Maasje_Beehive_02_1

Maasje_Beehive_02_8:
# 121 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 122 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 123 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_02
# 124 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_02_1


Maasje_Beehive_03::
# 140 "data/maps/Maasje/scripts.pory"
	lock
# 141 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_03_2
# 157 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 158 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_03_1:
# 160 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_03_2:
# 142 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_03, Maasje_Beehive_03_5
# 152 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 153 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_03_1

Maasje_Beehive_03_5:
# 143 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 144 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_03_8
	goto Maasje_Beehive_03_1

Maasje_Beehive_03_8:
# 145 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 146 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 147 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_03
# 148 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_03_1


Maasje_Beehive_04::
# 164 "data/maps/Maasje/scripts.pory"
	lock
# 165 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_04_2
# 181 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 182 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_04_1:
# 184 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_04_2:
# 166 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_04, Maasje_Beehive_04_5
# 176 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 177 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_04_1

Maasje_Beehive_04_5:
# 167 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 168 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_04_8
	goto Maasje_Beehive_04_1

Maasje_Beehive_04_8:
# 169 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 170 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 171 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_04
# 172 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_04_1


Maasje_Beehive_05::
# 188 "data/maps/Maasje/scripts.pory"
	lock
# 189 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_05_2
# 205 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 206 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_05_1:
# 208 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_05_2:
# 190 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_05, Maasje_Beehive_05_5
# 200 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 201 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_05_1

Maasje_Beehive_05_5:
# 191 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 192 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_05_8
	goto Maasje_Beehive_05_1

Maasje_Beehive_05_8:
# 193 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 194 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 195 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_05
# 196 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_05_1


Maasje_Beehive_06::
# 212 "data/maps/Maasje/scripts.pory"
	lock
# 213 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_06_2
# 235 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 236 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_06_1:
# 238 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_06_2:
# 214 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_06, Maasje_Beehive_06_5
# 230 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 231 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_06_1

Maasje_Beehive_06_5:
# 215 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 216 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_06_8
	goto Maasje_Beehive_06_1

Maasje_Beehive_06_8:
# 217 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 218 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 219 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_06
# 220 "data/maps/Maasje/scripts.pory"
	waitmessage
# 221 "data/maps/Maasje/scripts.pory"
	playmoncry SPECIES_VOLBEAT, CRY_MODE_ENCOUNTER
# 222 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_06_Text_0
# 223 "data/maps/Maasje/scripts.pory"
	waitmessage
# 224 "data/maps/Maasje/scripts.pory"
	waitmoncry
# 225 "data/maps/Maasje/scripts.pory"
	createmon 1, 0, SPECIES_VOLBEAT, 8
# 226 "data/maps/Maasje/scripts.pory"
	dowildbattle
	goto Maasje_Beehive_06_1


Maasje_Beehive_07::
# 242 "data/maps/Maasje/scripts.pory"
	lock
# 243 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_07_2
# 259 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 260 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_07_1:
# 262 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_07_2:
# 244 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_07, Maasje_Beehive_07_5
# 254 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 255 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_07_1

Maasje_Beehive_07_5:
# 245 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 246 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_07_8
	goto Maasje_Beehive_07_1

Maasje_Beehive_07_8:
# 247 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 248 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 249 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_07
# 250 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_07_1


Maasje_Beehive_08::
# 266 "data/maps/Maasje/scripts.pory"
	lock
# 267 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_08_2
# 289 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 290 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_08_1:
# 292 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_08_2:
# 268 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_08, Maasje_Beehive_08_5
# 284 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 285 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_08_1

Maasje_Beehive_08_5:
# 269 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 270 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_08_8
	goto Maasje_Beehive_08_1

Maasje_Beehive_08_8:
# 271 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 272 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 273 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_08
# 274 "data/maps/Maasje/scripts.pory"
	waitmessage
# 275 "data/maps/Maasje/scripts.pory"
	playmoncry SPECIES_ILLUMISE, CRY_MODE_ENCOUNTER
# 276 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_06_Text_0
# 277 "data/maps/Maasje/scripts.pory"
	waitmessage
# 278 "data/maps/Maasje/scripts.pory"
	waitmoncry
# 279 "data/maps/Maasje/scripts.pory"
	createmon 1, 0, SPECIES_ILLUMISE, 8
# 280 "data/maps/Maasje/scripts.pory"
	dowildbattle
	goto Maasje_Beehive_08_1


Maasje_Joris_UpToTheWhiteLight::
# 296 "data/maps/Maasje/scripts.pory"
	lock
# 297 "data/maps/Maasje/scripts.pory"
	faceplayer
# 298 "data/maps/Maasje/scripts.pory"
	setflag FLAG_UP_TO_THE_WHITELIGHT_MAASJE
# 299 "data/maps/Maasje/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 300 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Joris_UpToTheWhiteLight_Text_0, MSGBOX_AUTOCLOSE
# 301 "data/maps/Maasje/scripts.pory"
	waitmessage
# 302 "data/maps/Maasje/scripts.pory"
	applymovement 2, Maasje_Joris_UpToTheWhiteLight_Movement_0
# 303 "data/maps/Maasje/scripts.pory"
	delay 40
# 304 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Joris_UpToTheWhiteLight_Text_1, MSGBOX_AUTOCLOSE
# 305 "data/maps/Maasje/scripts.pory"
	waitmessage
# 306 "data/maps/Maasje/scripts.pory"
	applymovement LOCALID_PLAYER, Maasje_Joris_UpToTheWhiteLight_Movement_1
# 307 "data/maps/Maasje/scripts.pory"
	delay 40
# 308 "data/maps/Maasje/scripts.pory"
	compare VAR_TEMP_0, 49
	goto_if_eq Maasje_Joris_UpToTheWhiteLight_4
Maasje_Joris_UpToTheWhiteLight_3:
# 312 "data/maps/Maasje/scripts.pory"
	applymovement 2, Maasje_Joris_UpToTheWhiteLight_Movement_3
Maasje_Joris_UpToTheWhiteLight_1:
# 314 "data/maps/Maasje/scripts.pory"
	waitmovement
# 315 "data/maps/Maasje/scripts.pory"
	removeobject 2
# 316 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Joris_UpToTheWhiteLight_2:
# 309 "data/maps/Maasje/scripts.pory"
	applymovement 2, Maasje_Joris_UpToTheWhiteLight_Movement_2
	goto Maasje_Joris_UpToTheWhiteLight_1

Maasje_Joris_UpToTheWhiteLight_4:
# 308 "data/maps/Maasje/scripts.pory"
	compare VAR_TEMP_1, 34
	goto_if_eq Maasje_Joris_UpToTheWhiteLight_2
	goto Maasje_Joris_UpToTheWhiteLight_3


Maasje_Evenscript_Rick::
# 321 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 322 "data/maps/Maasje/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Evenscript_Allen::
# 327 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 328 "data/maps/Maasje/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Eventscript_Ivan::
# 333 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 334 "data/maps/Maasje/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Eventscript_Winston::
# 339 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat
# 340 "data/maps/Maasje/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 341 "data/maps/Maasje/scripts.pory"
	release
	end


Maasje_Eventscript_Maniac::
# 346 "data/maps/Maasje/scripts.pory"
	lock
# 347 "data/maps/Maasje/scripts.pory"
	faceplayer
# 348 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Maasje_Eventscript_Maniac_1
# 354 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Eventscript_Maniac_Text_1
# 355 "data/maps/Maasje/scripts.pory"
	release
	end

Maasje_Eventscript_Maniac_1:
# 349 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Eventscript_Maniac_Text_0
# 350 "data/maps/Maasje/scripts.pory"
	release
	end


# 72 "data/maps/Maasje/scripts.pory"
Maasje_Advice_Fisher_Crabhill_Movement_0:
# 72 "data/maps/Maasje/scripts.pory"
	face_player
	step_end

# 302 "data/maps/Maasje/scripts.pory"
Maasje_Joris_UpToTheWhiteLight_Movement_0:
# 302 "data/maps/Maasje/scripts.pory"
	walk_in_place_fast_down
	step_end

# 306 "data/maps/Maasje/scripts.pory"
Maasje_Joris_UpToTheWhiteLight_Movement_1:
# 306 "data/maps/Maasje/scripts.pory"
	emote_question_mark
	step_end

# 309 "data/maps/Maasje/scripts.pory"
Maasje_Joris_UpToTheWhiteLight_Movement_2:
# 309 "data/maps/Maasje/scripts.pory"
	walk_fast_left
# 309 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 309 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 309 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 309 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 309 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 309 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 309 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 309 "data/maps/Maasje/scripts.pory"
	walk_fast_left
# 309 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 309 "data/maps/Maasje/scripts.pory"
	walk_fast_down
	step_end

# 312 "data/maps/Maasje/scripts.pory"
Maasje_Joris_UpToTheWhiteLight_Movement_3:
# 312 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 312 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 312 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 312 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 312 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 312 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 312 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 312 "data/maps/Maasje/scripts.pory"
	walk_fast_left
# 312 "data/maps/Maasje/scripts.pory"
	walk_fast_left
# 312 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 312 "data/maps/Maasje/scripts.pory"
	walk_fast_down
	step_end

Maasje_Sign_Welcome_Text_0:
# 13 "data/maps/Maasje/scripts.pory"
	.string "Welcome to Maasje!$"

Maasje_Sign_Jakub_Home_Text_0:
# 20 "data/maps/Maasje/scripts.pory"
	.string "Jakub's House$"

Maasje_Sign_Gym_Text_0:
# 27 "data/maps/Maasje/scripts.pory"
	.string "Maasje Gym:\n"
	.string "Where sand rules the world.$"

Maasje_Sign_Hill_Text_0:
# 34 "data/maps/Maasje/scripts.pory"
	.string "Uphill: PokeGym\n"
	.string "Downhill: The beach$"

Maasje_Sign_Beekeeper_Text_0:
# 41 "data/maps/Maasje/scripts.pory"
	.string "Beekeeper Smells's House$"

Maasje_Sign_CrabHill_Text_0:
# 48 "data/maps/Maasje/scripts.pory"
	.string "Crab Hill:\n"
	.string "WARNING! EASY TO GET LOST! TAKE CARE!$"

Maasje_Sign_NextRoute_Text_0:
# 55 "data/maps/Maasje/scripts.pory"
	.string "The Cloud Forest:\n"
	.string "Enter on own risk, or with a guide.$"

Maasje_Collect_Honey_BeeHives_Text_0:
# 66 "data/maps/Maasje/scripts.pory"
	.string "You have collected honey from the\n"
	.string "beehive.$"

Maasje_Advice_Fisher_Crabhill_Text_0:
# 74 "data/maps/Maasje/scripts.pory"
	.string "{COLOR RED}Fisher: {COLOR DARK_GRAY}Whoa there, planning on going\n"
	.string "in?\p"
	.string "That place can be a tricky maze. Here,\n"
	.string "take this with you, just in case.$"

Maasje_Advice_Fisher_Crabhill_Text_1:
# 77 "data/maps/Maasje/scripts.pory"
	.string "It's an Escape Rope. A real lifesaver if\n"
	.string "you ever feel hopelessly lost!$"

Maasje_Advice_Fisher_Crabhill_Text_2:
# 81 "data/maps/Maasje/scripts.pory"
	.string "{COLOR RED}Fisher: {COLOR DARK_GRAY}Can you believe this whole place\n"
	.string "was once an underwater reef?\p"
	.string "Thanks to the tireless work of crabs,\n"
	.string "the reef grew over time, creating this\l"
	.string "safe haven for Pokémon.$"

Maasje_Beehive_01_Text_0:
# 95 "data/maps/Maasje/scripts.pory"
	.string "This beehive seems full of honey, do you\n"
	.string "want to collect it?$"

Maasje_Beehive_01_Text_1:
# 97 "data/maps/Maasje/scripts.pory"
	.string "{PLAYER} collected the honey.$"

Maasje_Beehive_01_Text_2:
# 104 "data/maps/Maasje/scripts.pory"
	.string "The beehive is empty. Better look for\n"
	.string "another hive.$"

Maasje_Beehive_01_Text_3:
# 109 "data/maps/Maasje/scripts.pory"
	.string "It's a beehive, better not touch it.$"

Maasje_Beehive_06_Text_0:
# 222 "data/maps/Maasje/scripts.pory"
	.string "......BZZZZZZZZZZZZZZ$"

Maasje_Joris_UpToTheWhiteLight_Text_0:
# 300 "data/maps/Maasje/scripts.pory"
	.string "...$"

Maasje_Joris_UpToTheWhiteLight_Text_1:
# 304 "data/maps/Maasje/scripts.pory"
	.string "UP TO THE WHITELIGHT!!!$"

Maasje_Eventscript_Maniac_Text_0:
# 349 "data/maps/Maasje/scripts.pory"
	.string "{COLOR RED}Young man: {COLOR DARK_GRAY}This town is overrun by\n"
	.string "Krabby's, everybody is scared to go\l"
	.string "outside!\p"
	.string "I still need groceries though, so I'm\n"
	.string "taking the risk!$"

Maasje_Eventscript_Maniac_Text_1:
# 354 "data/maps/Maasje/scripts.pory"
	.string "{COLOR RED}Young man: {COLOR DARK_GRAY}Everybody is still shook by\n"
	.string "the infestation by those Krabby's.\p"
	.string "You won't seem them outside very often.\p"
	.string "Hopefully one day everyting will be\n"
	.string "back to normal.$"
