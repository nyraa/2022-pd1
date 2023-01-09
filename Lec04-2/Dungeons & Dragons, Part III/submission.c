#include <stdio.h>

#define c1 0x38E38E38E38E3800LLU
#define c2 0x2AAAAAAAAAAAAAAALLU
#define c3 0x1C71C71C71C71C71LLU
#define magic 0x7CE66C50E2840000LLU

int main()
{
    unsigned long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    a *= c1;
    a %= magic;
    b *= c2;
    b %= magic;
    c *= c3;
    c %= magic;
    printf("%llu", (((a + b) % magic) + c) % magic);
    return 0;
}