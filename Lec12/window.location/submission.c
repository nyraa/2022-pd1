Location *parse_url(char *url)
{
    Location *location = malloc(sizeof(Location));
    char *host = NULL, *port = NULL, *pathname = NULL, *search = NULL, *hash = NULL;
    for(char *p = url; *p != '\0'; ++p)
    {
        if(!host && *p == ':')
        {
            *p = '\0';
            p += 3;
            host = p;
        }
        else if(!pathname && !search && !hash && *p == ':')
        {
            *p = '\0';
            port = p + 1;
        }
        else if(!pathname && !search && !hash && *p == '/')
        {
            *p = '\0';
            pathname = p + 1;
        }
        else if(!hash && *p == '?')
        {
            *p = '\0';
            search = p + 1;
        }
        else if(*p == '#')
        {
            *p = '\0';
            hash = p + 1;
        }
        else if(*p == '\n') *p = '\0';
    }
    // fill in
    location->protocol = url;
    location->host = host;
    location->port = port ? atoi(port) : 0;
    location->pathname = pathname ? pathname : "";
    location->search = search ? search : "";
    location->hash = hash ? hash : "";

    return location;
}