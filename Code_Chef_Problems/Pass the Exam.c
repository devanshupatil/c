#include <stdio.h>

int main(void)
{
    int T;       // Denoting the number of test cases
    int A, B, C; // Chef's score in each of the sections
    int sum = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // The run each tast case
    {
        scanf("%d %d %d", &A, &B, &C);

        sum = A + B + C; // The total of each sections

        if (sum >= 100) // The total of each sections is equal and more than 100
        {
            if (A >= 10 && B >= 10 && C >= 10) // The each tast case is equal and more than 10
            {
                printf("PASS \n"); // If true, print 'PASS'
            }

            else
            {
                printf("FALI \n"); // If false , print 'FAIL'
            }
        }

        else
        {
            printf("FAIL \n"); // If the total of each sections is not equal and more than 100 , print 'FAIL'
        }
    }

    return 0; // Exit the program
}
