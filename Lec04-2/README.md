# Lec04-2
## Dungeons & Dragons, Part III
<details>
<summary>Details</summary>

Level: Medium  
Tags: Format I/O, Assignments, Expression, Basic Types  
Problem ID: [R44CpW_fI5il](https://ckj.imslab.org/#/problems/R44CpW_fI5il)  
</details>

### Description
In the previous part, we have beat the dragon, and it is time to move on. In this part, we are about to travel through a desert.

In this part, only three dice, with the highest scores of them are 4 (d1), 6 (d2), and 8 (d3), respectively, as well as three magic numbers will be used. The three magic numbers are defined as following:


```
NUMBER_1 = 0x38E38E38E38E3800LLU
NUMBER_2 = 0x2AAAAAAAAAAAAAAALLU
NUMBER_3 = 0x1C71C71C71C71C71LLU
```
In your turn, you have to roll three dice and combine the scores of them with three magic numbers:


```
(d1 * NUMBER_1 + d2 * NUMBER_2 + d3 * NUMBER_3) mod 0x7CE66C50E2840000LLU
```
Then you will get the steps you should take on your next move (Assume that we have such large map).


### Input
Three integers indicates the score of three dice (d1, d2, d3).
### Output
Steps the player should take.

### Example 1
#### Input
```
2 4 2
```
#### Output
```
6595658764946068362
```

### Example 2
#### Input
```
4 3 6
```
#### Output
```
1918307262625188516
```

### Example 3
#### Input
```
1 4 4
```
#### Output
```
6595658764946068588
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  

### Hint
<details>
<summary>Hint</summary>
You may not implement the formula directly, since you should consider that integer overflow may occur. Consider the equation (a + b) % c = ((a % c) + (b % c)) % c to avoid integer overflow.
</details>
## Dungeons & Dragons, Part IV
<details>
<summary>Details</summary>

Level: Medium  
Tags: Format I/O, Expression, Bitwise Operations  
Problem ID: [HbiGT0bICsuV](https://ckj.imslab.org/#/problems/HbiGT0bICsuV)  
</details>

### Description
After you flew across the such huge map, a locked gate appears in your sight. The lock is so heavy that you are not able to simply destroy it, but you suddenly notice that there is paper with hints for unlocking the gate stuck up on the gate. To unlock the gate, you will have to roll 4 4-face dices (d1 ... d4) and process a 32-bit unsigned integer N with the following instructions:

1. Define a 32-bit unsigned integer called `temp`.
2. Xor the (d1)th byte of N with the (d2)th byte of N and store the result at the 1st byte of `temp`.
3. And the (d2)th byte of N with the (d3)th byte of N and store the result at the 2nd byte of `temp`.
4. Or the (d3)th byte of N with the (d1) the byte of N and store the result at the 3rd byte of `temp`.
5. Toggle the (d4)th byte of N and place the result at the 4th byte of `temp`.
6. Rotate the `temp` right by (d1 + d2 + d3 + d4) bits.
7. Xor the upper 16 bits of `temp` with the lower 16 bits of `temp` to form a 16-bit unsigned integer.

And the result (in decimal) will be the password of the gate.

**Notice**: The bytes of N and `temp` are labeled 1 to 4 from MSB to LSB, for example:


```
0x01020304:
00000001 | 00000010 | 00000011 | 00000100
1st byte | 2nd byte | 3rd byte | 4th byte
```


---

Let's have a look on the first sample:


```
N: 82564876 = 0x04EBD70C
d1: 4, d2: 3, d3: 2, d4: 1

Step 1:
    temp: 0x00000000 (could be any initial value, does not matter)

Step 2:
    4th byte of N: 0x0C, 3rd byte of N: 0xD7
    [0x0C (00001100)] xor [0xD7 (11010111)] = [0xDB (11011011)]
    temp: 0xDB000000

Step 3:
    3rd byte of N: 0xD7, 2nd byte of N: 0xEB
    [0xD7 (11010111)] and [0xEB (11101011)] = [0xC3 (11000011)]
    temp: 0xDBC30000

Step 4:
    2nd byte of N: 0xEB, 4th byte of N: 0x0C
    [0xEB (11101011)] or [0x0C (00001100)] = [0xEF (11101111)]
    temp: 0xDBC3EF00

Step 5:
    1st byte of N: 0x04
    Toggle [0x04 (00000100)] = [0xFB (11111011)]
    temp: 0xDBC3EFFB

Step 6:
    d1 + d2 + d3 + d4 = 10
    Rotate [0xDBC3EFFB (11011011 11000011 11101111 11111011) right 10 bits
        = [0xFEF6F0FB (11111110 11110110 11110000 11111011)

Step 7:
    Upper 16 bits of temp: 0xFEF6, Lower 16 bits of temp: 0xF0FB
    [0xFEF6 (11111110 11110110)] xor [0xF0FB (11110000 11111011)]
        = [0x0E0D (00001110 00001101)] = 3597

Result: 3597
```

### Input
The first line contains a 32-bit unsgined integer.

The second line are 4 numbers indicate the score of 4 dices.
### Output
The password of the gate.

### Example 1
#### Input
```
82564876
4 3 2 1
```
#### Output
```
3597
```

### Example 2
#### Input
```
1790930214
4 4 3 4
```
#### Output
```
57338
```

### Example 3
#### Input
```
4247917581
3 3 4 4
```
#### Output
```
30680
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  

### Hint
<details>
<summary>Hint</summary>
You may print the value in hexdecimal format to make sure that you have the right operations step by step. To rotate an unsigned integer right,  just move the rightmost bit to the left, e.g. 0101 becomes 1010 after rotate right for one bit.
</details>
## IPv4
<details>
<summary>Details</summary>

Level: Easy  
Tags: Format I/O, Bitwise Operations, Basic Types  
Problem ID: [tYhS8h3_X0mv](https://ckj.imslab.org/#/problems/tYhS8h3_X0mv)  
</details>

### Description
**網際網路通訊協定第四版 (Internet Protocol version 4, IPv4)**，是網際網路發展過程中第一個被廣泛佈署與使用的通訊協定。IPv4 定義了網路上的裝置如何傳遞資料給彼此，是串起整個網路世界最重要的一套協定。

就像郵差要送信到你家時，必須事先知道你家的地址一樣，網際網路上的資料在不同電腦之間傳輸時，也必須要知道送信人跟收信人彼此的地址是多少。根據 IPv4 的規範，每一台要連上網路的裝置都必須要有一個獨一無二的地址，稱作 **IP 位址**。IP 位址的長度為 **32 位元 (bits)**，可以表示成一個 **8 位數的十六進制數字**。但是為了人類閱讀方便，我們通常會把這 32 個位元看成 **4 個位元組 (bytes)**，再把每一個位元組用十進制表示，變成**點分十進制**的格式。例如：每台電腦都有的本機環回位址為：


```
01111111 00000000 00000000 00000001 (7F000001)
```
但我們通常不這樣寫，我們習慣寫成：


```
127.0.0.1
```
因為 `01111111` 的十進制表示法是 `127`，`00000000` 是 `0`，`00000001` 則是 `1`，因此 `01111111 00000000 00000000 00000001` 才會被寫成 `127.0.0.1`。

現在，給你一個十六進制表示法的 IP 位址，請你將它轉換成我們習慣的點分十進制表示法。

**Internet Protocol version 4 (IPv4)** is one of the most important protocols connecting the whole cyber world. It defines a set of rules of how computers on the Internet communicate with each other.

Just like a mailman needs to know the address of your house to deliver your mail, computers on the Internet need to know the address of others so they can transmit data. According to IPv4, every computer that want to connect to other computers requires an unique address, as known as **IP address**. An IP address is **a 32 bits data**, which can be represented in **an 8 digit hexadecimal number**. But for better human reliability, they are most often written in **dot-decimal notation**, which can be obtained by separating the 32 bits address into **4 octets (bytes)**, converting each octet to a decimal number, and concatenating these decimal numbers with periods. For example, the localhost of a computer is:


```
01111111 00000000 00000000 00000001 (7F000001)
```
But it is more common to write it as


```
127.0.0.1
```
Since `01111111` is `127` in decimal, `00000000` is `0`, and `00000001` is `1`, the address `01111111 00000000 00000000 00000001` can be written as `127.0.0.1`.

Now, given an IP address in hexadecimal format, please convert them into the dot-decimal notation.


### Input
一個 8 位數的十六進制數字。

An 8 digit hexadecimal number.
### Output
一個以點分十進制表示的 IP 位址。

An IP address in dot-decimal notation.

### Example 1
#### Input
```
7f000001
```
#### Output
```
127.0.0.1
```

### Example 2
#### Input
```
c0a8d097
```
#### Output
```
192.168.208.151
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
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
