## Priority Queue
<details>
<summary>Details</summary>

Level: Hard  
Tags: Pointers, Struct, Union, String  
Problem ID: [aLd_O9qjgWUQ](https://ckj.imslab.org/#/problems/aLd_O9qjgWUQ)  
</details>

### Description
Priority Queue 是一個非常有用的資料結構，在許多實做中皆有使用到類似的概念，例如 Linux 的核心排程器或是股票的交易系統等。現在給定 Priority Queue 中節點的結構，請你實作 Priority Queue 的 enqueue 及 dequeue 函式：

1. Priority Queue 中的每個節點皆包含兩個欄位：值（value）及權重（weight），且須以 linked-list 進行串接。

2. 進行 enqueue 操作時以權重為排序依據，權重越小者越靠前面，且若權重相同，越先插入者越靠前。

3. 進行 dequeue 操作時取出整個 Priority Queue 最前面的節點並將其回傳，若 Priority Queue 為空則回傳 NULL。

4. 每次操作後從最前面開始將 Priority Queue 中的節點之值（value）印出。（Loader code 會處理）



---

Priority Queue is a very useful data structure that is implemented in many systems, such as the scheduler of Linux or the stock transaction system. Now, with given structure of priority queue node, please implement the enqueue and dequeue function of priority queue:

1. There are two fields: value and weight in the priority queue node, the nodes in the queue should be formed as linked-list.
2. To perform enqueue operation, the rank of nodes depends on the weight of nodes, smaller comes first, and if the weights of two nodes are identical, the newly inserted node should come after the other node.
3. The dequeue operation returns the first node of entire priority queue, NULL if priority queue is empty.
4. Print the value of nodes that are still in the priority queue from the head, which will be performed by the loader code.

### Input
The first line of input contains an integer N indicates the number of operations.
The rest of N lines are the operations and each operation should be either "ENQUEUE V W" or "DEQUEUE",
where the former one means insert a node with value V and weight W to Priority Queue, while the later one
fetches a node from the head of Priority Queue.
### Output
The value of nodes in Priority Queue after each operation.

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node_s {
	int weight;
	int value;
	struct node_s *next;
} node_t;

typedef struct prio_queue_s {
	node_t *head;
} prio_queue_t;

void enqueue(prio_queue_t * const queue, int value, int weight);
node_t *dequeue(prio_queue_t * const queue);
void print_nodes(const prio_queue_t * const queue);

int main() {
	int N;
	scanf("%d", &N);
	prio_queue_t queue = {
		.head = NULL,
	};
	for (int i = 0; i < N; i++) {
		char op[8];
		scanf("%s", op);
		if (!strcmp(op, "ENQUEUE")) {
			int v, w;
			scanf("%d%d", &v, &w);
			enqueue(&queue, v, w);
		}
		else if (!strcmp(op, "DEQUEUE")) {
			free(dequeue(&queue));
        }
		print_nodes(&queue);
	}
	return 0;
}

void print_nodes(const prio_queue_t *const queue) {
	if (!queue->head) {
		printf("EMPTY\n");
		return;
	}
	for (node_t *node = queue->head; node; node = node->next) {
		printf(" -> %d", node->value);
    }
	printf("\n");
    return;
}

```
</details>


### Example 1
#### Input
```
6
DEQUEUE
DEQUEUE
ENQUEUE 945 823
DEQUEUE
DEQUEUE
ENQUEUE 735 662

```
#### Output
```
EMPTY
EMPTY
 -> 945
EMPTY
EMPTY
 -> 735

```

### Example 2
#### Input
```
7
ENQUEUE 809 389
ENQUEUE 547 199
DEQUEUE
ENQUEUE 174 198
ENQUEUE 46 198
DEQUEUE
ENQUEUE 98 175

```
#### Output
```
 -> 809
 -> 547 -> 809
 -> 809
 -> 174 -> 809
 -> 174 -> 46 -> 809
 -> 46 -> 809
 -> 98 -> 46 -> 809

```

### Example 3
#### Input
```
4
DEQUEUE
DEQUEUE
ENQUEUE 175 517
ENQUEUE 503 350

```
#### Output
```
EMPTY
EMPTY
 -> 175
 -> 503 -> 175

```

### Example 4
#### Input
```
9
DEQUEUE
ENQUEUE 445 31
DEQUEUE
DEQUEUE
ENQUEUE 512 738
ENQUEUE 305 56
ENQUEUE 548 80
ENQUEUE 844 30
DEQUEUE

```
#### Output
```
EMPTY
 -> 445
EMPTY
EMPTY
 -> 512
 -> 305 -> 512
 -> 305 -> 548 -> 512
 -> 844 -> 305 -> 548 -> 512
 -> 305 -> 548 -> 512

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
