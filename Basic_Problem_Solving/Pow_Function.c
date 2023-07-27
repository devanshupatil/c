#include <stdio.h>

int Function(int X, int Y); // Function declaration

int main() // Function call
{
    int X; // The number
    int Y; // The number of power

    printf("Enter number and power of number :");
    scanf("%d %d", &X, &Y); // input

    printf("Power of number = %d", Function(X, Y)); // Priting the function defin

    return 0; // Exit the program
}

int Function(int X, int Y) // Function defin
{
    int power = X; // assing the input of x

    for (int i = 0; i < Y - 1; i++) // To run each number of power minus 1
    {
        if (X != 0) // If input is not equal to 0
        {
            power *= X; // calculating the number of power
        }
    }

    return power;
}