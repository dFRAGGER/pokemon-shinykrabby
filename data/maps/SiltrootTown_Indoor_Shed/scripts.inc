SiltrootTown_Indoor_Shed_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SiltrootTown_Indoor_Shed_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SiltrootTown_Indoor_Shed_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call SiltrootTown_Shed_OnTransition
	return


SiltrootTown_Shed_OnTransition::
	end


SiltrootTown_Indoor_Shed_EntranceSign::
	lock
	msgbox SiltrootTown_Indoor_Shed_EntranceSign_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


SiltrootTown_Indoor_Shed_Slowbro_Alert::
	lockall
	delay 40
	playmoncry SPECIES_SLOWBRO, CRY_MODE_ENCOUNTER
	delay 30
	waitmoncry
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	delay 40
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_M_PSYBEAM
	fadescreen FADE_TO_WHITE
	delay 60
	goto_if_set FLAG_SILTROOTTOWN_STASH_SACK, SiltrootTown_Indoor_Shed_Slowbro_Alert_2
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	warp MAP_SILTROOT_TOWN_INDOOR_SHED, 4, 18
	waitstate
	fadescreen FADE_FROM_WHITE
	delay 40
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_5, MSGBOX_AUTOCLOSE
	waitmessage
SiltrootTown_Indoor_Shed_Slowbro_Alert_1:
	releaseall
	end

SiltrootTown_Indoor_Shed_Slowbro_Alert_2:
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	removeitem ITEM_SOOT_SACK
	clearflag FLAG_SILTROOTTOWN_STASH_SACK
	addobject 1
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	warp MAP_SILTROOT_TOWN_INDOOR_SHED, 4, 18
	waitstate
	fadescreen FADE_FROM_WHITE
	delay 40
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	goto SiltrootTown_Indoor_Shed_Slowbro_Alert_1


SiltrootTown_Indoor_Shed_Slowbro_Drowsy::
	lockall
	delay 100
	applymovement VAR_LAST_TALKED, SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Movement_0
	delay 60
	playmoncry SPECIES_SLOWBRO, CRY_MODE_NORMAL
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	delay 80
	playse SE_PIN
	applymovement VAR_LAST_TALKED, SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Movement_1
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_M_PSYBEAM
	fadescreen FADE_TO_WHITE
	delay 60
	goto_if_set FLAG_SILTROOTTOWN_STASH_SACK, SiltrootTown_Indoor_Shed_Slowbro_Drowsy_2
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	warp MAP_SILTROOT_TOWN_INDOOR_SHED, 4, 18
	waitstate
	fadescreen FADE_FROM_WHITE
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_5, MSGBOX_AUTOCLOSE
	waitmessage
SiltrootTown_Indoor_Shed_Slowbro_Drowsy_1:
	releaseall
	end

SiltrootTown_Indoor_Shed_Slowbro_Drowsy_2:
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	removeitem ITEM_SOOT_SACK
	clearflag FLAG_SILTROOTTOWN_STASH_SACK
	addobject 1
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	warp MAP_SILTROOT_TOWN_INDOOR_SHED, 4, 18
	waitstate
	fadescreen FADE_FROM_WHITE
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	goto SiltrootTown_Indoor_Shed_Slowbro_Drowsy_1


SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation::
	lockall
	delay 150
	playmoncry SPECIES_SLOWBRO, CRY_MODE_WEAK
	goto_if_set FLAG_SILTROOTTOWN_STASH_SACK, SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_2
	msgbox SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_Text_1, MSGBOX_AUTOCLOSE
SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_1:
	waitmessage
	delay 100
	applymovement VAR_LAST_TALKED, SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Movement_0
	msgbox SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	delay 40
	msgbox SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_Text_3, MSGBOX_AUTOCLOSE
	waitmessage
	releaseall
	end

SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_2:
	msgbox SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_Text_0, MSGBOX_AUTOCLOSE
	goto SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_1


SiltrootTown_Indoor_Shed_Slowbro_Peaceful::
	lock
	faceplayer
	playmoncry SPECIES_SLOWBRO, CRY_MODE_NORMAL
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Peaceful_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


Siltroottown_Indoor_Shed_Stash::
	lock
	msgbox Siltroottown_Indoor_Shed_Stash_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	setflag FLAG_SILTROOTTOWN_STASH_SACK
	removeobject 1
	giveitem ITEM_SOOT_SACK
	delay 30
	msgbox Siltroottown_Indoor_Shed_Stash_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


SiltrootTown_Shed_HydroponicSystem::
	lock
	msgbox SiltrootTown_Shed_HydroponicSystem_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


SiltrootTown_Shed_ResearchNotes::
	lock
	msgbox SiltrootTown_Shed_ResearchNotes_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


SiltrootTown_Shed_Plants::
	lock
	msgbox SiltrootTown_Shed_Plants_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	return


SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Movement_0:
	emote_question_mark
	step_end

SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Movement_1:
	emote_exclamation_mark
	step_end

