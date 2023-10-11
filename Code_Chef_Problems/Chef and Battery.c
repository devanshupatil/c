#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N; // The current battery level

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &N);
        int battery = 0;
        int count = 0;

        battery = N;          // Assign current battery level
        while (battery != 50) // If battery level is not equal to 50
        {
            count++;          // Add by one
            if (battery < 50) // If battery level is less than 50
            {
                battery += 2; // If true, add by 2
            }
            else if (battery > 50) // If battery level is more than 50
            {
                battery -= 3; // If false, Subtract by 3
            }
        }
        printf("%d\n", count); // print count
    }
    return 0; // Exit the program
}
