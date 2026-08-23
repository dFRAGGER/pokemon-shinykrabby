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


Maasje_PeteLongfellow_Crabs_Gymhill::
# 80 "data/maps/Maasje/scripts.pory"
	lock
# 81 "data/maps/Maasje/scripts.pory"
	faceplayer
# 82 "data/maps/Maasje/scripts.pory"
	setspeaker Maasje_PeteLongfellow_Crabs_Gymhill_Text_0
# 83 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_MET_PETE_LONGFELLOW_GYMHILL, Maasje_PeteLongfellow_Crabs_Gymhill_2
# 93 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Maasje_PeteLongfellow_Crabs_Gymhill_8
# 97 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_PeteLongfellow_Crabs_Gymhill_Text_4, MSGBOX_AUTOCLOSE
Maasje_PeteLongfellow_Crabs_Gymhill_1:
# 100 "data/maps/Maasje/scripts.pory"
	waitmessage
# 101 "data/maps/Maasje/scripts.pory"
	release
	end

Maasje_PeteLongfellow_Crabs_Gymhill_2:
# 84 "data/maps/Maasje/scripts.pory"
	setflag FLAG_MET_PETE_LONGFELLOW_GYMHILL
# 85 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Maasje_PeteLongfellow_Crabs_Gymhill_5
# 89 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_PeteLongfellow_Crabs_Gymhill_Text_2, MSGBOX_AUTOCLOSE
	goto Maasje_PeteLongfellow_Crabs_Gymhill_1

Maasje_PeteLongfellow_Crabs_Gymhill_5:
# 86 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_PeteLongfellow_Crabs_Gymhill_Text_1, MSGBOX_AUTOCLOSE
	goto Maasje_PeteLongfellow_Crabs_Gymhill_1

Maasje_PeteLongfellow_Crabs_Gymhill_8:
# 94 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_PeteLongfellow_Crabs_Gymhill_Text_3, MSGBOX_AUTOCLOSE
	goto Maasje_PeteLongfellow_Crabs_Gymhill_1


Maasje_Advice_Fisher_Crabhill::
# 106 "data/maps/Maasje/scripts.pory"
	lock
# 107 "data/maps/Maasje/scripts.pory"
	faceplayer
# 108 "data/maps/Maasje/scripts.pory"
	applymovement 60, Maasje_Advice_Fisher_Crabhill_Movement_0
# 109 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_RECEIVED_ESCAPE_ROPE, Maasje_Advice_Fisher_Crabhill_2
# 117 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Advice_Fisher_Crabhill_Text_2
# 118 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Advice_Fisher_Crabhill_1:
# 120 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Advice_Fisher_Crabhill_2:
# 110 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Advice_Fisher_Crabhill_Text_0
# 111 "data/maps/Maasje/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 112 "data/maps/Maasje/scripts.pory"
	setflag FLAG_RECEIVED_ESCAPE_ROPE
# 113 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Advice_Fisher_Crabhill_Text_1
# 114 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Advice_Fisher_Crabhill_1


Maasje_Flag_Follower_Prep::
# 124 "data/maps/Maasje/scripts.pory"
	setflag FLAG_DISABLE_FOLLOWER_POKEMON
	return


Maasje_Beehive_01::
# 128 "data/maps/Maasje/scripts.pory"
	lock
# 129 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_01_2
# 145 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 146 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_01_1:
# 148 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_01_2:
# 130 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_01, Maasje_Beehive_01_5
# 140 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 141 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_01_1

Maasje_Beehive_01_5:
# 131 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 132 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_01_8
	goto Maasje_Beehive_01_1

Maasje_Beehive_01_8:
# 133 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 134 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 135 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_01
# 136 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_01_1


Maasje_Beehive_02::
# 152 "data/maps/Maasje/scripts.pory"
	lock
# 153 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_02_2
# 169 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 170 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_02_1:
# 172 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_02_2:
# 154 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_02, Maasje_Beehive_02_5
# 164 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 165 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_02_1

Maasje_Beehive_02_5:
# 155 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 156 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_02_8
	goto Maasje_Beehive_02_1

Maasje_Beehive_02_8:
# 157 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 158 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 159 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_02
# 160 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_02_1


