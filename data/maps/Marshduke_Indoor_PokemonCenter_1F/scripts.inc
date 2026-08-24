Marshduke_Indoor_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Marshduke_Indoor_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, Marshduke_Indoor_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Marshduke_Indoor_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Marshduke_Indoor_PokemonCenter_1F_OnTransition
	return

Marshduke_Indoor_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call CableClub_OnResume
	return


Marshduke_Indoor_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_MARSH_DUKE_CITY
	end


Marshduke_Indoor_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


Marshduke_Indoor_PokemonCenter_1F_HexManiac::
	lock
	faceplayer
	msgbox Marshduke_Indoor_PokemonCenter_1F_HexManiac_Text_0
	waitmessage
	release
	return


Marshduke_Indoor_PokemonCenter_1F_FatMan::
	lock
	faceplayer
	msgbox Marshduke_Indoor_PokemonCenter_1F_FatMan_Text_0
	waitmessage
	release
	return


Marshduke_Indoor_PokemonCenter_1F_HexManiac_Text_0:
	.string "Shh. Put your ear to the floor.\p"
	.string "...\p"
	.string "No? Fine. I'll tell you.\p"
	.string "You know that hum from the ALAKAZAM in\n"
	.string "the Cathedral?\p"
	.string "It comes up through the floor\n"
	.string "everywhere in this city.\p"
	.string "It has been B-flat for decades.\p"
	.string "How do I know that?\p"
	.string "My psyduck hates B-flat. Just like\n"
	.string "anything else which makes noise to be\l"
	.string "honest...\p"
	.string "Anyways, last week for ONE second it\n"
	.string "wavered.\p"
	.string "Nobody believes me, but my psyduck\n"
	.string "stopped running and looked intrigued.\p"
	.string "Then he went back to being anoyed.$"

Marshduke_Indoor_PokemonCenter_1F_FatMan_Text_0:
	.string "Most towns, trainers heal and leave.\p"
	.string "Here, they heal and go stand in the\n"
	.string "cathedral for an hour.$"
