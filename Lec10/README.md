# Lec10
## Game Patapon
<details>
<summary>Details</summary>

Level: Medium  
Tags: If/else, Loop, String  
Problem ID: [sdkQ26KMxvMa](https://ckj.imslab.org/#/problems/sdkQ26KMxvMa)  
</details>

### Description
Patapon 是一款音樂節奏遊戲，你必須跟著節奏輸入指定的動作，才能打倒怪物！

在本題中有三種合法節奏（也就是接下來所謂的「指令」）：

PATA PATA PATA PON：可以前進一步。

PON PON PATA PON：可以原地攻擊怪物，扣除怪獸一滴血。

CHAKA CHAKA PATA PON：可以後退一步並防禦怪物攻擊。

以下有幾個注意事項：

當距離怪物超過 3 時，無論如何攻擊都攻擊不到怪物；但若跟怪物距離為 0 時，會直接被怪物踩爛死掉。

遊戲時可能會打錯遊戲指令，在這題也是，當出現不合法動作（例如：CHAKA CHAKA PON PON），會直接被忽略。

每當做十個動作「後」（無論是否為合法動作），怪物會進行一次攻擊，如果攻擊前的該動作並非防禦（也就是 CHAKA CHAKA PATA PON），會直接被怪物打敗然後死掉。

但若在怪物攻擊前將怪物血量打至零，算成功打敗怪物。

每次最多進行三十次動作，請將每次遊戲進行的結果印出！（參考下方 I/O 說明）



---

Patapon is a music game, you have to follow the rhythm and enter the commands to beat out the monster!

There are three kinds of valid rhythm (or we say 「command」 below):

PATA PATA PATA PON: move one step forward

PON PON PATA PON：no move and attack on the monster (one blood)

CHAKA CHAKA PATA PON：move one step backward and defend the monster's attack

Notices:

When the distance between you and the monster is bigger than 3, you can never attack on the monster.

But if the distance is 0, the monster will trample on you, and you will die.

Sometimes there are some wrong commands, for example, CHAKA CHAKA PON PON, those commands will be ignored with no effect.

After entering ten commands (no matter the command is valid or not), the monster will attack on you.

If the command before the monster's attack is not the defence (i.e. CHAKA CHAKA PATA PON), you will be attacked and die.

But, if the monster's blood is 0 before the monster attacks on you, then it means you beat out the monster.

There are at most 30 commands in one round, please print out the result of the game! (See I/O description)

![未命名.png](img/未命名.png)




### Input
一開始給兩個數字，分別為「與怪獸的距離」和「怪獸的血量」。

接著給予一字串，分別是每個動作指令，並以 . 或 , 隔開，最後會有一換行。

There are two numbers, the first one is 「the distance to the monster」, and the second one is 「the monster's bloods」

Then, given a string that contains commands separated by '.' or ','. Followed by a newline.
### Output
若成功打敗怪物，印出 "YES" 以及一空格，最後印出遊戲中打敗怪物前「合法指令」的數量。

反之，若失敗（包含玩家死掉或指令輸完但怪物沒死），印出 "NO" 以及一空格，最後印出遊戲中怪物剩餘的血量。

If you beat out the monster successfully, print out "YES" and one space, then print out the count of 「the valid commands」 before beating out the monster.

On the contrary, if failed (e.g. you died or the commands end before beating out the monster), print out "NO" and one space, then print out the remaining bloods of the monster.

### Example 1
#### Input
```
5 4
PATA PATA PATA PON,PON PON PATA PON.PON PON PATA PON,PATA PATA PATA PON.PATA PATA PATA PON,CHAKA CHAKA PATA PON.PON PON PATA PON,PON PON PATA PON.PON PON PATA PON,CHAKA CHAKA PATA PON.PON PON PATA PON,PATA PATA PATA PON,CHAKA PATA PATA PON,PON PATA PATA PON,PON PON PATA PON

```
#### Output
```
YES 13
```

### Example 2
#### Input
```
5 4
PATA PATA PATA PON.PON PON PATA PON.PON PON PATA PON.PATA PATA PATA PON.PATA PATA PATA PON.CHAKA CHAKA PATA PON.PON PON PATA PON.PON PON PATA PON.PON PON PATA PON.PON PON PATA PON.PON PON PATA PON.PATA PATA PATA PON.PON PON PATA PON

```
#### Output
```
YES 10
```

### Example 3
#### Input
```
5 4
PATA PATA PATA PON,PON PON PATA PON,PON PON PATA PON,PATA PATA PATA PON,PATA PATA PATA PON,CHAKA CHAKA PATA PON,PATA PATA PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PATA PATA PATA PON,PON PON PATA PON

```
#### Output
```
NO 1
```

### Example 4
#### Input
```
5 4
PATA PATA PATA PON,PATA PATA PATA PON,PATA PATA PATA PON.PATA PATA PATA PON,PATA PATA PATA PON.PATA PATA PATA PON,PATA PATA PATA PON.PATA PATA PATA PON

```
#### Output
```
NO 4
```

### Example 5
#### Input
```
5 4
PATA PATA PATA PON.PATA PATA PATA PON.PON PON PATA PON.CHAKA CHAKA PATA PON.PON PON PATA PON.PON PON PATA PON.PON PON PATA PON,PON PON PATA PON.PON PON PATA PON,CHAKA CHAKA PATA PON.PON PON PATA PON,PON PON PATA PON.PON PON PATA PON,PON PON PATA PON.PON PON PATA PON,PON PON PATA PON.PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,CHAKA CHAKA PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON.CHAKA CHAKA PATA PON

```
#### Output
```
NO 3
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 65535 KB.  
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
## Recover Homework
<details>
<summary>Details</summary>

Level: Medium  
Tags: Loop, If/else, String  
Problem ID: [Bm-z4Lva4-8I](https://ckj.imslab.org/#/problems/Bm-z4Lva4-8I)  
</details>

### Description
It’s no secret that how annoying the cat is.  
One day, Amy just forgot to turn off her computer after she finished her homework, which gave her pet cat an opportunity to ruin her homework.

We have already known that a valid homework should fulfill following restrictions:

* Each word contains only alphabets, that is `a-z` and `A-Z`.
* Only four punctuations, `.`, `,`, `!` and `?` may appear right after a word and should not appear alone.
* The length of each word (including punctuation) should be with in range `1 ~ 21`.
* The words are seperated by a whitespace.

Any pattern that violates above restrictions is produced by Amy’s pet cat, which should be removed. 

Please implement a program to help Amy safe her homework.



---

眾所皆知，貓咪是機車的生物。  
Amy 寫完作業後電腦忘記關，一回過神，發現在鍵盤上面踏踏的貓咪。

一篇正常的作業內會有以下的特徵：

* 詞彙由 `a-z` `A-Z` 所組成
* 正常文章中會出現 `.` `,` `!` `?` 四種標點符號，位於詞彙的最後方，且不該單獨出現
* 每個詞彙的長度介於 `1 ~ 21` 個字元之間 (長度含標點符號)
* 每個詞彙由一個空白隔開

只要不符合上方要求，都是貓咪新增的產物，需要被刪除。  
請你寫一份程式碼，幫助 Amy 復原她的作業


### Input
A string with length 1 ~ 4096 .
### Output
The recovered homework.

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 4096

void recovery(char *homework);

int main () {
    char homework[MAX_LEN + 1];
    
    // Get the homework content.
    fgets(homework, MAX_LEN , stdin);
    recovery(homework);

    // Print the recovered homework.
    fputs(homework, stdout);

    return 0;
}
```
</details>


### Example 1
#### Input
```
Hello jahshd@ World.
```
#### Output
```
Hello World.
```

### Example 2
#### Input
```
Umm, C is the asdfasdfae@ best !!!@@@ujdjdasfasdfasdfas programming language?
```
#### Output
```
Umm, C is the best programming language?
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
