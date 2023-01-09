#include <stdio.h>

int main()
{
    int input[12];
    int i, a = 0, b = 0, result;
    for(i = 0; i < 12; ++i)
    {
        scanf("%1d", &input[i]);
    }
    // even
    for(i = 1; i < 12; i += 2)
    {
        a += input[i];
    }
    // odd
    for(i = 0; i < 12; i += 2)
    {
        b += input[i];
    }
    result = 9 - (a * 3 + b - 1) % 10;
    printf("%d", result);
    return 0;
}