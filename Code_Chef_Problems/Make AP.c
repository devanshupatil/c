#include <stdio.h>

int main(void)
{
    int T;    // Denoting the number of tast case
    int A, C; // The given integer
    int sum = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d", &A, &C);

        sum = (A + C) / 2; // Sum of given integer divide by 2

        if (A % 2 == C % 2) // If the modulo A i equal to modulo of C
        {
            printf("%d\n", sum); // If true , print 'sum'
        }
        else
        {
            printf("-1\n"); // If false , print '-1'
        }
    }
    return 0; // Exit the program
}
