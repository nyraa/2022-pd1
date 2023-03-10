## Bingo Card
<details>
<summary>Details</summary>

Level: Medium  
Tags: Array, Loop  
Problem ID: [4Mf8qAGOoAOE](https://ckj.imslab.org/#/problems/4Mf8qAGOoAOE)  
</details>

### Description
Amy is about to play the PD1 Bingo Game, the game requires a Bingo Card which is composed of an **8x8 table** with numbers in **range 1 - 256** occupy the spaces arbitrarily. Numbers in each Bingo Card **will not be repeated**.

The host will pick **64 different numbers**, and if the picked numbers form a **horizontal**, **vertical** as well as **diagonal** line on Amy’s Bingo Card, then the line could be recorded.

Please help Amy to count how many lines she gets.


### Input
The 1st to 8th input lines with 8 integers in each line indicate the Bingo Card.
The 9th line with 64 integers indicates the numbers picked by the host.
All the input numbers are with range 1 - 256.
### Output
The number of lines on the Bingo Card.

### Example 1
#### Input
```
1 2 3 4 5 6 7 8
9 10 11 12 13 14 15 16
17 18 19 20 21 22 23 24
25 26 27 28 29 30 31 32
33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48
49 50 51 52 53 54 55 56
57 58 59 60 61 62 63 64
1 2 3 4 5 6 7 8 10 18 26 34 42 50 58 19 28 37 46 55 64 106 107 108 109 110 111 112 113 114 115 116 117 118 119 120 121 122 123 124 125 126 127 128 129 130 131 132 133 134 135 136 137 138 139 140 141 142 143 144 145 146 147 148

```
#### Output
```
3

```

### Example 2
#### Input
```
221 107 51 45 165 227 186 242
208 241 111 56 54 229 95 96
172 231 210 185 60 238 48 106
256 9 119 15 204 153 10 235
23 142 211 244 212 252 83 239
245 81 240 53 161 63 80 167
233 139 69 26 91 100 55 1
125 168 202 175 148 99 250 104
194 151 83 250 54 67 3 155 247 81 33 48 142 227 213 173 159 191 176 20 12 115 241 88 92 42 206 75 138 232 100 118 120 223 246 249 133 216 73 103 165 46 60 212 112 19 68 204 175 248 139 51 106 74 214 107 153 156 108 87 161 192 135 132

```
#### Output
```
0

```

### Example 3
#### Input
```
9 117 173 67 142 105 85 104
169 147 216 74 86 160 135 73
219 2 145 129 132 98 113 234
202 229 208 108 27 69 114 61
187 163 81 245 49 36 60 154
118 21 182 179 10 133 232 250
123 238 53 34 206 4 138 79
168 256 211 77 31 231 84 80
179 250 229 135 36 10 132 138 105 238 168 9 74 104 114 187 85 202 49 216 173 169 118 81 2 147 61 73 142 219 86 31 211 67 129 133 98 53 69 34 232 206 108 182 4 79 27 21 231 208 80 84 160 154 117 123 145 113 234 163 77 60 245 256

```
#### Output
```
18

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
