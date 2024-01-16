#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T; // Denoting the number of tast case
    int N; // Number of turns of game

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);
        char S[N]; // Players turns

        int Alice = 0;
        int Bob = 0;

        for (int j = 0; j < N; j++)
        {
            getchar();
            scanf("%c", &S[j]);
        }
        /*
         Alice is the server, and Bob is the receiver. If the server wins the point in this turn, their
         score increases by 1, and they remain as the server for the next turn.But if the receiver wins
         the point in this turn, their score does not increase. But they become the server in the next turn.
        */
        if (S[0] == 'A' && S[1] == 'B')
        {
            Alice++;
        }
        for (int k = 0; k < N; k++)
        {
            if (S[k] == 'A' && S[k + 1] == 'A' || S[k] == 'A' && S[k + 1] == 'B' && S[k - 1] == 'A') // If string of kth index value is 'A' and kth next index value is 'A' or  string of kth index value is 'A' and kth next index value is 'B' and kth previous index value is 'A'
            {
                Alice++; // If true, Add by one
            }
            else if (S[k - 1] == 'A' && S[k] == 'A') // If string of kth previous index value is 'A' and kth index value is 'A'
            {
                Alice++; // If true, Add by one
            }
            else if (S[k] == 'B' && S[k + 1] == 'B' && S[k - 1] == 'B') // If string of kth index value is 'B' and kth next index value is 'B' and kth previous index value is 'B'
            {
                Bob++; // If true, Add by one
            }
            else if (S[k - 1] == 'B' && S[k] == 'B') // If string of kth previous index value is 'B' and kth index value is 'B'
            {
                Bob++; // If true, Add by one
            }
        }

        printf("%d %d\n", Alice, Bob); // Print alice and bob score
    }

    return 0; // Exit the program
}
