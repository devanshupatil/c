#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int A, B;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d", &A, &B);

        if (A > 0 && B > 0) // If A and B is more than 0
        {
            printf("Solution\n"); // If true , print 'Solution'
        }
        else if (B == 0) // If B is eqaul to 0
        {
            printf("Solid\n"); // If true , print 'Solid'
        }
        else if (A == 0) // If A is eqaul to 0
        {
            printf("Liquid\n"); // If true, print 'Liquid'
        }
    }
    return 0; // Exit the program
}
