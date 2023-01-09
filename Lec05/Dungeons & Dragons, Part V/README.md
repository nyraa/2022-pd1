## Dungeons & Dragons, Part V
<details>
<summary>Details</summary>

Level: Medium  
Tags: Format I/O, Assignments, Expression, If/else, Loop, Array  
Problem ID: [PHQ_KwX4mM70](https://ckj.imslab.org/#/problems/PHQ_KwX4mM70)  
</details>

### Description
Walk through the gate that we have opened in the last part, we find out that a treasure box stays right at the center of the room. The treasure box is locked by a [combination lock](https://en.wikipedia.org/wiki/Combination_lock) with six rotating discs (labeled as 1st to 6th disc) on it, and there are 10 numbers, from 0 to 9, on each rotating discs.

The correct password should be entered to unlock the treasure box, and the correct password could be determined by following steps: First, set all rotating discs to 0. Next, roll two dices , d1 and d2 (max scores are 6 and 8, respectively), for 75 times. In each round, the (d1)th disc should be rotated down for one click (increase the number by 1) if the score of d2 is odd, up for one click (decrease the number by 1), otherwise.

Notice that number becomes 0 if you rotate down the disc that has number 9 on it, similarly, the number becomes 9 if you rotate up a disc that has number 0.

Finally, the numbers are the password should be entered.


### Input
75 lines of input with 2 integers d1 and d2 in each line. 1 <= d1 <= 6, 1 <= d2 <= 8.
### Output
The password, the digits are seperated by a space.

### Example 1
#### Input
```
1 6
4 2
3 5
1 5
5 3
4 6
6 3
1 1
5 1
4 2
6 3
2 1
3 4
1 1
3 7
2 1
4 3
1 6
2 4
3 5
3 1
5 4
3 2
3 7
6 5
4 6
4 8
1 1
1 2
2 1
3 5
3 4
5 3
2 5
1 2
2 4
6 3
1 4
2 4
4 7
4 2
1 7
1 2
3 3
4 7
1 3
6 4
2 1
3 6
1 4
3 6
4 1
6 6
5 4
4 6
5 1
5 6
1 7
1 6
2 1
1 4
6 7
3 8
1 5
2 4
3 4
2 7
4 8
4 7
4 5
5 5
6 2
2 3
4 8
1 1

```
#### Output
```
0 4 0 7 2 2 
```

### Example 2
#### Input
```
1 2
1 5
2 6
2 4
5 1
4 1
6 7
6 1
2 8
3 3
6 1
6 7
5 8
4 8
6 2
2 2
4 4
5 6
4 5
5 2
5 8
2 4
1 2
1 7
6 2
6 7
5 7
3 3
5 4
3 8
5 8
5 8
6 6
2 3
6 7
6 6
6 6
4 4
6 6
1 8
3 3
6 8
6 3
4 8
5 4
3 3
2 7
6 5
1 7
5 5
4 3
2 3
2 3
6 7
1 7
2 6
3 5
1 3
4 7
4 5
3 8
6 5
5 8
1 1
3 8
6 3
3 6
1 1
2 2
3 8
6 6
6 2
6 2
6 8
4 5

```
#### Output
```
4 7 0 2 4 0 
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
