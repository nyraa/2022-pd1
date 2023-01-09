#include <stdio.h>

int main()
{
    int hh, mm, now;
    scanf("%d:%d", &hh, &mm);
    now = hh * 60 + mm;
    int n, id, dur;
    scanf("%d", &n);
    int take, min_arrive = -1;
    for(int i = 0; i < n; ++i)
    {
        scanf("%d %d:%d %d", &id, &hh, &mm, &dur);
        if(hh * 60 + mm < now) continue;
        if(min_arrive < 0 || hh * 60 + mm + dur < min_arrive)
        {
            min_arrive = hh * 60 + mm + dur;
            take = id;
        }
    }
    printf("%d", take);
    return 0;
}