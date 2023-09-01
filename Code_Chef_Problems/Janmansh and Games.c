#include <stdio.h>

int main(void)
{
    int T;    // Denoting thenumber of tast case
    int X, Y; // The starting number and the total number of moves

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d", &X, &Y);

        if (Y % 2 == 0) // If the total number of moves is even
        {
            for (int j = 0; j < Y; j++) // If true , Run each number of moves
            {
                X++; // Add by one
            }
        }
        else
        {
            for (int k = 0; k < Y; k++) // If false , Run each number of moves
            {
                X--; // subtract by one
            }
        }

        if (X % 2 == 0) // If X is even
        {
            printf("Janmansh\n"); // If true , print 'Janmansh'
        }
        else
        {
            printf("Jay\n"); // If false , print 'Jay'
        }
    }
    return 0; // Exit the program
}
