# 1 "data/maps/ErpusCity_House3_1F/scripts.pory"
ErpusCity_House3_1F_MapScripts::
# 2 "data/maps/ErpusCity_House3_1F/scripts.pory"
	.byte 0

ErpusCity_House3_1F_DadBirds_Conversation::
# 6 "data/maps/ErpusCity_House3_1F/scripts.pory"
	lockall
# 7 "data/maps/ErpusCity_House3_1F/scripts.pory"
	faceplayer
# 8 "data/maps/ErpusCity_House3_1F/scripts.pory"
	msgbox ErpusCity_House3_1F_DadBirds_Conversation_Text_0
# 9 "data/maps/ErpusCity_House3_1F/scripts.pory"
	waitmessage
# 10 "data/maps/ErpusCity_House3_1F/scripts.pory"
	releaseall
	return


ErpusCity_House3_1F_DadBirds_Conversation_Text_0:
# 8 "data/maps/ErpusCity_House3_1F/scripts.pory"
	.string "When I retired I travelled to a lot of\n"
	.string "festivals and partied a lot,\n"
	.string "but I'm getting to old for that shit\l"
	.string "now.\n"
	.string "I followed my son when he moved to this\l"
	.string "town to live in a more quite place.\n"
	.string "Back in the day I ran a pig farm in a\l"
	.string "similar town together with my son.\n"
	.string "Nowadays my son is more into advanced\l"
	.string "technology and runs the local lab.\n"
	.string "He may be chaotic, but he has a good\l"
	.string "heart.$"
