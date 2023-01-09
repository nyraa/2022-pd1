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
