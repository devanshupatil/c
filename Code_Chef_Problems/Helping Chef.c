#include <stdio.h>

int main(void)
{
    int T; // Denoting the number if tast case
    int N;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &N);

        if (N < 10) // If number is less than 10
        {
            printf("Thanks for helping Chef!\n"); // If true , print 'Thanks for helping Chef!'
        }
        else
        {
            printf("-1\n"); // If false , print '-1'
        }
    }
    return 0; // Exit the program
}
