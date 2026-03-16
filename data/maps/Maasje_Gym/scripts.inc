Maasje_Gym_MapScripts::
# 2 "data/maps/Maasje_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Maasje_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Maasje_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Maasje_Gym/scripts.pory"
	call Maasje_Gym_Check_Buried
	return


Maasje_Gym_Introduction::
# 8 "data/maps/Maasje_Gym/scripts.pory"
	lock
# 9 "data/maps/Maasje_Gym/scripts.pory"
	goto_if_unset FLAG_ITEM_FRESH_WATER_GYM1, Maasje_Gym_Introduction_3
Maasje_Gym_Introduction_1:
# 20 "data/maps/Maasje_Gym/scripts.pory"
	goto_if_set FLAG_ITEM_FRESH_WATER_GYM1, Maasje_Gym_Introduction_8
Maasje_Gym_Introduction_6:
# 26 "data/maps/Maasje_Gym/scripts.pory"
	goto_if_set FLAG_ITEM_FRESH_WATER_GYM1, Maasje_Gym_Introduction_12
	return

Maasje_Gym_Introduction_2:
# 10 "data/maps/Maasje_Gym/scripts.pory"
	setflag FLAG_ITEM_FRESH_WATER_GYM1
# 11 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Introduction_Text_0
# 12 "data/maps/Maasje_Gym/scripts.pory"
	waitmessage
# 13 "data/maps/Maasje_Gym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 14 "data/maps/Maasje_Gym/scripts.pory"
	waitmessage
# 15 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Introduction_Text_1
# 16 "data/maps/Maasje_Gym/scripts.pory"
	waitmessage
# 17 "data/maps/Maasje_Gym/scripts.pory"
	release
	end

Maasje_Gym_Introduction_3:
# 9 "data/maps/Maasje_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, Maasje_Gym_Introduction_2
	goto Maasje_Gym_Introduction_1

Maasje_Gym_Introduction_7:
# 21 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Introduction_Text_2
# 22 "data/maps/Maasje_Gym/scripts.pory"
	waitmessage
# 23 "data/maps/Maasje_Gym/scripts.pory"
	release
	end

Maasje_Gym_Introduction_8:
# 20 "data/maps/Maasje_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, Maasje_Gym_Introduction_7
	goto Maasje_Gym_Introduction_6

Maasje_Gym_Introduction_11:
# 27 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Introduction_Text_3
# 28 "data/maps/Maasje_Gym/scripts.pory"
	waitmessage
# 29 "data/maps/Maasje_Gym/scripts.pory"
	release
	end

Maasje_Gym_Introduction_12:
# 26 "data/maps/Maasje_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Maasje_Gym_Introduction_11
	return


Maasje_Gym_Leader_Pete_Longfellow::
# 34 "data/maps/Maasje_Gym/scripts.pory"
	trainerbattle_single TRAINER_PETELONGFELLOW, Maasje_Gym_PeteLongfellow_Introtext, Maasje_Gym_PeteLongfellow_Defeattext, Maasje_Gym_PeteLongfellow_Defeated, NO_MUSIC
# 35 "data/maps/Maasje_Gym/scripts.pory"
	release
	end


Maasje_Gym_PeteLongfellow_Defeated::
# 40 "data/maps/Maasje_Gym/scripts.pory"
	setspeaker Maasje_Gym_PeteLongfellow_Defeated_Text_0
# 41 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_PeteLongfellow_Defeated_Text_1
# 42 "data/maps/Maasje_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 43 "data/maps/Maasje_Gym/scripts.pory"
	giveitem ITEM_TM37
# 44 "data/maps/Maasje_Gym/scripts.pory"
	setspeaker Maasje_Gym_PeteLongfellow_Defeated_Text_0
# 45 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_PeteLongfellow_Defeated_Text_2, MSGBOX_AUTOCLOSE
# 46 "data/maps/Maasje_Gym/scripts.pory"
	setflag FLAG_HIDE_PETELONGFELLOW
