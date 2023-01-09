void sort_section(int *ptr, int *qtr)
{
	if(ptr > qtr)
    {
        int* tmp = ptr;
        ptr = qtr;
        qtr = tmp;
    }
    for(int i = 0; i < qtr-ptr; ++i)
    {
        for(int j = 0; j < qtr-ptr - i; ++j)
        {
            if(ptr[j] > ptr[j+1])
            {
                int tmp = ptr[j];
                ptr[j] = ptr[j+1];
                ptr[j+1] = tmp;
            }
        }
        for(int k = 0; k <= qtr-ptr; ++k)
            printf("%d ", ptr[k]);
        putchar('\n');
    }
}
