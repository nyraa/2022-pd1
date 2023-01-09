#include <stdio.h>

typedef int Strength;
typedef int Obedience;

#define INIT_STRENGTH 50
#define INIT_OBEDIENCE 20

#define STRENGTH_EAT 5
#define OBEDIENCE_EAT 2

#define STRENGTH_TRAIN 4
#define OBEDIENCE_TRAIN 5

#define LEARN_STRENGTH 55
#define LEARN_OBEDIENCE 28

int main()
{
    Strength strength = INIT_STRENGTH;
    Obedience obedience = INIT_OBEDIENCE;
    int learned_commands = 0;
    char do_things;
    while((do_things = getchar()) != '\n')
    {
        switch(do_things)
        {
            case 'e':
                strength += STRENGTH_EAT;
                obedience -= OBEDIENCE_EAT;
                break;
            case 't':
                strength -= STRENGTH_TRAIN;
                obedience += OBEDIENCE_TRAIN;
                break;
        }
        if(obedience >= LEARN_OBEDIENCE && strength <= LEARN_STRENGTH)
        {
            ++learned_commands;
            obedience = INIT_OBEDIENCE;
            if(learned_commands >= 5)
            {
                printf("Yes");
                return 0;
            }
        }
    }
    printf("No");
    return 0;
}