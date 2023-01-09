#include <stdio.h>

int main()
{
    int n;
    long value, sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        scanf("%ld", &value);
        sum += value;
        if(sum % value == 0) printf("%ld %ld\n", sum, value);
    }
    return 0;
}