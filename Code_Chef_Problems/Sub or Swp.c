#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int X, Y;
    int temp = 0;

    scanf("%d", &T);

    while (T--) // Run each tast case
    {
        scanf("%d %d", &X, &Y);

        while (X)
        {
            if (X > Y) // If X is more than Y
            {
                temp = 0; // If true, Assign '0' into temp
                temp = X; // Assign X value into temp
                X = Y;    // Assign Y  value into X
                Y = temp; // Assign temp value into Y
            }
            else
            {
                Y = Y % X; // Assign Y modulo X into Y
            }
        }
        printf("%d\n", Y); // Print Y value
    }
    return 0; // Exit the program
}
