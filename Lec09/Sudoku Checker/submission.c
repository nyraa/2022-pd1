void check_sudoku(int (*grid_p)[NUM])
{
    int report[NUM][NUM] = {0};
    // check chunk
    for(int i = 0; i < NUM / 3; ++i) // chunk row
    {
        for(int j = 0; j < NUM / 3; ++j) // chunk column
        {
            int nums[NUM + 1] = {0};
            // counts number
            for(int k = 3*i; k < 3*i + 3; ++k)
            {
                for(int l = 3*j; l < 3*j + 3; ++l)
                {
                    nums[grid_p[k][l]] += 1;
                }
            }
            // find > 1
            for(int k = 1; k < NUM + 1; ++k)
            {
                if(nums[k] > 1)
                for(int m = 3*i; m < 3*i + 3; ++m)
                {
                    for(int n = 3*j; n < 3*j + 3; ++n)
                    {
                        if(grid_p[m][n] == k)
                        {
                            report[m][n] = 1;
                        }
                    }
                }
            }
        }
    }
    // check rows/columns
    for(int i = 0; i < NUM; ++i)
    {
        int nums_row[NUM + 1] = {0};
        int nums_col[NUM + 1] = {0};
        for(int j = 0; j < NUM; ++j)
        {
            nums_row[grid_p[i][j]] += 1;
            nums_col[grid_p[j][i]] += 1;
        }
        for(int k = 1; k < NUM + 1; ++k)
        {
            if(nums_row[k] > 1)
            {
                for(int n = 0; n < NUM; ++n)
                {
                    if(grid_p[i][n] == k)
                    {
                        report[i][n] = 1;
                    }
                }
            }
            if(nums_col[k] > 1)
            {
                for(int m = 0; m < NUM; ++m)
                {
                    if(grid_p[m][i] == k)
                    {
                        report[m][i] = 1;
                    }
                }
            }
        }
    }
    for(int i = 0; i < NUM; ++i)
    {
        for(int j = 0; j < NUM; ++j)
        {
            if(report[i][j])
                printf("(%d,%d)\n", i, j);
        }
    }
}