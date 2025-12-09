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
	msgbox Maasje_Sign_Welcome_Text_0, MSGBOX_AUTOCLOSE
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
	faceplayer
# 73 "data/maps/Maasje/scripts.pory"
	applymovement 60, Maasje_Advice_Fisher_Crabhill_Movement_0
# 74 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_RECEIVED_ESCAPE_ROPE, Maasje_Advice_Fisher_Crabhill_2
# 82 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Advice_Fisher_Crabhill_Text_2
# 83 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Advice_Fisher_Crabhill_1:
# 85 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Advice_Fisher_Crabhill_2:
# 75 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Advice_Fisher_Crabhill_Text_0
# 76 "data/maps/Maasje/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 77 "data/maps/Maasje/scripts.pory"
	setflag FLAG_RECEIVED_ESCAPE_ROPE
# 78 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Advice_Fisher_Crabhill_Text_1
# 79 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Advice_Fisher_Crabhill_1


Maasje_Flag_Follower_Prep::
# 89 "data/maps/Maasje/scripts.pory"
	setflag FLAG_DISABLE_FOLLOWER_POKEMON
	return


Maasje_Beehive_01::
# 93 "data/maps/Maasje/scripts.pory"
	lock
# 94 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_01_2
# 110 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 111 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_01_1:
# 113 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_01_2:
# 95 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_01, Maasje_Beehive_01_5
# 105 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 106 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_01_1

Maasje_Beehive_01_5:
# 96 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 97 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_01_8
	goto Maasje_Beehive_01_1

Maasje_Beehive_01_8:
# 98 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 99 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 100 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_01
# 101 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_01_1


Maasje_Beehive_02::
# 117 "data/maps/Maasje/scripts.pory"
	lock
# 118 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_02_2
# 134 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 135 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_02_1:
# 137 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_02_2:
# 119 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_02, Maasje_Beehive_02_5
# 129 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 130 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_02_1

Maasje_Beehive_02_5:
# 120 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 121 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_02_8
	goto Maasje_Beehive_02_1

Maasje_Beehive_02_8:
# 122 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 123 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 124 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_02
# 125 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_02_1


Maasje_Beehive_03::
# 141 "data/maps/Maasje/scripts.pory"
	lock
# 142 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_03_2
# 158 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 159 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_03_1:
# 161 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_03_2:
# 143 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_03, Maasje_Beehive_03_5
# 153 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 154 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_03_1

Maasje_Beehive_03_5:
# 144 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 145 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_03_8
	goto Maasje_Beehive_03_1

Maasje_Beehive_03_8:
# 146 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 147 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 148 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_03
# 149 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_03_1


Maasje_Beehive_04::
# 165 "data/maps/Maasje/scripts.pory"
	lock
# 166 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_04_2
# 182 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 183 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_04_1:
# 185 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_04_2:
# 167 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_04, Maasje_Beehive_04_5
# 177 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 178 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_04_1

Maasje_Beehive_04_5:
# 168 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 169 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_04_8
	goto Maasje_Beehive_04_1

Maasje_Beehive_04_8:
# 170 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 171 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 172 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_04
# 173 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_04_1


Maasje_Beehive_05::
# 189 "data/maps/Maasje/scripts.pory"
	lock
# 190 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_05_2
# 206 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 207 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_05_1:
# 209 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_05_2:
# 191 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_05, Maasje_Beehive_05_5
# 201 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 202 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_05_1

Maasje_Beehive_05_5:
# 192 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 193 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_05_8
	goto Maasje_Beehive_05_1

Maasje_Beehive_05_8:
# 194 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 195 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 196 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_05
# 197 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_05_1


Maasje_Beehive_06::
# 213 "data/maps/Maasje/scripts.pory"
	lock
# 214 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_06_2
# 236 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 237 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_06_1:
# 239 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_06_2:
# 215 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_06, Maasje_Beehive_06_5
# 231 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 232 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_06_1

Maasje_Beehive_06_5:
# 216 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 217 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_06_8
	goto Maasje_Beehive_06_1

Maasje_Beehive_06_8:
# 218 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 219 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 220 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_06
# 221 "data/maps/Maasje/scripts.pory"
	waitmessage
# 222 "data/maps/Maasje/scripts.pory"
	playmoncry SPECIES_VOLBEAT, CRY_MODE_ENCOUNTER
# 223 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_06_Text_0
# 224 "data/maps/Maasje/scripts.pory"
	waitmessage
# 225 "data/maps/Maasje/scripts.pory"
	waitmoncry
# 226 "data/maps/Maasje/scripts.pory"
	createmon 1, 0, SPECIES_VOLBEAT, 8
# 227 "data/maps/Maasje/scripts.pory"
	dowildbattle
	goto Maasje_Beehive_06_1


Maasje_Beehive_07::
# 243 "data/maps/Maasje/scripts.pory"
	lock
