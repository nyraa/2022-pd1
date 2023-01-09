# Lec07
## Minecraft 全物品倉庫
<details>
<summary>Details</summary>

Level: Medium  
Tags: Function, Recursive  
Problem ID: [NXjHzJg4d7tf](https://ckj.imslab.org/#/problems/NXjHzJg4d7tf)  
</details>

### Description
眾所周知，Minecraft 是個很多玩法的遊戲。其中合成是個很有趣的玩法，某天 Eric 帥哥想要在他的生存世界裡面做一個全物品倉庫，但要做這個倉庫之前需要準備每個物品各一個，然而，有些物品是需要透過合成產生，請撰寫一個程式告訴 Eric 他需要多少原始物品才能得到每個物品各一個。（原始物品代表這個物品不能透過合成取得，但你還是需要準備一個）

As we all know, Minecraft is a game of many ways to play. One day Eric wants to make a full item warehouse in his survival world, but he needs to prepare one of each item before he can make this warehouse, however, each item needs to be prepare once. (The original item means that the item cannot be obtained through craft, but you still need to prepare one)

由於 Minecraft 物品實在太多了，這邊測資會提供一個自訂義的合成表，且物品以一個 1~N （1 ≦ N ≦ 20）的正整數表示。

其中 1~N 各個物品可被 M 種物品合成出來。

測試資料確保不會有需要互相合成的情況，意即，一個物品的合成表不會出現自己。

Since Minecraft items are really too much, the testcase provide a custom craft recipe, and items to a 1 ~ N (1 ≦ N ≦ 20) positive integer representation.

Each of the items 1~N can be crafted by M items.

The test data ensures that there is no need to craft each other, i.e., an item's craft recipe does not appear by itself.

假設 N = 3 ，我今天有以下合成表（可觀看 Input Format 了解更詳細內容）

Assuming N = 3, I have the following craft recipe today (see Input Format for more details)


```
1 可被 2、3 合成
2 為原始材料
3 可被 2 合成
```
我若要準備 1~3 各一個，會需要準備 4 個原始材料

If I want to prepare 1~3 each, I will need to prepare 4 original item.


```
1 需要準備 2 個 2
2 需要準備 1 個 2
3 需要準備 1 個 2
```

### Input
第一行有一個正整數 N（1 ≦ N ≦ 20），代表當前有 N 個物品，分別為 1~N。

有 N 行，分別對應 1~N 各個物品的合成表，每個物品包含了以下兩行。

 - 第一行有一個正整數 M（0 ≦ M < N），代表該物品需要被幾個物品合成。（Ｍ = 0 代表該物品是原始物品，且沒有第二行）

 - 第二行有 M 個正整數 S_1、S_2...S_M，代表該物品須被那些物品合成。（對所有 1 ≦ i ≦ M，1 ≦ S_i ≦ N，且 S_i 不重複）



The first row has a positive integer N (1 ≦ N ≦ 20), representing the current N items, 1~N respectively.

There are N rows, corresponding to the craft recipe of each item from 1 to N. Each item contains the following two rows.

 - The first row has a positive integer M (0 ≦ M < N), representing the item needs to be crafted by several items. (M = 0 means that the item is the original item and there is no second row)

 - The second row has M positive integers S_1, S_2.... S_M, which means the item should be crafted by those items. (For all 1 ≦ i ≦ M, 1 ≦ S_i ≦ N, and S_i is not duplicated)
### Output
輸出準備 1~N 各一個，需要準備多少原始物品。

### Example 1
#### Input
```
3
2
2 3
0
1
2
```
#### Output
```
4

```

### Example 2
#### Input
```
4
3
2 3 4
2
3 4
1
4
0
```
#### Output
```
8

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
## 等差數列和 Sum of Arithmetic Progression
<details>
<summary>Details</summary>

Level: Easy  
Tags: Recursive  
Problem ID: [Y3I7uDb2RGNz](https://ckj.imslab.org/#/problems/Y3I7uDb2RGNz)  
</details>

### Description
等差數列 (Arithmetic Progression, AP) 中的數，稱為項 (term)。**第一個項，稱為首項，以 a\_1 表示**；**第 n 個項，稱為末項，以 a\_n 表示**；**公差 (common difference)，以 d 表示**。

一個等差數列的首 n 項之和，稱為**等差數列和**（sum of arithmetic progression, sum of arithmetic sequence）或算術級數（arithmetic series），**記作 S\_n**。

舉例如下，有一個 1 為首項、5 為末項、公差為 1 的等差數列，其和為 15。

![p1.jpg](img/p1.jpg)



而計算時可以拆解成以下的想法：

![p2.jpg](img/p2.jpg)



請**使用遞迴的概念來完成剩下的一個函式 sum**。已知**任意輸入的首項、末項、公差，將首項傳入 sum 函式後，計算出其等差數列和**。

**注意：首項 a\_1、末項 a\_n、公差 d，這三個是全域變數 (Global variable)。**全域變數是指直接宣告在（主）函式之外的變數，因此這三個變數可以同時在 main 函式和 sum 函式中使用。

The numbers in the Arithmetic Progression (AP) are called terms. **The first term, called the first term, is denoted by a\_1**; **the nth term, called the last term, is denoted by a\_n**; and **the common difference is denoted by d**.

The sum of the members of a finite arithmetic progression is called an **arithmetic series (sum of arithmetic progression, sum of arithmetic sequence)**, and **is denoted by S\_n**.

For example, there is an equal series with 1 as the first term, 5 as the last term, and a tolerance of 1, and its sum is 15.

![p1.jpg](img/p1.jpg)



And the calculation can be broken down into the following ideas.

![p2.jpg](img/p2.jpg)



**Use the concept of recursion to complete the remaining function sum**, where the **first term, last term, and common difference of any input are known**, and the **first term is passed into the sum function to calculate the sum of arithmetic progression**.

**Note: The first term a1, the last term an, and the common difference d are global variables.** Global variables are those variables declared directly outside the (main) function, so these three variables can be used in both the main function and the sum function.


### Input
三個全域變數，皆為整數。分別為首項 a_1、末項 a_n、公差 d，三個變數間各以一個空白隔開。

首項與尾項的範圍為 -10000~10000，公差的範圍0~10000，所有皆為合法的輸入。



Three global variables, all integers. The first term a_1, the last term a_n, and the tolerance d are separated by a space between each of the three variables.

The range of first and last items is -10000~10000, and the range of common difference is 0~10000, all are legal inputs.
### Output
等差數列和 (sum of arithmetic progression, sum of arithmetic sequence)，又稱算術級數 (arithmetic series)。



Arithmetic series (sum of arithmetic progression, sum of arithmetic sequence).

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>

int a_1, a_n, d;

int sum(int a_i);

int main()
{
    scanf("%d %d %d", &a_1, &a_n, &d);
    printf("%d", sum(a_1));
    return 0;
}
```
</details>


### Example 1
#### Input
```
1 5 1
```
#### Output
```
15
```

### Example 2
#### Input
```
1 10 1
```
#### Output
```
55
```

### Example 3
#### Input
```
-100 2000 5
```
#### Output
```
399950
```

### Example 4
#### Input
```
-7569 0 87
```
#### Output
```
-333036
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
## Rock-Paper-Scissors Tournament
<details>
<summary>Details</summary>

Level: Hard  
Tags: If/else, Array, Function, Recursive  
Problem ID: [q8ynRjPTnUXB](https://ckj.imslab.org/#/problems/q8ynRjPTnUXB)  
</details>

### Description
It is time for the PD1 rock-paper-scissors Tournament!

In this game, each player will be assigned an id **starting from 1**.  
At the begining, players should select one shape from the rock, paper, and scissors, which are used to compete with other players **in the rest of tournament**. Rock wins against scissors; paper wins against rock; and scissors wins against paper.  
The tournament is single-elimination, in which the player who wins the current round goes through next round.  
The players may pick the same shape in a competition, in which case the winner is decided by their id. **In each round**, the tournament host will provide an instruction, one of `b` and `s`, which indicates the player with the **bigger id** or the **smaller id** wins respectively.

Here is the 4-players game example:

**player input**  
`r` : rock  
`p` : paper  
`s` : scissors

**judge input**  
`s` : smaller  
`b` : bigger

player: `r` `r` `s` `r`  
judge: `s` `b`

The player 4 wins the game!  
![pd1.jpeg](img/pd1.jpeg)



Please write a program to determine who is the victor.


### Input
The first number N is power of two with range 1 ~ 1024 indicates the number of players.

The second line with N characters indicates the shape picked by the players.

The third line with log2(N) characters indicates the card picked by the host.
### Output
A number indicates the victor’s player id.

### Example 1
#### Input
```
4
rrsr
sb

```
#### Output
```
4

```

### Example 2
#### Input
```
4
psps
ss

```
#### Output
```
2

```

### Example 3
#### Input
```
8
rppssspr
bbs

```
#### Output
```
4

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
