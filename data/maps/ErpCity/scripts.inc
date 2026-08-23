ErpCity_MapScripts::
# 2 "data/maps/ErpCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ErpCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/ErpCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ErpCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ErpCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_KICKED_OUT_LAB_CONVO
# 4 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_MOM_SHOES
# 5 "data/maps/ErpCity/scripts.pory"
	call ErpCity_Visited
	return

ErpCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/ErpCity/scripts.pory"
	map_script_2 VAR_RECIEVED_STARTER_POKEMON, 1, ErpCity_ProfessorBirds_Speech_Pokedex
	.2byte 0


ErpCity_SpearowFearow_Flyby::
# 14 "data/maps/ErpCity/scripts.pory"
	setvar VAR_TEMP_0, 1
# 15 "data/maps/ErpCity/scripts.pory"
	setobjectsubpriority 11, MAP_ERP_CITY, 0
# 16 "data/maps/ErpCity/scripts.pory"
	setobjectsubpriority 12, MAP_ERP_CITY, 0
# 17 "data/maps/ErpCity/scripts.pory"
	setobjectsubpriority 13, MAP_ERP_CITY, 0
# 18 "data/maps/ErpCity/scripts.pory"
	applymovement 13, ErpCity_SpearowFearow_Flyby_Movement_0
# 19 "data/maps/ErpCity/scripts.pory"
	applymovement 12, ErpCity_SpearowFearow_Flyby_Movement_0
# 20 "data/maps/ErpCity/scripts.pory"
	applymovement 11, ErpCity_SpearowFearow_Flyby_Movement_0
# 21 "data/maps/ErpCity/scripts.pory"
	waitmovement 11
# 22 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_TEMP_1
# 23 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_TEMP_2
# 24 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_TEMP_3
# 25 "data/maps/ErpCity/scripts.pory"
	removeobject 13
# 26 "data/maps/ErpCity/scripts.pory"
	removeobject 12
# 27 "data/maps/ErpCity/scripts.pory"
	removeobject 11
	return


ErpCity_Visited::
# 31 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_VISITED_ERP_CITY
	return


ErpCity_Sign_Welcome::
# 35 "data/maps/ErpCity/scripts.pory"
	lock
# 36 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Welcome_Text_0, MSGBOX_SIGN
# 37 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 38 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Old_Man_Boekel::
# 42 "data/maps/ErpCity/scripts.pory"
	lock
# 43 "data/maps/ErpCity/scripts.pory"
	faceplayer
# 44 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Old_Man_Boekel_Text_0, MSGBOX_AUTOCLOSE
# 45 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 46 "data/maps/ErpCity/scripts.pory"
	release
	end


ErpCity_Woman::
# 51 "data/maps/ErpCity/scripts.pory"
	lock
# 52 "data/maps/ErpCity/scripts.pory"
	faceplayer
# 53 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Woman_Text_0, MSGBOX_AUTOCLOSE
# 54 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 55 "data/maps/ErpCity/scripts.pory"
	release
	end


ErpCity_ProfessorBirds_Speech_Pokedex::
# 60 "data/maps/ErpCity/scripts.pory"
	lockall
# 61 "data/maps/ErpCity/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 62 "data/maps/ErpCity/scripts.pory"
	opendoor 22, 18
# 63 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_0
# 64 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_KICKED_OUT_LAB_CONVO
# 65 "data/maps/ErpCity/scripts.pory"
	addobject 2
# 66 "data/maps/ErpCity/scripts.pory"
	addobject 5
# 67 "data/maps/ErpCity/scripts.pory"
	addobject 10
# 68 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_1
# 69 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_2
# 70 "data/maps/ErpCity/scripts.pory"
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3
# 71 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 72 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 73 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_1, MSGBOX_AUTOCLOSE
# 74 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 75 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4
# 76 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5
# 77 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 78 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 79 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_2, MSGBOX_AUTOCLOSE
# 80 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 81 "data/maps/ErpCity/scripts.pory"
	playse SE_FAILURE
