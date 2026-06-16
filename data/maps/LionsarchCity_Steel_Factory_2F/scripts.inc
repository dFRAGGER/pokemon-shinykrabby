LionsarchCity_Steel_Factory_2F_MapScripts::
	.byte 0


SteelFactory_2F_Scientist_Battle1::
# 6 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_2F_SCIENTIST_1, SteelFactory_2F_Scientist1_Intro, SteelFactory_2F_Scientist1_Defeat
# 7 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Scientist1_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_2F_Grunt_Battle::
# 12 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_2F_GRUNT, SteelFactory_2F_Grunt_Intro, SteelFactory_2F_Grunt_Defeat
# 13 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Grunt_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_2F_Scientist_Battle2::
# 18 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	trainerbattle_single TRAINER_FACULTY_2F_SCIENTIST_2, SteelFactory_2F_Scientist2_Intro, SteelFactory_2F_Scientist2_Defeat
# 19 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Scientist2_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_2F_Scientist_Lore1::
# 62 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	lockall
# 63 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	faceplayer
# 64 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Scientist_Lore1_Text
# 65 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	releaseall
	return


SteelFactory_2F_Rector_Fallback::
# 75 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	lockall
# 76 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 77 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	compare VAR_TEMP_2, 8
	goto_if_eq SteelFactory_2F_Rector_Fallback_3
SteelFactory_2F_Rector_Fallback_1:
# 81 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	compare VAR_TEMP_2, 9
	goto_if_eq SteelFactory_2F_Rector_Fallback_8
SteelFactory_2F_Rector_Fallback_6:
# 85 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	compare VAR_TEMP_2, 8
	goto_if_eq SteelFactory_2F_Rector_Fallback_13
SteelFactory_2F_Rector_Fallback_11:
# 89 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	faceplayer
# 90 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_RECTOR_DEFEATED, SteelFactory_2F_Rector_Fallback_17
# 98 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_RECTOR_CUTSCENE_TRIGGERED, SteelFactory_2F_Rector_Fallback_20
# 108 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	releaseall
	end

SteelFactory_2F_Rector_Fallback_2:
# 78 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_2F_Rector_Fallback_Movement_0
# 79 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmovement
	goto SteelFactory_2F_Rector_Fallback_1

SteelFactory_2F_Rector_Fallback_3:
# 77 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	compare VAR_TEMP_3, 21
	goto_if_eq SteelFactory_2F_Rector_Fallback_2
	goto SteelFactory_2F_Rector_Fallback_1

SteelFactory_2F_Rector_Fallback_7:
# 82 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_2F_Rector_Fallback_Movement_1
# 83 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmovement
	goto SteelFactory_2F_Rector_Fallback_6

SteelFactory_2F_Rector_Fallback_8:
# 81 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	compare VAR_TEMP_3, 22
	goto_if_eq SteelFactory_2F_Rector_Fallback_7
	goto SteelFactory_2F_Rector_Fallback_6

SteelFactory_2F_Rector_Fallback_12:
# 86 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_2F_Rector_Fallback_Movement_2
# 87 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmovement
	goto SteelFactory_2F_Rector_Fallback_11

SteelFactory_2F_Rector_Fallback_13:
# 85 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	compare VAR_TEMP_3, 23
	goto_if_eq SteelFactory_2F_Rector_Fallback_12
	goto SteelFactory_2F_Rector_Fallback_11

SteelFactory_2F_Rector_Fallback_17:
# 91 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Fallback_Text_0
# 92 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_After
# 93 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 94 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker NULL
# 95 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	releaseall
	end

SteelFactory_2F_Rector_Fallback_20:
# 99 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Fallback_Text_0
# 100 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_WaitingLine
# 101 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 102 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker NULL
# 103 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_FACULTY_RECTOR, SteelFactory_2F_Rector_BattleDefeat
# 104 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	call SteelFactory_2F_Rector_Defeated
# 105 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	releaseall
	end


