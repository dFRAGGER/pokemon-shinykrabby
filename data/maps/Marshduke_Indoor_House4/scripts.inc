Marshduke_Indoor_House4_MapScripts::
	.byte 0


Marshduke_Indoor_House4_Ari::
	lock
	faceplayer
	setspeaker Marshduke_Indoor_House4_Ari_Text_0
	goto_if_unset FLAG_MET_ARI, Marshduke_Indoor_House4_Ari_2
	goto_if_unset FLAG_STRENGTH_UNLOCKED, Marshduke_Indoor_House4_Ari_5
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	setspeaker Marshduke_Indoor_House4_Ari_Text_0
	msgbox Marshduke_Indoor_House4_Ari_Text_3, MSGBOX_AUTOCLOSE
	setflag FLAG_ARI_SPRINT_CHALLENGE
	compare VAR_TEMP_0, 5
	goto_if_eq Marshduke_Indoor_House4_Ari_8
	applymovement 3, Marshduke_Indoor_House4_Ari_Movement_1
Marshduke_Indoor_House4_Ari_7:
	removeobject 3
	waitmessage
	release
	end

Marshduke_Indoor_House4_Ari_2:
	setflag FLAG_MET_ARI
	setspeaker Marshduke_Indoor_House4_Ari_Text_0
	msgbox Marshduke_Indoor_House4_Ari_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end

Marshduke_Indoor_House4_Ari_5:
	setspeaker Marshduke_Indoor_House4_Ari_Text_0
	msgbox Marshduke_Indoor_House4_Ari_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end

Marshduke_Indoor_House4_Ari_8:
	applymovement 3, Marshduke_Indoor_House4_Ari_Movement_0
	goto Marshduke_Indoor_House4_Ari_7


Marshduke_Indoor_House4_KimonoGirl::
	lock
	faceplayer
	msgbox Marshduke_Indoor_House4_KimonoGirl_Text_0
	waitmessage
	release
	end


Marshduke_Indoor_House4_WatchVisitor::
	lock
	faceplayer
	msgbox Marshduke_Indoor_House4_WatchVisitor_Text_0
	waitmessage
	release
	end


Marshduke_Indoor_House4_Sign_BrassTowerBeam::
	lock
	msgbox Marshduke_Indoor_House4_Sign_BrassTowerBeam_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_House4_Sign_Sneaker1::
	lock
	msgbox Marshduke_Indoor_House4_Sign_Sneaker1_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_House4_Sign_Sneaker2::
	lock
	msgbox Marshduke_Indoor_House4_Sign_Sneaker2_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_House4_Sign_Sneaker3::
	lock
	msgbox Marshduke_Indoor_House4_Sign_Sneaker3_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_House4_Sign_Watch1::
	lock
	msgbox Marshduke_Indoor_House4_Sign_Watch1_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_House4_Sign_Watch2::
	lock
	msgbox Marshduke_Indoor_House4_Sign_Watch2_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_House4_Sign_Watch3::
	lock
	msgbox Marshduke_Indoor_House4_Sign_Watch3_Text_0, MSGBOX_SIGN
	waitmessage
	release
	end


Marshduke_Indoor_House4_Ari_Movement_0:
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Marshduke_Indoor_House4_Ari_Movement_1:
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Marshduke_Indoor_House4_Ari_Text_0:
	.string "ARI$"

Marshduke_Indoor_House4_Ari_Text_1:
	.string "Hey! Mind the floor, I've just cleaned\n"
	.string "it.\p"
	.string "Welcome to the Cartesius Gallery. I'm\n"
	.string "ARI, I collected everything you see\l"
	.string "here.\p"
	.string "Simple method: work sixty hours a week,\n"
	.string "then spend your weekends buying from\l"
	.string "everyone else.\p"
	.string "Especially watches and sneakers, those\n"
	.string "are my kryptonite.\p"
	.string "I just wear them once, then place them\n"
	.string "behind the glass.\p"
	.string "You can't have them getting dirty, you\n"
	.string "know?\p"
	.string "Sometimes a historical artifact slips\n"
	.string "through, but those serve another\l"
	.string "purpose...\p"
	.string "You've got to be fast on the\n"
	.string "marketplaces these days.\p"
	.string "That's why I can run a sub-ten in the\n"
	.string "hundred meters as well.\p"
	.string "But only in those brand new shoes, you\n"
	.string "know what I mean.\p"
	.string "...\p"
	.string "You want to race me?\p"
	.string "...\p"
	.string "Ha! Not yet. You've got the legs, but\n"
	.string "not the STRENGTH.\p"
	.string "Out there, the two go together.\p"
	.string "You can't have speed without STRENGTH.\p"
	.string "Come back when you can move something\n"
	.string "that doesn't want to move.$"

