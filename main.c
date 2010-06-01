#include <stdio.h>

int main(int argc, char **argv)
{
    union {
        unsigned short s;
        unsigned char c[sizeof(unsigned short)];
    } u;
    u.s = 0x0102;
    if (u.c[0] == 0x02 && u.c[1] == 0x01) {
        printf("little-endian\n");
    } else {
        printf("big-endian\n");
    }
    return 0;
}
