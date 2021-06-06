#include "define.h"

void init() {
    TMOD = 1;
//    TH0=(65536-50000)/256;
//    TL0=(65536-50000)%256;
    TH0 = 65535;
    TL0 = 65535;
    EA=1;
    ET0=1;
    TR0=1;
}

int flag = 0;

void main() {
    init();
    int flag = 0;
    P2_1 = 0;
    while (1) {
        if (P3_3 == 0) {
            P1_5 = 0;
        } else {
            P1_5 = 1;
        }
    }
}

void timer() interrupt 1 {
    if (flag == 0) {
        flag = 1;
        P2_7 = 0;
    } else {
        flag = 0;
        P2_7 = 1;
    }
}