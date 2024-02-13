#include <stdio.h>

int main(void)
{
    int T; // Demoting the number of tast case
    int N;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &N);

        for (int j = 0; j < N; j++)
        {
            if (j == 0 || j == N - 1) // If j is equal to '0' or j is equal to 'n-1'
            {
                printf("1"); // If true, print '1'
            }
            else
            {
                printf("0"); // If false, print '0'
            }
        }

        printf("\n"); // Next line
    }

    return 0; // Exit the program
}
