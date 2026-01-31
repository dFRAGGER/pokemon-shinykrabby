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


Maasje_Tree_Boy_Cut::
# 54 "data/maps/Maasje/scripts.pory"
	lock
# 55 "data/maps/Maasje/scripts.pory"
	faceplayer
# 56 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Tree_Boy_Cut_Text_0, MSGBOX_AUTOCLOSE
# 57 "data/maps/Maasje/scripts.pory"
	waitmessage
# 58 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Sign_NextRoute::
# 62 "data/maps/Maasje/scripts.pory"
	lock
# 63 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Sign_NextRoute_Text_0
# 64 "data/maps/Maasje/scripts.pory"
	waitmessage
# 65 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Krabby_Cry::
# 69 "data/maps/Maasje/scripts.pory"
	playmoncry SPECIES_KRABBY, CRY_MODE_NORMAL
	return


Maasje_Collect_Honey_BeeHives::
# 73 "data/maps/Maasje/scripts.pory"
	lock
# 74 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Collect_Honey_BeeHives_Text_0
# 75 "data/maps/Maasje/scripts.pory"
	release
	return


Maasje_Advice_Fisher_Crabhill::
# 79 "data/maps/Maasje/scripts.pory"
	lock
# 80 "data/maps/Maasje/scripts.pory"
	faceplayer
# 81 "data/maps/Maasje/scripts.pory"
	applymovement 60, Maasje_Advice_Fisher_Crabhill_Movement_0
# 82 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_RECEIVED_ESCAPE_ROPE, Maasje_Advice_Fisher_Crabhill_2
# 90 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Advice_Fisher_Crabhill_Text_2
# 91 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Advice_Fisher_Crabhill_1:
# 93 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Advice_Fisher_Crabhill_2:
# 83 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Advice_Fisher_Crabhill_Text_0
# 84 "data/maps/Maasje/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 85 "data/maps/Maasje/scripts.pory"
	setflag FLAG_RECEIVED_ESCAPE_ROPE
# 86 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Advice_Fisher_Crabhill_Text_1
# 87 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Advice_Fisher_Crabhill_1


Maasje_Flag_Follower_Prep::
# 97 "data/maps/Maasje/scripts.pory"
	setflag FLAG_DISABLE_FOLLOWER_POKEMON
	return


Maasje_Beehive_01::
# 101 "data/maps/Maasje/scripts.pory"
	lock
# 102 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_01_2
# 118 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 119 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_01_1:
# 121 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_01_2:
# 103 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_01, Maasje_Beehive_01_5
# 113 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 114 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_01_1

Maasje_Beehive_01_5:
# 104 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 105 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_01_8
	goto Maasje_Beehive_01_1

Maasje_Beehive_01_8:
# 106 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 107 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 108 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_01
# 109 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_01_1


Maasje_Beehive_02::
# 125 "data/maps/Maasje/scripts.pory"
	lock
# 126 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_02_2
# 142 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 143 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_02_1:
# 145 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_02_2:
# 127 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_02, Maasje_Beehive_02_5
# 137 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 138 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_02_1

Maasje_Beehive_02_5:
# 128 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 129 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_02_8
	goto Maasje_Beehive_02_1

Maasje_Beehive_02_8:
# 130 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 131 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 132 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_02
# 133 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_02_1


Maasje_Beehive_03::
# 149 "data/maps/Maasje/scripts.pory"
	lock
# 150 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_03_2
# 166 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 167 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_03_1:
# 169 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_03_2:
# 151 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_03, Maasje_Beehive_03_5
# 161 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 162 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_03_1

Maasje_Beehive_03_5:
# 152 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 153 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_03_8
	goto Maasje_Beehive_03_1

Maasje_Beehive_03_8:
# 154 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 155 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 156 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_03
# 157 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_03_1


Maasje_Beehive_04::
# 173 "data/maps/Maasje/scripts.pory"
	lock
# 174 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_04_2
# 190 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 191 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_04_1:
# 193 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_04_2:
# 175 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_04, Maasje_Beehive_04_5
# 185 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 186 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_04_1

