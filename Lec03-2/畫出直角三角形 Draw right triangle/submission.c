#include <stdio.h>

int main()
{
    int type, n, i, j;
    scanf("%d %d", &type, &n);
    switch(type)
    {
        case 1:
            for(i = 0; i < n; ++i)
            {
                for(j = 0; j < n - i; ++j) printf("*");
                printf("\n");
            }
            break;
        case 2:
            for(i = 0; i < n; ++i)
            {
                for(j = 0; j <= i; ++j) printf("*");
                printf("\n");
            }
            break;
        case 3:
            for(i = 0; i < n; ++i)
            {
                for(j = 0; j < n; ++j)
                    if(j >= i) printf("*");
                    else printf(" ");
                printf("\n");
            }
            break;
        case 4:
            for(i = 0; i < n; ++i)
            {
                for(j = 0; j < n; ++j)
                    if(j >= n - i - 1) printf("*");
                    else printf(" ");
                printf("\n");
            }
            break;
    }
    return 0;
}