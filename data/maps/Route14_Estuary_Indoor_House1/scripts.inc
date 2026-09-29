Route14_Estuary_Indoor_House1_MapScripts::
	.byte 0


Route14_Estuary_Indoor_House1_NPC_WoodlandRanger::
	lock
	faceplayer
	msgbox Route14_Estuary_Indoor_House1_NPC_WoodlandRanger_Text_0
	release
	end


Route14_Estuary_Indoor_House1_NPC_WoodlandObserver::
	lock
	faceplayer
	msgbox Route14_Estuary_Indoor_House1_NPC_WoodlandObserver_Text_0
	release
	end


Route14_Estuary_Indoor_House1_NPC_WoodlandRanger_Text_0:
	.string "This ranger post overlooks the\n"
	.string "woodland edge.\p"
	.string "An URSARING sometimes comes out along\n"
	.string "the treeline. Watch the gaps, not just\l"
	.string "the tallest trees.\p"
	.string "Fresh marks on bark can help you follow\n"
	.string "its route. Keep your distance; seeing it\l"
	.string "doesn't mean it wants company.$"

Route14_Estuary_Indoor_House1_NPC_WoodlandObserver_Text_0:
	.string "I thought the bear was watching me. The\n"
	.string "ranger says it was watching my lunch. I\l"
	.string "put the lunch away.$"
