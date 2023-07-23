#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of test cases
    int X; // daily goal of sell chocolates
    int Y; // The number of chocolates actually sells
    int multiply = 0;
    int subtrac = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // The run each tast case
    {
        scanf("%d %d", &X, &Y);

        if (X >= Y) // The goal of sell chocolates is equal and more than number of chocolates actually sells
        {
            printf("%d \n", Y); // If true , print 'Y'
        }

        else if (X < Y) // The goal of sell chocolates is more than number of chocolates actually sells
        {
            subtrac = Y - X; // Subtrac the goal of sell chocolates to number of chocolates actually sells

            multiply = subtrac * 2; // The answer of subtrac multiply with 2

            printf("%d \n", multiply + X); // If true , print 'Added X to the answer of multiply '
        }
    }
    return 0; // Exit the program
}
