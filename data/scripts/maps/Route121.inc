Route121_MapScripts:: @ 8151AFE
	map_script 3, Route121_MapScript1_151B04
	.byte 0

Route121_MapScript1_151B04:: @ 8151B04
	call Route121_EventScript_1A0196
	end

Route121_EventScript_151B0A:: @ 8151B0A
	msgbox Route121_Text_171CB4, 2
	end

Route121_EventScript_151B13:: @ 8151B13
	msgbox Route121_Text_171D0C, 3
	end

Route121_EventScript_151B1C:: @ 8151B1C
	msgbox Route121_Text_171D5B, 3
	end

Route121_EventScript_151B25:: @ 8151B25
	lockall
	msgbox Route121_Text_171C8F, 4
	closebutton
	move 12, Route121_Movement_151B57
	move 13, Route121_Movement_151B60
	move 14, Route121_Movement_151B69
	waitmove 0
	disappear 12
	disappear 13
	disappear 14
	setvar 0x4074, 1
	releaseall
	end

Route121_Movement_151B57:: @ 8151B57
	step_down
	step_down
	step_down
	step_down
	step_down
	step_down
	step_down
	step_down
	step_end

Route121_Movement_151B60:: @ 8151B60
	step_down
	step_down
	step_down
	step_down
	step_down
	step_down
	step_down
	step_down
	step_end

Route121_Movement_151B69:: @ 8151B69
	step_down
	step_down
	step_down
	step_down
	step_down
	step_down
	step_down
	step_down
	step_end

Route121_EventScript_151B72:: @ 8151B72
	trainerbattle 0, OPPONENT_VANESSA, 0, Route121_Text_1BF96E, Route121_Text_1BF9A1
	msgbox Route121_Text_1BF9BA, 6
	end

Route121_EventScript_151B89:: @ 8151B89
	trainerbattle 0, OPPONENT_WALTER_1, 0, Route121_Text_1BFA1B, Route121_Text_1BFA8C
	specialval RESULT, 57
	compare RESULT, 1
	jumpeq Route121_EventScript_151BB0
	msgbox Route121_Text_1BFA9D, 6
	end

Route121_EventScript_151BB0:: @ 8151BB0
	trainerbattle 5, OPPONENT_WALTER_1, 0, Route121_Text_1BFADA, Route121_Text_1BFB4B
	msgbox Route121_Text_1BFB5C, 6
	end

Route121_EventScript_151BC7:: @ 8151BC7
	trainerbattle 0, OPPONENT_TAMMY, 0, Route121_Text_1BFBB4, Route121_Text_1BFBEE
	msgbox Route121_Text_1BFBFD, 6
	end

Route121_EventScript_151BDE:: @ 8151BDE
	trainerbattle 4, OPPONENT_KATE_AND_JOY, 0, Route121_Text_1BFC36, Route121_Text_1BFC7A, Route121_Text_1BFD08
	msgbox Route121_Text_1BFCB3, 6
	end

Route121_EventScript_151BF9:: @ 8151BF9
	trainerbattle 4, OPPONENT_KATE_AND_JOY, 0, Route121_Text_1BFD60, Route121_Text_1BFDA3, Route121_Text_1BFE0D
	msgbox Route121_Text_1BFDC1, 6
	end

Route121_EventScript_151C14:: @ 8151C14
	trainerbattle 0, OPPONENT_JESSICA_1, 0, Route121_Text_1BFE51, Route121_Text_1BFE80
	specialval RESULT, 57
	compare RESULT, 1
	jumpeq Route121_EventScript_151C3B
	msgbox Route121_Text_1BFEAE, 6
	end

Route121_EventScript_151C3B:: @ 8151C3B
	trainerbattle 5, OPPONENT_JESSICA_1, 0, Route121_Text_1BFEDE, Route121_Text_1BFF0A
	msgbox Route121_Text_1BFF3A, 6
	end
