Marshduke_Indoor_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Marshduke_Indoor_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Marshduke_Indoor_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_TEMP_HIDE_FOLLOWER
	return


Marshduke_Indoor_Gym_EventScript_WarpToEntrance::
	lockall
	warpmossdeepgym MAP_MARSHDUKE_INDOOR_GYM, 7, 30
	waitstate
	releaseall
	end


Marshduke_Indoor_Gym_EventScript_Preston::
	trainerbattle_single TRAINER_PRESTON_SK, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
	end


Marshduke_Indoor_Gym_EventScript_Virgil::
	trainerbattle_single TRAINER_VIRGIL_SK, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
	end


Marshduke_Indoor_Gym_EventScript_Blake::
	trainerbattle_single TRAINER_BLAKE_SK, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
	end


Marshduke_Indoor_Gym_EventScript_Hannah::
	trainerbattle_single TRAINER_HANNAH_SK, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
	end


Marshduke_Indoor_Gym_EventScript_Samantha::
	trainerbattle_single TRAINER_SAMANTHA_SK, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
	end


Marshduke_Indoor_Gym_EventScript_Maura::
	trainerbattle_single TRAINER_MAURA_SK, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
	end


Marshduke_Indoor_Gym_EventScript_Sylvia::
	trainerbattle_single TRAINER_SYLVIA_SK, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
	end


Marshduke_Indoor_Gym_EventScript_Nate::
	trainerbattle_single TRAINER_NATE_SK, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
	end


Marshduke_Indoor_Gym_EventScript_Macey::
	trainerbattle_single TRAINER_MACEY_SK, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
	end


Marshduke_Indoor_Gym_EventScript_Clifford::
	trainerbattle_single TRAINER_CLIFFORD_SK, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
	end


Marshduke_Indoor_Gym_EventScript_Nicholas::
	trainerbattle_single TRAINER_NICHOLAS_SK, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
	end


Marshduke_Indoor_Gym_EventScript_Kathleen::
	trainerbattle_single TRAINER_KATHLEEN_SK, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
	end


Marshduke_Indoor_Gym_EventScript_Leaders::
	lock
	faceplayer
	goto_if_set FLAG_BADGE04_GET, Marshduke_Indoor_Gym_EventScript_Leaders_2
	playse SE_PIN
	applymovement 9, Marshduke_Indoor_Gym_EventScript_Leaders_Movement_0
	waitmovement 9
	setspeaker Marshduke_Indoor_Gym_EventScript_Leaders_Text_0
	msgbox Marshduke_Indoor_Gym_EventScript_Leaders_Text_4
	playse SE_PIN
	applymovement 1, Marshduke_Indoor_Gym_EventScript_Leaders_Movement_0
	waitmovement 1
	setspeaker Marshduke_Indoor_Gym_EventScript_Leaders_Text_2
	msgbox Marshduke_Indoor_Gym_EventScript_Leaders_Text_5
	playse SE_PIN
	applymovement 9, Marshduke_Indoor_Gym_EventScript_Leaders_Movement_1
	waitmovement 9
	setspeaker Marshduke_Indoor_Gym_EventScript_Leaders_Text_0
	msgbox Marshduke_Indoor_Gym_EventScript_Leaders_Text_6
	playse SE_PIN
	applymovement 1, Marshduke_Indoor_Gym_EventScript_Leaders_Movement_2
	waitmovement 1
	setspeaker Marshduke_Indoor_Gym_EventScript_Leaders_Text_2
	msgbox Marshduke_Indoor_Gym_EventScript_Leaders_Text_7
	playse SE_PIN
	applymovement 9, Marshduke_Indoor_Gym_EventScript_Leaders_Movement_3
	waitmovement 9
	setspeaker Marshduke_Indoor_Gym_EventScript_Leaders_Text_0
	msgbox Marshduke_Indoor_Gym_EventScript_Leaders_Text_8
	applymovement 1, Marshduke_Indoor_Gym_EventScript_Leaders_Movement_4
	waitmovement 1
	applymovement 9, Marshduke_Indoor_Gym_EventScript_Leaders_Movement_4
	waitmovement 9
	setspeaker Marshduke_Indoor_Gym_EventScript_Leaders_Text_2
	msgbox Marshduke_Indoor_Gym_EventScript_Leaders_Text_9
	setvar VAR_0x8004, PARTY_SIZE
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
	compare VAR_RESULT, 2
	goto_if_lt Marshduke_Indoor_Gym_EventScript_Leaders_5
	setspeaker Marshduke_Indoor_Gym_EventScript_Leaders_Text_0
	msgbox Marshduke_Indoor_Gym_EventScript_Leaders_Text_11
	setspeaker NULL
	trainerbattle_two_trainers TRAINER_MARSHDUKE_LEADER_VERA, Marshduke_Indoor_Gym_Text_VeraDefeat, TRAINER_MARSHDUKE_LEADER_HOLT, Marshduke_Indoor_Gym_Text_HoltDefeat
	setspeaker Marshduke_Indoor_Gym_EventScript_Leaders_Text_0
	msgbox Marshduke_Indoor_Gym_EventScript_Leaders_Text_12
	setspeaker Marshduke_Indoor_Gym_EventScript_Leaders_Text_2
	msgbox Marshduke_Indoor_Gym_EventScript_Leaders_Text_13
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_BADGE04_GET
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
	setflag FLAG_STRENGTH_UNLOCKED
	setspeaker NULL
	msgbox Marshduke_Indoor_Gym_EventScript_Leaders_Text_14
	waitmessage
	setspeaker Marshduke_Indoor_Gym_EventScript_Leaders_Text_0
	msgbox Marshduke_Indoor_Gym_EventScript_Leaders_Text_15
	setspeaker Marshduke_Indoor_Gym_EventScript_Leaders_Text_2
	msgbox Marshduke_Indoor_Gym_EventScript_Leaders_Text_16
	waitmessage
	giveitem ITEM_HM04
	waitmessage
	setspeaker Marshduke_Indoor_Gym_EventScript_Leaders_Text_2
	msgbox Marshduke_Indoor_Gym_EventScript_Leaders_Text_17
	setspeaker Marshduke_Indoor_Gym_EventScript_Leaders_Text_0
	msgbox Marshduke_Indoor_Gym_EventScript_Leaders_Text_18
	waitmessage
	giveitem ITEM_TM_TRICK_ROOM
	waitmessage
	setspeaker Marshduke_Indoor_Gym_EventScript_Leaders_Text_0
	msgbox Marshduke_Indoor_Gym_EventScript_Leaders_Text_19
	playse SE_PIN
	applymovement 1, Marshduke_Indoor_Gym_EventScript_Leaders_Movement_5
	waitmovement 1
	setspeaker Marshduke_Indoor_Gym_EventScript_Leaders_Text_2
	msgbox Marshduke_Indoor_Gym_EventScript_Leaders_Text_20, MSGBOX_AUTOCLOSE
	setspeaker NULL
	call Marshduke_Indoor_Gym_SetTrainerFlags
	applymovement 1, Marshduke_Indoor_Gym_EventScript_Leaders_Movement_4
	waitmovement 1
	release
	end

