#include <stdio.h>
#define MAX_N 100

int main()
{
    int matrix[MAX_N * MAX_N];
    int new_matrix[MAX_N * MAX_N];
    int *a = matrix, *b = new_matrix;
    int rotate_times;
    scanf("%d", &rotate_times);
    rotate_times /= 90;
    int n, m, v;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            scanf("%d", &v);
            a[i * MAX_N + j] = v;
        }
    }
    int new_x, new_y;
    for (int i = 0; i < rotate_times; ++i)
    {
        for(int x = 0; x < n; ++x) // n axis
        {
            for(int y = 0; y < m; ++y) // m axis
            {
                new_x = y; // n axis
                new_y = n - x - 1; // m axis
                b[new_x * MAX_N + new_y] = a[x * MAX_N + y];
            }
        }
        int *tmp = a;
        a = b;
        b = tmp;
        int tmp2 = n;
        n = m;
        m = tmp2;
    }
    for(int x = 0; x < n; ++x)
    {
        for(int y = 0; y < m; ++y)
        {
            printf("%d ", a[x * MAX_N + y]);
        }
        printf("\n");
    }
    return 0;
}