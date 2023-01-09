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
