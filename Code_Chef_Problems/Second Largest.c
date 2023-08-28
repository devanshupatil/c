#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int A, B, C;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d", &A, &B, &C);

        if (A > B && A < C || A > C && A < B) // If A greater than B and C or A less than B and A greater C
        {
            printf("%d\n", A); // If true , print 'A'
        }
        else if (B > A && B < C || B < A && B > C) // If B greater than A and B less than C or B less than A and B greater C
        {
            printf("%d\n", B); // If true , print 'B'
        }
        else
        {
            printf("%d\n", C); // If false , print 'C'
        }
    }
    return 0; // Exit the program
}
