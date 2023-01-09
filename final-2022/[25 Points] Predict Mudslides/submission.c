#include <stdio.h>

int map[5][5];

int water_flow(int i, int j)
{
    if(i >= 5 || j >= 5 || i < 0 || j < 0) return 0; // out of range
    if(map[i][j] == 1) return 0; // wall
    if(map[i][j] == 3) return 0; // filled
    int destroy = map[i][j] == 2 ? 1 : 0;
    map[i][j] = 3; // set to "water filled"
    destroy += water_flow(i - 1, j) + water_flow(i, j + 1) + water_flow(i + 1, j) + water_flow(i, j - 1);
    return destroy;
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    for(int i = 0; i < 5; ++i)
    {
        for(int j = 0; j < 5; ++j)
        {
            scanf("%d", &map[i][j]);
        }
    }
    printf("%d", water_flow(m, n));
    return 0;
}