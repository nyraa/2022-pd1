## [25 Points] Birdy's Network
<details>
<summary>Details</summary>

Level: Medium  
Tags: Array, Struct, Pointers  
Problem ID: [QzHpCgJ8AvG0](https://ckj.imslab.org/#/problems/QzHpCgJ8AvG0)  
</details>

### Description
Birdy 是一個網路管理員，他想要使用一個 **鄰接表** (adjacency list) 來紀錄他負責管理的網路。  
我們可以使用一條 list 紀錄當前節點的所有相鄰節點(neighbor node)，並將所有的節點資訊儲存於一條陣列中，  
以下是本鄰接表的示意圖：

![](img/f93c5a149709d748457ef22a22f48f7a)



同時，他也希望鄰接表上的節點按照 id 由小到大的排序。  
請你幫助他建立並排序這張鄰接表。



---

Birdy is a network administrator. He wants to use an **adjacency list** to represent his network. One representation of adjacency list is an array of linked lists which records the neighbors for each node. The structure of the adjacency list is shown as following:

![](img/f93c5a149709d748457ef22a22f48f7a)

He also wants to make the order of the adjacency list ascending. Please help him load the data to an adjacency list and reorganize its order.

Note that the connection is directed.


### Input
Input contains multiple lines (<= 1000 lines). The first number in each line is node id. The numbers after "->" are the neighbor ids of current node (in ascending order). The last number in each line is always 0, which indicates the end of the line. All ids are positive integers (1 <= id <= 2147483647).
### Output
Output contains the neighbor ids of each node (list in ascending order).

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>
#include <stdlib.h>

struct node {
    int id;
    struct node *next;
};

struct node *read_data(int *size); // TODO: implement this function

void print_data(struct node *adj, int size) {
    if (!adj) {
        return;
    }
    for (int i = 0; i < size; ++i) {
        printf("%d -> ", adj[i].id);
        for (struct node *ptr = adj[i].next; ptr != NULL; ptr = ptr->next) {
            printf("%d ", ptr->id);
        }
        putchar('\n');
    }
    return;
}

void free_data(struct node *adj, int size) {
    if (!adj) {
        return;
    }
    for (int i = 0; i < size; ++i) {
        struct node *ptr = adj[i].next;
        while (ptr) {
            adj[i].next = ptr->next;
            free(ptr);
            ptr = adj[i].next;
        }
    }
    free(adj);
    return;
}

int main() {
    int size;
    struct node *adj = read_data(&size);
    if (!adj) {
        fprintf(stderr, "Error allocating memory.");
        exit(1);
    }
    print_data(adj, size);
    free_data(adj, size);
    return 0;
}
```
</details>


### Example 1
#### Input
```
100356 -> 4 458 0
4 -> 458 0
458 -> 0

```
#### Output
```
4 -> 458
458 -> 
100356 -> 4 458

```

### Example 2
#### Input
```
32 -> 14 22 0
37 -> 14 32 0
8 -> 22 37 0
14 -> 8 22 32 37 0
22 -> 8 14 32 37 0

```
#### Output
```
8 -> 22 37
14 -> 8 22 32 37
22 -> 8 14 32 37
32 -> 14 22
37 -> 14 32

```

### Limits
Your program needs to finish task in 2 seconds.  
Your program can only use memory less than 50000 KB.  

### Hint
<details>
<summary>Hint</summary>
How to know if input ends? What is the return value of scanf? Note that to send EOF, press ctrl+d on Linux and Mac, ctrl+z on Windows or you can use redirection.
</details>
