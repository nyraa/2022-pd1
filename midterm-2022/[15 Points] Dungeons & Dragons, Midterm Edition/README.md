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
