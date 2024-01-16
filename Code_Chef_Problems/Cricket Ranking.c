#include <stdio.h>

int main(void)
{
    int T;          // Denoting the number of tast case
    int R1, W1, C1; // First player Performance
    int R2, W2, C2; // Second player Performance

    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d", &R1, &W1, &C1);
        scanf("%d %d %d", &R2, &W2, &C2);

        int A = 0; // First player score
        int B = 0; // Second player score

        if (R1 > R2) // If first player runs is more than second player runs
        {
            A++; // If true, Add by one
        }
        else
        {
            B++; // If false, Add by one
        }

        if (W1 > W2) // If first player wickets is more than second player wickets
        {
            A++; // If true, Add by one
        }
        else
        {
            B++; // If false, Add by one
        }

        if (C1 > C2) // If first player catches is more than second player catches
        {
            A++; // If true, Add by one
        }
        else
        {
            B++; // If false, Add by one
        }

        if (A > B) // If  First player score is more than second palyer score
        {
            printf("A\n"); // If true, print 'A'
        }
        else
        {
            printf("B\n"); // If false, print 'B'
        }
    }
    return 0; // Exit the program
}
