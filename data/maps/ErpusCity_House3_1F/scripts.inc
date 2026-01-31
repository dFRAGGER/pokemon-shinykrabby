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
	setspeaker ErpusCity_House3_1F_DadBirds_Conversation_Text_0
# 9 "data/maps/ErpusCity_House3_1F/scripts.pory"
	msgbox ErpusCity_House3_1F_DadBirds_Conversation_Text_1
# 10 "data/maps/ErpusCity_House3_1F/scripts.pory"
	waitmessage
# 11 "data/maps/ErpusCity_House3_1F/scripts.pory"
	releaseall
	return


ErpusCity_House3_1F_DadBirds_Conversation_Text_0:
# 8 "data/maps/ErpusCity_House3_1F/scripts.pory"
	.string "John Birds$"

ErpusCity_House3_1F_DadBirds_Conversation_Text_1:
# 9 "data/maps/ErpusCity_House3_1F/scripts.pory"
	.string "Back in the day, my son and I ran a pig\n"
	.string "farm together in a town much like this\l"
	.string "one.\p"
	.string "Nowadays, he's more into advanced\n"
	.string "technology and runs the local lab.\p"
	.string "After I retired, I spent years traveling\n"
	.string "to festivals and partying, but I'm\l"
	.string "getting too old for that shit now.\p"
	.string "So, I followed my son when he moved\n"
	.string "here, looking for a quieter life.\p"
	.string "He can be a bit chaotic, but he's got a\n"
	.string "good heart.$"