Maasje_Beehive_03::
# 176 "data/maps/Maasje/scripts.pory"
	lock
# 177 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_03_2
# 193 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 194 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_03_1:
# 196 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_03_2:
# 178 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_03, Maasje_Beehive_03_5
# 188 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 189 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_03_1

Maasje_Beehive_03_5:
# 179 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 180 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_03_8
	goto Maasje_Beehive_03_1

Maasje_Beehive_03_8:
# 181 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 182 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 183 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_03
# 184 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_03_1


Maasje_Beehive_04::
# 200 "data/maps/Maasje/scripts.pory"
	lock
# 201 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_04_2
# 217 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 218 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_04_1:
# 220 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_04_2:
# 202 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_04, Maasje_Beehive_04_5
# 212 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 213 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_04_1

Maasje_Beehive_04_5:
# 203 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 204 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_04_8
	goto Maasje_Beehive_04_1

Maasje_Beehive_04_8:
# 205 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 206 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 207 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_04
# 208 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_04_1


Maasje_Beehive_05::
# 224 "data/maps/Maasje/scripts.pory"
	lock
# 225 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_05_2
# 241 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 242 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_05_1:
# 244 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_05_2:
# 226 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_05, Maasje_Beehive_05_5
# 236 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 237 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_05_1

Maasje_Beehive_05_5:
# 227 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 228 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_05_8
	goto Maasje_Beehive_05_1

Maasje_Beehive_05_8:
# 229 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 230 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 231 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_05
# 232 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_05_1


Maasje_Beehive_06::
# 248 "data/maps/Maasje/scripts.pory"
	lock
# 249 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_06_2
# 271 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 272 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_06_1:
# 274 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_06_2:
# 250 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_06, Maasje_Beehive_06_5
# 266 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 267 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_06_1

Maasje_Beehive_06_5:
# 251 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 252 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_06_8
	goto Maasje_Beehive_06_1

Maasje_Beehive_06_8:
# 253 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 254 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 255 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_06
# 256 "data/maps/Maasje/scripts.pory"
	waitmessage
# 257 "data/maps/Maasje/scripts.pory"
	playmoncry SPECIES_VOLBEAT, CRY_MODE_ENCOUNTER
# 258 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_06_Text_0
# 259 "data/maps/Maasje/scripts.pory"
	waitmessage
# 260 "data/maps/Maasje/scripts.pory"
	waitmoncry
# 261 "data/maps/Maasje/scripts.pory"
	createmon 1, 0, SPECIES_VOLBEAT, 8
# 262 "data/maps/Maasje/scripts.pory"
	dowildbattle
	goto Maasje_Beehive_06_1


Maasje_Beehive_07::
# 278 "data/maps/Maasje/scripts.pory"
	lock
# 279 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_07_2
# 295 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 296 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_07_1:
# 298 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_07_2:
# 280 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_07, Maasje_Beehive_07_5
# 290 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 291 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_07_1

Maasje_Beehive_07_5:
# 281 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 282 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_07_8
	goto Maasje_Beehive_07_1

Maasje_Beehive_07_8:
# 283 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 284 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 285 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_07
# 286 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_07_1


Maasje_Beehive_08::
# 302 "data/maps/Maasje/scripts.pory"
	lock
# 303 "data/maps/Maasje/scripts.pory"
	goto_if_set FLAG_START_COLLECTING_HONEY, Maasje_Beehive_08_2
# 325 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_3
# 326 "data/maps/Maasje/scripts.pory"
	waitmessage
Maasje_Beehive_08_1:
# 328 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Beehive_08_2:
# 304 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_CLEAR_BEEHIVE_08, Maasje_Beehive_08_5
# 320 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_2
# 321 "data/maps/Maasje/scripts.pory"
	waitmessage
	goto Maasje_Beehive_08_1

Maasje_Beehive_08_5:
# 305 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_0, MSGBOX_YESNO
# 306 "data/maps/Maasje/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Maasje_Beehive_08_8
	goto Maasje_Beehive_08_1

Maasje_Beehive_08_8:
# 307 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_01_Text_1
# 308 "data/maps/Maasje/scripts.pory"
	addvar VAR_BEEKEEPER_GEURTS, 1
# 309 "data/maps/Maasje/scripts.pory"
	setflag FLAG_CLEAR_BEEHIVE_08
