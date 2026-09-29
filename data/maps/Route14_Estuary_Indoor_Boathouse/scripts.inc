Route14_Estuary_Indoor_Boathouse_MapScripts::
	.byte 0


Route14_Estuary_Indoor_Boathouse_NPC_PatrolStores::
	lock
	faceplayer
	msgbox Route14_Estuary_Indoor_Boathouse_NPC_PatrolStores_Text_0
	release
	end


Route14_Estuary_Indoor_Boathouse_NPC_LogKeeper::
	lock
	faceplayer
	msgbox Route14_Estuary_Indoor_Boathouse_NPC_LogKeeper_Text_0
	release
	end


Route14_Estuary_Indoor_Boathouse_NPC_PatrolStores_Text_0:
	.string "Patrol stores. Spare lenses, dry maps,\n"
	.string "boat equipment.\p"
	.string "If you've come for a fishing licence,\n"
	.string "you've followed a very old sign.$"

Route14_Estuary_Indoor_Boathouse_NPC_LogKeeper_Text_0:
	.string "Each hut sends its observations here.\n"
	.string "We keep the dates and locations\l"
	.string "together.\p"
	.string "The same URSARING walking past two\n"
	.string "posts is still one URSARING. An easy way\l"
	.string "to double our numbers, though.$"
