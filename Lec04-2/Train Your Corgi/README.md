## Train Your Corgi
<details>
<summary>Details</summary>

Level: Easy  
Tags: Basic Types, Loop  
Problem ID: [9kNsR2aTCmRr](https://ckj.imslab.org/#/problems/9kNsR2aTCmRr)  
</details>

### Description
小智想成為神奇寶貝大師，他的第一隻神奇寶貝是神奇柯基。小智想讓他的柯基學會 5 個指令。每一隻神奇寶貝都有兩個個體值，**體力值**跟**服從度**，它們的初始值分別是 `INIT_STRENGTH` 和 `INIT_OBEDIENCE`。隨著訓練的進行，這些個體值會有下列的變化：

* 當小智餵食柯基時，會增加 `STRENGTH_EAT` 量的體力值，但會降低 `OBEDIENCE_EAT` 的服從度
* 當柯基接受訓練時，會增加 `OBEDIENCE_TRAIN` 量的服從度，並減少 `STRENGTH_TRAIN` 的體力值

當服從度不小於 `LEARN_OBEDIENCE`，並且體力值不大於 `LEARN_STRENGTH` 時，就可以成功訓練一個指令。這時候柯基的體力值不變，但服從度會變為 `INIT_OBEDIENCE`。

小智規劃了一系列的訓練活動，請你幫小智評估這套訓練活動最後能不能讓柯基學會 5 個指令。

**注意**：上面提到的常數值已經由 marco 定義，而體力值和服從度的資料型別也已經事先定義為 `Strength` 和 `Obedience`。請利用這些 Marco 和自訂資料型別解題。



---

Ash wants to become a Pokémon master. His first Pokémon is a corgi. Ash wants his corgi to learn 5 commands. Each Pokémon has two individual value: **strength** and **obedience**, whose initial value is `INIT_STRENGTH` and `INIT_OBEDIENCE` respectively. With training, the individual values will change as follows:

* When Ash feeds corgi, the strength will increase by `STRENGTH_EAT`, but the obedience will decrease by `OBEDIENCE_EAT`
* When Ash trains corgi, the obedience will increase by `OBEDIENCE_TRAIN`, but the strength will decrease by `STRENGTH_TRAIN`

Corgi can successfully learn a command when the obedience is not less than`LEARN_OBEDIENCE` and the strength is no greater than`LEARN_STRENGTH`. When a command is learned, the strength will remain unchanged and the obedience will become `INIT_OBEDIENCE`.

Ash planned a training routine to train his corgi. Please help Ash evaluate whether or not this training routine can make his corgi learn 5 commands.

**Notice**: All the constants mentioned above are defined as macros, and the data type of strength and obedience are also defined as `Strength` and `Obedience` using `typedef`. Please use these macros and customized data type to solve the problem.


### Input
一串字串，由 '\n' 結尾，其中
 當輸入字元為 'e' : 餵食。
 當輸入字元為 't' : 訓練。
 當輸入字元為 '\n' 時：結束。

A character string ending with '\n'.
When the input character is 'e': feed.
When the input character is 't': train.
When the input character is '\n': exit program.
### Output
可以成功訓練五個指令時，請輸出 "Yes"，否則輸出 "No"。

Output "Yes" when successfully trained. Otherwise output "No".

### Loader Code
<details>
<summary>Loader Code</summary>

```c
typedef int Strength;
typedef int Obedience;

#define INIT_STRENGTH 50
#define INIT_OBEDIENCE 20

#define STRENGTH_EAT 5
#define OBEDIENCE_EAT 2

#define STRENGTH_TRAIN 4
#define OBEDIENCE_TRAIN 5

#define LEARN_STRENGTH 55
#define LEARN_OBEDIENCE 28
```
</details>


### Example 1
#### Input
```
eeeeettttteeetttteetttttettteeeet

```
#### Output
```
Yes

```

### Example 2
#### Input
```
ettteetttetttettet

```
#### Output
```
Yes

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
