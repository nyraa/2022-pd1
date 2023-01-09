#include <stdio.h>
#include <stdint.h>

void print_bin(uint32_t num)
{
    for(int i = 0; i < 32; ++i, num<<=1)
    {
        printf("%d", (num & (1 << 31)) >> 31);
        if((i + 1) % 8 == 0) printf(" ");
    }
}

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    int32_t int_a = *(int32_t *)&a, int_b = *(int32_t *)&b;
    int32_t sum = int_a + int_b;
    printf("   ");
    print_bin(int_a);
    printf("\n+) ");
    print_bin(int_b);
    printf("\n");
    for(int i = 0; i < 39; ++i) printf("-");
    printf("\n   ");
    print_bin(sum);
    printf("\n%.0f + %.0f = %d", a, b, sum);
    return 0;
}