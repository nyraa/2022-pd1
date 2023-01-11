# final-2022
## [15 Points] Stock Trading
<details>
<summary>Details</summary>

Level: Hard  
Tags: Function, String, Pointers, Struct  
Problem ID: [rxUvZH-PDWOn](https://ckj.imslab.org/#/problems/rxUvZH-PDWOn)  
</details>

### Description
你知道股市是怎麼運作的嗎？股票市場上隨時都有人在進行交易，一下子有人要買一張台積電 (2330)，一下子有人要賣兩張長榮 (2603)，如果放任所有要交易股票的人在交易所的大廳比大聲的話，場面將會混亂不堪。因此，股票市場為了要維持有秩序的交易，有了以下的安排：

1. 所有交易都必須要寫在單子上拿給營業員，上面必須記載你的**交易標的（要交易哪支股票）**、**是買方還是賣方**、**委託價（要交易在多少金額）**、**委託量（要交易多少張股票）**。
2. 營業員收到單子後，首先看你是要**交易哪一個標的**。例如：你要交易台積電。
3. 確定標的後，再看你**是買方還是賣方**。例如：你要買台積電。
4. 接著拿著你的單子和其它已經存在於市場上的委託比對，開始逐張撮合交易。


	* 如果現在收到的這張單子是**要買股票**，那就**在賣方隊伍裡看看**有沒有人要賣的價格**等於或低於**這張單子的價格。如果有的話，**由價格最低者開始往上成交**，直到交易量**滿足委託量**，或是價格**高於委託價為止**。例如：你出價要買三張 634 元的台積電，而賣方隊伍裡有三個人，分別要賣 632, 634, 636 元的台積電，那麼你會買到一張 632 元的台積電，和一張 634 元的台積電，剩下一張則還沒有成交，需要放進買方隊伍。
	* 如果現在收到的這張單子是**要賣股票**，那就**在買方隊伍裡看看**有沒有人要買的價格**等於或高於**這張單子的價格。如果有的話，**由價格最高者開始往下成交**，直到交易量**滿足委託量**，或是價格**低於委託價**為止。
	* 如果上述步驟無法滿足委託量，就把沒有辦法成交的量塞到買方/賣方隊伍中**該價格的尾端**，等待後續的撮合。

你可以手動撮合範例測資 1 來理解整個交易過程。

給定你某一天的股市交易委託記錄，請你計算當天各家股票的交易資訊，包含：

* **交易量**: 該股票總共有幾張成交
* **開盤價**: 當天第一次成交的價格
* **收盤價**: 當天最後一次成交的價格
* **最高價**: 當天所有成交價格中最高的價格
* **最低價**: 當天所有成交價格中最低的價格

Do you know how does the stock market work? In the stock market, there are always many people trading their shares. While someone want to buy a unit of TSM (2330), another one want to sell two units of EGMD (2603) in the meantime. it is natural that everybody want to be the first one to submit the order, and it is not a good idea to let people fight over who go first at the stock exchange. In order to maintain a peaceful stock market, there are some rules of the stock trading process:

1. One must provide their order information to the agent. The order information includes: **trading target**, **buy or sell**, **order price**, and **order amount (the amount of shares)**.
2. Once the agent receive an order, it first checks for the **trading target**. For example: one want to trade 2330.
3. After the trading target is confirmed, the agent then checks **whether the order is an order to buy or an order to sell**. For example: one want to buy 2330.
4. After the target and the action are both confirm, the agent starts to transact the order.


	* If the current order is an order to **buy stock**, the agent **checks out the sell queue** to see whether there are any pending order whose order price is **equal to or lower than** the order price of the current order. If yes, **the pending orders with the lower order price will be transacted earlier**. The transaction keeps going on until **the current order amount is fulfilled** or **the lowset order price of the remaining pending orders is higher than the current order price**. For example: one want to buy 3 units of 2330 at $634, and there are 3 people want to sell 1 unit of 2330 at $632, $634, $636, respectively. At this point, the 2 transaction will be made. The buyer will get 1 unit of 2330 at $632, and 1 unit of 2330 at $634. The remaining 1 unit is not transacted, and need to be put into the buy queue.
	* If the current order is an order to **sell stock**, the agent **checks out the buy queue** to see whether there are any pending order whose order price is **equal to or higher than** the order price of the current order. If yes, **the pending orders with the higher order price will be transacted earlier**. The transaction keeps going on until **the current order amount is fulfilled** or **the highest order price of the remaining pending orders is lower than the current order price**.
	* If there are no more pending order can be transacted but the current order amount is still not fulfilled, the remaining amount should be put to **the end of the buy queue / sell queue for that order price**.

You can try to process the example 1 manually to help you understand the rules.

Now, given an stock market order record, please calculate the trade summary of each trading target, including:

* **trade volumn**: how many unit of shares are transacted
* **opening price**: the trade price of the first transaction
* **closing price**: the trade price of the final transaction
* **highest price**: the highest trade price amoung all the transaction
* **lowset price**: the lowset trade price amoung all the transaction

### Input
共有若干行輸入，每一行有四個資訊，由空白鍵分開，分別是：

* 股票代號（四位整數）

* 買或賣（BUY / SELL）

* 委託價格

* 委託張數

可能出現的股票代號總共有 50 間。



There are multiple lines of input. Each line contains 4 information, separated by a space:

* Stock id

* Buy or sell (BUY / SELL)

* Order price

* Order amount



There are 50 different trading target in the market.
### Output
當日個股的交易統計量。



The trade summary.

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MARKET_SIZE 50

typedef enum
{
    BUY,
    SELL
} action_type;

typedef struct _order
{
    char stock_id[5];
    action_type action;
    float price;
    int amount;
    struct _order *next;
} order;

typedef struct
{
    char stock_id[5];
    int trading_volumn;
    float opening_price;
    float closing_price;
    float highest_price;
    float lowest_price;
    order *buy_orders;
    order *sell_orders;
} subject;

subject market[MARKET_SIZE];

void make_order(order *new_order);

int cmp(const void *a, const void *b)
{
    subject *subjectA = (subject *)a;
    subject *subjectB = (subject *)b;

    return (subjectB->trading_volumn - subjectA->trading_volumn);
}

void print_price(float price){
    if(price < 50) printf("  %6.2f", price);
    else if(price < 500) printf("  %6.1f", price);
    else printf("  %6.0f", price);
}

int main()
{
    char buffer[30], target[5], action[5];
    float price;
    int amount;

    while (fgets(buffer, 30, stdin) != NULL)
    {
        if(buffer[0] == '\n') break;
        sscanf(buffer, "%s %s %f %d\n", target, action, &price, &amount);

        order *new_order = (order *)malloc(sizeof(order));

        strcpy(new_order->stock_id, target);
        new_order->action = strcmp(action, "BUY") ? SELL : BUY;
        new_order->price = price;
        new_order->amount = amount;
        new_order->next = NULL;

        make_order(new_order);
    }

    qsort(market, MARKET_SIZE, sizeof(subject), cmp);

    printf("stock_id  volumn    open   close    high     low\n");
    for (int i = 0; i < MARKET_SIZE && market[i].stock_id[0] != '\0'; ++i)
    {
        printf("%s      %6d", market[i].stock_id ,market[i].trading_volumn);
        print_price(market[i].opening_price);
        print_price(market[i].closing_price);
        print_price(market[i].highest_price);
        print_price(market[i].lowest_price);
        printf("\n");
    }

    return 0;
}
```
</details>


### Example 1
#### Input
```
2330 BUY 634 1
2330 SELL 634 1
2330 BUY 634 2
2330 BUY 635 3
2330 SELL 638 10
2330 SELL 637 5
2330 SELL 633 7
2330 BUY 634 4
2330 BUY 640 20
2330 SELL 630 6
```
#### Output
```
stock_id  volumn    open   close    high     low
2330          29     634     634     640     633

```

### Example 2
#### Input
```
2603 BUY 141 6
2303 BUY 63.7 4
2603 BUY 145 4
2603 SELL 137.5 5
2330 SELL 610 1
2303 BUY 61.6 6
2603 SELL 142.5 7
2303 SELL 63.6 1
2303 SELL 58.6 55
2330 BUY 636 10
```
#### Output
```
stock_id  volumn    open   close    high     low
2303          10    63.7    61.6    63.7    61.6
2603           5   145.0   141.0   145.0   141.0
2330           1     610     610     610     610

```

### Example 3
#### Input
```
2317 SELL 109 8
2317 BUY 109.5 6
2303 BUY 62.6 9
2303 BUY 66.1 7
2317 BUY 109.5 10
0050 SELL 143 8
0050 BUY 146 8
0050 BUY 145.5 5
2603 BUY 144.5 4
2317 BUY 104 9
0050 BUY 147 3
2317 SELL 100 9
2603 SELL 135 59
2317 SELL 99.3 9
2303 SELL 61.6 43
0050 BUY 151.5 9
2603 SELL 143 5
2303 BUY 64.2 9
2317 BUY 105 8
0050 BUY 147 3
0050 SELL 150.5 8
0050 BUY 149 49
0050 SELL 144.5 4
2303 SELL 64 10
2303 SELL 62 8
2317 SELL 98.7 6
0050 SELL 145.5 6
0050 SELL 143.5 25
0050 SELL 147 2
2603 BUY 147 9
```
#### Output
```
stock_id  volumn    open   close    high     low
0050          53   143.0   149.0   151.5   143.0
2317          32   109.0   105.0   109.5    99.3
2303          25    66.1    61.6    66.1    61.6
2603          13   144.5   135.0   144.5   135.0

```

### Example 4
#### Input
```
2409 BUY 23.35 7
2609 BUY 113 1
2409 SELL 22.55 10
2303 BUY 60.6 54
2603 SELL 140 7
2498 SELL 77.2 3
2498 BUY 82 1
2609 SELL 110.5 7
2409 SELL 22.15 3
2498 BUY 77.4 6
0050 BUY 143.5 7
2409 SELL 22.15 1
2409 BUY 22.6 2
0050 SELL 143 9
2609 SELL 111.5 9
2303 SELL 63.9 4
3481 BUY 19.35 90
2603 SELL 136.5 9
2303 BUY 64.4 6
2330 BUY 632 1
2303 SELL 58.6 2
3481 SELL 19.35 2
2330 SELL 612 6
2498 SELL 80.4 2
0050 SELL 142 10
2603 BUY 140.5 8
2409 BUY 22.55 3
0050 BUY 146.5 1
2609 BUY 113.5 10
2603 BUY 142.5 3
```
#### Output
```
stock_id  volumn    open   close    high     low
2409          12   23.35   22.55   23.35   22.15
2609          11   113.0   111.5   113.0   110.5
2603          11   136.5   140.0   140.0   136.5
0050           8   143.5   142.0   143.5   142.0
2303           6    63.9    64.4    64.4    63.9
2498           3    77.2    77.2    77.2    77.2
3481           2   19.35   19.35   19.35   19.35
2330           1     632     632     632     632

```

### Limits
Your program needs to finish task in 5 seconds.  
Your program can only use memory less than 8192 KB.  

### Hint
<details>
<summary>Hint</summary>
你可以用優先佇列 (priority queue) 來儲存等候撮合的委託單。 You should maintain a priority queue to store your pending orders.
</details>
## [20 Points] URL Search Parameter Parser
<details>
<summary>Details</summary>

Level: Medium  
Tags: Malloc, Struct, String, Pointers, Loop, If/else  
Problem ID: [8tRlncuo7h7W](https://ckj.imslab.org/#/problems/8tRlncuo7h7W)  
</details>

### Description
在 [windows.location](https://ckj.imslab.org/#/problems/RS_5xkB0PF-1) 裡面有提及，在網址不同的位置，會處存不同的資訊，現在我們要來處理 **查詢字串** 欄位的資訊。

一個查詢字串是由多組的 鍵 (key) / 值 (value) 所構成。  
在查詢字串內，鍵/值 的格式為 `[鍵]=[值]`，且每組 鍵/值 會以 `&` 分開

以下範例為包含多組 鍵/值 的網址:  
`https://www.abc.com/photo?from=20180101&to=20201231#favorite`  
範例中查詢字串的部分為 `from=20180101&to=20201231`，  
當中包含兩組 鍵/值，分別為

* `from=20180101`
* `to=20201231`

在同一網址中，若有重複出現相同**鍵**的情形，通常會只使用**較早出現**的 鍵/值 內容，舉例來說，在 `foo=bar&foo=baz` 這個查詢字串的部分，`foo` 的值會是 `bar`。

在查詢字串的欄位中，也有機會出現只有**鍵**，而**值**則為空字串的情形，舉例來說，在 `foo=&bar=123` 這個查詢字串內，`foo` 的值會是 (空字串，長度為 0)。

在網頁的應用上，查詢字串常常會被使用在想要向伺服器要求特定資料時，如以下的網址：  
`http://www.abc.com/profile?userid=10`  
在這裡，可以猜測使用者試圖使用這個網址獲得 `userid` 為 `10` 的使用者資料。

現在給定一串合法的網址與一個想要查詢的**鍵** ，請你印出相對應**值**的內容，若想要查詢的**鍵**不存在，請印出 `404 Not Found`。

網址的格式為：`通訊協定://主機名稱[:通訊埠][/所在路徑][?查詢字串][#識別符號]`，其中 `[]` 中為可省略之元素，即不一定會出現。



---

As mentioned in [windows.location](http://127.0.0.1/?bar=123&zoo=456), there are different information stored in different position of url. Now we are going to parse the content of **search** section, which is also known as **query string**.

A **search** part is composed of key/value pairs. The format of each pair is `[key]=[value]` and separated by `&`.

Following is an example url that contains multiple key/value pairs.  
`https://www.abc.com/photo?from=20180101&to=20201231#favorite`  
The search part of the url is `from=20180101&to=20201231` that includes two pairs of key/value:

* `from=20180101`
* `to=20201231`

If there is duplicated key, the first key/value pair of the key should be kept. For instance, if we search `foo` with in `foo=bar&foo=baz`, the result will be `bar`.

It is possible that the `value` field is empty. Take `foo=&bar=123` as example, the value of `foo` will be (empty string).

A common application of the search part of a url is for querying specific data. For example, with the following url:  
`http://www.abc.com/profile?userid=10`  
We may assume the profile of the user with `userid` is `10` will be returned from the host `www.abc.com`.

Please print the corresponding key/value pair of the given key from the provided url. If the required key does not exist, `404 Not Found` should be printed.

The format of the url is: `portocol://host[:port][/pathname][?search][#hash]`, where the components enclosed by `[]` are optional, that is, may not be provided in the url.


### Input
第一個字串代表輸入的 URL，長度介於 10 ~ 2048 個字元，並且使用換行符號結尾

第二個字串代表指定的 key，長度介於 1 ~ 100 個字元



The first string indicates url, which is composed of 10-2048 characters.

The second string indicates key, which is composed of 1-100 characters.
### Output
若在 url 中有找到對應的 鍵/值，依照格式印出 鍵/值

格式為 key:[key], value:[value]

若沒有找到，則印出 404 Not Found



If the key can be found in url, print key/value with following format:

“key:[key], value[value]”

Otherwise, print “404 Not Found”.

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define URL_MAX 2048
#define KEY_MAX 100

typedef struct search_s {
    char *key;
    char *value;
} search_t;

search_t *get_param_by_key(char *url, char *key);

int main ()
{
    char url[URL_MAX + 1], key[KEY_MAX + 1];

    fgets(url, URL_MAX, stdin);
    scanf("%s", key );

    search_t  *param = get_param_by_key (url, key);

    if (param)
        printf("key: %s, value: %s", param->key, param->value);
    else
        printf("404 Not Found");
}
```
</details>


### Example 1
#### Input
```
https://web.ncku.edu.tw/index.php?Lang=zh-tw
language
```
#### Output
```
404 Not Found
```

### Example 2
#### Input
```
http://test.com/?pet=cat&pet=dog&userid=1
pet
```
#### Output
```
key: pet, value: cat
```

### Example 3
#### Input
```
https://test/haha/
key
```
#### Output
```
404 Not Found
```

### Example 4
#### Input
```
http://127.0.0.1/?meow=zoo&bar=123&zoo=456#shop
zoo
```
#### Output
```
key: zoo, value: 456
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  
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
## [20 Points] gettoken
<details>
<summary>Details</summary>

Level: Medium  
Tags: Pointers, String  
Problem ID: [MvfeA2m8uw2V](https://ckj.imslab.org/#/problems/MvfeA2m8uw2V)  
</details>

### Description
Please write a `gettoken` function which can isolate sequential tokens in a null-terminated string. The first argument `str` is a pointer to char which will point to the string that we want to get tokens from. The second argument `sep` is a string of separator. The first time that `gettoken` is called, `str` should be specified; subsequent calls, wishing to obtain further tokens from the same string, should pass a NULL pointer instead.

**strtok, strtok\_r, strsep is banned in this problem**



---

請寫一個 `gettoken` 函式將一個 null-terminated 字串分割為 token。第一個參數 `str` 為一個指標，指向我們想要得到 token 的字串。第二個參數 `sep` 是一個字串，其中的字元為分割字元。`gettoken` 第一次被呼叫時需給定 `str`，其後的呼叫如果要繼續在同一個字串分割 token 需傳入 NULL。

**本題禁用 strtok, strtok\_r, strsep**


### Input
The first line contains an integer N that indicates the number of lines, followed by N lines of text, each line will be less than 4000 character

第一行為一數字 N 代表總共有幾行文字，接下來有 N 行文字，每行文字會小於 4000 個字元
### Output
Multiple tokens, each separated by a newline 

多個 token，token 之間用換行分開

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>
#include <stdlib.h>

char *strtok(char *s, const char *sep) {
  printf("strtok banned\n");
  exit(1);
}
char *strtok_r(char *str, const char *sep, char **lasts) {
  printf("strtok_r banned\n");
  exit(1);
}

char *strsep(char **stringp, const char *delim) {
  printf("strsep banned\n");
  exit(1);
}
char *gettoken(char *str, const char *sep);
int main() {
  char buffer[4096];
  char *sep = " \t\n;,.?!";
  char *word;
  int N;
  scanf("%d\n", &N);
  for (int i = 0; i < N; i++) {
    fgets(buffer, 4095, stdin);
    for (word = gettoken(buffer, sep); word != NULL;
         word = gettoken(NULL, sep)) {
      printf("%s\n", word);
    }
  }
}

```
</details>


### Example 1
#### Input
```
1
C makes it easy to shoot yourself in the foot; C++ makes it harder, but when you do, it blows your whole leg off.

```
#### Output
```
C
makes
it
easy
to
shoot
yourself
in
the
foot
C++
makes
it
harder
but
when
you
do
it
blows
your
whole
leg
off

```

### Example 2
#### Input
```
2
When I wrote this code, only God and I understood what I did. Now... only God knows.
C programmers never die. They are just cast into void.

```
#### Output
```
When
I
wrote
this
code
only
God
and
I
understood
what
I
did
Now
only
God
knows
C
programmers
never
die
They
are
just
cast
into
void

```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  

### Hint
<details>
<summary>Hint</summary>
pointers, static/global variable
</details>
## [25 Points] 護照英文姓名 Passport English Name
<details>
<summary>Details</summary>

Level: Easy  
Tags: If/else, Loop, Array, Pointers, String, Function  
Problem ID: [9zFlJP1QtipZ](https://ckj.imslab.org/#/problems/9zFlJP1QtipZ)  
</details>

### Description
世界各地現在都邁向解封之路，不再因Covid-19，而有隔離檢疫措施。也就是說，出入境不需要隔離檢疫，也因此大家開始辦護照準備出國。

你有一個朋友恰好在旅行社工作，這位朋友在協助客戶辦護照的時候發現，大家填寫姓名的大小寫都不太一樣，名字兩個字則填空白，而不是規定的連接號 (dash)，所以想請你這位程式高手幫他解決這個問題。

這個程式要能分別輸入英文姓氏和名字，一般而言，中文姓名的姓氏是一個字或兩個字，名字也是一個字或兩個字。輸入無論大小寫都應該要轉換成規定的格式。

中文姓名翻譯成英文姓名的格式如下：

1.          第一欄為姓 (Last name)，複姓的兩個字中間需有一個空白

2.          一個半形逗點和一個半形空白

3.          第二欄為名字 (First name)，一至二個字，兩個字的中間需有一個連接號 (dash)

例如：王小明的英文姓名輸入，姓和名可能輸入是 "Wang"、"Xiao Ming"；"wang"、"xiao ming"；"WANG"、"XIAO MING" 等等。正確輸出的結果，「王小明」的英文姓名是："WANG, XIAO-MING"。

如果是複姓的姓名，例如：「歐陽小美」的英文姓名是："OU YANG, XIAO-MEI"。

注意：限制輸入大小是 15 個字元，意即姓或名其中之一不可超過 15 字元，超過的話要輸出 "illegal"，且不須輸出轉換後的姓名。

All over the world is now on the road to unsealing, no longer having quarantine for Covid-19. In other words, there is no need for quarantine to enter or leave the country, so people are getting their passports ready to leave the country.

You have a friend who works in a travel agency. When he was helping his customers to apply for passports, he found that people were filling in their names in different cases and filling in the blanks instead of the dash.

The program should be able to input English last name and first name separately. In general, Chinese names have one or two characters for the last name and one or two characters for the first name. The input should be converted to the required format regardless of case.

The format for translating Chinese names into English names is as follows.

1.          The first column is the surname (Last name), there should be a space between the two words of the compound surname

2.          A half comma and a half blank

3.          The second column is the First name, one to two words, with a dash in the middle of the two words.

For example: 王小明’s English name input, the last name and first name may be entered as "Wang", "Xiao Ming"; "wang", "xiao ming"; "WANG", "XIAO MING" and so on. The correct output results in the English name of "WANG, XIAO-MING".

If it is a name with a compound surname, e.g. "歐陽小美" the English name is: "OU YANG, XIAO-MEI".

Note: The input size is limited to 15 characters, i.e. one of the last name or first name cannot exceed 15 characters, if it exceeds that, "illegal" should be output, and the converted name should not be output.


### Input
第一列為中文翻譯英文的姓氏 (Last name)，例如："Wang"。

第二列為中文翻譯英文的名字 (First name) ，例如："Xiao-Ming"。

輸入以換行結尾，即姓氏與名字輸入後皆會按下換行。

The first column is the Chinese translation of the English surname (Last name), for example: "Wang".

The second column is the Chinese translation of the English name (First name), for example: "Xiao-Ming".

The input ends with a newline, i.e., both the last name and first name will click a newline after input.




### Output
護照格式的完整英文姓名。若姓或名其中之一超過 15 字元的規定長度，則輸出 "illegal"。

Complete English name in passport format. If either the last name or first name exceeds the required length of 15 characters, "illegal" is output.

### Loader Code
<details>
<summary>Loader Code</summary>

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 15

void convert (char *last, char *first);

int main()
{
    char last_name[MAX_LEN + 2];
    char first_name[MAX_LEN + 2];
    
    // Enter last name
    fgets(last_name, MAX_LEN*2 , stdin);
    if(last_name[strlen(last_name) - 1] == '\n')
        last_name[strlen(last_name) - 1] = '\0';
    
    // Enter first name
    fgets(first_name, MAX_LEN*2, stdin);
    if(first_name[strlen(first_name) - 1] == '\n')
        first_name[strlen(first_name) - 1] = '\0';
    
    // Convert and print the name by using the function convert
    convert(last_name, first_name);
    
    return 0;
}
```
</details>


### Example 1
#### Input
```
Wo Ai
Chengshi Sheji

```
#### Output
```
WO AI, CHENGSHI-SHEJI
```

### Example 2
#### Input
```
ShEn haI
GuiYU yOUGoUhaochi

```
#### Output
```
illegal
```

### Example 3
#### Input
```
WOHAO XINGFEN
A

```
#### Output
```
WOHAO XINGFEN, A
```

### Limits
Your program needs to finish task in 1 seconds.  
Your program can only use memory less than 5000 KB.  

### Hint
<details>
<summary>Hint</summary>
中文姓名的前面是姓氏 last name，後面是名字 first name。 The Chinese name is preceded by the last name (surname) and followed by the first name.
</details>
## [25 Points] Predict Mudslides
<details>
<summary>Details</summary>

Level: Easy  
Tags: Recursive, Array, If/else  
Problem ID: [N0tym-sh9KCA](https://ckj.imslab.org/#/problems/N0tym-sh9KCA)  
</details>

### Description
11 月連日的大豪雨，讓台灣北部的山地發生許多起土石流，為了減少土石流的災害，研究院的學生們想開發一個可以偵測土石流衝擊面積的應用程式，在一個 5 \* 5 的地圖上，堤防標示為 1，平地標示為 0 ，建築物標示為 2。一開始會有一個發生土石流的開始的位置，之後便經由這個點向上下左右衝擊，遇到提防會停下來，請寫一個程式，給出地圖跟開始的位置，可以知道有幾間房子被衝擊到。例如下面有一個地圖：

0 1 0 1 2

0 1 2 1 1

0 1 0 0 2

2 0 1 0 0

2 2 0 1 0

地圖左上角為(0,0)。 由 ( 0, 2 ) 開始發生土石流，遇到 1 的堤坊會停止， 所以最後會衝擊到 2 間房屋 (1,2) 與 (2, 4 )。



---

Days of heavy rain in November caused many mudslides in the mountains of northern Taiwan. In order to reduce the disaster of mudslides, the students of the research institute want to develop an application that can detect the impact area of ​​mudslides. On a 5 \* 5 map, Dikes are marked as 1, flat land as 0, and buildings as 2. In the beginning, there will be a starting position of a mudslide, and then it will impact up, down, left, and right through this point, and it will stop when it encounters a dike. Please write a program to give a map and the starting position, so that you can know how many houses have been impacted by mudslides. For example, here is a map

0 1 0 1 2

0 1 2 1 1

0 1 0 0 2

2 0 1 0 0

2 2 0 1 0

The upper left corner of the map is (0,0). The mudslide starts from (0, 2), and it will stop when it encounters the dike of 1, so it will rush to the 2 buildings (1,2) and (2, 4) in the end.


### Input
6 行，第一行代表開始發生土石流的地方，接下來是一個 5 *5 的地圖。

0 2

0 1 0 1 2

0 1 2 1 1

0 1 0 0 2

2 0 1 0 0

2 2 0 1 0 


### Output
有幾間房子會受到波及

2

### Example 1
#### Input
```
0 2
0 1 0 1 2
0 1 2 1 1
0 1 0 0 2
2 0 1 0 0
2 2 0 1 0 

```
#### Output
```
2

```

### Limits
Your program needs to finish task in 15 seconds.  
Your program can only use memory less than 100000 KB.  
