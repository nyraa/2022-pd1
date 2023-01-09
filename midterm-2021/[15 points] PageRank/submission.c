#include <stdio.h>
#define MAX_PAGES 101
double page_score[MAX_PAGES], page_votes[MAX_PAGES]; // 1 ~ N
int page_links[MAX_PAGES][MAX_PAGES]; // 0 ~ N-1, 1 ~ N
int len_page_links[MAX_PAGES];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        int v, count = 0;
        while(scanf("%d", &v), v != -1)
        {
            page_links[i][count] = v;
            ++count;
        }
        len_page_links[i] = count;
        page_score[i] = 1.0/n;
    }
    while(1)
    {
        _Bool conti_flag = 0;
        for(int i = 0; i < n; ++i)
        {
            int page_lnk_len = len_page_links[i];
            double vote = page_score[i] / page_lnk_len;
            for(int k = 0; k < page_lnk_len; ++k)
            {
                page_votes[page_links[i][k]] += vote;
            }
        }
        for(int i = 0; i < n; ++i)
        {
            if(page_score[i] * 100 - page_votes[i] * 100 > 0.000001 || page_votes[i] * 100 - page_score[i] * 100 > 0.000001) conti_flag = 1;
            page_score[i] = page_votes[i];
            page_votes[i] = 0;
        }
        if(!conti_flag) break;
    }
    for(int i = 0; i < n; ++i)
    {
        printf("%.2lf%% ", page_score[i] * 100);
    }
    return 0;
}