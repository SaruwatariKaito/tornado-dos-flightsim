PBF1		OBJECTHEADER <OBJ_SCALE8,512,PBF2,0,COL_BLACK1,9,18,10>
		DB	046,028,064	;   0
		DB	082,028,064	;   1
		DB	082,100,064	;   2
		DB	046,100,064	;   3
		DB	052,048,064	;   4
		DB	046,048,064	;   5
		DB	052,028,064	;   6
		DB	082,028,074	;   7
		DB	052,028,074	;   8
		DB	052,048,074	;   9
		DB	082,100,074	;  10
		DB	046,100,074	;  11
		DB	046,048,074	;  12
		DB	052,062,064	;  13
		DB	046,062,064	;  14
		DB	052,062,074	;  15
		DB	046,062,074	;  16
		DB	052,052,064	;  17
		DB	052,056,064	;  18
		DB	052,056,072	;  19
		DB	052,052,072	;  20
		DB	056,028,068	;  21
		DB	056,028,072	;  22
		DB	060,028,072	;  23
		DB	060,028,068	;  24
		DB	064,028,068	;  25
		DB	064,028,072	;  26
		DB	068,028,072	;  27
		DB	068,028,068	;  28
		DB	072,028,068	;  29
		DB	072,028,072	;  30
		DB	076,028,072	;  31
		DB	076,028,068	;  32
		DB	052,036,064	;  33
		DB	052,040,064	;  34
		DB	052,040,072	;  35
		DB	052,036,072	;  36
		DB	054,060,074	;  37
		DB	054,058,074	;  38
		DB	054,052,074	;  39
		DB	054,050,074	;  40
		DB	054,048,074	;  41
		DB	076,062,074	;  42
		DB	076,060,074	;  43
		DB	076,058,074	;  44
		DB	076,052,074	;  45
		DB	076,050,074	;  46
		DB	076,048,074	;  47
		DB	054,060,082	;  48
		DB	076,060,082	;  49
		DB	076,058,082	;  50
		DB	054,058,082	;  51
		DB	054,052,082	;  52
		DB	076,052,082	;  53
		DB	076,050,082	;  54
		DB	054,050,082	;  55
		DB	054,062,084	;  56
		DB	076,062,084	;  57
		DB	076,048,084	;  58
		DB	054,048,084	;  59
		DB	054,062,074	;  60
		DB	048,062,074	;  61
		DB	048,048,074	;  62
		DB	048,048,064	;  63
		DB	048,062,064	;  64
		DB	-1

		DW	OFFSET	PBF1_1

		EVEN

PBF1_1		DW	341

PBFlo_hi	DB	028h,16,22,20,14,-1
		DW	OFFSET PBFlo-$-2	; 
		DW	OFFSET PBFhi-$-2	; 
		DB	-1


PBFlo		LABEL	BYTE
		DB	008h,COL_GREY2,00,10,08,12,-1		; face 0
		DB	008h,COL_GREY3,10,28,26,08,-1		; face 1
		DB	008h,COL_OLIVE3,32,30,26,28,-1		; face 5
		DB	008h,COL_OLIVE4,124,122,128,126,-1	; face 49
		DB	008h,COL_OLIVE4,30,18,08,26,-1		; face 6
		DB	000h,6,COL_OLIVE6,38,40,34,36,-1	; face 11
		DB	008h,COL_OLIVE3,18,16,12,08,-1		; face 9
		DB	000h,6,COL_GREY1,68,70,72,66,-1		; face 15
		DB	002h,6,COL_GREY2,68,70,72,66,-1		; line 52
		DB	008h,COL_OLIVE2,124,126,10,24,-1	; face 48
		DB	008h,COL_OLIVE3,14,20,04,02,-1		; face 48
		DB	008h,COL_OLIVE3,22,24,10,06,-1		; face 3
		DB	008h,COL_OLIVE2,20,22,06,04,-1		; face 4
		DB	008h,COL_OLIVE2,16,14,02,12,-1		; face 7
		DB	000h,6,COL_DK_CYAN3,60,62,64,58,-1	; face 14
		DB	000h,6,COL_DK_CYAN3,52,54,56,50,-1	; face 13
		DB	000h,6,COL_DK_CYAN3,44,46,48,42,-1	; face 12
		DB	002h,7,COL_GREY2,58,60,62,64,58,-1	; line 55
		DB	002h,7,COL_GREY2,50,52,54,56,50,-1	; line 54
		DB	002h,7,COL_GREY2,42,44,46,48,42,-1	; line 53
		DB	008h,COL_GREY3,20,14,16,30,-1		; face 41
		DB	008h,COL_GREY3,32,22,20,30,-1		; face 17
		DB	000h,6,COL_GREY3,32,122,124,24,-1	; face 47
		DB	-1

