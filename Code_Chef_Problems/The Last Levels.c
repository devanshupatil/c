#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int X; // Number of levels remaining
    int Y; // Number of minutes to complete each levels takes
    int Z; // Number of minutes break from playing

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d", &X, &Y, &Z);

        int gap = 0;

        if (X % 3 == 0) // If number of levels remaining divide by 3 and equal to 0
        {
            gap = (X / 3) - 1; // If true , number of levels remaining divide by 3 and - 1
        }
        else
        {
            gap = X / 3; // If false , number of levels remaining divide by 3
        }

        printf("%d\n", (X * Y) + (gap * Z)); // Print , total time to complete the game
    }
    return 0; // Exit the program
}
