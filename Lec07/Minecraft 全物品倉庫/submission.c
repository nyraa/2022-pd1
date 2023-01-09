#include <stdio.h>
#define MAX_ITEMS 21

// start from 1
int item_required = 0;
// start from [1][0]; root item if 0
int craft_table[MAX_ITEMS][MAX_ITEMS] = {0};
int n;

void craft(int item)
{
    for(int i = 0; i < MAX_ITEMS; ++i)
    {
        if(craft_table[item][i] == 0) // root item
        {
            if(i == 0)
            {
                ++item_required;
            }
            return;
        }
        else craft(craft_table[item][i]);
    }
}

int main()
{
    int m, v;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i)
    {
        scanf("%d", &m);
        for(int j = 0; j < m; ++j)
        {
            scanf("%d", &v);
            craft_table[i][j] = v;
        }
    }
    for(int i = 1; i <= n; ++i)
    {
        craft(i);
    }
    printf("%d", item_required);
    return 0;
}