#include <stdio.h>
#include <math.h>

int main()
{
    double n, r;
    scanf("%lf %lf", &r, &n);
    int inf = pow(r, n);
    printf("%d", inf);
    return 0;
}