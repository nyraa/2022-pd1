#include <stdio.h>
#include <math.h>
#define TEX2019 1.08
#define TEX2022 1.1
#define JPY2TWD2019 0.2966
#define JPY2TWD2022 0.2178

int main()
{
    int price;
    scanf("%d", &price);
    int jpy2019 = price, jpy2022 = price;
    if(price <= 5000)
    {
        jpy2019 = lround(price * TEX2019);
        jpy2022 = lround(price * TEX2022);
    }
    printf("%ld", lround(jpy2019 * JPY2TWD2019) - lround(jpy2022 * JPY2TWD2022));
    return 0;
}