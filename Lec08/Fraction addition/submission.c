#include <stdint.h>
void fraction_adder(int a_numerator, int a_denominator, int b_numerator, int b_denominator, int *c_numerator_ptr, int *c_denominator_ptr)
{
    uint64_t numerator = a_numerator * b_denominator + b_numerator * a_denominator;
    uint64_t denominator = a_denominator * b_denominator;
    uint64_t tmp1 = numerator, tmp2 = denominator;
    while(tmp1 != tmp2)
    {
        if(tmp1 > tmp2) tmp1 -= tmp2;
        else if(tmp2 > tmp1) tmp2 -= tmp1;
    }
    *c_numerator_ptr = numerator / tmp1;
    *c_denominator_ptr = denominator / tmp1;
}