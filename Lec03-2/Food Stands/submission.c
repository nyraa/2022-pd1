#include <stdio.h>

int main()
{
    int max = 0, min = 2147483647;
    int input;
    while(1)
    {
        scanf("%d", &input);
        if(input == -1) break;
        if(input > max) max = input;
        if(input < min) min = input;
    }
    
    printf("%d", max - min);
    return 0;
}