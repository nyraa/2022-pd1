#include <stdio.h>
#define print_comb() {for(int _i = 0; _i < n; ++_i) if(output[_i]) printf("%s ", str[_i]); putchar('\n');}

int n, k;
char str[20][11];
int output[20] = {0};

void comb(int depth, int cursor)
{
    output[cursor] = 1;
    if(depth < k)
    {
        for(int i = cursor + 1; i < n; ++i)
            comb(depth + 1, i);
    }
    else
    {
        print_comb();
    }
    output[cursor] = 0;
}
int main ()
{
    scanf("%d %d\n", &n, &k);
    for(int i = 0; i < n; ++i)
        scanf("%s", str[i]);
    for(int i = 0; i < n; ++i)
        comb(1, i);
    return 0;
}
