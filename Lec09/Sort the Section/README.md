## Sort the Section
<details>
<summary>Details</summary>

Level: Easy  
Tags: Pointers, Array  
Problem ID: [H6ydzYlLEIrK](https://ckj.imslab.org/#/problems/H6ydzYlLEIrK)  
</details>

### Description
給定一個整數序列 A，由索引 `a` 到 `b` 排序部分的序列（假設 `a` 小於 `b`）

請使用泡沫排序法完成 `sort_section` 函式，其中 `ptr` 以及 `qtr` 為指標指向部分序列的開始或結束位址。（`ptr` ≠ `qtr`，但 `ptr` 可能大於 `qtr`）



---

Given a sequence of integers A, and two index `a` `b`, sort the section of A from index `a` to `b`(suppose `a` is smaller than `b`)

Please use bubble sort to finish `sort_section` function, the `ptr` and `qtr` is a pointer that points to the start/end of the section.(`ptr` ≠ `qtr`, but `ptr` might be bigger than `qtr`)


### Input
第一行有一個整數 N ( 2 <= N <= 1000) ，代表序列 A 的長度。第二行有兩個整數 a b(a ≠ b，不保證 a 小於 b)，代表部分序列的開始或結束索引。第三行有 N 個整數，代表序列 A 的所有元素。
The first line is an integer N(2 ≤ N ≤ 1000), indicates the number of integers in A. The second line has two integers a and b(a ≠ b, does not guarantee that a < b), indicates the start/end index of the section. The third line has N integers, indicates the elements of sequence A.
### Output
當排序部分的序列時，輸出每做完一輪後的當前序列，最後輸出整個序列。
When sorting the section, please output the result on each round, then output the whole sequence.

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>
#define ARR_MAX 1000
void sort_section(int *ptr, int *qtr);
int main() {
  int N, a, b;
  scanf("%d%d%d", &N, &a, &b);
  int arr[ARR_MAX] = {0};
  for (int i = 0; i < N; i++) {
    scanf("%d", arr + i);
  }
  sort_section(&arr[a], &arr[b]);
  for (int i = 0; i < N; i++) {
    printf("%d ", *(arr + i));
  }
}
```
</details>


### Example 1
#### Input
```
15
4 11
141 -35 -143 73 141 -11 55 -98 -21 -58 118 -55 -148 -29 232
```
#### Output
```
-11 55 -98 -21 -58 118 -55 141
-11 -98 -21 -58 55 -55 118 141
-98 -21 -58 -11 -55 55 118 141
-98 -58 -21 -55 -11 55 118 141
-98 -58 -55 -21 -11 55 118 141
-98 -58 -55 -21 -11 55 118 141
-98 -58 -55 -21 -11 55 118 141
141 -35 -143 73 -98 -58 -55 -21 -11 55 118 141 -148 -29 232 
```

### Example 2
#### Input
```
11
2 9
104 119 -78 74 95 -87 120 -86 143 102 219
```
#### Output
```
-78 74 -87 95 -86 120 102 143
-78 -87 74 -86 95 102 120 143
-87 -78 -86 74 95 102 120 143
-87 -86 -78 74 95 102 120 143
-87 -86 -78 74 95 102 120 143
-87 -86 -78 74 95 102 120 143
-87 -86 -78 74 95 102 120 143
104 119 -87 -86 -78 74 95 102 120 143 219 
```

### Example 3
#### Input
```
10
9 2
-20 -84 -41 131 71 -7 69 104 22 -132
```
#### Output
```
-41 71 -7 69 104 22 -132 131
-41 -7 69 71 22 -132 104 131
-41 -7 69 22 -132 71 104 131
-41 -7 22 -132 69 71 104 131
-41 -7 -132 22 69 71 104 131
-41 -132 -7 22 69 71 104 131
-132 -41 -7 22 69 71 104 131
-20 -84 -132 -41 -7 22 69 71 104 131 
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
