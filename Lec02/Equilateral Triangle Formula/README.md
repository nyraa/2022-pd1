## Equilateral Triangle Formula
<details>
<summary>Details</summary>

Level: Medium  
Tags: Format I/O  
Problem ID: [6kQ3LFov9alQ](https://ckj.imslab.org/#/problems/6kQ3LFov9alQ)  
</details>

### Description
Given the length of the side of an equilateral triangle(正三角形), Heron wants to determine the area of the equilateral triangle.

He came up with the following formula, where `a` is the length of the side and `A` is the area.

![](img/45d623c348c56d5a83513a788ea5e9f8)



With √3 defined as `1.7320508f`, please help Heron write a program to solve this problem.


### Input
A positive integer `a` representing the length of the side of the equilateral triangle, where 0 < a <= 200.
### Output
A single precision floating point number (float) representing the area of the triangle. Please round the result to three decimal places.

### Example 1
#### Input
```
3
```
#### Output
```
3.897
```

### Example 2
#### Input
```
15
```
#### Output
```
97.428
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 10000 KB.  

### Hint
<details>
<summary>Hint</summary>
You can use macro to define the constant value of √3. Or if you are an expert, feel free to just use the math.h library, and make sure you are using the function returning float type :) 
</details>
