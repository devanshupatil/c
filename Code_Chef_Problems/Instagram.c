#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of test cases
    int X; // The count of following
    int Y; // The count of followers

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // the run each tast case
    {
        scanf("%d %d", &X, &Y);

        if (X > 10 * Y) // The following count of account is more than 10 times the count of followrs
        {
            printf("YES \n"); // if true, print'YES'
        }

        else
        {
            printf("NO \n"); // if false, print 'NO'
        }
    }
    return 0; // Exit the program
}