#include<stdio.h>

int main()
{
    double product = 1, input;
    for(int i = 0; i < 5; ++i)
    {
        scanf("%lf", &input);
        product *= input;
    }
    printf("%.15lf", product);
    return 0;
}