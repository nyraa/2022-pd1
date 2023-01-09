#include <stdio.h>
#define CRITICAL_HIT printf("Critical Hit")
#define NORMAL_HIT printf("Normal Hit")
#define MISS printf("Miss")

int main()
{
    int d[6];
    int i;
    for(i = 0; i < 6; ++i)
    {
        scanf("%d", &d[i]);
    }
    if(d[0] + d[1] + d[2] <= 10)
    {
        printf("Player attacks: ");
        if(d[3] == d[4] && d[4] == d[5]) CRITICAL_HIT;
        else if(d[3] + d[4] >= d[5]) NORMAL_HIT;
        else MISS;
    }
    else
    {
        printf("Dragon attacks: ");
        if(d[3] == d[4] || d[4] == d[5] || d[3] == d[5]) MISS;
        else if(d[3] + d[4] != d[5]) NORMAL_HIT;
        else CRITICAL_HIT;
    }
    return 0;
}