# 82 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6
# 83 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 84 "data/maps/ErpCity/scripts.pory"
	delay 120
# 85 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7
# 86 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 87 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 88 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_3, MSGBOX_AUTOCLOSE
# 89 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 90 "data/maps/ErpCity/scripts.pory"
	delay 40
# 91 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 92 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8
# 93 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9
# 94 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 95 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_4, MSGBOX_AUTOCLOSE
# 96 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 97 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 98 "data/maps/ErpCity/scripts.pory"
	special EnableNationalPokedex
# 99 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 100 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 101 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_5
# 102 "data/maps/ErpCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 103 "data/maps/ErpCity/scripts.pory"
	waitfanfare
# 104 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 105 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 106 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_6
# 107 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 108 "data/maps/ErpCity/scripts.pory"
	playse SE_BALL_THROW
# 109 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 110 "data/maps/ErpCity/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 111 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 112 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 113 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_7, MSGBOX_AUTOCLOSE
# 114 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 115 "data/maps/ErpCity/scripts.pory"
	playse SE_FAILURE
# 116 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6
# 117 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 118 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10
# 119 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11
# 120 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11
# 121 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 122 "data/maps/ErpCity/scripts.pory"
	delay 60
# 123 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12
# 124 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_13
# 125 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 126 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_8
# 127 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_9
# 128 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 129 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12
# 130 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 131 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_14
# 132 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 133 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_10
# 134 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_11, MSGBOX_AUTOCLOSE
# 135 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 136 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 137 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_15
# 138 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_16
# 139 "data/maps/ErpCity/scripts.pory"
	playse SE_LEDGE
# 140 "data/maps/ErpCity/scripts.pory"
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17
# 141 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 142 "data/maps/ErpCity/scripts.pory"
	playse SE_LEDGE
# 143 "data/maps/ErpCity/scripts.pory"
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17
# 144 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 145 "data/maps/ErpCity/scripts.pory"
	playse SE_LEDGE
# 146 "data/maps/ErpCity/scripts.pory"
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17
# 147 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 148 "data/maps/ErpCity/scripts.pory"
	playse SE_LEDGE
# 149 "data/maps/ErpCity/scripts.pory"
	removeobject 5
# 150 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_18
# 151 "data/maps/ErpCity/scripts.pory"
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17
# 152 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 153 "data/maps/ErpCity/scripts.pory"
	playse SE_LEDGE
# 154 "data/maps/ErpCity/scripts.pory"
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17
# 155 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 156 "data/maps/ErpCity/scripts.pory"
	playse SE_LEDGE
# 157 "data/maps/ErpCity/scripts.pory"
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_19
# 158 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 159 "data/maps/ErpCity/scripts.pory"
	playse SE_LEDGE
# 160 "data/maps/ErpCity/scripts.pory"
	applymovement 10, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_19
# 161 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 162 "data/maps/ErpCity/scripts.pory"
	removeobject 10
# 163 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_KICKED_OUT_LAB_CONVO
# 164 "data/maps/ErpCity/scripts.pory"
	setvar VAR_RECIEVED_STARTER_POKEMON, 2
# 165 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_INTERN_BIRDS_LAB
# 166 "data/maps/ErpCity/scripts.pory"
	delay 120
# 167 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 168 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_12, MSGBOX_AUTOCLOSE
# 169 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 170 "data/maps/ErpCity/scripts.pory"
	delay 40
# 171 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_20
# 172 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 173 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11
# 174 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 175 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 176 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_13, MSGBOX_AUTOCLOSE
# 177 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 178 "data/maps/ErpCity/scripts.pory"
	playse SE_LEDGE
# 179 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_21
# 180 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 181 "data/maps/ErpCity/scripts.pory"
	applymovement 2, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_22
