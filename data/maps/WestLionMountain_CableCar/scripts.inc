WestLionMountain_CableCar_MapScripts::
	.byte 0


WestlionMountain_cablecar_receptionist::
	lock
	faceplayer
	msgbox WestlionMountain_cablecar_receptionist_Text_0, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


WestLionMountain_CableCar_Snowboarder::
	lock
	faceplayer
	msgbox WestLionMountain_CableCar_Snowboarder_Text_0, MSGBOX_AUTOCLOSE
	release
	end


WestLionMountain_CableCar_Skier_Cautious::
	lock
	faceplayer
	msgbox WestLionMountain_CableCar_Skier_Cautious_Text_0, MSGBOX_AUTOCLOSE
	release
	end


WestLionMountain_CableCar_Skier_Impatient::
	lock
	faceplayer
	msgbox WestLionMountain_CableCar_Skier_Impatient_Text_0, MSGBOX_AUTOCLOSE
	release
	end


WestlionMountain_cablecar_receptionist_Text_0:
	.string "Welcome to the West Lion Mountain Cable\n"
	.string "Car!\p"
	.string "Unfortunately, we are currently\n"
	.string "experiencing some technical\l"
	.string "difficulties.\p"
	.string "The weather is too poor for safe\n"
	.string "operation.\p"
	.string "Check back later!$"

WestLionMountain_CableCar_Snowboarder_Text_0:
	.string "I came all this way for the fresh\n"
	.string "powder!\p"
	.string "But the cable car is grounded, and even\n"
	.string "I won't ride in a whiteout.\p"
	.string "Guess my board and I will have to wait.$"

WestLionMountain_CableCar_Skier_Cautious_Text_0:
	.string "The Rangers say the wind has buried the\n"
	.string "trail markers near the summit.\p"
	.string "Closing the mountain was the right\n"
	.string "decision.\p"
	.string "The slopes will still be there when the\n"
	.string "storm passes.$"

WestLionMountain_CableCar_Skier_Impatient_Text_0:
	.string "My skis are waxed, my boots are\n"
	.string "fastened, and now the cable car won't\l"
	.string "move!\p"
	.string "I'll wait here a little longer. Maybe the\n"
	.string "weather will clear.$"
