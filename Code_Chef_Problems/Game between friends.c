#include <stdio.h>

int main(void)
{
    int T;    // Denoting the number of tast case
    int A, B; // Nitin and Sobhagya coins
    int C, D; // Ritik and Satyarth coins

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d %d", &A, &B, &C, &D);

        if (A >= B) // If A is more than or equal to B
        {
            B += C;     // If true, add C coins into B
            if (A >= B) // If A is more than or equal to B
            {
                B += D; // If true, add D coins into B
            }
            else
            {
                A += D; // If false, Add D coins into A
            }
        }
        else if (B > A) // If B is more than A
        {
            A += C;    // If true, Add C coins into A
            if (B > A) // If B is more than A
            {
                A += D; // If true, Add D coins into A
            }
            else
            {
                B += D; // If false, Add D coins into B
            }
        }

        if (A >= B) // If A is more than or equal to B
        {
            printf("N\n"); // If true, print 'N'
        }
        else
        {
            printf("S\n"); // If false, print 'S'
        }
    }
    return 0; // Exit the program
}