Maasje_Beehive_04_5:
# 176 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 177 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_04_8
	goto Maasje_Beehive_04_1

Maasje_Beehive_04_8:
# 178 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 179 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 180 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_04
# 181 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_04_1


Maasje_Beehive_05::
# 197 "data/maps/Maasje/scripts.pory"
	lock
# 198 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_05_2
# 214 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 215 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_05_1:
# 217 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_05_2:
# 199 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_05, Maasje_Beehive_05_5
# 209 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 210 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_05_1

Maasje_Beehive_05_5:
# 200 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 201 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_05_8
	goto Maasje_Beehive_05_1

Maasje_Beehive_05_8:
# 202 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 203 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 204 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_05
# 205 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_05_1


Maasje_Beehive_06::
# 221 "data/maps/Maasje/scripts.pory"
	lock
# 222 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_06_2
# 244 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 245 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_06_1:
# 247 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_06_2:
# 223 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_06, Maasje_Beehive_06_5
# 239 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 240 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_06_1

Maasje_Beehive_06_5:
# 224 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 225 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_06_8
	goto Maasje_Beehive_06_1

Maasje_Beehive_06_8:
# 226 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 227 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 228 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_06
# 229 "data/maps/Maasje/scripts.pory"
	waitmessage
# 230 "data/maps/Maasje/scripts.pory"
	playmoncry SPECIES_VOLBEAT, CRY_MODE_ENCOUNTER
# 231 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_06_Text_0
# 232 "data/maps/Maasje/scripts.pory"
	waitmessage
# 233 "data/maps/Maasje/scripts.pory"
	waitmoncry
# 234 "data/maps/Maasje/scripts.pory"
	createmon 1, 0, SPECIES_VOLBEAT, 8
# 235 "data/maps/Maasje/scripts.pory"
	dowildbattle
	goto Maasje_Beehive_06_1


Maasje_Beehive_07::
# 251 "data/maps/Maasje/scripts.pory"
	lock
# 252 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_07_2
# 268 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 269 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_07_1:
# 271 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_07_2:
# 253 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_07, Maasje_Beehive_07_5
# 263 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 264 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_07_1

Maasje_Beehive_07_5:
# 254 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 255 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_07_8
	goto Maasje_Beehive_07_1

Maasje_Beehive_07_8:
# 256 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 257 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 258 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_07
# 259 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_07_1


Maasje_Beehive_08::
# 275 "data/maps/Maasje/scripts.pory"
	lock
# 276 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_08_2
# 298 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 299 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_08_1:
# 301 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_08_2:
# 277 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_08, Maasje_Beehive_08_5
# 293 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 294 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_08_1

Maasje_Beehive_08_5:
# 278 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 279 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_08_8
	goto Maasje_Beehive_08_1

Maasje_Beehive_08_8:
# 280 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 281 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 282 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_08
# 283 "data/maps/Maasje/scripts.pory"
	waitmessage
# 284 "data/maps/Maasje/scripts.pory"
	playmoncry SPECIES_ILLUMISE, CRY_MODE_ENCOUNTER
# 285 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_06_Text_0
# 286 "data/maps/Maasje/scripts.pory"
	waitmessage
# 287 "data/maps/Maasje/scripts.pory"
	waitmoncry
# 288 "data/maps/Maasje/scripts.pory"
	createmon 1, 0, SPECIES_ILLUMISE, 8
# 289 "data/maps/Maasje/scripts.pory"
	dowildbattle
	goto Maasje_Beehive_08_1


Maasje_Joris_UpToTheWhiteLight::
# 305 "data/maps/Maasje/scripts.pory"
	lock
# 306 "data/maps/Maasje/scripts.pory"
	faceplayer
# 307 "data/maps/Maasje/scripts.pory"
	setflag FLAG_UP_TO_THE_WHITELIGHT_MAASJE
# 308 "data/maps/Maasje/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 309 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Joris_UpToTheWhiteLight_Text_0, MSGBOX_AUTOCLOSE
# 310 "data/maps/Maasje/scripts.pory"
	waitmessage
