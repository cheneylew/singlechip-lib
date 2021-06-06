//
// Created by Apple on 2021/5/12.
//

#include <8052.h>

#ifndef __DEFINE_H_
#define __DEFINE_H_

typedef signed char int8;
typedef signed int int16;
typedef signed long int32;
typedef unsigned char uint8;
typedef unsigned int uint16;
typedef unsigned int uint;
typedef unsigned long uint32;

typedef unsigned char uchar;
typedef unsigned char byte;

typedef unsigned char u8;
typedef unsigned char u16;

#define sfr __sfr __at
#define sbit __sbit __at
#define bit __sbit __at
#define code __code
#define interrupt __interrupt

//========= 延时 ============
void delay_ms(uint16 s) {
    unsigned int x;
    for (s; s > 0; s--) {
        x = 98;
        while (x--);
    }
}

/*******************************************************************************
* 函 数 名         : delay
* 函数功能		   : 延时函数，i=1时，大约延时10us
*******************************************************************************/
void delay_10us(uint16 i) {
    while (i--);
}

//端口地址
#define AD_P3_0  0xB0
#define AD_P3_1  0xB1
#define AD_P3_2  0xB2
#define AD_P3_3  0xB3
#define AD_P3_4  0xB4
#define AD_P3_5  0xB5
#define AD_P3_6  0xB6
#define AD_P3_7  0xB7
#define AD_P2_0  0xA0
#define AD_P2_1  0xA1
#define AD_P2_2  0xA2
#define AD_P2_3  0xA3
#define AD_P2_4  0xA4
#define AD_P2_5  0xA5
#define AD_P2_6  0xA6
#define AD_P2_7  0xA7
#define AD_P1_0  0x90
#define AD_P1_1  0x91
#define AD_P1_2  0x92
#define AD_P1_3  0x93
#define AD_P1_4  0x94
#define AD_P1_5  0x95
#define AD_P1_6  0x96
#define AD_P1_7  0x97
#define AD_P0_0  0x80
#define AD_P0_1  0x81
#define AD_P0_2  0x82
#define AD_P0_3  0x83
#define AD_P0_4  0x84
#define AD_P0_5  0x85
#define AD_P0_6  0x86
#define AD_P0_7  0x87

#define AD_P0    0x80
#define AD_SP    0x81
#define AD_DPL   0x82
#define AD_DPH   0x83
#define AD_PCON  0x87
#define AD_TCON  0x88
#define AD_TMOD  0x89
#define AD_TL0   0x8A
#define AD_TL1   0x8B
#define AD_TH0   0x8C
#define AD_TH1   0x8D
#define AD_P1    0x90
#define AD_SCON  0x98
#define AD_SBUF  0x99
#define AD_P2    0xA0
#define AD_IE    0xA8
#define AD_P3    0xB0
#define AD_IP    0xB8
#define AD_PSW   0xD0
#define AD_ACC   0xE0
#define AD_B     0xF0

#define AD_IT0   0x88
#define AD_IE0   0x89
#define AD_IT1   0x8A
#define AD_IE1   0x8B
#define AD_TR0   0x8C
#define AD_TF0   0x8D
#define AD_TR1   0x8E
#define AD_TF1   0x8F

#define AD_RI    0x98
#define AD_TI    0x99
#define AD_RB8   0x9A
#define AD_TB8   0x9B
#define AD_REN   0x9C
#define AD_SM2   0x9D
#define AD_SM1   0x9E
#define AD_SM0   0x9F

#define AD_EX0   0xA8
#define AD_ET0   0xA9
#define AD_EX1   0xAA
#define AD_ET1   0xAB
#define AD_ES    0xAC
#define AD_EA    0xAF

#define AD_RXD   0xB0
#define AD_TXD   0xB1
#define AD_INT0  0xB2
#define AD_INT1  0xB3
#define AD_T0    0xB4
#define AD_T1    0xB5
#define AD_WR    0xB6
#define AD_RD    0xB7

#define AD_PX0   0xB8
#define AD_PT0   0xB9
#define AD_PX1   0xBA
#define AD_PT1   0xBB
#define AD_PS    0xBC

#define AD_P     0xD0
#define AD_F1    0xD1
#define AD_OV    0xD2
#define AD_RS0   0xD3
#define AD_RS1   0xD4
#define AD_F0    0xD5
#define AD_AC    0xD6
#define AD_CY    0xD7

//端口代码提示
#define P3_0  P3_0
#define P3_1  P3_1
#define P3_2  P3_2
#define P3_3  P3_3
#define P3_4  P3_4
#define P3_5  P3_5
#define P3_6  P3_6
#define P3_7  P3_7
#define P2_0  P2_0
#define P2_1  P2_1
#define P2_2  P2_2
#define P2_3  P2_3
#define P2_4  P2_4
#define P2_5  P2_5
#define P2_6  P2_6
#define P2_7  P2_7
#define P1_0  P1_0
#define P1_1  P1_1
#define P1_2  P1_2
#define P1_3  P1_3
#define P1_4  P1_4
#define P1_5  P1_5
#define P1_6  P1_6
#define P1_7  P1_7
#define P0_0  P0_0
#define P0_1  P0_1
#define P0_2  P0_2
#define P0_3  P0_3
#define P0_4  P0_4
#define P0_5  P0_5
#define P0_6  P0_6
#define P0_7  P0_7

#define P0    P0
#define SP    SP
#define DPL   DPL
#define DPH   DPH
#define PCON  PCON
#define TCON  TCON
#define TMOD  TMOD
#define TL0   TL0
#define TL1   TL1
#define TH0   TH0
#define TH1   TH1
#define P1    P1
#define SCON  SCON
#define SBUF  SBUF
#define P2    P2
#define IE    IE
#define P3    P3
#define IP    IP
#define PSW   PSW
#define ACC   ACC
#define B     B

#define IT0   IT0
#define IE0   IE0
#define IT1   IT1
#define IE1   IE1
#define TR0   TR0
#define TF0   TF0
#define TR1   TR1
#define TF1   TF1

#define RI    RI
#define TI    TI
#define RB8   RB8
#define TB8   TB8
#define REN   REN
#define SM2   SM2
#define SM1   SM1
#define SM0   SM0

#define EX0   EX0
#define ET0   ET0
#define EX1   EX1
#define ET1   ET1
#define ES    ES
#define EA    EA

#define RXD   RXD
#define TXD   TXD
#define INT0  INT0
#define INT1  INT1
#define T0    T0
#define T1    T1
#define WR    WR
#define RD    RD

#define PX0   PX0
#define PT0   PT0
#define PX1   PX1
#define PT1   PT1
#define PS    PS

#define P     P
#define F1    F1
#define OV    OV
#define RS0   RS0
#define RS1   RS1
#define F0    F0
#define AC    AC
#define CY    CY

#endif