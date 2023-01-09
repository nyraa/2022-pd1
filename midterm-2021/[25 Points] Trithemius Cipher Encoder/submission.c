#include <stdio.h>
#include <ctype.h>

int main()
{
    int k, d;
    char c;
    scanf("%d %c\n", &k, &c);
    d = c == 'a'? 1 : -1;
    while((c = getchar()) != '\n')
    {
        k %= 26;
        if(k < 0) k += 26;
        if(isupper(c))
        {
            c = 'A' + (c - 'A' + k) % 26;
            k += d;
        }
        else if(islower(c))
        {
            c = 'a' + (c - 'a' + k) % 26;
            k += d;
        }
        putchar(c);
    }
    return 0;
}