# misc
## MT - Matrix multiplication
<details>
<summary>Details</summary>

Level: Easy  
Tags:   
Problem ID: [TuzJxQVS9PGx](https://ckj.imslab.org/#/problems/TuzJxQVS9PGx)  
</details>

### Description
Given two matrices A, B with size n by m and m by p respectively, where
 \_ \_ \_ \_
 | a11 a12 .. a1m | | b11 b12 .. b1p |
An\_m = | a21 a22 .. a2m | Bm\_p = | b21 b22 .. b2p |
 | . . | | . . |
 |\_an1 an2 .. anm\_| |\_bm1 bm2 .. bmp\_|

The result of multiplication of A and B is a matrix with size n by p, where each element
ab\_ij = sum(k = 1, m, a\_ik\*b\_kj) for 1 <= i <= n and 1 <= j <= p
### Input
The first line contains three integers representing n, m and p,
and is followed by n + m lines: the first n lines represent matrix A, and the other m lines are for matrix B.
(0 <= a_ij, b_ij <= 1000)
### Output
n lines with p elements in each line, representing the result of multiplication of A and B.

### Limits
Your program needs to finish task in 5 seconds.  
Your program can only use memory less than 65536 KB.  
