#include <stdio.h>
#include <string.h>
#define MOV "PATA PATA PATA PON"
#define ATK "PON PON PATA PON"
#define DEF "CHAKA CHAKA PATA PON"
#define FIN() printf("NO %d", hp)

int main()
{
    int dist, hp, round = 0, cmd_count = 0;
    scanf("%d %d\n", &dist, &hp);
    while(1)
    {
        char act[100];
        _Bool def_flag = 0;
        scanf("%[^,.\n]", act);
        cmd_count += 1;
        if(!strcmp(act, MOV))
        {
            dist -= 1;
            if(dist <= 0)
            {
                FIN();
                return 0;
            }
            // printf("MOV %d\n", dist);
        }
        else if(!strcmp(act, ATK))
        {
            if(dist <= 3)
            {
                hp -= 1;
                if(hp <= 0)
                {
                    printf("YES %d", cmd_count);
                    return 0;
                }
            }
            // printf("ATK failed\n");
        }
        else if(!strcmp(act, DEF))
        {
            dist += 1;
            def_flag = 1;
            // printf("DEF\n");
        }
        else
        {
            // unacceptable command
            cmd_count -= 1;
            // printf("UNKNOWN\n");
        }
        round += 1;
        if(round % 10 == 0)
        {
            // monster atk
            if(!def_flag)
            {
                FIN();
                return 0;
            }
        }
        if(getchar() == '\n') break;
    }
    FIN();
    return 0;
}