# Lec11
## LEVEL5 -judgelight-
<details>
<summary>Details</summary>

Level: Medium  
Tags: Pointers, Function, Struct  
Problem ID: [pquqeIYmp3yU](https://ckj.imslab.org/#/problems/pquqeIYmp3yU)  
</details>

### Description
Given an array of `struct ESPer` which contains `level` and `name`,

please sort this array in ascending order by level.

hint: You can use C standard library's `qsort` function:

學園都市是個進行超能力開發的機關，會定期對學生進行能力檢測

他們使用的資料結構包含兩個欄位：`level` 和 `name`

請你寫一個 function 來對包含這個 struct 的陣列做排序

hint: 你可以使用內建的 `qsort`

<https://youtu.be/EGmLt7mYSo4>


### Input
An array of "struct ESPer", array length
### Output
sort the array in ascending order by level.

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>
#include <stdlib.h>

struct ESPer {
    char name[64];
    int level;
};

int cmp(const void *a, const void *b);
void sort_level(struct ESPer *arr, int length);

int main()
{
    int n;
    struct ESPer tokiwadai[100];

    scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
        scanf("%d %s", &(tokiwadai[i].level), tokiwadai[i].name);
    }

    sort_level(tokiwadai, n);

    for(int i = 0;i < n;++i) {
        printf("%d %s\n", tokiwadai[i].level, tokiwadai[i].name);
    }

    return 0;
}
```
</details>


### Example 1
#### Input
```
5
6 NanjoYoshino
5 MisakaMikoto
0 SatenRuiko
1 UiharuKazari
4 ShiraiKuroko

```
#### Output
```
0 SatenRuiko
1 UiharuKazari
4 ShiraiKuroko
5 MisakaMikoto
6 NanjoYoshino

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 65535 KB.  
## Matrix Addition and Multiplication
<details>
<summary>Details</summary>

Level: Easy  
Tags: Loop, Array, Pointers, Struct  
Problem ID: [5N-_kWCwd6MM](https://ckj.imslab.org/#/problems/5N-_kWCwd6MM)  
</details>

### Description
Write a program that implements matrix addition and multiplication of two matrices.


### Input
The input contains three parts. The first and second part represent the information of the first matrix and the second matrix respectively. The first line of each part contains row and column number of the matrix, and the following line is an array of integers which represent the matrix itself. The second part is a character which represents the operation of the matrix.
### Output
The content of the result matrix. Each element is followed by a space character.

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>
#define SIZE 50

struct mat {
    int row;
    int col;
    int value[SIZE][SIZE];
};

void scan_mat(struct mat *);
void print_mat(const struct mat *);
void add_mat(const struct mat *, const struct mat *, struct mat *);
void mul_mat(const struct mat *, const struct mat *, struct mat *);

int main(void) {
    struct mat m1, m2, result;
    char op;
    scan_mat(&m1);
    scanf(" %c", &op);
    scan_mat(&m2);
    switch (op) {
        case '+':
            add_mat(&m1, &m2, &result);
            break;
        case '*':
            mul_mat(&m1, &m2, &result);
            break;
    }
    print_mat(&result);
    return 0;
}

void scan_mat(struct mat *m_p) {
    scanf("%d %d", &m_p->row, &m_p->col);
    for (int i = 0; i < m_p->row; ++i) {
        for (int j = 0; j < m_p->col; ++j) {
            scanf("%d", &m_p->value[i][j]);
        }
    }
}

void print_mat(const struct mat *m_p){
    for (int i = 0; i < m_p->row; ++i) {
        for (int j = 0; j < m_p->col; ++j) {
            printf("%d ", m_p->value[i][j]);
            if (j == m_p->col - 1) {
                printf("\n");
            }
        }
    }
}
```
</details>


### Example 1
#### Input
```
2 3
3 2 6
2 4 5
+
2 3
4 5 6
3 1 4

```
#### Output
```
7 7 12 
5 5 9 

```

### Example 2
#### Input
```
2 2
1 2
3 4
*
2 2
5 6
7 8

```
#### Output
```
19 22 
43 50 

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 10000 KB.  
## Ballot Counter
<details>
<summary>Details</summary>

Level: Easy  
Tags: Array, String, Struct  
Problem ID: [nVlKtT09rF0X](https://ckj.imslab.org/#/problems/nVlKtT09rF0X)  
</details>

### Description
Taiwan had just hold the local government election that aims to decide the mayor, the councilor and the village chief of each city and village. The election was held in 26th November, 2022, starts from a.m. 8:00 to p.m. 4:00. After that, the ballots must be counted carefully, which usually takes quite a long time, please implement a program to help counting the ballots.


### Input
The first line contains an integer N that indicates the number of candidates. Where 1 < N <= 20.

The next line contains N candidates' names.

The rest of lines, ended by EOF, contains a name of a candidate which represents a ballot that voted to the candidate. There will be at most 10000 lines.
### Output
The name of each candidate followed by his/her votes earned in the election, each candidate occupies an independent line. Finally, the last line contains the winner of the election. There is guaranteed to be only one winner.

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>                                  
#include <string.h>                                                                                                                                                                          

#define MAX_CAND_CNT 20
#define MAX_NAME_LEN 32
struct ballot_counter_s {
    int count;
    char name[MAX_NAME_LEN];
} counter[MAX_CAND_CNT];
int cand_cnt;

void count(const char *name);
const char *winner();

int main()
{
    scanf("%d", &cand_cnt);
    for (int i = 0; i < cand_cnt; i++) {
        scanf("%s", counter[i].name);
        counter[i].count = 0;
    }

    char name[MAX_NAME_LEN];
    while (scanf("%s", name) != EOF)
        count(name);

    for (int i = 0; i < cand_cnt; i++)
        printf("%s %d\n", counter[i].name, counter[i].count);

    printf("%s\n", winner());

    return 0;
}
```
</details>


### Example 1
#### Input
```
2
Jonathan Jesse 
Jonathan
Jesse
Jesse
Jesse
Jesse
Jesse
Jesse
Jonathan
Jonathan
Jonathan
Jonathan
Jesse
Jesse
Jesse
Jonathan
Jesse
Jesse
Jonathan
Jesse
Jonathan
Jesse
Jonathan
Jonathan
Jonathan
Jesse
Jesse

```
#### Output
```
Jonathan 11
Jesse 15
Jesse

```

### Example 2
#### Input
```
3
Alexander Bryan Victoria 
Alexander
Bryan
Victoria
Alexander
Alexander
Bryan
Bryan
Bryan
Alexander
Victoria
Victoria
Bryan
Victoria
Alexander
Victoria
Bryan
Alexander
Victoria
Victoria
Victoria

```
#### Output
```
Alexander 6
Bryan 6
Victoria 8
Victoria

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  

### Hint
<details>
<summary>Hint</summary>
An EOF could be generated via pressing Ctrl-D on Unix like system (include MacOS), and Ctrl-Z on Windows.
</details>
