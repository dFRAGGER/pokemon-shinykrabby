SiltrootTown_Indoor_Shed_MapScripts::
# 2 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SiltrootTown_Indoor_Shed_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SiltrootTown_Indoor_Shed_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	call SiltrootTown_Shed_OnTransition
	return


SiltrootTown_Shed_OnTransition::
	end


SiltrootTown_Indoor_Shed_EntranceSign::
# 16 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	lock
# 17 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_EntranceSign_Text_0, MSGBOX_AUTOCLOSE
# 18 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 19 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	release
	return


SiltrootTown_Indoor_Shed_Slowbro_Alert::
# 29 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	lockall
# 30 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	delay 40
# 31 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	playmoncry SPECIES_SLOWBRO, CRY_MODE_ENCOUNTER
# 32 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	delay 30
# 33 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmoncry
# 34 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_0, MSGBOX_AUTOCLOSE
# 35 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 36 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	delay 40
# 37 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_1, MSGBOX_AUTOCLOSE
# 38 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 39 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	playse SE_M_PSYBEAM
# 40 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	fadescreen FADE_TO_WHITE
# 41 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	delay 60
# 43 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	goto_if_set FLAG_SILTROOTTOWN_STASH_SACK, SiltrootTown_Indoor_Shed_Slowbro_Alert_2
# 59 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_3, MSGBOX_AUTOCLOSE
# 60 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 61 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	warp MAP_SILTROOT_TOWN_INDOOR_SHED, 4, 18
# 62 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitstate
# 63 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 64 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	delay 40
# 65 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_5, MSGBOX_AUTOCLOSE
# 66 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
SiltrootTown_Indoor_Shed_Slowbro_Alert_1:
# 68 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	releaseall
	end

SiltrootTown_Indoor_Shed_Slowbro_Alert_2:
# 44 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_2, MSGBOX_AUTOCLOSE
# 45 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 46 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	removeitem ITEM_SOOT_SACK
# 47 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	clearflag FLAG_SILTROOTTOWN_STASH_SACK
# 48 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	addobject 1
# 49 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_3, MSGBOX_AUTOCLOSE
# 50 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 51 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	warp MAP_SILTROOT_TOWN_INDOOR_SHED, 4, 18
# 52 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitstate
# 53 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 54 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	delay 40
# 55 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_4, MSGBOX_AUTOCLOSE
# 56 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
	goto SiltrootTown_Indoor_Shed_Slowbro_Alert_1


SiltrootTown_Indoor_Shed_Slowbro_Drowsy::
# 75 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	lockall
# 76 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	delay 100
# 77 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	applymovement VAR_LAST_TALKED, SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Movement_0
# 78 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	delay 60
# 79 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	playmoncry SPECIES_SLOWBRO, CRY_MODE_NORMAL
# 80 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_0, MSGBOX_AUTOCLOSE
# 81 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 82 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	delay 80
# 83 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	playse SE_PIN
# 84 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	applymovement VAR_LAST_TALKED, SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Movement_1
# 85 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_1, MSGBOX_AUTOCLOSE
# 86 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 87 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	playse SE_M_PSYBEAM
# 88 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	fadescreen FADE_TO_WHITE
# 89 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	delay 60
# 91 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	goto_if_set FLAG_SILTROOTTOWN_STASH_SACK, SiltrootTown_Indoor_Shed_Slowbro_Drowsy_2
# 106 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_3, MSGBOX_AUTOCLOSE
# 107 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 108 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	warp MAP_SILTROOT_TOWN_INDOOR_SHED, 4, 18
# 109 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitstate
# 110 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 111 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_5, MSGBOX_AUTOCLOSE
# 112 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
SiltrootTown_Indoor_Shed_Slowbro_Drowsy_1:
# 114 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	releaseall
	end

SiltrootTown_Indoor_Shed_Slowbro_Drowsy_2:
# 92 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_2, MSGBOX_AUTOCLOSE
# 93 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 94 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	removeitem ITEM_SOOT_SACK
# 95 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	clearflag FLAG_SILTROOTTOWN_STASH_SACK
# 96 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	addobject 1
# 97 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_3, MSGBOX_AUTOCLOSE
# 98 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 99 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	warp MAP_SILTROOT_TOWN_INDOOR_SHED, 4, 18
# 100 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitstate
# 101 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 102 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_4, MSGBOX_AUTOCLOSE
# 103 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
	goto SiltrootTown_Indoor_Shed_Slowbro_Drowsy_1


SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation::
# 122 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	lockall
# 123 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	delay 150
# 124 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	playmoncry SPECIES_SLOWBRO, CRY_MODE_WEAK
# 125 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	goto_if_set FLAG_SILTROOTTOWN_STASH_SACK, SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_2
# 129 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_Text_1, MSGBOX_AUTOCLOSE
SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_1:
# 131 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 132 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	delay 100
# 133 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	applymovement VAR_LAST_TALKED, SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Movement_0
# 134 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_Text_2, MSGBOX_AUTOCLOSE
# 135 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 136 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	delay 40
# 137 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_Text_3, MSGBOX_AUTOCLOSE
# 138 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 139 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	releaseall
	end

SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_2:
# 126 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_Text_0, MSGBOX_AUTOCLOSE
	goto SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_1


SiltrootTown_Indoor_Shed_Slowbro_Peaceful::
# 147 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	lock
# 148 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	faceplayer
# 149 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	playmoncry SPECIES_SLOWBRO, CRY_MODE_NORMAL
# 150 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Indoor_Shed_Slowbro_Peaceful_Text_0, MSGBOX_AUTOCLOSE
# 151 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 152 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	release
	return


