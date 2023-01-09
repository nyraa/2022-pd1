## [15 Points] From Commonplace to World's Strongest
<details>
<summary>Details</summary>

Level: Hard  
Tags: If/else, Basic Types, Array, Recursive  
Problem ID: [dq8A46B9Qm88](https://ckj.imslab.org/#/problems/dq8A46B9Qm88)  
</details>

### Description
Hajime and his classmates were teleported to an unknown world by the wizards to help the people of the world defend themselves from threats from other races. There is magic in the world, and people around the world have different levels of magic skills. People with high magic skills are able to organize powerful magic in a relatively simple magic circle. Unfortunately, Hajime has a very low level of magic skill, which force him to build an extremly complex magic circle even for a simple magic.

There are five basic magic powers: `a`, `b`, `c`, `d`, and `e`. The basic magic could be combined together to build more advanced magic. The built magic could be combined once again for an even more advanced one.

The complexity of a magic could be determined by its level. The level of a magic is defined by increasing the maximum level of its source magic by 1. And the five basic magic powers have a level of 1. For example, suppose we have the following magic table:


```
f(2)ab
g(4)fcde
```
Each line indicates the target magic, the number of its source magic, and the source magic. The above magic table indicates that magic `f` is built by magic `a` and `b`, and magic `g` is built by magic `f`, `c`, `d` and `e`. Since the magic `f` is built from basic magic power, which has level of 1, the magic `f` has level of 2. And since the source of magic `g` contains `f` which has level of 2, the level of magic `g` is 3.

Now, given a magic table and a target magic, please help Hajime calculate the level of the magic as well as how much basic magic power should be used to build the target magic.



---

Hajime 和他的同學們被魔法師傳送到一個未知的世界，以保護該世界的人類免受其他種族的威脅。那個未知的世界有魔法，該世界的人都有不同級別的魔法技能。魔法技能高的人能夠在一個相對簡單的魔法陣中組織強大的魔法。可惜 Hajime 的魔法技能很低，即使是簡單的魔法，他也不得不構建一個極其複雜的魔法陣。

那個世界有五種基本的魔法元素：`a`、`b`、`c`、`d` 和 `e`。這些基礎魔法可以組合在一起，打造更高級的魔法。而這些組合出來的魔法可以再次組合來構建更高級的魔法。

一個魔法的複雜程度可以根據它的等級來決定。魔法的等級是其組成魔法的最大等級 + 1。並且五種基本魔法的等級為1。假設我們有如下的魔法表：


```
f(2)ab
g(4)fcde
```
每一行表示目標魔法、組成魔法數量和組成魔法。上面的魔法表代表魔法 `f` 是由魔法 `a` 和 `b` 構成的，而魔法 `g` 是由魔法 `f`、`c`、`d` 和 `e` 構成的。由於魔法 `f` 是由等級為 1 的基礎魔法構成的，因此魔法 `f` 的等級為 2。而由於魔法 `g` 的組成魔法包含等級為 2 的 `f`，因此魔法 `g` 的等級是 3。

現在，給定一張魔法表和一個目標魔法，請幫助 Hajime 計算該目標魔法的等級以及構建目標魔法應該使用多少基本魔力。

![](https://i.pinimg.com/originals/90/ac/55/90ac5552708b77662ecba016ead60e4d.gif)




### Input
The first line contains an integer N, which indicates the number of entries in the magic table.
The following N lines are in the following format: M(n)m1m2m3...mn, which indicates the magic M is combined by n source magics, and the rest is the list of source magics.
The last line is in the format: (n)m1m2m3...mn, which indicates the target magic that is combined by n source magic: m1, m2 ... mn, accordingly.

Notice: The magic of the input magic table will not guarantee that the magic at the front will not use the magic at the back of the table.

1 <= N <= 57
The magic M may be an alphabet, either upper or lower case, or a digit. (a-z, A-Z, 0-9)
The number n is in the range of 1 <= n <= 20.

第一行包含一個整數 N，表示魔術表中的共有幾種魔法。
接下來N行的格式如下：M(n)m1m2m3...mn，表示魔法 M 由 n 個魔法組合而成，其餘為組成魔法列表。
最後一行的格式為：(n)m1m2m3...mn，表示目標魔法是由 n 個魔法：m1，m2...mn 組合而成的。

注意：輸入魔法表中的魔法不保證前面的魔法不會使用後面的魔法。

1 <= N <= 57
M 有可能是一個大寫或小寫的字母，也可以是一個數字。 (a-z, A-Z, 0-9)
數字 n 的範圍為1 <= n <= 20。
### Output
Two integers within the same line indicate the level of the target magic and the number of basic magic powers that should be used.

同一行中的兩個整數表示目標魔法的等級和應該使用的基本魔力的數量。

### Example 1
#### Input
```
3
f(1)d
g(4)cdcd
h(4)dedc
(6)bcdfgh
```
#### Output
```
3 12
```

### Example 2
#### Input
```
5
f(1)d
j(1)g
g(2)dc
h(3)aaa
k(5)aahcg
(8)acdefhjk
```
#### Output
```
4 18
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