# 182 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 183 "data/maps/ErpCity/scripts.pory"
	removeobject 2
# 184 "data/maps/ErpCity/scripts.pory"
	closedoor 22, 18
# 185 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11
# 186 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 187 "data/maps/ErpCity/scripts.pory"
	delay 60
# 188 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_13
# 189 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 190 "data/maps/ErpCity/scripts.pory"
	delay 60
# 191 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9
# 192 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 193 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_JACOB_SIENNA
# 194 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_INTERN_BIRDS_LAB
# 195 "data/maps/ErpCity/scripts.pory"
	delay 60
# 196 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_Speech_Pokedex_Text_14, MSGBOX_AUTOCLOSE
# 197 "data/maps/ErpCity/scripts.pory"
	special UpdateFollowingPokemon
# 198 "data/maps/ErpCity/scripts.pory"
	fadedefaultbgm
# 199 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_ProfessorBirds_After_Speech::
# 203 "data/maps/ErpCity/scripts.pory"
	lockall
# 204 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_ProfessorBirds_Speech_Pokedex_Text_0
# 205 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_ProfessorBirds_After_Speech_Text_0
# 206 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 207 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Mispoes_Miauw::
# 211 "data/maps/ErpCity/scripts.pory"
	lockall
# 212 "data/maps/ErpCity/scripts.pory"
	faceplayer
# 213 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Mispoes_Miauw_Text_0, MSGBOX_AUTOCLOSE
# 214 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 215 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Lab_Sign::
# 219 "data/maps/ErpCity/scripts.pory"
	lockall
# 220 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Lab_Sign_Text_0, MSGBOX_SIGN
# 221 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 222 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Hiker_Cave::
# 226 "data/maps/ErpCity/scripts.pory"
	lockall
# 227 "data/maps/ErpCity/scripts.pory"
	faceplayer
# 228 "data/maps/ErpCity/scripts.pory"
	applymovement 5, ErpCity_Hiker_Cave_Movement_0
# 230 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Hiker_Cave_Text_0
# 231 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 232 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Cave_Sign::
# 236 "data/maps/ErpCity/scripts.pory"
	lockall
# 237 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Cave_Sign_Text_0
# 238 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 239 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Trigger_Stopplayer::
# 243 "data/maps/ErpCity/scripts.pory"
	lockall
# 244 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Trigger_Stopplayer_Text_0
# 245 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Move_Stopplayer
# 246 "data/maps/ErpCity/scripts.pory"
	waitmovement 0
# 247 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


# 250 "data/maps/ErpCity/scripts.pory"
ErpCity_Move_Stopplayer:
# 251 "data/maps/ErpCity/scripts.pory"
	walk_right
	step_end

ErpCity_Trigger_Stopplayer2::
# 255 "data/maps/ErpCity/scripts.pory"
	lockall
# 256 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Trigger_Stopplayer2_Text_0
# 257 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Trigger_Stopplayer2_Movement_0
# 258 "data/maps/ErpCity/scripts.pory"
	waitmovement 0
# 259 "data/maps/ErpCity/scripts.pory"
	releaseall
	return


ErpCity_Receive_Running_Shoes::
# 263 "data/maps/ErpCity/scripts.pory"
	lockall
# 264 "data/maps/ErpCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RUNNING_SHOES, ErpCity_Receive_Running_Shoes_1
# 301 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 302 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_5
# 303 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 304 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_2
# 305 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 306 "data/maps/ErpCity/scripts.pory"
	releaseall
	end

ErpCity_Receive_Running_Shoes_1:
# 265 "data/maps/ErpCity/scripts.pory"
	playse SE_PIN
# 266 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_0
# 267 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 268 "data/maps/ErpCity/scripts.pory"
	opendoor 19, 25
# 269 "data/maps/ErpCity/scripts.pory"
	waitdooranim
# 270 "data/maps/ErpCity/scripts.pory"
	clearflag FLAG_HIDE_MOM_SHOES
