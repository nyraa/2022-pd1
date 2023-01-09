#include <stdio.h>

int main()
{
    int lock[6] = {0};
    int d1, d2;
    int i;
    for(i = 0; i < 75; ++i)
    {
        scanf("%d %d", &d1, &d2);
        d1 -= 1;
        lock[d1] += (d2 & 1) ? 1 : -1;
        lock[d1] %= 10;
        if(lock[d1] < 0) lock[d1] += 10;
    }
    for(i = 0; i < 6; ++i)
    {
        printf("%d ", lock[i]);
    }
    return 0;
}