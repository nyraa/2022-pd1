## Fibonacci with Fast Doubling
<details>
<summary>Details</summary>

Level: Hard  
Tags: Expression, If/else, Function, Recursive, Pointers  
Problem ID: [IMOqVJ4IP9el](https://ckj.imslab.org/#/problems/IMOqVJ4IP9el)  
</details>

### Description
We have learned how to calculate the Fibonacci sequence with recursive technique, but there are disadvantages while calculating the sequence with the orginal definition of Fibonacci: `fib(k) = fib(k - 1) + fib(k - 2)`. Firstly, it takes long time to get the result with large `k`. Secondly, there are lots of numbers being recalculated.

To avoid such disadvantages, a technique called fast doubling was introduced to calculate Fibonacci sequence. As the name of the technique implies, there exists a recursive formula to get `fib(2k)` and `fib(2k + 1)` from `fib(k)` and `fib(k + 1)`, here are the formula:


```
fib(2k) = fib(k) * [2 * fib(k + 1) - fib(k)]
fib(2k + 1) = fib(k) * fib(k) + fib(k + 1) * fib(k + 1)

where fib(1) = fib(2) = 1
```
With the formula, the `fib(k)` could be calculated instantly as well as occupies little amount of memory. with the following loader code, please implement the function `fib_fast_doubling()`.


### Input
An integer k with in range 1 ~ 93.
### Output
The value of fib(k).

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>

typedef unsigned long long uint64_t;

void fib_fast_doubling(unsigned k, uint64_t *f2k, uint64_t *f2k1);

int main()
{
    unsigned k;
    scanf("%u", &k);

    uint64_t f2k, f2k1;
    fib_fast_doubling(k / 2, &f2k, &f2k1);

    printf("%llu", (k & 0x1) ? f2k1 : f2k);

    return 0;
}
```
</details>


### Example 1
#### Input
```
2
```
#### Output
```
1

```

### Example 2
#### Input
```
9
```
#### Output
```
34

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
