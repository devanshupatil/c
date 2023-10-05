#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int X; // Number of seconds
    int count;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &X);
        count = 0;

        while (count != X) // if Count is not to X
        {
            count++;        // Count increase by one
            if (count == X) // if Count is equal to X
            {
                printf("East\n"); // if Count is equal to X
                break;            // Exit the loop
            }
            count++;        // Count increase by one
            if (count == X) // if Count is equal to X
            {
                printf("South\n");
                break; // Exit the loop
            }
            count++;        // Count increase by one
            if (count == X) // if Count is equal to X
            {
                printf("West\n");
                break; // Exit the loop
            }
            count++;        // Count increase by one
            if (count == X) // if Count is equal to X
            {
                printf("North\n");
                break; // Exit the loop
            }
        }
    }
    return 0; // Exit the program
}
