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
