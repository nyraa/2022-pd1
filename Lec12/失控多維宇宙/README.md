## 失控多維宇宙
<details>
<summary>Details</summary>

Level: Easy  
Tags: Malloc  
Problem ID: [eEnK4Y42J7lU](https://ckj.imslab.org/#/problems/eEnK4Y42J7lU)  
</details>

### Description
就在 V 導遊幫電資星人寫完計算最高膜拜量的程式後，今天他來到了一個宇宙折躍點前面，導遊一靠近折躍點周圍的空間開始失控，於是她發現當前所在的維度從原本的三維變成了五維，於是人腦從可以簡單思考的二維，變成能簡單思考四維的狀態。

於是 V 導遊突發奇想將原先對二維座標平面的定義做推廣，變成四維的操作，簡單來說，目前有一個指向四維陣列的指標，請寫出一個程式幫助 V 導遊將該陣列初始化。

請使用 `malloc` 實作 `init` 函式初始化四維陣列。



---

The space around the jumping point started to go out of control, so she found that the dimension she was in had changed from the original three dimensions to five dimensions.

So V-Guide has a sudden idea to extend the original definition of two-dimensional coordinate plane to four-dimensional operation.

Please use the `malloc` `init` function to initialize the 4-dimensional array.


### Input
有一個正整數 N（1 ≦ N ≦ 10^5），代表 Magic Number。
### Output
有一個正整數，代表 Magic Number 乘上 2 的 4 次方。

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include<stdio.h>
#include<stdlib.h>
void init(int**** ptr);

int main(){
    int ****ptr = malloc(sizeof(int***)*2);
    init(ptr);
    int magic_number;
    long long magic_sum = 0;
    scanf("%d", &magic_number);
    for(int _ = 0; _<2; _++)
        for(int __ = 0; __<2; __++)
            for(int ___ = 0; ___<2; ___++)
                for(int ____ = 0; ____<2; ____++)
                    ptr[_][__][___][____] = magic_number, magic_sum += ptr[_][__][___][____];
    printf("%lld", magic_sum);
}
```
</details>


### Example 1
#### Input
```
3
```
#### Output
```
48
```

### Example 2
#### Input
```
5
```
#### Output
```
80
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  

### Hint
<details>
<summary>Hint</summary>
這支程式看似很複雜，但其實只是將輸入的值乘上 16 而已
</details>
