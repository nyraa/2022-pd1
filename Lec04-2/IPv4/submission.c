#include <stdio.h>
#define shift_byte(i, n) ((i >> (n * 8)) & 0xff)

int main()
{
    unsigned int in;
    scanf("%x", &in);
    printf("%d.%d.%d.%d", shift_byte(in, 3), shift_byte(in, 2), shift_byte(in, 1), in & 0xff);
    return 0;
}