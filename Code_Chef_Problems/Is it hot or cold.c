#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of test cases
    int C; // The remperature

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // The run each tast case
    {
        scanf("%d", &C);

        if (C > 20) // If the temperature is more than 20
        {
            printf("HOT \n"); // if true, print 'HOT'
        }

        else
        {
            printf("COLD \n"); // if false, print 'COLD'
        }
    }
    return 0;
}