# 244 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_07_2
# 260 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 261 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_07_1:
# 263 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_07_2:
# 245 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_07, Maasje_Beehive_07_5
# 255 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 256 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_07_1

Maasje_Beehive_07_5:
# 246 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 247 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_07_8
	goto Maasje_Beehive_07_1

Maasje_Beehive_07_8:
# 248 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 249 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 250 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_07
# 251 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_07_1


Maasje_Beehive_08::
# 267 "data/maps/Maasje/scripts.pory"
	lock
# 268 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_08_2
# 290 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 291 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_08_1:
# 293 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_08_2:
# 269 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_08, Maasje_Beehive_08_5
# 285 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 286 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_08_1

Maasje_Beehive_08_5:
# 270 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 271 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_08_8
	goto Maasje_Beehive_08_1

Maasje_Beehive_08_8:
# 272 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 273 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 274 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_08
# 275 "data/maps/Maasje/scripts.pory"
	waitmessage
# 276 "data/maps/Maasje/scripts.pory"
	playmoncry SPECIES_ILLUMISE, CRY_MODE_ENCOUNTER
# 277 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_06_Text_0
# 278 "data/maps/Maasje/scripts.pory"
	waitmessage
# 279 "data/maps/Maasje/scripts.pory"
	waitmoncry
# 280 "data/maps/Maasje/scripts.pory"
	createmon 1, 0, SPECIES_ILLUMISE, 8
# 281 "data/maps/Maasje/scripts.pory"
	dowildbattle
	goto Maasje_Beehive_08_1


Maasje_Joris_UpToTheWhiteLight::
# 297 "data/maps/Maasje/scripts.pory"
	lock
# 298 "data/maps/Maasje/scripts.pory"
	faceplayer
# 299 "data/maps/Maasje/scripts.pory"
	setflag FLAG_UP_TO_THE_WHITELIGHT_MAASJE
# 300 "data/maps/Maasje/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 301 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Joris_UpToTheWhiteLight_Text_0, MSGBOX_AUTOCLOSE
# 302 "data/maps/Maasje/scripts.pory"
	waitmessage
# 303 "data/maps/Maasje/scripts.pory"
	applymovement 2, Maasje_Joris_UpToTheWhiteLight_Movement_0
# 304 "data/maps/Maasje/scripts.pory"
	delay 40
# 305 "data/maps/Maasje/scripts.pory"
	setspeaker Maasje_Joris_UpToTheWhiteLight_Text_1
# 306 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Joris_UpToTheWhiteLight_Text_2, MSGBOX_AUTOCLOSE
# 307 "data/maps/Maasje/scripts.pory"
	waitmessage
# 308 "data/maps/Maasje/scripts.pory"
	applymovement LOCALID_PLAYER, Maasje_Joris_UpToTheWhiteLight_Movement_1
# 309 "data/maps/Maasje/scripts.pory"
	delay 40
# 310 "data/maps/Maasje/scripts.pory"
	compare VAR_TEMP_0, 49
	goto_if_eq Maasje_Joris_UpToTheWhiteLight_4
Maasje_Joris_UpToTheWhiteLight_3:
# 314 "data/maps/Maasje/scripts.pory"
	applymovement 2, Maasje_Joris_UpToTheWhiteLight_Movement_3
Maasje_Joris_UpToTheWhiteLight_1:
# 316 "data/maps/Maasje/scripts.pory"
	waitmovement
# 317 "data/maps/Maasje/scripts.pory"
	removeobject 2
# 318 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Joris_UpToTheWhiteLight_2:
# 311 "data/maps/Maasje/scripts.pory"
	applymovement 2, Maasje_Joris_UpToTheWhiteLight_Movement_2
	goto Maasje_Joris_UpToTheWhiteLight_1

Maasje_Joris_UpToTheWhiteLight_4:
# 310 "data/maps/Maasje/scripts.pory"
	compare VAR_TEMP_1, 34
	goto_if_eq Maasje_Joris_UpToTheWhiteLight_2
	goto Maasje_Joris_UpToTheWhiteLight_3


Maasje_Evenscript_Rick::
# 323 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 324 "data/maps/Maasje/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Evenscript_Allen::
# 329 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 330 "data/maps/Maasje/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Eventscript_Ivan::
# 335 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 336 "data/maps/Maasje/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Eventscript_Winston::
# 341 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat
# 342 "data/maps/Maasje/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 343 "data/maps/Maasje/scripts.pory"
	release
	end


Maasje_Eventscript_Maniac::
# 348 "data/maps/Maasje/scripts.pory"
	lock
# 349 "data/maps/Maasje/scripts.pory"
	faceplayer
# 350 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Maasje_Eventscript_Maniac_1
# 356 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Eventscript_Maniac_Text_1
# 357 "data/maps/Maasje/scripts.pory"
	release
	end

Maasje_Eventscript_Maniac_1:
# 351 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Eventscript_Maniac_Text_0
# 352 "data/maps/Maasje/scripts.pory"
	release
	end


