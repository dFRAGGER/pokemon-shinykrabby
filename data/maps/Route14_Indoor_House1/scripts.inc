Route14_Indoor_House1_MapScripts::
	.byte 0


Route14_Indoor_House1_NPC_CausewayResident::
	lock
	faceplayer
	msgbox Route14_Indoor_House1_NPC_CausewayResident_Text_0
	release
	end


Route14_Indoor_House1_NPC_BridgeAssistant::
	lock
	faceplayer
	msgbox Route14_Indoor_House1_NPC_BridgeAssistant_Text_0
	release
	end


Route14_Indoor_House1_NPC_CausewayResident_Text_0:
	.string "Come in and get out of the wind.\p"
	.string "The old road was raised above the wet\n"
	.string "ground. Every repair lifts a bit of it\l"
	.string "again. At this rate my doorstep will\l"
	.string "need a ladder.$"

Route14_Indoor_House1_NPC_BridgeAssistant_Text_0:
	.string "Ari says he can clear the broken span.\n"
	.string "Wonderful.\p"
	.string "Now ask him to do it carrying six planks\n"
	.string "and a bucket of nails.$"