# 310 "data/maps/Maasje/scripts.pory"
	waitmessage
# 311 "data/maps/Maasje/scripts.pory"
	playmoncry SPECIES_ILLUMISE, CRY_MODE_ENCOUNTER
# 312 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Beehive_06_Text_0
# 313 "data/maps/Maasje/scripts.pory"
	waitmessage
# 314 "data/maps/Maasje/scripts.pory"
	waitmoncry
# 315 "data/maps/Maasje/scripts.pory"
	createmon 1, 0, SPECIES_ILLUMISE, 8
# 316 "data/maps/Maasje/scripts.pory"
	dowildbattle
	goto Maasje_Beehive_08_1


Maasje_Joris_UpToTheWhiteLight::
# 332 "data/maps/Maasje/scripts.pory"
	lock
# 333 "data/maps/Maasje/scripts.pory"
	faceplayer
# 334 "data/maps/Maasje/scripts.pory"
	setflag FLAG_UP_TO_THE_WHITELIGHT_MAASJE
# 335 "data/maps/Maasje/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 336 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Joris_UpToTheWhiteLight_Text_0, MSGBOX_AUTOCLOSE
# 337 "data/maps/Maasje/scripts.pory"
	waitmessage
# 338 "data/maps/Maasje/scripts.pory"
	applymovement 5, Maasje_Joris_UpToTheWhiteLight_Movement_0
# 339 "data/maps/Maasje/scripts.pory"
	delay 40
# 340 "data/maps/Maasje/scripts.pory"
	setspeaker Maasje_Joris_UpToTheWhiteLight_Text_1
# 341 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Joris_UpToTheWhiteLight_Text_2, MSGBOX_AUTOCLOSE
# 342 "data/maps/Maasje/scripts.pory"
	waitmessage
# 343 "data/maps/Maasje/scripts.pory"
	applymovement LOCALID_PLAYER, Maasje_Joris_UpToTheWhiteLight_Movement_1
# 344 "data/maps/Maasje/scripts.pory"
	delay 40
# 345 "data/maps/Maasje/scripts.pory"
	compare VAR_TEMP_0, 49
	goto_if_eq Maasje_Joris_UpToTheWhiteLight_4
Maasje_Joris_UpToTheWhiteLight_3:
# 349 "data/maps/Maasje/scripts.pory"
	applymovement 5, Maasje_Joris_UpToTheWhiteLight_Movement_3
Maasje_Joris_UpToTheWhiteLight_1:
# 351 "data/maps/Maasje/scripts.pory"
	waitmovement
# 352 "data/maps/Maasje/scripts.pory"
	removeobject 5
# 353 "data/maps/Maasje/scripts.pory"
	release
	return

Maasje_Joris_UpToTheWhiteLight_2:
# 346 "data/maps/Maasje/scripts.pory"
	applymovement 5, Maasje_Joris_UpToTheWhiteLight_Movement_2
	goto Maasje_Joris_UpToTheWhiteLight_1

Maasje_Joris_UpToTheWhiteLight_4:
# 345 "data/maps/Maasje/scripts.pory"
	compare VAR_TEMP_1, 34
	goto_if_eq Maasje_Joris_UpToTheWhiteLight_2
	goto Maasje_Joris_UpToTheWhiteLight_3


Maasje_Evenscript_Rick::
# 358 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 359 "data/maps/Maasje/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Evenscript_Allen::
# 364 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 365 "data/maps/Maasje/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Eventscript_Ivan::
# 370 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 371 "data/maps/Maasje/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
	end


Maasje_Eventscript_Winston::
# 376 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat
# 377 "data/maps/Maasje/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 378 "data/maps/Maasje/scripts.pory"
	release
	end


Maasje_Eventscript_Maniac::
# 383 "data/maps/Maasje/scripts.pory"
	lock
# 384 "data/maps/Maasje/scripts.pory"
	faceplayer
# 385 "data/maps/Maasje/scripts.pory"
	goto_if_unset FLAG_SHINY_KRABBY_ENCOUNTER, Maasje_Eventscript_Maniac_1
# 391 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Eventscript_Maniac_Text_1
# 392 "data/maps/Maasje/scripts.pory"
	release
	end

