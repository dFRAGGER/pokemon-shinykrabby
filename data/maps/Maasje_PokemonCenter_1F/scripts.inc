Maasje_PokemonCenter_1F_MapScripts::
# 2 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Maasje_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Maasje_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Maasje_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	call Maasje_PokemonCenter_1F_OnTransition
	return

Maasje_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 6 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	call CableClub_OnResume
	return


Maasje_PokemonCenter_1F_OnTransition::
# 11 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MAASJE
	end


Maasje_PokemonCenter_1F_EventScript_Nurse::
# 16 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_MAASJE_NURSE
# 17 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 18 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	waitmessage
# 19 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 20 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	release
	end


Maasje_PokemonCenter_1F_Second_Nurse::
# 26 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	lock
# 27 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Second_Nurse_Movement_0
# 28 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	msgbox Maasje_PokemonCenter_1F_Second_Nurse_Text_0
# 29 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	waitmessage
# 30 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Second_Nurse_Movement_1
# 31 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	release
	return


Maasje_Krabby_Cry_1F_Pokecenter::
# 35 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_KRABBY, CRY_MODE_NORMAL
	return


Maasje_PokemonCenter_1F_Bryan_Trigger0::
# 39 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	lock
# 40 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	setvar VAR_BRYAN_POSITION, 1
# 41 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_DISABLE_FOLLOWER_POKEMON
# 42 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 43 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_0
# 44 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	delay 60
# 45 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_1
# 46 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	msgbox Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_0
# 47 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	waitmessage
# 48 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	release
	return


Maasje_PokemonCenter_1F_Bryan_Trigger1::
# 52 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	lock
# 53 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	setvar VAR_BRYAN_POSITION, 1
# 54 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_DISABLE_FOLLOWER_POKEMON
# 55 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 56 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_0
# 57 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	delay 60
# 58 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger1_Movement_0
# 59 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	msgbox Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_0
# 60 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	waitmessage
# 61 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	release
	return


Maasje_PokemonCenter_1F_Bryan_Trigger2::
# 65 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	lock
# 66 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	setvar VAR_BRYAN_POSITION, 1
# 67 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_DISABLE_FOLLOWER_POKEMON
# 68 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 69 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_0
# 70 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	delay 60
# 71 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger2_Movement_0
# 72 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	msgbox Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_0
# 73 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	waitmessage
# 74 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	release
	return


Maasje_PokemonCenter_1F_Bryan_Trigger3::
# 78 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	lock
# 79 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	setvar VAR_BRYAN_POSITION, 1
# 80 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_DISABLE_FOLLOWER_POKEMON
# 81 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 82 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_0
# 83 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	delay 60
# 84 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger3_Movement_0
# 85 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	msgbox Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_0
# 86 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	waitmessage
# 87 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	release
	return


Maasje_PokemonCenter_1F_Bryan_Following::
# 91 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	lock
# 92 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 93 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Following_Movement_0
# 94 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	delay 40
# 95 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	msgbox Maasje_PokemonCenter_1F_Bryan_Following_Text_0
# 96 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	waitmessage
# 97 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	release
	return


Maasje_PokemonCenter_1F_Man::
# 101 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	lock
# 102 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	faceplayer
# 103 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	msgbox Maasje_PokemonCenter_1F_Man_Text_0
# 104 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	waitmessage
# 105 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	release
	return


# 27 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
Maasje_PokemonCenter_1F_Second_Nurse_Movement_0:
# 27 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	face_player
	step_end

# 30 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
Maasje_PokemonCenter_1F_Second_Nurse_Movement_1:
# 30 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	face_left
	step_end

# 43 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_0:
# 43 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 45 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_1:
# 45 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	walk_fast_left
# 45 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	walk_fast_left
# 45 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	walk_fast_left
# 45 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	walk_fast_left
# 45 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	walk_fast_down
	step_end

# 58 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
Maasje_PokemonCenter_1F_Bryan_Trigger1_Movement_0:
# 58 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	walk_fast_left
# 58 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	walk_fast_left
# 58 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	walk_fast_left
# 58 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	face_down
	step_end

# 71 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
Maasje_PokemonCenter_1F_Bryan_Trigger2_Movement_0:
# 71 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	walk_fast_left
# 71 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	face_down
	step_end

# 84 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
Maasje_PokemonCenter_1F_Bryan_Trigger3_Movement_0:
# 84 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	walk_fast_down
	step_end

# 93 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
Maasje_PokemonCenter_1F_Bryan_Following_Movement_0:
# 93 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	emote_question_mark
# 93 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	face_player
	step_end

Maasje_PokemonCenter_1F_Second_Nurse_Text_0:
# 28 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	.string "We found this Krabby on the beach a\n"
	.string "couple of days ago.\p"
	.string "He was very confused and kept making\n"
	.string "strange noises.\p"
	.string "He is getting better now.$"

Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_0:
# 46 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	.string "Hi, my name is Bryan.\p"
	.string "I'd like to film everything, absolutely\n"
	.string "everything.\p"
	.string "Can I film your journey towards\n"
	.string "becoming a pokemon master?\p"
	.string "..... What? No?\p"
	.string "Just don't mind me, act like you don't\n"
	.string "see me.\p"
	.string "$"

Maasje_PokemonCenter_1F_Bryan_Following_Text_0:
# 95 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	.string "Are you talking to me?\p"
	.string "I'm not even here, don't worry!\p"
	.string "I'll send you the footage on DVD!$"

Maasje_PokemonCenter_1F_Man_Text_0:
# 103 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	.string "Back in the day the gym leader, Pete\n"
	.string "Longfellow, was my geography teacher.\p"
	.string "He quit his old job because one of\n"
	.string "students started to imitate his quirks.\p"
	.string "I forgot the real name of the student,\n"
	.string "but everybody called him J.T.B..$"
