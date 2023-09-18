#include <stdio.h>

int main(void)
{
    int T;    // Denoting the number of tast case
    int A, B; // Integers

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d", &A, &B);

        if ((A + B) < 3) // If Addition of A & B is more than 3
        {
            printf("1\n"); // If true, print '1'
        }
        else if (3 <= (A + B) && (A + B) <= 10) // If Addition of A & B is more than equal to 3 and less than eqaul to 10
        {
            printf("2\n"); // If true , print '2'
        }
        else if (11 <= (A + B) && (A + B) <= 60) // If Addition of A & B is more than equal to 11 and less than eqaul to 60
        {
            printf("3\n"); // If true, print '3'
        }
        else
        {
            printf("4\n"); // If false, print '4'
        }
    }
    return 0; // Exit the program
}
