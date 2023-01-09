#include <stdio.h>
#include <math.h>

int main()
{
    float i;
    scanf("%f", &i);
    i = 7 * pow(i, 4) - 8 * pow(i, 3) - pow(i, 2) + 6 * i -22;
    printf("%.1f", i);
    return 0;
}