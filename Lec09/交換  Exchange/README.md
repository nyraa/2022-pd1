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
