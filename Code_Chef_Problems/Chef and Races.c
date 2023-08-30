#include <stdio.h>

int main(void)
{
    int T;    // Denoting the number of tast case
    int X, Y; // The races that Chef participates
    int A, B; // The races that Chef's arch-rival participates
    int count;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d %d", &X, &Y, &A, &B);

        count = 0;

        if (X != A && X != B) // If X is not equal to A and X is not equal to B
        {
            count++; // If true , count by one

            if (Y != A && Y != B) // If Y is not equal to A and Y is not equal to B
            {
                count++; // If true , count by one
            }
        }
        else if (Y != A && Y != B) // If Y is not equal to A and Y is not equal to B
        {
            count++; // If true , count by one
        }

        printf("%d\n", count); // print count
    }
    return 0; // Exit the program
}
