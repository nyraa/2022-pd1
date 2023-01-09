#include<stdio.h>

int main ()
{
    int std_n, n, d, new_std_len;
    char name[17];
    char new_std[17];
    scanf("%d", &std_n);
    scanf("%d %s", &new_std_len, new_std);
    for(int k = 0; k < new_std_len; ++k) new_std[k] = tolower(new_std[k]);
    int new_std_id = 1;
    for(int i = 0; i < std_n; ++i)
    {
        scanf("%d %s", &d, name);
        for(int k = 0; k < d; ++k) name[k] = tolower(name[k]);
        for(int j = 0; j < new_std_len; ++j)
        {
            if(name[j] == '\0')
            {
                ++new_std_id;
                break;
            }
            else if(new_std[j] > name[j])
            {
                ++new_std_id;
                break;
            }
            else if(new_std[j] < name[j]) break;
        }
    }
    printf("%d", new_std_id);
    return 0;
}
