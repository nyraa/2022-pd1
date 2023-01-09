## 檢查密碼 Check Password
<details>
<summary>Details</summary>

Level: Easy  
Tags: Format I/O, If/else, Loop, String, Array, Function  
Problem ID: [6nsFlvAmP9UC](https://ckj.imslab.org/#/problems/6nsFlvAmP9UC)  
</details>

### Description
在生活中，我們經常需要設定密碼，而在設定密碼時，系統通常會避免只讓使用者輸入一次密碼，因為這樣很可能不小心設定成錯的密碼。所以會要求使用者輸入兩次密碼，並檢查是否一致。

而在設定密碼時，必須遵守密碼規則，才能成功的設置符合條件的高強度密碼。

身為未來工程師的你 (?)，依據下列的條件，請你實作出能讓使用者設定密碼的功能。

密碼條件有優先權之分，優先權大小由上至下，只要優先權較高的未通過，就不做後續的判斷。意即當條件 1 不符合時，就不做條件 2、3 的判斷；當條件 2 不符合時，就不做條件 3 的判斷。

密碼條件如下：

1.          兩次輸入的密碼長度皆介於 6 至 16 個位元（僅檢查長度是否在範圍內，不須檢查長度是否相同）

2.          兩次輸入的密碼須一致

3.          密碼須同時包含英文大寫、英文小寫、數字三種字符

接著請你觀察 loader code，可以發現當密碼條件不符時，函式會回傳 1，並印出哪個條件不符。請你根據 loader code 的內容，來完成判斷密碼條件的三個函式。

In our life, we often need to set up passwords, and when setting up passwords, the system usually avoids asking the user to enter the password only once, because it is likely to set up the wrong password accidentally. Therefore, we will ask the user to enter the password twice and check if it is the same.

When setting a password, you must follow the password rules in order to successfully set a high-strength password that matches the conditions.

As a future engineer (?), you are asked to implement a feature that allows users to set a password based on the following conditions.

There is a priority for the password conditions, and the priority is from top to bottom, as long as the higher priority failed, the subsequent judgment will not be made. That is, when condition 1 is not satisfied, the judgment of conditions 2 and 3 will not be made; when condition 2 is not satisfied, the judgment of condition 3 will not be made.

The password conditions are as follows.

1. Both passwords must be between 6 and 16 digits long (Check only if the length are within the range, no need to check if the length are the same)

2. The password must be the same for both inputs

3. The password must contain both upper case, lower case and numeric characters

Next, please observe the loader code, you can find that when the password condition does not match, the function will return 1 and print out which condition does not match. Please complete the three functions to determine the password condition according to the contents of the loader code.


### Input
使用者輸入兩次密碼，長度介於 1~20，僅會輸入英文大寫、英文小寫、數字這三種類型的字符。
The user enters the password twice, with a length between 1 and 20, and only three types of characters will be entered: upper case, lower case, and numbers.
### Output
根據密碼條件的判斷結果，輸出對應的文字，長度過長或過短：「Length does not match the requirements」；兩次輸入不一致：「Not the same password」；密碼不符合條件：「Do not satisfy the conditions」；密碼符合條件：「Everything is good」。
According to the judgment result of the password conditions, output the corresponding text, length is too long or too short: "Length does not match the requirements"; two input inconsistencies: "Not the same password"; password does not meet the conditions: "Do not satisfy the conditions"; password meets the conditions: "Everything is good".

### Loader Code
<details>
<summary>Loader Code</summary>

```c
# include <stdio.h>
# include <string.h>

#define SIZE 25

int length(char pwd1[], char pwd2[]);

int compare(char pwd1[], char pwd2[]);

int content(char pwd1[]);

int main()
{
    char password1[SIZE];
    char password2[SIZE];
    
    // Enter the password
    scanf("%s", password1);
    // Enter the password again
    scanf("%s", password2);
    
    // Check Password
    // First: Check length
    if(length(password1, password2) == 1) {
        printf("Length does not match the requirements");
    }
    else {
        // Second: Check for consistency
        if(compare(password1, password2) == 1) {
            printf("Not the same password");
        }
        else {
            // Third: Check for compliance
            if(content(password1) == 1) {
                printf("Do not satisfy the conditions");
            }
            else {
                printf("Everything is good");
            }
        }
    }

    return 0;
}
```
</details>


### Example 1
#### Input
```
zQJB39A
zQJB39A

```
#### Output
```
Everything is good
```

### Example 2
#### Input
```
Rm0kzLBiVFcB7m
cs

```
#### Output
```
Length does not match the requirements
```

### Example 3
#### Input
```
a123456
a123456

```
#### Output
```
Do not satisfy the conditions
```

### Example 4
#### Input
```
HelloWorld123
Helloworld987

```
#### Output
```
Not the same password
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
