ilsloc18	OBJECTHEADER <OBJ_SCALE4,750,ilsloc18_2,0,COL_BLACK1,8,19,3>
		DB	052,100,064	;   0
		DB	052,096,064	;   1
		DB	080,096,064	;   2
		DB	080,100,064	;   3
		DB	076,100,064	;   4
		DB	076,096,064	;   5
		DB	072,096,064	;   6
		DB	072,100,064	;   7
		DB	068,100,064	;   8
		DB	068,096,064	;   9
		DB	064,096,064	;  10
		DB	064,100,064	;  11
		DB	060,100,064	;  12
		DB	060,096,064	;  13
		DB	056,096,064	;  14
		DB	056,100,064	;  15
		DB	048,096,064	;  16
		DB	048,100,064	;  17
		DB	048,100,070	;  18
		DB	052,100,070	;  19
		DB	056,100,070	;  20
		DB	060,100,070	;  21
		DB	064,100,070	;  22
		DB	068,100,070	;  23
		DB	072,100,070	;  24
		DB	076,100,070	;  25
		DB	080,100,070	;  26
		DB	076,100,068	;  27
		DB	076,102,068	;  28
		DB	078,102,068	;  29
		DB	072,100,068	;  30
		DB	072,102,068	;  31
		DB	074,102,068	;  32
		DB	068,100,068	;  33
		DB	068,102,068	;  34
		DB	070,102,068	;  35
		DB	064,100,068	;  36
		DB	064,102,068	;  37
		DB	066,102,068	;  38
		DB	060,100,068	;  39
		DB	060,102,068	;  40
		DB	062,102,068	;  41
		DB	056,100,068	;  42
		DB	056,102,068	;  43
		DB	058,102,068	;  44
		DB	052,100,068	;  45
		DB	052,102,068	;  46
		DB	054,102,068	;  47
		DB	048,100,068	;  48
		DB	048,102,068	;  49
		DB	050,102,068	;  50
		DB	080,100,068	;  51
		DB	080,100,066	;  52
		DB	048,100,066	;  53
		DB	-1

		DW	OFFSET	ilsloc18_1

		EVEN

ilsloc18_1	DW	204

iloc18cn_bk	DB	028h,52,36,34,06,-1
		DW	OFFSET iloc18cn_ft-$-2	; 
		DW	OFFSET iloc18bk-$-2	; 
		DB	-1

iloc18cn_ft	DB	028h,36,52,06,34,-1
		DW	OFFSET iloc18cn-$-2	; 
		DW	OFFSET iloc18ft-$-2	; 
		DB	-1


iloc18cn	LABEL	BYTE
		DB	006h,5,COL_AMBER4,COL_RED1,36,52,-1	; line 20
		DB	006h,5,COL_AMBER4,COL_RED1,106,104,-1	; line 20
		DB	00Dh,COL_NEW_GREY1,COL_NEW_GREY1,52,36,106,104,-1	; face 21
		DB	-1

iloc18ft	LABEL	BYTE
		DB	008h,COL_GREY2,32,34,06,04,-1		; face 18
		DB	006h,7,COL_AMBER4,COL_RED1,96,32,34,36,-1	; line 11
		DB	006h,7,COL_WHITE1,COL_WHITE1,90,02,00,38,-1	; line 12
		DB	006h,7,COL_AMBER4,COL_RED1,40,30,28,84,-1	; line 13
		DB	006h,7,COL_WHITE1,COL_WHITE1,42,24,26,78,-1	; line 14
		DB	006h,7,COL_AMBER4,COL_RED1,44,22,20,72,-1	; line 15
		DB	006h,7,COL_WHITE1,COL_WHITE1,46,16,18,66,-1	; line 16
		DB	006h,7,COL_AMBER4,COL_RED1,48,14,12,60,-1	; line 17
		DB	006h,7,COL_WHITE1,COL_WHITE1,50,08,10,54,-1	; line 18
		DB	006h,7,COL_AMBER4,COL_RED1,52,06,04,102,-1	; line 19
		DB	-1

