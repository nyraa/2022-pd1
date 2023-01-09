#include <stdio.h>
#include <stdint.h>

int main ()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        int pos;
        uint64_t value;
        scanf("%d-%lx", &pos, &value);
        value &= ((uint64_t)0xff) << pos;
        for(int j = 63; j >= 0; --j)
        {
            putchar(((value >> j) & 1) + '0');
            if(j % 8 == 0) putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}