# 47 "data/maps/Maasje_Gym/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 48 "data/maps/Maasje_Gym/scripts.pory"
	compare VAR_TEMP_0, 13
	goto_if_eq Maasje_Gym_PeteLongfellow_Defeated_4
Maasje_Gym_PeteLongfellow_Defeated_3:
# 52 "data/maps/Maasje_Gym/scripts.pory"
	applymovement 1, Maasje_Gym_PeteLongfellow_Defeated_Movement_1
Maasje_Gym_PeteLongfellow_Defeated_1:
# 54 "data/maps/Maasje_Gym/scripts.pory"
	waitmovement
# 55 "data/maps/Maasje_Gym/scripts.pory"
	removeobject 1
# 56 "data/maps/Maasje_Gym/scripts.pory"
	removeobject 3
# 57 "data/maps/Maasje_Gym/scripts.pory"
	removeobject 4
# 58 "data/maps/Maasje_Gym/scripts.pory"
	call Maasje_Gym_Set_Gym_Trainers
# 59 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_PeteLongfellow_Defeated_Text_3
# 60 "data/maps/Maasje_Gym/scripts.pory"
	waitmessage
# 61 "data/maps/Maasje_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 62 "data/maps/Maasje_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 63 "data/maps/Maasje_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 64 "data/maps/Maasje_Gym/scripts.pory"
	setflag FLAG_FACULTY_SYMPATHIZERS_1
# 65 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_PeteLongfellow_Defeated_Text_4, MSGBOX_AUTOCLOSE
# 66 "data/maps/Maasje_Gym/scripts.pory"
	release
	return

Maasje_Gym_PeteLongfellow_Defeated_2:
# 49 "data/maps/Maasje_Gym/scripts.pory"
	applymovement 1, Maasje_Gym_PeteLongfellow_Defeated_Movement_0
	goto Maasje_Gym_PeteLongfellow_Defeated_1

Maasje_Gym_PeteLongfellow_Defeated_4:
# 48 "data/maps/Maasje_Gym/scripts.pory"
	compare VAR_TEMP_1 == 3, 0
	goto_if_ne Maasje_Gym_PeteLongfellow_Defeated_2
	goto Maasje_Gym_PeteLongfellow_Defeated_3


Maasje_Gym_Set_Gym_Trainers::
# 78 "data/maps/Maasje_Gym/scripts.pory"
	settrainerflag TRAINER_BRAM
# 79 "data/maps/Maasje_Gym/scripts.pory"
	settrainerflag TRAINER_ROB
# 80 "data/maps/Maasje_Gym/scripts.pory"
	settrainerflag TRAINER_ADDY
# 81 "data/maps/Maasje_Gym/scripts.pory"
	settrainerflag TRAINER_MART
	return


Maasje_Gym_Check_Buried::
# 85 "data/maps/Maasje_Gym/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_BURIED
# 86 "data/maps/Maasje_Gym/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_BURIED
	return


Maasje_Gym_Eventscript_Bram::
# 90 "data/maps/Maasje_Gym/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_BRAM, TRAINER_BRAM, Maasje_Gym_Introtext_Trainer_Bram, Maasje_Gym_Losetext_Trainer_Bram, NULL, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 91 "data/maps/Maasje_Gym/scripts.pory"
	setspeaker Maasje_Gym_Eventscript_Bram_Text_0
# 92 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Eventscript_Bram_Text_1, MSGBOX_AUTOCLOSE
	end


Maasje_Gym_Eventscript_Rob::
# 105 "data/maps/Maasje_Gym/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_ROB, TRAINER_ROB, Maasje_Gym_Introtext_Trainer_Rob, Maasje_Gym_Losetext_Trainer_Rob, NULL, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 106 "data/maps/Maasje_Gym/scripts.pory"
	setspeaker Maasje_Gym_Eventscript_Rob_Text_0
