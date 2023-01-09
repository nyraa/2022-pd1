## [15 Points] Do not get lost
<details>
<summary>Details</summary>

Level: Hard  
Tags: Function, Pointers, Struct, Malloc  
Problem ID: [pSA9q4OlneFW](https://ckj.imslab.org/#/problems/pSA9q4OlneFW)  
</details>

### Description
Zoro has got a treasure map which tells the place of a legendary sword was hidden. But Zoro has poor sense of direction that makes him gets lost easily. Luckily, There is a map app in his PDA that can digitalize treasure maps and provide a path to the treasure, thus, Zoro could move along the instruction given by the PDA. But the app is non-functional due to missing required library. Please help Zoro fix the issue.

There are three functions should be implemented:

* `init_node()`: Init the given node with provided id and paths start from the node.
* `step_to_next()` : Step from the `curr` node to the next node along the `next_idx`th path of the node.
* `deinit_node()`: Free the allocated space of given node.

![](https://thumbs.gfycat.com/AdoredPerfectHousefly-size_restricted.gif)





---

索隆得到了一張藏寶圖，上面標示出了一把傳說中的武士刀所在的位置。 但是索隆的方向感很差，很容易迷路。 幸運的是，他的掌上電腦上有一個地圖應用程式可以數位化藏寶圖並提供通往寶藏的路徑，這樣索隆就可以按照掌上電腦給出的指令移動。但是由於缺少所需的函式庫，該應用程式無法正常運行。 請幫助索隆解決這個問題。

請幫索隆實作以下三個功能：

* `init_node()`: 使用提供的 id 和路徑初始化給定節點。
* `step_to_next()`：從 `curr` 節點沿著第 `next_idx` 條路徑到下一個節點。
* `deinit_node()`: 釋放給定節點使用到的空間。

### Input
First line contains an integer N that indicates the number of nodes of the map.
The next N lines have the information of the nodes, each line is in the format "id pidx_1 ... pidx_n -1" where "id" is the name of the node, followed by a negative-one-terminated list of integers that means there is a path between the current node and the "pidx_i"th node.
Next line contains an integer S indicates the index of the start node.
The last line is a negative-one-terminated list of integers where the ith integer means that the ith path of the current node is the correct one.

第一行為一個整數 N，代表地圖的節點數。
接下來的 N 行包含節點的訊息，每行的格式為 “ID pidx_1 ... pidx_n -1”，其中 ID 是節點的名稱，之後為一個負一結尾的整數數列，其中 pidx_i 代表當前節點與第 i 個節點間存在路徑。
下一行包含一個整數 S 表示起始節點的索引。
最後一行是一個負一結尾的整數數列，其中第 i 個整數表示當前節點的第 i 個路徑是正確的。
### Output
ID of each node along the path, each ID occupies a line.

經過的每個節點的 ID，每個 ID 佔一行。

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>                             
#include <stdlib.h>                                                                           
#include <string.h>  
                                               
#define MAX_ID_LEN 32                       
#define MAX_PATH_CNT 16
                                               
typedef struct node_s {
    char *id;                                  
    struct node_s **paths;   
} node_t;                                                                                     
                                               
typedef struct map_s {
    unsigned node_cnt;           
    node_t *nodes;                                                                            
} map_t;                               

map_t *build_map();             
void destroy_map(map_t *map);                                                                 
void init_node(node_t *node, const char *id, node_t *paths[]);
void deinit_node(node_t *node);
node_t *step_to_next(node_t *curr, int next_idx);
                                               
int main()                                                                                    
{                                              
    map_t *map = build_map();

    int start_idx;
    scanf("%d", &start_idx);

    node_t *curr = &map->nodes[start_idx];
    while (curr) {
        int next_idx;
        scanf("%d", &next_idx);
        curr = step_to_next(curr, next_idx);
    }

    destroy_map(map);
   
    return 0;
}


map_t *build_map()
{
    map_t *map = malloc(sizeof(map_t));

    scanf("%d", &map->node_cnt);
    map->nodes = malloc(sizeof(node_t) * map->node_cnt);

    int max = 0;
    for (int i = 0; i < map->node_cnt; i++) {
        char id[MAX_ID_LEN + 1];
        node_t *paths[MAX_PATH_CNT + 1];

        scanf("%s", id);

        int curr_idx = 0, path_idx;
        while (scanf("%d", &path_idx), path_idx != -1) {
            paths[curr_idx++] = &map->nodes[path_idx];
        }

        paths[curr_idx] = NULL;

        init_node(&map->nodes[i], id, paths);
    }

    return map;
}

void destroy_map(map_t *map)
{
    for (int i = 0; i < map->node_cnt; i++)
        deinit_node(&map->nodes[i]);

    free(map->nodes);
    free(map);
}
```
</details>


### Example 1
#### Input
```
9
Laibin 3 4 6 8 1 -1
Guayaquil 2 5 3 8 7 -1
Kaifeng-Chengguanzhen 8 1 3 0 4 7 6 -1
Mexico-City 0 -1
Xianyang 1 -1
Malang 2 3 4 0 1 8 7 6 -1
Yingchuan 7 2 -1
Sale 4 5 8 1 2 3 0 -1
Libreville 7 2 3 5 6 1 0 4 -1
3
0 0 0 0 0 3 4 1 -1

```
#### Output
```
Mexico-City
Laibin
Mexico-City
Laibin
Mexico-City
Laibin
Libreville
Yingchuan
Kaifeng-Chengguanzhen

```

### Example 2
#### Input
```
5
Yibin 1 2 -1
Ciudad-Guayana 3 0 -1
Varanasi 3 0 -1
Jamestown 1 4 0 2 -1
Hejian 3 -1
2
0 0 1 1 -1

```
#### Output
```
Varanasi
Jamestown
Ciudad-Guayana
Yibin
Varanasi

```

### Example 3
#### Input
```
7
Dazhou 1 2 4 3 6 -1
Dingxi 2 4 -1
Bangalore 5 6 4 0 1 -1
Shiyan 5 2 4 6 0 1 -1
Yuci 2 0 -1
Bangui 1 3 -1
Laibin 0 3 -1
4
1 2 0 3 1 -1

```
#### Output
```
Yuci
Dazhou
Yuci
Bangalore
Dazhou
Bangalore

```

### Example 4
#### Input
```
6
Joao-Pessoa 3 5 -1
Rome 0 2 4 -1
Giza 0 1 4 5 3 -1
Cairo 4 5 0 1 -1
Yulinshi 0 1 -1
Guiping 4 0 2 3 -1
1
0 1 -1

```
#### Output
```
Rome
Joao-Pessoa
Guiping

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