# 271 "data/maps/ErpCity/scripts.pory"
	addobject 4
# 272 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_Receive_Running_Shoes_Movement_1
# 273 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 274 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
# 275 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_1
# 276 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 277 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 278 "data/maps/ErpCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 279 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 280 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_2
# 281 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 282 "data/maps/ErpCity/scripts.pory"
	setspeaker NULL
# 283 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_3
# 284 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 285 "data/maps/ErpCity/scripts.pory"
	setspeaker ErpCity_Receive_Running_Shoes_Text_0
# 286 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Receive_Running_Shoes_Text_4, MSGBOX_AUTOCLOSE
# 287 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 288 "data/maps/ErpCity/scripts.pory"
	applymovement LOCALID_PLAYER, ErpCity_Receive_Running_Shoes_Movement_2
# 289 "data/maps/ErpCity/scripts.pory"
	applymovement 4, ErpCity_Receive_Running_Shoes_Movement_3
# 290 "data/maps/ErpCity/scripts.pory"
	waitmovement
# 291 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_MOM_SHOES
# 292 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 293 "data/maps/ErpCity/scripts.pory"
	setflag FLAG_HIDE_INTERN_BIRDS_LAB
# 294 "data/maps/ErpCity/scripts.pory"
	removeobject 4
# 295 "data/maps/ErpCity/scripts.pory"
	closedoor 19, 25
# 296 "data/maps/ErpCity/scripts.pory"
	waitdooranim
# 297 "data/maps/ErpCity/scripts.pory"
	releaseall
	end


ErpCity_Sign_Mailbox_ProfBirds::
# 312 "data/maps/ErpCity/scripts.pory"
	lock
# 313 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_ProfBirds_Text_0, MSGBOX_SIGN
# 314 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 315 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_Starthouse::
# 319 "data/maps/ErpCity/scripts.pory"
	lock
# 320 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_Starthouse_Text_0, MSGBOX_SIGN
# 321 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 322 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_BarryHouse::
# 326 "data/maps/ErpCity/scripts.pory"
	lock
# 327 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_BarryHouse_Text_0, MSGBOX_SIGN
# 328 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 329 "data/maps/ErpCity/scripts.pory"
	release
	return


ErpCity_Sign_Mailbox_JanVogels::
# 333 "data/maps/ErpCity/scripts.pory"
	lock
# 334 "data/maps/ErpCity/scripts.pory"
	msgbox ErpCity_Sign_Mailbox_JanVogels_Text_0, MSGBOX_SIGN
# 335 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 336 "data/maps/ErpCity/scripts.pory"
	release
	return


OldMiner_Sjeng_Reminisce::
# 340 "data/maps/ErpCity/scripts.pory"
	lock
# 341 "data/maps/ErpCity/scripts.pory"
	faceplayer
# 342 "data/maps/ErpCity/scripts.pory"
	msgbox OldMiner_Sjeng_Reminisce_Text_0, MSGBOX_AUTOCLOSE
# 343 "data/maps/ErpCity/scripts.pory"
	waitmessage
# 344 "data/maps/ErpCity/scripts.pory"
	release
	end


# 18 "data/maps/ErpCity/scripts.pory"
ErpCity_SpearowFearow_Flyby_Movement_0:
# 18 "data/maps/ErpCity/scripts.pory"
	jump_2_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 18 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
	step_end

# 63 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_0:
# 63 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 63 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 63 "data/maps/ErpCity/scripts.pory"
	jump_left
# 63 "data/maps/ErpCity/scripts.pory"
	face_right
	step_end

# 68 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_1:
# 68 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 68 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 68 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
	step_end

# 69 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_2:
# 69 "data/maps/ErpCity/scripts.pory"
	walk_down
# 69 "data/maps/ErpCity/scripts.pory"
	walk_down
# 69 "data/maps/ErpCity/scripts.pory"
	walk_down