SteelFactory_2F_OverhearCutscene::
# 115 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_RECTOR_DEFEATED, SteelFactory_2F_OverhearCutscene_2
# 116 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_RECTOR_CUTSCENE_TRIGGERED, SteelFactory_2F_OverhearCutscene_5
# 117 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setflag FLAG_STEEL_FACTORY_RECTOR_CUTSCENE_TRIGGERED
# 118 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 119 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	lockall
# 120 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 121 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq SteelFactory_2F_OverhearCutscene_9
SteelFactory_2F_OverhearCutscene_7:
# 125 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	special SpawnCameraObject
# 126 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SteelFactory_2F_OverhearCutscene_Movement_1
# 127 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmovement
# 130 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Fallback_Text_0
# 131 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_OpensMeeting
# 132 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 135 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 8, SteelFactory_2F_OverhearCutscene_Movement_2
# 136 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	goto_if_set FLAG_STEEL_FACTORY_FREED_POKEMON, SteelFactory_2F_OverhearCutscene_13
# 141 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_OverhearCutscene_Text_0
# 142 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Conrector_LaironsGood, MSGBOX_AUTOCLOSE
# 143 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
SteelFactory_2F_OverhearCutscene_12:
# 145 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 8, SteelFactory_2F_OverhearCutscene_Movement_3
# 146 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	delay 60
# 149 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 2, SteelFactory_2F_OverhearCutscene_Movement_2
# 150 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Fallback_Text_0
# 151 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_ShockSuggestion, MSGBOX_AUTOCLOSE
# 152 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 153 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	playse SE_PIN
# 154 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 2, SteelFactory_2F_OverhearCutscene_Movement_4
# 155 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	delay 120
# 158 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 2, SteelFactory_2F_OverhearCutscene_Movement_5
# 159 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_OverhearCutscene_Text_1
# 160 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Barry_ShockDecline, MSGBOX_AUTOCLOSE
# 161 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 162 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	delay 60
# 165 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_OverhearCutscene_Text_1
# 166 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Barry_MiningReport, MSGBOX_AUTOCLOSE
# 167 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 170 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker NULL
# 171 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SteelFactory_2F_OverhearCutscene_Movement_6
# 172 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmovement
# 173 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	special RemoveCameraObject
# 174 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SteelFactory_2F_OverhearCutscene_Movement_7
# 175 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmovement
# 176 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	playse SE_PIN
# 177 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 1, SteelFactory_2F_OverhearCutscene_Movement_8
# 178 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 2, SteelFactory_2F_OverhearCutscene_Movement_9
# 179 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 8, SteelFactory_2F_OverhearCutscene_Movement_8
# 183 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Fallback_Text_0
# 184 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_Recognises, MSGBOX_AUTOCLOSE
# 185 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 186 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	playse SE_FAILURE
# 187 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 1, SteelFactory_2F_OverhearCutscene_Movement_10
# 188 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 8, SteelFactory_2F_OverhearCutscene_Movement_11
# 189 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Fallback_Text_0
# 190 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_TurnsOnConrector, MSGBOX_AUTOCLOSE
# 191 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 192 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 2, SteelFactory_2F_OverhearCutscene_Movement_5
# 193 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Fallback_Text_0
# 194 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_AngryOrders, MSGBOX_AUTOCLOSE
# 195 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 198 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 8, SteelFactory_2F_OverhearCutscene_Movement_12
# 199 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_2F_OverhearCutscene_Movement_13
# 200 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 2, SteelFactory_2F_OverhearCutscene_Movement_14
# 201 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 10, SteelFactory_2F_OverhearCutscene_Movement_15
# 202 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmovement
# 203 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 2, SteelFactory_2F_OverhearCutscene_Movement_16
# 204 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmovement
# 205 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_OverhearCutscene_Text_1
# 206 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_OverhearCutscene_Text_2, MSGBOX_AUTOCLOSE
# 207 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 208 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 2, SteelFactory_2F_OverhearCutscene_Movement_17
# 209 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 10, SteelFactory_2F_OverhearCutscene_Movement_18
# 210 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmovement 10
# 211 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	removeobject 2
# 212 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	removeobject 8
# 213 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	removeobject 10
# 214 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 7, SteelFactory_2F_OverhearCutscene_Movement_19
# 215 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 1, SteelFactory_2F_OverhearCutscene_Movement_20
# 216 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_2F_Rector_Fallback_Movement_1
# 217 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	delay 60
# 218 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_2F_OverhearCutscene_Movement_21
# 219 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmovement
# 222 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Fallback_Text_0
# 223 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_BattleChallenge
# 224 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 225 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker NULL
# 226 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	clearflag FLAG_HIDE_RECTOR_ELECTABUZZ_AFTER_BATTLE
# 227 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_FACULTY_RECTOR, SteelFactory_2F_Rector_BattleDefeat
# 228 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	call SteelFactory_2F_Rector_Defeated
	end

