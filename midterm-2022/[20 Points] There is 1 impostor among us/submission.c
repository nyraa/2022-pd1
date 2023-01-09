#include <stdio.h>
int alpha[] = {['A']=0, ['B']=1, ['C']=2, ['D']=3, ['E']=4, ['F']=4, ['H']=6, ['I']=7, ['J']=8, ['K']=9, ['L']=0, ['N']=2, ['P']=3, ['Q']=4, ['R']=5, ['S']=6, ['T']=7, ['U']=8, ['V']=9, ['Z']=2};
int main()
{
    while(1)
    {
        char c = getchar();
        int sum = alpha[toupper(c)] * 9;
        char std_id[9] = {c};
        for(int i = 8; i > 0; --i)
        {
            c = getchar();
            sum += (c - '0') * i;
            std_id[9-i] = c;
        }
        getchar();
        if(sum % 10)
        {
            printf("%s is the imposter!!!", std_id);
            break;
        }
    }
    return 0;
}