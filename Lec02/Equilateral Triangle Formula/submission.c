#include <stdio.h>
#include <math.h>

int main()
{
    const float sqrt_3 = 1.7320508f;
    int side;
    scanf("%d", &side);
    printf("%.3f", sqrt_3 / 4 * pow(side, 2));
    return 0;
}