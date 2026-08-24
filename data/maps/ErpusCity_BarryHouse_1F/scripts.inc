ErpusCity_BarryHouse_1F_MapScripts::
	.byte 0


ErpusCity_Barryhouse_1F_Mother::
	lock
	faceplayer
	setspeaker ErpusCity_Barryhouse_1F_Mother_Text_0
	msgbox ErpusCity_Barryhouse_1F_Mother_Text_1
	waitmessage
	release
	return


ErpusCity_Barryhouse_1F_Father::
	lock
	faceplayer
	setspeaker ErpusCity_Barryhouse_1F_Father_Text_0
	msgbox ErpusCity_Barryhouse_1F_Father_Text_1
	waitmessage
	release
	return


ErpusCity_Barryhouse_1F_Mother_Text_0:
	.string "BARRY'S MOM$"

ErpusCity_Barryhouse_1F_Mother_Text_1:
	.string "Oh, hello... You're the new intern for\n"
	.string "Professor Birds, aren't you?\p"
	.string "It's lovely to meet you\p"
	.string "....Wouter? Oh, don't you worry about him.\n"
	.string "He was a bit... disappointed, yes.\p"
	.string "He came home in quite a huff with that\n"
	.string "splashing little Magikarp.\p"
	.string "But my Wouter is resilient! He's always\n"
	.string "been so determined to prove himself.\p"
	.string "In fact, he's already found a new\n"
	.string "opportunity.\p"
	.string "A private tutor from the city reached\n"
	.string "out to him.\p"
	.string "Someone from a very prestigious... well,\n"
	.string "a 'faculty' of educators, I believe they\l"
	.string "called it.\p"
	.string "They said they saw his 'true potential'\n"
	.string "and that their structured methods are\l"
	.string "far superior to that messy, eccentric\l"
	.string "professor.\p"
	.string "He packed his bag and left immediately.\p"
	.string "I'm sure he'll be the talk of the\n"
	.string "Pokémon League in no time.\p"
	.string "He just needs the right kind of\n"
	.string "guidance, you know?$"

ErpusCity_Barryhouse_1F_Father_Text_0:
	.string "BARRY'S DAD$"

ErpusCity_Barryhouse_1F_Father_Text_1:
	.string "So, you're the one who got the spot. Hm.\p"
	.string "Don't mind the boy. If he couldn't\n"
	.string "secure a simple internship, he didn't\l"
	.string "deserve it.\p"
	.string "Life isn't about luck; it's about\n"
	.string "results.\p"
	.string "Coddling and 'believing in yourself' is\n"
	.string "for children.\p"
	.string "What matters is discipline. Power. A\n"
	.string "clear path to victory.\p"
	.string "He came home complaining, with some\n"
	.string "useless fish flapping at his feet.\p"
	.string "I told him to stop whining and find\n"
	.string "someone who could teach him what it\l"
	.string "really takes to be strong.\p"
	.string "Looks like he finally listened for once.\p"
	.string "This new group he's with... they\n"
	.string "understand. No nonsense. No chaos.\l"
	.string "Just the cold, hard logic of winning.\p"
	.string "Let's see if they can finally make\n"
	.string "something of him.$"
