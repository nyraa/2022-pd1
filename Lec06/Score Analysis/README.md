## Score Analysis
<details>
<summary>Details</summary>

Level: Easy  
Tags: Function, Loop  
Problem ID: [ISerbP0i5WES](https://ckj.imslab.org/#/problems/ISerbP0i5WES)  
</details>

### Description
After the midterm exam, TAs want to analyze the number of students lying in different intervals. An interval is denoted as `[B, A]`, TAs want to find out the number of students whose score is **lower than** `B` (`score < B`) , the number of students whose score is **grater than or equal to** `B` **but lower than** `A` (`B <= score < A`), and the number of students whose score is **grater than or eqaul to** `A` (`score >= A`).

Now, given the scores of each student, and different `[B, A]` intervals, please help TAs do the statistics.


### Input
The first line is an integer N (N < 1024), indicating the number of students.
The following N lines indicates the score of each student.
The next line is an integer T, indicating the number of different [B, A] intervals.
And the following T lines contain 2 integers, which indicates the value of B and A (B ≤ A).
### Output
For each [B, A] interval, print out 3 interger, which represents the number of students whose score is lower than B (score < B) , the number of students whose score is grater than or equal to B but lower than A (B <= score < A), and the number of students whose score is grater than or eqaul to A (score >= A), respectively.

### Example 1
#### Input
```
10
100
90
80
70
60
50
40
30
20
10
3
60 90
45 65
20 80

```
#### Output
```
5 3 2
4 2 4
1 6 3

```

### Example 2
#### Input
```
5
19
13
0
25
4
1
9 79

```
#### Output
```
2 3 0

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
