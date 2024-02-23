#include <stdio.h>

int main(void)
{
    int T;       // Denoting the number of tast case
    int A, B, C; // Election parties

    scanf("%d", &T);

    while (T--) // Run each ats case
    {
        scanf("%d %d %d", &A, &B, &C);

        if (A > 50)
        {
            printf("A\n"); // If true, print 'A'
        }
        else if (B > 50) // If B is more tha 50
        {
            printf("B\n"); // If true, print 'B'
        }
        else if (C > 50) // If C is more than 50
        {
            printf("C\n"); // If true, print 'C'
        }
        else
        {
            printf("NOTA\n"); // If false, print 'NOTA'
        }
    }
    return 0; // Exit the program
}
