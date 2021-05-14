#include <stdio.h>
void printBits(size_t const size, void const * const ptr);

int main() {
    char P1 = 0xff;
    printf("默认值:\t");
    printBits(sizeof(P1), &P1);

    P1 = P1^0b1100; //0b11等效于3
//    P1 = P1^3;
    printf("异或:\t");
    printBits(sizeof(P1), &P1);

    P1 = ~P1;
    printf("取反:\t");
    printBits(sizeof(P1), &P1);

    P1 = P1|0b10011;
    printf("位或:\t");
    printBits(sizeof(P1), &P1);

    P1 = P1|0b00100;
    printf("位与:\t");
    printBits(sizeof(P1), &P1);
    return 0;
}

// Assumes little endian
void printBits(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;

    for (i = size-1; i >= 0; i--) {
        for (j = 7; j >= 0; j--) {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    puts("");
}