## Dungeons & Dragons
<details>
<summary>Details</summary>

Level: Easy  
Tags: If/else, Expression  
Problem ID: [ZA1yQnebj6wI](https://ckj.imslab.org/#/problems/ZA1yQnebj6wI)  
</details>

### Description
Dongeons & Dragons (DnD) is a popular TRPG game. Players keep rolling several dice during the game to take actions. The results of the actions depend on the outcome of dice.

Image that you are trying to beat a dragon in DnD, you have to roll six dice (named d1, d2, ..., d6) at each step. The rules of the dice are as follows:

* The sum of d1, d2 and d3 determines that who takes the turn to attack: If the sum is less than or equal to 10, the player attacks. Otherwise, the dragon attacks.
* In the player's turn to attack, there are three cases:


	1. If d4, d5 and d6 are identical, the player makes a critical hit.
	2. If the sum of d4 and d5 is **greater than or equal** to d6, the player makes a normal hit.
	3. **Otherwise**, the attack misses.
* In the dragon's turn to attack, there are also three cases:


	1. If any two of d4, d5 and d6 are **identical**, the attack misses.
	2. If the sum of d4 and d5 is **not equal to** d6, the dragon makes a normal attack.
	3. **Otherwise**, a critical attack is made by the dragon.
* The cases must be evaluated in the above order.

### Input
Six space-separated integers that indicates the number of six dice (d1 to d6).
### Output
A single line of string that indicates the result: "<attacker> attacks: <hit>". Where <attacker> has two possible values: "Player" and "Dragon". And <hit> has three possible values: "Critical Hit", "Normal Hit" and "Miss".

### Example 1
#### Input
```
2 3 4 10 6 14

```
#### Output
```
Player attacks: Normal Hit

```

### Example 2
#### Input
```
3 6 2 9 8 10

```
#### Output
```
Dragon attacks: Normal Hit

```

### Example 3
#### Input
```
4 6 1 2 10 2

```
#### Output
```
Dragon attacks: Miss

```

### Example 4
#### Input
```
2 2 5 6 6 6

```
#### Output
```
Player attacks: Critical Hit

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
