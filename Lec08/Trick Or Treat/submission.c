int maxChandy(int size)
{
    if(size > 2)
    {
        int a = maxChandy(size - 2) + array[size - 1];
        int b = maxChandy(size - 3) + array[size - 2];
        return a > b ? a : b;
    }
    else
    {
        return array[size - 1] > array[size - 2] ? array[size - 1] : array[size - 2];
    }
}