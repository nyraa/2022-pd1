# midterm-2022
## [25 Points] Shopping in Japan
<details>
<summary>Details</summary>

Level: Easy  
Tags: Format I/O, Expression, If/else, Basic Types  
Problem ID: [RNP34mvqd-w3](https://ckj.imslab.org/#/problems/RNP34mvqd-w3)  
</details>

### Description
日幣好便宜啊，好想飛到日本買買買買買買（以下略）

在日本購物時，我們所使用的幣種是日幣。我們可以在銀行當中用新臺幣購買日幣，購買的價格會由當下**日幣對新臺幣的匯率**決定，其計算公式為：


```
日幣金額 * 日幣對新臺幣匯率 = 新臺幣金額
```
舉例來說：當日幣對新臺幣匯率是 0.3025 時，若我想要購買日幣 10000 元，那我就必須支付 10000 \* 0.3025 = 新臺幣 3025 元。

而在日本國內，所有商品都會被課徵消費稅。在購買物品時除了支付物品本身的價值之外，還需要再另外支付稅金給日本政府，所需要支付的稅額由當下的**消費稅率**所決定。商品在被課徵消費稅之前的價格稱作未稅價（稅前價），課徵消費稅之後的總價叫作含稅價（稅後價），其轉換公式為：


```
含稅價 = 未稅價 * (1 + 消費稅率)
```
舉例來說：當消費稅率是 5% 時，若一瓶礦泉水未稅價是日幣 100 元，那麼含稅價就是 100 \* (1 + 5%) = 日幣 105 元。

2019 年 8 月 9 號時，日幣對新臺幣的匯率達到了近五年來的高點 0.2966，當時日本國內的消費稅率還只有 8%。到今天 2022 年 11 月 3 日，日幣對新臺幣的匯率是 0.2178，但日本國內的消費稅已經變成了 10% 。**已知外國人在日本國內單筆消費未稅價若超過 5000 日元，可以免計消費稅**，請問購買一樣未稅價 `x` 日元的物品，現在買比起在 2019 年的時候買還要便宜了多少新臺幣呢？

**注意**：日幣跟新臺幣最小的單位都是 1 元，因此在計算價格時必須四捨五入。你可以使用 <math.h> 當中的 `lround()` 函式。

Oh gosh, the price of Japanese Yen is sooooo low. Gotta fly to Japan for a shopping spree!

The official currency of Japan is Japanese Yen (yen). In Taiwan, you can buy yen with New Taiwan Dollars (NTD) at banks. The price of yen is determined by the **Japanese Yen to New Taiwan Dollar exchange rate** at the time. The conversion is as follows:


```
price of yen * exchange rate = price of NTD
```
For example: when the exchange rate is 0.3025, if you want to buy JPY ¥10000, then you need to spend 10000 \* 0.3025 = NTD $3025.

When you go shopping in Japan, all goods and services are subject to consumption tax. When purchasing items, in addition to paying the value of the item itself, you need to pay the Japanese government additional taxes. The amount of taxes you need to pay is determined by the **consumption tax rate**. The relation of the price before tax and the price after tax is as follows:


```
price after tax = price before tax * (1 + tax rate)
```
For example: when the tax rate is 5%, if the price before tax of a bottled water is JPY ¥100, then the price after tax is 100 \* (1 + 5%) = JPY ¥105.

For the past 5 years, the highest Japanese Yen to New Taiwan Dollar exchange rate occured at 2019/08/09, the exchange rate at that day was 0.2966. At the time, the consumption tax rate in Japan was 8%. Recently, yen price keeps falling. The exchange rate came to 0.2178 at 2022/11/03, but the consumption tax rate has raised to 10%. **A good news is,** **for foreigners, purchases over 5000 yen (before tax) are Tax-Free. That is, if the price before tax is greater than 5000 yen for a purchase, than you don't need to pay for the taxes for this purchase.** With these information, if one want to buy a item whose price before tax in yen is `x`, and he/she is paying with NTD, how much cheaper is it if he/she buy it at 2022 rather than in 2019?

**Note:** The currency units of both yen and NTD is 1 (i.e. no such thing that is JPY ¥100.5 or NTD $39.99). Therefore, you need to round the prices to the nearest tenth when calculating. You can use the `lround()` function defined in <math.h>.


### Input
一個整數 `x`，代表商品的日幣未稅價。 1 <= x <= 10000。

One integer `x` representing the price before tax in yen, where 1 <= x <= 10000.
### Output
一個正整數，代表兩個時間點的新台幣價差。

One positive integer representing the price difference in New Taiwan dollar.

### Example 1
#### Input
```
34
```
#### Output
```
3
```

### Example 2
#### Input
```
6602
```
#### Output
```
520
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  

### Hint
<details>
<summary>Hint</summary>
在計算過程中，日幣稅前價、日幣稅後價以及台幣價格皆為整數。 In the calculation, the price before tax in yen, the price after tax in yen and the price in NTD all need to be integers.
</details>
## [20 Points] There is 1 impostor among us
<details>
<summary>Details</summary>

Level: Medium  
Tags: Expression, If/else, Switch, Loop  
Problem ID: [s7nTd_RK2JE3](https://ckj.imslab.org/#/problems/s7nTd_RK2JE3)  
</details>

### Description
助教們發現有一個非成功大學的學生混進了班上，為了要找出他助教們想到一個超棒的方法來找出冒充者是誰。成功大學的學號有9碼，前八碼表示學生的資訊，而第九碼為**校驗碼**。助教們拿到了所有學生的學號並用以下規則來檢查學號是否有效。

* 第一碼為英文字母，請使用下表將英文字母轉換為數字。
* ![table.jpg](img/table.jpg)

從右至左，將第 `k` 個數字乘 `k`。
* 將所有數字乘 `k` 的結果相加，結果必須可**被 10 整除**才為有效學號。

舉例來說，學號為 C34031328 是有效的因為


```
C34031328 = 2x9 + 3x8 + 4x7 + 0x6 + 3x5 + 1x4 + 3x3 + 2x2 + 8x1 = 110
```
請寫一個能驗證學號的程式，並輸出此學生是否為冒充者。

TAs found out that one student, who is not a NCKU student, had sneaked into our class. In order to find out who he/she is, TAs got a genius idea to find out who the impostor is. An NCKU student ID has 9 characters, where the first 8 characters are information about the student, and the 9th character is a **check digit**. TAs get all student IDs in class and use the following rules to check whether the IDs are valid.

* The first character is an English letter, you can follow the table below to convert it to a number.
* ![](img/7449e1b9b3652a01f6b3d2c0236e1bb9)

Counting from right to left, you need to multiply the `k`th number by `k`.
* Sum all the multiplied numbers. For a legal school ID, the sum must be **divisible by ten**.

For example, the ID C34031328 is legal since


```
C34031328 = 2x9 + 3x8 + 4x7 + 0x6 + 3x5 + 1x4 + 3x3 + 2x2 + 8x1 = 110
```
Please write a program that can validate school ID and output whether the student is impostor.


### Input
若干行學生的學號。學號的第一碼一定為一個英文字母（大小寫皆有可能），後面接著 8 個數字。最後一行為一個換行。

Multiple lines of student ID. The ID always starts with an alphabet (could be uppercase or lowercase), and are followed by 8 digits. The last line contains only one newline.
### Output
依據每個學號，如果學生是冒充者輸出 "學號 is the imposter!!!\n" 例如："A12345677 is the imposter!!!\n"

For every student ID output "ID is the imposter!!!\n" if he/she is an imposter. For example: "A12345677 is the imposter!!!\n".

### Example 1
#### Input
```
u35121562
c85945033
K06495498
A13096354


```
#### Output
```
A13096354 is the imposter!!!

```

### Example 2
#### Input
```
e85032016
a49134058
E43811371
k53834114
Q56543254


```
#### Output
```
e85032016 is the imposter!!!

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
## [15 Points] Dungeons & Dragons, Midterm Edition
<details>
<summary>Details</summary>

Level: Hard  
Tags: Loop, Bitwise Operations, Basic Types, Array, Function  
Problem ID: [gkvTd2Y1b5L3](https://ckj.imslab.org/#/problems/gkvTd2Y1b5L3)  
</details>

### Description
You woke up in a dark room. You can barely remembered that you were teleported after you opened the treasure box. You look around; there is nothing but a bright screen and a keyboard in the room. There are words shown on the screen: "You were trolled. To get out of here, enter the correct password. " 

Please obey the following rules to get the password: 

1. Roll sixteen ten-sided dice.
2. Map the scores of each dice to 0 through 9 and consider them as **ascii encoded characters**, that is, score 1 is mapped to '0', score 2 is mapped to '1', and so on.


```
1 2 3 -> '0' '1' '2'
```
3. Form a **4x4 column-major matrix** out of the mapped characters. The type of element in the matrix is `unsigned char`.


```
'0' '1' '2' '3' '4' ... -> '0' | '4' | ... | ...
                           ----|-----|-----|----
                           '1' | ... | ... | ...
                           ----|-----|-----|----
                           '2' | ... | ... | ...
                           ----|-----|-----|----
                           '3' | ... | ... | ...
```
4. Substitute bytes: with each byte in the matrix, look up the corresponding value from the `sbox` matrix with the **upper 4 bits of the byte as the row index** and the **lower 4 bits of the byte as the column index**, and replace the byte with the corresponding value.
5. Shift rows: with each row of the matrix, from the first row to the fourth row, **round-shift left** by **0, 1, 2, and 3 bytes**, respectively. 


```
 a | b | c | d           a | b | c | d
---|---|---|---         ---|---|---|---
 e | f | g | h           f | g | h | e
---|---|---|---   ->    ---|---|---|--- 
 . | . | . | .           . | . | . | .
---|---|---|---         ---|---|---|---
 . | . | . | .           . | . | . | .
```
6. Shift columns: with each column of the matrix, from the first column to the fourth column, **round-shift down** by **3, 2, 1, and 0 bytes**, respectively.


```
 a | e | . | .           b | g | . | .
---|---|---|---         ---|---|---|---
 b | f | . | .           c | h | . | .
---|---|---|---   ->    ---|---|---|--- 
 c | g | . | .           d | e | . | .
---|---|---|---         ---|---|---|---
 d | h | . | .           a | f | . | .
```
7. Add round key: **XOR** each byte of the matrix with the corresponding key in the `key` matrix.
8. Update round key: **XOR** each key in the key matrix with the key in the same row next to it, with the fourth key of a row xored with the first key of the next row, and the last key xored with the first key before update.


```
 k_1 | k_2 | k_3 | ...           k_1 ^ k_2 | k_2 ^ k_3 | ... |    ...
-----|-----|-----|-----         -----------|-----------|-----|-----------
 ... | ... | ... | ...              ...    |    ...    | ... |    ...
-----|-----|-----|-----   ->    -----------|-----------|-----|----------- 
 ... | ... | ... | ...              ...    |    ...    | ... |    ...
-----|-----|-----|-----         -----------|-----------|-----|-----------
 ... | ... | ... | k16              ...    |    ...    | ... | k16 ^ k_1
```
9. Repeat steps 4 through 8 for **4 extra rounds** (5 times in total).
10. The value, in **lower case hexdecimal format**, of each byte of the matrix, arranged in row major, will be the required password. Notice that you should prefix 0 to each byte if the byte contains only one digit.


```
 a | b | c | d
---|---|---|---
 e | . | . | .
---|---|---|---
 . | . | . | .
---|---|---|---
 . | . | . | .    -> hex(a)hex(b)hex(c)hex(d)hex(e) ...
```



---

你在一個黑暗的房間裡醒來。發生了什麼事？你只記得在打開寶箱後就被傳送到了這裡。你環顧四周；房間裡只有明亮的屏幕和鍵盤。屏幕上顯示：「你被騙了。要離開這裡，請輸入正確的密碼」

請依據以下規則來產生密碼：

1. 擲十六個十面骰子。
2. 將每個骰子的點數映射到 0 到 9，並將它們視為 **ascii 編碼的字元**，即點數 1 映射為 '0'，點數 2 映射為 '1'，依此類推。


```
1 2 3 -> '0' '1' '2'
```
3. 將映射的字符**以行為主 (Column major) 排入 4x4 矩陣**。矩陣中元素的型別為 `unsigned char`。


```
'0' '1' '2' '3' '4' ... -> '0' | '4' | ... | ...
                           ----|-----|-----|----
                           '1' | ... | ... | ...
                           ----|-----|-----|----
                           '2' | ... | ... | ...
                           ----|-----|-----|----
                           '3' | ... | ... | ...
```
4. 替換位元組：對矩陣中的每個位元組，以**位元組的上 4 位為列的索引**，**位元組的下 4 位為行的索引**，從 `sbox` 矩陣中查找對應的值，並替換該位元組。
5. 移動列：將矩陣的第一至第四列分別**向左位移 0、1、2、3 個位元組**，超出範圍的須移至右側。


```
 a | b | c | d           a | b | c | d
---|---|---|---         ---|---|---|---
 e | f | g | h           f | g | h | e
---|---|---|---   ->    ---|---|---|--- 
 . | . | . | .           . | . | . | .
---|---|---|---         ---|---|---|---
 . | . | . | .           . | . | . | .
```
6. 移位行：將矩陣的第一至第四行分別**向下位移 3、2、1、0 個位元組**，超出範圍的須從上方移入。


```
 a | e | . | .           b | g | . | .
---|---|---|---         ---|---|---|---
 b | f | . | .           c | h | . | .
---|---|---|---   ->    ---|---|---|--- 
 c | g | . | .           d | e | . | .
---|---|---|---         ---|---|---|---
 d | h | . | .           a | f | . | .
```
7. 加上密鑰：將矩陣的每個字節與 `key` 矩陣中對應的密鑰進行 **XOR**。
8. 更新密鑰：將 `key` 矩陣中的每個密鑰與同列中下一行的密鑰進行 **XOR**，每列的最後一個密鑰需與下一列的第一個密鑰進行 xor，並且最後一筆密鑰需與更新前的第一筆密鑰進行 xor。


```
 k_1 | k_2 | k_3 | ...           k_1 ^ k_2 | k_2 ^ k_3 | ... |    ...
-----|-----|-----|-----         -----------|-----------|-----|-----------
 ... | ... | ... | ...              ...    |    ...    | ... |    ...
-----|-----|-----|-----   ->    -----------|-----------|-----|----------- 
 ... | ... | ... | ...              ...    |    ...    | ... |    ...
-----|-----|-----|-----         -----------|-----------|-----|-----------
 ... | ... | ... | k16              ...    |    ...    | ... | k16 ^ k_1
```
9. **額外再重複**第 4 步到第 8 步 **4 次** (共計 5 次)。
10. 以列為主 (Row major) 取出各位元組的值並以**小寫的十六進制格式**輸出，則可得到所需的密碼。注意若該位元組僅佔一位時十位數需補 0。


```
 a | b | c | d
---|---|---|---
 e | . | . | .
---|---|---|---
 . | . | . | .
---|---|---|---
 . | . | . | .    -> hex(a)hex(b)hex(c)hex(d)hex(e) ...
```

### Input
A line with 16 space seperated integers, ranged in 1 to 10.



輸入為單行共 16 個整數，範圍為 1 到 10。
### Output
The password.



密碼。

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>

const unsigned char sbox[16][16] = {
        0x63, 0x7C, 0x77, 0x7B, 0xF2, 0x6B, 0x6F, 0xC5, 0x30, 0x01, 0x67, 0x2B, 0xFE, 0xD7, 0xAB, 0x76, 
        0xCA, 0x82, 0xC9, 0x7D, 0xFA, 0x59, 0x47, 0xF0, 0xAD, 0xD4, 0xA2, 0xAF, 0x9C, 0xA4, 0x72, 0xC0, 
        0xB7, 0xFD, 0x93, 0x26, 0x36, 0x3F, 0xF7, 0xCC, 0x34, 0xA5, 0xE5, 0xF1, 0x71, 0xD8, 0x31, 0x15, 
        0x04, 0xC7, 0x23, 0xC3, 0x18, 0x96, 0x05, 0x9A, 0x07, 0x12, 0x80, 0xE2, 0xEB, 0x27, 0xB2, 0x75, 
        0x09, 0x83, 0x2C, 0x1A, 0x1B, 0x6E, 0x5A, 0xA0, 0x52, 0x3B, 0xD6, 0xB3, 0x29, 0xE3, 0x2F, 0x84, 
        0x53, 0xD1, 0x00, 0xED, 0x20, 0xFC, 0xB1, 0x5B, 0x6A, 0xCB, 0xBE, 0x39, 0x4A, 0x4C, 0x58, 0xCF, 
        0xD0, 0xEF, 0xAA, 0xFB, 0x43, 0x4D, 0x33, 0x85, 0x45, 0xF9, 0x02, 0x7F, 0x50, 0x3C, 0x9F, 0xA8, 
        0x51, 0xA3, 0x40, 0x8F, 0x92, 0x9D, 0x38, 0xF5, 0xBC, 0xB6, 0xDA, 0x21, 0x10, 0xFF, 0xF3, 0xD2, 
        0xCD, 0x0C, 0x13, 0xEC, 0x5F, 0x97, 0x44, 0x17, 0xC4, 0xA7, 0x7E, 0x3D, 0x64, 0x5D, 0x19, 0x73, 
        0x60, 0x81, 0x4F, 0xDC, 0x22, 0x2A, 0x90, 0x88, 0x46, 0xEE, 0xB8, 0x14, 0xDE, 0x5E, 0x0B, 0xDB, 
        0xE0, 0x32, 0x3A, 0x0A, 0x49, 0x06, 0x24, 0x5C, 0xC2, 0xD3, 0xAC, 0x62, 0x91, 0x95, 0xE4, 0x79, 
        0xE7, 0xC8, 0x37, 0x6D, 0x8D, 0xD5, 0x4E, 0xA9, 0x6C, 0x56, 0xF4, 0xEA, 0x65, 0x7A, 0xAE, 0x08, 
        0xBA, 0x78, 0x25, 0x2E, 0x1C, 0xA6, 0xB4, 0xC6, 0xE8, 0xDD, 0x74, 0x1F, 0x4B, 0xBD, 0x8B, 0x8A, 
        0x70, 0x3E, 0xB5, 0x66, 0x48, 0x03, 0xF6, 0x0E, 0x61, 0x35, 0x57, 0xB9, 0x86, 0xC1, 0x1D, 0x9E, 
        0xE1, 0xF8, 0x98, 0x11, 0x69, 0xD9, 0x8E, 0x94, 0x9B, 0x1E, 0x87, 0xE9, 0xCE, 0x55, 0x28, 0xDF, 
        0x8C, 0xA1, 0x89, 0x0D, 0xBF, 0xE6, 0x42, 0x68, 0x41, 0x99, 0x2D, 0x0F, 0xB0, 0x54, 0xBB, 0x16, 
};

unsigned char key[4][4] = {
    0xDE, 0xAD, 0xBE, 0xAF,
    0x8B, 0xAD, 0xF0, 0x0D,
    0xCA, 0xFE, 0xBA, 0xBE,
    0x0D, 0x15, 0xEA, 0x5E,
};
```
</details>


### Example 1
#### Input
```
2 5 5 9 6 3 1 9 3 9 5 8 4 10 7 3 
```
#### Output
```
24f214760834058b4b70845b75e942b2
```

### Example 2
#### Input
```
4 3 8 1 6 8 5 1 5 6 1 1 4 1 10 10 
```
#### Output
```
9aafaf7605b8b28aa9dda65b6a19316a
```

### Example 3
#### Input
```
5 4 2 2 3 9 6 1 2 4 2 10 4 8 7 6 
```
#### Output
```
59345a760b42b2d0ca703d59ce25febc
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  

### Hint
<details>
<summary>Hint</summary>
Column major means that while operating on a two dimentional array, the elements with in the same column sould be accessed one by one, before accessing next column.
</details>
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
## [20 Points] !!!!!!orz 最強膜拜 orz!!!!!!
<details>
<summary>Details</summary>

Level: Medium  
Tags: If/else, Loop, Array, Function, Pointers  
Problem ID: [efP_ex-aLwd8](https://ckj.imslab.org/#/problems/efP_ex-aLwd8)  
</details>

### Description
某天 V 導遊路過電資星，遇到電資星的上的長老他說：「電資星存在著一種特殊的能源，這種能源叫**膜拜量**，且一群電資星人在進行膜拜的時候都會隔一段距離排成一列並擺出以下姿勢 **orz**，會根據每兩個連續的電資星人之間雜質種類乘以雜質數量產生膜拜量。」

經過 V 導遊的觀察，空間的雜質可以轉換為小寫英文單字，並且打算為電資星撰寫一個分析程式，能夠在一群電資星人膜拜的時候，找出哪一段的膜拜量最大，以及膜拜量最大的那段靠左與靠右的電資星人的位置，若最大膜拜量存在兩組人能夠產生，請輸出最先出現的（以頭的位置代表自身位置，也就是 orz 中 o 的位置）。但 V 導遊不會寫程式，因此想要你撰寫一個程式為電資星出一份力。

**測資確保一定會有兩位電資星人，換句話說，一定會有答案。**

**注意 orz 才是電資星人，ooooorrrrrzzz 或 ooooorrz 都不是。**

請實作以下函式：

1. `find_orz()`：尋找各個電資星人的位置，紀錄於 `orz_position`（各個電資星人的位置陣列）當中，並更新 `orz_num`（有幾位電資星人）。
2. `calculate_worship()`：計算各兩相鄰的電資星人之間所產生的膜拜量，並紀錄於 `worship_amount`（各兩個電資星人產生的的膜拜量陣列）當中。
3. `find_max_worship_range()`：尋找產生最大的膜拜量的區間，並更新 `max_worship`（最大的膜拜量）、`range_L`（最先發生最大膜拜量的區間，其靠左電資星人的位置）、`range_R`（最先發生最大膜拜量的區間，其靠右電資星人的位置）。若有兩個以上的區間產生了最大膜拜量，則以最先出現的為主。

Ex.

`oworzabcdorzzzwooorzw`

以上包含三位電資星人，分別在位置 3、10、18，代表會有兩段能產生膜拜量，分別是 3、10 以及 10、18。

* 3、10 之間雜質種類為 4 種，雜質數量為 4，因此膜拜量為 16。
* 10、18 之間的雜質種類為 3 種，雜質數量為 5，因此膜拜量為 15。

因此，3、10 會產生最大膜拜量，輸出 `16 3 10`

**注意：3、18 不是連續的電資星人，中間包含了 10，因此不會產生膜拜量。**



---

One day V guide passed by the planet Denshi and met the elder of Denshi who said, "There is a special energy source on Denshi, this energy source is called the amount of worship, and a group of Denshi people in worship will be lined up at some distance and the following gesture orz, will be based on the type of impurity between every two consecutive Denshi multiplied by the amount of impurity to generate worship.

After the observation of V-Guide, the spatial impurities can be converted into lowercase English words, and we plan to write an analysis program for the Dentsu to find out which section has the largest amount of worship when a group of Dentsu worship, and the position of the Dentsu to the left and right of the section with the largest amount of worship, if the largest amount of worship can be generated by two groups of people, please output the first one (the position of the head represents its own position) If there are two groups of maximum worshipers, please output the first one (the position of the head represents its own position, which is the position of o in orz). However, V-Guide does not know how to write programs, so we want you to write a program to contribute to Denshi.

**The test ensures that there will definitely be two telemetry stars, in other words, there will definitely be an answer.**

**Note that orz is the electric capitalist, oooooorrrrrrzzz or ooooorrz are not.**

Please implement the following functions:

1. `find_orz()`: Find the position of each electric capitalist, record the position in `orz_position` (the position array of each electric capitalist), and update`orz_num` (the number of electric capitalists).
2. `calculate_worship()`: Find the amount of worship generated by each of the two adjecent electric capitalists, and record the amount in `worship_amount` (the array of worship generated by each of the two electric capitalist).
3. `find_max_worship_range()`: Find the range that generates the maximum amount of worship, and update `max_worship` (the maximum amount of worship), `range_L` (the position of the left electric capitalist of the first range that generates the maximum amount of worship), and `range_R` (the position of the right electric capitalist of the first range that generates the maximum amount of worship). If there are more than two range that generate the maximum value, the first one is preferred.

Ex.

`oworzabcdorzzzwooorzw`

The above includes three electricians at index 3, 10 and 18, which means that there are two segments that can generate worship volume, 3, 10 and 10, 18 respectively.

* The number of types of the impurity between 3 and 10 is 4, and the impurity quantity is 4, so the amount of worship is 16.
* The number of types of the impurity between 10 and 18 is 3 and the impurity quantity is 5, so the amount of worship is 15.

Therefore, 3 and 10 generate the maximum amount of worship and output `16 10 18`.

**Note that 3 and 18 are not consecutive electron stars and contain 10 in between, so they do not generate the worship amount.**


### Input
第一行有一個正整數 N（1 ≦ N ≦ 10^5），代表序列 S 有幾個字元。



第二行有 N 個字元 S_1、S_2...S_N，代表序列 S 的元素。（對所有 1 ≦ i ≦ N，S_i 皆為小寫英文單字）



The first line has a positive integer N (1 ≦ N ≦ 10^5), representing the sequence S with several literals.



The second line has N characters S_1, S_2.... S_N, representing the elements of the sequence S. (For all 1 ≦ i ≦ N, S_i are lowercase English words)




### Output
輸出包含三個正整數 M L R，以空白隔開，分別代表最大膜拜量、能產生最大膜拜量的兩位電資星人的位置。

若有多組，請輸出先出現的。



The output contains three positive integers M L R, separated by a blank space, representing the maximum worship volume and the positions of the two electric stars that can generate the maximum worship volume.

If there are multiple groups, please output the one that appears first.

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>
#include <stdbool.h>
#define MAX_LEN 200000

int N;
char str[MAX_LEN];

void find_orz(int orz_position[], int *orz_num);
void calculate_worship(int worship_amount[], int range_index, int left_orz_position, int right_orz_position);
int find_max_worship_range(int value, int *range_L, int *range_R, int left_orz_position, int right_orz_position);

int main()
{
    scanf("%d", &N);
    scanf("%s", str);

    int orz_position[MAX_LEN] = {0}, worship_amount[MAX_LEN] = {0}, orz_num = 0;
    find_orz(orz_position, &orz_num);

    for (int i = 1; i < orz_num; i++)
    {
        calculate_worship(worship_amount, i - 1, orz_position[i - 1], orz_position[i]);
    }

    int max_worship, range_L, range_R;
    for (int i = 0; i < orz_num - 1; i++)
    {
        max_worship = find_max_worship_range(worship_amount[i], &range_L, &range_R, orz_position[i], orz_position[i + 1]);
    }
    printf("%d %d %d\n", max_worship, range_L, range_R);
}

```
</details>


### Example 1
#### Input
```
21
oworzabcdorzzzwooorzw
```
#### Output
```
16 3 10

```

### Example 2
#### Input
```
30
hcoorzkbjjhkuorzqucooorrrzzznn
```
#### Output
```
35 4 14

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
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
