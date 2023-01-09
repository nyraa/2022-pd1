#include <stdio.h>
#define pos(a, x, y) a[(x) * 8 + (y)]

int main()
{
    // board[value] = pos
    int board[256];
    // picked[pos] = pick?;
    int picked[64] = {0};
    int value, score = 0, pos;
    int x_sum, y_sum, cross_sum1 = 0, cross_sum2 = 0;
    for(int i = 0; i < 256; ++i)
        board[i] = -1;
    for(int i = 0; i < 64; ++i)
    {
        scanf("%d", &value);
        board[value - 1] = i;
    }
    for(int i = 0; i < 64; ++i)
    {
        scanf("%d", &value);
        pos = board[value - 1];
        if(pos == -1) continue;
        picked[pos] = 1;
    }
    for(int x = 0; x < 8; ++x)
    {
        x_sum = y_sum = 0;
        for(int y = 0; y < 8; ++y)
        {
            x_sum += pos(picked, x, y);
            y_sum += pos(picked, y, x);
        }
        score += x_sum / 8 + y_sum / 8;
    }
    for(int i = 0; i < 8; ++i)
    {
        cross_sum1 += pos(picked, i, i);
        cross_sum2 += pos(picked, 7 - i, i);
        score += cross_sum1 / 8 + cross_sum2 / 8;
    }
    printf("%d", score);
    return 0;
}