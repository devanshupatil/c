#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N; // The number of seats

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tase case
    {
        scanf("%d", &N);

        if (N <= 10) // If the number of seats is less than equal to 10
        {
            printf("Lower Double\n"); // If true , print 'Lower Double'
        }
        else if (N <= 15) // If the number of seats is less than equal to 15
        {
            printf("Lower Single\n"); // If true , print 'Lower Single'
        }
        else if (N <= 25) // If the number of seats is less than equal to 25
        {
            printf("Upper Double\n"); // If true , print 'Upper Double'
        }
        else if (N <= 30) // If the number of seats is less than equal to 30
        {
            printf("Upper Single\n"); // If true , print 'Upper Single'
        }
    }
    return 0; // Exit the program
}
