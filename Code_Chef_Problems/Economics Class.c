#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N; // Market data of time point

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &N);

        int Supply[N];
        int Demand[N];
        int count = 0;

        for (int j = 0; j < N; j++)
        {
            scanf("%d", &Supply[j]);
        }

        for (int k = 0; k < N; k++)
        {
            scanf("%d", &Demand[k]);
        }

        for (int l = 0; l < N; l++)
        {
            if (Supply[l] == Demand[l]) // If supply of each index is equal to demond of each index
            {
                count++; // If true , count add by one
            }
        }

        printf("%d\n", count); // Print count
    }
    return 0; // Exit the program
}
