# Lec11-2
## Teleportation
<details>
<summary>Details</summary>

Level: Easy  
Tags: Expression, Assignments, Basic Types, Struct, Union  
Problem ID: [8PKPOqMP73i7](https://ckj.imslab.org/#/problems/8PKPOqMP73i7)  
</details>

### Description
Saiki is a high school student who was born with all manners of psychic abilities. One of his psychic ablility is teleportation. He can go to anywhere that he desired instantly. The secret of his ability of teleportation is that he can decompose himself into small pieces to reduce the energy and the time to move, and reconstruct himself after the movement. The scientists want to simulate Saiki's ability with a program. They have found out a way to deconstruct a given object into sixteen small parts (p1 ~ p16). And they are trying to reconstruct them back. They have found out that the reconstructed object would be two `unsigned long` (l1 and l2), with the first part (p1) occupies the most significant byte of l1, the second byte occupies the next byte, and so on. That is:


```
|      l1       |       l2       |
| p1 | ... | p8 | p9 | ... | p16 |
```
And the two `unsigned long` should be xored together to get the final result. Please help the scientists finish the simulation program.

**Notice:** 

1. `unsigned long` occupies only 32 bits on Windows system, you may use `unsigned long long` to avoid overflow.
2. Since the endian of the machine that runs CKJudge is little endian, you may notice that the output does not match the answer if you shift each byte manualy. If you face such problem, try to reverse the order of the bytes, that is, `p8` occupies the first byte of `l1` and so on. Reference: <https://en.wikipedia.org/wiki/Endianness>.

![](https://img.wattpad.com/af11f3c8f36ddfddadb035b0e2f3af1ec331df4c/68747470733a2f2f73332e616d617a6f6e6177732e636f6d2f776174747061642d6d656469612d736572766963652f53746f7279496d6167652f4e4d6e6b4775366632774a6346513d3d2d313036333534373539372e313637623639626336653535333565313234333632323734313238302e676966)




### Input
Sixteen integers in the hexdecimal format that represents the parts of the decomposed object.
### Output
An unsigned long that represents the reconstructed object.

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>

unsigned long construct(unsigned char parts[16]);

int main()
{
    unsigned char parts[16];
    for (int i = 0; i < 16; i++)
        scanf("%hhx", parts + i);

    printf("%lu", construct(parts));

    return 0;
}
```
</details>


### Example 1
#### Input
```
e6 57 37 5d 59 2b b6 5c 3a b3 12 19 dc 3f 7c 6c 
```
#### Output
```
3515645021722633436
```

### Example 2
#### Input
```
c4 ce 03 4f f5 ba ba df 55 21 f6 0c 3e 9e 49 f4 
```
#### Output
```
3166915418408742801
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
