#include <stdio.h>

int main(void)
{
    int T; // Denoting the numbar of tast case
    int N; // Number

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &N);
        int count = 0;

        while (N != 7) // If N is not equal to 7
        {
            N += 1;  // In N add by one
            count++; // Count add by one
        }

        printf("%d\n", count); // Print 'count'
    }
    return 0; // Exit the program
}
