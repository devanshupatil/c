#include <stdio.h>

int SquareRoot(int n); // Function declaration

int main() // Function call
{
    int n;

    printf("Eter number :");
    scanf("%d", &n); // input

    printf("Square root of %d is %d", n, SquareRoot(n)); // priting the function defin

    return 0; // Exit the program
}

int SquareRoot(int n) // Function defin
{
    int root = n * n; // Calculating the square root

    return root;
}