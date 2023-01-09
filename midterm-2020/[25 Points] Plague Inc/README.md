## [25 Points] Plague Inc.
<details>
<summary>Details</summary>

Level: Easy  
Tags: Format I/O, Basic Types  
Problem ID: [mP5oyKfOoWed](https://ckj.imslab.org/#/problems/mP5oyKfOoWed)  
</details>

### Description
"Plague Inc." is a famous game, you can collect DNA points to evolve your own virus in this game.

Now you made a new virus in laboratory, and want to know how many people will be infected in a month after you "accidentally" leak this virus into the world.

Given a double value `R` and an integer value `N`, `R` is `spread rate`, means each day the number of infected people will multiplied by `R`

Please calculate the number of infected people after `N` days after you let the first people infected by this virus.

"瘟疫公司" 是個非常有名的遊戲，在遊戲中你可以收集DNA點數並讓你的病毒進化

現在你在實驗室中製造了一種新型病毒，並且想知道在你 "不小心" 讓這種病毒洩漏出去後的一個月，會有多少人被感染

定義兩個數值：雙倍精度浮點數`R`和整數`N`，`R`為傳播率，每天被感染者人數會乘上`R`

請計算你用這種病毒感染第一人後`N`天被這種病毒感染的總人數


### Input
One line contains R and N, separated with a space, 1 <= R <= 2,  1 <= N <= 30
### Output
An integer, representing the number of infected people (ignore digits after decimal point)

### Example 1
#### Input
```
1.53 29

```
#### Output
```
227013
```

### Example 2
#### Input
```
1.55 23

```
#### Output
```
23857
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 65535 KB.  
