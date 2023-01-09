void init_node(node_t *node, const char *id, node_t *paths[])
{
    node->id = malloc(strlen(id));
    strcpy(node->id, id);

    int path_size = 0;
    for(path_size = 0; paths[path_size] != NULL; ++path_size);
    node->paths = malloc(sizeof(node_t) * path_size);
    memcpy(node->paths, paths, sizeof(node_t*) * path_size);
}

void deinit_node(node_t *node)
{
    free(node->id);
    free(node->paths);
    // free(node);
}

node_t *step_to_next(node_t *curr, int next_idx)
{
    printf("%s\n", curr->id);
    if(next_idx == -1) return NULL;
    return curr->paths[next_idx];
}