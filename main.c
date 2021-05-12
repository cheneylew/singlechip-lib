//#include <8052.h>
#include "/usr/local/Cellar/sdcc/4.1.0/share/sdcc/include/mcs51/8052.h"
#include "/usr/local/Cellar/sdcc/4.1.0/share/sdcc/include/mcs51/8051.h"

#include "define.h"

//========= 延时 ============
void delay_ms(unsigned int s) {

    unsigned int x;

    for (s; s > 0; s--) {
        x = 98;
        while (x--);
    }
}
//================ 主函数 ===================
void main(){
    while (1) {
        P2 = 0b11111101;
    }
    return;
}

void waterFlowLight() {
    unsigned char i;

    P1_0 = 0;
    P1_1 = 1;
    P1_2 = 1;
    P1_3 = 1;
    P1_4 = 0;

    while(1){ //主循环

        P2 = 0xff;

        delay_ms(150);

        for(i = 0;i<8;i++){
            P2 = P2 <<1;
            delay_ms(150);
        }

        P2 = 0xff;

        delay_ms(150);

        for(i = 0;i<8;i++){
            P2 = P2 >>1;
            delay_ms(150);
        }
    }
}