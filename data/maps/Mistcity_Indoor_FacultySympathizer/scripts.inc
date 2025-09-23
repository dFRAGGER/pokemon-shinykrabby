Mistcity_Indoor_FacultySympathizer_MapScripts::
	.byte 0


Mistcity_Indoor_Faculty_Husband::
# 4 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	lock
# 5 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	faceplayer
# 6 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	goto_if_unset FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Faculty_Husband_2
# 12 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Faculty_Husband_4
	return

Mistcity_Indoor_Faculty_Husband_2:
# 7 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_Faculty_Husband_Text_0
# 8 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 9 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	release
	end

Mistcity_Indoor_Faculty_Husband_4:
# 13 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_Faculty_Husband_Text_1
# 14 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 15 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	release
	end


Mistcity_Indoor_Faculty_Wife::
# 21 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	lock
# 22 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	faceplayer
# 23 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	goto_if_unset FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Faculty_Wife_2
# 29 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	goto_if_set FLAG_HELPED_DAN_BEAT_FACULTY, Mistcity_Indoor_Faculty_Wife_4
	return

Mistcity_Indoor_Faculty_Wife_2:
# 24 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_Faculty_Wife_Text_0
# 25 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 26 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	release
	end

Mistcity_Indoor_Faculty_Wife_4:
# 30 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	msgbox Mistcity_Indoor_Faculty_Wife_Text_1
# 31 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	waitmessage
# 32 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	release
	end


Mistcity_Indoor_Faculty_Husband_Text_0:
# 7 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Welcome to the future site of progress.\p"
	.string "My name is Marcus.\p"
	.string "The Faculty transferred me here to\n"
	.string "oversee regional development.\p"
	.string "This town and forest is a chaotic mess\n"
	.string "of untapped resources.\p"
	.string "We're here to implement structure, to\n"
	.string "turn this town into a model of\l"
	.string "efficiency.$"

Mistcity_Indoor_Faculty_Husband_Text_1:
# 13 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "You.\p"
	.string "So you're the hooligan who interfered\n"
	.string "with our work.\p"
	.string "You've accomplished nothing but\n"
	.string "delaying the inevitable.\p"
	.string "This region needs order, not\n"
	.string "sentimental rabble-rousers.$"

Mistcity_Indoor_Faculty_Wife_Text_0:
# 24 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Oh, hello.\p"
	.string "A new face?\p"
	.string "I'm Eleanor.\p"
	.string "Mist City has a certain... rustic charm, I\n"
	.string "suppose.\p"
	.string "But it's so dreadfully unproductive.\p"
	.string "Don't you worry, The Faculty will bring\n"
	.string "modern amenities and a real sense of\l"
	.string "purpose to this place.\p"
	.string "That Dan fellow chaining himself to a\n"
	.string "tree? Utterly backwards.\p"
	.string "You can't stop the future.$"

Mistcity_Indoor_Faculty_Wife_Text_1:
# 30 "data/maps/Mistcity_Indoor_FacultySympathizer/scripts.pory"
	.string "Mph.\p"
	.string "I suppose you think you're some kind of\n"
	.string "hero.\p"
	.string "Enjoy your precious, muddy trees.\p"
	.string "Progress will find a way, with or without\n"
	.string "your approval.$"
