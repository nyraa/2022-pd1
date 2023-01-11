unsigned long construct(unsigned char parts[16])
{
    return *(unsigned long*)parts^*(unsigned long*)(parts+8);
}