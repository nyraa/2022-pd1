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
