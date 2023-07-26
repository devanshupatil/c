#include <stdio.h>

int fib(int n); // Function declared

int main() // Function call
{
    int n;

    printf("Enter number :");
    scanf("%d", &n); // input

    printf("Fibonacci number = %d \n", fib(n)); // Print the function diffine
}

int fib(int n) // Function diffine
{
    if (n == 0) // if the input is 0
    {
        return 0; // If true , 'Then exit the program'
    }
    if (n == 1) // If the input is 1
    {
        return 1; // If true , 'The return 1'
    }

    int fibN1 = fib(n - 1);   // First Subtract input into 1
    int fibN2 = fib(n - 2);   // second Subtract input into 2
    int fibN = fibN1 + fibN2; // sum of first and second
}