iloc18bk	LABEL	BYTE
		DB	006h,6,COL_WHITE1,COL_WHITE1,96,98,100,-1	; line 10
		DB	006h,6,COL_WHITE1,COL_WHITE1,90,92,94,-1	; line 11
		DB	006h,6,COL_WHITE1,COL_WHITE1,84,86,88,-1	; line 12
		DB	006h,6,COL_WHITE1,COL_WHITE1,78,80,82,-1	; line 13
		DB	006h,6,COL_WHITE1,COL_WHITE1,72,74,76,-1	; line 14
		DB	006h,6,COL_WHITE1,COL_WHITE1,66,68,70,-1	; line 15
		DB	006h,6,COL_WHITE1,COL_WHITE1,60,62,64,-1	; line 16
		DB	006h,6,COL_WHITE1,COL_WHITE1,54,56,58,-1	; line 17
		DB	-1

		EVEN

ilsloc18_2	OBJECTHEADER <OBJ_SCALE2,1500,ilsloc18_3,0,COL_BLACK1,4,9,1>
		DB	058,080,064	;   0
		DB	072,080,064	;   1
		DB	072,082,064	;   2
		DB	070,080,064	;   3
		DB	068,080,064	;   4
		DB	066,080,064	;   5
		DB	064,080,064	;   6
		DB	062,080,064	;   7
		DB	060,080,064	;   8
		DB	056,080,064	;   9
		DB	056,082,064	;  10
		DB	056,082,066	;  11
		DB	058,082,066	;  12
		DB	060,082,066	;  13
		DB	062,082,066	;  14
		DB	064,082,066	;  15
		DB	066,082,066	;  16
		DB	068,082,066	;  17
		DB	070,082,066	;  18
		DB	072,082,066	;  19
		DB	-1

		DW	OFFSET	ilsloc18_2_1

		EVEN

ilsloc18_2_1	DW	101

iloc18bk_ft2	DB	028h,22,38,04,20,-1
		DW	OFFSET iloc18bk2-$-2	; 
		DW	OFFSET iloc18ft2-$-2	; 
		DB	-1


iloc18bk2	LABEL	BYTE
		DB	00Dh,COL_NEW_GREY1,COL_NEW_GREY1,38,22,20,04,-1	; face 21
		DB	006h,5,COL_WHITE1,COL_WHITE1,22,38,-1	; line 18
		DB	-1

iloc18ft2	LABEL	BYTE
		DB	008h,COL_GREY2,18,20,04,02,-1		; face 18
		DB	006h,5,COL_WHITE1,COL_WHITE1,00,24,-1	; line 11
		DB	006h,5,COL_WHITE1,COL_WHITE1,28,14,-1	; line 12
		DB	006h,5,COL_WHITE1,COL_WHITE1,32,10,-1	; line 13
		DB	006h,5,COL_WHITE1,COL_WHITE1,36,06,-1	; line 14
		DB	006h,5,COL_AMBER4,COL_AMBER4,22,18,-1	; line 6
		DB	006h,5,COL_AMBER4,COL_AMBER4,26,16,-1	; line 7
		DB	006h,5,COL_AMBER4,COL_AMBER4,30,12,-1	; line 8
		DB	006h,5,COL_AMBER4,COL_AMBER4,34,08,-1	; line 9
		DB	006h,5,COL_AMBER4,COL_AMBER4,38,02,-1	; line 10
		DB	-1

		EVEN

ilsloc18_3	OBJECTHEADER <OBJ_SCALE1,16384,-1,1,COL_BLACK1,2,4,0>
		DB	068,072,064	;   0
		DB	060,072,064	;   1
		DB	064,072,064	;   2
		DB	-1

		DW	OFFSET	ilsloc18_3_1

		EVEN

ilsloc18_3_1	DW	22


iloc18_30	LABEL	BYTE
		DB	00Ah,COL_NEW_GREY1,00,02,-1		; line 5
		DB	00Ah,COL_AMBER4,00,00,-1		; line 2
		DB	00Ah,COL_AMBER4,04,04,-1		; line 3
		DB	00Ah,COL_AMBER4,02,02,-1		; line 4
		DB	-1

		EVEN

