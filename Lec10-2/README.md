# Lec10-2
## t9 keyboard
<details>
<summary>Details</summary>

Level: Easy  
Tags: Array, String  
Problem ID: [XfjPkLdyYETB](https://ckj.imslab.org/#/problems/XfjPkLdyYETB)  
</details>

### Description
墨菲是一位科學家，她發明了一套通訊系統能夠與過去的人類溝通，無奈20幾年前人類還沒有智慧型手機，手機使用的是九宮格鍵盤的方式輸入。請寫一個程式幫助她將文字轉換為九宮格鍵盤的格式。

九宮格鍵盤在數字 2~9 的位置依序有以下的英文組合

`"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"`

![t9keyboard](https://upload.wikimedia.org/wikipedia/commons/thumb/7/73/Telephone-keypad2.svg/296px-Telephone-keypad2.svg.png)



如果今天要輸入 `cooper` 需要按 3 次 2、按 3 次 6、按 3 次 6、按 1 次 7、按 2 次 3、按 3 次 7，因此要在系統中輸入 `(2)3(6)3(6)3(7)1(3)2(7)3`。



---

Murphy is a scientist, she invented a communication system that can communicate with the past. Unfortunately, twenty years ago humankind doesn’t have smartphones, they still use t9 keyboard as input. Please write a program to help her convert words to t9 keyboard format.

t9 keyboard have the following character sequence on key 2~9

`"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"`

![t9keyboard](https://upload.wikimedia.org/wikipedia/commons/thumb/7/73/Telephone-keypad2.svg/296px-Telephone-keypad2.svg.png)



If we wan’t to type `cooper`, we need to press “2” 3 times, press “6” 3 times, press “6” 3 times, press “7” 1 time, press “3” 2 times, and press “7” 3 times, so we need to input `(2)3(6)3(6)3(7)1(3)2(7)3` in the system.


### Input
若干行字串，每行有若干個單字(一行單字數量<20，每個單字長度<10)。每個單字之間都是由一個空格分開，每個字元都必為小寫，每行最後一個字元必定為’\n’。不會出現數字或任何特殊字元（ex: ‘,.?!;）

Multiple lines of strings, each line have multiple words(words in one line < 20, each word length < 10). Every word is separated by a space, every character is lower case, every line ends with ‘\n’. No number or special character(ex: ‘,.?!;)
### Output
將所有英文字元轉換為九宮格鍵盤的格式，每個字之間有一個空格分開。

convert all alphabet character to t9 keyboard format, every word is separated by a space.

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFFER_LEN 1024
#define LINE_LEN 128

void convert(char *arr[], int count);
int main() {
  char line[BUFFER_LEN];
  char buffer[LINE_LEN][BUFFER_LEN];
  char *arr[LINE_LEN];

  int count = 0;
  while (fgets(line, BUFFER_LEN - 1, stdin) != NULL) {
    arr[count] = buffer[count];
    strncpy(buffer[count++], line, BUFFER_LEN - 1);
  }
  convert(arr, count);
  for (int i = 0; i < count; i++) {
    printf("%s", arr[i]);
  }
}
```
</details>


### Example 1
#### Input
```
do not go gentle into that good night
old age should burn and rave at close of day
rage rage against the dying of the light

```
#### Output
```
(3)1(6)3 (6)2(6)3(8)1 (4)1(6)3 (4)1(3)2(6)2(8)1(5)3(3)2 (4)3(6)2(8)1(6)3 (8)1(4)2(2)1(8)1 (4)1(6)3(6)3(3)1 (6)2(4)3(4)1(4)2(8)1
(6)3(5)3(3)1 (2)1(4)1(3)2 (7)4(4)2(6)3(8)2(5)3(3)1 (2)2(8)2(7)3(6)2 (2)1(6)2(3)1 (7)3(2)1(8)3(3)2 (2)1(8)1 (2)3(5)3(6)3(7)4(3)2 (6)3(3)3 (3)1(2)1(9)3
(7)3(2)1(4)1(3)2 (7)3(2)1(4)1(3)2 (2)1(4)1(2)1(4)3(6)2(7)4(8)1 (8)1(4)2(3)2 (3)1(9)3(4)3(6)2(4)1 (6)3(3)3 (8)1(4)2(3)2 (5)3(4)3(4)1(4)2(8)1

```

### Example 2
#### Input
```
love is the one thing that transcends time and space
maybe we should trust that even if we cannot understand it

```
#### Output
```
(5)3(6)3(8)3(3)2 (4)3(7)4 (8)1(4)2(3)2 (6)3(6)2(3)2 (8)1(4)2(4)3(6)2(4)1 (8)1(4)2(2)1(8)1 (8)1(7)3(2)1(6)2(7)4(2)3(3)2(6)2(3)1(7)4 (8)1(4)3(6)1(3)2 (2)1(6)2(3)1 (7)4(7)1(2)1(2)3(3)2
(6)1(2)1(9)3(2)2(3)2 (9)1(3)2 (7)4(4)2(6)3(8)2(5)3(3)1 (8)1(7)3(8)2(7)4(8)1 (8)1(4)2(2)1(8)1 (3)2(8)3(3)2(6)2 (4)3(3)3 (9)1(3)2 (2)3(2)1(6)2(6)2(6)3(8)1 (8)2(6)2(3)1(3)2(7)3(7)4(8)1(2)1(6)2(3)1 (4)3(8)1

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