# 311 "data/maps/Maasje/scripts.pory"
	applymovement 2, Maasje_Joris_UpToTheWhiteLight_Movement_0
# 312 "data/maps/Maasje/scripts.pory"
	delay 40
# 313 "data/maps/Maasje/scripts.pory"
	setspeaker Maasje_Joris_UpToTheWhiteLight_Text_1
# 314 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Joris_UpToTheWhiteLight_Text_2, MSGBOX_AUTOCLOSE
# 315 "data/maps/Maasje/scripts.pory"
	waitmessage
# 316 "data/maps/Maasje/scripts.pory"
	applymovement LOCALID_PLAYER, Maasje_Joris_UpToTheWhiteLight_Movement_1
# 317 "data/maps/Maasje/scripts.pory"
	delay 40
# 318 "data/maps/Maasje/scripts.pory"
	compare VAR_TEMP_0, 49
	goto_if_eq Maasje_Joris_UpToTheWhiteLight_4
Maasje_Joris_UpToTheWhiteLight_3:
# 322 "data/maps/Maasje/scripts.pory"
	applymovement 2, Maasje_Joris_UpToTheWhiteLight_Movement_3
Maasje_Joris_UpToTheWhiteLight_1:
# 324 "data/maps/Maasje/scripts.pory"
	waitmovement
# 325 "data/maps/Maasje/scripts.pory"
	removeobject 2
# 326 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Joris_UpToTheWhiteLight_2:
# 319 "data/maps/Maasje/scripts.pory"
	applymovement 2, Maasje_Joris_UpToTheWhiteLight_Movement_2
	goto Maasje_Joris_UpToTheWhiteLight_1

Maasje_Joris_UpToTheWhiteLight_4:
# 318 "data/maps/Maasje/scripts.pory"
	compare VAR_TEMP_1, 34
	goto_if_eq Maasje_Joris_UpToTheWhiteLight_2
	goto Maasje_Joris_UpToTheWhiteLight_3


Maasje_Evenscript_Rick::
# 331 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 332 "data/maps/Maasje/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Evenscript_Allen::
# 337 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 338 "data/maps/Maasje/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Eventscript_Ivan::
# 343 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 344 "data/maps/Maasje/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Eventscript_Winston::
# 349 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat
# 350 "data/maps/Maasje/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 351 "data/maps/Maasje/scripts.pory"
	release
	end


Maasje_Eventscript_Maniac::
# 356 "data/maps/Maasje/scripts.pory"
	lock
# 357 "data/maps/Maasje/scripts.pory"
	faceplayer
# 358 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Maasje_Eventscript_Maniac_1
# 364 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Eventscript_Maniac_Text_1
# 365 "data/maps/Maasje/scripts.pory"
	release
	end

Maasje_Eventscript_Maniac_1:
# 359 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Eventscript_Maniac_Text_0
# 360 "data/maps/Maasje/scripts.pory"
	release
	end


# 81 "data/maps/Maasje/scripts.pory"
Maasje_Advice_Fisher_Crabhill_Movement_0:
# 81 "data/maps/Maasje/scripts.pory"
	face_player
	step_end

# 311 "data/maps/Maasje/scripts.pory"
Maasje_Joris_UpToTheWhiteLight_Movement_0:
# 311 "data/maps/Maasje/scripts.pory"
	walk_in_place_fast_down
	step_end

# 316 "data/maps/Maasje/scripts.pory"
Maasje_Joris_UpToTheWhiteLight_Movement_1:
# 316 "data/maps/Maasje/scripts.pory"
	emote_question_mark
	step_end

# 319 "data/maps/Maasje/scripts.pory"
Maasje_Joris_UpToTheWhiteLight_Movement_2:
# 319 "data/maps/Maasje/scripts.pory"
	walk_fast_left
# 319 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 319 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 319 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 319 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 319 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 319 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 319 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 319 "data/maps/Maasje/scripts.pory"
	walk_fast_left