SteelFactory_2F_OverhearCutscene_2:
	end

SteelFactory_2F_OverhearCutscene_5:
	end

SteelFactory_2F_OverhearCutscene_8:
# 122 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_2F_OverhearCutscene_Movement_0
# 123 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmovement
	goto SteelFactory_2F_OverhearCutscene_7

SteelFactory_2F_OverhearCutscene_9:
# 121 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	compare VAR_TEMP_2, 16
	goto_if_eq SteelFactory_2F_OverhearCutscene_8
	goto SteelFactory_2F_OverhearCutscene_7

SteelFactory_2F_OverhearCutscene_13:
# 137 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_OverhearCutscene_Text_0
# 138 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Conrector_LaironsFreed, MSGBOX_AUTOCLOSE
# 139 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
	goto SteelFactory_2F_OverhearCutscene_12


SteelFactory_2F_Rector_Defeated::
# 235 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Fallback_Text_0
# 236 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_DefeatedText1
# 237 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 238 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker SteelFactory_2F_Rector_Fallback_Text_0
# 239 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Rector_DefeatedText2, MSGBOX_AUTOCLOSE
# 240 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmessage
# 241 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setspeaker NULL
# 242 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 7, SteelFactory_2F_Rector_Defeated_Movement_0
# 243 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 12, SteelFactory_2F_Rector_Defeated_Movement_0
# 244 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmovement 7
# 245 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmovement 12
# 246 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setflag FLAG_HIDE_RECTOR_ELECTABUZZ_AFTER_BATTLE
# 247 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 11, SteelFactory_2F_Rector_Defeated_Movement_1
# 248 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement 1, SteelFactory_2F_Rector_Defeated_Movement_1
# 249 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmovement 11
# 250 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmovement 1
# 251 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	removeobject 11
# 252 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	removeobject 12
# 253 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	removeobject 7
# 254 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	removeobject 1
# 255 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setflag FLAG_STEEL_FACTORY_RECTOR_DEFEATED
# 256 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setflag FLAG_STEEL_FACTORY_COMPLETE
# 257 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	clearflag FLAG_HIDE_LIONSARCH_RECTOR_SENDOFF
# 258 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	clearflag FLAG_HIDE_LIONSARCH_BARRY_SENDOFF
# 259 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	clearflag FLAG_HIDE_LIONSARCH_CONRECTOR_SENDOFF
# 260 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	delay 30
# 261 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	applymovement LOCALID_PLAYER, SteelFactory_2F_Rector_Defeated_Movement_1
# 262 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	waitmovement
# 263 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	playse SE_SLIDING_DOOR
# 264 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	setvar VAR_LIONSARCH_CITY_STATE, 1
# 265 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	warpsilent MAP_LIONSARCH_CITY, 10
# 266 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	releaseall
	end


SteelFactory_2F_PC_Research::
# 343 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	lock
# 344 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_PC_Research_Text
# 345 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	release
	return


SteelFactory_2F_PC_Logistics::
# 349 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	lock
# 350 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_PC_Logistics_Text
# 351 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	release
	return


SteelFactory_2F_PC_Locked::
# 355 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	lock
# 356 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_PC_Locked_Text
# 357 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	release
	return


SteelFactory_2F_Blueprint_Materials::
# 361 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	lock
# 362 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Blueprint_Materials_Text
# 363 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	release
	return


SteelFactory_2F_Blueprint_Assembly::
# 367 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	lock
# 368 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Blueprint_Assembly_Text
# 369 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	release
	return


SteelFactory_2F_Blueprint_RockSmash::
# 393 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	lock
# 394 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	msgbox SteelFactory_2F_Blueprint_RockSmash_Text
# 395 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	release
	return


# 78 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_Rector_Fallback_Movement_0:
# 78 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_right
# 78 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 78 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	face_left
	step_end

# 82 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_Rector_Fallback_Movement_1:
# 82 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	face_left
	step_end

# 86 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_Rector_Fallback_Movement_2:
# 86 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_right
# 86 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_up
# 86 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	face_left
	step_end

