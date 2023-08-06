#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int X; // Number of mushrooms

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &X);

        X %= 3;

        if (X == 0) // If the X is equal to zero
        {
            printf("NORMAL\n"); // If true , print 'NORMAL'
        }
        else if (X == 1) // If X is equal to 1
        {
            printf("HUGE\n"); // If true , print 'HUGE'
        }
        else
        {
            printf("SMALL\n"); // If false , print 'SMALL'
        }
    }

    return 0; // Exit the program
}
