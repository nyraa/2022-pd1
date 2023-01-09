struct node *read_data(int *size)
{
    *size = 0;
    struct node *adj = calloc(1000, sizeof(struct node));
    int fst_id;
    while(scanf("%d", &fst_id) != EOF)
    {
        scanf(" ->");
        struct node *head;
        for(int i = *size; i >= 0; --i)
        {
            if(*size > 0 && adj[i - 1].id > fst_id)
            {
                adj[i] = adj[i - 1];
            }
            else
            {
                head = adj + i;
                head->id = fst_id;
                head->next = NULL;
                break;
            }
        }
        // insert to adj
        int snd_id;
        while(scanf("%d", &snd_id), snd_id != 0)
        {
            struct node *neighbor_node = malloc(sizeof(struct node));
            neighbor_node->id = snd_id;
            neighbor_node->next = NULL;
            // insert to link-list
            struct node *cur = head;
            for(;cur->next && cur->next->id < snd_id; cur = cur->next);
            neighbor_node->next = cur->next;
            cur->next = neighbor_node;
        }
        ++(*size);
        getchar();
    }
    return adj;
}