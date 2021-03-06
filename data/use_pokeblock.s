	.include "asm/macros.inc"
	.include "constants/constants.inc"

	.section .rodata

.ifndef GERMAN
	.align 2
ConditionUpDownPalette:
	.incbin "graphics/misc/condition_up_down.gbapal"

	.align 2
ConditionUpDownTiles:
	.incbin "graphics/misc/condition_up_down.4bpp"
.endif

gUnknown_08406118:: @ 8406118
	.4byte 22 @ MON_DATA_COOL
	.4byte 47 @ MON_DATA_TOUGH
	.4byte 33 @ MON_DATA_SMART
	.4byte 24 @ MON_DATA_CUTE
	.4byte 23 @ MON_DATA_BEAUTY

	.align 2
gUnknown_0840612C:: @ 840612C
	obj_pal 0x02030400, 0x0001

	.align 2
gUnknown_08406134:: @ 8406134
	.4byte OtherText_Coolness
	.4byte OtherText_Toughness
	.4byte OtherText_Smartness
	.4byte OtherText_Cuteness
	.4byte OtherText_Beauty

	.align 2
gSpriteSheet_ConditionUpDown:: @ 8406148
	obj_tiles ConditionUpDownTiles, 0x200, 0

	.align 2
gSpritePalette_ConditionUpDown:: @ 8406150
	obj_pal ConditionUpDownPalette, 0

gUnknown_08406158:: @ 8406158
	.2byte 156, 30
	.2byte 117, 53
	.2byte 117, 112
	.2byte 197, 112
	.2byte 197, 53

	.align 2
gOamData_840616C:: @ 840616C
	.2byte 0x4000
	.2byte 0x8000
	.2byte 0x0400

	.align 2
gSpriteAnim_8406174:: @ 8406174
	obj_image_anim_frame 0, 5
	obj_image_anim_end

	.align 2
gSpriteAnim_840617C:: @ 840617C
	obj_image_anim_frame 8, 5
	obj_image_anim_end

	.align 2
gSpriteAnimTable_8406184:: @ 8406184
	.4byte gSpriteAnim_8406174
	.4byte gSpriteAnim_840617C

	.align 2
gSpriteTemplate_840618C:: @ 840618C
	spr_template 0, 0, gOamData_840616C, gSpriteAnimTable_8406184, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy
