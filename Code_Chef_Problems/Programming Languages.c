#include <stdio.h>

int main(void)
{
    int T;      // Denoting the number of tast case
    int A, B;   // Language features
    int A1, B1; // First Language features
    int A2, B2; // Second Language features

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d %d %d %d", &A, &B, &A1, &B1, &A2, &B2);

        if (A == A1 || A == B1) // If Language features is equal to first Language features
        {
            if (B == A1 || B == B1) // If true , If Language features is equal to first Language features
            {
                printf("1\n"); // If true , print '1'
            }
            else
            {
                printf("0\n"); // If false , print '0'
            }
        }
        else if (A == A2 || A == B2) // If Language features is equal to second Language features
        {
            if (B == A2 || B == B2) // If true , If Language features is equal to first Language features
            {
                printf("2\n"); // If true , print '2'
            }
            else
            {
                printf("0\n"); // If false , print '0'
            }
        }
    }
    return 0; // Exit the program
}
