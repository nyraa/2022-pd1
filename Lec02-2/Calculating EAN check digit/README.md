## Calculating EAN check digit
<details>
<summary>Details</summary>

Level: Easy  
Tags: Assignments, Expression, Format I/O  
Problem ID: [i1DZM6oVaRqf](https://ckj.imslab.org/#/problems/i1DZM6oVaRqf)  
</details>

### Description
European countries use a 12-digit code called European Article Number (EAN) for each product. Each EAN ends with a check digit, which is calculated by the following rules:

1. Sum up the second, fourth, sixth, eighth, tenth, and twelfth digits, and put the result in `a`.
2. Sum up the first, third, fifth, seventh, ninth, and eleventh digits, and put the result in `b`.
3. Multiply `a` by 3 and add it to `b`, and put the result in `x`.
4. Subtract 1 from `x`, and put the result in `y`.
5. Compute the remainder of `y` divided by 10, and put the result in `z`.
6. Subtract `z` from 9.

Write a program that reads the first 12 digits of an EAN, and then displays the calculated check digit.


### Input
A number with 12 digits.
### Output
An 1-digit check digit.

### Example 1
#### Input
```
452167458643
```
#### Output
```
1
```

### Example 2
#### Input
```
158245984678
```
#### Output
```
5
```

### Limits
Your program needs to finish task in 5 seconds.  
Your program can only use memory less than 65536 KB.  
