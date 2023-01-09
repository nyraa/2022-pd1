// orz colten
// orz colten
// orz colten
void find_orz(int orz_position[], int *orz_num)
{
    _Bool o_flag = 0, r_flag = 0;
    int prob_pos;
    for(int i = 0; i < N; ++i)
    {
        if(str[i] == 'o')
        {
            o_flag = 1;
            prob_pos = i;
        }
        else if(o_flag && str[i] == 'r') r_flag = 1;
        else if(r_flag && str[i] == 'z')
        {
            *orz_num += 1;
            orz_position[*orz_num - 1] = prob_pos;
            o_flag = r_flag = 0;
        }
    }
}

void calculate_worship(int worship_amount[], int range_index, int left_orz_position, int right_orz_position){
    int left = left_orz_position + 3;
    int met_types[26] = {0};
    for(int i = 0; i < right_orz_position - left; ++i)
    {
        met_types[str[left + i] - 'a'] += 1;
    }
    int type_num = 0;
    for(int i = 0; i < 26; ++i)
    {
        if(met_types[i] > 0) type_num += 1;
    }
    worship_amount[range_index] = type_num * (right_orz_position - left);
}
int max_worship_cache = -1;
int find_max_worship_range(int value, int *range_L, int *range_R, int left_orz_position, int right_orz_position)
{
    if(value > max_worship_cache)
    {
        max_worship_cache = value;
        *range_L = left_orz_position + 1;
        *range_R = right_orz_position + 1;
        return max_worship_cache;
    }
    else
    {
        return max_worship_cache;
    }
}