#include <stdio.h>
#define MAX_PAPERS 101
int paper_ref_list[MAX_PAPERS][MAX_PAPERS];

void refering(int paper_id, int* paper_ref_path)
{
    int i = 0;
    paper_ref_path[paper_id] = 1;
    while(1)
    {
        int ref = paper_ref_list[paper_id][i];
        if(ref == 0) break;
        // printf("paper %d is refing %d at index %d\n", paper_id, ref, i);
        refering(ref, paper_ref_path);
        ++i;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    while(1)
    {
        int id;
        scanf("%d", &id);
        if(id == 0) break;
        int i = 0;
        do
        {
            int ref;
            scanf("%d", &ref);
            paper_ref_list[id][i++] = ref;
        } while (getchar() != '\n');
        
    }
    for(int i = 1; i <= n; ++i)
    {
        int paper_ref_path[MAX_PAPERS] = {0};
        refering(i, paper_ref_path);
        printf("%d ->", i);
        for(int j = 1; j < MAX_PAPERS; ++j)
        {
            if(paper_ref_path[j] == 1) printf(" %d", j);
        }
        printf("\n");
    }
    return 0;
}