#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N, K;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d", &N, &K);

        int arr[N];
        int count = 0;

        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[j]);

            arr[j] = arr[j] + K; // Add each index K

            if (arr[j] % 7 == 0) // If array of index value is divisible by 7
            {
                count++; // If true , count by one
            }
        }

        printf("%d\n", count); // Print count
    }
    return 0; // Exit the program
}
