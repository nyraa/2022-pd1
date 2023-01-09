#include <stdio.h>
#include <stdlib.h>

struct Card
{
    int number;
    struct Card *next;
};

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    struct Card *head = NULL, *tail;
    for(int i = 1; i <= n; ++i)
    {
        struct Card *new_node = malloc(sizeof(struct Card));
        new_node->number = i;
        new_node->next = NULL;
        if(!head)
        {
            head = new_node;
            tail = head;
        }
        else
        {
            tail->next = new_node;
            tail = tail->next; // bottom to new_node
        }
    }
    for(int i = 0; i < m; ++i)
    {
        printf("%d ", head->number);
        tail->next = head->next;
        tail = tail->next;
        head = head->next->next;
    }
    return 0;
}
