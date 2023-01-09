## 畫出直角三角形 Draw right triangle
<details>
<summary>Details</summary>

Level: Medium  
Tags: Loop, Format I/O  
Problem ID: [bn2Ngf1OBeSv](https://ckj.imslab.org/#/problems/bn2Ngf1OBeSv)  
</details>

### Description
輸入三角形直角的位置和層數後，程式可以印出對應的三角形。

After entering the position of the right angle of the triangle and the number of layers, the program can print out the corresponding triangle.

直角三角形有四種畫法，分別是：直角在左上、直角在左下、直角在右上、直角在右下。

There are four ways to draw a right triangle: right angle at the top left, right angle at the bottom left, right angle at the top right, and right angle at the bottom right.

第一個輸入的數值代表直角的位置，數值與位置的對應如下所示。第二個則為三角形的層數。

* "1" 代表在左上
* "2" 代表在左下
* "3" 代表在右上
* "4" 代表在右下

The first value entered represents the position of the right angle. The mapping of values to positions is shown below. The second one is the number of levels of the triangle.

* "1" for upper left
* "2" for lower left
* "3" for upper right
* "4" for bottom right


### Input
兩個整數，i 和 j 之間有一個空格。
Two integers i and j are separated by a space.

整數 i 表示直角的位置，範圍介於 1-4；整數 j 表示三角形的層數，範圍介於 1-100。
Integer i indicates the right angle position, with range 1-4; integer j indicates the number of layers of the triangle, with range 1-100.


### Output
根據輸入的條件，以 “*” 印出對應的三角形。
According to the input conditions, the corresponding triangle is printed with "*".

注意：直角在左上與左下時，印完 “*” 後，不需要再印空白。 
Notice: When the right angle is on the top left and bottom left, there is no need to print a blank after the "*" is printed.

### Example 1
#### Input
```
1 3
```
#### Output
```
***
** 
*
```

### Example 2
#### Input
```
2 3
```
#### Output
```
*
**
***
```

### Example 3
#### Input
```
3 3
```
#### Output
```
***
 **
  *
```

### Example 4
#### Input
```
4 3
```
#### Output
```
  *
 **
***
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
