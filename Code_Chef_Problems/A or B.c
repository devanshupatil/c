#include <stdio.h>

int main(void)
{
    int T;    // Denoting the number of tast case
    int X, Y; // The time required to solve problems A and B in minutes
    int A, B;
    int A1, B1;
    int Total_points;
    int Total_points2;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d", &X, &Y);
        A = 0;
        B = 0;
        A1 = 0;
        B1 = 0;
        Total_points = 0;
        Total_points2 = 0;

        // The first order is A -> B

        A = 500 - (X * 2);        // Calculating the points of first problem
        B = 1000 - ((X + Y) * 4); // Calculating the points of second problem
        Total_points = A + B;     // Assinging the sum of first problem points and second problem points

        // The second order is B -> A

        B1 = 1000 - (Y * 4);      // Calculating the points of second problem
        A1 = 500 - ((X + Y) * 2); // Calculating the points of first problem
        Total_points2 = A1 + B1;  // Assinging the sum of first problem points and second problem points

        if (Total_points > Total_points2) // If first order points is more than second order points
        {
            printf("%d\n", Total_points); // If true , print 'First order points'
        }
        else
        {
            printf("%d\n", Total_points2); // If false , print 'Second order points'
        }
    }
    return 0; // Exit the program
}
