# Lec03-2
## Food Stands
<details>
<summary>Details</summary>

Level: Easy  
Tags: Loop  
Problem ID: [nV3w5ydqmBdL](https://ckj.imslab.org/#/problems/nV3w5ydqmBdL)  
</details>

### Description
Amy loves Taiwan traditional snacks in night market!

To shop efficiently, she lists the location of each food stand.

Following is her food stands cheat sheat:

`13 25 8`

Which means the positions of the food stands from the entrance are `13`, `25` and `8` meters.

Take the list as an example, Amy can start from `8`, go through `13` and finish the shopping at `25`.

Please help Amy to calculate the **shortest distance** she should walk to buy all the willing snacks.


### Input
An sequence of numbers end with -1.

Range of the number is 1 ~ 2147483647
### Output
A single number that indicates the shortest distance.

### Example 1
#### Input
```
13 25 8 -1

```
#### Output
```
17
```

### Example 2
#### Input
```
102 21 88 64 -1

```
#### Output
```
81
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
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
## Dungeons & Dragons, Part II
<details>
<summary>Details</summary>

Level: Easy  
Tags: If/else, Loop, Expression  
Problem ID: [a3JqM6nupkss](https://ckj.imslab.org/#/problems/a3JqM6nupkss)  
</details>

### Description
Remember the dragon that we fought against in Dungeons & Dragons? We have learnt how to map the score of dice to different actions, and we are going to fight with the dragon till the end. Notice that the rule has been modified, following are the updated rule:

* The sum of d1, d2 and d3 determines that who takes the turn to attack: If the sum is **odd**, the player attacks. Otherwise, the dragon attacks.
* In the player's turn to attack, there are three cases:


	+ If the score of d4, d5 and d6 are in **ascending order**, that is, d6 is greater than d5 and d5 is greater than d4, the player makes a critical hit. (25 pt)
	+ If the remainder of d4 and d5 divided by 2 are **identical**, or if the remainder of d5 and d6 divided by 2 are **identical**, the player makes a normal hit. (5 pt)
	+ Otherwise, the attack misses. (0 pt)
* In the dragon's turn to attack, there are also three cases:


	+ If the difference between d5 and d4 is **greater** than d6, the dragon makes a critical hit. (15 pt).
	+ If the sum of d4 and d5 is **not equal to** d6, the dragon makes a normal attack. (5 pt)
	+ Otherwise, the attack from the dragon misses.
* The cases must be evaluated in the above order.
* Both the player and the dragon have **100 pt** of health point at the beginning.
* The fight ends immediately once one of the player and the dragon has **no health point**.

### Input
A series of input lines with 6 integers in each line. The integers in each line indicates the score of six dice (d1, ..., d6).
### Output
The winner of the fight, either "Player wins" or "Dragon wins".

### Example 1
#### Input
```
4 4 7 3 9 1
3 1 6 9 1 18
2 4 7 4 10 7
2 6 3 6 9 10
4 2 2 7 10 14
3 1 7 8 2 5
2 1 1 7 10 7
4 2 7 3 9 19
2 2 1 1 1 12
4 5 7 7 9 6
2 6 1 8 11 14
1 4 2 9 8 20
1 5 1 10 3 3
4 4 1 3 12 5
3 6 4 3 2 2

```
#### Output
```
Player wins

```

### Example 2
#### Input
```
2 2 1 9 8 4
4 1 1 5 6 8
1 1 2 8 10 6
1 1 2 6 7 10
3 6 1 8 2 10
3 3 1 4 9 5
1 3 7 4 9 15
2 1 3 10 10 10
3 5 1 2 8 19
1 3 4 6 2 1
2 3 7 8 3 2
2 5 5 2 9 2
1 2 3 5 4 13
1 5 8 7 5 4
1 5 1 1 5 14
1 1 6 1 6 17
4 2 1 8 6 8
1 1 1 10 7 11
1 3 2 5 12 18
2 6 4 2 12 2
3 4 6 7 5 4
2 6 8 10 1 3
4 6 2 6 8 19
2 4 7 9 1 11
1 1 5 1 8 4

```
#### Output
```
Dragon wins

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
## 大頭菜富翁 Turnip Millionaire
<details>
<summary>Details</summary>

Level: Hard  
Tags: Expression, Loop  
Problem ID: [LH36b7bmUxyQ](https://ckj.imslab.org/#/problems/LH36b7bmUxyQ)  
</details>

### Description
阿玄是一個大頭菜操盤手。在他的島上，大頭菜的價格是每天浮動的，若能夠低買高賣，就能夠從中獲利。他每天都會紀錄大頭菜的菜價，希望可以從菜價的波動中找出財富密碼。但是阿玄紀錄了上百天的大頭菜價格，卻不知道怎麼利用這些資料，於是他找上了你，一位大（頭菜）數據專家。

根據你多年研究大頭菜...額我是說，大數據的經驗，你知道**循環神經網路 (Recurrent Neural Network, RNN)** 是一種很適合用來預測菜價的深度學習模型。RNN 擅長處理序列型資料，我們可以透過輸入一系列的數字當做訓練資料，訓練一個 RNN 去預測這一系列數字的下一個數字是什麼。具體而言，假設時間點 `t` 時的**輸入資料**為 `x{t}`，下一個時間點（也就是時間點 `t + 1`）的**輸出資料**為 `y{t+1}`，RNN 可以透過下列的計算，利用 `x{t}` 算出 `y{t+1}`：


```
h{t+1} = w * x{t} + u * h{t} + b
y{t+1} = f(u' * h{t+1} + b')
```
其中，`h{t}` 是第 `t` 時間點的**隱藏狀態 (hidden state)**，RNN 透過這個機制來「記憶」序列資料中的歷史資訊，並在未來時間點利用這個資訊做預測或判斷；`w`, `u`, `b`, `u'`, `b'` 是模型的參數，一旦模型訓練完成，這些參數就是一個常數；`f()` 則是**激勵函數 (activation function)**，用來調整訓練過程中的輸出數值範圍。

請特別留意 `x`, `y`, `h` 三者的下標：我們會利用第 `t` 時間點的輸入資料 `x{t}` 和第 `t` 時間點的隱藏狀態 `h{t}`，去算出第 `t + 1` 時間點的隱藏狀態 `h{t+1}`，再利用 `h{t+1}` 去算出第 `t + 1` 時間點的輸出資料 `y_{t+1}`。而通常第 `0` 個時間點時的隱藏狀態 `h{0}` 會被設定為 `0`。

你利用阿玄給你的資料訓練了一個 RNN，發現模型的參數是 `(w, u, b, u', b') = (0.9, 0.1, -51, -0.98, 153)`，而你使用的激勵函數是恆等函式 `f(x) = x`，也就是輸入等於輸出的函式。每個禮拜天阿玄都會告訴你當天的大頭菜價格，他想要知道接下來五天的大頭菜價格，用來決定要怎麼操盤。你能幫助阿玄變成大頭菜富翁嗎？

Xuan is a turnip trader. On her island, the price of turnips fluctuate everyday. If she can buy them at low price and sell them at high price, she can make millions. Everyday she records the price of turnips, and she wish she can find the key to success from the trunip price fluctuations. Now she has hundreds of turnip price record, but she doesn't know how to utilize it. So she found you, a big (turnip price) data expert.

Since you have been studying on big data for several years, you know that **Recurrent Neural Network (RNN)** is a good deep learning model for predicting turnip price. RNN is good at handling sequential data. We can use a sequence of number as training data, and train a RNN to predict the next number of the sequence. Specifically, suppose that the **input data** at time `t` is `x{t}`, and the **output data** at next tick (i.e. time `t + 1`) is `y{t+1}`. A RNN can utilize `x{t}` to calculate `y{t+1}` by the following formula:


```
h{t+1} = w * x{t} + u * h{t} + b
y{t+1} = f(u' * h{t+1} + b')
```
Here, `h{t}` is the **hidden state** of the model at time `t`. RNN uses this mechanism to "remembers" historical information, and then utilizes it to predict the future. `w`, `u`, `b`, `u'`, `b'` are the parameters of the model. Once the model training process is finished, these parameters are constants. And `f()` is called **activation function**. It is used to adjust the numerical range of output value in the training process.

Please be careful with the subscription of `x`, `y` and `h`: we use the input data at time `t` (`x{t}`) and the hidden state at time `t` (`h{t}`) to calculate the hidden state of time `t + 1` (`h{t+1}`), and then use `h{t+1}` to calculate the output of time `t + 1` (`y{t+1}`). And at time `0`, the hidden state `h{0}` is usually set to `0`.

You used the data Xuan gave to you to train a RNN, and you found that the parameters of the model are `(w, u, b, u', b') = (0.9, 0.1, -51, -0.98, 153)`, with the activation function being identity function `f(x) = x`. Every Sunday, Xuan comes to tell you the price of turnips on that day, and she want to know the turnips price on the following 5 days, so she can determine when to trade them. Can you help Xuan become a turnip millionaire?


### Input
一個浮點數 x，代表禮拜天的大頭菜價格。 50 <= x <= 150.

A floating point number x representing the turnips price on Sunday. 50 <= x <= 150.
### Output
五個浮點數，輸出到小數點後 1 位，代表接下來五天的大頭菜價格。每個數字之間用一個空白隔開。

Five floating point numbers printed to 1 decimal place, representing the turnips price on the following 5 days. Separate each number with a space.

### Example 1
#### Input
```
97.5
```
#### Output
```
117.0 96.2 112.5 99.7 109.7 
```

### Example 2
#### Input
```
115.5
```
#### Output
```
101.1 108.6 102.7 107.3 103.7 
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  

### Hint
<details>
<summary>Hint</summary>
如果禮拜天的價格可以預測禮拜一的價格，那禮拜二的價格要用什麼來預測呢？ The price on Sunday can be used to predict the price on Monday. Then what should we use if we want to predict the price on Tuesday?
</details>
