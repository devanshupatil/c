#include <stdio.h>

int digit(int n); // Function declaration

int main() // Function call
{
    int n;

    printf("Enter number :");
    scanf("%d", &n); // input

    printf("Sum of digit = %d", digit(n)); // Printing the function defin

    return 0; // Exit the program
}

int digit(int n) // Function defin
{
    int sum = 0;

    while (n != 0) // If n equal to zero then program exit
    {
        sum += n % 10; // // Adding the last digit to the sum

        n /= 10; // // Removeing the last digit from the number
    }
    return sum;
}