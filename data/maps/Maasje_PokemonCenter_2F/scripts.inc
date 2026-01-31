Maasje_PokemonCenter_2F_MapScripts::
	.byte 0


Maasje_PokemonCenter_2F_Red::
# 4 "data/maps/Maasje_PokemonCenter_2F/scripts.pory"
	lock
# 5 "data/maps/Maasje_PokemonCenter_2F/scripts.pory"
	faceplayer
# 6 "data/maps/Maasje_PokemonCenter_2F/scripts.pory"
	setspeaker Maasje_PokemonCenter_2F_Red_Text_0
# 7 "data/maps/Maasje_PokemonCenter_2F/scripts.pory"
	msgbox Maasje_PokemonCenter_2F_Red_Text_1
# 8 "data/maps/Maasje_PokemonCenter_2F/scripts.pory"
	waitmessage
# 9 "data/maps/Maasje_PokemonCenter_2F/scripts.pory"
	release
	return


Maasje_PokemonCenter_2F_Red_Text_0:
# 6 "data/maps/Maasje_PokemonCenter_2F/scripts.pory"
	.string "Game Maker$"

Maasje_PokemonCenter_2F_Red_Text_1:
# 7 "data/maps/Maasje_PokemonCenter_2F/scripts.pory"
	.string "Hi there, I'm the creator of this game.\p"
	.string "I hope you're enjoying it so far!\p"
	.string "This game, its characters, maps, and\n"
	.string "plot, is based on a real-life group of\l"
	.string "friends.\p"
	.string "While many of the stories and plotlines\n"
	.string "are inspired by actual events, please\l"
	.string "take everything with a grain of salt.\p"
	.string "I've taken the creative liberty to let\n"
	.string "my imagination run wild, telling these\l"
	.string "stories in a style of game I've loved\l"
	.string "since I was a child.\p"
	.string "Have fun!$"