# 107 "data/maps/Maasje_Gym/scripts.pory"
	msgbox Maasje_Gym_Eventscript_Rob_Text_1, MSGBOX_AUTOCLOSE
	end


# 49 "data/maps/Maasje_Gym/scripts.pory"
Maasje_Gym_PeteLongfellow_Defeated_Movement_0:
# 49 "data/maps/Maasje_Gym/scripts.pory"
	walk_right
# 49 "data/maps/Maasje_Gym/scripts.pory"
	walk_down
# 49 "data/maps/Maasje_Gym/scripts.pory"
	walk_down
# 49 "data/maps/Maasje_Gym/scripts.pory"
	walk_down
# 49 "data/maps/Maasje_Gym/scripts.pory"
	walk_down
# 49 "data/maps/Maasje_Gym/scripts.pory"
	walk_down
# 49 "data/maps/Maasje_Gym/scripts.pory"
	walk_down
# 49 "data/maps/Maasje_Gym/scripts.pory"
	walk_down
	step_end

# 52 "data/maps/Maasje_Gym/scripts.pory"
Maasje_Gym_PeteLongfellow_Defeated_Movement_1:
# 52 "data/maps/Maasje_Gym/scripts.pory"
	walk_down
# 52 "data/maps/Maasje_Gym/scripts.pory"
	walk_down
# 52 "data/maps/Maasje_Gym/scripts.pory"
	walk_down
# 52 "data/maps/Maasje_Gym/scripts.pory"
	walk_down
# 52 "data/maps/Maasje_Gym/scripts.pory"
	walk_down
# 52 "data/maps/Maasje_Gym/scripts.pory"
	walk_down
# 52 "data/maps/Maasje_Gym/scripts.pory"
	walk_down
	step_end

Maasje_Gym_Introduction_Text_0:
# 11 "data/maps/Maasje_Gym/scripts.pory"
	.string "Hi, welcome to the Maasje Pokemon Gym.\p"
	.string "The gym leader and trainers use sand &\n"
	.string "ground pokemon.\p"
	.string "Grass pokemon seem to have an edge,\n"
	.string "while electric pokemon are not\l"
	.string "recommended.\p"
	.string "The gym leader is called Pete\n"
	.string "Longfellow, he used to be a geography\l"
	.string "teacher.\p"
	.string "He has been training pokemon for a long\n"
	.string "time but he can be stubborn and\l"
	.string "emotional.\p"
	.string "Stay cool and calm and you should be\n"
	.string "good.\p"
	.string "Also have this:$"

Maasje_Gym_Introduction_Text_1:
# 15 "data/maps/Maasje_Gym/scripts.pory"
	.string "Good luck!!$"

Maasje_Gym_Introduction_Text_2:
# 21 "data/maps/Maasje_Gym/scripts.pory"
	.string "Hi, welcome to the Maasje Pokemon Gym.\p"
	.string "The gym leader and trainers use sand &\n"
	.string "ground pokemon.\p"
	.string "Grass pokemon seem to have an edge,\n"
	.string "while electric pokemon are not\l"
	.string "recommended.\p"
	.string "The gym leader is called Pete\n"
	.string "Longfellow, he used to be a geography\l"
	.string "teacher.\p"
	.string "He has been training pokemon for a long\n"
	.string "time but he can be stubborn and\l"
	.string "emotional.\p"
	.string "Stay cool and calm and you should be\n"
	.string "good.$"

Maasje_Gym_Introduction_Text_3:
# 27 "data/maps/Maasje_Gym/scripts.pory"
	.string "Congrats on getting your badge!\p"
	.string "Pete looked mad, I don't think he is\n"
	.string "coming back.$"

Maasje_Gym_PeteLongfellow_Defeated_Text_0:
# 40 "data/maps/Maasje_Gym/scripts.pory"
	.string "Pete$"