Maasje_Eventscript_Maniac_1:
# 386 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Eventscript_Maniac_Text_0
# 387 "data/maps/Maasje/scripts.pory"
	release
	end


Maasje_EventScript_Tiana::
# 397 "data/maps/Maasje/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Maasje_Text_TianaIntro, Maasje_Text_TianaDefeated
# 398 "data/maps/Maasje/scripts.pory"
	msgbox Maasje_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end


# 108 "data/maps/Maasje/scripts.pory"
Maasje_Advice_Fisher_Crabhill_Movement_0:
# 108 "data/maps/Maasje/scripts.pory"
	face_player
	step_end

# 338 "data/maps/Maasje/scripts.pory"
Maasje_Joris_UpToTheWhiteLight_Movement_0:
# 338 "data/maps/Maasje/scripts.pory"
	walk_in_place_fast_down
	step_end

# 343 "data/maps/Maasje/scripts.pory"
Maasje_Joris_UpToTheWhiteLight_Movement_1:
# 343 "data/maps/Maasje/scripts.pory"
	emote_question_mark
	step_end

# 346 "data/maps/Maasje/scripts.pory"
Maasje_Joris_UpToTheWhiteLight_Movement_2:
# 346 "data/maps/Maasje/scripts.pory"
	walk_fast_left
# 346 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 346 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 346 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 346 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 346 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 346 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 346 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 346 "data/maps/Maasje/scripts.pory"
	walk_fast_left
# 346 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 346 "data/maps/Maasje/scripts.pory"
	walk_fast_down
	step_end

# 349 "data/maps/Maasje/scripts.pory"
Maasje_Joris_UpToTheWhiteLight_Movement_3:
# 349 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 349 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 349 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 349 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 349 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 349 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 349 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 349 "data/maps/Maasje/scripts.pory"
	walk_fast_left
# 349 "data/maps/Maasje/scripts.pory"
	walk_fast_left
# 349 "data/maps/Maasje/scripts.pory"
	walk_fast_down
# 349 "data/maps/Maasje/scripts.pory"
	walk_fast_down
	step_end

Maasje_Sign_Welcome_Text_0:
# 14 "data/maps/Maasje/scripts.pory"
	.string "MASO TOWN\n"
	.string "Home to people, and crustaceans.$"

Maasje_Sign_Jakub_Home_Text_0:
# 21 "data/maps/Maasje/scripts.pory"
	.string "Jacob's House$"

Maasje_Sign_Gym_Text_0:
# 28 "data/maps/Maasje/scripts.pory"
	.string "MASO Gym:\n"
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
	.string "CRAB HILL:\n"
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

Maasje_PeteLongfellow_Crabs_Gymhill_Text_0:
# 82 "data/maps/Maasje/scripts.pory"
	.string "PETE$"

Maasje_PeteLongfellow_Crabs_Gymhill_Text_1:
# 86 "data/maps/Maasje/scripts.pory"
	.string "Ah, a challenger! Or, no, LOOK at this,\n"
	.string "how am I supposed to-\p"
	.string "...sorry. Sorry.\p"
	.string "I'm Pete Longfellow, the gym leader\n"
	.string "here. For what that's worth right now.\p"
	.string "The gym is CLOSED. Just look at them!\p"
	.string "In all my years sailing every sea this\n"
	.string "world has to offer, through the pages\l"
	.string "of my finest geography books, of\l"
	.string "course, I have NEVER once come across\l"
	.string "behaviour like this. Never!\p"
	.string "...I just don't understand it.\p"
	.string "Come back another time. Please. Once\n"
	.string "this sorts itself out.$"

Maasje_PeteLongfellow_Crabs_Gymhill_Text_2:
# 89 "data/maps/Maasje/scripts.pory"
	.string "Oh - h-hello there.\p"
	.string "Sorry, I'm Pete Longfellow, the gym\n"
	.string "leader. You catching me out here\l"
	.string "instead of in the gym is, frankly, a\l"
	.string "little humiliating.\p"
	.string "But! Good news, the crabs seem back to\n"
	.string "normal. FINALLY.\p"
	.string "...They still need time to adjust and get\n"
	.string "back to the sea, though, so don't get\l"
	.string "any ideas.\p"
	.string "Come back at the end of the day and the\n"
	.string "gym is yours to challenge.\p"
	.string "Until then, go have a look around town.\n"
	.string "Or something.$"