Marshduke_Indoor_Gym_EventScript_Leaders_2:
	setspeaker Marshduke_Indoor_Gym_EventScript_Leaders_Text_0
	msgbox Marshduke_Indoor_Gym_EventScript_Leaders_Text_1
	setspeaker Marshduke_Indoor_Gym_EventScript_Leaders_Text_2
	msgbox Marshduke_Indoor_Gym_EventScript_Leaders_Text_3, MSGBOX_AUTOCLOSE
	setspeaker NULL
	release
	end

Marshduke_Indoor_Gym_EventScript_Leaders_5:
	msgbox Marshduke_Indoor_Gym_EventScript_Leaders_Text_10, MSGBOX_AUTOCLOSE
	setspeaker NULL
	release
	end


Marshduke_Indoor_Gym_SetTrainerFlags::
	settrainerflag TRAINER_PRESTON_SK
	settrainerflag TRAINER_VIRGIL_SK
	settrainerflag TRAINER_BLAKE_SK
	settrainerflag TRAINER_HANNAH_SK
	settrainerflag TRAINER_SAMANTHA_SK
	settrainerflag TRAINER_MAURA_SK
	settrainerflag TRAINER_SYLVIA_SK
	settrainerflag TRAINER_NATE_SK
	settrainerflag TRAINER_MACEY_SK
	settrainerflag TRAINER_CLIFFORD_SK
	settrainerflag TRAINER_NICHOLAS_SK
	settrainerflag TRAINER_KATHLEEN_SK
	return


Marshduke_Indoor_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_BADGE04_GET, Marshduke_Indoor_Gym_EventScript_GymGuide_2
	msgbox Marshduke_Indoor_Gym_EventScript_GymGuide_Text_1, MSGBOX_AUTOCLOSE
Marshduke_Indoor_Gym_EventScript_GymGuide_1:
	release
	end

Marshduke_Indoor_Gym_EventScript_GymGuide_2:
	msgbox Marshduke_Indoor_Gym_EventScript_GymGuide_Text_0, MSGBOX_AUTOCLOSE
	goto Marshduke_Indoor_Gym_EventScript_GymGuide_1


Marshduke_Indoor_Gym_EventScript_Leaders_Movement_0:
	emote_exclamation_mark
	step_end

Marshduke_Indoor_Gym_EventScript_Leaders_Movement_1:
	face_left
	step_end

Marshduke_Indoor_Gym_EventScript_Leaders_Movement_2:
	emote_question_mark
	face_right
	step_end

Marshduke_Indoor_Gym_EventScript_Leaders_Movement_3:
	emote_question_mark
	face_left
	step_end

Marshduke_Indoor_Gym_EventScript_Leaders_Movement_4:
	face_down
	step_end

