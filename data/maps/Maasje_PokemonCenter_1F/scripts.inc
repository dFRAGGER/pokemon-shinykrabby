Maasje_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Maasje_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, Maasje_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Maasje_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Maasje_PokemonCenter_1F_OnTransition
	return

Maasje_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call CableClub_OnResume
	return


Maasje_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_MAASJE
	setflag FLAG_DISABLE_FOLLOWER_POKEMON
	callnative UpdateFollowingPokemon
	end


Maasje_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	setflag FLAG_DISABLE_FOLLOWER_POKEMON
	callnative UpdateFollowingPokemon
	waitmessage
	waitbuttonpress
	release
	end


Maasje_PokemonCenter_1F_Second_Nurse::
	lock
	applymovement 2, Maasje_PokemonCenter_1F_Second_Nurse_Movement_0
	msgbox Maasje_PokemonCenter_1F_Second_Nurse_Text_0
	waitmessage
	applymovement 2, Maasje_PokemonCenter_1F_Second_Nurse_Movement_1
	release
	return


Maasje_Krabby_Cry_1F_Pokecenter::
	playmoncry SPECIES_KRABBY, CRY_MODE_NORMAL
	return


Maasje_PokemonCenter_1F_Bryan_Trigger0::
	lock
	setvar VAR_BRYAN_POSITION, 1
	playse SE_PIN
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_0
	delay 60
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_1
	setspeaker Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_0
	msgbox Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


Maasje_PokemonCenter_1F_Bryan_Trigger1::
	lock
	setvar VAR_BRYAN_POSITION, 1
	playse SE_PIN
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_0
	delay 60
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger1_Movement_0
	setspeaker Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_0
	msgbox Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


Maasje_PokemonCenter_1F_Bryan_Trigger2::
	lock
	setvar VAR_BRYAN_POSITION, 1
	playse SE_PIN
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_0
	delay 60
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger2_Movement_0
	setspeaker Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_0
	msgbox Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


Maasje_PokemonCenter_1F_Bryan_Trigger3::
	lock
	setvar VAR_BRYAN_POSITION, 1
	playse SE_PIN
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_0
	delay 60
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Trigger3_Movement_0
	setspeaker Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_0
	msgbox Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


Maasje_PokemonCenter_1F_Bryan_Following::
	lock
	playse SE_PIN
	applymovement 2, Maasje_PokemonCenter_1F_Bryan_Following_Movement_0
	delay 40
	setspeaker Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_0
	msgbox Maasje_PokemonCenter_1F_Bryan_Following_Text_0
	waitmessage
	release
	return


Maasje_PokemonCenter_1F_Man::
	lock
	faceplayer
	msgbox Maasje_PokemonCenter_1F_Man_Text_0
	waitmessage
	release
	return


Maasje_PokemonCenter_1F_Second_Nurse_Movement_0:
	face_player
	step_end

Maasje_PokemonCenter_1F_Second_Nurse_Movement_1:
	face_left
	step_end

Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_0:
	emote_exclamation_mark
	step_end

Maasje_PokemonCenter_1F_Bryan_Trigger0_Movement_1:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	step_end

Maasje_PokemonCenter_1F_Bryan_Trigger1_Movement_0:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	face_down
	step_end

Maasje_PokemonCenter_1F_Bryan_Trigger2_Movement_0:
	walk_fast_left
	face_down
	step_end

Maasje_PokemonCenter_1F_Bryan_Trigger3_Movement_0:
	walk_fast_down
	step_end

Maasje_PokemonCenter_1F_Bryan_Following_Movement_0:
	emote_question_mark
	face_player
	step_end

Maasje_PokemonCenter_1F_Second_Nurse_Text_0:
	.string "We found this Krabby on the beach a\n"
	.string "couple of days ago.\p"
	.string "He was very confused and kept making\n"
	.string "strange noises.\p"
	.string "He is getting better now.$"

Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_0:
	.string "BRYAN$"

Maasje_PokemonCenter_1F_Bryan_Trigger0_Text_1:
	.string "Hi, my name is BRYAN.\p"
	.string "I'd like to film everything, absolutely\n"
	.string "everything.\p"
	.string "Can I film your journey towards\n"
	.string "becoming a pokemon researcher?\p"
	.string "..... What? No?\p"
	.string "Just don't mind me, act like you don't\n"
	.string "see me.$"

Maasje_PokemonCenter_1F_Bryan_Following_Text_0:
	.string "Are you talking to me?\p"
	.string "I'm not even here, don't worry!\p"
	.string "I'll send you the footage on DVD!$"

Maasje_PokemonCenter_1F_Man_Text_0:
	.string "Back in the day the gym leader, Pete\n"
	.string "Longfellow, was my geography teacher.\p"
	.string "He quit his old job because one of\n"
	.string "students started to imitate his quirks.\p"
	.string "I forgot the real name of the student,\n"
	.string "but everybody called him J.T.B..$"
