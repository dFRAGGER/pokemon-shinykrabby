Route014_Estuary_MapScripts::
	.byte 0


Route014_Estuary_NPC_HutCoordinator::
	lock
	faceplayer
	msgbox Route014_Estuary_NPC_HutCoordinator_Text_0
	release
	end


Route014_Estuary_NPC_BoatWarden::
	lock
	faceplayer
	msgbox Route014_Estuary_NPC_BoatWarden_Text_0
	release
	end


Route014_Estuary_NPC_Visitor::
	lock
	faceplayer
	msgbox Route014_Estuary_NPC_Visitor_Text_0
	release
	end


Route014_Estuary_NPC_FootprintReader::
	lock
	faceplayer
	msgbox Route014_Estuary_NPC_FootprintReader_Text_0
	release
	end


Route014_Estuary_NPC_HutCoordinator_Text_0:
	.string "All four huts are ranger posts. Each\n"
	.string "watches a different habitat.\p"
	.string "Leave a note about where and when you\n"
	.string "saw something. 'Big. Over there.' is our\l"
	.string "least useful entry.$"

Route014_Estuary_NPC_BoatWarden_Text_0:
	.string "The boat carries patrol supplies\n"
	.string "between the posts.\p"
	.string "Half the cargo is notebooks. The other\n"
	.string "half is things to keep the notebooks\l"
	.string "dry.$"

Route014_Estuary_NPC_Visitor_Text_0:
	.string "I thought the huts were holiday\n"
	.string "cottages.\p"
	.string "The ranger handed me binoculars. Best\n"
	.string "disappointing holiday of my life.$"

Route014_Estuary_NPC_FootprintReader_Text_0:
	.string "Two sets of prints can belong to one\n"
	.string "Pokemon making a return trip.\p"
	.string "I once reported a herd. It was a very\n"
	.string "indecisive individual.$"