Marshduke_Indoor_Gym_EventScript_Leaders_Movement_5:
	face_right
	emote_exclamation_mark
	step_end

Marshduke_Indoor_Gym_EventScript_Leaders_Text_0:
	.string "SISTER VERA$"

Marshduke_Indoor_Gym_EventScript_Leaders_Text_1:
	.string "Have you seen the visions in the\n"
	.string "cathedral yet? I've watched the Latios\l"
	.string "and Latias one more than three hundred\l"
	.string "times.$"

Marshduke_Indoor_Gym_EventScript_Leaders_Text_2:
	.string "DR. HOLT$"

Marshduke_Indoor_Gym_EventScript_Leaders_Text_3:
	.string "And I've recorded it more than three\n"
	.string "hundred times. So we've basically done\l"
	.string "the same thing.$"

Marshduke_Indoor_Gym_EventScript_Leaders_Text_4:
	.string "Welcome! I'm SISTER VERA of the Order\n"
	.string "of the Open Eye.$"

Marshduke_Indoor_Gym_EventScript_Leaders_Text_5:
	.string "And I'm DR. HOLT, from the research\n"
	.string "centre next door. We run this Gym\l"
	.string "together.$"

Marshduke_Indoor_Gym_EventScript_Leaders_Text_6:
	.string "Together is a big word. Holt thinks the\n"
	.string "Rememberer's visions are just\l"
	.string "brainwaves he can put on a graph.$"

Marshduke_Indoor_Gym_EventScript_Leaders_Text_7:
	.string "Because they are! And SISTER VERA\n"
	.string "thinks an Alakazam has been meditating\l"
	.string "on that hill for ten thousand years.$"

Marshduke_Indoor_Gym_EventScript_Leaders_Text_8:
	.string "Because it has!$"

Marshduke_Indoor_Gym_EventScript_Leaders_Text_9:
	.string "...Anyway. We do agree on one thing.\n"
	.string "Psychic Pokémon are the most\l"
	.string "fascinating Pokémon there are.$"

Marshduke_Indoor_Gym_EventScript_Leaders_Text_10:
	.string "Hold on, you only have one Pokémon that\n"
	.string "can still fight.\p"
	.string "We battle two against two here. Come\n"
	.string "back with at least two!$"

Marshduke_Indoor_Gym_EventScript_Leaders_Text_11:
	.string "Two of us, two of yours. Let's see what\n"
	.string "you've got!$"

Marshduke_Indoor_Gym_EventScript_Leaders_Text_12:
	.string "Well. I didn't see that coming, and\n"
	.string "seeing things coming is kind of my whole\l"
	.string "job.$"

Marshduke_Indoor_Gym_EventScript_Leaders_Text_13:
	.string "Statistically, we should have won. I'll\n"
	.string "have to check my numbers.$"

Marshduke_Indoor_Gym_EventScript_Leaders_Text_14:
	.string "You received the MEMORY BADGE!$"

Marshduke_Indoor_Gym_EventScript_Leaders_Text_15:
	.string "With the MEMORY BADGE, Pokémon up to\n"
	.string "level 50 will listen to you.\p"
	.string "And you can use STRENGTH outside of\n"
	.string "battle now.$"

Marshduke_Indoor_Gym_EventScript_Leaders_Text_16:
	.string "Which is why you'll need this.$"

Marshduke_Indoor_Gym_EventScript_Leaders_Text_17:
	.string "That's HM STRENGTH. Teach it to a\n"
	.string "strong Pokémon and it can push big\l"
	.string "boulders out of your way.$"

Marshduke_Indoor_Gym_EventScript_Leaders_Text_18:
	.string "And this one's from me.$"

Marshduke_Indoor_Gym_EventScript_Leaders_Text_19:
	.string "TRICK ROOM twists the space around the\n"
	.string "battle for five turns, so the slowest\l"
	.string "Pokémon get to move first.\p"
	.string "Holt says it's physics but I think it's\n"
	.string "just a small miracle.$"

Marshduke_Indoor_Gym_EventScript_Leaders_Text_20:
	.string "It's physics.$"

Marshduke_Indoor_Gym_EventScript_GymGuide_Text_0:
	.string "You beat Vera and Holt at the same\n"
	.string "time? I've never seen them both\l"
	.string "speechless before!$"

Marshduke_Indoor_Gym_EventScript_GymGuide_Text_1:
	.string "Hey there, challenger! This Gym uses\n"
	.string "Psychic-type Pokémon.\p"
	.string "Dark-, Bug- and Ghost-type moves will\n"
	.string "help you out a lot here.\p"
	.string "And watch out: the two Gym Leaders\n"
	.string "battle together, two against two.\p"
	.string "Bring at least two strong Pokémon!$"

Marshduke_Indoor_Gym_Text_VeraDefeat::
	.string "I should have seen this coming!$"

Marshduke_Indoor_Gym_Text_HoltDefeat::
	.string "That's not what my data said!$"
