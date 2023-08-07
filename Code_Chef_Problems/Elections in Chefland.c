#include <stdio.h>

int main(void)
{
    int arr[100];
    int T; // Denoting the number of thast case
    int N; // Number of people in chefland
    int X; // The minimum age required for a person to vote in chefland
    int count = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d", &N, &X);

        count = 0; // The one tast case complete then assign count equal to 0

        for (int j = 0; j < N; j++) // Read each input
        {
            scanf("%d", &arr[j]);

            if (arr[j] >= X) // If the array of j is more than equal to X
            {
                count++; // If true , count one
            }
        }

        printf("%d \n", count); // Print count
    }

    return 0; // Exit the program
}
