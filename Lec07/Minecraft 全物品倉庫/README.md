## Minecraft 全物品倉庫
<details>
<summary>Details</summary>

Level: Medium  
Tags: Function, Recursive  
Problem ID: [NXjHzJg4d7tf](https://ckj.imslab.org/#/problems/NXjHzJg4d7tf)  
</details>

### Description
眾所周知，Minecraft 是個很多玩法的遊戲。其中合成是個很有趣的玩法，某天 Eric 帥哥想要在他的生存世界裡面做一個全物品倉庫，但要做這個倉庫之前需要準備每個物品各一個，然而，有些物品是需要透過合成產生，請撰寫一個程式告訴 Eric 他需要多少原始物品才能得到每個物品各一個。（原始物品代表這個物品不能透過合成取得，但你還是需要準備一個）

As we all know, Minecraft is a game of many ways to play. One day Eric wants to make a full item warehouse in his survival world, but he needs to prepare one of each item before he can make this warehouse, however, each item needs to be prepare once. (The original item means that the item cannot be obtained through craft, but you still need to prepare one)

由於 Minecraft 物品實在太多了，這邊測資會提供一個自訂義的合成表，且物品以一個 1~N （1 ≦ N ≦ 20）的正整數表示。

其中 1~N 各個物品可被 M 種物品合成出來。

測試資料確保不會有需要互相合成的情況，意即，一個物品的合成表不會出現自己。

Since Minecraft items are really too much, the testcase provide a custom craft recipe, and items to a 1 ~ N (1 ≦ N ≦ 20) positive integer representation.

Each of the items 1~N can be crafted by M items.

The test data ensures that there is no need to craft each other, i.e., an item's craft recipe does not appear by itself.

假設 N = 3 ，我今天有以下合成表（可觀看 Input Format 了解更詳細內容）

Assuming N = 3, I have the following craft recipe today (see Input Format for more details)


```
1 可被 2、3 合成
2 為原始材料
3 可被 2 合成
```
我若要準備 1~3 各一個，會需要準備 4 個原始材料

If I want to prepare 1~3 each, I will need to prepare 4 original item.


```
1 需要準備 2 個 2
2 需要準備 1 個 2
3 需要準備 1 個 2
```

### Input
第一行有一個正整數 N（1 ≦ N ≦ 20），代表當前有 N 個物品，分別為 1~N。
有 N 行，分別對應 1~N 各個物品的合成表，每個物品包含了以下兩行。
 - 第一行有一個正整數 M（0 ≦ M < N），代表該物品需要被幾個物品合成。（Ｍ = 0 代表該物品是原始物品，且沒有第二行）
 - 第二行有 M 個正整數 S_1、S_2...S_M，代表該物品須被那些物品合成。（對所有 1 ≦ i ≦ M，1 ≦ S_i ≦ N，且 S_i 不重複）

The first row has a positive integer N (1 ≦ N ≦ 20), representing the current N items, 1~N respectively.
There are N rows, corresponding to the craft recipe of each item from 1 to N. Each item contains the following two rows.
 - The first row has a positive integer M (0 ≦ M < N), representing the item needs to be crafted by several items. (M = 0 means that the item is the original item and there is no second row)
 - The second row has M positive integers S_1, S_2.... S_M, which means the item should be crafted by those items. (For all 1 ≦ i ≦ M, 1 ≦ S_i ≦ N, and S_i is not duplicated)
### Output
輸出準備 1~N 各一個，需要準備多少原始物品。

### Example 1
#### Input
```
3
2
2 3
0
1
2
```
#### Output
```
4

```

### Example 2
#### Input
```
4
3
2 3 4
2
3 4
1
4
0
```
#### Output
```
8

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
