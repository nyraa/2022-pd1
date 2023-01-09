#include <stdio.h>
#define MAX_N 49
#define reset_xy() {x %= n; if(x < 0) x += n; y %= n; if(y < 0) y += n;}
int matrix[MAX_N][MAX_N];
int main()
{
    int n;
    scanf("%d", &n);
    int x = n / 2, y = 0;
    for(int i = 1; i <= n * n;)
    {
        if(matrix[y][x] > 0)
        {
            x -= 1;
            y += 1;
            reset_xy();
            y += 1;
            reset_xy();
        }
        else if(matrix[y][x] == 0)
        {
            matrix[y][x] = i;
            ++i;
            x += 1;
            y -= 1;
        }
        reset_xy();
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}