#include <stdio.h>
#define MAX_MAGIC_TYPES 57
#define MAX_COMBI 20

char magic_combi[127][MAX_COMBI];
int total_vol = 0;
// return lv
int combo(char magic)
{
    if(magic >= 'a' && magic <= 'e') // basic magic
    {
        total_vol += 1;
        return 1;
    }
    int max_lv = 0;
    for(int i = 0; i < MAX_COMBI; ++i)
    {
        if(magic_combi[magic][i] == 0) break;
        int cur_lv = combo(magic_combi[magic][i]);
        if(cur_lv > max_lv) max_lv = cur_lv;
    }
    return max_lv + 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        char magic_name;
        int magic_combi_length;
        scanf("\n%c(%d)", &magic_name, &magic_combi_length);
        for(int j = 0; j < magic_combi_length; ++j)
        {
            magic_combi[magic_name][j] = getchar();
        }
    }
    int target_magic_len;
    scanf("\n(%d)%s", &target_magic_len, &magic_combi[1][0]);
    int lv = combo(1);
    printf("%d %d", lv, total_vol);
    return 0;
}