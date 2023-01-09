## [30 Points] Pull The Radish
<details>
<summary>Details</summary>

Level: Easy  
Tags: Array, Pointers  
Problem ID: [5ud0J7k76WZx](https://ckj.imslab.org/#/problems/5ud0J7k76WZx)  
</details>

### Description
在開心農場裡，Ariel 種了 `N` 根蘿蔔，每個蘿蔔的間距為一公尺，今天是收成的日子，但 Ariel 不想要一次拔光所有蘿蔔，所以他決定以自己為起點 (起點為 `y`)，分別向左和向右，每隔 `x` 公尺就拔一根蘿蔔，請輸出 Ariel 今天總共收成了幾根蘿蔔，並告訴他現在農場的情況。  
  
`farm[N]` 表示農場狀況，若 `farm[i]` 為 1 ，表示在 index 為 `i` 時，有種一根蘿蔔 ; 若 `farm[i]` 為 0 ，表示在 index 為 `i` 時，沒有種蘿蔔。( index `i` 與 `i+1` 之間表示間隔為一公尺)

**Notice**: 請完成 `pull_radish` 函式，並回傳總共拔了幾個蘿蔔，注意參數是什麼 !



---

In happy farm, Ariel planted `N` radishes. The radishes are spaced at one-meter intervals. It is time to harvest, but Ariel doesn't want to pull all radishes. Therefore, she deicides to start with herself (starting point is `y`), and pulls radishes every `x` meters to left and right, respectively. Please output how many radishes Ariel pulls and the situation of farm.

`farm[N]` represents the situation of farm. If `farm[i]` is 1, that means there is a radish at index `i` ; If `farm[i]` is 0, that means there isn't a radish at index `i`.

**Notice**: Please finish `pull_radish` function, and return the number of radishes that Ariel pulls. Pay attention to the parameter!


### Input
There are three number, integer N , y and x, represent the number of radishes, Ariel's position and the interval.


### Output
Output the total of radishes which Ariel pulled and the array farm[N] 

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include<stdio.h>
#include<stdlib.h>

int pull_radish(int *l, int *r, int *pos, int x);

int main() {
    int N, y, x;
    scanf("%d %d %d", &N, &y, &x);
    int *farm = malloc(N * sizeof(int));

    // initialize farm[N]
    for(int i=0; i<N; i++) {
        farm[i] = 1;
    }

    int total = pull_radish(&farm[0], &farm[N-1], &farm[y], x);
    printf("%d\n", total);
    for(int i=0; i<N; i++) {
        printf("%d ", farm[i]);
    }

    return 0;
}
```
</details>


### Example 1
#### Input
```
8 2 2

```
#### Output
```
3
0 1 1 1 0 1 0 1 
```

### Example 2
#### Input
```
15 14 5

```
#### Output
```
2
1 1 1 1 0 1 1 1 1 0 1 1 1 1 1 
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
