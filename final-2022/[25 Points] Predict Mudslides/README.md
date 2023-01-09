## [25 Points] Predict Mudslides
<details>
<summary>Details</summary>

Level: Easy  
Tags: Recursive, Array, If/else  
Problem ID: [N0tym-sh9KCA](https://ckj.imslab.org/#/problems/N0tym-sh9KCA)  
</details>

### Description
11 月連日的大豪雨，讓台灣北部的山地發生許多起土石流，為了減少土石流的災害，研究院的學生們想開發一個可以偵測土石流衝擊面積的應用程式，在一個 5 \* 5 的地圖上，堤防標示為 1，平地標示為 0 ，建築物標示為 2。一開始會有一個發生土石流的開始的位置，之後便經由這個點向上下左右衝擊，遇到提防會停下來，請寫一個程式，給出地圖跟開始的位置，可以知道有幾間房子被衝擊到。例如下面有一個地圖：

0 1 0 1 2

0 1 2 1 1

0 1 0 0 2

2 0 1 0 0

2 2 0 1 0

地圖左上角為(0,0)。 由 ( 0, 2 ) 開始發生土石流，遇到 1 的堤坊會停止， 所以最後會衝擊到 2 間房屋 (1,2) 與 (2, 4 )。



---

Days of heavy rain in November caused many mudslides in the mountains of northern Taiwan. In order to reduce the disaster of mudslides, the students of the research institute want to develop an application that can detect the impact area of ​​mudslides. On a 5 \* 5 map, Dikes are marked as 1, flat land as 0, and buildings as 2. In the beginning, there will be a starting position of a mudslide, and then it will impact up, down, left, and right through this point, and it will stop when it encounters a dike. Please write a program to give a map and the starting position, so that you can know how many houses have been impacted by mudslides. For example, here is a map

0 1 0 1 2

0 1 2 1 1

0 1 0 0 2

2 0 1 0 0

2 2 0 1 0

The upper left corner of the map is (0,0). The mudslide starts from (0, 2), and it will stop when it encounters the dike of 1, so it will rush to the 2 buildings (1,2) and (2, 4) in the end.


### Input
6 行，第一行代表開始發生土石流的地方，接下來是一個 5 *5 的地圖。
0 2
0 1 0 1 2
0 1 2 1 1
0 1 0 0 2
2 0 1 0 0
2 2 0 1 0 

### Output
有幾間房子會受到波及
2

### Example 1
#### Input
```
0 2
0 1 0 1 2
0 1 2 1 1
0 1 0 0 2
2 0 1 0 0
2 2 0 1 0 

```
#### Output
```
2

```

### Limits
Your program needs to finish task in 15 seconds.  
Your program can only use memory less than 100000 KB.  
