## Throwing Cards Away
<details>
<summary>Details</summary>

Level: Medium  
Tags: Pointers, Struct  
Problem ID: [DxoGCZpWQRoT](https://ckj.imslab.org/#/problems/DxoGCZpWQRoT)  
</details>

### Description
Given an ordered deck of n cards numbered 1 to n with card 1 at the top and card n at the bottom, throw away the top card and move the next card that is on the top of the deck to the bottom of the deck. Repeat this process m times and find the sequence of discarded cards.

給一副排組，由上而下的編號為 1~n，共會進行 m 次抽取，每次抽走最上層的牌並輸出此牌的編號，再將最上層的牌放到牌組的最下方。


### Input
Two integers n & m.
### Output
The sequence of the discarded cards. Every number is followed by one space.

### Example 1
#### Input
```
7 7
```
#### Output
```
1 3 5 7 4 2 6 
```

### Example 2
#### Input
```
9 7
```
#### Output
```
1 3 5 7 9 4 8 
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 65535 KB.  
