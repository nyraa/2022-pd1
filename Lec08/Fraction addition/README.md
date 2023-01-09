## Fraction addition
<details>
<summary>Details</summary>

Level: Easy  
Tags: Pointers, Expression  
Problem ID: [lorUhroj7rbo](https://ckj.imslab.org/#/problems/lorUhroj7rbo)  
</details>

### Description
安妮亞是伊甸學園的一名學生，雖然她有超能力但她的數學很糟（尤其是分數的加法）。最近段考快到了，為了能拿到榮譽星星她希望自己能在數學段考中表現突出。你能寫一個程式幫助她能正確且優雅地得到分數加法的答案嗎？

請完成 `fraction_adder` 函式，計算 `a_numerator/a_denominator` + `b_numerator/b_denominator` 並將結果存放在變數 `c_numerator` 與 `c_denominator` 中。其中 `c_numerator_ptr`和 `c_denominator_ptr` 為指標分別指向 main 函式中的兩個變數 `c_numerator` 與 `c_denominator` 的位址。



---

Anya is student of Eden Academy, although she has super powers but she is very bad at math(especially fraction addition). In order to get a Stella star she hope that she can do well in the upcoming math exam. Can you write a program to help her elegantly calculate fraction addition?

Please finish `fraction_adder` function, calculate `a_numerator/a_denominator` + `b_numerator/b_denominator` and store the result in variable `c_numerator` and `c_denominator`.The `c_numerator_ptr` and `c_denominator_ptr` is a pointer that points to the address of `c_numerator` and `c_denominator` in the main function.


### Input
4 個數字，第一個數與第二個數分別代表 a 的分子與 a 的分母，第三個數與第四個數分別代表 b 的分子與 b 的分母。四個數字的範圍皆為 1~1000。
4 numbers, the first and second number is the numerator and denominator for a, the third and fourth number is the numerator and denominator for b. The range of all four number is 1~1000.
### Output
以 分子/分母 格式輸出最簡分數 a + b
Output the irreducible fraction of a+b in the format of numerator/denominator

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>
void fraction_adder(int a_numerator, int a_denominator, int b_numerator,
              int b_denominator, int *c_numerator_ptr, int *c_denominator_ptr);
int main() {
  int a_numerator, a_denominator, b_numerator, b_denominator;
  scanf("%d%d%d%d", &a_numerator, &a_denominator, &b_numerator, &b_denominator);
  int c_numerator, c_denominator;
  fraction_adder(a_numerator, a_denominator, b_numerator, b_denominator, &c_numerator,
           &c_denominator);
  printf("%d/%d\n", c_numerator, c_denominator);
}
```
</details>


### Example 1
#### Input
```
2 4 5 6

```
#### Output
```
4/3

```

### Example 2
#### Input
```
3 4 77 20
```
#### Output
```
23/5

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
