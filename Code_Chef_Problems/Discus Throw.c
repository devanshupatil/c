#include <stdio.h>

int main(void)
{
    int T;       // Denoting the number of tast case
    int A, B, C; // Denoting the distances in each throw

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d", &A, &B, &C);

        if (A > B && A > C) // If distances of first throw is more than second and third
        {
            printf("%d\n", A); // If true , print 'first distances'
        }
        else if (B >= A && B >= C) // If distances of second throw is more than first and third
        {
            printf("%d\n", B); // If true , print 'second distances'
        }
        else
        {
            printf("%d\n", C); // If false , print 'third distances'
        }
    }
    return 0; // Exit the program
}
