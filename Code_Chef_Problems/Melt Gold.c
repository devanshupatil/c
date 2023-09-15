#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int X; // The melting point of the ore
    int Y; // The initial temperature of kiln

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d", &X, &Y);

        int minutes = 0;
        int melting_point = Y;

        while (X != 0) // If X is not equal to 0
        {
            if (X <= melting_point) // If X is greater than or equal to melting point
            {
                printf("%d\n", minutes); // If true , print 'mintes'
                break;                   // Exit the loop
            }
            minutes++;                // add by one
            melting_point += minutes; // Add minutes
        }
    }
    return 0; // Exit the program
}