Maasje_Gym_PeteLongfellow_Defeated_Text_1:
# 41 "data/maps/Maasje_Gym/scripts.pory"
	.string "In geography we call this fulgurite,\n"
	.string "just pure luck.\p"
	.string "Only regirous order and obedience will\n"
	.string "help you against The Faculty.\p"
	.string "Nothing else beats it.\p"
	.string "This move I used during battle was too\n"
	.string "random as well, you can have it:$"

Maasje_Gym_PeteLongfellow_Defeated_Text_2:
# 45 "data/maps/Maasje_Gym/scripts.pory"
	.string "This Technical Machine is called\n"
	.string "Sandstorm.\p"
	.string "It creates a sandstorm on the\n"
	.string "battlefield that last 5 turns with\l"
	.string "additional effects....\p"
	.string "which I forgot..\p"
	.string "You might have been lucky against me,\n"
	.string "but the rest of The Factulty will ruin\l"
	.string "your life.\p"
	.string "Running this gym has been fun, but the\n"
	.string "grand mission of The Faculty calls.\p"
	.string "Soon, the unyielding stone of true\n"
	.string "order will put you in your place.$"

Maasje_Gym_PeteLongfellow_Defeated_Text_3:
# 59 "data/maps/Maasje_Gym/scripts.pory"
	.string "Pete seems to have dropped something.\p"
	.string "It seems to be the Sand Badge!$"

Maasje_Gym_PeteLongfellow_Defeated_Text_4:
# 65 "data/maps/Maasje_Gym/scripts.pory"
	.string "On the back it says: 'This badge gives\n"
	.string "you the permission to cut down trees\l"
	.string "with the move Cut.'$"

Maasje_Gym_Eventscript_Bram_Text_0:
# 91 "data/maps/Maasje_Gym/scripts.pory"
	.string "Bram of the Millcount$"

Maasje_Gym_Eventscript_Bram_Text_1:
# 92 "data/maps/Maasje_Gym/scripts.pory"
	.string "The faculty is a strong faction, almost\n"
	.string "as strong as those chemical bonds I\l"
	.string "used to create back in the day.$"

Maasje_Gym_Eventscript_Rob_Text_0:
# 106 "data/maps/Maasje_Gym/scripts.pory"
	.string "Rob of Erpus$"

Maasje_Gym_Eventscript_Rob_Text_1:
# 107 "data/maps/Maasje_Gym/scripts.pory"
	.string "The faculty is all about structure, just\n"
	.string "like the computers I used to fix at my\l"
	.string "old job.$"

Maasje_Gym_PeteLongfellow_Introtext::
# 69 "data/maps/Maasje_Gym/scripts.pory"
	.string "Well, well.\p"
	.string "Look who we got here.\p"
	.string "Let me learn you something about\n"
	.string "tectonic plates and the glorious power\l"
	.string "of erosion!!$"

Maasje_Gym_PeteLongfellow_Defeattext::
# 73 "data/maps/Maasje_Gym/scripts.pory"
	.string "I might be getting to old for this.\p"
	.string "Maybe my skills have finally eroded with\n"
	.string "the wind.$"

Maasje_Gym_Introtext_Trainer_Bram::
# 96 "data/maps/Maasje_Gym/scripts.pory"
	.string "Everybody calls me an assistant.\n"
	.string "I call myself a TOA!!$"

Maasje_Gym_Losetext_Trainer_Bram::
# 100 "data/maps/Maasje_Gym/scripts.pory"
	.string "Maybe I'm just an assitant afterall.$"

Maasje_Gym_Introtext_Trainer_Rob::
# 111 "data/maps/Maasje_Gym/scripts.pory"
	.string "I used to be a boring IT guy.\n"
	.string "Now I am the bug in the system!!$"

Maasje_Gym_Losetext_Trainer_Rob::
# 115 "data/maps/Maasje_Gym/scripts.pory"
	.string "It seems like my strategy got hacked.$"
