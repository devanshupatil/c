#include <stdio.h>

struct Vectore // Difine structure
{
    int X; // Vectore 1 value
    int Y; // Vectore 2 value
};

void VectoreSum(struct Vectore v1, struct Vectore v2, struct Vectore sum); // Function declare

int main() // Function call
{
    struct Vectore v1 = {12, 1}; // assigning the vectore 1 value
    struct Vectore v2 = {5, 4};  // assigning the vectore s value
    struct Vectore sum = {0};    // // assigning the sum value

    VectoreSum(v1, v2, sum); // Calling the function difine

    return 0; // Exit the program
}

void VectoreSum(struct Vectore v1, struct Vectore v2, struct Vectore sum)
{
    sum.X = v1.X + v2.X; // Calculating the sum of vectore 1 value
    sum.Y = v1.Y + v2.Y; // Calculating the sum of vectore 2 value

    printf("Sum of vectore 1 is : %d\n", sum.X); // Printing the sum of vectore 1
    printf("Sum of vectore 2 is : %d\n", sum.Y); // Printing the sum of vectore 2
}