# 69 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 70 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_3:
# 70 "data/maps/ErpCity/scripts.pory"
	jump_down
# 70 "data/maps/ErpCity/scripts.pory"
	jump_down
# 70 "data/maps/ErpCity/scripts.pory"
	jump_right
# 70 "data/maps/ErpCity/scripts.pory"
	jump_down
	step_end

# 75 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_4:
# 75 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 76 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_5:
# 76 "data/maps/ErpCity/scripts.pory"
	walk_right
# 76 "data/maps/ErpCity/scripts.pory"
	face_down
	step_end

# 82 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_6:
# 82 "data/maps/ErpCity/scripts.pory"
	emote_x
	step_end

# 85 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_7:
# 85 "data/maps/ErpCity/scripts.pory"
	walk_right
	step_end

# 92 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_8:
# 92 "data/maps/ErpCity/scripts.pory"
	emote_exclamation_mark
# 92 "data/maps/ErpCity/scripts.pory"
	walk_left
# 92 "data/maps/ErpCity/scripts.pory"
	walk_left
	step_end

# 93 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_9:
# 93 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 118 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_10:
# 118 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
	step_end

# 119 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_11:
# 119 "data/maps/ErpCity/scripts.pory"
	face_right
	step_end

# 123 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_12:
# 123 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 123 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 124 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_13:
# 124 "data/maps/ErpCity/scripts.pory"
	face_down
	step_end

# 131 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_14:
# 131 "data/maps/ErpCity/scripts.pory"
	face_down
# 131 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
	step_end

# 137 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_15:
# 137 "data/maps/ErpCity/scripts.pory"
	emote_question_mark
# 137 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 138 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_16:
# 138 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 138 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 138 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 138 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 138 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 138 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 138 "data/maps/ErpCity/scripts.pory"
	walk_fast_left
# 138 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 138 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 138 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 138 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
# 138 "data/maps/ErpCity/scripts.pory"
	walk_fast_down
	step_end

# 140 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_17:
# 140 "data/maps/ErpCity/scripts.pory"
	jump_2_left
	step_end

# 150 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_18:
# 150 "data/maps/ErpCity/scripts.pory"
	walk_down
# 150 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 157 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_19:
# 157 "data/maps/ErpCity/scripts.pory"
	jump_2_down
	step_end

# 171 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_20:
# 171 "data/maps/ErpCity/scripts.pory"
	walk_up
# 171 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 179 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_21:
# 179 "data/maps/ErpCity/scripts.pory"
	jump_left
# 179 "data/maps/ErpCity/scripts.pory"
	face_left
	step_end

# 181 "data/maps/ErpCity/scripts.pory"
ErpCity_ProfessorBirds_Speech_Pokedex_Movement_22:
# 181 "data/maps/ErpCity/scripts.pory"
	walk_right
# 181 "data/maps/ErpCity/scripts.pory"
	walk_up
# 181 "data/maps/ErpCity/scripts.pory"
	walk_up
	step_end

# 228 "data/maps/ErpCity/scripts.pory"
ErpCity_Hiker_Cave_Movement_0:
# 228 "data/maps/ErpCity/scripts.pory"
	face_player
	step_end

# 257 "data/maps/ErpCity/scripts.pory"
ErpCity_Trigger_Stopplayer2_Movement_0:
# 257 "data/maps/ErpCity/scripts.pory"
	walk_left
	step_end

# 266 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_0:
# 266 "data/maps/ErpCity/scripts.pory"
	emote_exclamation_mark
# 266 "data/maps/ErpCity/scripts.pory"
	face_up
	step_end

# 272 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_1:
# 272 "data/maps/ErpCity/scripts.pory"
	walk_down
# 272 "data/maps/ErpCity/scripts.pory"
	face_player
	step_end

# 288 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_2:
# 288 "data/maps/ErpCity/scripts.pory"
	walk_down
	step_end

