LionsarchCity_Steel_Factory_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LionsarchCity_Steel_Factory_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LionsarchCity_Steel_Factory_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call SteelFactory_B1F_OnTransition
	return


SteelFactory_B1F_OnTransition::
	goto_if_unset FLAG_STEEL_FACTORY_TUNNEL_OPEN, SteelFactory_B1F_OnTransition_2
SteelFactory_B1F_OnTransition_1:
	end

SteelFactory_B1F_OnTransition_2:
	warpsilent MAP_LIONSARCH_CITY_INDOOR_PETER_BASEMENT_PARTY, 2
	goto SteelFactory_B1F_OnTransition_1


SteelFactory_B1F_Guard1::
	trainerbattle_single TRAINER_FACULTY_GUARD_B1F_1, SteelFactory_B1F_Guard1_Intro, SteelFactory_B1F_Guard1_Defeat
	msgbox SteelFactory_B1F_Guard1_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_B1F_Guard2::
	trainerbattle_single TRAINER_FACULTY_GUARD_B1F_2, SteelFactory_B1F_Guard2_Intro, SteelFactory_B1F_Guard2_Defeat
	msgbox SteelFactory_B1F_Guard2_PostBattle, MSGBOX_AUTOCLOSE
	end


SteelFactory_B1F_Guard1_Intro::
	.string "Intruder!\n"
	.string "How did you get in here?\p"
	.string "Nobody passes through this tunnel\n"
	.string "without Faculty clearance!$"

SteelFactory_B1F_Guard1_Defeat::
	.string "How... this is a restricted zone!\p"
	.string "How can someone like you even GET IN\n"
	.string "here?!$"

SteelFactory_B1F_Guard1_PostBattle::
	.string "The tunnel now reeks of that old disco\n"
	.string "basement.\p"
	.string "Must have been Peter that let you in...$"

SteelFactory_B1F_Guard2_Intro::
	.string "Wait, what?\n"
	.string "You're not Faculty.\p"
	.string "Turn around. NOW.\p"
	.string "This is your only warning.$"

SteelFactory_B1F_Guard2_Defeat::
	.string "Fine. Keep walking.\p"
	.string "See how far you get upstairs.$"

SteelFactory_B1F_Guard2_PostBattle::
	.string "The upper floors will eat you alive.\p"
	.string "The Rector doesn't tolerate intrusions.$"
