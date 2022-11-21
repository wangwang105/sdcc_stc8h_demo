                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module stc8h_it
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _P77
                                     12 	.globl _P76
                                     13 	.globl _P75
                                     14 	.globl _P74
                                     15 	.globl _P73
                                     16 	.globl _P72
                                     17 	.globl _P71
                                     18 	.globl _P70
                                     19 	.globl _P67
                                     20 	.globl _P66
                                     21 	.globl _P65
                                     22 	.globl _P64
                                     23 	.globl _P63
                                     24 	.globl _P62
                                     25 	.globl _P61
                                     26 	.globl _P60
                                     27 	.globl _P
                                     28 	.globl _F1
                                     29 	.globl _OV
                                     30 	.globl _RS0
                                     31 	.globl _RS1
                                     32 	.globl _F0
                                     33 	.globl _AC
                                     34 	.globl _CY
                                     35 	.globl _P57
                                     36 	.globl _P56
                                     37 	.globl _P55
                                     38 	.globl _P54
                                     39 	.globl _P53
                                     40 	.globl _P52
                                     41 	.globl _P51
                                     42 	.globl _P50
                                     43 	.globl _P47
                                     44 	.globl _P46
                                     45 	.globl _P45
                                     46 	.globl _P44
                                     47 	.globl _P43
                                     48 	.globl _P42
                                     49 	.globl _P41
                                     50 	.globl _P40
                                     51 	.globl _PX0
                                     52 	.globl _PT0
                                     53 	.globl _PX1
                                     54 	.globl _PT1
                                     55 	.globl _PS
                                     56 	.globl _PADC
                                     57 	.globl _PLVD
                                     58 	.globl _PPCA
                                     59 	.globl _P37
                                     60 	.globl _P36
                                     61 	.globl _P35
                                     62 	.globl _P34
                                     63 	.globl _P33
                                     64 	.globl _P32
                                     65 	.globl _P31
                                     66 	.globl _P30
                                     67 	.globl _EX0
                                     68 	.globl _ET0
                                     69 	.globl _EX1
                                     70 	.globl _ET1
                                     71 	.globl _ES
                                     72 	.globl _EADC
                                     73 	.globl _ELVD
                                     74 	.globl _EA
                                     75 	.globl _P27
                                     76 	.globl _P26
                                     77 	.globl _P25
                                     78 	.globl _P24
                                     79 	.globl _P23
                                     80 	.globl _P22
                                     81 	.globl _P21
                                     82 	.globl _P20
                                     83 	.globl _RI
                                     84 	.globl _TI
                                     85 	.globl _RB8
                                     86 	.globl _TB8
                                     87 	.globl _REN
                                     88 	.globl _SM2
                                     89 	.globl _SM1
                                     90 	.globl _SM0
                                     91 	.globl _P17
                                     92 	.globl _P16
                                     93 	.globl _P15
                                     94 	.globl _P14
                                     95 	.globl _P13
                                     96 	.globl _P12
                                     97 	.globl _P11
                                     98 	.globl _P10
                                     99 	.globl _IT0
                                    100 	.globl _IE0
                                    101 	.globl _IT1
                                    102 	.globl _IE1
                                    103 	.globl _TR0
                                    104 	.globl _TF0
                                    105 	.globl _TR1
                                    106 	.globl _TF1
                                    107 	.globl _P07
                                    108 	.globl _P06
                                    109 	.globl _P05
                                    110 	.globl _P04
                                    111 	.globl _P03
                                    112 	.globl _P02
                                    113 	.globl _P01
                                    114 	.globl _P00
                                    115 	.globl _RSTCFG
                                    116 	.globl _USBADR
                                    117 	.globl _P7
                                    118 	.globl _IAP_TPS
                                    119 	.globl _USBCON
                                    120 	.globl _B
                                    121 	.globl _AUXINTIF
                                    122 	.globl _IP3H
                                    123 	.globl _USBDAT
                                    124 	.globl _P6
                                    125 	.globl _CMPCR2
                                    126 	.globl _CMPCR1
                                    127 	.globl _DPH1
                                    128 	.globl _DPL1
                                    129 	.globl _DPS
                                    130 	.globl _P7M0
                                    131 	.globl _P7M1
                                    132 	.globl _ACC
                                    133 	.globl _IP3
                                    134 	.globl _ADCCFG
                                    135 	.globl _USBCLK
                                    136 	.globl _T2L
                                    137 	.globl _T2H
                                    138 	.globl _T3L
                                    139 	.globl _T3H
                                    140 	.globl _T4L
                                    141 	.globl _T4H
                                    142 	.globl _T4T3M
                                    143 	.globl _PSW
                                    144 	.globl _SPDAT
                                    145 	.globl _SPCTL
                                    146 	.globl _SPSTAT
                                    147 	.globl _P6M0
                                    148 	.globl _P6M1
                                    149 	.globl _P5M0
                                    150 	.globl _P5M1
                                    151 	.globl _P5
                                    152 	.globl _IAP_CONTR
                                    153 	.globl _IAP_TRIG
                                    154 	.globl _IAP_CMD
                                    155 	.globl _IAP_ADDRL
                                    156 	.globl _IAP_ADDRH
                                    157 	.globl _IAP_DATA
                                    158 	.globl _WDT_CONTR
                                    159 	.globl _P4
                                    160 	.globl _ADC_RESL
                                    161 	.globl _ADC_RES
                                    162 	.globl _ADC_CONTR
                                    163 	.globl _P_SW2
                                    164 	.globl _SADEN
                                    165 	.globl _IP
                                    166 	.globl _IPH
                                    167 	.globl _IP2H
                                    168 	.globl _IP2
                                    169 	.globl _P4M0
                                    170 	.globl _P4M1
                                    171 	.globl _P3M0
                                    172 	.globl _P3M1
                                    173 	.globl _P3
                                    174 	.globl _IE2
                                    175 	.globl _TA
                                    176 	.globl _S3BUF
                                    177 	.globl _S3CON
                                    178 	.globl _WKTCH
                                    179 	.globl _WKTCL
                                    180 	.globl _SADDR
                                    181 	.globl _IE
                                    182 	.globl _P_SW1
                                    183 	.globl _P2
                                    184 	.globl _IRTRIM
                                    185 	.globl _LIRTRIM
                                    186 	.globl _IRCBAND
                                    187 	.globl _S2BUF
                                    188 	.globl _S2CON
                                    189 	.globl _SBUF
                                    190 	.globl _SCON
                                    191 	.globl _P2M0
                                    192 	.globl _P2M1
                                    193 	.globl _P0M0
                                    194 	.globl _P0M1
                                    195 	.globl _P1M0
                                    196 	.globl _P1M1
                                    197 	.globl _P1
                                    198 	.globl _INTCLKO
                                    199 	.globl _AUXR
                                    200 	.globl _TH1
                                    201 	.globl _TH0
                                    202 	.globl _TL1
                                    203 	.globl _TL0
                                    204 	.globl _TMOD
                                    205 	.globl _TCON
                                    206 	.globl _PCON
                                    207 	.globl _S4BUF
                                    208 	.globl _S4CON
                                    209 	.globl _DPH
                                    210 	.globl _DPL
                                    211 	.globl _SP
                                    212 	.globl _P0
                                    213 	.globl _TM0_ISR
                                    214 ;--------------------------------------------------------
                                    215 ; special function registers
                                    216 ;--------------------------------------------------------
                                    217 	.area RSEG    (ABS,DATA)
      000000                        218 	.org 0x0000
                           000080   219 _P0	=	0x0080
                           000081   220 _SP	=	0x0081
                           000082   221 _DPL	=	0x0082
                           000083   222 _DPH	=	0x0083
                           000084   223 _S4CON	=	0x0084
                           000085   224 _S4BUF	=	0x0085
                           000087   225 _PCON	=	0x0087
                           000088   226 _TCON	=	0x0088
                           000089   227 _TMOD	=	0x0089
                           00008A   228 _TL0	=	0x008a
                           00008B   229 _TL1	=	0x008b
                           00008C   230 _TH0	=	0x008c
                           00008D   231 _TH1	=	0x008d
                           00008E   232 _AUXR	=	0x008e
                           00008F   233 _INTCLKO	=	0x008f
                           000090   234 _P1	=	0x0090
                           000091   235 _P1M1	=	0x0091
                           000092   236 _P1M0	=	0x0092
                           000093   237 _P0M1	=	0x0093
                           000094   238 _P0M0	=	0x0094
                           000095   239 _P2M1	=	0x0095
                           000096   240 _P2M0	=	0x0096
                           000098   241 _SCON	=	0x0098
                           000099   242 _SBUF	=	0x0099
                           00009A   243 _S2CON	=	0x009a
                           00009B   244 _S2BUF	=	0x009b
                           00009D   245 _IRCBAND	=	0x009d
                           00009E   246 _LIRTRIM	=	0x009e
                           00009F   247 _IRTRIM	=	0x009f
                           0000A0   248 _P2	=	0x00a0
                           0000A2   249 _P_SW1	=	0x00a2
                           0000A8   250 _IE	=	0x00a8
                           0000A9   251 _SADDR	=	0x00a9
                           0000AA   252 _WKTCL	=	0x00aa
                           0000AB   253 _WKTCH	=	0x00ab
                           0000AC   254 _S3CON	=	0x00ac
                           0000AD   255 _S3BUF	=	0x00ad
                           0000AE   256 _TA	=	0x00ae
                           0000AF   257 _IE2	=	0x00af
                           0000B0   258 _P3	=	0x00b0
                           0000B1   259 _P3M1	=	0x00b1
                           0000B2   260 _P3M0	=	0x00b2
                           0000B3   261 _P4M1	=	0x00b3
                           0000B4   262 _P4M0	=	0x00b4
                           0000B5   263 _IP2	=	0x00b5
                           0000B6   264 _IP2H	=	0x00b6
                           0000B7   265 _IPH	=	0x00b7
                           0000B8   266 _IP	=	0x00b8
                           0000B9   267 _SADEN	=	0x00b9
                           0000BA   268 _P_SW2	=	0x00ba
                           0000BC   269 _ADC_CONTR	=	0x00bc
                           0000BD   270 _ADC_RES	=	0x00bd
                           0000BE   271 _ADC_RESL	=	0x00be
                           0000C0   272 _P4	=	0x00c0
                           0000C1   273 _WDT_CONTR	=	0x00c1
                           0000C2   274 _IAP_DATA	=	0x00c2
                           0000C3   275 _IAP_ADDRH	=	0x00c3
                           0000C4   276 _IAP_ADDRL	=	0x00c4
                           0000C5   277 _IAP_CMD	=	0x00c5
                           0000C6   278 _IAP_TRIG	=	0x00c6
                           0000C7   279 _IAP_CONTR	=	0x00c7
                           0000C8   280 _P5	=	0x00c8
                           0000C9   281 _P5M1	=	0x00c9
                           0000CA   282 _P5M0	=	0x00ca
                           0000CB   283 _P6M1	=	0x00cb
                           0000CC   284 _P6M0	=	0x00cc
                           0000CD   285 _SPSTAT	=	0x00cd
                           0000CE   286 _SPCTL	=	0x00ce
                           0000CF   287 _SPDAT	=	0x00cf
                           0000D0   288 _PSW	=	0x00d0
                           0000D1   289 _T4T3M	=	0x00d1
                           0000D2   290 _T4H	=	0x00d2
                           0000D3   291 _T4L	=	0x00d3
                           0000D4   292 _T3H	=	0x00d4
                           0000D5   293 _T3L	=	0x00d5
                           0000D6   294 _T2H	=	0x00d6
                           0000D7   295 _T2L	=	0x00d7
                           0000DC   296 _USBCLK	=	0x00dc
                           0000DE   297 _ADCCFG	=	0x00de
                           0000DF   298 _IP3	=	0x00df
                           0000E0   299 _ACC	=	0x00e0
                           0000E1   300 _P7M1	=	0x00e1
                           0000E2   301 _P7M0	=	0x00e2
                           0000E3   302 _DPS	=	0x00e3
                           0000E4   303 _DPL1	=	0x00e4
                           0000E5   304 _DPH1	=	0x00e5
                           0000E6   305 _CMPCR1	=	0x00e6
                           0000E7   306 _CMPCR2	=	0x00e7
                           0000E8   307 _P6	=	0x00e8
                           0000EC   308 _USBDAT	=	0x00ec
                           0000EE   309 _IP3H	=	0x00ee
                           0000EF   310 _AUXINTIF	=	0x00ef
                           0000F0   311 _B	=	0x00f0
                           0000F4   312 _USBCON	=	0x00f4
                           0000F5   313 _IAP_TPS	=	0x00f5
                           0000F8   314 _P7	=	0x00f8
                           0000FC   315 _USBADR	=	0x00fc
                           0000FF   316 _RSTCFG	=	0x00ff
                                    317 ;--------------------------------------------------------
                                    318 ; special function bits
                                    319 ;--------------------------------------------------------
                                    320 	.area RSEG    (ABS,DATA)
      000000                        321 	.org 0x0000
                           000080   322 _P00	=	0x0080
                           000081   323 _P01	=	0x0081
                           000082   324 _P02	=	0x0082
                           000083   325 _P03	=	0x0083
                           000084   326 _P04	=	0x0084
                           000085   327 _P05	=	0x0085
                           000086   328 _P06	=	0x0086
                           000087   329 _P07	=	0x0087
                           00008F   330 _TF1	=	0x008f
                           00008E   331 _TR1	=	0x008e
                           00008D   332 _TF0	=	0x008d
                           00008C   333 _TR0	=	0x008c
                           00008B   334 _IE1	=	0x008b
                           00008A   335 _IT1	=	0x008a
                           000089   336 _IE0	=	0x0089
                           000088   337 _IT0	=	0x0088
                           000090   338 _P10	=	0x0090
                           000091   339 _P11	=	0x0091
                           000092   340 _P12	=	0x0092
                           000093   341 _P13	=	0x0093
                           000094   342 _P14	=	0x0094
                           000095   343 _P15	=	0x0095
                           000096   344 _P16	=	0x0096
                           000097   345 _P17	=	0x0097
                           00009F   346 _SM0	=	0x009f
                           00009E   347 _SM1	=	0x009e
                           00009D   348 _SM2	=	0x009d
                           00009C   349 _REN	=	0x009c
                           00009B   350 _TB8	=	0x009b
                           00009A   351 _RB8	=	0x009a
                           000099   352 _TI	=	0x0099
                           000098   353 _RI	=	0x0098
                           0000A0   354 _P20	=	0x00a0
                           0000A1   355 _P21	=	0x00a1
                           0000A2   356 _P22	=	0x00a2
                           0000A3   357 _P23	=	0x00a3
                           0000A4   358 _P24	=	0x00a4
                           0000A5   359 _P25	=	0x00a5
                           0000A6   360 _P26	=	0x00a6
                           0000A7   361 _P27	=	0x00a7
                           0000AF   362 _EA	=	0x00af
                           0000AE   363 _ELVD	=	0x00ae
                           0000AD   364 _EADC	=	0x00ad
                           0000AC   365 _ES	=	0x00ac
                           0000AB   366 _ET1	=	0x00ab
                           0000AA   367 _EX1	=	0x00aa
                           0000A9   368 _ET0	=	0x00a9
                           0000A8   369 _EX0	=	0x00a8
                           0000B0   370 _P30	=	0x00b0
                           0000B1   371 _P31	=	0x00b1
                           0000B2   372 _P32	=	0x00b2
                           0000B3   373 _P33	=	0x00b3
                           0000B4   374 _P34	=	0x00b4
                           0000B5   375 _P35	=	0x00b5
                           0000B6   376 _P36	=	0x00b6
                           0000B7   377 _P37	=	0x00b7
                           0000BF   378 _PPCA	=	0x00bf
                           0000BE   379 _PLVD	=	0x00be
                           0000BD   380 _PADC	=	0x00bd
                           0000BC   381 _PS	=	0x00bc
                           0000BB   382 _PT1	=	0x00bb
                           0000BA   383 _PX1	=	0x00ba
                           0000B9   384 _PT0	=	0x00b9
                           0000B8   385 _PX0	=	0x00b8
                           0000C0   386 _P40	=	0x00c0
                           0000C1   387 _P41	=	0x00c1
                           0000C2   388 _P42	=	0x00c2
                           0000C3   389 _P43	=	0x00c3
                           0000C4   390 _P44	=	0x00c4
                           0000C5   391 _P45	=	0x00c5
                           0000C6   392 _P46	=	0x00c6
                           0000C7   393 _P47	=	0x00c7
                           0000C8   394 _P50	=	0x00c8
                           0000C9   395 _P51	=	0x00c9
                           0000CA   396 _P52	=	0x00ca
                           0000CB   397 _P53	=	0x00cb
                           0000CC   398 _P54	=	0x00cc
                           0000CD   399 _P55	=	0x00cd
                           0000CE   400 _P56	=	0x00ce
                           0000CF   401 _P57	=	0x00cf
                           0000D7   402 _CY	=	0x00d7
                           0000D6   403 _AC	=	0x00d6
                           0000D5   404 _F0	=	0x00d5
                           0000D4   405 _RS1	=	0x00d4
                           0000D3   406 _RS0	=	0x00d3
                           0000D2   407 _OV	=	0x00d2
                           0000D1   408 _F1	=	0x00d1
                           0000D0   409 _P	=	0x00d0
                           0000E8   410 _P60	=	0x00e8
                           0000E9   411 _P61	=	0x00e9
                           0000EA   412 _P62	=	0x00ea
                           0000EB   413 _P63	=	0x00eb
                           0000EC   414 _P64	=	0x00ec
                           0000ED   415 _P65	=	0x00ed
                           0000EE   416 _P66	=	0x00ee
                           0000EF   417 _P67	=	0x00ef
                           0000F8   418 _P70	=	0x00f8
                           0000F9   419 _P71	=	0x00f9
                           0000FA   420 _P72	=	0x00fa
                           0000FB   421 _P73	=	0x00fb
                           0000FC   422 _P74	=	0x00fc
                           0000FD   423 _P75	=	0x00fd
                           0000FE   424 _P76	=	0x00fe
                           0000FF   425 _P77	=	0x00ff
                                    426 ;--------------------------------------------------------
                                    427 ; overlayable register banks
                                    428 ;--------------------------------------------------------
                                    429 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        430 	.ds 8
                                    431 ;--------------------------------------------------------
                                    432 ; internal ram data
                                    433 ;--------------------------------------------------------
                                    434 	.area DSEG    (DATA)
                                    435 ;--------------------------------------------------------
                                    436 ; overlayable items in internal ram
                                    437 ;--------------------------------------------------------
                                    438 ;--------------------------------------------------------
                                    439 ; indirectly addressable internal ram data
                                    440 ;--------------------------------------------------------
                                    441 	.area ISEG    (DATA)
                                    442 ;--------------------------------------------------------
                                    443 ; absolute internal ram data
                                    444 ;--------------------------------------------------------
                                    445 	.area IABS    (ABS,DATA)
                                    446 	.area IABS    (ABS,DATA)
                                    447 ;--------------------------------------------------------
                                    448 ; bit data
                                    449 ;--------------------------------------------------------
                                    450 	.area BSEG    (BIT)
                                    451 ;--------------------------------------------------------
                                    452 ; paged external ram data
                                    453 ;--------------------------------------------------------
                                    454 	.area PSEG    (PAG,XDATA)
                                    455 ;--------------------------------------------------------
                                    456 ; external ram data
                                    457 ;--------------------------------------------------------
                                    458 	.area XSEG    (XDATA)
                                    459 ;--------------------------------------------------------
                                    460 ; absolute external ram data
                                    461 ;--------------------------------------------------------
                                    462 	.area XABS    (ABS,XDATA)
                                    463 ;--------------------------------------------------------
                                    464 ; external initialized ram data
                                    465 ;--------------------------------------------------------
                                    466 	.area XISEG   (XDATA)
                                    467 	.area HOME    (CODE)
                                    468 	.area GSINIT0 (CODE)
                                    469 	.area GSINIT1 (CODE)
                                    470 	.area GSINIT2 (CODE)
                                    471 	.area GSINIT3 (CODE)
                                    472 	.area GSINIT4 (CODE)
                                    473 	.area GSINIT5 (CODE)
                                    474 	.area GSINIT  (CODE)
                                    475 	.area GSFINAL (CODE)
                                    476 	.area CSEG    (CODE)
                                    477 ;--------------------------------------------------------
                                    478 ; global & static initialisations
                                    479 ;--------------------------------------------------------
                                    480 	.area HOME    (CODE)
                                    481 	.area GSINIT  (CODE)
                                    482 	.area GSFINAL (CODE)
                                    483 	.area GSINIT  (CODE)
                                    484 ;--------------------------------------------------------
                                    485 ; Home
                                    486 ;--------------------------------------------------------
                                    487 	.area HOME    (CODE)
                                    488 	.area HOME    (CODE)
                                    489 ;--------------------------------------------------------
                                    490 ; code
                                    491 ;--------------------------------------------------------
                                    492 	.area CSEG    (CODE)
                                    493 ;------------------------------------------------------------
                                    494 ;Allocation info for local variables in function 'TM0_ISR'
                                    495 ;------------------------------------------------------------
                                    496 ;	src/stc8h_it.c:3: void TM0_ISR(void) __interrupt(TIMER0_VECTOR)
                                    497 ;	-----------------------------------------
                                    498 ;	 function TM0_ISR
                                    499 ;	-----------------------------------------
      0000E0                        500 _TM0_ISR:
                           000007   501 	ar7 = 0x07
                           000006   502 	ar6 = 0x06
                           000005   503 	ar5 = 0x05
                           000004   504 	ar4 = 0x04
                           000003   505 	ar3 = 0x03
                           000002   506 	ar2 = 0x02
                           000001   507 	ar1 = 0x01
                           000000   508 	ar0 = 0x00
                                    509 ;	src/stc8h_it.c:5: P01 = !P01;
      0000E0 B2 81            [12]  510 	cpl	_P01
                                    511 ;	src/stc8h_it.c:6: }
      0000E2 32               [24]  512 	reti
                                    513 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                    514 ;	eliminated unneeded push/pop not_psw
                                    515 ;	eliminated unneeded push/pop dpl
                                    516 ;	eliminated unneeded push/pop dph
                                    517 ;	eliminated unneeded push/pop b
                                    518 ;	eliminated unneeded push/pop acc
                                    519 	.area CSEG    (CODE)
                                    520 	.area CONST   (CODE)
                                    521 	.area XINIT   (CODE)
                                    522 	.area CABS    (ABS,CODE)
