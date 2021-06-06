#include "define.h"

uint8 code smgduan[17]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71,0X76};
//0、1、2、3、4、5、6、7、8、9、A、b、C、d、E、F、H的显示码

void main() {
    while (1) {
        P2_2 = 1;
        P2_3 = 1;
        P2_4 = 0;
        P0 = 0b00000001;
        int i = 0;
        while (1) {
            delay_ms(300);
            P0 <<= 1;
            P0 |= 0b10000000; //加上小数点
            i ++;
            if (i>=8) {
                break;
            }
        }
    }
}