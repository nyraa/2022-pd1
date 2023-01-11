void count(const char *name)
{
    for(int i = 0; i < cand_cnt; ++i)
    {
        if(!strcmp(name, counter[i].name)) ++counter[i].count;
    }
}

const char *winner()
{
    int max_index = -1, cand_index;
    for(int i = 0; i < cand_cnt; ++i)
    {
        if(counter[i].count > max_index)
        {
            max_index = counter[i].count;
            cand_index = i;
        }
    }
    return counter[cand_index].name;
}