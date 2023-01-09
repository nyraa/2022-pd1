// buyer's price must > seller's price
#define UPDATE_MARKET() {if(curr_market->opening_price == 0) curr_market->opening_price = curr->price; \
                        curr_market->closing_price = curr->price; \
                        if(curr_market->highest_price < curr->price) curr_market->highest_price = curr->price; \
                        if(curr_market->lowest_price < 0 || curr_market->lowest_price > curr->price) curr_market->lowest_price = curr->price;}

void enqueue_seller(subject*, order*);
void enqueue_buyer(subject*, order*);
void dequeue(subject*, action_type, order*);
int market_len = 0;
void make_order(order *new_order)
{
    // TODO find market
    // TODO switch action type
    // TODO if buy
        // TODO find seller
            // TODO modify market
        // TODO if not complete
            // insert to market
    // TODO if sell
        // TODO find buyer
            // TODO modify market
        // TODO if not complete
            // TODO insert to market
    subject *curr_market;
    int i;
    for(i = 0; i < market_len; ++i)
    {
        if(strcmp(market[i].stock_id, new_order->stock_id) == 0)
        {
            curr_market = &market[i];
            break;
        }
    }
    if(i == market_len) // market not found
    {
        memset(&market[i], 0, sizeof(subject));
        strcpy(market[i].stock_id, new_order->stock_id);
        curr_market = &market[i];
        curr_market->lowest_price = -1;
        market_len++;
    }
    if(new_order->action == BUY)
    {
        if(curr_market->sell_orders == NULL) // no seller
        {
            // append to buyer
            enqueue_buyer(curr_market, new_order);
        }
        else
        {
            // find seller
            order *curr = curr_market->sell_orders;
            while(new_order->amount > 0 && curr)
            {
                if(curr->price <= new_order->price) // match
                {
                    if(curr->amount > new_order->amount) // market order left
                    {
                        curr->amount -= new_order->amount;
                        // update market
                        UPDATE_MARKET();
                        curr_market->trading_volumn += new_order->amount;
                        new_order->amount = 0;
                    }
                    else // market order no left
                    {
                        new_order->amount -= curr->amount;
                        curr_market->trading_volumn += curr->amount;
                        UPDATE_MARKET();
                        dequeue(curr_market, SELL, curr); // dequeue seller
                    }
                }
                curr = curr->next;
            }
            if(new_order->amount > 0) enqueue_buyer(curr_market, new_order);
            else free(new_order);
        }
    }
    else // sell
    {
        if(curr_market->buy_orders == NULL) // no buyer
        {
            // append to seller
            enqueue_seller(curr_market, new_order);
        }
        else
        {
            // find buyer
            order *curr = curr_market->buy_orders;
            while(new_order->amount > 0 && curr)
            {
                if(curr->price >= new_order->price) // match
                {
                    if(curr->amount > new_order->amount) // market order left
                    {
                        curr->amount -= new_order->amount;
                        // update market
                        UPDATE_MARKET();
                        curr_market->trading_volumn += new_order->amount;
                        new_order->amount = 0;
                    }
                    else // market order no left
                    {
                        new_order->amount -= curr->amount;
                        curr_market->trading_volumn += curr->amount;
                        UPDATE_MARKET();
                        dequeue(curr_market, BUY, curr); // dequeue buyer
                    }
                }
                curr = curr->next;
            }
            if(new_order->amount > 0) enqueue_seller(curr_market, new_order);
            else free(new_order);
        }
    }
}
void enqueue_seller(subject *curr_market, order *new_order)
{
    // smaller, prever
    order *prev, *curr;
    for(prev = NULL, curr = curr_market->sell_orders; curr != NULL && new_order->price >= curr->price; prev = curr, curr = curr->next);
    new_order->next = curr;
    if(!prev)
        curr_market->sell_orders = new_order;
    else
        prev->next = new_order;
}
void enqueue_buyer(subject *curr_market, order *new_order)
{
    order *prev, *curr;
    for(prev = NULL, curr = curr_market->buy_orders; curr != NULL && new_order->price <= curr->price; prev = curr, curr = curr->next);
    new_order->next = curr;
    if(!prev)
        curr_market->buy_orders = new_order;
    else
        prev->next = new_order;
}
void dequeue(subject *curr_market, action_type action, order *target)
{
    order *prev, *curr;
    if(action == BUY)
        curr = curr_market->buy_orders;
    else
        curr = curr_market->sell_orders;
    for(prev = NULL; curr != NULL && curr != target; prev = curr, curr = curr->next);
    if(curr)
    {
        if(!prev)
        {
            if(action == BUY)
                curr_market->buy_orders = curr->next;
            else
                curr_market->sell_orders = curr->next;
        }
        else
        {
            prev->next = curr->next;
        }
        // free(curr);
    }
}