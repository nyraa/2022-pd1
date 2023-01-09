void recovery(char *homework)
{
    char *word_starts = homework, *paste_starts = homework;
    int i = 0;
    _Bool sign_flag = 0, alpha_flag = 0, acceptable_flag = 1;
    while(1)
    {
        if(word_starts[i] == ' ' || word_starts[i] == '\0' || word_starts[i] == '\n')
        {
            if(acceptable_flag && alpha_flag)
            {
                // store
                strncpy(paste_starts, word_starts, i + 1); // +1 to paste space or \0 or \n char
                paste_starts += i + 1; // paste starting point to next starting point after space
            }
            // else also reset states and flags
            if(word_starts[i] == '\0' || word_starts[i] == '\n')
            {
                // add \0 to the end
                if(paste_starts == homework) *paste_starts = '\0';
                else *(paste_starts - 1) = '\0'; // paste starting point is after the space or \0 or \n, so -1 to target ending point
                // return
                return;
            }
            // reset state
            word_starts += i + 1; // jump i length chars includes space or \0 or \n
            i = 0;
            // clear flags
            alpha_flag = 0;
            sign_flag = 0;
            acceptable_flag = 1;
        }
        else if(i > 20)
        {
            acceptable_flag = 0;
            ++i;
        }
        else if(isalpha(word_starts[i]))
        {
            if(sign_flag) acceptable_flag = 0;
            alpha_flag = 1;
            ++i;
        }
        else if(word_starts[i] == '.' || word_starts[i] == ',' || word_starts[i] == '!' || word_starts[i] == '?')
        {
            if(sign_flag) acceptable_flag = 0;
            sign_flag = 1;
            ++i;
        }
        else
        {
            // unacceptable char
            acceptable_flag = 0;
            ++i;
        }
    }
}