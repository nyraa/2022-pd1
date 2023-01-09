#include <stdio.h>
#define MAX_CAN 10

int main()
{
    int row[30] = {0};
    int n;
    scanf("%d", &n);
    int earn = 0;
    for(int i = 0; i < n; ++i)
    {
        int id, count, price;
        scanf("%d %d", &id, &count);
        if(id <= 10) price = 10;
        else if(id <= 20) price = 20;
        else price = 30;
        if(MAX_CAN - row[id-1] < count) count = MAX_CAN - row[id-1];
        row[id-1] += count;
        earn += count * price;
    }
    for(int i = 0; i < 30; ++i)
    {
        printf("%d ", MAX_CAN - row[i]);
        if((i+1) % 10 == 0) printf("\n");
    }
    printf("Earned: $%d", earn);
    return 0;
}