# 122 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_0:
# 122 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_right
# 122 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	face_down
	step_end

# 126 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_1:
# 126 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 126 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 126 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 126 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 126 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 126 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 126 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_left
# 126 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_left
# 126 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_left
# 126 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_left
# 126 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_left
	step_end

# 135 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_2:
# 135 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_up
	step_end

# 145 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_3:
# 145 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 145 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	face_up
	step_end

# 154 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_4:
# 154 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	face_down
# 154 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	emote_question_mark
	step_end

# 158 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_5:
# 158 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	face_up
	step_end

# 171 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_6:
# 171 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_right
# 171 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_right
# 171 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_right
# 171 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_right
# 171 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_right
# 171 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_up
# 171 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_up
# 171 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_up
# 171 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_up
# 171 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_up
# 171 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_up
	step_end

# 174 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_7:
# 174 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 174 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 174 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 174 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 174 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 174 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_left
# 174 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_left
	step_end

# 177 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_8:
# 177 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	face_right
# 177 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	emote_question_mark
	step_end

# 178 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_9:
# 178 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	face_right
# 178 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 187 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_10:
# 187 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	face_down
# 187 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	emote_x
	step_end

# 188 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_11:
# 188 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	face_up
# 188 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	emote_exclamation_mark
	step_end

# 198 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_12:
# 198 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_right
# 198 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_right
# 198 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_right
# 198 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_down
# 198 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_right
# 198 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_right
# 198 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 198 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 198 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 198 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 198 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 198 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 198 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 198 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 198 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 198 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
	step_end

# 199 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_13:
# 199 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	face_down
# 199 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	lock_facing_direction
# 199 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	jump_up
# 199 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	unlock_facing_direction
	step_end

# 200 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_14:
# 200 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_right
# 200 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_right
# 200 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_right
# 200 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_right
# 200 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_right
# 200 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_right
# 200 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 200 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 200 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 200 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 200 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 200 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 200 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 200 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 200 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 200 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
	step_end

# 201 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_15:
# 201 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	jump_2_up
# 201 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	jump_2_right
# 201 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	jump_2_right
# 201 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	jump_2_right
# 201 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	jump_right
# 201 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	jump_2_up
# 201 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	jump_2_up
	step_end

# 203 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_16:
# 203 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_down
# 203 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_down
# 203 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_down
# 203 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_down
# 203 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_down
	step_end

# 208 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_17:
# 208 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 208 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 208 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
# 208 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_fast_up
	step_end

# 209 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_18:
# 209 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	jump_2_up
# 209 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	jump_2_up
# 209 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	jump_2_up
# 209 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	jump_2_up
	step_end

# 214 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_19:
# 214 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 214 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 214 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_right
# 214 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 214 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_right
	step_end

# 215 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_20:
# 215 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_left
# 215 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_left
# 215 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_left
# 215 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 215 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 215 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 215 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_right
# 215 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_right
	step_end

# 218 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_OverhearCutscene_Movement_21:
# 218 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 218 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 218 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_left
# 218 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_left
# 218 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_left
	step_end

# 242 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_Rector_Defeated_Movement_0:
# 242 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	enter_pokeball
	step_end

# 247 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
SteelFactory_2F_Rector_Defeated_Movement_1:
# 247 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
# 247 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	walk_down
	step_end

SteelFactory_2F_Rector_Fallback_Text_0:
# 91 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "The Rector$"

SteelFactory_2F_OverhearCutscene_Text_0:
# 137 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "The Conrector$"

SteelFactory_2F_OverhearCutscene_Text_1:
# 159 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Barry$"

SteelFactory_2F_OverhearCutscene_Text_2:
# 206 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Come on you stupid fish, let's get out\n"
	.string "of here!$"

SteelFactory_2F_Scientist1_Intro::
# 23 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "You've made it this far?\p"
	.string "The Rector will hear about this\n"
	.string "intrusion.$"

SteelFactory_2F_Scientist1_Defeat::
# 27 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Impossible.\p"
	.string "My calculations were... flawless.$"

SteelFactory_2F_Scientist1_PostBattle::
# 31 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Keep moving.\p"
	.string "You've already disrupted weeks of\n"
	.string "research.$"

SteelFactory_2F_Grunt_Intro::
# 35 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Nobody gets past this floor without\n"
	.string "Faculty clearance.\p"
	.string "That means you.$"

