#include <stdio.h>

int main()
{
    int arr[100] = {0};
    int T; // Denoting the number of tast case
    int N; // Denoting the number input
    int count;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        count = 0;

        scanf("%d", &N);

        for (int j = 0; j < N; j++) // Take each input
        {
            scanf("%d", &arr[j]);
        }

        for (int k = 0; k < 100; k++) // Run each array of index
        {
            if (arr[k] >= 1000) // If the array of each index value is more than 1000
            {
                count++; // If true , count the number
            }
        }
        printf("%d \n", count); // printing the count of more than 1000
    }

    return 0; // Exit the program
}