#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int A1, A2, A3;
    int B1, B2, B3;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d %d %d %d", &A1, &A2, &A3, &B1, &B2, &B3);

        int max1 = 0;
        int max2 = 0;

        max1 = fmax(fmax(A1 + A2, A1 + A3), A2 + A3); // Alice largest score
        max2 = fmax(fmax(B1 + B2, B2 + B3), B1 + B3); // Bob largest score

        if (max1 > max2) // If Alice largest score is more than Bob largest score
        {
            printf("Alice\n"); // If true , print 'Alice'
        }
        else if (max1 < max2) // If Alice largest score is less than Bob largest score
        {
            printf("Bob\n"); // If true , print 'Bob'
        }
        else
        {
            printf("Tie\n"); // If false , print 'Tie'
        }
    }
    return 0; // Exit the program
}
