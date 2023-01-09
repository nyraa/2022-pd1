
int main()
{
    unsigned char matrix[4][4];
    for(int i = 0; i < 4; ++i)
    {
        for(int j = 0; j < 4; ++j)
        {
            int v;
            // step 1
            scanf("%d", &v);
            // step 2
            unsigned char c = v + '0' - 1;
            // step 3
            matrix[j][i] = c;
        }
    }
    for(int round = 0; round < 5; ++round)
    {
        // step 4
        for(int i = 0; i < 4; ++i)
        {
            for(int j = 0; j < 4; ++j)
            {
                unsigned char c = matrix[j][i];
                int k_row = (c & 0xf0) >> 4;
                int k_col = (c & 0x0f);
                matrix[j][i] = sbox[k_row][k_col];
            }
        }
        // step 5
        for(int i = 0; i < 4; ++i)
        {
            for(int j = 0; j < i; ++j)
            {
                unsigned char tmp = matrix[i][0];
                for(int k = 0; k < 3; ++k)
                    matrix[i][k] = matrix[i][k+1];
                matrix[i][3] = tmp;
            }
        }
        // step 6
        for(int i = 0; i < 4; ++i)
        {
            for(int j = 3 - i; j > 0; --j)
            {
                unsigned char tmp = matrix[3][i];
                for(int k = 3; k > 0; --k)
                    matrix[k][i] = matrix[k-1][i];
                matrix[0][i] = tmp;
            }
        }
        // step 7
        for(int i = 0; i < 4; ++i)
        {
            for(int j = 0; j < 4; ++j)
            {
                matrix[j][i] ^= key[j][i];
            }
        }
        // step 8
        // unsigned char tmp1 = key[0][0], tmp2 = key[3][3];
        // for(int i = 0; i < 4; ++i)
        // {
        //     for(int j = 0; j < 4; ++j)
        //     {
        //         int nxti = i;
        //         int nxtj = j + 1;
        //         if(nxtj >= 4)
        //         {
        //             nxtj = 0;
        //             nxti += 1;
        //             if(nxti >= 4) nxti = 0;
        //         }
        //         key[i][j] ^= key[nxti][nxtj];
        //     }
        // }
        // key[3][3] = tmp1 ^ tmp2;
        unsigned char *cursor = key, tmp = key[0][0];
        for(int i = 0; i < 15; ++i, ++cursor)
        {
            *cursor ^= *(cursor + 1);
        }
        key[3][3] ^= tmp;
    }
    // step 10
    for(int i = 0; i < 4; ++i)
    {
        for(int j = 0; j < 4; ++j)
        {
            printf("%02x", matrix[i][j]);
        }
    }
    return 0;
}