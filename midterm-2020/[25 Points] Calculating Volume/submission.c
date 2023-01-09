#include <stdio.h>
#include <math.h>

int main()
{
    int mode;
    scanf("%d", &mode);
    switch (mode)
    {
        case 1:
        {
            double l;
            scanf("%lf", &l);
            printf("%.2f", l * l * l);
            break;
        }
        case 2:
        {
            double l, h, w;
            scanf("%lf %lf %lf", &l, &h, &w);
            printf("%.2f", l * h * w);
            break;
        }
        case 3:
        {
            double r, h;
            scanf("%lf %lf", &r, &h);
            printf("%.2f", 3.14 * r * r * h);
            break;
        }
        case 4:
        {
            double l;
            scanf("%lf", &l);
            printf("%.2f", sqrt(2) * l * l * l / 12);
            break;
        }
    }
    return 0;
}