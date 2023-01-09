# Lec13
## HAPPY PARTY TRAIN
<details>
<summary>Details</summary>

Level: Medium  
Tags: If/else, Loop, Pointers, Struct  
Problem ID: [JduH6BpuraG1](https://ckj.imslab.org/#/problems/JduH6BpuraG1)  
</details>

### Description
One tourist train is departing, and it's powered by a steam locomotive.

Unfortunately, when passengers holding a party in cars,

the coal used as fuel in the back of the locomotive is on fire, burning red.

And every car contains different number of flammable items.

When passengers see the fire coming, they try to move these items to prevent fire burn to their car.

If number of peoples in the car >= amounts of flammable items, fire will not burn to this car and the following cars.

Otherwise, passengers in this car will evacuate to the the next car.

Now you know the number of people & flammable items in each car,

Please calculate how many cars will be burnt by fire.

This train is represented with linked-list，each `Car` node's `next` will point to the next car，last cat will points to `NULL`

![Image](https://i.imgur.com/sK1mOQQ.png)



一列鐵道觀光專車在春天來臨的花香中，乘著無盡想像發車了

為了為乘客們帶來種種回憶，主辦單位特別使用蒸氣火車頭牽引這列專車

很不幸的，乘客們正在車廂中開派對時，車頭後作為燃料的煤炭起火了，正發出熊熊火光

而後方每節車廂中都有數量不等的易燃物

當大家發現火災發生時，便試著將易燃物搬開來避免火勢延燒

若該節車廂人數 >= 易燃物數量時，火勢便會停止蔓延，不會延燒到該節和後續的車廂

但若人數不足，則車廂中所有人都會移往下一節車廂逃生

直到延燒停止或所有乘客無處可逃並跳車為止。

你已知的有每節車廂中的人數及易燃物數量

請計算火勢總共會延燒幾節車廂？

這列火車以 linked-list 形式紀錄，每個 `Car` 節點的 `next` 會指向下一節車廂，最後一節車廂則指向 `NULL`  
![Image](https://i.imgur.com/sK1mOQQ.png)



<https://youtu.be/eVwdeIDjXeM>


### Input
Head node of the linked-list representing the train.
### Output
Return one integer how many car is on fire.

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>
#include <stdlib.h>

struct Car {
    int passenger;
    int flammable;
    struct Car *next;
};

void attachCar(struct Car *head, int passenger, int flammable) {
    struct Car *curr = head;
    while(curr->next) curr = curr->next;             // Find the end of the train

    struct Car *newcar = malloc(sizeof(struct Car)); // Make a new car
    newcar->passenger = passenger;                   // Let passengers in
    newcar->flammable = flammable;                   // Load flammable items
    newcar->next = NULL;                             // This is the last car

    curr->next = newcar;                             // Attach new car to the train
}

int fire(struct Car *head);

int main(int argc, char *argv[])
{
    int cars;
    int human[13], moeru[13];

    struct Car head;
    head.next = NULL; // passenger & flammable for head in useless

    scanf("%d", &cars);
    for (int i = 0; i < cars; ++i) {
        scanf("%d", &human[i]);
    }
    for (int i = 0; i < cars; ++i) {
        scanf("%d", &moeru[i]);
    }

    for (int i = 0; i < cars; ++i) {
        attachCar(&head, human[i], moeru[i]);
    }

    printf("%d", fire(&head)); // The train is on fire now

    return 0;
}

```
</details>


### Example 1
#### Input
```
9
2 1 4 7 4 8 3 6 4
5 9 8 6 1 3 5 2 4

```
#### Output
```
3
```

### Example 2
#### Input
```
4
17 17 11 8
23 35 36 37

```
#### Output
```
2
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 65536 KB.  
## Throwing Cards Away
<details>
<summary>Details</summary>

Level: Medium  
Tags: Pointers, Struct  
Problem ID: [DxoGCZpWQRoT](https://ckj.imslab.org/#/problems/DxoGCZpWQRoT)  
</details>

### Description
Given an ordered deck of n cards numbered 1 to n with card 1 at the top and card n at the bottom, throw away the top card and move the next card that is on the top of the deck to the bottom of the deck. Repeat this process m times and find the sequence of discarded cards.

給一副排組，由上而下的編號為 1~n，共會進行 m 次抽取，每次抽走最上層的牌並輸出此牌的編號，再將最上層的牌放到牌組的最下方。


### Input
Two integers n & m.
### Output
The sequence of the discarded cards. Every number is followed by one space.

### Example 1
#### Input
```
7 7
```
#### Output
```
1 3 5 7 4 2 6 
```

### Example 2
#### Input
```
9 7
```
#### Output
```
1 3 5 7 9 4 8 
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 65535 KB.  
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
