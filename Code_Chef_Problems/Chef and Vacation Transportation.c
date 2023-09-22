#include <stdio.h>

int main(void)
{
    int T;    // Denoting the number of tast case
    int X, Y; // First route
    int Z;    // Second route

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d", &X, &Y, &Z);

        if (X + Y > Z) // If first route time is more than second route time
        {
            printf("TRAIN\n"); // If true, print 'TRAIN'
        }
        else if (X + Y < Z) // If first route time is less than second route time
        {
            printf("PLANEBUS\n"); // If true, print 'PLANEBUS'
        }
        else
        {
            printf("EQUAL\n"); // If false, print 'EQUAL'
        }
    }
    return 0; // Exit the program
}
