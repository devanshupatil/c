#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int X; // Number of stair
    int Y; // Number of steps

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d", &X, &Y);

        printf("%d\n", (X / Y) + (X % Y)); // Added quotient and remainder
    }

    return 0; // Exit the progarm
}