Siltroottown_Indoor_Shed_Stash::
# 159 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	lock
# 160 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox Siltroottown_Indoor_Shed_Stash_Text_0, MSGBOX_AUTOCLOSE
# 161 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 162 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	setflag FLAG_SILTROOTTOWN_STASH_SACK
# 163 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	removeobject 1
# 164 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	giveitem ITEM_SOOT_SACK
# 165 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	delay 30
# 166 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox Siltroottown_Indoor_Shed_Stash_Text_1, MSGBOX_AUTOCLOSE
# 167 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 168 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	release
	end


SiltrootTown_Shed_HydroponicSystem::
# 178 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	lock
# 179 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Shed_HydroponicSystem_Text_0, MSGBOX_AUTOCLOSE
# 180 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 181 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	release
	return


SiltrootTown_Shed_ResearchNotes::
# 186 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	lock
# 187 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Shed_ResearchNotes_Text_0, MSGBOX_AUTOCLOSE
# 188 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 189 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	release
	return


SiltrootTown_Shed_Plants::
# 194 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	lock
# 195 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	msgbox SiltrootTown_Shed_Plants_Text_0, MSGBOX_AUTOCLOSE
# 196 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	waitmessage
# 197 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	release
	return


# 77 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Movement_0:
# 77 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	emote_question_mark
	step_end

# 84 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Movement_1:
# 84 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	emote_exclamation_mark
	step_end

SiltrootTown_Indoor_Shed_EntranceSign_Text_0:
# 17 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
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
# 34 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "SLOOOW...\p"
	.string "...BRO!\p"
	.string "(Slowbro detected an intruder!)$"

SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_1:
# 37 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "Slowbro's eyes glow with psychic\n"
	.string "energy!$"

SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_2:
# 44 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "The psychic pulse knocked the package\n"
	.string "out of your hands!$"

SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_3:
# 49 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "The shed's dimensional pocket is\n"
	.string "resetting...$"

SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_4:
# 55 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "You were sent back to the entrance!\p"
	.string "The package was left behind...\p"
	.string "You'll have to try again!$"

SiltrootTown_Indoor_Shed_Slowbro_Alert_Text_5:
# 65 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "You were teleported back to the\n"
	.string "entrance!\p"
	.string "The Slowbro's meditation trance was\n"
	.string "disturbed.$"

SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_0:
# 80 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "Sloooow...?\p"
	.string "(Slowbro slowly opens one eye...)\p"
	.string ".......\p"
	.string "(Wait... someone's here?)$"

SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_1:
# 85 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "BRO! SLOOOW-BRO!\p"
	.string "(Intruder detected!)$"

SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_2:
# 92 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "The psychic pulse knocked the package\n"
	.string "from your grip!$"

SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_3:
# 97 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "Slowbro's psychic pulse resets the\n"
	.string "room!$"

SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_4:
# 102 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "You were sent back!\p"
	.string "The package tumbled back to where you\n"
	.string "found it...\p"
	.string "You'll have to be more careful this time!$"

SiltrootTown_Indoor_Shed_Slowbro_Drowsy_Text_5:
# 111 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "You were sent back!\p"
	.string "The Slowbro eventually noticed you.$"

SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_Text_0:
# 126 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "...Sloooooo...\p"
	.string "(Slowbro is completely zoned out...)\p"
	.string ".......\p"
	.string "(It doesn't even notice you carrying\n"
	.string "something...)$"

SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_Text_1:
# 129 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "...Sloooooo...\p"
	.string "(Slowbro is completely zoned out...)\p"
	.string ".......\p"
	.string "(It's contemplating the cosmos...)$"

SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_Text_2:
# 134 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "...w?\p"
	.string "(Huh? Was that a noise...?)\p"
	.string ".......\p"
	.string "(Probably nothing...)$"

SiltrootTown_Indoor_Shed_Slowbro_DeepMeditation_Text_3:
# 137 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "Slowbro drifted back into meditation.\p"
	.string "You're safe... for now.$"

SiltrootTown_Indoor_Shed_Slowbro_Peaceful_Text_0:
# 150 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "Slooooow...\p"
	.string "(Slowbro is deep in meditation.)\p"
	.string "Bro...\p"
	.string "(Its eyes are closed. It's humming a low\n"
	.string "frequency.)\p"
	.string ".......\p"
	.string "The air around it feels... peaceful.$"

Siltroottown_Indoor_Shed_Stash_Text_0:
# 160 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "You found the package!\p"
	.string "It's a well-wrapped bundle with a\n"
	.string "handwritten note:\p"
	.string "'My best harvest yet.\n"
	.string "Have fun, friend.\n"
	.string "- Ali'$"

Siltroottown_Indoor_Shed_Stash_Text_1:
# 166 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "You carefully picked up the package.\p"
	.string "The nearby Slowbro didn't even notice.$"

SiltrootTown_Shed_HydroponicSystem_Text_0:
# 179 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
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
# 187 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
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
# 195 "data/maps/SiltrootTown_Indoor_Shed/scripts.pory"
	.string "These plants are growing at an\n"
	.string "incredible rate.\p"
	.string "The Slowbro's psychic energy seems to\n"
	.string "be accelerating their growth cycle.\p"
	.string "The leaves are a vibrant green, and the\n"
	.string "smell is... intense.$"
