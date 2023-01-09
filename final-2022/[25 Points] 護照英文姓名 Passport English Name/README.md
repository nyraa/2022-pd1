## [25 Points] 護照英文姓名 Passport English Name
<details>
<summary>Details</summary>

Level: Easy  
Tags: If/else, Loop, Array, Pointers, String, Function  
Problem ID: [9zFlJP1QtipZ](https://ckj.imslab.org/#/problems/9zFlJP1QtipZ)  
</details>

### Description
世界各地現在都邁向解封之路，不再因Covid-19，而有隔離檢疫措施。也就是說，出入境不需要隔離檢疫，也因此大家開始辦護照準備出國。

你有一個朋友恰好在旅行社工作，這位朋友在協助客戶辦護照的時候發現，大家填寫姓名的大小寫都不太一樣，名字兩個字則填空白，而不是規定的連接號 (dash)，所以想請你這位程式高手幫他解決這個問題。

這個程式要能分別輸入英文姓氏和名字，一般而言，中文姓名的姓氏是一個字或兩個字，名字也是一個字或兩個字。輸入無論大小寫都應該要轉換成規定的格式。

中文姓名翻譯成英文姓名的格式如下：

1.          第一欄為姓 (Last name)，複姓的兩個字中間需有一個空白

2.          一個半形逗點和一個半形空白

3.          第二欄為名字 (First name)，一至二個字，兩個字的中間需有一個連接號 (dash)

例如：王小明的英文姓名輸入，姓和名可能輸入是 "Wang"、"Xiao Ming"；"wang"、"xiao ming"；"WANG"、"XIAO MING" 等等。正確輸出的結果，「王小明」的英文姓名是："WANG, XIAO-MING"。

如果是複姓的姓名，例如：「歐陽小美」的英文姓名是："OU YANG, XIAO-MEI"。

注意：限制輸入大小是 15 個字元，意即姓或名其中之一不可超過 15 字元，超過的話要輸出 "illegal"，且不須輸出轉換後的姓名。

All over the world is now on the road to unsealing, no longer having quarantine for Covid-19. In other words, there is no need for quarantine to enter or leave the country, so people are getting their passports ready to leave the country.

You have a friend who works in a travel agency. When he was helping his customers to apply for passports, he found that people were filling in their names in different cases and filling in the blanks instead of the dash.

The program should be able to input English last name and first name separately. In general, Chinese names have one or two characters for the last name and one or two characters for the first name. The input should be converted to the required format regardless of case.

The format for translating Chinese names into English names is as follows.

1.          The first column is the surname (Last name), there should be a space between the two words of the compound surname

2.          A half comma and a half blank

3.          The second column is the First name, one to two words, with a dash in the middle of the two words.

For example: 王小明’s English name input, the last name and first name may be entered as "Wang", "Xiao Ming"; "wang", "xiao ming"; "WANG", "XIAO MING" and so on. The correct output results in the English name of "WANG, XIAO-MING".

If it is a name with a compound surname, e.g. "歐陽小美" the English name is: "OU YANG, XIAO-MEI".

Note: The input size is limited to 15 characters, i.e. one of the last name or first name cannot exceed 15 characters, if it exceeds that, "illegal" should be output, and the converted name should not be output.


### Input
第一列為中文翻譯英文的姓氏 (Last name)，例如："Wang"。
第二列為中文翻譯英文的名字 (First name) ，例如："Xiao-Ming"。
輸入以換行結尾，即姓氏與名字輸入後皆會按下換行。
The first column is the Chinese translation of the English surname (Last name), for example: "Wang".
The second column is the Chinese translation of the English name (First name), for example: "Xiao-Ming".
The input ends with a newline, i.e., both the last name and first name will click a newline after input.


### Output
護照格式的完整英文姓名。若姓或名其中之一超過 15 字元的規定長度，則輸出 "illegal"。
Complete English name in passport format. If either the last name or first name exceeds the required length of 15 characters, "illegal" is output.

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 15

void convert (char *last, char *first);

int main()
{
    char last_name[MAX_LEN + 2];
    char first_name[MAX_LEN + 2];
    
    // Enter last name
    fgets(last_name, MAX_LEN*2 , stdin);
    if(last_name[strlen(last_name) - 1] == '\n')
        last_name[strlen(last_name) - 1] = '\0';
    
    // Enter first name
    fgets(first_name, MAX_LEN*2, stdin);
    if(first_name[strlen(first_name) - 1] == '\n')
        first_name[strlen(first_name) - 1] = '\0';
    
    // Convert and print the name by using the function convert
    convert(last_name, first_name);
    
    return 0;
}
```
</details>


### Example 1
#### Input
```
Wo Ai
Chengshi Sheji

```
#### Output
```
WO AI, CHENGSHI-SHEJI
```

### Example 2
#### Input
```
ShEn haI
GuiYU yOUGoUhaochi

```
#### Output
```
illegal
```

### Example 3
#### Input
```
WOHAO XINGFEN
A

```
#### Output
```
WOHAO XINGFEN, A
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  

### Hint
<details>
<summary>Hint</summary>
中文姓名的前面是姓氏 last name，後面是名字 first name。 The Chinese name is preceded by the last name (surname) and followed by the first name.
</details>
