## [20 Points] gettoken
<details>
<summary>Details</summary>

Level: Medium  
Tags: Pointers, String  
Problem ID: [MvfeA2m8uw2V](https://ckj.imslab.org/#/problems/MvfeA2m8uw2V)  
</details>

### Description
Please write a `gettoken` function which can isolate sequential tokens in a null-terminated string. The first argument `str` is a pointer to char which will point to the string that we want to get tokens from. The second argument `sep` is a string of separator. The first time that `gettoken` is called, `str` should be specified; subsequent calls, wishing to obtain further tokens from the same string, should pass a NULL pointer instead.

**strtok, strtok\_r, strsep is banned in this problem**



---

請寫一個 `gettoken` 函式將一個 null-terminated 字串分割為 token。第一個參數 `str` 為一個指標，指向我們想要得到 token 的字串。第二個參數 `sep` 是一個字串，其中的字元為分割字元。`gettoken` 第一次被呼叫時需給定 `str`，其後的呼叫如果要繼續在同一個字串分割 token 需傳入 NULL。

**本題禁用 strtok, strtok\_r, strsep**


### Input
The first line contains an integer N that indicates the number of lines, followed by N lines of text, each line will be less than 4000 character
第一行為一數字 N 代表總共有幾行文字，接下來有 N 行文字，每行文字會小於 4000 個字元
### Output
Multiple tokens, each separated by a newline 
多個 token，token 之間用換行分開

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>
#include <stdlib.h>

char *strtok(char *s, const char *sep) {
  printf("strtok banned\n");
  exit(1);
}
char *strtok_r(char *str, const char *sep, char **lasts) {
  printf("strtok_r banned\n");
  exit(1);
}

char *strsep(char **stringp, const char *delim) {
  printf("strsep banned\n");
  exit(1);
}
char *gettoken(char *str, const char *sep);
int main() {
  char buffer[4096];
  char *sep = " \t\n;,.?!";
  char *word;
  int N;
  scanf("%d\n", &N);
  for (int i = 0; i < N; i++) {
    fgets(buffer, 4095, stdin);
    for (word = gettoken(buffer, sep); word != NULL;
         word = gettoken(NULL, sep)) {
      printf("%s\n", word);
    }
  }
}

```
</details>


### Example 1
#### Input
```
1
C makes it easy to shoot yourself in the foot; C++ makes it harder, but when you do, it blows your whole leg off.

```
#### Output
```
C
makes
it
easy
to
shoot
yourself
in
the
foot
C++
makes
it
harder
but
when
you
do
it
blows
your
whole
leg
off

```

### Example 2
#### Input
```
2
When I wrote this code, only God and I understood what I did. Now... only God knows.
C programmers never die. They are just cast into void.

```
#### Output
```
When
I
wrote
this
code
only
God
and
I
understood
what
I
did
Now
only
God
knows
C
programmers
never
die
They
are
just
cast
into
void

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  

### Hint
<details>
<summary>Hint</summary>
pointers, static/global variable
</details>
