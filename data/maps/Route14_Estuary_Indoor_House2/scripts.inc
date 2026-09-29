Route14_Estuary_Indoor_House2_MapScripts::
	.byte 0


Route14_Estuary_Indoor_House2_NPC_ReedsRanger::
	lock
	faceplayer
	msgbox Route14_Estuary_Indoor_House2_NPC_ReedsRanger_Text_0
	release
	end


Route14_Estuary_Indoor_House2_NPC_ReedsObserver::
	lock
	faceplayer
	msgbox Route14_Estuary_Indoor_House2_NPC_ReedsObserver_Text_0
	release
	end


Route14_Estuary_Indoor_House2_NPC_ReedsRanger_Text_0:
	.string "This ranger post overlooks the reed\n"
	.string "beds.\p"
	.string "PSYDUCK slips between the stems. A\n"
	.string "moving reed may be the only sign you\l"
	.string "get.\p"
	.string "Notice where the stems part. From\n"
	.string "ground level, the opening is easier to\l"
	.string "find than the Pokemon.$"

Route14_Estuary_Indoor_House2_NPC_ReedsObserver_Text_0:
	.string "I've been staring at one reed for ten\n"
	.string "minutes. It moved! Oh. That was the\l"
	.string "ranger opening the door.$"
