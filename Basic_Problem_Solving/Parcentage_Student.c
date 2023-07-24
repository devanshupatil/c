#include <stdio.h>

double TotalMarks(double math, double science, double sanskrit); // Function declaration

int main() // Function call
{

    printf(" Parcentage of student = %f", TotalMarks(98, 95, 99)); // Calling the function of definition

    return 0;
}

double TotalMarks(double math, double science, double sanskrit) // Function definition
{
    double sum = math + science + sanskrit; // added the all subject in sum

    sum = sum / 3; // divide sum of total sunject

    return sum;
}