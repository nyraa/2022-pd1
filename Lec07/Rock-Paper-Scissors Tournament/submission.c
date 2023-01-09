#include <stdio.h>
#define MAX_PLAYERS 1024
#define shape(player) (player_shapes[player])

char player_shapes[MAX_PLAYERS];
char round_rule[10];
int i;

int pk(int player1, int player2, int round)
{
    // printf("pk: %d %d round %d\n", player1, player2, i - round);
    if(shape(player1) == shape(player2))
    {
        // printf("round %d rule: %c", i - round, round_rule[i - round]);
        if(round_rule[i - round] == 'b') return player1 > player2 ? player1 : player2;
        else return player1 < player2 ? player1 : player2;
    }
    else if(shape(player1) > shape(player2) && (shape(player1) != 2 || shape(player2) != 0) || (shape(player1) == 0 && shape(player2) == 2)) // player1 wins
    {
        // printf("%d wins\n", player1);
        return player1;
    }
    else
    {
        // printf("%d wins\n", player2);
        return player2;
    }
}

int find_winner(int start, int end, int round)
{
    // printf("find winner: %d %d\n", start, end);
    if(end - start > 1)
    {
        return pk(find_winner(start, start + (end - start) / 2, round + 1), find_winner(start + (end - start) / 2 + 1, end, round + 1), round);
    }
    else return pk(start, end, round);
}

int main()
{
    int n, m;
    char shape;
    scanf("%d\n", &n);
    for(int j = 0; j < n; ++j)
    {
        shape = getchar();
        /*
            r: 0
            p: 1
            s: 2
        */
       player_shapes[j] = shape == 'r' ? 0 : shape == 'p' ? 1 : 2;
       // printf("%d ", player_shapes[j]);
    }
    m = n >> 1;
    getchar();
    for(i = 0; m > 0; m >>= 1, ++i)
    {
        round_rule[i] = getchar();
        // printf("round rule: %d\n", round_rule[i]);
    }
    --i;
    printf("%d", find_winner(0, n - 1, 0) + 1);
    return 0;
}