# 289 "data/maps/ErpCity/scripts.pory"
ErpCity_Receive_Running_Shoes_Movement_3:
# 289 "data/maps/ErpCity/scripts.pory"
	walk_up
	step_end

ErpCity_Sign_Welcome_Text_0:
# 36 "data/maps/ErpCity/scripts.pory"
	.string "ERP TOWN\p"
	.string "Tranquil and peaceful.$"

ErpCity_Old_Man_Boekel_Text_0:
# 44 "data/maps/ErpCity/scripts.pory"
	.string "Some folks mock Erp for being small with\n"
	.string "just four houses, but at least we aren't\l"
	.string "Boekel!\p"
	.string "That place only has one house, occupied\n"
	.string "by a weird redhead who isn't even home\l"
	.string "half the time!$"

ErpCity_Woman_Text_0:
# 53 "data/maps/ErpCity/scripts.pory"
	.string "I traveled here from Mosa Town just to\n"
	.string "gaze at that lake over there!\p"
	.string "The water is so calm and clear it looks\n"
	.string "like a mirror.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_0:
# 72 "data/maps/ErpCity/scripts.pory"
	.string "PROF. BIRDS$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_1:
# 73 "data/maps/ErpCity/scripts.pory"
	.string "WHO DO YOU THINK YOU ARE?\n"
	.string "TAYLOR SWIFT OR SOMETHING?\p"
	.string "Actually.... I love Taylor Swift hehe..\n"
	.string "ANYWAYS!!\p"
	.string "I TOLD YOU TO NOT SNIFF AROUND IN MY\n"
	.string "SECRET LA... I MEAN STORAGE ROOM!!\p"
	.string "...YOU DIDN'T STEAL ANYTHING RIGHT?\n"
	.string "RIGHT??!!\p"
	.string "...It doesn't really matter anyways...\p"
	.string "YOU ARE FIRED!!\p"
	.string "I GOT MY SQUIRKY LITTLE INTERN CALLED\n"
	.string "BARRY ALREADY!\p"
	.string "HE IS LIVING THE DREAM!!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_2:
# 79 "data/maps/ErpCity/scripts.pory"
	.string "AM I RIGHT, BARRY?!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_3:
# 88 "data/maps/ErpCity/scripts.pory"
	.string ".....wait a second....\p"
	.string ".....maybe this little slob can help me to\n"
	.string "get some data...\p"
	.string "...that strange anomaly JACOB called\n"
	.string "about....\p"
	.string ".....yes a very good idea Jari, very\n"
	.string "smart....$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_4:
# 95 "data/maps/ErpCity/scripts.pory"
	.string ".....did I say that out loud?\p"
	.string "ARGH ANYWAYS! How about I rehire you\n"
	.string "again to become my data hoarder....\p"
	.string "JUNIOR RESEARCHER OFCOURSE! My\n"
	.string "beloved partner!\p"
	.string "For your first assignment I order you\n"
	.string "to...\p"
	.string "I MEAN I ask you to head to MASO TOWN,\n"
	.string "and visit my old friend JACOB.\p"
	.string "Apparently he has seen a rare pokemon\n"
	.string "species, an ANOMALY he said.\p"
	.string "He told me about a GOLDEN KING, the\n"
	.string "single most magnificent creature to\l"
	.string "sidle on this earth.\p"
	.string "Well I want you to go and SCAN that\n"
	.string "POKEMON with this genomic sequence.... I\l"
	.string "MEAN POKeDEX!!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_5:
# 101 "data/maps/ErpCity/scripts.pory"
	.string "You have received the Pokédex.$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_6:
