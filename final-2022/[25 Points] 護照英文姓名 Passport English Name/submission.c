void convert (char *last, char *first) {
    int last_len = strlen(last);
    int first_len = strlen(first);
    if(last_len > 15 || first_len > 15)
    {
        printf("illegal");
        return;
    }
    for(int i = 0; i < last_len; ++i)
    {
        if(isalpha(last[i]))
        {
            putchar(toupper(last[i]));
        }
        else
            putchar(last[i]);
    }
    printf(", ");
    for(int j = 0; j < first_len; ++j)
    {
        if(isalpha(first[j]))
            putchar(toupper(first[j]));
        else if(first[j] == ' ')
            putchar('-');
    }
}