Marshduke_Indoor_House4_Ari_Text_2:
	.string "Still no STRENGTH, huh?\p"
	.string "Come back when you can move something\n"
	.string "that doesn't want to move.\p"
	.string "The local gym can probably help you\n"
	.string "train some STRENGTH.\p"
	.string "In the meantime, you can look around\n"
	.string "the gallery. I don't mind.$"

Marshduke_Indoor_House4_Ari_Text_3:
	.string "Well, look who finally moved something\n"
	.string "that didn't want to move.\p"
	.string "Alright, you've earned that race.\p"
	.string "Just don't expect me to go easy on you,\n"
	.string "not in these shoes.\p"
	.string "Out past the platforms, east, where the\n"
	.string "boards are broken.\p"
	.string "Meet me there.\p"
	.string "Wear something you don't mind losing,\n"
	.string "like those ugly shoes.$"

Marshduke_Indoor_House4_KimonoGirl_Text_0:
	.string "Oh. So this is where she ended up.\p"
	.string "I always pictured her somewhere\n"
	.string "quieter. A shrine, maybe. Not behind\l"
	.string "glass with a price tag.\p"
	.string "It's strange, seeing centuries of my\n"
	.string "sisters' dancing reduced to a museum\l"
	.string "piece for sale.\p"
	.string "But... the glass is spotless, and the\n"
	.string "case is dust-free.\p"
	.string "Ari may sell everything he loves, but he\n"
	.string "does take care of it first. I suppose\l"
	.string "that's worth something.$"

Marshduke_Indoor_House4_WatchVisitor_Text_0:
	.string "Look at this thing. Wound, polished,\n"
	.string "never once worn out the door.\p"
	.string "Why buy something you're not even going\n"
	.string "to use?\p"
	.string "...\p"
	.string "Then again, I've got sneakers at home\n"
	.string "still in the box, so who am I to talk.$"

Marshduke_Indoor_House4_Sign_BrassTowerBeam_Text_0:
	.string "A blackened length of timber, cut clean\n"
	.string "at one end.\p"
	.string "The label reads: 'BRASS TOWER -\n"
	.string "recovered beam.$"

Marshduke_Indoor_House4_Sign_Sneaker1_Text_0:
	.string "A single sneaker, still creased at the\n"
	.string "toe.\p"
	.string "The card reads: 'Limited release. Ran\n"
	.string "once around the block. Never again.'$"

Marshduke_Indoor_House4_Sign_Sneaker2_Text_0:
	.string "White canvas, spotless, laces still\n"
	.string "knotted from the box.\p"
	.string "The card reads: 'Queued four hours for\n"
	.string "these. Wore them to the car and back.'$"

Marshduke_Indoor_House4_Sign_Sneaker3_Text_0:
	.string "A sneaker with the tag still looped\n"
	.string "through the laces.\p"
	.string "Someone has crossed out the price\n"
	.string "twice and written a higher one both\l"
	.string "times.$"

Marshduke_Indoor_House4_Sign_Watch1_Text_0:
	.string "A watch stopped at some hour that\n"
	.string "meant something to somebody else.\p"
	.string "The card reads: 'Keeps perfect time.\n"
	.string "Ask Ari why that doesn't matter.'$"

Marshduke_Indoor_House4_Sign_Watch2_Text_0:
	.string "Gold case, hands frozen mid-tick.\p"
	.string "Wound once, for the photo, then never\n"
	.string "again.$"

Marshduke_Indoor_House4_Sign_Watch3_Text_0:
	.string "A watch too fine to risk wearing.\p"
	.string "The glass has fogged, just slightly,\n"
	.string "where someone's breath got too close.$"
