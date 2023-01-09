## Grouping
<details>
<summary>Details</summary>

Level: Easy  
Tags: Assignments, Format I/O, Expression  
Problem ID: [elNy-esHjcS-](https://ckj.imslab.org/#/problems/elNy-esHjcS-)  
</details>

### Description
Ms. Mary has been struggling with grouping lately. She taught many classes, each with a different number of students. For different classes, she wants to assign different numbers of students to all groups. Ms. Mary wants an excellent PD1 student to write a program to solve her problem.

She wants to enter the class size and group size into the program. After dividing the students evenly into groups (i.e., each group has the same number of students), she wants to know how many students are in each group and how many students are left behind.

瑪莉老師最近正在煩惱如何分組，她任教很多班級，每個班級的人數都不盡相同。而不同課程的組別，則想分配不同人數。瑪莉老師希望 PD1 的學生寫一個程式來解決她的困擾。

她希望輸入班級人數和分組數量到程式中。將學生平分到每組的情況下（即每組人數皆相同），知道每組會有多少學生，以及有幾個學生沒有被分到組。


### Input
Two integers i and j are separated by a space.
Integer i indicates how many students in a class, with range 50-200, and integer j indicates how many groups to divide in this class, with range 2-25.
兩個整數，i 和 j 之間有一個空格。
i 表示有多少學生，範圍是 50-200；j 表示要分幾組，範圍是 2-25。
### Output
The program prints the number of students in each group, and the number of remaining students without groups, separated by a blank space.
程式會印出每組的人數，以及沒有組別的人數，兩者以空白分隔。

### Example 1
#### Input
```
200 25
```
#### Output
```
8 0
```

### Example 2
#### Input
```
50 3
```
#### Output
```
16 2
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
