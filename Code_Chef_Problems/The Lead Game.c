#include <stdio.h>

int main(void)
{
    int Scoredif[1000] = {0};
    int Scoredif2[1000] = {0};
    int N;      // Denoting the number of round in a game
    int Score1; // Score of Player 1
    int Score2; // Score of player 2
    int temp = 0;
    int lead = 0;
    int leader = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) // Run each Round
    {
        scanf("%d %d", &Scoredif[i], &Scoredif2[i]);

        temp = Scoredif[i] - Scoredif2[i]; // Score diffrence of two players

        if (temp > lead) // If the score diffrence is more than lead
        {
            lead = temp; // If true , assigning the score diffrence of two players

            if (temp > 0) // score diffrence is more than 0
            {
                leader = 1; // If true , assigning the 1 into variable leader
            }
            else
            {
                leader = 2; // If false , assigning the 2 into variable leader
            }
        }
    }
    printf("Winner is %d lead is %d", leader, lead); // Printing the winner player and lead of that player

    return 0; // Exit the program
}
