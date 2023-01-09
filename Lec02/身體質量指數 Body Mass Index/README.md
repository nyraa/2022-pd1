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
