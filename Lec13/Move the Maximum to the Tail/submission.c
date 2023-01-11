void MoveToTail()
{
    struct node *max = head, *max_prev = NULL;
    for(struct node *curr = head, *prev = NULL; curr != NULL; prev = curr, curr = curr->next)
    {
        if(curr->val > max->val)
        {
            max = curr;
            max_prev = prev;
        }
    }
    if(max == tail) return;
    else if(max_prev)
    {
        max_prev->next = max->next;
        tail->next = max;
        max->next = NULL;
    }
    else
    {
        head = max->next;
        tail->next = max;
        max->next = NULL;
    }
}