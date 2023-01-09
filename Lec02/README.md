# Lec02
## Swap Two Variables
<details>
<summary>Details</summary>

Level: Easy  
Tags: Assignments  
Problem ID: [UGWuibzTkCcr](https://ckj.imslab.org/#/problems/UGWuibzTkCcr)  
</details>

### Description
Read two integers and store them in variables `a` and `b`.  
Swap the values in `a` and `b` and print them out .


### Input
Two integers split by a space.
### Output
Two integers split by a space.

### Example 1
#### Input
```
20 21
```
#### Output
```
21 20
```

### Example 2
#### Input
```
2147483647 -2147483648
```
#### Output
```
-2147483648 2147483647
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 10000 KB.  
## Polynomial Calculation
<details>
<summary>Details</summary>

Level: Easy  
Tags: Format I/O, Expression  
Problem ID: [575L5XI8hDFa](https://ckj.imslab.org/#/problems/575L5XI8hDFa)  
</details>

### Description
Read a floating-point number for `x` and calculate the value of the following polynomial:


> 𝟕𝐱⁴ - 𝟖𝐱³ - 𝐱² + 𝟔𝐱 - 𝟐𝟐
> 
> 


### Input
A floating-point number to read for x.
### Output
The result should be displayed with one digit after the decimal point.

### Example 1
#### Input
```
5.5
```
#### Output
```
5055.2
```

### Example 2
#### Input
```
0
```
#### Output
```
-22.0
```

### Limits
Your program needs to finish task in 5 seconds.  
Your program can only use memory less than 65536 KB.  
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
## 身體質量指數 Body Mass Index
<details>
<summary>Details</summary>

Level: Easy  
Tags: Assignments, Expression, Format I/O  
Problem ID: [tDEI6aoYmBL5](https://ckj.imslab.org/#/problems/tDEI6aoYmBL5)  
</details>

### Description
**Body mass index (BMI)** is a measure of body fat based on height and weight that applies to adult men and women. The formula for BMI is:

`BMI = W / H^2`

where `W` is weight in **kilograms**, and `H` is height in **meters**.

John is `x` centimeters tall, and weigh `y` kilograms. Please calculate and output his BMI.

身體質量指數 (Body mass index, BMI) 是一種基於身高和體重，用來評估一個成年人體重是否標準的指標。BMI 的計算公式如下：

`BMI = W / H^2`

其中，W 是體重，單位為**公斤**、H 是身高，單位是**公尺**。

某甲身高 `x` 公分，體重 `y` 公斤，請計算並輸出他的 BMI。


### Input
Two integers `x` and `y`, representing John's height (in cm) and weight (in kg) respectively, where 100 <= x <= 200, 0 <= y <= 100.

兩個整數 x 和 y，分別代表某甲的身高（公分）和體重（公斤），其中 100 <= x <= 200，而 0 <= y <= 100。
### Output
A single precision floating point number (float), representing John's BMI. Please round the result to 6 decimal places.
一個單精度浮點數，代表某甲的 BMI。請輸出到小數點後六位。

### Example 1
#### Input
```
167 77
```
#### Output
```
27.609453
```

### Example 2
#### Input
```
181 80
```
#### Output
```
24.419281
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
