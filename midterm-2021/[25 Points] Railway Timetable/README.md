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
