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


> ππ±β΄ - ππ±Β³ - π±Β² + ππ± - ππ
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
Given the length of the side of an equilateral triangle(ζ­£δΈθ§ε½’), Heron wants to determine the area of the equilateral triangle.

He came up with the following formula, where `a` is the length of the side and `A` is the area.

![](img/45d623c348c56d5a83513a788ea5e9f8)



With β3 defined as `1.7320508f`, please help Heron write a program to solve this problem.


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
You can use macro to define the constant value of β3. Or if you are an expert, feel free to just use the math.h library, and make sure you are using the function returning float type :) 
</details>
## θΊ«ι«θ³ͺιζζΈ Body Mass Index
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

θΊ«ι«θ³ͺιζζΈ (Body mass index, BMI) ζ―δΈη¨?εΊζΌθΊ«ι«ει«ιοΌη¨δΎθ©δΌ°δΈεζεΉ΄δΊΊι«ιζ―ε¦ζ¨ζΊηζζ¨γBMI ηθ¨η?ε¬εΌε¦δΈοΌ

`BMI = W / H^2`

εΆδΈ­οΌW ζ―ι«ιοΌε?δ½ηΊ**ε¬ζ€**γH ζ―θΊ«ι«οΌε?δ½ζ―**ε¬ε°Ί**γ

ζη²θΊ«ι« `x` ε¬εοΌι«ι `y` ε¬ζ€οΌθ«θ¨η?δΈ¦θΌΈεΊδ»η BMIγ


### Input
Two integers `x` and `y`, representing John's height (in cm) and weight (in kg) respectively, where 100 <= x <= 200, 0 <= y <= 100.

ε©εζ΄ζΈ x ε yοΌεε₯δ»£θ‘¨ζη²ηθΊ«ι«οΌε¬εοΌει«ιοΌε¬ζ€οΌοΌεΆδΈ­ 100 <= x <= 200οΌθ 0 <= y <= 100γ
### Output
A single precision floating point number (float), representing John's BMI. Please round the result to 6 decimal places.
δΈεε?η²ΎεΊ¦ζ΅?ι»ζΈοΌδ»£θ‘¨ζη²η BMIγθ«θΌΈεΊε°ε°ζΈι»εΎε­δ½γ

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
