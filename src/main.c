#include "define.h"

sbit AD_P3_2 IRay;

void initIRay() {
    EA = 1;     //打开总中断
    EX0 = 1;    //打开中断0允许
    IT0 = 1;    //下降沿触发
//    IRay = 1;   //初始化端口
}

void main() {
    initIRay();
    while (1) {
        P2_1 = 0;
        delay_ms(300);
        P2_1 = 1;
        delay_ms(300);
    };
}

int8 flag = 0;
void ReadIr() interrupt 0 {
    P2_7 = flag;
    flag = ~flag;
}