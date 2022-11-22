                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _Delaynms
                                     13 	.globl _P77
                                     14 	.globl _P76
                                     15 	.globl _P75
                                     16 	.globl _P74
                                     17 	.globl _P73
                                     18 	.globl _P72
                                     19 	.globl _P71
                                     20 	.globl _P70
                                     21 	.globl _P67
                                     22 	.globl _P66
                                     23 	.globl _P65
                                     24 	.globl _P64
                                     25 	.globl _P63
                                     26 	.globl _P62
                                     27 	.globl _P61
                                     28 	.globl _P60
                                     29 	.globl _P
                                     30 	.globl _F1
                                     31 	.globl _OV
                                     32 	.globl _RS0
                                     33 	.globl _RS1
                                     34 	.globl _F0
                                     35 	.globl _AC
                                     36 	.globl _CY
                                     37 	.globl _P57
                                     38 	.globl _P56
                                     39 	.globl _P55
                                     40 	.globl _P54
                                     41 	.globl _P53
                                     42 	.globl _P52
                                     43 	.globl _P51
                                     44 	.globl _P50
                                     45 	.globl _P47
                                     46 	.globl _P46
                                     47 	.globl _P45
                                     48 	.globl _P44
                                     49 	.globl _P43
                                     50 	.globl _P42
                                     51 	.globl _P41
                                     52 	.globl _P40
                                     53 	.globl _PX0
                                     54 	.globl _PT0
                                     55 	.globl _PX1
                                     56 	.globl _PT1
                                     57 	.globl _PS
                                     58 	.globl _PADC
                                     59 	.globl _PLVD
                                     60 	.globl _PPCA
                                     61 	.globl _P37
                                     62 	.globl _P36
                                     63 	.globl _P35
                                     64 	.globl _P34
                                     65 	.globl _P33
                                     66 	.globl _P32
                                     67 	.globl _P31
                                     68 	.globl _P30
                                     69 	.globl _EX0
                                     70 	.globl _ET0
                                     71 	.globl _EX1
                                     72 	.globl _ET1
                                     73 	.globl _ES
                                     74 	.globl _EADC
                                     75 	.globl _ELVD
                                     76 	.globl _EA
                                     77 	.globl _P27
                                     78 	.globl _P26
                                     79 	.globl _P25
                                     80 	.globl _P24
                                     81 	.globl _P23
                                     82 	.globl _P22
                                     83 	.globl _P21
                                     84 	.globl _P20
                                     85 	.globl _RI
                                     86 	.globl _TI
                                     87 	.globl _RB8
                                     88 	.globl _TB8
                                     89 	.globl _REN
                                     90 	.globl _SM2
                                     91 	.globl _SM1
                                     92 	.globl _SM0
                                     93 	.globl _P17
                                     94 	.globl _P16
                                     95 	.globl _P15
                                     96 	.globl _P14
                                     97 	.globl _P13
                                     98 	.globl _P12
                                     99 	.globl _P11
                                    100 	.globl _P10
                                    101 	.globl _IT0
                                    102 	.globl _IE0
                                    103 	.globl _IT1
                                    104 	.globl _IE1
                                    105 	.globl _TR0
                                    106 	.globl _TF0
                                    107 	.globl _TR1
                                    108 	.globl _TF1
                                    109 	.globl _P07
                                    110 	.globl _P06
                                    111 	.globl _P05
                                    112 	.globl _P04
                                    113 	.globl _P03
                                    114 	.globl _P02
                                    115 	.globl _P01
                                    116 	.globl _P00
                                    117 	.globl _RSTCFG
                                    118 	.globl _USBADR
                                    119 	.globl _P7
                                    120 	.globl _IAP_TPS
                                    121 	.globl _USBCON
                                    122 	.globl _B
                                    123 	.globl _AUXINTIF
                                    124 	.globl _IP3H
                                    125 	.globl _USBDAT
                                    126 	.globl _P6
                                    127 	.globl _CMPCR2
                                    128 	.globl _CMPCR1
                                    129 	.globl _DPH1
                                    130 	.globl _DPL1
                                    131 	.globl _DPS
                                    132 	.globl _P7M0
                                    133 	.globl _P7M1
                                    134 	.globl _ACC
                                    135 	.globl _IP3
                                    136 	.globl _ADCCFG
                                    137 	.globl _USBCLK
                                    138 	.globl _T2L
                                    139 	.globl _T2H
                                    140 	.globl _T3L
                                    141 	.globl _T3H
                                    142 	.globl _T4L
                                    143 	.globl _T4H
                                    144 	.globl _T4T3M
                                    145 	.globl _PSW
                                    146 	.globl _SPDAT
                                    147 	.globl _SPCTL
                                    148 	.globl _SPSTAT
                                    149 	.globl _P6M0
                                    150 	.globl _P6M1
                                    151 	.globl _P5M0
                                    152 	.globl _P5M1
                                    153 	.globl _P5
                                    154 	.globl _IAP_CONTR
                                    155 	.globl _IAP_TRIG
                                    156 	.globl _IAP_CMD
                                    157 	.globl _IAP_ADDRL
                                    158 	.globl _IAP_ADDRH
                                    159 	.globl _IAP_DATA
                                    160 	.globl _WDT_CONTR
                                    161 	.globl _P4
                                    162 	.globl _ADC_RESL
                                    163 	.globl _ADC_RES
                                    164 	.globl _ADC_CONTR
                                    165 	.globl _P_SW2
                                    166 	.globl _SADEN
                                    167 	.globl _IP
                                    168 	.globl _IPH
                                    169 	.globl _IP2H
                                    170 	.globl _IP2
                                    171 	.globl _P4M0
                                    172 	.globl _P4M1
                                    173 	.globl _P3M0
                                    174 	.globl _P3M1
                                    175 	.globl _P3
                                    176 	.globl _IE2
                                    177 	.globl _TA
                                    178 	.globl _S3BUF
                                    179 	.globl _S3CON
                                    180 	.globl _WKTCH
                                    181 	.globl _WKTCL
                                    182 	.globl _SADDR
                                    183 	.globl _IE
                                    184 	.globl _P_SW1
                                    185 	.globl _P2
                                    186 	.globl _IRTRIM
                                    187 	.globl _LIRTRIM
                                    188 	.globl _IRCBAND
                                    189 	.globl _S2BUF
                                    190 	.globl _S2CON
                                    191 	.globl _SBUF
                                    192 	.globl _SCON
                                    193 	.globl _P2M0
                                    194 	.globl _P2M1
                                    195 	.globl _P0M0
                                    196 	.globl _P0M1
                                    197 	.globl _P1M0
                                    198 	.globl _P1M1
                                    199 	.globl _P1
                                    200 	.globl _INTCLKO
                                    201 	.globl _AUXR
                                    202 	.globl _TH1
                                    203 	.globl _TH0
                                    204 	.globl _TL1
                                    205 	.globl _TL0
                                    206 	.globl _TMOD
                                    207 	.globl _TCON
                                    208 	.globl _PCON
                                    209 	.globl _S4BUF
                                    210 	.globl _S4CON
                                    211 	.globl _DPH
                                    212 	.globl _DPL
                                    213 	.globl _SP
                                    214 	.globl _P0
                                    215 	.globl _clock_Init
                                    216 	.globl _TM0_Init
                                    217 ;--------------------------------------------------------
                                    218 ; special function registers
                                    219 ;--------------------------------------------------------
                                    220 	.area RSEG    (ABS,DATA)
      000000                        221 	.org 0x0000
                           000080   222 _P0	=	0x0080
                           000081   223 _SP	=	0x0081
                           000082   224 _DPL	=	0x0082
                           000083   225 _DPH	=	0x0083
                           000084   226 _S4CON	=	0x0084
                           000085   227 _S4BUF	=	0x0085
                           000087   228 _PCON	=	0x0087
                           000088   229 _TCON	=	0x0088
                           000089   230 _TMOD	=	0x0089
                           00008A   231 _TL0	=	0x008a
                           00008B   232 _TL1	=	0x008b
                           00008C   233 _TH0	=	0x008c
                           00008D   234 _TH1	=	0x008d
                           00008E   235 _AUXR	=	0x008e
                           00008F   236 _INTCLKO	=	0x008f
                           000090   237 _P1	=	0x0090
                           000091   238 _P1M1	=	0x0091
                           000092   239 _P1M0	=	0x0092
                           000093   240 _P0M1	=	0x0093
                           000094   241 _P0M0	=	0x0094
                           000095   242 _P2M1	=	0x0095
                           000096   243 _P2M0	=	0x0096
                           000098   244 _SCON	=	0x0098
                           000099   245 _SBUF	=	0x0099
                           00009A   246 _S2CON	=	0x009a
                           00009B   247 _S2BUF	=	0x009b
                           00009D   248 _IRCBAND	=	0x009d
                           00009E   249 _LIRTRIM	=	0x009e
                           00009F   250 _IRTRIM	=	0x009f
                           0000A0   251 _P2	=	0x00a0
                           0000A2   252 _P_SW1	=	0x00a2
                           0000A8   253 _IE	=	0x00a8
                           0000A9   254 _SADDR	=	0x00a9
                           0000AA   255 _WKTCL	=	0x00aa
                           0000AB   256 _WKTCH	=	0x00ab
                           0000AC   257 _S3CON	=	0x00ac
                           0000AD   258 _S3BUF	=	0x00ad
                           0000AE   259 _TA	=	0x00ae
                           0000AF   260 _IE2	=	0x00af
                           0000B0   261 _P3	=	0x00b0
                           0000B1   262 _P3M1	=	0x00b1
                           0000B2   263 _P3M0	=	0x00b2
                           0000B3   264 _P4M1	=	0x00b3
                           0000B4   265 _P4M0	=	0x00b4
                           0000B5   266 _IP2	=	0x00b5
                           0000B6   267 _IP2H	=	0x00b6
                           0000B7   268 _IPH	=	0x00b7
                           0000B8   269 _IP	=	0x00b8
                           0000B9   270 _SADEN	=	0x00b9
                           0000BA   271 _P_SW2	=	0x00ba
                           0000BC   272 _ADC_CONTR	=	0x00bc
                           0000BD   273 _ADC_RES	=	0x00bd
                           0000BE   274 _ADC_RESL	=	0x00be
                           0000C0   275 _P4	=	0x00c0
                           0000C1   276 _WDT_CONTR	=	0x00c1
                           0000C2   277 _IAP_DATA	=	0x00c2
                           0000C3   278 _IAP_ADDRH	=	0x00c3
                           0000C4   279 _IAP_ADDRL	=	0x00c4
                           0000C5   280 _IAP_CMD	=	0x00c5
                           0000C6   281 _IAP_TRIG	=	0x00c6
                           0000C7   282 _IAP_CONTR	=	0x00c7
                           0000C8   283 _P5	=	0x00c8
                           0000C9   284 _P5M1	=	0x00c9
                           0000CA   285 _P5M0	=	0x00ca
                           0000CB   286 _P6M1	=	0x00cb
                           0000CC   287 _P6M0	=	0x00cc
                           0000CD   288 _SPSTAT	=	0x00cd
                           0000CE   289 _SPCTL	=	0x00ce
                           0000CF   290 _SPDAT	=	0x00cf
                           0000D0   291 _PSW	=	0x00d0
                           0000D1   292 _T4T3M	=	0x00d1
                           0000D2   293 _T4H	=	0x00d2
                           0000D3   294 _T4L	=	0x00d3
                           0000D4   295 _T3H	=	0x00d4
                           0000D5   296 _T3L	=	0x00d5
                           0000D6   297 _T2H	=	0x00d6
                           0000D7   298 _T2L	=	0x00d7
                           0000DC   299 _USBCLK	=	0x00dc
                           0000DE   300 _ADCCFG	=	0x00de
                           0000DF   301 _IP3	=	0x00df
                           0000E0   302 _ACC	=	0x00e0
                           0000E1   303 _P7M1	=	0x00e1
                           0000E2   304 _P7M0	=	0x00e2
                           0000E3   305 _DPS	=	0x00e3
                           0000E4   306 _DPL1	=	0x00e4
                           0000E5   307 _DPH1	=	0x00e5
                           0000E6   308 _CMPCR1	=	0x00e6
                           0000E7   309 _CMPCR2	=	0x00e7
                           0000E8   310 _P6	=	0x00e8
                           0000EC   311 _USBDAT	=	0x00ec
                           0000EE   312 _IP3H	=	0x00ee
                           0000EF   313 _AUXINTIF	=	0x00ef
                           0000F0   314 _B	=	0x00f0
                           0000F4   315 _USBCON	=	0x00f4
                           0000F5   316 _IAP_TPS	=	0x00f5
                           0000F8   317 _P7	=	0x00f8
                           0000FC   318 _USBADR	=	0x00fc
                           0000FF   319 _RSTCFG	=	0x00ff
                                    320 ;--------------------------------------------------------
                                    321 ; special function bits
                                    322 ;--------------------------------------------------------
                                    323 	.area RSEG    (ABS,DATA)
      000000                        324 	.org 0x0000
                           000080   325 _P00	=	0x0080
                           000081   326 _P01	=	0x0081
                           000082   327 _P02	=	0x0082
                           000083   328 _P03	=	0x0083
                           000084   329 _P04	=	0x0084
                           000085   330 _P05	=	0x0085
                           000086   331 _P06	=	0x0086
                           000087   332 _P07	=	0x0087
                           00008F   333 _TF1	=	0x008f
                           00008E   334 _TR1	=	0x008e
                           00008D   335 _TF0	=	0x008d
                           00008C   336 _TR0	=	0x008c
                           00008B   337 _IE1	=	0x008b
                           00008A   338 _IT1	=	0x008a
                           000089   339 _IE0	=	0x0089
                           000088   340 _IT0	=	0x0088
                           000090   341 _P10	=	0x0090
                           000091   342 _P11	=	0x0091
                           000092   343 _P12	=	0x0092
                           000093   344 _P13	=	0x0093
                           000094   345 _P14	=	0x0094
                           000095   346 _P15	=	0x0095
                           000096   347 _P16	=	0x0096
                           000097   348 _P17	=	0x0097
                           00009F   349 _SM0	=	0x009f
                           00009E   350 _SM1	=	0x009e
                           00009D   351 _SM2	=	0x009d
                           00009C   352 _REN	=	0x009c
                           00009B   353 _TB8	=	0x009b
                           00009A   354 _RB8	=	0x009a
                           000099   355 _TI	=	0x0099
                           000098   356 _RI	=	0x0098
                           0000A0   357 _P20	=	0x00a0
                           0000A1   358 _P21	=	0x00a1
                           0000A2   359 _P22	=	0x00a2
                           0000A3   360 _P23	=	0x00a3
                           0000A4   361 _P24	=	0x00a4
                           0000A5   362 _P25	=	0x00a5
                           0000A6   363 _P26	=	0x00a6
                           0000A7   364 _P27	=	0x00a7
                           0000AF   365 _EA	=	0x00af
                           0000AE   366 _ELVD	=	0x00ae
                           0000AD   367 _EADC	=	0x00ad
                           0000AC   368 _ES	=	0x00ac
                           0000AB   369 _ET1	=	0x00ab
                           0000AA   370 _EX1	=	0x00aa
                           0000A9   371 _ET0	=	0x00a9
                           0000A8   372 _EX0	=	0x00a8
                           0000B0   373 _P30	=	0x00b0
                           0000B1   374 _P31	=	0x00b1
                           0000B2   375 _P32	=	0x00b2
                           0000B3   376 _P33	=	0x00b3
                           0000B4   377 _P34	=	0x00b4
                           0000B5   378 _P35	=	0x00b5
                           0000B6   379 _P36	=	0x00b6
                           0000B7   380 _P37	=	0x00b7
                           0000BF   381 _PPCA	=	0x00bf
                           0000BE   382 _PLVD	=	0x00be
                           0000BD   383 _PADC	=	0x00bd
                           0000BC   384 _PS	=	0x00bc
                           0000BB   385 _PT1	=	0x00bb
                           0000BA   386 _PX1	=	0x00ba
                           0000B9   387 _PT0	=	0x00b9
                           0000B8   388 _PX0	=	0x00b8
                           0000C0   389 _P40	=	0x00c0
                           0000C1   390 _P41	=	0x00c1
                           0000C2   391 _P42	=	0x00c2
                           0000C3   392 _P43	=	0x00c3
                           0000C4   393 _P44	=	0x00c4
                           0000C5   394 _P45	=	0x00c5
                           0000C6   395 _P46	=	0x00c6
                           0000C7   396 _P47	=	0x00c7
                           0000C8   397 _P50	=	0x00c8
                           0000C9   398 _P51	=	0x00c9
                           0000CA   399 _P52	=	0x00ca
                           0000CB   400 _P53	=	0x00cb
                           0000CC   401 _P54	=	0x00cc
                           0000CD   402 _P55	=	0x00cd
                           0000CE   403 _P56	=	0x00ce
                           0000CF   404 _P57	=	0x00cf
                           0000D7   405 _CY	=	0x00d7
                           0000D6   406 _AC	=	0x00d6
                           0000D5   407 _F0	=	0x00d5
                           0000D4   408 _RS1	=	0x00d4
                           0000D3   409 _RS0	=	0x00d3
                           0000D2   410 _OV	=	0x00d2
                           0000D1   411 _F1	=	0x00d1
                           0000D0   412 _P	=	0x00d0
                           0000E8   413 _P60	=	0x00e8
                           0000E9   414 _P61	=	0x00e9
                           0000EA   415 _P62	=	0x00ea
                           0000EB   416 _P63	=	0x00eb
                           0000EC   417 _P64	=	0x00ec
                           0000ED   418 _P65	=	0x00ed
                           0000EE   419 _P66	=	0x00ee
                           0000EF   420 _P67	=	0x00ef
                           0000F8   421 _P70	=	0x00f8
                           0000F9   422 _P71	=	0x00f9
                           0000FA   423 _P72	=	0x00fa
                           0000FB   424 _P73	=	0x00fb
                           0000FC   425 _P74	=	0x00fc
                           0000FD   426 _P75	=	0x00fd
                           0000FE   427 _P76	=	0x00fe
                           0000FF   428 _P77	=	0x00ff
                                    429 ;--------------------------------------------------------
                                    430 ; overlayable register banks
                                    431 ;--------------------------------------------------------
                                    432 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        433 	.ds 8
                                    434 ;--------------------------------------------------------
                                    435 ; internal ram data
                                    436 ;--------------------------------------------------------
                                    437 	.area DSEG    (DATA)
                                    438 ;--------------------------------------------------------
                                    439 ; overlayable items in internal ram
                                    440 ;--------------------------------------------------------
                                    441 ;--------------------------------------------------------
                                    442 ; Stack segment in internal ram
                                    443 ;--------------------------------------------------------
                                    444 	.area	SSEG
      000008                        445 __start__stack:
      000008                        446 	.ds	1
                                    447 
                                    448 ;--------------------------------------------------------
                                    449 ; indirectly addressable internal ram data
                                    450 ;--------------------------------------------------------
                                    451 	.area ISEG    (DATA)
                                    452 ;--------------------------------------------------------
                                    453 ; absolute internal ram data
                                    454 ;--------------------------------------------------------
                                    455 	.area IABS    (ABS,DATA)
                                    456 	.area IABS    (ABS,DATA)
                                    457 ;--------------------------------------------------------
                                    458 ; bit data
                                    459 ;--------------------------------------------------------
                                    460 	.area BSEG    (BIT)
                                    461 ;--------------------------------------------------------
                                    462 ; paged external ram data
                                    463 ;--------------------------------------------------------
                                    464 	.area PSEG    (PAG,XDATA)
                                    465 ;--------------------------------------------------------
                                    466 ; external ram data
                                    467 ;--------------------------------------------------------
                                    468 	.area XSEG    (XDATA)
                                    469 ;--------------------------------------------------------
                                    470 ; absolute external ram data
                                    471 ;--------------------------------------------------------
                                    472 	.area XABS    (ABS,XDATA)
                                    473 ;--------------------------------------------------------
                                    474 ; external initialized ram data
                                    475 ;--------------------------------------------------------
                                    476 	.area XISEG   (XDATA)
                                    477 	.area HOME    (CODE)
                                    478 	.area GSINIT0 (CODE)
                                    479 	.area GSINIT1 (CODE)
                                    480 	.area GSINIT2 (CODE)
                                    481 	.area GSINIT3 (CODE)
                                    482 	.area GSINIT4 (CODE)
                                    483 	.area GSINIT5 (CODE)
                                    484 	.area GSINIT  (CODE)
                                    485 	.area GSFINAL (CODE)
                                    486 	.area CSEG    (CODE)
                                    487 ;--------------------------------------------------------
                                    488 ; interrupt vector
                                    489 ;--------------------------------------------------------
                                    490 	.area HOME    (CODE)
      000000                        491 __interrupt_vect:
      000000 02 00 11         [24]  492 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  493 	reti
      000004                        494 	.ds	7
      00000B 02 00 E0         [24]  495 	ljmp	_TM0_ISR
                                    496 ;--------------------------------------------------------
                                    497 ; global & static initialisations
                                    498 ;--------------------------------------------------------
                                    499 	.area HOME    (CODE)
                                    500 	.area GSINIT  (CODE)
                                    501 	.area GSFINAL (CODE)
                                    502 	.area GSINIT  (CODE)
                                    503 	.globl __sdcc_gsinit_startup
                                    504 	.globl __sdcc_program_startup
                                    505 	.globl __start__stack
                                    506 	.globl __mcs51_genXINIT
                                    507 	.globl __mcs51_genXRAMCLEAR
                                    508 	.globl __mcs51_genRAMCLEAR
                                    509 	.area GSFINAL (CODE)
      00006A 02 00 0E         [24]  510 	ljmp	__sdcc_program_startup
                                    511 ;--------------------------------------------------------
                                    512 ; Home
                                    513 ;--------------------------------------------------------
                                    514 	.area HOME    (CODE)
                                    515 	.area HOME    (CODE)
      00000E                        516 __sdcc_program_startup:
      00000E 02 00 A8         [24]  517 	ljmp	_main
                                    518 ;	return from main will return to caller
                                    519 ;--------------------------------------------------------
                                    520 ; code
                                    521 ;--------------------------------------------------------
                                    522 	.area CSEG    (CODE)
                                    523 ;------------------------------------------------------------
                                    524 ;Allocation info for local variables in function 'main'
                                    525 ;------------------------------------------------------------
                                    526 ;	src/main.c:10: int main()
                                    527 ;	-----------------------------------------
                                    528 ;	 function main
                                    529 ;	-----------------------------------------
      0000A8                        530 _main:
                           000007   531 	ar7 = 0x07
                           000006   532 	ar6 = 0x06
                           000005   533 	ar5 = 0x05
                           000004   534 	ar4 = 0x04
                           000003   535 	ar3 = 0x03
                           000002   536 	ar2 = 0x02
                           000001   537 	ar1 = 0x01
                           000000   538 	ar0 = 0x00
                                    539 ;	src/main.c:12: clock_Init();
      0000A8 12 00 C2         [24]  540 	lcall	_clock_Init
                                    541 ;	src/main.c:15: P0M1 = 0x00;
      0000AB 75 93 00         [24]  542 	mov	_P0M1,#0x00
                                    543 ;	src/main.c:16: P0M0 = 0x00;
      0000AE 75 94 00         [24]  544 	mov	_P0M0,#0x00
                                    545 ;	src/main.c:17: P01 = 0;
                                    546 ;	assignBit
      0000B1 C2 81            [12]  547 	clr	_P01
                                    548 ;	src/main.c:19: EA = 1;
                                    549 ;	assignBit
      0000B3 D2 AF            [12]  550 	setb	_EA
                                    551 ;	src/main.c:20: while (1)
      0000B5                        552 00102$:
                                    553 ;	src/main.c:22: P01 = !P01;
      0000B5 B2 81            [12]  554 	cpl	_P01
                                    555 ;	src/main.c:23: Delaynms(1);
      0000B7 90 00 01         [24]  556 	mov	dptr,#(0x01&0x00ff)
      0000BA E4               [12]  557 	clr	a
      0000BB F5 F0            [12]  558 	mov	b,a
      0000BD 12 00 6D         [24]  559 	lcall	_Delaynms
                                    560 ;	src/main.c:25: }
      0000C0 80 F3            [24]  561 	sjmp	00102$
                                    562 ;------------------------------------------------------------
                                    563 ;Allocation info for local variables in function 'clock_Init'
                                    564 ;------------------------------------------------------------
                                    565 ;	src/main.c:31: void clock_Init(void)
                                    566 ;	-----------------------------------------
                                    567 ;	 function clock_Init
                                    568 ;	-----------------------------------------
      0000C2                        569 _clock_Init:
                                    570 ;	src/main.c:33: P_SW2 = 0x80;
      0000C2 75 BA 80         [24]  571 	mov	_P_SW2,#0x80
                                    572 ;	src/main.c:34: CLKSEL = 0x00; //选择内部IRC ( 默认 )
      0000C5 90 FE 00         [24]  573 	mov	dptr,#0xfe00
      0000C8 E4               [12]  574 	clr	a
      0000C9 F0               [24]  575 	movx	@dptr,a
                                    576 ;	src/main.c:35: P_SW2 = 0x00;
                                    577 ;	1-genFromRTrack replaced	mov	_P_SW2,#0x00
      0000CA F5 BA            [12]  578 	mov	_P_SW2,a
                                    579 ;	src/main.c:36: }
      0000CC 22               [24]  580 	ret
                                    581 ;------------------------------------------------------------
                                    582 ;Allocation info for local variables in function 'TM0_Init'
                                    583 ;------------------------------------------------------------
                                    584 ;	src/main.c:38: void TM0_Init(void)
                                    585 ;	-----------------------------------------
                                    586 ;	 function TM0_Init
                                    587 ;	-----------------------------------------
      0000CD                        588 _TM0_Init:
                                    589 ;	src/main.c:40: AUXR |= 0x80; //定时器0为1T模式
      0000CD 43 8E 80         [24]  590 	orl	_AUXR,#0x80
                                    591 ;	src/main.c:41: TMOD &= 0xF0; //设置定时器模式
      0000D0 53 89 F0         [24]  592 	anl	_TMOD,#0xf0
                                    593 ;	src/main.c:43: TL0 = (65536 - (MAIN_Fosc / 1 / 2000)) % 256; // 200Hz
      0000D3 75 8A 9A         [24]  594 	mov	_TL0,#0x9a
                                    595 ;	src/main.c:44: TH0 = (65536 - (MAIN_Fosc / 1 / 2000)) / 256; // 200Hz
      0000D6 75 8C A9         [24]  596 	mov	_TH0,#0xa9
                                    597 ;	src/main.c:45: TR0 = 1;                                      //定时器0开始计时
                                    598 ;	assignBit
      0000D9 D2 8C            [12]  599 	setb	_TR0
                                    600 ;	src/main.c:46: ET0 = 1;                                      //使能定时器0中断
                                    601 ;	assignBit
      0000DB D2 A9            [12]  602 	setb	_ET0
                                    603 ;	src/main.c:47: EA = 1;
                                    604 ;	assignBit
      0000DD D2 AF            [12]  605 	setb	_EA
                                    606 ;	src/main.c:48: }
      0000DF 22               [24]  607 	ret
                                    608 	.area CSEG    (CODE)
                                    609 	.area CONST   (CODE)
                                    610 	.area XINIT   (CODE)
                                    611 	.area CABS    (ABS,CODE)
