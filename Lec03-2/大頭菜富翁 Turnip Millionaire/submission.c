#include <stdio.h>
#define w 0.9f
#define u 0.1f
#define b -51
#define u_ -0.98f
#define b_ 153
#define f(x) x
#define next_price(x, h) (h = w * x + u * h + b, f(u_ * h + b_));

int main()
{
    float h = 0, x;
    scanf("%f", &x);
    for(int i = 0; i < 5; ++i)
    {
        x = next_price(x, h);
        printf("%.1f ", x);
    }
    return 0;
}