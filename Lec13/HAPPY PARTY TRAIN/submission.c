int fire(struct Car *head) {
	struct Car *curr = head;
    int burned = 0;
    int running_passenger = 0;
    while(curr = curr->next)
    {
        curr->passenger += running_passenger;
        running_passenger = 0;
        if(curr->flammable > curr->passenger)
        {
            // burned
            ++burned;
            running_passenger = curr->passenger;
        }
        else
        {
            break;
        }
    }
    return burned;
}
