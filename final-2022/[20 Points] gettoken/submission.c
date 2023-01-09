#include <string.h>
char *gettoken(char *str, const char *sep)
{
	static char *start;
    if(str) start = str;
    if(*start == '\0') return NULL;
    char *p = start;
    int sep_len = strlen(sep);
    while(1)
    {
        for(int i = 0; i < sep_len; ++i)
        {
            if(*p == sep[i])
            {
                *p = '\0';
                char *tmp = start;
                // consume all sep
                ++p;
                while(1)
                {
                    int j;
                    for(j = 0; j < sep_len; ++j)
                    {
                        if(*p == sep[j])
                        {
                            break;
                        }
                    }
                    if(j == sep_len) break;
                    ++p;
                }
                start = p;
                return tmp;
            }
        }
        ++p;
        if(*p == '\0') return start;
    }
}