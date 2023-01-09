## Math Fanatic
<details>
<summary>Details</summary>

Level: Medium  
Tags: Basic Types  
Problem ID: [dmdbJ0VMTU6E](https://ckj.imslab.org/#/problems/dmdbJ0VMTU6E)  
</details>

### Description
Dot is a math fanatic and today he wants to observe the relationship between addition and factorization.

點點是個數學狂熱分子，今天他想要觀察加法與因數的關係。

Today there is a sequence S containing N positive integers. If the i-th item of the prefix sum can be divided by S*i, then output the i-th item of the prefix sum with S*i. If there are more than one set, please output them in the input order. (1<=i<=N)

今天有包含 N 個正整數的序列 S，如果前綴和的第 i 項能夠被 S*i 整除，則將前綴和的第 i 項與 S*i 輸出，若有多組符合，請依照輸入順序輸出。(1<=i<=N)

#前綴和(Prefix Sum):

<https://en.wikipedia.org/wiki/Prefix_sum>

ex.

S = {1, 3, 7};

前綴和(Prefix Sum) = {1, 4, 11};

可以觀察的到一定會有一組解，因為前綴和第1項與原序列第1項相同，就代表一定會整除。

It can be observed that there must be a solution because the first term of the prefix sum is the same as the first term of the original sequence, which means it must be divisible.


### Input
第一行有一個正整數 N（1 ≦ N ≦ 10^5），代表序列 S 有幾個整數。
第二行有 N 個正整數 S_1、S_2...S_N，代表序列 S 的元素。（對所有 1 ≦ i ≦ N，1 ≦ S_i ≦ 10^9）

The first line has a positive integer N (1 ≦ N ≦ 10^5), representing the sequence S with several integers.
The second line has N positive integers S_1, S_2.... S_N, representing the elements of the sequence S. (for all 1 ≦ i ≦ N, 1 ≦ S_i ≦ 10^9)
### Output
對於符合條件的元素輸出該項前綴和與該元素並以空白隔開。
各個符合條件的元素輸出以換行隔開，若有多組，請依照輸入順序輸出。

For the elements that meet the condition, output the prefix and the element separated by a space.
Output each eligible element separated by a new line, if there are multiple groups, please output them in the order of input.

### Example 1
#### Input
```
5
1 3 2 6 7
```
#### Output
```
1 1
6 2
12 6
```

### Example 2
#### Input
```
10
123 234 345 456 567 678 89 3 123 17
```
#### Output
```
123 123
2492 89
2635 17
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  

### Hint
<details>
<summary>Hint</summary>
請注意變數型態的可用範圍
</details>