SteelFactory_2F_Grunt_Defeat::
# 39 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "How...?\p"
	.string "You're just a kid!$"

SteelFactory_2F_Grunt_PostBattle::
# 43 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "The Rector's going to hear about every\n"
	.string "single one of you.$"

SteelFactory_2F_Scientist2_Intro::
# 47 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Turn around.\p"
	.string "This floor is restricted.\p"
	.string "I won't ask twice.$"

SteelFactory_2F_Scientist2_Defeat::
# 51 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "My containment protocol...\p"
	.string "It failed.$"

SteelFactory_2F_Scientist2_PostBattle::
# 55 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "You'll regret reaching The Rector.$"

SteelFactory_2F_Scientist_Lore1_Text::
# 68 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "This floor handles Faculty\n"
	.string "coordination.\p"
	.string "The Rector reviews all field reports\n"
	.string "personally.\p"
	.string "We don't get many... visitors.$"

SteelFactory_2F_Rector_WaitingLine::
# 272 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "So you came back? I was hoping you\n"
	.string "would.$"

SteelFactory_2F_Rector_After::
# 276 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "The Faculty endures.\p"
	.string "This was one facility.\p"
	.string "There are others.$"

SteelFactory_2F_Rector_OpensMeeting::
# 280 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Looks like the iron processing is ahead\n"
	.string "of schedule.\p"
	.string "You've both performed adequately this\n"
	.string "quarter, the yield figures are\l"
	.string "impressive.\p"
	.string "To make a long story short: Order wins,\n"
	.string "chaos loses.$"

SteelFactory_2F_Conrector_LaironsFreed::
# 284 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Indeed, the processing yield was\n"
	.string "exceptional, sir.\p"
	.string "There was one small hiccup with the\n"
	.string "Lairon containment unit this morning,\l"
	.string "but I managed the issue, no problems at\l"
	.string "all sir.\p"
	.string "You see, the specimens had become\n"
	.string "unreliable. Diminishing returns. Worn\l"
	.string "teeth. Stress fractures.\p"
	.string "I made the executive call to release\n"
	.string "them before the voyage.\p"
	.string "Not worth shipping livestock that can't\n"
	.string "perform. Absolutely nothing to worry\l"
	.string "about, sir.$"

SteelFactory_2F_Conrector_LaironsGood::
# 288 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Processing is complete, sir. Excellent\n"
	.string "yield.\p"
	.string "The Lairon unit consumed all\n"
	.string "impurity-heavy ore as intended.\p"
	.string "Only the highest-grade iron remains.\p"
	.string "One little Aron escaped this morning,\n"
	.string "but we managed to contain it.\p"
	.string "I've arranged for the specimens to be\n"
	.string "loaded onto the transport vessels in\l"
	.string "any moment.$"

SteelFactory_2F_Rector_ShockSuggestion::
# 292 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "How about you Barr.. Wouter?\p"
	.string "I notice your Magikarp is still not\n"
	.string "giving you any value?\p"
	.string "When my pokemon don't contribute, I let\n"
	.string "my Electabuzz handle them.\p"
	.string "A good shock now and then makes\n"
	.string "expectations very clear.\p"
	.string "Maybe Electabuzz could help you out\n"
	.string "with that?$"

SteelFactory_2F_Barry_ShockDecline::
# 296 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "I... appreciate the suggestion, sir.\p"
	.string "But Magikarp are quite sensitive to\n"
	.string "electricity. Apparently it discolors\l"
	.string "their scales.\p"
	.string "I wouldn't want to damage the...\n"
	.string "specimen quality.\p"
	.string "...That would be irresponsible.$"

SteelFactory_2F_Barry_MiningReport::
# 300 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "The mining operation hit every target,\n"
	.string "sir.\p"
	.string "We did have a brief evacuation. A\n"
	.string "civilian wandered into the tunnels.\p"
	.string "I handled it personally. Pushed them\n"
	.string "into a deep dark crevice.\p"
	.string "Hazard of the mine, really. Nothing\n"
	.string "special.$"

SteelFactory_2F_Rector_Recognises::
# 304 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "...You?\p"
	.string "What are you doing here?\p"
	.string "...\p"
	.string "Wait... you're the one who tried to stop\n"
	.string "us in the Cloud Forest as well?\p"
	.string "You just don't know when to quit, do\n"
	.string "you?\p"
	.string "$"

