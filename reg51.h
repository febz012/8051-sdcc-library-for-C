/*-------------------------------------------------------------------------
reg51.h library for SDCC Compiler
Updated by @ Febin D Sam

-------------------------------------------------------------------------*/

#ifndef REG51_H
#define REG51_H


/*  BYTE Register  */


__sfr __at (0x80) P0   ;
__sfr __at (0x90) P1   ;
__sfr __at (0xA0) P2   ;
__sfr __at (0xB0) P3   ;
__sfr __at (0xD0) PSW  ;
__sfr __at (0xE0) ACC  ;
__sfr __at (0xF0) B    ;
__sfr __at (0x81) SP   ;
__sfr __at (0x82) DPL  ;
__sfr __at (0x83) DPH  ;
__sfr __at (0x87) PCON ;
__sfr __at (0x88) TCON ;
__sfr __at (0x89) TMOD ;
__sfr __at (0x8A) TL0  ;
__sfr __at (0x8B) TL1  ;
__sfr __at (0x8C) TH0  ;
__sfr __at (0x8D) TH1  ;
__sfr __at (0x8E) AUXR ;
__sfr __at (0xA8) IE   ;
__sfr __at (0xB8) IP   ;
__sfr __at (0x98) SCON ;
__sfr __at (0x99) SBUF ;


/*  BIT Register  */
/*  PSW   */
__sbit __at (0xD7) CY   ;
__sbit __at (0xD6) AC   ;
__sbit __at (0xD5) F0   ;
__sbit __at (0xD4) RS1  ;
__sbit __at (0xD3) RS0  ;
__sbit __at (0xD2) OV   ;
__sbit __at (0xD0) P    ;

/*  TCON  */
__sbit __at (0x8F) TF1  ;
__sbit __at (0x8E) TR1  ;
__sbit __at (0x8D) TF0  ;
__sbit __at (0x8C) TR0  ;
__sbit __at (0x8B) IE1  ;
__sbit __at (0x8A) IT1  ;
__sbit __at (0x89) IE0  ;
__sbit __at (0x88) IT0  ;

/*  IE   */
__sbit __at (0xAF) EA   ;
__sbit __at (0xAC) ES   ;
__sbit __at (0xAB) ET1  ;
__sbit __at (0xAA) EX1  ;
__sbit __at (0xA9) ET0  ;
__sbit __at (0xA8) EX0  ;

/*  IP   */
__sbit __at (0xBC) PS   ;
__sbit __at (0xBB) PT1  ;
__sbit __at (0xBA) PX1  ;
__sbit __at (0xB9) PT0  ;
__sbit __at (0xB8) PX0  ;

/*  P3  */
__sbit __at (0xB7) RD   ;
__sbit __at (0xB6) WR   ;
__sbit __at (0xB5) T1   ;
__sbit __at (0xB4) T0   ;
__sbit __at (0xB3) INT1 ;
__sbit __at (0xB2) INT0 ;
__sbit __at (0xB1) TXD  ;
__sbit __at (0xB0) RXD  ;

/* P1 */
__sbit __at (0x90) P1_0 ;
__sbit __at (0x91) P1_1 ;
__sbit __at (0x92) P1_2 ;
__sbit __at (0x93) P1_3 ;
__sbit __at (0x94) P1_4 ;
__sbit __at (0x95) P1_5 ;
__sbit __at (0x96) P1_6 ;
__sbit __at (0x97) P1_7 ;

/* P2 */
__sbit __at (0x10) P2_0 ;
__sbit __at (0x11) P2_1 ;
__sbit __at (0x12) P2_2 ;
__sbit __at (0x13) P2_3 ;
__sbit __at (0x14) P2_4 ;
__sbit __at (0x15) P2_5 ;
__sbit __at (0x16) P2_6 ;
__sbit __at (0x17) P2_7 ;


/*  SCON  */
__sbit __at (0x9F) SM0  ;
__sbit __at (0x9E) SM1  ;
__sbit __at (0x9D) SM2  ;
__sbit __at (0x9C) REN  ;
__sbit __at (0x9B) TB8  ;
__sbit __at (0x9A) RB8  ;
__sbit __at (0x99) TI   ;
__sbit __at (0x98) RI   ;

/* TMOD bits */
#define G__atE1   (1<<7)
#define C_T1    (1<<6)
#define M1_1    (1<<5)
#define M0_1    (1<<4)
#define G__atE0   (1<<3)
#define C_T0    (1<<2)
#define M1_0    (1<<1)
#define M0_0    (1<<0)

/* T2CON */
__sfr __at (0xC8) T2CON ;

/* T2CON bits */
__sbit __at (0xC8) T2CON_0 ;
__sbit __at (0xC9) T2CON_1 ;
__sbit __at (0xCA) T2CON_2 ;
__sbit __at (0xCB) T2CON_3 ;
__sbit __at (0xCC) T2CON_4 ;
__sbit __at (0xCD) T2CON_5 ;
__sbit __at (0xCE) T2CON_6 ;
__sbit __at (0xCF) T2CON_7 ;

/* RCAP2 L & H */
__sfr __at (0xCB) RCAP2H;
__sfr __at (0xCA) RCAP2L;

#endif
