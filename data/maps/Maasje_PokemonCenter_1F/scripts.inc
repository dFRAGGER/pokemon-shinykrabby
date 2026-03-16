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
# 12 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	setflag FLAG_DISABLE_FOLLOWER_POKEMON
	end


Maasje_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_MAASJE_NURSE
# 18 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 19 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	setflag FLAG_DISABLE_FOLLOWER_POKEMON
# 20 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	callnative UpdateFollowingPokemon
# 21 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	waitmessage
# 22 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 23 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	release
	end


Maasje_PokemonCenter_1F_Second_Nurse::
# 28 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	lock
# 29 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Second_Nurse_Movement_0
# 30 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	msgbox Maasje_PokemonCenter_1F_Second_Nurse_Text_0
# 31 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	waitmessage
# 32 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Second_Nurse_Movement_1
# 33 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	release
	return


Maasje_Krabby_Cry_1F_Pokecenter::
# 37 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_KRABBY, CRY_MODE_NORMAL
	return


Maasje_PokemonCenter_1F_Bryan_Trigger0::
# 41 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	lock
# 42 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	setvar VAR_BRYAN_POSITION, 1
# 43 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_DISABLE_FOLLOWER_POKEMON
# 44 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 45 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_0
# 46 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	delay 60
# 47 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_1
# 48 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	setspeaker Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_0
# 49 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	msgbox Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_1, MSGBOX_AUTOCLOSE
# 50 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	waitmessage
# 51 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	release
	return


Maasje_PokemonCenter_1F_Bryan_Trigger1::
# 55 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	lock
# 56 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	setvar VAR_BRYAN_POSITION, 1
# 57 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_DISABLE_FOLLOWER_POKEMON
# 58 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 59 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_0
# 60 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	delay 60
# 61 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger1_Movement_0
# 62 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	setspeaker Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_0
# 63 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	msgbox Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_1, MSGBOX_AUTOCLOSE
# 64 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	waitmessage
# 65 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	release
	return


Maasje_PokemonCenter_1F_Bryan_Trigger2::
# 69 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	lock
# 70 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	setvar VAR_BRYAN_POSITION, 1
# 71 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_DISABLE_FOLLOWER_POKEMON
# 72 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 73 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_0
# 74 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	delay 60
# 75 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger2_Movement_0
# 76 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	setspeaker Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_0
# 77 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	msgbox Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_1, MSGBOX_AUTOCLOSE
# 78 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	waitmessage
# 79 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	release
	return


Maasje_PokemonCenter_1F_Bryan_Trigger3::
# 83 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	lock
# 84 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	setvar VAR_BRYAN_POSITION, 1
# 85 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_DISABLE_FOLLOWER_POKEMON
# 86 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 87 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_0
# 88 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	delay 60
# 89 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger3_Movement_0
# 90 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	setspeaker Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_0
# 91 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	msgbox Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_1, MSGBOX_AUTOCLOSE
# 92 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	waitmessage
# 93 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	release
	return


Maasje_PokemonCenter_1F_Bryan_Following::
# 97 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	lock
# 98 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 99 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Following_Movement_0
# 100 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	delay 40
# 101 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	setspeaker Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_0
# 102 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	msgbox Maasje_PokemonCenter_1F_Bryan_Following_Text_0
# 103 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	waitmessage
# 104 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	release
	return


Maasje_PokemonCenter_1F_Man::
# 108 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	lock
# 109 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	faceplayer
# 110 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	setspeaker Maasje_PokemonCenter_1F_Man_Text_0
# 111 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	msgbox Maasje_PokemonCenter_1F_Man_Text_1
# 112 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	waitmessage
# 113 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	release
	return


# 29 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
Maasje_PokemonCenter_1F_Second_Nurse_Movement_0:
# 29 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	face_player
	step_end

# 32 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
Maasje_PokemonCenter_1F_Second_Nurse_Movement_1:
# 32 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	face_left
	step_end

# 45 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_0:
# 45 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 47 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_1:
# 47 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	walk_fast_left
# 47 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	walk_fast_left
# 47 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	walk_fast_left
# 47 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	walk_fast_left
# 47 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	walk_fast_down
	step_end

# 61 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
Maasje_PokemonCenter_1F_Bryan_Trigger1_Movement_0:
# 61 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	walk_fast_left
# 61 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	walk_fast_left
# 61 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	walk_fast_left
# 61 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	face_down
	step_end

# 75 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
Maasje_PokemonCenter_1F_Bryan_Trigger2_Movement_0:
# 75 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	walk_fast_left
# 75 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	face_down
	step_end

# 89 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
Maasje_PokemonCenter_1F_Bryan_Trigger3_Movement_0:
# 89 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	walk_fast_down
	step_end

# 99 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
Maasje_PokemonCenter_1F_Bryan_Following_Movement_0:
# 99 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	emote_question_mark
# 99 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	face_player
	step_end

Maasje_PokemonCenter_1F_Second_Nurse_Text_0:
# 30 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	.string "We found this Krabby on the beach a\n"
	.string "couple of days ago.\p"
	.string "He was very confused and kept making\n"
	.string "strange noises.\p"
	.string "He is getting better now.$"

Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_0:
# 48 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	.string "Bryan$"

Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_1:
# 49 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	.string "Hi, my name is {COLOR RED}Bryan{COLOR DARK_GRAY}.\p"
	.string "I'd like to film everything, absolutely\n"
	.string "everything.\p"
	.string "Can I film your journey towards\n"
	.string "becoming a pokemon master?\p"
	.string "..... What? No?\p"
	.string "Just don't mind me, act like you don't\n"
	.string "see me.$"

Maasje_PokemonCenter_1F_Bryan_Following_Text_0:
# 102 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	.string "Are you talking to me?\p"
	.string "I'm not even here, don't worry!\p"
	.string "I'll send you the footage on DVD!$"

Maasje_PokemonCenter_1F_Man_Text_0:
# 110 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	.string "Steph Boilers$"

Maasje_PokemonCenter_1F_Man_Text_1:
# 111 "data/maps/Maasje_PokemonCenter_1F/scripts.pory"
	.string "Back in the day the gym leader, Pete\n"
	.string "Longfellow, was my geography teacher.\p"
	.string "He quit his old job because one of\n"
	.string "students started to imitate his quirks.\p"
	.string "I forgot the real name of the student,\n"
	.string "but everybody called him J.T.B..$"
