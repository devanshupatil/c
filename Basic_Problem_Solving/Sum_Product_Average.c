#include <stdio.h>

int Work(int x, int y, int *Sum, int *Product, int *Average); // Function dectaration

int main() // Function call
{
    int x = 3;
    int y = 5;

    int Sum, Product, Average;

    Work(x, y, &Sum, &Product, &Average); // calling the function defin

    printf("Sum = %d & Product = %d & Average = %d \n", Sum, Product, Average); // Printing the function defin

    return 0; // Exit the program
}

int Work(int x, int y, int *Sum, int *Product, int *Average) // Function defin
{
    *Sum = x + y;           // Sum of two variable store in address of sum
    *Product = x * y;       // Product of two variable store in address of Product
    *Average = (x + y) / 2; // Avarage of two variable store in address of Average
}