# 319 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 319 "data/maps/Maasje/scripts.pory"
	walk_fast_down
	step_end

# 322 "data/maps/Maasje/scripts.pory"
Maasje_Joris_UpToTheWhiteLight_Movement_3:
# 322 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 322 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 322 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 322 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 322 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 322 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 322 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 322 "data/maps/Maasje/scripts.pory"
	walk_fast_left
# 322 "data/maps/Maasje/scripts.pory"
	walk_fast_left
# 322 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 322 "data/maps/Maasje/scripts.pory"
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

Maasje_Tree_Boy_Cut_Text_0:
# 56 "data/maps/Maasje/scripts.pory"
	.string "The rain in Cloud Forest makes\n"
	.string "everything grow at a frightening speed.\p"
	.string "We have to cut these trees down every\n"
	.string "single day because they just keep\l"
	.string "growing back!$"

Maasje_Sign_NextRoute_Text_0:
# 63 "data/maps/Maasje/scripts.pory"
	.string "The Cloud Forest:\n"
	.string "Enter on own risk, or with a guide.$"

Maasje_Collect_Honey_BeeHives_Text_0:
# 74 "data/maps/Maasje/scripts.pory"
	.string "You have collected honey from the\n"
	.string "beehive.$"

Maasje_Advice_Fisher_Crabhill_Text_0:
# 83 "data/maps/Maasje/scripts.pory"
	.string "Whoa there, planning on going in?\p"
	.string "That place can be a tricky maze. Here,\n"
	.string "take this with you, just in case.$"

Maasje_Advice_Fisher_Crabhill_Text_1:
# 86 "data/maps/Maasje/scripts.pory"
	.string "It's an Escape Rope. A real lifesaver if\n"
	.string "you ever feel hopelessly lost!$"

Maasje_Advice_Fisher_Crabhill_Text_2:
# 90 "data/maps/Maasje/scripts.pory"
	.string "Can you believe this whole place was\n"
	.string "once an underwater reef?\p"
	.string "Thanks to the tireless work of crabs,\n"
	.string "the reef grew over time, creating this\l"
	.string "safe haven for Pokémon.$"

Maasje_Beehive_01_Text_0:
# 104 "data/maps/Maasje/scripts.pory"
	.string "This beehive seems full of honey, do you\n"
	.string "want to collect it?$"

Maasje_Beehive_01_Text_1:
# 106 "data/maps/Maasje/scripts.pory"
	.string "{PLAYER} collected the honey.$"

Maasje_Beehive_01_Text_2:
# 113 "data/maps/Maasje/scripts.pory"
	.string "The beehive is empty. Better look for\n"
	.string "another hive.$"

Maasje_Beehive_01_Text_3:
# 118 "data/maps/Maasje/scripts.pory"
	.string "It's a beehive, better not touch it.$"

Maasje_Beehive_06_Text_0:
# 231 "data/maps/Maasje/scripts.pory"
	.string "......BZZZZZZZZZZZZZZ$"

Maasje_Joris_UpToTheWhiteLight_Text_0:
# 309 "data/maps/Maasje/scripts.pory"
	.string "...$"

Maasje_Joris_UpToTheWhiteLight_Text_1:
# 313 "data/maps/Maasje/scripts.pory"
	.string "?????$"

Maasje_Joris_UpToTheWhiteLight_Text_2:
# 314 "data/maps/Maasje/scripts.pory"
	.string "UP TO THE WHITELIGHT!!!$"

Maasje_Eventscript_Maniac_Text_0:
# 359 "data/maps/Maasje/scripts.pory"
	.string "This town is overrun by Krabby's.\p"
	.string "Everybody is scared to go outside.\p"
	.string "I still need groceries though, so I'm\n"
	.string "taking the risk!$"

Maasje_Eventscript_Maniac_Text_1:
# 364 "data/maps/Maasje/scripts.pory"
	.string "Everybody is still shook by the\n"
	.string "infestation by those Krabby's.\p"
	.string "You won't seem them outside very often.\p"
	.string "Hopefully one day everyting will be\n"
	.string "back to normal.$"