# 106 "data/maps/ErpCity/scripts.pory"
	.string "This device can collect VITAL DATA ON\n"
	.string "POKEMON HABITATS, MIGRATION PATTERNS\l"
	.string "AND ...uh...\p"
	.string "...unique genomic signatures... for the\n"
	.string "pigs... you know...\p"
	.string "And this way I WILL EXTRACT ALL\n"
	.string "NECESSARY INFORMATION FOR MY\l"
	.string "BELOVED....\p"
	.string "...sensors for responsible pig farming...\p"
	.string "NOW GO, AND DON'T COME BACK BEFORE YOU\n"
	.string "HAVE SEQUENC...\p"
	.string "...scanned that rare Pokémon...\p"
	.string "...\p"
	.string "WHAT DO YOU MEAN... HOW?\p"
	.string "Just use Pokeballs, catch it and scan it\n"
	.string "after....\p"
	.string "A POKEMON RESEARCHER??? HAHAHA...\p"
	.string "...you got to be joking...\p"
	.string "HERE, CATCH THESE!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_7:
# 113 "data/maps/ErpCity/scripts.pory"
	.string "Throw these right at your... at its head,\n"
	.string "CATCH the ANOMALY and don't come back\l"
	.string "before...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_8:
# 126 "data/maps/ErpCity/scripts.pory"
	.string "BARRY$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_9:
# 127 "data/maps/ErpCity/scripts.pory"
	.string "HE BREAKS INTO YOUR LAB AND GETS A\n"
	.string "POKEDEX, POKEBALLS AND AN ACTUAL\l"
	.string "ASSIGNMENT?\p"
	.string "WHAT DID I GET?\p"
	.string "A FUCKING MAGIKARP?\p"
	.string "THE MOST USELESS POKEMON EVER IN\n"
	.string "EXISTENCE?\p"
	.string "I QUIT!!\p"
	.string "AND STOP SAYING BARRY!\p"
	.string "MY NAME IS W O U T E R!!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_10:
# 133 "data/maps/ErpCity/scripts.pory"
	.string "W O U T E R$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_11:
# 134 "data/maps/ErpCity/scripts.pory"
	.string "...\p"
	.string "YOU??\p"
	.string "BECOMING A POKEMON RESEARCHER?\p"
	.string "DON'T MAKE ME LAUGH.\p"
	.string "I WILL TAKE EVERY CHANCE TO PREVENT\n"
	.string "THAT FROM HAPPENING!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_12:
# 168 "data/maps/ErpCity/scripts.pory"
	.string "...I'd probably should search for\n"
	.string "another intern right now...$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_13:
# 176 "data/maps/ErpCity/scripts.pory"
	.string "Well, WHAT ARE YOU WAITING FOR!?\p"
	.string "I want that data TODAY!\p"
	.string "This could be the perfect start to my\n"
	.string "genome triangul... I MEAN PIG SENSOR\l"
	.string "DEVELOPMENT!\p"
	.string "AND STAY AWAY FROM MISPOES...\p"
	.string "He doesn't like me...\p"
	.string "I MEAN YOU OFCOURSE!!\p"
	.string "...\p"
	.string "...so I was shouting the entire time?\p"
	.string "WHO CARES!\p"
	.string "NOW FUCK OFF!$"

ErpCity_ProfessorBirds_Speech_Pokedex_Text_14:
# 196 "data/maps/ErpCity/scripts.pory"
	.string "...I think it is safe to come out now,\n"
	.string "lets get out of here!$"

ErpCity_ProfessorBirds_After_Speech_Text_0:
# 205 "data/maps/ErpCity/scripts.pory"
	.string "Well, what are you waiting for?\p"
	.string "Get that data for me... I MEAN US.$"

ErpCity_Mispoes_Miauw_Text_0:
# 213 "data/maps/ErpCity/scripts.pory"
	.string "MISSSS....POESSSSSSS....$"

ErpCity_Lab_Sign_Text_0:
# 220 "data/maps/ErpCity/scripts.pory"
	.string "Professor Birds's Lab$"

