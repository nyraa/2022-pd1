void fib_fast_doubling(unsigned k, uint64_t *f2k, uint64_t *f2k1)
{
    if(k == 1)
    {
        *f2k = 1;
        *f2k1 = 2;
        return;
    }
    if(k == 0)
    {
        *f2k = *f2k1 = 1;
        return;
    }
    uint64_t fk, fk1;
    if(k & 1)
    {
        fib_fast_doubling(k / 2, f2k, f2k1);
        fk = *f2k1;
        fib_fast_doubling((k + 1) / 2, f2k, f2k1);
        fk1 = *f2k;
    }
    else
    {
        fib_fast_doubling(k / 2, f2k, f2k1);
        fk = *f2k;
        fk1 = *f2k1;
    }
    *f2k = fk * (2 * fk1 - fk);
    *f2k1 = fk * fk + fk1 * fk1;
}