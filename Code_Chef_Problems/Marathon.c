#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int D, d, A, B, C;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d %d %d", &D, &d, &A, &B, &C);
        int distance_covered_by_Chef = 0;
        distance_covered_by_Chef = D * d; // The Total distance covered by Chef

        if (distance_covered_by_Chef >= 10 && distance_covered_by_Chef < 21) // If Total distance covered by Chef is more than equal to 10 and less than 21
        {
            printf("%d\n", A); // If true, print 'A value'
        }
        else if (distance_covered_by_Chef >= 21 && distance_covered_by_Chef < 42) // If Total distance covered by Chef is more than equal to 21 and less than 42
        {
            printf("%d\n", B); // If true, print 'B value'
        }
        else if (distance_covered_by_Chef == 42) // If Total distance covered by Chef is equal to 42
        {
            printf("%d\n", C); // If true, print 'C value'
        }
        else
        {
            printf("0\n"); // If false, print '0'
        }
    }
    return 0; // Exit the program
}
