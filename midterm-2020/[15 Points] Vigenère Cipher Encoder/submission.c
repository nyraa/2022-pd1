#include <stdio.h>

int main(void)
{
    int n;
    char key[101];
    scanf("%d %s\n", &n, key);
    for(int i = 0; i < n; ++i) key[i] -= 'a';
    char input;
    int i = 0;
    while((input = getchar()) != '\n')
    {
        if(isupper(input))
        {
            input = (input - 'A' + key[i++]) % 26 + 'A';
        }
        else if(islower(input))
        {
            input = (input - 'a' + key[i++]) % 26 + 'a';
        }
        putchar(input);
        i %= n;
    }
    return 0;
}
