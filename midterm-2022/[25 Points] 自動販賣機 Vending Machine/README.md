## [25 Points] 自動販賣機 Vending Machine
<details>
<summary>Details</summary>

Level: Easy  
Tags: Format I/O, Expression, If/else, Loop, Basic Types, Array  
Problem ID: [a_2etI2uJJ-u](https://ckj.imslab.org/#/problems/a_2etI2uJJ-u)  
</details>

### Description

```
===========================================
++++++++Cheng Kung Vending Machine+++++++++
===========================================
$10 ->  1  2  3  4  5  6  7  8  9 10 <- $10
$20 -> 11 12 13 14 15 16 17 18 19 20 <- $20
$30 -> 21 22 23 24 25 26 27 28 29 30 <- $30
===========================================
---------------enter here-->>---[No.%%%]---
--------------press button->>-[1|2|3|4|5]--
-------------_________--------[6|7|8|9|0]--
-take it-->>|         |------insert->>-||--
-from here--|_{|tea|]_|------refund->>-[]--
===========================================
```
今天成功工廠生產了一台全新的投幣式自動販賣機，但自動販賣機需要程式才能運行。成功工廠的老闆知道你是一位優秀工程師，所以請你完成這台自動販賣機的程式，這樣才能把販賣機賣出去，成功發大財。

* 老闆告訴你有關的販賣機的設定條件如下：
1. 有 **30 個編號**，每個編號的庫存在**初始狀態時都是 10 個**
2. **第一排**：鋁箔包飲料，編號是 **1~10**，售價皆為 **10 元**
3. **第二排**：鐵鋁罐飲料，編號是 **11~20**，售價皆為 **20 元**
4. **第三排**：寶特瓶飲料，編號是 **21~30**，售價皆為 **30 元**
5. 如果目前顧客購買時，該編號的**數量不足，須將剩下的賣出，但不可以超賣**（意即當飲料庫存數量最低為 0不可為負，而為 0 時也就無法再賣出了，當然也就無法再賺錢）

* 販賣機的服務流程如下：
1. 得知目前顧客數量
2. 每位顧客皆輸入一種想要的飲料編號及數量
3. 服務完所有顧客後，印出目前所有項目的庫存數量（每排需分別印出）
4. 計算總共賺了多少錢

**（列印格式請參考範例）**

注意：沒有奇怪的例外情況，像是吃錢或是突然給出更多的飲料。

Today, Cheng Kung Factory has produced a new vending machine with coins, but the vending machine needs a program to run. The boss of Cheng Kung Factory knows that you are an excellent engineer, so he asks you to finish the program of this vending machine so that he can sell it and succeed in making a big fortune.

* The boss tells you that the vending machine is set up with the following conditions.
1. There are **30 numbers (items)**, and **each number is 10 when the stock is in its initial state**
2. **First row**: Tetra Pak (retort pouch), **numbered 1-10, all priced at $10**
3. **Second row**: Tin and aluminum cans, **numbered 11-20, all priced at $20**
4. **Third row**: PET bottles, **numbered 21-30, all priced at $30**
5. If there is **not enough quantity of that number** when the current customer buying, **you have to sell the rest, but you can't oversell** ( i.e. when the minimum quantity of beverage stock is 0, it can't be negative, and when it is 0, you can't sell it again, so you can't earn anymore)

* The service processes of the vending machine are as follows.
1. Know the current number of customers
2. Each customer enters the number and quantity of the desired beverage
3. After serving all customers, print out the number of items currently in stock (each row needs to be printed out separately)
4. Calculate the total amount of money earned

**(Please refer to the examples for printing format)**

Note: There are no strange exceptions, such as stealing money or suddenly giving out more drinks.


### Input
第一列為一個整數 n，範圍 0~100，代表顧客的數量。
第二列開始為每個顧客想要的飲料編號與數量，變數間以一個空白隔開，共有 n 行。編號的範圍為 1~30，數量的範圍為 0~10。

The first row is an integer n, ranging from 0 to 100, representing the number of customers.
The second row starts with the number and quantity of drinks each customer wants, separated by a blank space, with n rows. The number range is from 1 to 30 and the quantity range is from 0 to 10.

### Output
第一至三列分別印出販賣機第一排、第二排、第三排中，每個編號的剩餘數量（各編號的剩餘數量間以一個空白隔開）。
第四列計算所得 (Earned: $) 為多少（冒號與錢字號間有一個空白；錢字號後不須空白，直接接數字）。
每列間以一個換行隔開。

Columns 1st to 3rd print the remaining quantity of each number in the 1st, 2nd and 3rd rows of the vending machine (separated by a space between the remaining quantity of each number).
Column 4th calculates the amount earned (Earned: $) (there is a space between the colon and the dollar sign; the dollar sign is not followed by a space, but directly by the number). 
Each column is separated by a newline.

### Example 1
#### Input
```
3
1 5
15 3
30 2

```
#### Output
```
5 10 10 10 10 10 10 10 10 10 
10 10 10 10 7 10 10 10 10 10
10 10 10 10 10 10 10 10 10 8
Earned: $170
```

### Example 2
#### Input
```
0
```
#### Output
```
10 10 10 10 10 10 10 10 10 10 
10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10
Earned: $0
```

### Example 3
#### Input
```
2
1 5
1 10

```
#### Output
```
0 10 10 10 10 10 10 10 10 10 
10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10
Earned: $100
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  

### Hint
<details>
<summary>Hint</summary>
如果你使用陣列，需注意飲料編號的起始值是 1，陣列的起始值是 0。 If you are using an array, note that the starting value of the drink number is 1 and the starting value of the array is 0.
</details>
