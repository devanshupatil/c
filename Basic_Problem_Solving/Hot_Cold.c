#include <stdio.h>

int Hot_Cold(int n); // Function declaration

int main() // Functiom call
{
    int n;

    printf("Enter number :");
    scanf("%d", &n); // input

    Hot_Cold(n); // calling the function defin

    return 0; // Exit the program
}

int Hot_Cold(int n) // Function defin
{
    if (n >= 100) // If the input is less than equal to 100 temperature
    {
        printf("Hot \n"); // If true , print 'Hot'
    }
    else
    {
        printf("Cold \n"); // If false , print 'Cold'
    }
}