# Lec08
## FORTUNE LOVER 世界的加法規則 Addition rule in FORTUNE LOVER
<details>
<summary>Details</summary>

Level: Hard  
Tags: Expression, Basic Types, Pointers, Bitwise Operations  
Problem ID: [XrHfTlNNPo69](https://ckj.imslab.org/#/problems/XrHfTlNNPo69)  
</details>

### Description
卡塔麗娜今年就要上小學囉~ 在小學的第一節數學課，老師要教大家怎麼做整數加法！

在 FORTUNE LOVER 裡，整數加法的規則是這樣的：

1. 首先，以 **[IEEE 754 單精度浮點數 (](https://zh.wikipedia.org/zh-tw/IEEE_754)**`float`**[) 的格式](https://zh.wikipedia.org/zh-tw/IEEE_754)**來表達加數和被加數。


	* 例如： 1 並不是 `00000000 00000000 00000000 00000001`，而是 `00111111 10000000 00000000 00000000`。
	* 同樣的， 2 也不是 `00000000 00000000 00000000 00000010`，而是 `01000000 00000000 00000000 00000000`。
2. 將兩個 32-bits 的二進位數字作加法，得到一個 32-bits 的二進位數字
3. 將該二進位數字當作**[二補數](https://zh.wikipedia.org/zh-tw/%E4%BA%8C%E8%A3%9C%E6%95%B8)的有號整數 (**`int`**)** 解讀。


	* 如果該二進位數字是 `00000000 00000000 00000000 00001111`，那你就要把他當成 15
	* 如果該二進位數字是 `11111111 11111111 11111111 11110000`，那你就要把他當成 -16

舉例來說，如果我們想進行 1 + 2 的加法：

1. 寫出 1 和 2 以 IEEE 754 表示法表示的 bit pattern：


	* 1 = `00111111 10000000 00000000 00000000`
	* 2 = `01000000 00000000 00000000 00000000`
2. 將這兩個 32-bits 的二進位數字作加法，得到一個 32-bits 的二進位數字


```
   00111111 10000000 00000000 00000000
+) 01000000 00000000 00000000 00000000
---------------------------------------
   01111111 10000000 00000000 00000000
```
3. 將該二進位數字當作有號整數解讀


	* `01111111 10000000 00000000 00000000` = 2139095040

所以， 1 + 2 = 2139095040。

你是卡塔麗娜的數學老師，為了讓卡塔麗娜更理解這個複雜的加法是怎麼進行的，請你在進行每一題範例講解時都把這個相加的過程清楚的寫出來喔~

![](https://c.tenor.com/ZqSIoxyMrIIAAAAC/otome-game-bakarina.gif)



Catarina will become a primary school student this year! In the first math class, Catarina will learn how to perform an integer addition :D

In FORTUNE LOVER, the rule of interger addition is as follow:

1. First, you use the **[IEEE 754 floating point number representation](https://en.wikipedia.org/wiki/IEEE_754) (**`float`**)** to represent the augend and addend.


	* For example, 1 is not `00000000 00000000 00000000 00000001`, it is `00111111 10000000 00000000 00000000` instead.
	* Similarly, 2 is not `00000000 00000000 00000000 00000010`, it is `01000000 00000000 00000000 00000000` instead.
2. You sum up these 2 32-bits binary number, and yield a 32-bits binary number as the result.
3. You interpret the result as an **[2's complement signed integer](https://en.wikipedia.org/wiki/Two%27s_complement) (**`int`**)**.


	* For example, if the result is `00000000 00000000 00000000 00001111`, then you interpret this bit pattern as 15.
	* Similarly, if the result is `11111111 11111111 11111111 11110000`, then you interpret this bit pattern as -16.

Let's check out an example. If we want to calculate 1 + 2:

1. Write down the IEEE 754 representation of 1 and 2:


	* 1 = `00111111 10000000 00000000 00000000`
	* 2 = `01000000 00000000 00000000 00000000`
2. Sum up these 32-bits binary number and yield the result.


```
   00111111 10000000 00000000 00000000
+) 01000000 00000000 00000000 00000000
---------------------------------------
   01111111 10000000 00000000 00000000
```
3. Interpret the result as an signed integer:


	* `01111111 10000000 00000000 00000000` = 2139095040

Therefore, 1 + 2 = 2139095040.

You are Catarina's math teacher. In order to make this complicated addition rule easier to understand for Catarina, please illustrate the complete addition process while you explain the sample questions.


### Input
Two integer a, b. The range of a, b is -999,999 <= a, b <= 999,999.
### Output
The process of addition and its result. Please refer to examples.

### Example 1
#### Input
```
1 2
```
#### Output
```
   00111111 10000000 00000000 00000000
+) 01000000 00000000 00000000 00000000
---------------------------------------
   01111111 10000000 00000000 00000000
1 + 2 = 2139095040
```

### Example 2
#### Input
```
5 -5
```
#### Output
```
   01000000 10100000 00000000 00000000
+) 11000000 10100000 00000000 00000000
---------------------------------------
   00000001 01000000 00000000 00000000
5 + -5 = 20971520
```

### Example 3
#### Input
```
-4 38
```
#### Output
```
   11000000 10000000 00000000 00000000
+) 01000010 00011000 00000000 00000000
---------------------------------------
   00000010 10011000 00000000 00000000
-4 + 38 = 43515904
```

### Example 4
#### Input
```
-15942 -18168
```
#### Output
```
   11000110 01111001 00011000 00000000
+) 11000110 10001101 11110000 00000000
---------------------------------------
   10001101 00000111 00001000 00000000
-15942 + -18168 = -1928919040
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  

### Hint
<details>
<summary>Hint</summary>
位元操作只能作用在整數型別上面。 You can perform bitwise operation on integer type only.
</details>
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
## Trick Or Treat
<details>
<summary>Details</summary>

Level: Medium  
Tags: Recursive  
Problem ID: [_NfiMSsm_48H](https://ckj.imslab.org/#/problems/_NfiMSsm_48H)  
</details>

### Description
萬聖節到了，麥克想要去社區中一條街上要糖果，但這條街的上的家庭們有一個奇怪的規定，就是當你連續要了兩家的糖果，這條街的人會覺得你很貪心，所以他們會收回你全部的糖果。為了得到最多的糖果，麥克想要寫一個程式幫他計算可以得到的最多的糖果數量。

他跟其他去過街上要糖果的同伴口中得知街上每一個家庭會給的糖果數量，並把他存在全域變數`array` 陣列。請完成函式 `maxChandy` 讓麥可去計算出可以拿到最多的糖果數量。



---

Halloween is coming, Mike is looking forward to ask for candy on the street, but there is a strange rule formed by the families on this street: when you ask for candies from two consecutive house, the people in this street will think you are greedy, thus, they'll take all of your candies back. In order to get the most candies, Mike wants to write a program to help him calculate the maximum number of candies he can get.

He asked other friends who had been on the street to ask for candy, and learned the amount of candy that every family on the street would give, and stored it in the global variable `array`. Please complete the function `maxChandy` for Mike to calculate the maximum number of candies he can get.


### Input
array 陣列的長度 size。

1 <= size <= 40

1 <= array[i]  <= 8
### Output
請回傳最大可以得到的糖果數量。

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include<stdio.h>
#include<stdlib.h>
int array[1500];
int maxChandy( int size) ;
int main() {
    int size = 0;
    scanf("%d", &size);
    for(int i = 0 ; i < size; ++i) {
        scanf("%d", &array[i]);
    }
    printf("%d\n", maxChandy( size));
    return 0;
}
```
</details>


### Example 1
#### Input
```
6
6 3 8 8 2 8

```
#### Output
```
22

```

### Example 2
#### Input
```
9
2 8 2 8 2 4 6 6 7

```
#### Output
```
29

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
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