PBFhi		LABEL	BYTE
		DB	008h,COL_OLIVE6,102,100,98,96,-1	; face 36
		DB	008h,COL_OLIVE6,110,108,106,104,-1	; face 35
		DB	008h,COL_OLIVE5,108,110,80,92,-1	; face 29
		DB	008h,COL_OLIVE5,100,102,76,88,-1	; face 30
		DB	008h,COL_OLIVE2,114,112,120,84,-1	; face 31
		DB	008h,COL_OLIVE5,96,98,86,74,-1		; face 32
		DB	008h,COL_OLIVE5,104,106,90,78,-1	; face 33
		DB	008h,COL_OLIVE2,118,116,94,82,-1	; face 34
		DB	008h,COL_OLIVE3,94,116,108,92,-1	; face 37
		DB	008h,COL_OLIVE3,116,114,98,108,-1	; face 38
		DB	008h,COL_OLIVE3,98,114,84,86,-1		; face 39
		DB	008h,COL_OLIVE3,90,106,100,88,-1	; face 40
		DB	002h,6,COL_OLIVE5,88,100,98,86,-1	; line 43
		DB	002h,6,COL_OLIVE5,92,108,106,90,-1	; line 42
		DB	008h,COL_OLIVE3,120,112,96,74,-1	; face 41
		DB	008h,COL_OLIVE3,112,118,110,96,-1	; face 42
		DB	008h,COL_OLIVE3,80,110,118,82,-1	; face 43
		DB	008h,COL_OLIVE3,76,102,104,78,-1	; face 44
		DB	002h,6,COL_OLIVE5,78,104,110,80,-1	; line 45
		DB	002h,6,COL_OLIVE5,74,96,102,76,-1	; line 44
		DB	008h,COL_GREY3,112,114,116,118,-1	; face 45
		DB	-1

		EVEN

PBF2		OBJECTHEADER <OBJ_SCALE4,1000,PBF3,0,COL_BLACK1,4,9,5>
		DB	056,046,064	;   0
		DB	072,046,064	;   1
		DB	072,082,064	;   2
		DB	056,082,064	;   3
		DB	058,056,064	;   4
		DB	056,056,064	;   5
		DB	058,046,064	;   6
		DB	072,046,068	;   7
		DB	058,046,068	;   8
		DB	058,056,068	;   9
		DB	072,082,068	;  10
		DB	056,082,068	;  11
		DB	056,056,068	;  12
		DB	060,046,066	;  13
		DB	060,046,068	;  14
		DB	070,046,068	;  15
		DB	070,046,066	;  16
		DB	058,050,064	;  17
		DB	058,052,064	;  18
		DB	058,052,068	;  19
		DB	058,050,068	;  20
		DB	058,062,068	;  21
		DB	058,058,068	;  22
		DB	058,056,068	;  23
		DB	070,064,068	;  24
		DB	070,062,068	;  25
		DB	070,058,068	;  26
		DB	070,056,068	;  27
		DB	058,062,072	;  28
		DB	070,062,072	;  29
		DB	058,058,072	;  30
		DB	070,058,072	;  31
		DB	058,064,074	;  32
		DB	070,064,074	;  33
		DB	070,056,074	;  34
		DB	058,056,074	;  35
		DB	058,064,068	;  36
		DB	-1

		DW	OFFSET	PBF2_1

		EVEN

PBF2_1		DW	155

PBFlo_hi2	DB	028h,16,22,20,14,-1
		DW	OFFSET PBFlo2-$-2	; 
		DW	OFFSET PBFhi2-$-2	; 
		DB	-1


