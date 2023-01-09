#include <stdio.h>
#include <math.h>

int main()
{
    int weight;
    float height;
    scanf("%f %d", &height, &weight);
    height /= 100;
    printf("%f", weight / (height * height));
    return 0;
}