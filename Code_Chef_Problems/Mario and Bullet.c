#include <stdio.h>

int main()
{
    int T; // Denoting the number of tast case
    int X; // Mario's bullet moves pixels
    int Y; // Goomba standing away from mario pixels
    int Z; // Goomba after at least seconds
    int divide = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d", &X, &Y, &Z);

        divide = Y / X; // Calculating the speed of bullet
        Z = Z - divide; // Calcilating the mario fire bullet in seconds

        printf("%d\n", Z); // Printing the mario fire bullet goomba after at least seconds
    }

    return 0; // Exit the program
}
