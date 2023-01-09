void enqueue(prio_queue_t *const queue, int value, int weight)
{
	node_t *new = malloc(sizeof(node_t));
    new->value = value;
    new->weight = weight;
    node_t *prev, *curr;
    for(prev = NULL, curr = queue->head; curr != NULL && weight >= curr->weight; prev = curr, curr = curr->next);
    new->next = curr;
    if(!prev)
        queue->head = new;
    else
        prev->next = new;
}

node_t *dequeue(prio_queue_t *const queue)
{
	if(queue->head == NULL) return NULL;
    node_t *pop = queue->head;
    queue->head = queue->head->next;
    return pop;
}