SiltrootTown_Indoor_Shed_EntranceSign_Text_0:
	.string "--HANDWRITTEN NOTE FROM ALI--\p"
	.string "'Yo, friend.\p"
	.string "The Slowbro are maintaining the optimal\n"
	.string "growth frequency through deep\l"
	.string "meditation.\p"
	.string "Their psychic vibes keep the whole\n"
	.string "hydroponic system balanced.\p"
	.string "DO NOT disturb their wavelength.\p"
	.string "If they detect a foreign energy\n"
	.string "signature...\p"
	.string "They'll reflexively reset the entire\n"
	.string "dimensional pocket.\p"
	.string "(Translation: They'll teleport you back\n"
	.string "outside. Sorry.)\p"
	.string "The package is in the back corner.\p"
	.string "Visualize yourself as a shadow.\p"
	.string "Be the absence of light.\p"
	.string "- Ali'\p"
	.string "\n"
	.string "P.S. Move slowly. They're Slowbro, not\l"
	.string "Alakazam.\n"
	.string "You can sneak past if you're careful.'$"

SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_0:
	.string "SLOOOW...\p"
	.string "...BRO!\p"
	.string "(Slowbro detected an intruder!)$"

SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_1:
	.string "Slowbro's eyes glow with psychic\n"
	.string "energy!$"

SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_2:
	.string "The psychic pulse knocked the package\n"
	.string "out of your hands!$"

SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_3:
	.string "The shed's dimensional pocket is\n"
	.string "resetting...$"

SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_4:
	.string "You were sent back to the entrance!\p"
	.string "The package was left behind...\p"
	.string "You'll have to try again!$"

SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_5:
	.string "You were teleported back to the\n"
	.string "entrance!\p"
	.string "The Slowbro's meditation trance was\n"
	.string "disturbed.$"

SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_0:
	.string "Sloooow...?\p"
	.string "(Slowbro slowly opens one eye...)\p"
	.string ".......\p"
	.string "(Wait... someone's here?)$"

SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_1:
	.string "BRO! SLOOOW-BRO!\p"
	.string "(Intruder detected!)$"

SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_2:
	.string "The psychic pulse knocked the package\n"
	.string "from your grip!$"

SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_3:
	.string "Slowbro's psychic pulse resets the\n"
	.string "room!$"

SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_4:
	.string "You were sent back!\p"
	.string "The package tumbled back to where you\n"
	.string "found it...\p"
	.string "You'll have to be more careful this time!$"

SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_5:
	.string "You were sent back!\p"
	.string "The Slowbro eventually noticed you.$"

SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_Text_0:
	.string "...Sloooooo...\p"
	.string "(Slowbro is completely zoned out...)\p"
	.string ".......\p"
	.string "(It doesn't even notice you carrying\n"
	.string "something...)$"

SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_Text_1:
	.string "...Sloooooo...\p"
	.string "(Slowbro is completely zoned out...)\p"
	.string ".......\p"
	.string "(It's contemplating the cosmos...)$"

SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_Text_2:
	.string "...w?\p"
	.string "(Huh? Was that a noise...?)\p"
	.string ".......\p"
	.string "(Probably nothing...)$"

SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_Text_3:
	.string "Slowbro drifted back into meditation.\p"
	.string "You're safe... for now.$"

SiltrootTown_Indoor_Shed_Slowbro_Peaceful_Text_0:
	.string "Slooooow...\p"
	.string "(Slowbro is deep in meditation.)\p"
	.string "Bro...\p"
	.string "(Its eyes are closed. It's humming a low\n"
	.string "frequency.)\p"
	.string ".......\p"
	.string "The air around it feels... peaceful.$"

Siltroottown_Indoor_Shed_Stash_Text_0:
	.string "You found the package!\p"
	.string "It's a well-wrapped bundle with a\n"
	.string "handwritten note:\p"
	.string "'My best harvest yet.\n"
	.string "Have fun, friend.\n"
	.string "- Ali'$"

Siltroottown_Indoor_Shed_Stash_Text_1:
	.string "You carefully picked up the package.\p"
	.string "The nearby Slowbro didn't even notice.$"

SiltrootTown_Shed_HydroponicSystem_Text_0:
	.string "It's an advanced hydroponic growing\n"
	.string "system.\p"
	.string "The plants are thriving under perfect\n"
	.string "LED spectrum lighting.\p"
	.string "Several Slowbro are stationed around\n"
	.string "the room, maintaining the environment\l"
	.string "through psychic energy.\p"
	.string "The temperature is precisely\n"
	.string "controlled... and it smells heavily of\l"
	.string "herbs.$"

SiltrootTown_Shed_ResearchNotes_Text_0:
	.string "--ALI'S RESEARCH LOG--\p"
	.string "'Day 347:\n"
	.string "The Slowbro have achieved perfect\l"
	.string "symbiosis with the hydroponic matrix.\p"
	.string "Their Psychic-type frequencies\n"
	.string "resonate at 420 Hz...\n"
	.string "the universal frequency of the cosmos.\p"
	.string "Hypothesis: If we can channel this\n"
	.string "energy toward Project Star-Shot, we\l"
	.string "may achieve orbital velocity.\p"
	.string "Note to self: Stop watching Carl Sagan\n"
	.string "documentaries before bed.'\p"
	.string "--END LOG--$"

SiltrootTown_Shed_Plants_Text_0:
	.string "These plants are growing at an\n"
	.string "incredible rate.\p"
	.string "The Slowbro's psychic energy seems to\n"
	.string "be accelerating their growth cycle.\p"
	.string "The leaves are a vibrant green, and the\n"
	.string "smell is... intense.$"
