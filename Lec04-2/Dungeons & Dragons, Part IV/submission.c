#include <stdio.h>
#define nth_byte(n, d) ((n >> (32 - d * 8)) & 0xff)
#define to_byte(n) ((n) * 8)

int main()
{
    unsigned int temp = 0, n;
    int d1, d2, d3, d4;
    scanf("%u", &n);
    scanf("%d %d %d %d", &d1, &d2, &d3, &d4);
    temp |= (nth_byte(n, d1) ^ nth_byte(n, d2)) << to_byte(3);

    temp |= (nth_byte(n, d2) & nth_byte(n, d3)) << to_byte(2);

    temp |= (nth_byte(n, d3) | nth_byte(n, d1)) << to_byte(1);

    temp |= (~nth_byte(n, d4) & 0xff);

    temp = (temp << (32 - (d1 + d2 + d3 + d4))) | (temp >> (d1 + d2 + d3 + d4));

    temp = (temp ^ (temp >> 16)) & 0x0000ffff;
    printf("%u", temp);
    return 0;
}