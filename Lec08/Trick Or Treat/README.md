## Trick Or Treat
<details>
<summary>Details</summary>

Level: Medium  
Tags: Recursive  
Problem ID: [_NfiMSsm_48H](https://ckj.imslab.org/#/problems/_NfiMSsm_48H)  
</details>

### Description
萬聖節到了，麥克想要去社區中一條街上要糖果，但這條街的上的家庭們有一個奇怪的規定，就是當你連續要了兩家的糖果，這條街的人會覺得你很貪心，所以他們會收回你全部的糖果。為了得到最多的糖果，麥克想要寫一個程式幫他計算可以得到的最多的糖果數量。

他跟其他去過街上要糖果的同伴口中得知街上每一個家庭會給的糖果數量，並把他存在全域變數`array` 陣列。請完成函式 `maxChandy` 讓麥可去計算出可以拿到最多的糖果數量。



---

Halloween is coming, Mike is looking forward to ask for candy on the street, but there is a strange rule formed by the families on this street: when you ask for candies from two consecutive house, the people in this street will think you are greedy, thus, they'll take all of your candies back. In order to get the most candies, Mike wants to write a program to help him calculate the maximum number of candies he can get.

He asked other friends who had been on the street to ask for candy, and learned the amount of candy that every family on the street would give, and stored it in the global variable `array`. Please complete the function `maxChandy` for Mike to calculate the maximum number of candies he can get.


### Input
array 陣列的長度 size。
1 <= size <= 40
1 <= array[i]  <= 8
### Output
請回傳最大可以得到的糖果數量。

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include<stdio.h>
#include<stdlib.h>
int array[1500];
int maxChandy( int size) ;
int main() {
    int size = 0;
    scanf("%d", &size);
    for(int i = 0 ; i < size; ++i) {
        scanf("%d", &array[i]);
    }
    printf("%d\n", maxChandy( size));
    return 0;
}
```
</details>


### Example 1
#### Input
```
6
6 3 8 8 2 8

```
#### Output
```
22

```

### Example 2
#### Input
```
9
2 8 2 8 2 4 6 6 7

```
#### Output
```
29

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
