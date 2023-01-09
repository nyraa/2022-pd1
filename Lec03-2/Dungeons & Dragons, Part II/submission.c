#include <stdio.h>

int main()
{
    int d[6];
    int i;
    int dragon = 100, player = 100;
    while(dragon > 0 && player > 0)
    {
        for(i = 0; i < 6; ++i)
        {
            scanf("%d", &d[i]);
        }
        if(((d[0] + d[1] + d[2]) & 1) == 1) // odd player's turn
        {
            if(d[5] > d[4] && d[4] > d[3])
            {
                // player critical hit
                dragon -= 25;
            }
            else if((d[3] & 1) == (d[4] & 1) || (d[4] & 1) == (d[5] & 1))
            {
                // //player normal hit
                dragon -= 5;
            }
        }
        else // dragon's turn
        {
            if(d[3] - d[4] > d[5] || - (d[3] - d[4]) > d[5])
            {
                // dragon critical hit
                player -= 15;
            }
            else if(d[3] + d[4] != d[5])
            {
                // dragon normal hit
                player -= 5;
            }
        }
    }
    if(player <= 0) printf("Dragon wins");
    else printf("Player wins");
    return 0;
}