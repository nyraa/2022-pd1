## Move the Maximum to the Tail
<details>
<summary>Details</summary>

Level: Medium  
Tags: Pointers, Struct  
Problem ID: [xnV3GgmAnq5X](https://ckj.imslab.org/#/problems/xnV3GgmAnq5X)  
</details>

### Description
Given `n` **different positive** integers, please move the maximum value to the tail of the linked list.

給定`n`個**相異的正整數**，請你將當中最大的那個數字移到該Linked-List的最後面。


### Input
5 <= n <= 1000, each value will be less 100000.
### Output
The content of the linked list.

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
void MoveToTail();

int main(void) { 
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) {
        struct node *tmp = malloc(sizeof(struct node));
        scanf("%d", &tmp->val);
        tmp->next = NULL;
        if(i == 1)
            head = tmp;
        else
            tail->next = tmp;
        tail = tmp;
    }
    MoveToTail();
    for(struct node *cur = head; cur != NULL; cur = cur->next) {
        printf("%d ", cur->val);
    }
    return 0;
}
```
</details>


### Example 1
#### Input
```
5
1 2 5 4 3
```
#### Output
```
1 2 4 3 5 
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 65536 KB.  
