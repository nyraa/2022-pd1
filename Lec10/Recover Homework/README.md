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
