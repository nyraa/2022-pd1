# midterm-2021
## [25 Points] Railway Timetable
<details>
<summary>Details</summary>

Level: Easy  
Tags: Expression, If/else, Loop, Format I/O  
Problem ID: [_S-gGunL7wYo](https://ckj.imslab.org/#/problems/_S-gGunL7wYo)  
</details>

### Description
Ariel is traveling around Taiwan by scooter. Unfortunately, her scooter broke down when she arrived in Taipei. Therefore, Ariel plans to take the train from Taipei to Tainan.   
There are `n` trains. Each train has different number `x`, departure time `HH:MM` (0<=`HH`<=23, 0<=`MM`<=59) and running time `y` minutes. Current time is `hh:mm`, please tell Ariel which train that she can take arrives in Tainan earliest.  
 **Note 1.** Ariel only takes the train after `hh:mm`(including `hh:mm`)

**Note 2.** Timetable is sorted from 00:00 to 23:59.

**Note 3.** Probably train A departs earlier than train B, but train A arrives later than train B ; train A departs later than train B, but train A arrives earlier than train B. (referring to Sample 2)  
**Note 4.** Ariel must can take the train to Tainan.  
**Note 5.** Trains arrive in Tainan at different times. That means, there is only one answer.



---

  
Ariel 以台南為起點騎車環島，騎車到了台北後，車子拋錨了，只好改搭火車回家，當天的火車時刻表上共有 `n` 班火車，每班火車都有不相同的編號 `x`，發車時間為 `HH:MM` (0<=`HH`<=23, 0<=`MM`<=59)，需要花費 `y` 分鐘才能抵達台南，此時時間為 `hh:mm`，請問 Ariel 應該要搭哪一班火車才能最早抵達台南?  
  
**註1.** Ariel 只能搭 `hh:mm` 以後的火車 (包含 `hh:mm`)

**註2.** 火車時刻表上的發車時間是從 00:00 開始排序下來的

**註3.** 有可能比較早發車的火車比較晚抵達台南;比較晚發車的火車比較早抵達台南 **(可參考 sample 2)**

**註4.** 一定有火車可以搭回台南

**註5.** 火車抵達台南的時間皆不同，即答案只會有一個  



### Input
First line, a sequence hh:mm represents current time. ( hh and mm are integers, 0<=hh<=23, 0<=mm<=59)

Second line, an integer n represents the number of trains.(1<=n<=30)

Then, there are n lines, an integer x , a sequence HH:MM and an integer y represent the train's number, departure time and running time, respectively.  (0<=x<=9999, 0<=HH<=23, 0<=MM<=59, 60<=y<=180)
### Output
Output the train's number that Ariel can arrive in Tainan earliest.

### Example 1
#### Input
```
02:00
8
100 01:11 100
101 01:59 102
111 02:03 100
200 02:59 110
201 03:11 100
211 05:02 90
300 07:12 80
301 10:22 60
```
#### Output
```
111
```

### Example 2
#### Input
```
06:00
10
10 01:00 100
1 01:50 102
6749 03:07 200
123 05:59 300
122 06:00 200
2333 06:05 180
777 07:12 100
3012 10:22 300
331 13:20 100
599 19:22 50
```
#### Output
```
777
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
## [25 Points] Trithemius Cipher Encoder
<details>
<summary>Details</summary>

Level: Easy  
Tags: Basic Types, Loop, If/else, Expression  
Problem ID: [WaeYUxX15lvd](https://ckj.imslab.org/#/problems/WaeYUxX15lvd)  
</details>

### Description
Do you remember [Caesar cipher](https://ckj.imslab.org/#/problems/L6vddcFTIix4)? One similar technique is **Trithemius cipher**, it is a successive shift cipher. In the case of Caesar cipher, each character in the plaintext message is shifted with a fixed offset `k`. As for **Trithemius cipher**, a successive shift (it could be ascending or descending, each time it shift 1) and the offset `k` is added to each character.

For example: `k=1` , ascending, and the message we want to encode is `TAs are so H4ND5OME`. The offset of each character is:

1. `T A s a r e s o H N D O M E`
2. `1 2 3 4 5 6 7 8 9 10 11 12 13 14`

The cipher text becomes `UCv ewk zw Q4XO5AZS`.

Write a program that prints out the result of Trithemius cipher for the given input (described in Input Format).

Note: Transform only **english alphabet (case-preserving)** and preserve other characters such as Arabic numerals or punctuation. The successive shift only occurs on english alphabet.



---

還記得[凱薩密碼](https://ckj.imslab.org/#/problems/L6vddcFTIix4)嗎？有個類似的加密方式是**特里特米烏斯密碼**。在凱薩密碼中，每個字元都會被平移一個固定的值`k`，而**特里特米烏斯密碼密碼**則會額外多加一個連續的偏移值(會是遞增或遞減，每次移動1)。

舉例來說， `k=1`、遞增的狀況下，我們想加密`TAs are so H4ND5OME`，而每個字元的偏移量為：

1. `T A s a r e s o H N D O M E`
2. `1 2 3 4 5 6 7 8 9 10 11 12 13 14`

加密文字會是`UCv ewk zw Q4XO5AZS`.

請撰寫一支程式來加密給定的訊息。

註：只需轉換英文字母(需保留大小寫)並保留其他字元例如阿拉伯數字、標點符號等等。連續偏移量只會在遇到英文字母時增減。


### Input
The first line is an integer k, where -2147483648 <= k <= 2147483647.

The second line contains a character 'a' or 'd' which indicates that it is ascending or descending.

The third line is the message that you need to encode.

Each line is ended with a newline character.
### Output
The cipher text.

### Example 1
#### Input
```
1
a
TAs are so H4ND5OME

```
#### Output
```
UCv ewk zw Q4XO5AZS
```

### Example 2
#### Input
```
4
d
PD1 is sooooo awesome!!

```
#### Output
```
TG1 kt snmlkj upwjebs!!
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 10000 KB.  
## [20 Points] Paper Referencing
<details>
<summary>Details</summary>

Level: Medium  
Tags: Array, Loop, If/else, Format I/O, Basic Types  
Problem ID: [-PQkF-ORejQb](https://ckj.imslab.org/#/problems/-PQkF-ORejQb)  
</details>

### Description
It is usual that a paper may have many references. Probably a website, a book, or other papers.

Assume that if we want to understand a specific paper, we need to read the paper and its all references.

(If the referenced paper has other references, all of them should be read.)

In this problem, given some reference numbers,

write a program that lists all papers that should be read for the specific paper.

For the first sample testcase, given a number `5`, which means there are five papers (number 1 ~ 5),

then, follow the format 「referencingPaper referencedPaper1 referencedPaper2 ...」 to input.

We can know that,

the 5th paper references the 1st 2nd 3rd papers

the 2nd paper references the 4th paper

the 1st paper references the 2nd paper

the 3rd paper references the 4th paper

until we encounter 0, stop inputting.

Now, if we want to fully understand all these five papers, then

for the 1st paper, we should read the 1st, 2nd, 4th papers (since the 1st paper references the 2nd paper, and the 2nd paper references the 4th paper)

for the 2nd paper, we should read the 2nd, 4th papers

for the 3rd paper, we should read the 3rd, 4th papers

for the 4th paper, we should read the 4th paper

for the 5th paper, we should read the 1st, 2nd, 3rd, 4th, 5th papers



---

在一篇論文中，通常會有許多參考文獻，可能是某個網站、某本書、或是其他相關論文。

假設要完整個理解某篇論文，需要完整看完自身內容，以及其參考文獻（若類推下去仍有參考文獻，亦須將其完整看完）。

本題以此概念為出發，給予許多篇的論文編號，

請寫出一個程式，條列出透徹每篇論文所須看的所有論文編號。

以第一筆範例測資來說，給予一數字 `5`，代表有著五篇論文（編號 1 ~ 5），

接下來以「參考論文 被參考論文1 被參考論文2 ...」的格式進行輸入。

因此可以解讀出以下訊息：

第 5 篇論文參考了第 1、2、3 篇論文

第 2 篇論文參考了第 4 篇論文

第 1 篇論文參考了第 2 篇論文

第 3 篇論文參考了第 4 篇論文

直到遇到 0，代表輸入結束。

那麼若要透徹這五篇論文，則

第 1 篇論文應閱讀完第 1、2、4 篇論文（因為第 1 篇論文參考了第 2 篇論文，而第 2 篇論文又參考了第 4 篇論文）

第 2 篇論文應閱讀完第 2、4 篇論文

第 3 篇論文應閱讀完第 3、4 篇論文

第 4 篇論文應閱讀完第 4 篇論文

第 5 篇論文應閱讀完第 1、2、3、4、5 篇論文。


### Input
The first line is an integer N, and it means there are N papers (number 1 ~ N). And 1 <= N <= 100.

Then follow the format 「referencingPaper referencedPaper1 referencedPaper2 ...」 to input until encounter 0.

Notice that the referencing paper number on each row won't be ordered.

You don't need to consider the cycle. (If the 1st paper references the 3rd paper, and the 3rd paper references the 1st paper, well, it sounds weird!)



一開始輸入一數字 N，代表有 N 篇論文，編號為 1 ~ N，且 1 <= N <= 100。

接者以「參考論文 被參考論文1 被參考論文2 ...」的格式進行輸入，

直到讀到 0 代表輸入結束。

注意，每列的參考論文編號並不會按照順序，

且不必考慮 cycle 的狀況（如果說第 1 篇論文參考第 3 篇論文，而第 3 篇論文卻又參考了第 1 篇論文，聽起來超怪的對吧！）。
### Output
Print each paper number in ascending order on each row.

Then follow the format 「referencingPaper -> readPaper1 readPaper2 ...」.

Notice that the readPaperN should be printed in ascending order.



依照每個論文號碼順序輸出，

並以「參考論文 -> 需閱讀的論文1 需閱讀的論文2 ...」的格式回答。

注意，須閱讀的論文N 必須由小到大排序。

### Example 1
#### Input
```
5
5 1 2 3
2 4
1 2
3 4
0
```
#### Output
```
1 -> 1 2 4
2 -> 2 4
3 -> 3 4
4 -> 4
5 -> 1 2 3 4 5
```

### Example 2
#### Input
```
8
6 2 4 5
4 1 7
3 1 5 8
0
```
#### Output
```
1 -> 1
2 -> 2
3 -> 1 3 5 8
4 -> 1 4 7
5 -> 5
6 -> 1 2 4 5 6 7
7 -> 7
8 -> 8
```

### Limits
Your program needs to finish task in 2 seconds.  
Your program can only use memory less than 65535 KB.  
## [15 points] PageRank
<details>
<summary>Details</summary>

Level: Hard  
Tags: If/else, Loop, Array, Basic Types, Format I/O  
Problem ID: [HtBgMZEW8fMd](https://ckj.imslab.org/#/problems/HtBgMZEW8fMd)  
</details>

### Description
**PageRank** is an algorithm that used by Google to sort the searching result. This algorithm calculates the rank of a page via the quality and the number of hyperlinks that point to it. The algorithm supposes that there are many hyperlinks point to a web page if it is important.

A higher PageRank indicates the website is more important. On the other hand, the PageRank of a web page is the probability of a user who visits a hyperlink on a web page randomly and finally reaches the target one. Thus, the PageRank should be an number lies between 0 and 1, and the sum of PageRank of all web pages should be 1.

The following figure is an example: Given three web pages A, B and C. Web page B and C are referenced by A, C is referenced by B and finally A is referenced by C.

![fig1.png](img/fig1.png)

Each web page starts with an equal importance which is as known as PR. Since the sum of all PRs should be 1, the PR of each web page is initialized to 1/N, the N indicates the number of web pages, which is 3 in this case, thus the PR of each web page is initially 1/3. 

Next, the PRs are updated by the number of hyperlinks. We may imagine that a web page X references another web page Y as "X votes to Y". If X only has reference to Y, than Y gets 1 point from X; but if both Y and Z are referenced by X, they should share the point voted by X. Thus, each of them gets 1/2 point. Moreover, a vote by an important web page should be concerned more valuable than a vote by a less important web page. To present this thought, the point voted by X should be multiplied by its own PR. As shown in the following figure, A votes to B and C, which makes both B and C gets 1/2 \* 1/3 = 1/6 points.

![fig3.png](img/fig3.png)

The points voted to a web page are summed up to be the new PR of the web page. For example, as shown in the above figure, the new PR of web page C is 1/6 + 1/3 = 1/2. After several iterations over the steps mentioned above, the PR of a web page will converge to a fixed value which becomes the PageRank of it. 

As following animation presents: after repeating the process with enough times (20 iterations in this case), the PR of each web page is 0.4, 0.2 and 0.4 respectively. The values will remain unchanged in the further iterations.   
![fig4.gif](img/fig4.gif)



The PR of a web page `u` at the given time `t` can be written in to following equation:

`PR(t, u) = sum( PR(t - 1, v) / L(v) ) for all v link to u`

where `v` indicates a web page that references `u`, and `L(v)` indicates the number of hyperlinks in the web page `v`. 

Now, given a set of web pages and the hyperlinks of each web page in the set, please calculate the PR of each web page.



---

**PageRank**，又稱**網頁排名**，是Google公司所使用的對其搜尋引擎搜尋結果中的網頁進行排名的一種演算法，他本質上是一種以網頁之間的超連結個數和品質作為主要因素粗略地分析網頁的重要性的演算法。其基本假設是：更重要的頁面往往會有更多其他頁面擁有通向該頁面的超連結，因此我們可以透過「一個網頁有多少很重要的網頁通向他」來計算一個網頁的 PageRank。PageRank 愈高，就表示這個網頁愈重要。在實質意義上，PageRank 可以視為：「有一個使用者不斷在進入一個網站後，隨機點擊頁面上的超連結，最後會抵達某網頁的機率值」。因此，所有網頁的 PageRank 都應該介於 0 - 1 之間，並且總和應該要是 1。

我們來看一個簡單的例子：給定一個網頁的集合，該集合內有 A, B, C 三個網頁。其中 A 當中有通向 B 和 C 的超連結，B 當中有通向 C 的超連結，C 當中有通向 A 的超連結。如下圖所示：

![fig1.png](img/fig1.png)

一開始所有人的重要程度都是一樣的，我們把重要程度叫作 PR，並且因為總和要是 1，所以大家的 PR 都要被初始化為 1 / N，其中 N 是這個集合的大小。在這個例子當中 N = 3，所以每個人一開始的 PR 都會是 1/3。

接著我們要透過超連結的數量來更新 PR 值。我們把「X 有一個通向 Y 的超連結」想像成是「X 投了票給 Y」，如果 X 只有投給 Y 的話，那麼 X 就是投了 1 票給 Y；但如果 X 同時投給 Y 跟 Z，那麼就視為 X 各投了 0.5 票給 Y 跟 Z。但不同重要性的網頁投的一票應該有不同的價值，如果一個網頁被一個影響力很高的網頁投了一票，他的重要性應該會比只有被一個不重要的網站投了一票還要更高的。我們必須把 X 的重要性考量進得票分數當中，由於 PR 愈高就表示一個網頁愈重要，因此我們可以把 X 投出的票數乘上他的 PR 值，來反應他的重要程度。在這個例子當中，A 一開始的 PR 值是 1/3，他分別給 B 跟 C 各投了一票，所以 B 跟 C 分別得到了 1/6 分，如下圖所示。

![fig3.png](img/fig3.png)

所有人的投票都確定之後，我們可以把一個網頁的得分給加總起來，就是該網頁的新的 PR 值。例如上圖中 C 網頁的 PR 值就是 1/6 + 1/3 = 1/2 = 0.5。透過不斷迭代這個計算過程，最後所有網頁的 PR 值會收斂到某一個數字，我們就把最後收斂到的那個數字當作該網頁的 PageRank。如下方動畫所示：  
![fig4.gif](img/fig4.gif)

在重複這個步驟夠多次（以上圖來說是 20 次）之後，這三個網頁的 PR 值分別會是 0.4, 0.2, 0.4，接著就算再重複更多次，三個網頁的 PR 值也會維持在這個數字不動。

我們可以形式化的將上述問題描述成以下格式：在任意時間點 `t` ，一個網頁 `u` 的 PR 值 `PR(t, u)` 為

`PR(t, u) = sum( PR(t - 1, v) / L(v) ) for all v link to u`

其中 `v` 是一個有超連結通向網頁 `u` 的網頁，`L(v)` 是 `v` 網頁中的超連結總數（也就是他總共連出去到幾個網頁）。

現在，給定你一個網頁的集合，以及該集合中的每個網頁通向哪些網頁，請你計算出每一個頁面的 PageRank。


### Input
The first line is an integer N (3 <= N <= 100), indicates the number of web page in the set.
The following N lines contains several integers, which indicate the index of referenced pages. For example: the 1st line contains 1, 2, which means page 0 has hyperlinks that link to page 1 and page 2.
Each line will end with -1 that indicates the termination of that line.
### Output
N percentage numbers rounded to 2 decimal place that indicate PageRank of each web page. For example, if PageRank of a web page is 0.2, you should print "20.00%" for that page.

### Example 1
#### Input
```
3
1 2 -1
2 -1
0 -1
```
#### Output
```
40.00% 20.00% 40.00% 
```

### Example 2
#### Input
```
7
6 -1
0 -1
1 -1
2 -1
3 -1
4 -1
5 -1
```
#### Output
```
14.29% 14.29% 14.29% 14.29% 14.29% 14.29% 14.29% 
```

### Example 3
#### Input
```
10
5 -1
0 9 -1
3 -1
4 -1
4 6 -1
4 8 -1
1 2 7 -1
5 -1
6 -1
2 5 9 -1
```
#### Output
```
3.20% 6.40% 8.00% 8.00% 27.20% 11.20% 19.20% 6.40% 5.60% 4.80% 
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 32768 KB.  

### Hint
<details>
<summary>Hint</summary>
You can sum up the difference of every PR between result in time t and time t - 1, and take it as the distance between two results. If the distance is smaller than some tiny number, it means that the result is converged.你可以把前後兩次結果的每一個 PR 值的差加總取平均當作兩次結果的距離，當該距離小於某個很小的數字之後，就代表結果已經收斂了。 
</details>
## [15 Points] The coordinate to the past
<details>
<summary>Details</summary>

Level: Hard  
Tags: If/else, Loop, Expression, Format I/O, Array, Function  
Problem ID: [bDXsISCujJpY](https://ckj.imslab.org/#/problems/bDXsISCujJpY)  
</details>

### Description
Matsumoto is a brilliant AI that is built and sent to the past to prevent a war between humans and AI. When on his way back to the past, he will receive a set of encoded coordinates indicating where to go.

To decode the coordinates, he has to follow the following steps:

1. split the received line of characters into two groups: characters at odd positions and characters at even positions (index starts by 0 and from left)

2. sum up the numbers in each group

3. write these two numbers into hexadecimal

4. process the two numbers from step 1 if the length of the number is greater than 1

5. the coordinate is the concatenate of the result of the two numbers (the even one on the left)

The following figure presents an example of the previously shown steps:

![Screenshot from 2021-11-17 21-14-40.png](img/Screenshot from 2021-11-17 21-14-40.png)

Please help him to decode the coordinate.

![](https://c.tenor.com/3HSEeSLm-k8AAAAC/vivy-vivy-flourite-eyes-song.gif)



松本是個聰明的人工智慧，創造他的人想要將他送回過去阻止一場人類與人工智慧的戰爭。在他穿越的過程中，他會收到一份經過編碼的目的地座標，想要將座標解碼需要透過以下的步驟：

1. 將收到的所有字元分成奇數位與偶數位兩組（從最左邊的開始編號，並且從0開始）
2. 分別計算兩組數字的和
3. 將兩個相加的結果以16進位表示
4. 若有和的位數大於1的，則重複上述步驟
5. 將兩組數字計算的結果串接起來（偶數組的結果在左邊，奇數組的在右邊）

下面是範例二的示意圖：

![Screenshot from 2021-11-17 21-14-40.png](img/Screenshot from 2021-11-17 21-14-40.png)

請幫助松本解碼他收到的座標。


### Input
A newline character terminated string indicates the encoded coordinate.

The length of the string will be greater than 1 and less than 10001.

Each character represents a hexadecimal, the upper case and the lower case are both possible.



一行以換行字元結尾的字串，代表經過編碼的座標。

該字串的長度介於1到10001間（不包含10001）。

字串中每個字元代表一個16進位數字，且大小寫都有可能。
### Output
A single line that indicates the decoded coordinate, the letter of the coordinate should be shown in lower case (if any).



解碼後的字串，若字串中有出現英文字母一律以小寫表示。

### Example 1
#### Input
```
1111111111


```
#### Output
```
55
```

### Example 2
#### Input
```
ffffffffff


```
#### Output
```
4b4b
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
## [20 Points] PK high school transfer student
<details>
<summary>Details</summary>

Level: Medium  
Tags: Loop, Basic Types  
Problem ID: [QJd9kELj6SEL](https://ckj.imslab.org/#/problems/QJd9kELj6SEL)  
</details>

### Description
In PK high school, there is a transfer student. **The student number is sorted by their name.**

Following are the student number sorting rules:

- Sorted by the letter of name, if the letter is closer to A, the student number is smaller. (For instance, the student number of `Chloe` is smaller than that of `Sam` because compare with `C` and `S`, `C` is closer to `A`)

- It is no different between lowercase and uppercase (ex. `AMY` and `amy` are the same)

- In this case, `Sam` and `Samuel`, the letters of `Sam` is the same as the first three letters of `Samuel`, but the length of `Sam` is shorter than that of `Samuel`, `Sam`'s student number is smaller than `Samuel`.

Here is an example.

There are two students in class. The name of those students are `nendou` and `saiki`.

The transfer student's name is `saiko`.

Let's compare `nendou` and `saiko` first. Because the order of `n` is smaller than `s`, the student number of `nendou` is smaller than `saiko`.

Next, compare `saiki` and `saiko`. Because the first four letter of their name are the same, compare the 5th letter. Because the order of `i` is smaller than `o`, the student number of `saiki` is smaller than `saiko`.

In this case, transfer student `saiko` 's student number is 3.

Please help transfer student to find his/her student number.

p.s The transfer student's name won't be the same as the student's name.



---

呀咧呀咧，新學期PK學園又來了個新轉學生，在這裡所有的學生 **座號都是使用名字拼音排序** 的。

排序的規則為

* 從名字拼音的開始排序，比較接近 `a` 的座號會比較前面
* 大小寫字母沒有分別 (ex. `AMY` 與 `amy` 視作完全相同)
* 如果剛好出現轉學生全名與班上學生某姓名的前面字母完全相等，或班上某學生全名與轉學生姓名前面字母完全相等，則名字較短的座號會比較前面。 (ex. `Sam` 與 `Samuel`， `Sam` 的座號會比較小)

現在來舉個例子：

班上有兩個學生，分別是 `nendou` 與 `saiki`，

轉學生的名字叫 `saiko`。

先來比較 `nendou` 與 `saiko` ，按照英文 26 個字母的排序，`n` 比 `s` 來得更前面，所以 `nendou` 的座號在 `saiko` 之前。

再比較 `saiki` 與 `saiko` ，由於前四個字母皆為 `saik` ，比較第五個字母，由於 `i` 在 `o` 之前，所以 `saiki` 的座號也在 `saiko` 之前。

在這個範例裡，新轉學生 `saiko` 的座號就是 3。

每個學期都會出現新的轉學生，可以請你幫轉學生找到他的座號嗎？

p.s 不會出現班上同學與轉學生撞名的狀況


### Input
First line is a number  (N ) represent for how many students are in the class.
Second line is transfer student's information. The first number ( n ) represents for the length of the student's name, following is the student's name.
Following N lines are the origin student's information. The first number ( n ) represents for the length of the student's name, following is the student's name.

1 <= N <= 30
1 <= n <= 16

The students' names are composed of a ~ z and A ~ Z
-----------------------
第 1 行的輸入 N 代表班上目前有幾名學生
第 2 行的輸入是轉學生資訊，有兩個欄位，第一個 n 表示轉學生名字的長度，後面接續著轉學生的名字
後面 N 行是班上學生的資訊，第一個 n 表示學生名字長度，後面接續著班上學生的名字（注意：這 N 行之間並不是已排序好的學生資訊）

1 <= N <= 30
1 <= n <= 16
學生名稱由小寫英文字母 a ~ z 及大寫英文字母 A ~ Z 組成
### Output
Transfer student's student number ( student number starts from 1 )
----------------------
輸出為轉學生的座號 (座號從 1 開始)

### Example 1
#### Input
```
2
5 saiko
6 nendou
5 saiki

```
#### Output
```
3

```

### Example 2
#### Input
```
5
3 pat
5 patsy
7 patrick
5 percy
8 philemen
8 penelope

```
#### Output
```
1

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