PBFlo2		LABEL	BYTE
		DB	008h,COL_OLIVE4,18,08,10,24,-1		; face 31
		DB	008h,COL_GREY2,00,10,08,12,-1		; face 0
		DB	008h,COL_OLIVE3,22,24,10,06,-1		; face 31
		DB	008h,COL_OLIVE3,18,16,12,08,-1		; face 9
		DB	002h,6,COL_GREY2,36,38,40,34,-1		; line 52
		DB	008h,COL_OLIVE3,14,20,04,02,-1		; face 30
		DB	008h,COL_OLIVE2,20,22,06,04,-1		; face 4
		DB	008h,COL_OLIVE2,16,14,02,12,-1		; face 7
		DB	002h,7,COL_GREY2,28,30,32,26,28,-1	; line 25
		DB	008h,COL_GREY3,24,22,20,18,-1		; face 32
		DB	008h,COL_GREY3,20,14,16,18,-1		; face 33
		DB	-1

PBFhi2		LABEL	BYTE
		DB	008h,COL_OLIVE2,66,64,72,48,-1		; face 31
		DB	008h,COL_OLIVE2,70,68,54,46,-1		; face 34
		DB	008h,COL_OLIVE3,54,68,66,48,-1		; face 41
		DB	002h,4,COL_OLIVE5,50,58,-1		; line 43
		DB	002h,4,COL_OLIVE5,52,62,-1		; line 42
		DB	008h,COL_OLIVE3,72,64,70,46,-1		; face 38
		DB	002h,4,COL_OLIVE5,44,60,-1		; line 45
		DB	002h,4,COL_OLIVE5,42,56,-1		; line 44
		DB	008h,COL_GREY3,64,66,68,70,-1		; face 45
		DB	-1

		EVEN

PBF3		OBJECTHEADER <OBJ_SCALE2,8192,-1,1,COL_OLIVE4,2,4,2>
		DB	060,056,064	;   0
		DB	068,056,064	;   1
		DB	068,072,064	;   2
		DB	060,072,064	;   3
		DB	062,060,064	;   4
		DB	060,060,064	;   5
		DB	062,056,064	;   6
		DB	068,056,066	;   7
		DB	062,056,066	;   8
		DB	062,060,066	;   9
		DB	068,072,066	;  10
		DB	060,072,066	;  11
		DB	060,060,066	;  12
		DB	062,064,066	;  13
		DB	066,064,066	;  14
		DB	066,060,066	;  15
		DB	062,064,068	;  16
		DB	066,064,068	;  17
		DB	062,060,068	;  18
		DB	066,060,068	;  19
		DB	-1

		DW	OFFSET	PBF3_1

		EVEN

PBF3_1		DW	138

PBFlo_hi3	DB	028h,16,22,20,14,-1
		DW	OFFSET PBFlo3-$-2	; 
		DW	OFFSET PBFhi3-$-2	; 
		DB	-1


PBFlo3		LABEL	BYTE
		DB	008h,COL_OLIVE4,18,08,10,24,-1		; face 31
		DB	008h,COL_GREY2,00,10,08,12,-1		; face 0
		DB	008h,COL_OLIVE3,22,24,10,06,-1		; face 31
		DB	008h,COL_GREY2,18,16,12,08,-1		; face 9
		DB	008h,COL_OLIVE3,14,20,04,02,-1		; face 30
		DB	008h,COL_OLIVE2,20,22,06,04,-1		; face 4
		DB	008h,COL_GREY2,16,14,02,12,-1		; face 7
		DB	008h,COL_GREY3,24,22,20,18,-1		; face 32
		DB	008h,COL_GREY3,20,14,16,18,-1		; face 33
		DB	-1

PBFhi3		LABEL	BYTE
		DB	008h,COL_OLIVE2,34,32,26,28,-1		; face 31
		DB	008h,COL_OLIVE2,36,38,30,18,-1		; face 34
		DB	008h,COL_OLIVE3,30,38,34,28,-1		; face 41
		DB	002h,4,COL_OLIVE5,28,34,-1		; line 43
		DB	002h,4,COL_OLIVE5,30,38,-1		; line 42
		DB	008h,COL_OLIVE3,26,32,36,18,-1		; face 38
		DB	002h,4,COL_OLIVE5,18,36,-1		; line 45
		DB	002h,4,COL_OLIVE5,26,32,-1		; line 44
		DB	008h,COL_GREY3,32,34,38,36,-1		; face 45
		DB	-1

		EVEN

