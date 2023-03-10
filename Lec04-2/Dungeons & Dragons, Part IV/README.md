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