Maasje_PeteLongfellow_Crabs_Gymhill_Text_3:
# 94 "data/maps/Maasje/scripts.pory"
	.string "Still! Still not past these blasted\n"
	.string "crabs!\p"
	.string "...Come back another time. Once this\n"
	.string "sorts itself out.$"

Maasje_PeteLongfellow_Crabs_Gymhill_Text_4:
# 97 "data/maps/Maasje/scripts.pory"
	.string "Right, right, the crabs are back to\n"
	.string "normal, but they still need time before\l"
	.string "I can let anyone through.\p"
	.string "Come back at the end of the day, the\n"
	.string "gym will be ready.\p"
	.string "...Go look around town in the meantime,\n"
	.string "would you?$"

Maasje_Advice_Fisher_Crabhill_Text_0:
# 110 "data/maps/Maasje/scripts.pory"
	.string "Whoa there, planning on going in?\p"
	.string "That place can be a tricky maze. Here,\n"
	.string "take this with you, just in case.$"

Maasje_Advice_Fisher_Crabhill_Text_1:
# 113 "data/maps/Maasje/scripts.pory"
	.string "It's an Escape Rope. A real lifesaver if\n"
	.string "you ever feel hopelessly lost!$"

Maasje_Advice_Fisher_Crabhill_Text_2:
# 117 "data/maps/Maasje/scripts.pory"
	.string "Can you believe this whole place was\n"
	.string "once an underwater reef?\p"
	.string "Thanks to the tireless work of crabs,\n"
	.string "the reef grew over time, creating this\l"
	.string "safe haven for Pokémon.$"

Maasje_Beehive_01_Text_0:
# 131 "data/maps/Maasje/scripts.pory"
	.string "This beehive seems full of honey, do you\n"
	.string "want to collect it?$"

Maasje_Beehive_01_Text_1:
# 133 "data/maps/Maasje/scripts.pory"
	.string "{PLAYER} collected the honey.$"

Maasje_Beehive_01_Text_2:
# 140 "data/maps/Maasje/scripts.pory"
	.string "The beehive is empty. Better look for\n"
	.string "another hive.$"

Maasje_Beehive_01_Text_3:
# 145 "data/maps/Maasje/scripts.pory"
	.string "It's a beehive, better not touch it.$"

Maasje_Beehive_06_Text_0:
# 258 "data/maps/Maasje/scripts.pory"
	.string "......BZZZZZZZZZZZZZZ$"

Maasje_Joris_UpToTheWhiteLight_Text_0:
# 336 "data/maps/Maasje/scripts.pory"
	.string "...$"

Maasje_Joris_UpToTheWhiteLight_Text_1:
# 340 "data/maps/Maasje/scripts.pory"
	.string "?????$"

Maasje_Joris_UpToTheWhiteLight_Text_2:
# 341 "data/maps/Maasje/scripts.pory"
	.string "UP TO THE WHITELIGHT!!!$"

Maasje_Eventscript_Maniac_Text_0:
# 386 "data/maps/Maasje/scripts.pory"
	.string "This town is overrun by Krabby's.\p"
	.string "Everybody is scared to go outside.\p"
	.string "I still need groceries though, so I'm\n"
	.string "taking the risk!$"

Maasje_Eventscript_Maniac_Text_1:
# 391 "data/maps/Maasje/scripts.pory"
	.string "Everybody is still shook by the\n"
	.string "infestation by those Krabby's.\p"
	.string "You won't seem them outside very often.\p"
	.string "Hopefully one day everyting will be\n"
	.string "back to normal.$"

Maasje_Text_TianaIntro::
# 402 "data/maps/Maasje/scripts.pory"
	.string "I'm going to keep winning and aim\n"
	.string "to be the best TRAINER.\p"
	.string "Help me further my career!$"

Maasje_Text_TianaDefeated::
# 406 "data/maps/Maasje/scripts.pory"
	.string "I ended up furthering your career…$"

Maasje_Text_TianaPostBattle::
# 410 "data/maps/Maasje/scripts.pory"
	.string "To keep winning my way up, I see that\n"
	.string "I have to catch more POKéMON.$"
