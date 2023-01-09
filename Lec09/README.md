# Lec09
## Sudoku Checker
<details>
<summary>Details</summary>

Level: Medium  
Tags: Array, Loop, If/else, Pointers, Recursive  
Problem ID: [7KP_2qzRT-FC](https://ckj.imslab.org/#/problems/7KP_2qzRT-FC)  
</details>

### Description
Sudoku is a logical based, combinatorial number-placement puzzle. The objective is to fill a **9×9** grid with digits so that **each column, each row, and each of the nine 3×3 subgrids that compose the grid contain all of the digits from 1 to 9**.

For example:

![Image](img/Image)



Write a program which checks the input sudoku puzzle and prints out the row number and column number of the points that do not satisfy sudoku's requirements.

Note: You only need to implement `check_sudoku` function.


### Input
The parameter of the check_sudoku function is a pointer that points to a two-dimentional integer array, which represents the sudoku puzzle.
### Output
Print out the row number and column number of the points (from left to right then top to bottom) that do not satisfy soduku's requirements. Each point printed out is followed by a newline character, and is in the format (row,column).

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>
#define NUM 9

void check_sudoku(int (*grid_p)[NUM]);

int main(void){
    int grid[NUM][NUM]; // sudoku puzzle
    for(int i = 0; i < NUM; ++i){
        for(int j = 0; j < NUM; ++j){
            scanf("%d", &grid[i][j]);
        }
    }
    check_sudoku(grid);
    return 0;
}
```
</details>


### Example 1
#### Input
```
9 3 1 7 1 8 2 4 5
7 5 2 9 4 1 8 3 6
6 8 4 5 3 2 9 7 1
8 2 9 3 5 4 6 1 7
5 6 7 8 1 9 3 2 4
1 4 3 2 7 6 5 8 9
3 1 5 6 8 7 4 9 2
4 9 8 1 2 5 7 6 3
2 7 6 4 9 3 1 5 8

```
#### Output
```
(0,2)
(0,4)
(1,5)
(4,4)

```

### Example 2
#### Input
```
9 3 1 7 6 8 2 4 5
2 5 2 9 4 1 8 3 6
6 8 4 5 3 2 9 7 1
8 2 9 3 5 4 6 1 7
5 6 7 8 1 9 3 2 4
1 4 3 2 7 6 5 8 9
3 1 5 6 8 7 4 9 2
4 9 8 1 2 5 7 6 3
2 7 6 4 9 3 1 5 8

```
#### Output
```
(1,0)
(1,2)
(8,0)

```

### Limits
Your program needs to finish task in 2 seconds.  
Your program can only use memory less than 20000 KB.  
## 交換  Exchange
<details>
<summary>Details</summary>

Level: Easy  
Tags: Loop, Array, Pointers  
Problem ID: [mc76ybqusQA6](https://ckj.imslab.org/#/problems/mc76ybqusQA6)  
</details>

### Description
給定各有 N 個正整數的兩序列 A, B ，請回傳最少進行以下操作幾次後，滿足兩序列的相同索引值，A 的元素會大於等於 B 的元素以及最終的 A 序列。

* 對於索引值 i (1 ≦ i ≦ N)，將 Ai 與 Bi 元素互換

更系統的說，請回傳最少需經過幾次以上操作後，滿足對於所有 i (1 ≦ i ≦ N)， 使得 A\_i ≥ B\_i，以及完成所有操作後的 A。



---

Given two sequences A, B with N positive integers each, return the sequence A and B that satisfies the same index value of both sequences at least a few times, and the elements of A will be larger than the elements of B and the final A sequence.

* For the index value i (0<=i<N), swap the elements of Ai and Bi

More systematically, please return A after at least a few operations to satisfy for all i (1 ≦ i ≦ N), so that A*i ≥ B*i, and after completing all operations.


### Input
第一行有一個正整數 N（1 ≦ N ≦ 10^5），代表序列 A, B 有幾個正整數。



第二行有 N 個正整數 A_1、A_2...A_N，代表序列 A 的元素。（對所有 1 ≦ i ≦ N，1 ≦ A_i ≦ 10^9）



第三行有 N 個正整數 B_1、B_2...B_N，代表序列 B 的元素。（對所有 1 ≦ i ≦ N，1 ≦ B_i ≦ 10^9）



The first line has a positive integer N (1 ≦ N ≦ 10^5), representing the sequence A, B has several positive integers.



The second row has N positive integers A_1, A_2.... .A_N, representing the elements of the sequence A. (for all 1 ≦ i ≦ N, 1 ≦ A_i ≦ 10^9)



The third row has N positive integers B_1, B_2.... .B_N, representing the elements of sequence B. (for all 1 ≦ i ≦ N, 1 ≦ B_i ≦ 10^9)


### Output
第一行有一個正整數 S ，代表最找需要幾次操作。

第二行有 N 個正整數，代表操作後最終的 A 序列。



The first row has a positive integer S, which represents the number of operations needed to find the most.

The second row has N positive integers, which represent the final A sequence after the operation.

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include<stdio.h>
int N;

void solve(int *A, int *B, int *op_cnt);

int main(){
    int A[1<<17] = {0};
    int B[1<<17] = {0};
    int op_cnt = 0;

    scanf("%d", &N);
    for(int i = 0; i<N; i++)
        scanf("%d", &A[i]);
    for(int i = 0; i<N; i++)
        scanf("%d", &B[i]);

    solve(A, B, &op_cnt);
    printf("%d\n", op_cnt);
    for(int i = 0; i<N; i++)
        printf("%d ", A[i]);
}
```
</details>


### Example 1
#### Input
```
3
9 2 4
7 10 1
```
#### Output
```
1
9 10 4 
```

### Example 2
#### Input
```
10
9 6 10 2 6 6 6 7 7 6
3 6 8 7 7 3 5 8 1 8
```
#### Output
```
4
9 6 10 7 7 6 6 8 7 8 
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
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
