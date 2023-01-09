search_t *get_param_by_key (char *url, char *key)
{
    search_t *result = malloc(sizeof(search_t));
    // TODO move start to ? before #
    int hash = 0;
    while(*url && !hash && *url != '?')
    {
        if(*url == '#') hash = 1;
        ++url;
    }
    if(hash || *url == '\0') return NULL; // no get param
    // TODO split end to #
    url = strtok(url, "#");
    url += 1;
    char *k_start, *v_start, *p = url;
    int fin_flag = 0;
    while(!fin_flag)
    {
        // TODO move to = and mark as \0 -> key -----> =
        k_start = p;
        while(*p != '=') ++p;
        *p = '\0';
        p += 1;
        // TODO move to & or \0 and mark as \0 -> value -------> \0
        v_start = p;
        while(*p != '&')
        {
            if(*p == '\0')
            {
                fin_flag = 1;
                break;
            }
            ++p;
        }
        *p = '\0';
        p += 1;
        if(strcmp(k_start, key) == 0)
        {
            result->key = key;
            result->value = v_start;
            return result;
        }
    }
    return NULL;
}