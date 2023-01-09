## Dungeons & Dragons, Part III
<details>
<summary>Details</summary>

Level: Medium  
Tags: Format I/O, Assignments, Expression, Basic Types  
Problem ID: [R44CpW_fI5il](https://ckj.imslab.org/#/problems/R44CpW_fI5il)  
</details>

### Description
In the previous part, we have beat the dragon, and it is time to move on. In this part, we are about to travel through a desert.

In this part, only three dice, with the highest scores of them are 4 (d1), 6 (d2), and 8 (d3), respectively, as well as three magic numbers will be used. The three magic numbers are defined as following:


```
NUMBER_1 = 0x38E38E38E38E3800LLU
NUMBER_2 = 0x2AAAAAAAAAAAAAAALLU
NUMBER_3 = 0x1C71C71C71C71C71LLU
```
In your turn, you have to roll three dice and combine the scores of them with three magic numbers:


```
(d1 * NUMBER_1 + d2 * NUMBER_2 + d3 * NUMBER_3) mod 0x7CE66C50E2840000LLU
```
Then you will get the steps you should take on your next move (Assume that we have such large map).


### Input
Three integers indicates the score of three dice (d1, d2, d3).
### Output
Steps the player should take.

### Example 1
#### Input
```
2 4 2
```
#### Output
```
6595658764946068362
```

### Example 2
#### Input
```
4 3 6
```
#### Output
```
1918307262625188516
```

### Example 3
#### Input
```
1 4 4
```
#### Output
```
6595658764946068588
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  

### Hint
<details>
<summary>Hint</summary>
You may not implement the formula directly, since you should consider that integer overflow may occur. Consider the equation (a + b) % c = ((a % c) + (b % c)) % c to avoid integer overflow.
</details>
