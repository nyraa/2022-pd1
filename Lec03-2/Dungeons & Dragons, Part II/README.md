## Dungeons & Dragons, Part II
<details>
<summary>Details</summary>

Level: Easy  
Tags: If/else, Loop, Expression  
Problem ID: [a3JqM6nupkss](https://ckj.imslab.org/#/problems/a3JqM6nupkss)  
</details>

### Description
Remember the dragon that we fought against in Dungeons & Dragons? We have learnt how to map the score of dice to different actions, and we are going to fight with the dragon till the end. Notice that the rule has been modified, following are the updated rule:

* The sum of d1, d2 and d3 determines that who takes the turn to attack: If the sum is **odd**, the player attacks. Otherwise, the dragon attacks.
* In the player's turn to attack, there are three cases:


	+ If the score of d4, d5 and d6 are in **ascending order**, that is, d6 is greater than d5 and d5 is greater than d4, the player makes a critical hit. (25 pt)
	+ If the remainder of d4 and d5 divided by 2 are **identical**, or if the remainder of d5 and d6 divided by 2 are **identical**, the player makes a normal hit. (5 pt)
	+ Otherwise, the attack misses. (0 pt)
* In the dragon's turn to attack, there are also three cases:


	+ If the difference between d5 and d4 is **greater** than d6, the dragon makes a critical hit. (15 pt).
	+ If the sum of d4 and d5 is **not equal to** d6, the dragon makes a normal attack. (5 pt)
	+ Otherwise, the attack from the dragon misses.
* The cases must be evaluated in the above order.
* Both the player and the dragon have **100 pt** of health point at the beginning.
* The fight ends immediately once one of the player and the dragon has **no health point**.

### Input
A series of input lines with 6 integers in each line. The integers in each line indicates the score of six dice (d1, ..., d6).
### Output
The winner of the fight, either "Player wins" or "Dragon wins".

### Example 1
#### Input
```
4 4 7 3 9 1
3 1 6 9 1 18
2 4 7 4 10 7
2 6 3 6 9 10
4 2 2 7 10 14
3 1 7 8 2 5
2 1 1 7 10 7
4 2 7 3 9 19
2 2 1 1 1 12
4 5 7 7 9 6
2 6 1 8 11 14
1 4 2 9 8 20
1 5 1 10 3 3
4 4 1 3 12 5
3 6 4 3 2 2

```
#### Output
```
Player wins

```

### Example 2
#### Input
```
2 2 1 9 8 4
4 1 1 5 6 8
1 1 2 8 10 6
1 1 2 6 7 10
3 6 1 8 2 10
3 3 1 4 9 5
1 3 7 4 9 15
2 1 3 10 10 10
3 5 1 2 8 19
1 3 4 6 2 1
2 3 7 8 3 2
2 5 5 2 9 2
1 2 3 5 4 13
1 5 8 7 5 4
1 5 1 1 5 14
1 1 6 1 6 17
4 2 1 8 6 8
1 1 1 10 7 11
1 3 2 5 12 18
2 6 4 2 12 2
3 4 6 7 5 4
2 6 8 10 1 3
4 6 2 6 8 19
2 4 7 9 1 11
1 1 5 1 8 4

```
#### Output
```
Dragon wins

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
