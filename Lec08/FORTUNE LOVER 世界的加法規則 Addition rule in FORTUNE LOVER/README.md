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