ErpCity_Hiker_Cave_Text_0:
# 230 "data/maps/ErpCity/scripts.pory"
	.string "The cave is not accessible at this time.\p"
	.string "Recent tremors from a unknown source\n"
	.string "have caused massive rock slides.\p"
	.string "The path is too dangerous.$"

ErpCity_Cave_Sign_Text_0:
# 237 "data/maps/ErpCity/scripts.pory"
	.string "A large map with a labyrint of routes\n"
	.string "going through the cave.\p"
	.string "Most of them are crossed out.$"

ErpCity_Trigger_Stopplayer_Text_0:
# 244 "data/maps/ErpCity/scripts.pory"
	.string "Wandering without any pokemon might be\n"
	.string "dangerous....$"

ErpCity_Trigger_Stopplayer2_Text_0:
# 256 "data/maps/ErpCity/scripts.pory"
	.string "Mom said the lab was up north I think...$"

ErpCity_Receive_Running_Shoes_Text_0:
# 274 "data/maps/ErpCity/scripts.pory"
	.string "MOM$"

ErpCity_Receive_Running_Shoes_Text_1:
# 275 "data/maps/ErpCity/scripts.pory"
	.string "Honey, I almost forgot!\p"
	.string "If you want to make an impression on\n"
	.string "the professor you should wear some\l"
	.string "different shoes.\p"
	.string "As a surprise I've bought a new pair for\n"
	.string "you!$"

ErpCity_Receive_Running_Shoes_Text_2:
# 280 "data/maps/ErpCity/scripts.pory"
	.string "You have received running shoes from\n"
	.string "Mom.$"

ErpCity_Receive_Running_Shoes_Text_3:
# 283 "data/maps/ErpCity/scripts.pory"
	.string "Now if you press your 'B muscle' while\n"
	.string "moving, you will sprint!$"

ErpCity_Receive_Running_Shoes_Text_4:
# 286 "data/maps/ErpCity/scripts.pory"
	.string "Look at you, all nice and shiny.\p"
	.string "Say hello to the professor for me.\p"
	.string "The lab is up the hill, north from here.\p"
	.string "Have fun!$"

ErpCity_Receive_Running_Shoes_Text_5:
# 302 "data/maps/ErpCity/scripts.pory"
	.string "Better get to the lab, Mom probably\n"
	.string "won't let me in if I don't try.$"

ErpCity_Sign_Mailbox_ProfBirds_Text_0:
# 313 "data/maps/ErpCity/scripts.pory"
	.string "This mailbox seems to be filled to the\n"
	.string "brim, somebody should clean this thing\l"
	.string "out.$"

ErpCity_Sign_Mailbox_Starthouse_Text_0:
# 320 "data/maps/ErpCity/scripts.pory"
	.string "Home.$"

ErpCity_Sign_Mailbox_BarryHouse_Text_0:
# 327 "data/maps/ErpCity/scripts.pory"
	.string "Family Stonebakers's house.$"

ErpCity_Sign_Mailbox_JanVogels_Text_0:
# 334 "data/maps/ErpCity/scripts.pory"
	.string "Family Birds's house.$"

OldMiner_Sjeng_Reminisce_Text_0:
# 342 "data/maps/ErpCity/scripts.pory"
	.string "Fifty years ago, this town was just\n"
	.string "river and rock.\p"
	.string "Then a wild Meowth dug up a nugget of\n"
	.string "gold deep in the mountains.\p"
	.string "Folks rushed in from everywhere. They\n"
	.string "laid these tracks and built this\l"
	.string "station.\p"
	.string "But in the end, nobody found much more\n"
	.string "than that one nugget.\p"
	.string "The rush died, the trains stopped\n"
	.string "coming, and I'm still waiting on one that\l"
	.string "won't arrive.\p"
	.string "Some routes still run up toward the\n"
	.string "mountain, though.\p"
	.string "Only battle-hardened trainers and\n"
	.string "folks who know their bushcraft make it\l"
	.string "past the treeline.$"
