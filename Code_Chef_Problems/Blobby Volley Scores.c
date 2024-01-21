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

        getchar();
        for (int j = 0; j < N; j++)
        {
            scanf("%c", &S[j]);
        }
        /*
         Alice is the server, and Bob is the receiver. If the server wins the point in this turn, their
         score increases by 1, and they remain as the server for the next turn.But if the receiver wins
         the point in this turn, their score does not increase. But they become the server in the next turn.
        */

        char current_server = 'A';

        for (int k = 0; k < N; k++)
        {
            if (current_server == S[k]) // If current server value is equal to string of kth index value
            {
                current_server = S[k];     // Assign string of kth index value into current server
                if (current_server == 'A') // If current server id equal to A
                {
                    Alice++; // If true, add by one
                }
                else
                {
                    Bob++; // If false, add by one
                }
            }
            else
            {
                current_server = S[k]; // Assign string of kth index value into current server
            }
        }

        printf("%d %d\n", Alice, Bob); // Print alice and bob score
    }

    return 0; // Exit the program
}
