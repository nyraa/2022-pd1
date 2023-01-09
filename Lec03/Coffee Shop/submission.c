#include <stdio.h>
#define AMERICANO  110
#define LATTE      150
#define CAPPUCCINO 135
#define MOCHA      145

int main()
{
    int i, j;
    int products[4] = {AMERICANO, LATTE, CAPPUCCINO, MOCHA};
    scanf("%d %d", &i, &j);
    i -= 1;
    if(i < 4) printf("The total price is %d dollars!", products[i] * j);
    else printf("Wait, what?");
    return 0;
}