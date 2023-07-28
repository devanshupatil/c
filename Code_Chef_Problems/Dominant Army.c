#include <stdio.h>

int main(void)
{
    int T;       // Denoting the number of tast case
    int A, B, C; // The number of warriors in the armies

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d", &A, &B, &C);

        if ((A + B) < C || (B + C) < A || (C + A) < B) // The sum of two army is less then thrid aramy
        {
            printf("Yes \n"); // If true , print 'Yes'
        }
        else
        {
            printf("No \n"); // If false , print 'No'
        }
    }

    return 0; // Exit the program
}