SteelFactory_2F_Rector_TurnsOnConrector::
# 308 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "And the Lairon.\p"
	.string "'Stress fractures'\p"
	.string "'Diminishing returns.'\p"
	.string "How convenient.$"

SteelFactory_2F_Rector_AngryOrders::
# 312 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Load the boats.\p"
	.string "Both of you. NOW. I want neither of you\n"
	.string "on this floor when I am finished.$"

SteelFactory_2F_Rector_BattleChallenge::
# 316 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "You've become quite the nuisance.\p"
	.string "First the Cloud Forest, now our\n"
	.string "factory?\p"
	.string "You would be a great student of mine.$"

SteelFactory_2F_Rector_BattleIntro::
# 320 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "Show me what you are capable of. I will\n"
	.string "not hold back.$"

SteelFactory_2F_Rector_BattleDefeat::
# 324 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "...$"

SteelFactory_2F_Rector_DefeatedText1::
# 328 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "...\p"
	.string "...How.$"

SteelFactory_2F_Rector_DefeatedText2::
# 332 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "This changes nothing.\p"
	.string "The Faculty's reach goes further than\n"
	.string "this building.\p"
	.string "Far further.\p"
	.string "Follow me.$"

SteelFactory_2F_Barry_After::
# 336 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "The Rector is behind that door.\p"
	.string "He's not going to run. He never does.$"

SteelFactory_2F_PC_Research_Text::
# 372 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "FACULTY INTERNAL - CYCLE 14 SUMMARY\p"
	.string "- Output targets exceeded by 12%%.\p"
	.string "Specimen endurance remains within\n"
	.string "acceptable range.\p"
	.string "Note: biological variance in batch 7\n"
	.string "requires monitoring.\p"
	.string "Rector review pending. -$"

SteelFactory_2F_PC_Logistics_Text::
# 376 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "TRANSPORT MANIFEST - PENDING\n"
	.string "DISPATCH\p"
	.string "- Three shipments awaiting clearance.\p"
	.string "Contents: processed material, grade A.\p"
	.string "Destination: redacted.\p"
	.string "Estimated transit: 4 days by sea.\p"
	.string "All documentation has been filed under\n"
	.string "Rector authorization. -$"

SteelFactory_2F_PC_Locked_Text::
# 380 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "FACULTY ACCESS ONLY\p"
	.string "This terminal is locked.\p"
	.string "You cannot interact with it.$"

SteelFactory_2F_Blueprint_Materials_Text::
# 384 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "COMPONENT SPECIFICATION - DRAFT 9\p"
	.string "- Primary substrate: high-density ore,\n"
	.string "origin Lions Mountains.\p"
	.string "Secondary binding agent: unspecified\n"
	.string "biological compound, sourced on-site.\p"
	.string "Alloy stability under sustained\n"
	.string "resonance: 94%%.\p"
	.string "Warning: do not substitute substrate\n"
	.string "without Rector approval. -$"

SteelFactory_2F_Blueprint_Assembly_Text::
# 388 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "ASSEMBLY PHASE - STRUCTURAL OVERVIEW\p"
	.string "- Layer configuration classified. See\n"
	.string "Rector annex.\p"
	.string "Core channel dimensions have been\n"
	.string "adjusted per Cycle 11 findings.\p"
	.string "Note from lead researcher: the material\n"
	.string "responds differently than anticipated.\p"
	.string "Further testing required before full\n"
	.string "production begins. -$"

SteelFactory_2F_Blueprint_RockSmash_Text::
# 398 "data/maps/LionsarchCity_Steel_Factory_2F/scripts.pory"
	.string "FIELD OBSERVATION - MINING DIVISION\p"
	.string "- During extraction operations in the\n"
	.string "lower ore deposits, repeated\l"
	.string "application of concentrated force\l"
	.string "against the rock face produced a\l"
	.string "consistent fracture response.\p"
	.string "Pokemon involved in the drilling\n"
	.string "process began replicating the motion\l"
	.string "instinctively.\p"
	.string "The technique has been documented and\n"
	.string "encoded.\p"
	.string "See attached disc for move data: ROCK\n"
	.string "SMASH. -$"
