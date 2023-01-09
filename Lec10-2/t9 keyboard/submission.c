void convert(char *arr[], int count)
{
    char *keyboard[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	for(int i = 0; i < count; ++i)
    {
        char *c = arr[i];
        char buffer[BUFFER_LEN] = {0};
        while(*c != '\0')
        {
            if(*c == ' ' || *c == '\n')
            {
                sprintf(buffer + strlen(buffer), "%c", *c);
                ++c;
                continue;
            }
            for(int j = 0; j < 8; ++j)
            {
                char *key = keyboard[j];
                int times = 1;
                while(*key != '\0')
                {
                    if(*c == *key)
                    {
                        // printf("(%d)%d", j + 2, times);
                        sprintf(buffer + strlen(buffer), "(%d)%d", j + 2, times);
                        break;
                    }
                    ++key;
                    ++times;
                }
            }
            ++c;
        }
        strcpy(arr[i], buffer);
    }
}