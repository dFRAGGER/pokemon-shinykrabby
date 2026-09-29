Route14_Estuary_Indoor_House3_MapScripts::
	.byte 0


Route14_Estuary_Indoor_House3_NPC_PoolsRanger::
	lock
	faceplayer
	msgbox Route14_Estuary_Indoor_House3_NPC_PoolsRanger_Text_0
	release
	end


Route14_Estuary_Indoor_House3_NPC_PoolsObserver::
	lock
	faceplayer
	msgbox Route14_Estuary_Indoor_House3_NPC_PoolsObserver_Text_0
	release
	end


Route14_Estuary_Indoor_House3_NPC_PoolsRanger_Text_0:
	.string "This ranger post overlooks the shallow\n"
	.string "pools.\p"
	.string "WOOPER rests in the shallows. POLIWAG\n"
	.string "sometimes crosses the open water. They\l"
	.string "use different parts of the same pool.\p"
	.string "Trace the banks before heading out. A\n"
	.string "pool that looks close from this window\l"
	.string "may be a long walk away.$"

Route14_Estuary_Indoor_House3_NPC_PoolsObserver_Text_0:
	.string "The view shows three pools. My first\n"
	.string "sketch made them one big pond. That\l"
	.string "would have been an awkward walking\l"
	.string "route.$"
