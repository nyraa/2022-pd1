## Coffee Shop
<details>
<summary>Details</summary>

Level: Easy  
Tags: Switch  
Problem ID: [I6A521tIWYJH](https://ckj.imslab.org/#/problems/I6A521tIWYJH)  
</details>

### Description
Welcome to PD1 Coffee Shop! We provide 4 types of coffee:

1. AMERICANO $ 110
2. LATTE $ 150
3. CAPPUCCINO $135
4. MOCHA $ 145

  
Please write a program to calculate **how much should the client pay**.

Be aware of those troublesome customers！

Some of them would ask for the coffee that is **not presented in the menu**.


### Input
Two integers i, j separated by a space.
Integer i indicates the type of the coffee on the menu (e.g. 1 is AMERICANO, 2 is LATTE, and so on), with range 1-100.
Integer j indicates how many cups of coffee that the client wants, with range 1-20.
### Output
If the number of coffee is on the menu, you need to print the total price in the following format: "The total price is <price> dollars!", where <price> is the amount of money that the client should pay.
If not, you need to print "Wait, what?".

### Example 1
#### Input
```
4 10

```
#### Output
```
The total price is 1450 dollars!

```

### Example 2
#### Input
```
3 19

```
#### Output
```
The total price is 2565 dollars!

```

### Example 3
#### Input
```
34 18

```
#### Output
```
Wait, what?

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
