## [20 Points] Department Store Anniversary
<details>
<summary>Details</summary>

Level: Medium  
Tags: Loop, Array, If/else  
Problem ID: [KzPR4enb33vm](https://ckj.imslab.org/#/problems/KzPR4enb33vm)  
</details>

### Description
The NCKU department store is having an anniversary sale. Customers can get free gift if they spend more than $100. On the 8th floor, people line up in rows of two in front of the customer service counter to get their gift. Suddenly, one of the desk goes out of service, so customers in front of this desk must merge into the other line. For the sake of fairness, staffs need to help people to line up in one line **in the order of their arrival**. Luckily, you are the one who remember the order of everyone's arrival. (what a reliable staff, huh?) Can you decide the final order of the new line?

成大百貨公司正在舉辦周年慶，消費滿 100 元即可兌換滿額贈禮。顧客們紛紛擠上八樓，兩個服務台都排滿了長長的隊伍。突然間，其中一個服務台的機器故障了，前方的人龍通通得合併到正常運作的服務台前的隊伍。為了確保先到的人都能先領到禮品，合併後的隊伍順序必須要是**顧客抵達八樓的順序**才行。還好，你就是那個記得所有顧客的抵達順序的員工（真厲害）。你能協助其它員工一起安排隊伍嗎？


### Input
The input consists of 3 lines.
The first line contains 2 integers m, n. Each line indicates the number of people. And 10 <= m, n <= 1000.
The second line is an array of integers and its length is m.
The third line is an array of integers and its length is n.
The numbers a[ i ] in the arrays indicate the order of arrival, and 1 <= a[ i ] <= 10000. Every number is unique, and may not be continuous.
### Output
An array of integer, indicates the order of people in the new line.
Each number must followed by a space.
No need to print newline at the end of the line.

### Example 1
#### Input
```
3 7
1 8 9
2 5 7 11 16 17 21
```
#### Output
```
1 2 5 7 8 9 11 16 17 21 
```

### Limits
Your program needs to finish task in 5 seconds.  
Your program can only use memory less than 65536 KB.  
