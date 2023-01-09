#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, i = 0;
    char c;
    bool begin_flag = true;
    scanf("%d\n", &n);
    while(i < n)
    {
        c = getchar();
        if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        {
            if(begin_flag)
            {
                if(c >= 'a') // A-Z(a-z)
                    c -= 'a' - 'A';
                begin_flag = false;
            }
            else
            {
                if(c <= 'Z')
                    c += 'a' - 'A';
            }
            putchar(c);
        }
        else if(c == ',' || c == '.' || c == ';')
        {
            putchar('\n');
            begin_flag = true;
            i += 1;
        }
        else // if(c == ' ')
        {
            putchar(' ');
            begin_flag = true;
        }
    }
    return 0;
}