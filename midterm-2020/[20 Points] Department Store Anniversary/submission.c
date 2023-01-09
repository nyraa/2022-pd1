#include <stdio.h>
#define MAX_LEN 10000

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[MAX_LEN], b[MAX_LEN];
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < m; ++i)
    {
        scanf("%d", &b[i]);
    }
    int n_index = 0, m_index = 0;
    for(int i = 0; i < n + m; ++i)
    {
        if(n_index < n && m_index < m)
        {
            if(a[n_index] < b[m_index]) printf("%d ", a[n_index++]);
            else printf("%d ", b[m_index++]);
        }
        else if(n_index < n) printf("%d ", a[n_index++]);
        else printf("%d ", b[m_index++]);
    }
    return 0;
}