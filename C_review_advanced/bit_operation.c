#include <stdio.h>
#include <stdlib.h>

void main() {
    unsigned char i = 0xf; // 00001111
    unsigned char j = 0xff; // 11111111
    printf("%x << 1 = %x\n", i, i << 1); // 1bit lefts shift: 00011110=0x1e
    printf("%x >> 1 = %x\n", i, i >> 1); // 1bit right shift: 00000111=0x7
    printf("%x | %x = %x\n", i, j, i|j); // OR: 11111111 = 0xff
    printf("%x & %x = %x\n", i, j, i&j); // AND: 00001111 = 0xf
    printf("~%x = %x\n", i, (unsigned char)~i); // NOT: 11110000 = 0xf0
}