# 73 "data/maps/Maasje/scripts.pory"
Maasje_Advice_Fisher_Crabhill_Movement_0:
# 73 "data/maps/Maasje/scripts.pory"
	face_player
	step_end

# 303 "data/maps/Maasje/scripts.pory"
Maasje_Joris_UpToTheWhiteLight_Movement_0:
# 303 "data/maps/Maasje/scripts.pory"
	walk_in_place_fast_down
	step_end

# 308 "data/maps/Maasje/scripts.pory"
Maasje_Joris_UpToTheWhiteLight_Movement_1:
# 308 "data/maps/Maasje/scripts.pory"
	emote_question_mark
	step_end

# 311 "data/maps/Maasje/scripts.pory"
Maasje_Joris_UpToTheWhiteLight_Movement_2:
# 311 "data/maps/Maasje/scripts.pory"
	walk_fast_left
# 311 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 311 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 311 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 311 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 311 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 311 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 311 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 311 "data/maps/Maasje/scripts.pory"
	walk_fast_left
# 311 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 311 "data/maps/Maasje/scripts.pory"
	walk_fast_down
	step_end

# 314 "data/maps/Maasje/scripts.pory"
Maasje_Joris_UpToTheWhiteLight_Movement_3:
# 314 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 314 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 314 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 314 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 314 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 314 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 314 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 314 "data/maps/Maasje/scripts.pory"
	walk_fast_left
# 314 "data/maps/Maasje/scripts.pory"
	walk_fast_left
# 314 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 314 "data/maps/Maasje/scripts.pory"
	walk_fast_down
	step_end

Maasje_Sign_Welcome_Text_0:
# 13 "data/maps/Maasje/scripts.pory"
	.string "MESTREECH TOWN\p"
	.string "Home to people, and crustaceans.$"

Maasje_Sign_Jakub_Home_Text_0:
# 20 "data/maps/Maasje/scripts.pory"
	.string "Jacob's House$"

Maasje_Sign_Gym_Text_0:
# 27 "data/maps/Maasje/scripts.pory"
	.string "Mestreech Gym:\n"
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
# 75 "data/maps/Maasje/scripts.pory"
	.string "Whoa there, planning on going in?\p"
	.string "That place can be a tricky maze. Here,\n"
	.string "take this with you, just in case.$"

Maasje_Advice_Fisher_Crabhill_Text_1:
# 78 "data/maps/Maasje/scripts.pory"
	.string "It's an Escape Rope. A real lifesaver if\n"
	.string "you ever feel hopelessly lost!$"

Maasje_Advice_Fisher_Crabhill_Text_2:
# 82 "data/maps/Maasje/scripts.pory"
	.string "Can you believe this whole place was\n"
	.string "once an underwater reef?\p"
	.string "Thanks to the tireless work of crabs,\n"
	.string "the reef grew over time, creating this\l"
	.string "safe haven for Pokémon.$"

Maasje_Beehive_01_Text_0:
# 96 "data/maps/Maasje/scripts.pory"
	.string "This beehive seems full of honey, do you\n"
	.string "want to collect it?$"

Maasje_Beehive_01_Text_1:
# 98 "data/maps/Maasje/scripts.pory"
	.string "{PLAYER} collected the honey.$"

Maasje_Beehive_01_Text_2:
# 105 "data/maps/Maasje/scripts.pory"
	.string "The beehive is empty. Better look for\n"
	.string "another hive.$"

Maasje_Beehive_01_Text_3:
# 110 "data/maps/Maasje/scripts.pory"
	.string "It's a beehive, better not touch it.$"

Maasje_Beehive_06_Text_0:
# 223 "data/maps/Maasje/scripts.pory"
	.string "......BZZZZZZZZZZZZZZ$"

Maasje_Joris_UpToTheWhiteLight_Text_0:
# 301 "data/maps/Maasje/scripts.pory"
	.string "...$"

Maasje_Joris_UpToTheWhiteLight_Text_1:
# 305 "data/maps/Maasje/scripts.pory"
	.string "?????$"

Maasje_Joris_UpToTheWhiteLight_Text_2:
# 306 "data/maps/Maasje/scripts.pory"
	.string "UP TO THE WHITELIGHT!!!$"

Maasje_Eventscript_Maniac_Text_0:
# 351 "data/maps/Maasje/scripts.pory"
	.string "This town is overrun by Krabby's.\p"
	.string "Everybody is scared to go outside.\p"
	.string "I still need groceries though, so I'm\n"
	.string "taking the risk!$"

Maasje_Eventscript_Maniac_Text_1:
# 356 "data/maps/Maasje/scripts.pory"
	.string "Everybody is still shook by the\n"
	.string "infestation by those Krabby's.\p"
	.string "You won't seem them outside very often.\p"
	.string "Hopefully one day everyting will be\n"
	.string "back to normal.$"
