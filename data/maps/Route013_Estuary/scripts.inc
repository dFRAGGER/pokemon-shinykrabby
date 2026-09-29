Route013_Estuary_MapScripts::
	.byte 0


Route013_Estuary_NPC_WoodlandPatrol::
	lock
	faceplayer
	msgbox Route013_Estuary_NPC_WoodlandPatrol_Text_0
	release
	end


Route013_Estuary_NPC_ReedPatrol::
	lock
	faceplayer
	msgbox Route013_Estuary_NPC_ReedPatrol_Text_0
	release
	end


Route013_Estuary_NPC_SurveyVolunteer::
	lock
	faceplayer
	msgbox Route013_Estuary_NPC_SurveyVolunteer_Text_0
	release
	end


Route013_Estuary_NPC_WoodlandPatrol_Text_0:
	.string "URSARING leaves more than footprints:\n"
	.string "bent stems, claw marks, a very unhappy\l"
	.string "berry bush.\p"
	.string "Watch from the hut first. Give the\n"
	.string "animal room to choose where it goes.$"

Route013_Estuary_NPC_ReedPatrol_Text_0:
	.string "A reed moving against the wind is worth\n"
	.string "watching.\p"
	.string "A whole patch shaking usually means my\n"
	.string "assistant has dropped the measuring\l"
	.string "pole again.$"

Route013_Estuary_NPC_SurveyVolunteer_Text_0:
	.string "I wrote 'nothing' in the sightings book.\n"
	.string "The ranger asked how long I watched.\p"
	.string "Three seconds. Apparently that was the\n"
	.string "problem.$"
