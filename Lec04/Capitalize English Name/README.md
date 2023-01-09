## Capitalize English Name
<details>
<summary>Details</summary>

Level: Hard  
Tags: Basic Types, Loop  
Problem ID: [ZNBefHvaxm30](https://ckj.imslab.org/#/problems/ZNBefHvaxm30)  
</details>

### Description
In English, the **first letter of people's name should be capitalized**.

 For example, the name `harry james potter` should be written as `Harry James Potter`. 

Now I got a bunch of people's name here, but the letter case of these names are messed up.

 Some names are not capitalized properly, and some names got upper case letter in the middle. 

Each name in the line is ended with either `,`, `.` or `;`.

Please help me convert these names into the proper format, and then make a list of them.


### Input
The integer i in the first line indicats the number of names with range 1 - 100.
The next line is a string of names which are end with , . or ;.
Each name is composed of a - z, A - Z and space.
### Output
English names with correct format.
Each name is saparated by a new line.

### Example 1
#### Input
```
2
harry james potter;albus perCIval WulFric brian DUMbledore.
```
#### Output
```
Harry James Potter
Albus Percival Wulfric Brian Dumbledore

```

### Example 2
#### Input
```
4
RoNald BILius WeaSLey,HeRmione JEAN Granger;SeVerus snape.draco LuCIus Malfoy;
```
#### Output
```
Ronald Bilius Weasley
Hermione Jean Granger
Severus Snape
Draco Lucius Malfoy

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
